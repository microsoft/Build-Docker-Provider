#include <set>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <unistd.h>
#include <uuid/uuid.h>
#include <vector>

#include "Container_Process_Class_Provider.h"
#include "TestHelper.h"
#include "cjson/cJSON.h"

class ContainerProcessTest : public CppUnit::TestFixture
{
    CPPUNIT_TEST_SUITE(ContainerProcessTest);
    CPPUNIT_TEST(Testk8EnumerateInstances);
    CPPUNIT_TEST(TestNonk8EnumerateInstances);
    CPPUNIT_TEST_SUITE_END();

private:
    vector<wstring> processCmd;

public:
    void setUp()
    {        
        processCmd.push_back(wstring(L"/bin/sh -c sleep inf;"));
        processCmd.push_back(wstring(L"sleep inf"));
        fputc('\n', stdout);
        //delete all running containers
        system("docker ps -a -q | xargs docker rm -f");
    }

    void tearDown()
    {
        processCmd.clear();
    }

protected:
    void Testk8EnumerateInstances()
    {
        wstring errMsg;
        TestableContext context;
        vector<wstring> m_keyNames;
        m_keyNames.push_back(L"InstanceID");

        system("docker run -d --name=k8s_cpt.sandboxname_cptpodname_cptnamepsace_cptid ubuntu /bin/sh -c \"sleep inf;\"");

        StandardTestEnumerateInstances<mi::Container_Process_Class_Provider>(m_keyNames, context, CALL_LOCATION(errMsg));
        CPPUNIT_ASSERT_EQUAL(2, context.Size());        
		
        for (unsigned i = 0; i < context.Size(); ++i)
        {
            wstring instanceId = context[i].GetProperty(L"InstanceID", CALL_LOCATION(errMsg)).GetValue_MIString(CALL_LOCATION(errMsg));
            CPPUNIT_ASSERT(instanceId.length());
            CPPUNIT_ASSERT_EQUAL(wstring(L"cptpodname"), context[i].GetProperty(L"Pod", CALL_LOCATION(errMsg)).GetValue_MIString(CALL_LOCATION(errMsg)));
            CPPUNIT_ASSERT_EQUAL(wstring(L"cptnamepsace"), context[i].GetProperty(L"Namespace", CALL_LOCATION(errMsg)).GetValue_MIString(CALL_LOCATION(errMsg)));
            CPPUNIT_ASSERT_EQUAL(wstring(L"root"), context[i].GetProperty(L"Uid", CALL_LOCATION(errMsg)).GetValue_MIString(CALL_LOCATION(errMsg)));
            CPPUNIT_ASSERT(context[i].GetProperty(L"PID", CALL_LOCATION(errMsg)).GetValue_MIString(CALL_LOCATION(errMsg)).length());
            CPPUNIT_ASSERT(context[i].GetProperty(L"PPID", CALL_LOCATION(errMsg)).GetValue_MIString(CALL_LOCATION(errMsg)).length());
            CPPUNIT_ASSERT(context[i].GetProperty(L"C", CALL_LOCATION(errMsg)).GetValue_MIString(CALL_LOCATION(errMsg)).length());
            CPPUNIT_ASSERT(context[i].GetProperty(L"STIME", CALL_LOCATION(errMsg)).GetValue_MIString(CALL_LOCATION(errMsg)).length());
            CPPUNIT_ASSERT(context[i].GetProperty(L"TIME", CALL_LOCATION(errMsg)).GetValue_MIString(CALL_LOCATION(errMsg)).length());
            CPPUNIT_ASSERT_EQUAL(wstring(L"?"),context[i].GetProperty(L"Tty", CALL_LOCATION(errMsg)).GetValue_MIString(CALL_LOCATION(errMsg)));
            CPPUNIT_ASSERT_EQUAL(processCmd[i], context[i].GetProperty(L"Cmd", CALL_LOCATION(errMsg)).GetValue_MIString(CALL_LOCATION(errMsg)));
            CPPUNIT_ASSERT(context[i].GetProperty(L"Id", CALL_LOCATION(errMsg)).GetValue_MIString(CALL_LOCATION(errMsg)).length());
            CPPUNIT_ASSERT_EQUAL(wstring(L"k8s_cpt.sandboxname_cptpodname_cptnamepsace_cptid"), context[i].GetProperty(L"Name", CALL_LOCATION(errMsg)).GetValue_MIString(CALL_LOCATION(errMsg)));
        }
        system("docker rm -f k8s_cpt.sandboxname_cptpodname_cptnamepsace_cptid");

    }

    void TestNonk8EnumerateInstances()
    {
        wstring errMsg;
        TestableContext context;
        vector<wstring> m_keyNames;
        m_keyNames.push_back(L"InstanceID");

        system("docker run -d --name=ContainerProcessTest ubuntu /bin/sh -c \"sleep inf;\"");

        StandardTestEnumerateInstances<mi::Container_Process_Class_Provider>(m_keyNames, context, CALL_LOCATION(errMsg));
        CPPUNIT_ASSERT_EQUAL(2, context.Size());        
		
        for (unsigned i = 0; i < context.Size(); ++i)
        {
            wstring instanceId = context[i].GetProperty(L"InstanceID", CALL_LOCATION(errMsg)).GetValue_MIString(CALL_LOCATION(errMsg));
            CPPUNIT_ASSERT(instanceId.length());
            CPPUNIT_ASSERT_EQUAL(wstring(L"None"), context[i].GetProperty(L"Pod", CALL_LOCATION(errMsg)).GetValue_MIString(CALL_LOCATION(errMsg)));
            CPPUNIT_ASSERT_EQUAL(wstring(L"None"), context[i].GetProperty(L"Namespace", CALL_LOCATION(errMsg)).GetValue_MIString(CALL_LOCATION(errMsg)));
            CPPUNIT_ASSERT_EQUAL(wstring(L"root"),context[i].GetProperty(L"Uid", CALL_LOCATION(errMsg)).GetValue_MIString(CALL_LOCATION(errMsg)));
            CPPUNIT_ASSERT(context[i].GetProperty(L"PID", CALL_LOCATION(errMsg)).GetValue_MIString(CALL_LOCATION(errMsg)).length());
            CPPUNIT_ASSERT(context[i].GetProperty(L"PPID", CALL_LOCATION(errMsg)).GetValue_MIString(CALL_LOCATION(errMsg)).length());
            CPPUNIT_ASSERT(context[i].GetProperty(L"C", CALL_LOCATION(errMsg)).GetValue_MIString(CALL_LOCATION(errMsg)).length());
            CPPUNIT_ASSERT(context[i].GetProperty(L"STIME", CALL_LOCATION(errMsg)).GetValue_MIString(CALL_LOCATION(errMsg)).length());
            CPPUNIT_ASSERT(context[i].GetProperty(L"TIME", CALL_LOCATION(errMsg)).GetValue_MIString(CALL_LOCATION(errMsg)).length());
            CPPUNIT_ASSERT_EQUAL(wstring(L"?"),context[i].GetProperty(L"Tty", CALL_LOCATION(errMsg)).GetValue_MIString(CALL_LOCATION(errMsg)));
            CPPUNIT_ASSERT_EQUAL(processCmd[i], context[i].GetProperty(L"Cmd", CALL_LOCATION(errMsg)).GetValue_MIString(CALL_LOCATION(errMsg)));
            CPPUNIT_ASSERT(context[i].GetProperty(L"Id", CALL_LOCATION(errMsg)).GetValue_MIString(CALL_LOCATION(errMsg)).length());
            CPPUNIT_ASSERT_EQUAL(wstring(L"ContainerProcessTest"),context[i].GetProperty(L"Name", CALL_LOCATION(errMsg)).GetValue_MIString(CALL_LOCATION(errMsg)));
        }
        system("docker rm -f ContainerProcessTest");
    }
};

CPPUNIT_TEST_SUITE_REGISTRATION(ContainerProcessTest);
