#include <errno.h>
#include <limits.h>
#include <set>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <string.h>
#include <sys/types.h>
#include <unistd.h>
#include <uuid/uuid.h>
#include <vector>
#include <wchar.h>

#include "TestHelper.h"
#include "Container_ContainerInventory_Class_Provider.h"
#include "cjson/cJSON.h"
#include "TestScriptPath.h"

using namespace std;
using namespace SCXCoreLib;

class ContainerInventoryTest : public CppUnit::TestFixture
{
    CPPUNIT_TEST_SUITE(ContainerInventoryTest);
    CPPUNIT_TEST(TestEnumerateInstances);
    CPPUNIT_TEST(TestEnumerateVerifyAllValues);
    CPPUNIT_TEST(TestEnumerateDeletedContainer);
    CPPUNIT_TEST_SUITE_END();

private:
    vector<string> containers;

public:
    void setUp()
    {
        fputc('\n', stdout);
        //delete all container
        system("docker ps -a -q | xargs docker rm -f");
        // Get some images to use
        TestHelper::RunCommand("docker pull hello-world");
        TestHelper::RunCommand("rm -f /var/opt/microsoft/docker-cimprov/state/ContainerInventory/*");
    }

    void tearDown()
    {
        char command[128];

        // Remove the containers that were started by the tests
        for (unsigned i = 0; i < containers.size(); i++)
        {
            snprintf(command, 128, "docker rm -f %s", containers[i].c_str());
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

        // Remove cached state
        TestHelper::RunCommand("rm -f /var/opt/microsoft/docker-cimprov/state/ContainerInventory/*");

        // Run a container to ensure that there is at lease one result
        string containerName = TestHelper::NewGuid();
        containers.push_back(containerName);
        char command[128];
        snprintf(command, 128, "docker run --name=%s hello-world", containerName.c_str());
        TestHelper::RunCommand(command);

        // Enumerate provider
        StandardTestEnumerateInstances<mi::Container_ContainerInventory_Class_Provider>(m_keyNames, context, CALL_LOCATION(errMsg));

        // Get containers using command line - there is a Docker bug that causes this to fail if SCXProcess::Run() is used instead of system()
        char path[128];
        snprintf(path, 128, "/tmp/docker_container_ids_%d.txt", getpid());
        snprintf(command, 128, "docker ps -aq --no-trunc > %s", path);
        CPPUNIT_ASSERT_MESSAGE(string(SCXCoreLib::strerror(errno)), !system(command));

        FILE* idFile = fopen(path, "r");
        CPPUNIT_ASSERT_MESSAGE(string(SCXCoreLib::strerror(errno)), idFile);

        wchar_t id[13];
        set<wstring> allIds;

        // Full container IDs (one per line)
        while (fwscanf(idFile, L"%ls", id) != EOF)
        {
            allIds.insert(wstring(id));
        }

        fclose(idFile);
        CPPUNIT_ASSERT_MESSAGE(string(SCXCoreLib::strerror(errno)), !remove(path));

        CPPUNIT_ASSERT_EQUAL(allIds.size(), context.Size());

        for (unsigned i = 0; i < context.Size(); ++i)
        {
            // Verify the InstanceID
            CPPUNIT_ASSERT(allIds.count(context[i].GetKey(L"InstanceID", CALL_LOCATION(errMsg))));
        }
    }

    void TestEnumerateVerifyAllValues()
    {
        wstring errMsg;
        TestableContext context;

        vector<wstring> m_keyNames;
        m_keyNames.push_back(L"InstanceID");

        // Remove cached state
        TestHelper::RunCommand("rm -f /var/opt/microsoft/docker-cimprov/state/ContainerInventory/*");

        // Run a container to ensure that there is at lease one result
        string containerName = TestHelper::NewGuid();
        containers.push_back(containerName);
        char command[256];
        snprintf(command, 256, "docker run --name=%s hello-world", containerName.c_str());
        TestHelper::RunCommand(command);

        // Enumerate provider
        StandardTestEnumerateInstances<mi::Container_ContainerInventory_Class_Provider>(m_keyNames, context, CALL_LOCATION(errMsg));

        // Get container inventory using a script
        char path[128];
        snprintf(path, 128, "/tmp/docker_container_inventory_%d.txt", getpid());
        snprintf(command, 256, "python %sContainerInventory.py > %s", TEST_SCRIPT_PATH, path);
        CPPUNIT_ASSERT_MESSAGE(string(SCXCoreLib::strerror(errno)), !system(command));

        FILE* containerFile = fopen(path, "r");
        CPPUNIT_ASSERT_MESSAGE(string(SCXCoreLib::strerror(errno)), containerFile);

        char buffer[1024];
        vector<cJSON*> containersList;

        while (fgets(buffer, 1023, containerFile))
        {
            containersList.push_back(cJSON_Parse(buffer));
        }

        fclose(containerFile);
        CPPUNIT_ASSERT_MESSAGE(string(SCXCoreLib::strerror(errno)), !remove(path));

        // Should have no more current containers than current + deleted containers
        CPPUNIT_ASSERT(containersList.size() <= context.Size());

        wchar_t currentId[66];
        int containerCount = 0;

        for (unsigned i = 0; i < containersList.size(); ++i)
        {
            bool flag = false;
            mbstowcs(currentId, cJSON_GetObjectItem(containersList[i], "InstanceID")->valuestring, 65);

            for (unsigned j = 0; !flag && j < context.Size(); j++)
            {
                if (!context[j].GetProperty(L"InstanceID", CALL_LOCATION(errMsg)).GetValue_MIString(CALL_LOCATION(errMsg)).compare(wstring(currentId)))
                {
                    wchar_t temp[512];
                    unsigned count = 0;

                    mbstowcs(temp, cJSON_GetObjectItem(containersList[i], "CreatedTime")->valuestring, 511);
                    CPPUNIT_ASSERT_EQUAL(wstring(temp), context[j].GetProperty(L"CreatedTime", CALL_LOCATION(errMsg)).GetValue_MIString(CALL_LOCATION(errMsg)));

                    mbstowcs(temp, cJSON_GetObjectItem(containersList[i], "ElementName")->valuestring, 511);
                    CPPUNIT_ASSERT_EQUAL(wstring(temp), context[j].GetProperty(L"ElementName", CALL_LOCATION(errMsg)).GetValue_MIString(CALL_LOCATION(errMsg)));

                    mbstowcs(temp, cJSON_GetObjectItem(containersList[i], "State")->valuestring, 511);
                    CPPUNIT_ASSERT_EQUAL(wstring(temp), context[j].GetProperty(L"State", CALL_LOCATION(errMsg)).GetValue_MIString(CALL_LOCATION(errMsg)));

                    mbstowcs(temp, cJSON_GetObjectItem(containersList[i], "StartedTime")->valuestring, 511);
                    CPPUNIT_ASSERT_EQUAL(wstring(temp), context[j].GetProperty(L"StartedTime", CALL_LOCATION(errMsg)).GetValue_MIString(CALL_LOCATION(errMsg)));

                    mbstowcs(temp, cJSON_GetObjectItem(containersList[i], "FinishedTime")->valuestring, 511);
                    CPPUNIT_ASSERT_EQUAL(wstring(temp), context[j].GetProperty(L"FinishedTime", CALL_LOCATION(errMsg)).GetValue_MIString(CALL_LOCATION(errMsg)));

                    mbstowcs(temp, cJSON_GetObjectItem(containersList[i], "ImageId")->valuestring, 511);
                    CPPUNIT_ASSERT_EQUAL(wstring(temp), context[j].GetProperty(L"ImageId", CALL_LOCATION(errMsg)).GetValue_MIString(CALL_LOCATION(errMsg)));

                    mbstowcs(temp, cJSON_GetObjectItem(containersList[i], "Image")->valuestring, 511);
                    CPPUNIT_ASSERT_EQUAL(wstring(temp), context[j].GetProperty(L"Image", CALL_LOCATION(errMsg)).GetValue_MIString(CALL_LOCATION(errMsg)));

                    mbstowcs(temp, cJSON_GetObjectItem(containersList[i], "Repository")->valuestring, 511);
                    CPPUNIT_ASSERT_EQUAL(wstring(temp), context[j].GetProperty(L"Repository", CALL_LOCATION(errMsg)).GetValue_MIString(CALL_LOCATION(errMsg)));

                    mbstowcs(temp, cJSON_GetObjectItem(containersList[i], "ImageTag")->valuestring, 511);
                    CPPUNIT_ASSERT_EQUAL(wstring(temp), context[j].GetProperty(L"ImageTag", CALL_LOCATION(errMsg)).GetValue_MIString(CALL_LOCATION(errMsg)));

                    mbstowcs(temp, cJSON_GetObjectItem(containersList[i], "ComposeGroup")->valuestring, 511);
                    CPPUNIT_ASSERT_EQUAL(wstring(temp), context[j].GetProperty(L"ComposeGroup", CALL_LOCATION(errMsg)).GetValue_MIString(CALL_LOCATION(errMsg)));

                    mbstowcs(temp, cJSON_GetObjectItem(containersList[i], "ContainerHostname")->valuestring, 511);
                    CPPUNIT_ASSERT_EQUAL(wstring(temp), context[j].GetProperty(L"ContainerHostname", CALL_LOCATION(errMsg)).GetValue_MIString(CALL_LOCATION(errMsg)));

                    mbstowcs(temp, cJSON_GetObjectItem(containersList[i], "Computer")->valuestring, 511);
                    CPPUNIT_ASSERT_EQUAL(wstring(temp), context[j].GetProperty(L"Computer", CALL_LOCATION(errMsg)).GetValue_MIString(CALL_LOCATION(errMsg)));

                    mbstowcs(temp, cJSON_GetObjectItem(containersList[i], "Command")->valuestring, 511);
                    CPPUNIT_ASSERT_EQUAL(wstring(temp), context[j].GetProperty(L"Command", CALL_LOCATION(errMsg)).GetValue_MIString(CALL_LOCATION(errMsg)));

                    mbstowcs(temp, cJSON_GetObjectItem(containersList[i], "EnvironmentVar")->valuestring, 511);
                    CPPUNIT_ASSERT_EQUAL(wstring(temp), context[j].GetProperty(L"EnvironmentVar", CALL_LOCATION(errMsg)).GetValue_MIString(CALL_LOCATION(errMsg)));

                    mbstowcs(temp, cJSON_GetObjectItem(containersList[i], "Ports")->valuestring, 511);

                    if (wcslen(temp) > 3)
                    {
                        CPPUNIT_ASSERT_EQUAL(wstring(temp), context[j].GetProperty(L"Ports", CALL_LOCATION(errMsg)).GetValue_MIString(CALL_LOCATION(errMsg)));
                    }

                    mbstowcs(temp, cJSON_GetObjectItem(containersList[i], "Links")->valuestring, 511);
                    CPPUNIT_ASSERT_EQUAL(wstring(temp), context[j].GetProperty(L"Links", CALL_LOCATION(errMsg)).GetValue_MIString(CALL_LOCATION(errMsg)));

                    count = cJSON_GetObjectItem(containersList[i], "ExitCode")->valueint;
                    unsigned providerExitCode = context[j].GetProperty(L"ExitCode", CALL_LOCATION(errMsg)).GetValue_MIUint32(CALL_LOCATION(errMsg));
                    CPPUNIT_ASSERT_EQUAL(count, providerExitCode);
                    CPPUNIT_ASSERT(providerExitCode <= INT_MAX);

                    flag = true;
                    containerCount += 1;
                }
            }

            cJSON_Delete(containersList[i]);
        }

        // Ensure all objects were validated
        CPPUNIT_ASSERT_EQUAL(containerCount, containersList.size());
    }

    void TestEnumerateDeletedContainer()
    {
        wstring errMsg;
        TestableContext context;

        vector<wstring> m_keyNames;
        m_keyNames.push_back(L"InstanceID");

        // Remove cached state
        TestHelper::RunCommand("rm -f /var/opt/microsoft/docker-cimprov/state/ContainerInventory/*");

        // Run a container to ensure that there is at lease one result
        string containerName = TestHelper::NewGuid();
        char command[128];
        snprintf(command, 128, "docker run --name=%s hello-world", containerName.c_str());
        TestHelper::RunCommand(command);

        // Enumerate provider
        StandardTestEnumerateInstances<mi::Container_ContainerInventory_Class_Provider>(m_keyNames, context, CALL_LOCATION(errMsg));

        // Delete container
        snprintf(command, 128, "docker rm -f %s", containerName.c_str());
        TestHelper::RunCommand(command);

        // Enumerate provider
        StandardTestEnumerateInstances<mi::Container_ContainerInventory_Class_Provider>(m_keyNames, context, CALL_LOCATION(errMsg));

        wchar_t wcontainerName[65];
        mbstowcs(wcontainerName, containerName.c_str(), 64);

        for (unsigned i = 0; i < context.Size(); ++i)
        {
            if (!context[i].GetProperty(L"InstanceID", CALL_LOCATION(errMsg)).GetValue_MIString(CALL_LOCATION(errMsg)).compare(wstring(wcontainerName)))
            {
                CPPUNIT_ASSERT_EQUAL(wstring(L"Deleted"), context[i].GetProperty(L"State", CALL_LOCATION(errMsg)).GetValue_MIString(CALL_LOCATION(errMsg)));
            }
        }
    }
};

CPPUNIT_TEST_SUITE_REGISTRATION(ContainerInventoryTest);
