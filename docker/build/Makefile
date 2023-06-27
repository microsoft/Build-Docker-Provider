# -*- mode: Makefile; -*-
# Copyright (c) Microsoft Corporation

BASE_DIR := $(subst /build,,$(PWD))
OMI_ROOT := $(shell cd ../../omi/Unix; pwd -P)
SCXPAL_DIR := $(shell cd ../../pal; pwd -P)

PF_POSIX := 1
include $(SCXPAL_DIR)/build/config.mak
include $(BASE_DIR)/build/config.mak
include $(SCXPAL_DIR)/build/Makefile.pal

ifndef ENABLE_DEBUG
$(error "ENABLE_DEBUG is not set.  Please re-run configure")
endif

# Include the version file
include ../../docker.version

ifndef CONTAINER_BUILDVERSION_STATUS
$(error "Is docker.version missing?  Please re-run configure")
endif

SOURCE_DIR := $(BASE_DIR)/source/code
TEST_DIR := $(BASE_DIR)/test/code

PROVIDER_DIR := $(SOURCE_DIR)/providers
PROVIDER_TEST_DIR := $(TEST_DIR)/providers
PAL_INCLUDE_DIR := $(SCXPAL_DIR)/source/code/include
PAL_TESTUTILS_DIR := $(SCXPAL_DIR)/test/code/testutils

INTERMEDIATE_DIR := $(BASE_DIR)/intermediate/$(BUILD_CONFIGURATION)
INTERMEDIATE_TESTFILES := $(INTERMEDIATE_DIR)/testfiles
TARGET_DIR := $(BASE_DIR)/target/$(BUILD_CONFIGURATION)
PROVIDER_LIBRARY := $(INTERMEDIATE_DIR)/libcontainer.so

INSTALLER_TMPDIR := $(INTERMEDIATE_DIR)/installer_tmp

# Include files

INCLUDE_DEFINES := $(INTERMEDIATE_DIR)/defines.h

# Compiler flags

OMI_INCLUDE_FLAGS := -I$(OMI_ROOT)/output/include
PROVIDER_INCLUDE_FLAGS := -I$(PAL_INCLUDE_DIR) -I$(INTERMEDIATE_DIR)

PROVIDER_TEST_INCLUDE_FLAGS := -Wmissing-include-dirs -Wno-non-virtual-dtor -I$(SCXPAL_DIR)/source/code/include -I$(INTERMEDIATE_DIR) -I$(SCXPAL_DIR)/test/ext/include -I$(OMI_ROOT)/output/include -I$(OMI_ROOT) -I$(OMI_ROOT)/common -I$(SCXPAL_DIR)/test/code/include $(PROVIDER_INCLUDE_FLAGS) -I$(PROVIDER_DIR)

ifeq ($(ENABLE_DEBUG),1)
PROV_DEBUG_FLAGS := -g
endif

COMPILE_FLAGS := $(PROV_DEBUG_FLAGS) -D_REENTRANT -fstack-protector-all -Wall -fno-nonansi-builtins  -Woverloaded-virtual -Wformat -Wformat-security -Wcast-align -Wswitch-enum -Wshadow -Wwrite-strings -Wredundant-decls -Wcast-qual -fPIC
PROVIDER_COMPILE_FLAGS := $(COMPILE_FLAGS)

LINK_LIBRARIES := -Wl,-rpath=/opt/omi/lib -L$(OMI_ROOT)/output/lib -lmicxx -L$(SCXPAL_TARGET_DIR) -lscxcore -lUtil -lscxassertabort -lrt -luuid
PROVIDER_TEST_LINK_LIBRARIES := -lbase -lpal -L$(SCXPAL_TARGET_DIR) -lscxcore $(SCXPAL_DIR)/test/ext/lib/linux/$(ARCH)/cppunit/libcppunit.a -lpthread -lrt -luuid

SHARED_FLAGS := -shared

# Support for installbuilder

STAGING_DIR := $(INTERMEDIATE_DIR)/staging

ifeq ($(ULINUX),1)
  # For consistency, the architecture should be i686 (for x86) and x86_64 (for x64)
  DOCKER_ARCH := $(shell echo $(PF_ARCH) | sed -e 's/x86$$/i686/' -e 's/x64$$/x86_64/')
  OUTPUT_PACKAGE_PREFIX=docker-cimprov-$(CONTAINER_BUILDVERSION_MAJOR).$(CONTAINER_BUILDVERSION_MINOR).$(CONTAINER_BUILDVERSION_PATCH)-$(CONTAINER_BUILDVERSION_BUILDNR).universal.$(DOCKER_ARCH)
else
  PF_DISTRO_LC := $(shell echo $(PF_DISTRO) | tr A-Z a-z)
  OUTPUT_PACKAGE_PREFIX=docker-cimprov-$(CONTAINER_BUILDVERSION_MAJOR).$(CONTAINER_BUILDVERSION_MINOR).$(CONTAINER_BUILDVERSION_PATCH)-$(CONTAINER_BUILDVERSION_BUILDNR).$(PF_DISTRO_LC).$(PF_MAJOR).$(PF_ARCH)
endif

ifeq ("$(wildcard /usr/bin/dpkg-deb)","")
	DPKG_LOCATION="--DPKG_LOCATION=$(SCXPAL_DIR)/installer/InstallBuilder/tools/bin/dpkg-deb-$(PF_ARCH)"
else
	DPKG_LOCATION=
endif

# Support for src_to_obj handling

INCLUDES = $(OMI_INCLUDE_FLAGS) $(PROVIDER_INCLUDE_FLAGS)
CFLAGS = $(COMPILE_FLAGS)
CXXFLAGS = $(COMPILE_FLAGS)

#--------------------------------------------------------------------------------
# Build targets

ifeq ($(ULINUX),1)
all : $(OMI_ROOT)/output $(SCXPAL_INTERMEDIATE_DIR) PROVIDER_STATUS $(PROVIDER_LIBRARY) KIT_STATUS kit
else
all : $(OMI_ROOT)/output $(SCXPAL_INTERMEDIATE_DIR) PROVIDER_STATUS $(PROVIDER_LIBRARY)
endif

clean :
	$(RMDIR) $(BASE_DIR)/build/cppunit_result.* $(BASE_DIR)/build/scxtestrunner.log $(BASE_DIR)/installer/intermediate $(BASE_DIR)/intermediate $(BASE_DIR)/target $(PROVIDER_TEST_DIR)/providertestutils.cpp
	-find $(BASE_DIR) -name \*~ -exec rm {} \;
	-$(RM) $(TEST_DIR)/providers/TestScriptPath.h

distclean : clean
	$(RM) $(BASE_DIR)/build/config.mak
	-make -C $(OMI_ROOT) distclean
	-make -C $(SCXPAL_DIR)/build distclean
	-$(RMDIR) $(OMI_ROOT)/output*
	-$(RM) $(SCXPAL_DIR)/build/config.mak
	-$(RM) $(SCXPAL_DIR)/build/Makefile.config_cache

PROVIDER_STATUS:
	@echo "========================= Performing Building provider"

KIT_STATUS:
	@echo "========================= Performing Building provider tests"

#--------------------------------------------------------------------------------
# OMI build
#
# Build the OMI distribution
#
# Technically, we should go to build OMI all the time. But I'd rather not spend
# the time doing it here EVERY TIME, when we never normally change OMI. This is
# a good tradeoff (build if not built, otherwise assume all is well).
#
# Doing a 'make clean' in OMI directory will force us to rebuild.

$(OMI_ROOT)/output : $(OMI_ROOT)/output/lib/libmicxx.so

$(OMI_ROOT)/output/lib/libmicxx.so :
	@echo "========================= Performing Building OMI"
	make -C $(OMI_ROOT)
ifeq ($(PERFORM_OMI_MAKEINSTALL),1)
	make -C $(OMI_ROOT) install
endif

#--------------------------------------------------------------------------------
# PAL build
#
# Build the PAL (Platform Abstraction Layer)
#
# Doing a 'make clean' in PAL directory will force us to rebuild.

$(SCXPAL_INTERMEDIATE_DIR) :
	@echo "========================= Performing Building PAL"
	make -C $(SCXPAL_DIR)/build

#================================================================================
# File depends.h (compiler dependencies)
#================================================================================

$(INCLUDE_DEFINES) : $(BASE_DIR)/build/config.mak
	-$(MKPATH) $(@D)
	@$(ECHO) "Creating $@" 
	@$(call pf_fwrite,"/*-------------------------------------------------------------------------------", $@)
	@$(call pf_fappend,"    Copyright (C) 2007-2015 Microsoft Corp.                                     ", $@)
	@$(call pf_fappend,"                                                                                ", $@)
	@$(call pf_fappend,"*/                                                                              ", $@)
	@$(call pf_fappend,"/**                                                                             ", $@)
	@$(call pf_fappend,"    \file                                                                       ", $@)
	@$(call pf_fappend,"                                                                                ", $@)
	@$(call pf_fappend,"    \brief       Auto generated file containing build definitions               ", $@)
	@$(call pf_fappend,"                                                                                ", $@)
	@$(call pf_fappend,"    \author      Automated Build System                                         ", $@)
	@$(call pf_fappend,"                                                                                ", $@)
	@$(call pf_fappend,"    DO NOT EDIT THIS FILE!                                                      ", $@)
	@$(call pf_fappend,"    DO NOT CHECK IN THIS FILE!                                                  ", $@)
	@$(call pf_fappend,"*/                                                                              ", $@)
	@$(call pf_fappend,"/*----------------------------------------------------------------------------*/", $@)
	@$(call pf_fappend,"#ifndef DEFINES_H                                                               ", $@)
	@$(call pf_fappend,"#define DEFINES_H                                                               ", $@)
	@$(call pf_fappend,"                                                                                ", $@)
ifneq ($(PF_DISTRO),)
	@$(call pf_fappend,"                                                                                ", $@)
	@$(call pf_fappend,"#ifndef PF_DISTRO_$(PF_DISTRO)                                                  ", $@)
	@$(call pf_fappend,"#define PF_DISTRO_$(PF_DISTRO)                                                  ", $@)
	@$(call pf_fappend,"#endif                                                                          ", $@)
endif
ifneq ($(PF_MAJOR),)
	@$(call pf_fappend,"                                                                                ", $@)
	@$(call pf_fappend,"#ifndef PF_MAJOR                                                                ", $@)
	@$(call pf_fappend,"#define PF_MAJOR $(PF_MAJOR)                                                    ", $@)
	@$(call pf_fappend,"#endif                                                                          ", $@)
endif
ifneq ($(PF_MINOR),)
	@$(call pf_fappend,"                                                                                ", $@)
	@$(call pf_fappend,"#ifndef PF_MINOR                                                                ", $@)
	@$(call pf_fappend,"#define PF_MINOR $(PF_MINOR)                                                    ", $@)
	@$(call pf_fappend,"#endif                                                                          ", $@)
endif
ifneq ($(ARCH),)
	@$(call pf_fappend,"                                                                                ", $@)
	@$(call pf_fappend,"#ifndef $(ARCH)                                                                 ", $@)
	@$(call pf_fappend,"#define $(ARCH)                                                                 ", $@)
	@$(call pf_fappend,"#endif                                                                          ", $@)
endif
ifeq ($(BUILD_TYPE),Debug)
	@$(call pf_fappend,"                                                                                ", $@)
	@$(call pf_fappend,"#ifndef _DEBUG                                                                  ", $@)
	@$(call pf_fappend,"#define _DEBUG                                                                  ", $@)
	@$(call pf_fappend,"#endif                                                                          ", $@)
else
	@$(call pf_fappend,"                                                                                ", $@)
	@$(call pf_fappend,"#ifndef NDEBUG                                                                  ", $@)
	@$(call pf_fappend,"#define NDEBUG                                                                  ", $@)
	@$(call pf_fappend,"#endif                                                                          ", $@)
endif
	@$(call pf_fappend,"                                                                                ", $@)
	@$(call pf_fappend,"#endif /* DEFINES_H */                                                          ", $@)
	@$(call pf_fappend,"/*----------------------------E-N-D---O-F---F-I-L-E---------------------------*/", $@)

#================================================================================
# Internal functions
#================================================================================

# Convert a list of src files with absolute paths under BASE_DIR to corresponding
# object files under intermediate directory 
# src_to_obj(list_of_cppfiles)
src_to_obj = $(patsubst $(BASE_DIR)%, $(INTERMEDIATE_DIR)%, $(patsubst %.c, %.o, $(patsubst %.cpp, %.o, $(1))))

# No default rules, please
.SUFFIX: 

# Rule for compiling cpp files in source tree, ouptut in mirrored intermediate dir
$(INTERMEDIATE_DIR)/%.o : $(BASE_DIR)/%.cpp  $(INCLUDE_DEFINES)
	$(MKPATH) $(@D)
	$(CXX) -c $(CXXFLAGS) $(INCLUDES) -I$(<D) -o $@ $<

$(INTERMEDIATE_DIR)/%.o : $(BASE_DIR)/%.c $(INCLUDE_DEFINES)
	$(MKPATH) $(@D)
	$(CXX) -c $(CFLAGS) $(INCLUDES) -I$(<D) -o $@ $<

#--------------------------------------------------------------------------------
# Container Provider
#
# Build the Provider Library 

STATIC_PROVIDERLIB_SRCFILES = \
	$(PROVIDER_DIR)/Container_ContainerInventory_Class_Provider.cpp \
	$(PROVIDER_DIR)/Container_ContainerStatistics_Class_Provider.cpp \
	$(PROVIDER_DIR)/Container_DaemonEvent_Class_Provider.cpp \
	$(PROVIDER_DIR)/Container_ImageInventory_Class_Provider.cpp \
	$(PROVIDER_DIR)/Container_ContainerLog_Class_Provider.cpp \
	$(PROVIDER_DIR)/Container_HostInventory_Class_Provider.cpp \
	$(PROVIDER_DIR)/Container_Process_Class_Provider.cpp

STATIC_PROVIDERLIB_SRCFILES += \
	$(PROVIDER_DIR)/module.cpp \
	$(PROVIDER_DIR)/schema.c \
	$(PROVIDER_DIR)/stubs.cpp

STATIC_PROVIDERLIB_SRCFILES += \
	$(SOURCE_DIR)/cjson/cJSON.c \
	$(SOURCE_DIR)/dockerapi/DockerRemoteApi.cpp

PROVIDER_HEADERS = \
	$(SOURCE_DIR)/cjson/cJSON.h \
	$(SOURCE_DIR)/dockerapi/DockerRemoteApi.h \
	$(SOURCE_DIR)/dockerapi/DockerRestHelper.h

STATIC_PROVIDERLIB_OBJFILES = $(call src_to_obj,$(STATIC_PROVIDERLIB_SRCFILES))

$(PROVIDER_LIBRARY): INCLUDES += $(PROVIDER_INCLUDE_FLAGS)
$(PROVIDER_LIBRARY): CFLAGS += $(PROVIDER_COMPILE_FLAGS)
$(PROVIDER_LIBRARY): CXXFLAGS += $(PROVIDER_COMPILE_FLAGS)
$(PROVIDER_LIBRARY): $(STATIC_PROVIDERLIB_OBJFILES) $(STATIC_PROVIDERLIB_LOGPOLICY) $(INCLUDE_DEFINES) $(PROVIDER_HEADERS)
	$(MKPATH) $(INTERMEDIATE_DIR)
	g++ $(PROVIDER_COMPILE_FLAGS) $(SHARED_FLAGS) $(PROVIDER_INCLUDE_FLAGS) -o $@ $(STATIC_PROVIDERLIB_OBJFILES) $(LINK_LIBRARIES)

#--------------------------------------------------------------------------------
# Container Provider Unit Tests
#
# Build and run the Provider Unit Tests

# For now, providertestutils.cpp lives in PAL, but is built in OM.  This creates
# some build issues.  To resolve, create a link to the real file.

$(PROVIDER_TEST_DIR)/providertestutils.cpp: $(PAL_TESTUTILS_DIR)/providertestutils.cpp
# We need to recreate the symlink if the link is older than what it points to.
	$(RM) $(PROVIDER_TEST_DIR)/providers/providertestutils.cpp
	ln -s $(PAL_TESTUTILS_DIR)/providertestutils.cpp $(PROVIDER_TEST_DIR)/providertestutils.cpp

STATIC_PROVIDER_UNITFILES = \
	$(PROVIDER_TEST_DIR)/Container_ContainerInventory_Class_Provider_UnitTest.cpp \
	$(PROVIDER_TEST_DIR)/Container_ContainerStatistics_Class_Provider_UnitTest.cpp \
	$(PROVIDER_TEST_DIR)/Container_DaemonEvent_Class_Provider_UnitTest.cpp \
	$(PROVIDER_TEST_DIR)/Container_ImageInventory_Class_Provider_UnitTest.cpp \
	$(PROVIDER_TEST_DIR)/Container_HostInventory_Class_Provider_UnitTest.cpp \
	$(PROVIDER_TEST_DIR)/Container_Process_Class_Provider_UnitTest.cpp \
	$(PROVIDER_TEST_DIR)/support/testrunnerlogpolicy.cpp \
	$(PROVIDER_TEST_DIR)/support/productdependencies.cpp \
	$(PROVIDER_TEST_DIR)/providertestutils.cpp

STATIC_PROVIDER_PAL_UNITFILES = \
	$(PAL_TESTUTILS_DIR)/scxassert_cppunit.cpp \
	$(PAL_TESTUTILS_DIR)/testrunner.cpp

STATIC_PROVIDER_TEST_OBJFILES = $(call src_to_obj,$(STATIC_PROVIDER_UNITFILES))

$(INTERMEDIATE_DIR)/testrunner: INCLUDES += $(PROVIDER_TEST_INCLUDE_FLAGS) -I$(PAL_INCLUDE_DIR) -I$(PAL_TESTUTILS_DIR) -I$(PROVIDER_DIR) -I$(SOURCE_DIR)
$(INTERMEDIATE_DIR)/testrunner: CFLAGS += $(PROVIDER_COMPILE_FLAGS)
$(INTERMEDIATE_DIR)/testrunner: CXXFLAGS += $(PROVIDER_COMPILE_FLAGS)
$(INTERMEDIATE_DIR)/testrunner : $(STATIC_PROVIDER_TEST_OBJFILES) $(STATIC_PROVIDERLIB_OBJFILES) $(INCLUDE_DEFINES) $(PROVIDER_HEADERS)
	$(MKPATH) $(INTERMEDIATE_DIR)
	g++ $(PROVIDER_COMPILE_FLAGS) $(PROVIDER_TEST_INCLUDE_FLAGS) -o $@ $(STATIC_PROVIDER_PAL_UNITFILES) $(STATIC_PROVIDER_TEST_OBJFILES) $(STATIC_PROVIDERLIB_OBJFILES) $(LINK_LIBRARIES) $(PROVIDER_TEST_LINK_LIBRARIES)

testrun : test

TEST_STATUS:
	@echo "========================= Performing Building provider tests"
	@echo \#define TEST_SCRIPT_PATH \"$(TEST_DIR)/scripts/\" > $(TEST_DIR)/providers/TestScriptPath.h

test : TEST_STATUS $(SCXPAL_INTERMEDIATE_DIR) $(INTERMEDIATE_DIR)/testrunner
	@echo "========================= Performing container testrun execution"
	$(MKPATH) $(INTERMEDIATE_TESTFILES)
	$(COPY) $(TEST_DIR)/scripts/createEnv.sh $(TEST_DIR)/scripts/testrun_wrapper $(INTERMEDIATE_TESTFILES)
	export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:$(OMI_ROOT)/output/lib; cd $(INTERMEDIATE_TESTFILES); ./createEnv.sh
	cd $(INTERMEDIATE_TESTFILES); ./testrun_wrapper $(INTERMEDIATE_DIR)

#--------------------------------------------------------------------------------
# Build the distribution kit
#
# Build the packages via installbuilder
#
# While the "formal build" only builds ULINUX, we may build something else for DEV purposes.
# Assume we ALWAYS build DPKG, but only build RPM if --enable-ulinux is speified in configure.

kit : CONTAINERLIB_FILENAME = libcontainer.so
kit : $(OMI_ROOT)/output $(PROVIDER_LIBRARY)

ifeq ($(ULINUX),1)

	@echo "========================= Performing Building RPM and DPKG packages"
	$(MKPATH) $(INSTALLER_TMPDIR)
	sudo $(RMDIR) $(STAGING_DIR)
	$(MKPATH) $(INTERMEDIATE_DIR)
	python $(SCXPAL_DIR)/installer/InstallBuilder/installbuilder.py \
		--BASE_DIR=$(BASE_DIR) \
		--TARGET_DIR=$(INTERMEDIATE_DIR) \
		--INTERMEDIATE_DIR=$(INSTALLER_TMPDIR) \
		--STAGING_DIR=$(STAGING_DIR) \
		--BUILD_TYPE=$(BUILD_TYPE) \
		--BUILD_CONFIGURATION=$(BUILD_CONFIGURATION) \
		--PFARCH=$(PF_ARCH) \
		--PFDISTRO=$(PF_DISTRO) \
		--PFMAJOR=$(PF_MAJOR) \
		--PFMINOR=$(PF_MINOR) \
		--VERSION=$(CONTAINER_BUILDVERSION_MAJOR).$(CONTAINER_BUILDVERSION_MINOR).$(CONTAINER_BUILDVERSION_PATCH) \
		--RELEASE=$(CONTAINER_BUILDVERSION_BUILDNR) \
		--CONTAINER_BUILD_LIBRARY=$(CONTAINERLIB_FILENAME) \
		--OUTPUTFILE=$(OUTPUT_PACKAGE_PREFIX) \
		--DATAFILE_PATH=$(BASE_DIR)/installer/datafiles \
		base_container.data linux.data linux_rpm.data

	sudo $(RMDIR) $(STAGING_DIR)
	$(MKPATH) $(INTERMEDIATE_DIR)
	python $(SCXPAL_DIR)/installer/InstallBuilder/installbuilder.py \
		--BASE_DIR=$(BASE_DIR) \
		--TARGET_DIR=$(INTERMEDIATE_DIR) \
		--INTERMEDIATE_DIR=$(INSTALLER_TMPDIR) \
		--STAGING_DIR=$(STAGING_DIR) \
		--BUILD_TYPE=$(BUILD_TYPE) \
		--BUILD_CONFIGURATION=$(BUILD_CONFIGURATION) \
		--PFARCH=$(PF_ARCH) \
		--PFDISTRO=$(PF_DISTRO) \
		--PFMAJOR=$(PF_MAJOR) \
		--PFMINOR=$(PF_MINOR) \
		--VERSION=$(CONTAINER_BUILDVERSION_MAJOR).$(CONTAINER_BUILDVERSION_MINOR).$(CONTAINER_BUILDVERSION_PATCH) \
		--RELEASE=$(CONTAINER_BUILDVERSION_BUILDNR) \
		--CONTAINER_BUILD_LIBRARY=$(CONTAINERLIB_FILENAME) \
		$(DPKG_LOCATION) \
		--OUTPUTFILE=$(OUTPUT_PACKAGE_PREFIX) \
		--DATAFILE_PATH=$(BASE_DIR)/installer/datafiles \
		base_container.data linux.data linux_dpkg.data

	# Strip the package extension from the package filename
	sed -re 's/.rpm$$|.deb$$//' $(INTERMEDIATE_DIR)/package_filename > $(INTERMEDIATE_DIR)/package_file.tmp; mv $(INTERMEDIATE_DIR)/package_file.tmp $(INTERMEDIATE_DIR)/package_filename

	# Build the tar file containing both .rpm and .deb packages
	cd $(INTERMEDIATE_DIR); tar cvf $(OUTPUT_PACKAGE_PREFIX).tar $(OUTPUT_PACKAGE_PREFIX).rpm $(OUTPUT_PACKAGE_PREFIX).deb

	../installer/bundle/create_bundle.sh $(PF)_$(PF_DISTRO) $(INTERMEDIATE_DIR) $(OUTPUT_PACKAGE_PREFIX)
	# Copy the shell bundle to the target directory
	$(MKPATH) $(TARGET_DIR)
	cd $(INTERMEDIATE_DIR); $(COPY) `cat $(INTERMEDIATE_DIR)/package_filename`.sh $(TARGET_DIR)

else

	@echo "========================= Performing Building RPM and DPKG packages"
	sudo $(RMDIR) $(STAGING_DIR)
	$(MKPATH) $(INTERMEDIATE_DIR)
	python $(SCXPAL_DIR)/installer/InstallBuilder/installbuilder.py \
		--BASE_DIR=$(BASE_DIR) \
		--TARGET_DIR=$(INTERMEDIATE_DIR) \
		--INTERMEDIATE_DIR=$(INSTALLER_TMPDIR) \
		--STAGING_DIR=$(STAGING_DIR) \
		--BUILD_TYPE=$(BUILD_TYPE) \
		--BUILD_CONFIGURATION=$(BUILD_CONFIGURATION) \
		--PFARCH=$(PF_ARCH) \
		--PFDISTRO=$(PF_DISTRO) \
		--PFMAJOR=$(PF_MAJOR) \
		--PFMINOR=$(PF_MINOR) \
		--VERSION=$(CONTAINER_BUILDVERSION_MAJOR).$(CONTAINER_BUILDVERSION_MINOR).$(CONTAINER_BUILDVERSION_PATCH) \
		--RELEASE=$(CONTAINER_BUILDVERSION_BUILDNR) \
		--CONTAINER_BUILD_LIBRARY=$(CONTAINERLIB_FILENAME) \
		$(DPKG_LOCATION) \
		--OUTPUTFILE=$(OUTPUT_PACKAGE_PREFIX) \
		--DATAFILE_PATH=$(BASE_DIR)/installer/datafiles \
		base_container.data linux.data linux_dpkg.data

endif
