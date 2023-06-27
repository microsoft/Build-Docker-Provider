from docker import Client
from json import JSONEncoder
from platform import node

# Generates image inventory data in the same format as the provider (used in unit tests to validate OMI provider)

NUMBYTESPERMB = 1048576

c = Client(base_url="unix://var/run/docker.sock")

imageDict = c.images()
tempDict = dict()

for image in imageDict:
	result = dict()
	result["InstanceID"] = image["Id"]

	name = image["RepoTags"][-1].replace("/", ":").split(":")
	result["Image"] = name[-2]
	result["ImageTag"] = name[-1]
	result["Repository"] = name[0] if len(name) == 3 else ""
	result["Computer"] = node()
	result["Running"] = 0
	result["Stopped"] = 0
	result["Failed"] = 0
	result["Paused"] = 0
	result["Total"] = 0
	result["ImageSize"] = str(image["Size"] / NUMBYTESPERMB) + " MB"
	result["VirtualSize"] = str(image["VirtualSize"] / NUMBYTESPERMB) + " MB"

	tempDict[image["Id"]] = result

containers = c.containers(quiet = True, all = True)

for container in containers:
	inspect = c.inspect_container(container)

	if inspect["State"]["Running"]:
		if inspect["State"]["Paused"]:
			tempDict[inspect["Image"]]["Paused"] += 1
		else:
			tempDict[inspect["Image"]]["Running"] += 1
	else:
		if inspect["State"]["ExitCode"]:
			tempDict[inspect["Image"]]["Failed"] += 1
		else:
			tempDict[inspect["Image"]]["Stopped"] += 1

	tempDict[inspect["Image"]]["Total"] += 1

j = JSONEncoder()

for entry in tempDict.values():
	if entry["Total"] or (entry["Image"] != "<none>"):
	    print j.encode(entry)