#include <set>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <unistd.h>
#include <uuid/uuid.h>
#include <vector>

#include "TestHelper.h"
#include "Container_ContainerStatistics_Class_Provider.h"
#include "cjson/cJSON.h"

using namespace std;
using namespace SCXCoreLib;

class ContainerStatisticsTest : public CppUnit::TestFixture
{
    CPPUNIT_TEST_SUITE(ContainerStatisticsTest);
    CPPUNIT_TEST(TestEnumerateInstances);
    CPPUNIT_TEST_SUITE_END();

public:
    vector<string> containers;

public:
    void setUp()
    {
        // Get some images to use
        fputc('\n', stdout);
        TestHelper::RunCommand("docker pull centos");
    }

    void tearDown()
    {
        char command[128];

        // Remove the containers that were started by the tests
        for (unsigned i = 0; i < containers.size(); i++)
        {
            sprintf(command, "docker rm -f %s", containers[i].c_str());
            TestHelper::RunCommand(command);
        }

        containers.clear();
    }

protected:
    void TestEnumerateInstances()
    {
        wstring errMsg;
        TestableContext context;

        vector<wstring> m_keyNames;
        m_keyNames.push_back(L"InstanceID");

        char containerName[64];
        strcpy(containerName, TestHelper::NewGuid().c_str());
        containers.push_back(string(containerName));
        char command[128];
        sprintf(command, "docker run --name=%s centos sleep 60 &", containerName);

        system(command);
        sleep(5);

        // Enumerate provider
        StandardTestEnumerateInstances<mi::Container_ContainerStatistics_Class_Provider>(m_keyNames, context, CALL_LOCATION(errMsg));

        CPPUNIT_ASSERT(context.Size());
		
        // Only check that the values are present and within the valid range because it is not possible to create a controlled environment
        for (unsigned i = 0; i < context.Size(); ++i)
        {
            wstring instanceId = context[i].GetProperty(L"InstanceID", CALL_LOCATION(errMsg)).GetValue_MIString(CALL_LOCATION(errMsg));
            CPPUNIT_ASSERT(instanceId.length());

            CPPUNIT_ASSERT(context[i].GetProperty(L"NetRXBytes", CALL_LOCATION(errMsg)).GetValue_MIUint64(CALL_LOCATION(errMsg)) >= 0);
            CPPUNIT_ASSERT(context[i].GetProperty(L"NetTXBytes", CALL_LOCATION(errMsg)).GetValue_MIUint64(CALL_LOCATION(errMsg)) >= 0);
            CPPUNIT_ASSERT(context[i].GetProperty(L"MemUsedMB", CALL_LOCATION(errMsg)).GetValue_MIUint64(CALL_LOCATION(errMsg)) >= 0);
            CPPUNIT_ASSERT(context[i].GetProperty(L"CPUTotal", CALL_LOCATION(errMsg)).GetValue_MIUint64(CALL_LOCATION(errMsg)) >= 0);

            unsigned short cpuUse = context[i].GetProperty(L"CPUTotalPct", CALL_LOCATION(errMsg)).GetValue_MIUint16(CALL_LOCATION(errMsg));
            CPPUNIT_ASSERT(cpuUse <= 100);

            CPPUNIT_ASSERT(context[i].GetProperty(L"DiskBytesRead", CALL_LOCATION(errMsg)).GetValue_MIUint64(CALL_LOCATION(errMsg)) >= 0);
            CPPUNIT_ASSERT(context[i].GetProperty(L"DiskBytesWritten", CALL_LOCATION(errMsg)).GetValue_MIUint64(CALL_LOCATION(errMsg)) >= 0);
        }
    }
};

CPPUNIT_TEST_SUITE_REGISTRATION(ContainerStatisticsTest);
