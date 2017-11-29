# Build-Docker-Provider
Superproject for Docker-Provider Project

The following information is provided in this README file:

1. [Introduction](#introduction)
2. [Build Environment](#build-environment)
3. [Cloning Repository](#cloning-repository)
4. [Building Instructions](#building-instructions)
5. [Running unit tests](#running-unit-tests)
6. [Final Kit Testing Instructions](#final-kit-testing-instructions)
7. [Code of Conduct](#code-of-conduct)

-----

### Introduction

This project is a build superproject for the [Docker Provider for OMI][].

This project exists solely to set up the build environment/dependencies
properly to build the [Docker Provider for OMI][] properly. It also contains
versioning information for use by the Jenkins build system.

[Docker Provider for OMI]: https://github.com/Microsoft/Docker-Provider


### Build Environment

- The docker provider is intended to build on an **Ubuntu 14.04**
system. No other systems have been tested for build purposes.

- The project assumes that the `sudo` command is permitted without any
passwords. Please configure the `/etc/sudoers` file appropriately.

- If the system will be used for Jenkins, then Java is required:

```
sudo apt-get install openjdk-7-jre
```

- Build dependencies are required. To install packages for building
[Docker-Cimprov](https://github.com/Microsoft/Docker-Provider),
please execute:

```
sudo apt-get upgrade
sudo apt-get update
sudo apt-get install git g++ make pkg-config libssl-dev libpam0g-dev rpm librpm-dev uuid-dev libkrb5-dev 
```

### Cloning Repository

To clone the repository, execute the following command:

```
git clone --recursive git@github.com:Microsoft/Build-Docker-Provider.git bld-docker
```

### Building Instructions

To build the project, execute commands like:

```
cd bld-docker/docker/build
./configure --enable-ulinux
make
```

The resulting shell installation bundle will be found in
`../target/Linux_ULINUX_1.0_x64_64_Release/`.

### Running unit tests

To run the unit tests, docker must be properly configured first. Note
that these may change; for latest and greatest installation
instructions, see the [Docker Site](https://docs.docker.com/engine/installation/linux/docker-ce/ubuntu/).

Assuming the instructions from the [Docker Site](https://docs.docker.com/engine/installation/linux/docker-ce/ubuntu/) have not changed, execute:

```
curl -fsSL https://get.docker.com/ | sh
sudo apt-get install python-pip
sudo pip install docker-py
```

After docker is configured, then from the same build directory as
above, run:

```
make test
```

[Docker Site]: https://docs.docker.com/engine/installation/linux/docker-ce/ubuntu


### Final Kit Testing Instructions

Make sure the `OMS Agent` is installed. You can find instructions [here](https://github.com/Microsoft/OMS-Agent-for-Linux).

To install the bundle run it with --install. For example (actual bundle name may be different):

```
sudo sh ../target/Linux_ULINUX_1.0_x64_64_Release/docker-cimprov-*.universal.x86_64.sh --install
```

After the shell bundle is installed, you can verify proper operations.

You will need to have some docker containers and images created on the server. To enumerate your containers run:

```
sudo docker ps -a
```

You can compare this output with the containers found by the OMS provider by running:

```
/opt/omi/bin/omicli ei root/cimv2 Container_ContainerInventory
```

To enumerate your images run:

```
sudo docker images
```

Compare this output with the images found by the OMS provider by running:

```
/opt/omi/bin/omicli ei root/cimv2 Container_ImageInventory
```

If you have running containers you can view statistics and events with these commands:

```
/opt/omi/bin/omicli ei root/cimv2 Container_ContainerStatistics
/opt/omi/bin/omicli ei root/cimv2 Container_DaemonEvent
```

[Docker Site]: https://docs.docker.com/linux/

### Code of Conduct

This project has adopted the [Microsoft Open Source Code of Conduct]
(https://opensource.microsoft.com/codeofconduct/).  For more
information see the [Code of Conduct FAQ]
(https://opensource.microsoft.com/codeofconduct/faq/) or contact
[opencode@microsoft.com](mailto:opencode@microsoft.com) with any
additional questions or comments.
