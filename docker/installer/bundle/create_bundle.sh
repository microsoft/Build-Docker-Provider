#!/bin/bash
#
#
# This script will create a bundle file given an existing kit.
#
# Parameters:
#	$1: Platform type
#	$2: Directory to package file
#	$3: Package name for Docker package (without extension)
#
# We expect this script to run from the BUILD directory (i.e. docker/build).
# Directory paths are hard-coded for this location.

# Notes for file bundle_skel.sh (included here since we dont want to ship
# these comments in shell bundle):
#
# This script is a skeleton bundle file for the Docker project, which only
# ships in universal form (RPM & DEB installers for the Linux platforms).
#
# Use this script by concatenating it with some binary package.
#
# The bundle is created by cat'ing the script in front of the binary, so for
# the gzip'ed tar example, a command like the following will build the bundle:
#
#     tar -czvf - <target-dir> | cat sfx.skel - > my.bundle
#
# The bundle can then be copied to a system, made executable (chmod +x) and
# then run.  When run without any options it will make any pre-extraction
# calls, extract the binary, and then make any post-extraction calls.
#
# This script has some usefull helper options to split out the script and/or
# binary in place, and to turn on shell debugging.
#
# This script is paired with create_bundle.sh, which will edit constants in
# this script for proper execution at runtime.  The "magic", here, is that
# create_bundle.sh encodes the length of this script in the script itself.
# Then the script can use that with 'tail' in order to strip the script from
# the binary package.
#
# Developer note: A prior incarnation of this script used 'sed' to strip the
# script from the binary package.  That didn't work on AIX 5, where 'sed' did
# strip the binary package - AND null bytes, creating a corrupted stream.
#
# Docker-specific implementaiton: Unlike CM & OM projects, this bundle does
# not install OMI.  Why a bundle, then?  Primarily so a single package can
# install either a .DEB file or a .RPM file, whichever is appropraite.

SOURCE_DIR=`(cd ../installer/bundle; pwd -P)`
INTERMEDIATE_DIR=`(mkdir -p ../installer/intermediate; cd ../installer/intermediate; pwd -P)`

# Exit on error
set -e

# Don't display output
set +x

usage()
{
    echo "usage: $0 platform directory Docker-package-name"
    echo "  where"
    echo "    platform is one of: Linux_REDHAT, Linux_SUSE, Linux_ULINUX"
    echo "    directory is directory path to package file"
    echo "    Docker-package-name is the name of the Docker installation package"
    exit 1
}

# Validate parameters

if [ -z "$1" ]; then
    echo "Missing parameter: Platform type" >&2
    echo ""
    usage
    exit 1
fi

case "$1" in
    Linux_REDHAT|Linux_SUSE|Linux_ULINUX)
	;;

    *)
	echo "Invalid platform type specified: $1" >&2
	exit 1
esac

if [ -z "$2" ]; then
    echo "Missing parameter: Directory to platform file" >&2
    echo ""
    usage
    exit 1
fi

if [ ! -d "$2" ]; then
    echo "Directory \"$2\" does not exist" >&2
    exit 1
fi

if [ -z "$3" ]; then
    echo "Missing parameter: Docker-package-name" >&2
    echo ""
    usage
    exit 1
fi

if [ ! -f "$2/$3".tar ]; then
    echo "Tar file \"$2/$3\" does not exist"
    exit 1
fi

# Determine the output file name
OUTPUT_DIR=`(cd $2; pwd -P)`

# Work from the temporary directory from this point forward

cd $INTERMEDIATE_DIR

# Fetch the bundle skeleton file
cp $SOURCE_DIR/bundle_skel.sh .
chmod u+w bundle_skel.sh

# See if we can resolve git references for output
# (See if we can find the master project)
if [ -f ../../../.gitmodules ]; then
    TEMP_FILE=/tmp/create_bundle.$$

    # Get the git reference hashes in a file
    (
       cd ../../..
       echo "Entering 'superproject'" > $TEMP_FILE
       git rev-parse HEAD >> $TEMP_FILE
       git submodule foreach git rev-parse HEAD >> $TEMP_FILE
    )

    # Change lines like: "Entering 'omi'\n<refhash>" to "omi: <refhash>"
    perl -i -pe "s/Entering '([^\n]*)'\n/\$1: /" $TEMP_FILE

    # Grab the reference hashes in a variable
    SOURCE_REFS=`cat $TEMP_FILE`
    rm $TEMP_FILE

    # Update the bundle file w/the ref hash (much easier with perl since multi-line)
    perl -i -pe "s/-- Source code references --/${SOURCE_REFS}/" bundle_skel.sh
else
    echo "Unable to find git superproject!" >& 2
    exit 1
fi

# Edit the bundle file for hard-coded values
sed -i "s/PLATFORM=<PLATFORM_TYPE>/PLATFORM=$1/" bundle_skel.sh
sed -i "s/CONTAINER_PKG=<CONTAINER_PKG>/CONTAINER_PKG=$3/" bundle_skel.sh

SCRIPT_LEN=`wc -l < bundle_skel.sh | sed -e 's/ //g'`
SCRIPT_LEN_PLUS_ONE="$((SCRIPT_LEN + 1))"

sed -i "s/SCRIPT_LEN=<SCRIPT_LEN>/SCRIPT_LEN=${SCRIPT_LEN}/" bundle_skel.sh
sed -i "s/SCRIPT_LEN_PLUS_ONE=<SCRIPT_LEN+1>/SCRIPT_LEN_PLUS_ONE=${SCRIPT_LEN_PLUS_ONE}/" bundle_skel.sh

# Fetch the kit
cp ${OUTPUT_DIR}/${3}.tar .

# Build the bundle
BUNDLE_FILE=${3}.sh
gzip -c ${3}.tar | cat bundle_skel.sh - > $BUNDLE_FILE
chmod +x $BUNDLE_FILE
rm bundle_skel.sh

# Remove the kit and copy the bundle to the kit location
rm ${3}.tar
mv $BUNDLE_FILE $OUTPUT_DIR/

exit 0
