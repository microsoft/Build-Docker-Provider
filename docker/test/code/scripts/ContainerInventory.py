from docker import Client
from json import JSONEncoder
from platform import node

# Generates container inventory data in the same format as the provider (used in unit tests to validate OMI provider)

c = Client(base_url="unix://var/run/docker.sock")

containers = c.containers(all = True)

imageDict = c.images()
nameDict = dict()

for image in imageDict:
	result = dict()

	name = image["RepoTags"][-1].replace("/", ":").split(":")
	result["Image"] = name[-2]
	result["ImageTag"] = name[-1]
	result["Repository"] = name[0] if len(name) == 3 else ""

	nameDict[image["Id"]] = result

j = JSONEncoder()

for container in containers:
	inspect = c.inspect_container(container)
	result = dict()

	result["Computer"] = node()

	if inspect["State"]["Running"]:
		if inspect["State"]["Paused"]:
			result["State"] = "Paused"
		else:
			result["State"] = "Running"
	else:
		if inspect["State"]["ExitCode"]:
		   result["State"] = "Failed"
		else:
		   result["State"] = "Stopped"

	result["InstanceID"] = inspect["Id"]
	result["ImageId"] = inspect["Image"]

	if len(inspect["Name"]):
		result["ElementName"] = inspect["Name"][1:] if inspect["Name"][0] == "/" else inspect["Name"]
	else:
		result["ElementName"] = ""

	result["ContainerHostname"] = inspect["Config"]["Hostname"]
	result["ExitCode"] = inspect["State"]["ExitCode"] if inspect["State"]["ExitCode"] >= 0 else 128
	result["CreatedTime"] = inspect["Created"]
	result["StartedTime"] = inspect["State"]["StartedAt"]
	result["FinishedTime"] = inspect["State"]["FinishedAt"]

	if "com.docker.compose.project" in inspect["Config"]["Labels"]:
		result["ComposeGroup"] = inspect["Config"]["Labels"]["com.docker.compose.project"]
	else:
		result["ComposeGroup"] = ""

	result["Command"] = j.encode(inspect["Config"]["Cmd"])
	result["EnvironmentVar"] = j.encode(inspect["Config"]["Env"])
	result["Ports"] = j.encode(inspect["HostConfig"]["PortBindings"])
	result["Links"] = j.encode(inspect["HostConfig"]["Links"])

	if result["Links"] == "null":
		result["Links"] = ""

	if result["EnvironmentVar"] == "null":
		result["EnvironmentVar"] = ""

	result["Image"] = nameDict[inspect["Image"]]["Image"]
	result["ImageTag"] = nameDict[inspect["Image"]]["ImageTag"]
	result["Repository"] = nameDict[inspect["Image"]]["Repository"]

	print j.encode(result)