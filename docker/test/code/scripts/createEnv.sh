#!/bin/sh

# We need to set up some environment for the testrunner; do so here
# (Note that docker requires root privileges, so our environment must
# be set up for root access).

ENV_FILE=`dirname $0`/env.sh

echo "#!/bin/sh" > $ENV_FILE
echo >> $ENV_FILE

# Use the en_US locale for tests sensitive to date/time formatting
[ -z "$LANG" ] && LANG=`locale -a | grep -i en_us | grep -i utf`
echo "LANG=\"$LANG\"; export LANG" >> $ENV_FILE

# Export a variable solely so that we can see we're running under test
# This is not currently used, but gives us the option if we need it.
echo "CONTAINER_TESTRUN_ACTIVE=1; export CONTAINER_TESTRUN_ACTIVE" >> $ENV_FILE

# Testrunner arguments are sent using environment variables...
[ -n "$SCX_TESTRUN_NAMES" ] && echo "SCX_TESTRUN_NAMES=\"$SCX_TESTRUN_NAMES\"; export SCX_TESTRUN_NAMES" >> $ENV_FILE
[ -n "$SCX_TESTRUN_ATTRS" ] && echo "SCX_TESTRUN_ATTRS=\"$SCX_TESTRUN_ATTRS\"; export SCX_TESTRUN_ATTRS" >> $ENV_FILE

# Other environment variables for tests to run properly
[ -n "$LD_LIBRARY_PATH" ] && echo "LD_LIBRARY_PATH=\"$LD_LIBRARY_PATH\"; export LD_LIBRARY_PATH" >> $ENV_FILE

# Code coverage (BullsEye) environment
[ -n "$COVFILE" ] && echo "COVFILE=\"$COVFILE\"; export COVFILE" >> $ENV_FILE

exit 0
