#include <set>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <unistd.h>
#include <uuid/uuid.h>
#include <vector>

#include "TestHelper.h"
#include "Container_HostInventory_Class_Provider.h"
#include "cjson/cJSON.h"

using namespace std;
using namespace SCXCoreLib;

class ContainerHostInventoryTest : public CppUnit::TestFixture
{
    CPPUNIT_TEST_SUITE(ContainerHostInventoryTest);
    CPPUNIT_TEST(TestK8Parsing);
    CPPUNIT_TEST(TestDcosParsing);
    CPPUNIT_TEST(TestSwarmModeParsing);
    CPPUNIT_TEST(TestSwarmParsing);
    CPPUNIT_TEST(TestNonOrchestratedParsing);
    //Running this test at the end to test that the unset of DOCKER_TESTRUNNER_STRING is successful
    CPPUNIT_TEST(TestEnumerateInstances);
    CPPUNIT_TEST_SUITE_END();
private:

public:
    
protected:
    void TestEnumerateInstances()
    {
        wstring errMsg;
        TestableContext context;
        vector<wstring> m_keyNames;
        m_keyNames.push_back(L"InstanceID");

        // Enumerate provider. This just tests if the provider is able to pick up properties from a docker info call on the machine
        StandardTestEnumerateInstances<mi::Container_HostInventory_Class_Provider>(m_keyNames, context, CALL_LOCATION(errMsg));
        CPPUNIT_ASSERT_EQUAL(1, context.Size());        
		
        // Only check that the values are present and within the valid range because it is not possible to create a controlled environment
        for (unsigned i = 0; i < context.Size(); ++i)
        {
            wstring instanceId = context[i].GetProperty(L"InstanceID", CALL_LOCATION(errMsg)).GetValue_MIString(CALL_LOCATION(errMsg));
            CPPUNIT_ASSERT(instanceId.length());
            CPPUNIT_ASSERT(context[i].GetProperty(L"Computer", CALL_LOCATION(errMsg)).GetValue_MIString(CALL_LOCATION(errMsg)).length());
            CPPUNIT_ASSERT(context[i].GetProperty(L"DockerVersion", CALL_LOCATION(errMsg)).GetValue_MIString(CALL_LOCATION(errMsg)).length());
            CPPUNIT_ASSERT(context[i].GetProperty(L"OperatingSystem", CALL_LOCATION(errMsg)).GetValue_MIString(CALL_LOCATION(errMsg)).length());
            CPPUNIT_ASSERT(context[i].GetProperty(L"Volume", CALL_LOCATION(errMsg)).GetValue_MIString(CALL_LOCATION(errMsg)).length());
            CPPUNIT_ASSERT(context[i].GetProperty(L"Network", CALL_LOCATION(errMsg)).GetValue_MIString(CALL_LOCATION(errMsg)).length());
            CPPUNIT_ASSERT(context[i].GetProperty(L"NodeRole", CALL_LOCATION(errMsg)).GetValue_MIString(CALL_LOCATION(errMsg)).length());
            CPPUNIT_ASSERT(context[i].GetProperty(L"OrchestratorType", CALL_LOCATION(errMsg)).GetValue_MIString(CALL_LOCATION(errMsg)).length());
        }
    }

    void TestK8Parsing()
    {
        wstring errMsg;
        TestableContext context;
        vector<wstring> m_keyNames;
        m_keyNames.push_back(L"InstanceID");
        string k8NodeInfoString = "\r\n{\"ID\":\"4H4P:Z5O5:MMPA:BSDD:44TG:3FRY:AJ5Z:SPU4:LIEV:2XIF:SDJ3:FWLL\",\"Containers\":23,\"ContainersRunning\":13,\"ContainersPaused\":0,\"ContainersStopped\":10,\"Images\":25,\"Driver\":\"overlay\",\"DriverStatus\":[[\"Backing Filesystem\",\"extfs\"]],\"SystemStatus\":null,\"Plugins\":{\"Volume\":[\"local\"],\"Network\":[\"host\",\"bridge\",\"null\",\"overlay\"],\"Authorization\":null},\"MemoryLimit\":true,\"SwapLimit\":false,\"KernelMemory\":true,\"CpuCfsPeriod\":true,\"CpuCfsQuota\":true,\"CPUShares\":true,\"CPUSet\":true,\"IPv4Forwarding\":true,\"BridgeNfIptables\":true,\"BridgeNfIp6tables\":true,\"Debug\":false,\"NFd\":89,\"OomKillDisable\":true,\"NGoroutines\":89,\"SystemTime\":\"2017-04-25T22:06:56.371719716Z\",\"ExecutionDriver\":\"\",\"LoggingDriver\":\"json-file\",\"CgroupDriver\":\"cgroupfs\",\"NEventsListener\":0,\"KernelVersion\":\"4.4.0-72-generic\",\"OperatingSystem\":\"Ubuntu 16.04 LTS\",\"OSType\":\"linux\",\"Architecture\":\"x86_64\",\"IndexServerAddress\":\"https://index.docker.io/v1/\",\"RegistryConfig\":{\"InsecureRegistryCIDRs\":[\"127.0.0.0/8\"],\"IndexConfigs\":{\"docker.io\":{\"Name\":\"docker.io\",\"Mirrors\":null,\"Secure\":true,\"Official\":true}},\"Mirrors\":null},\"NCPU\":2,\"MemTotal\":7305641984,\"DockerRootDir\":\"/var/lib/docker\",\"HttpProxy\":\"\",\"HttpsProxy\":\"\",\"NoProxy\":\"\",\"Name\":\"k8-master-71E8D996-0\",\"Labels\":null,\"ExperimentalBuild\":false,\"ServerVersion\":\"1.12.6\",\"ClusterStore\":\"\",\"ClusterAdvertise\":\"\",\"SecurityOptions\":[\"apparmor\",\"seccomp\"],\"Runtimes\":{\"runc\":{\"path\":\"docker-runc\"}},\"DefaultRuntime\":\"runc\",\"Swarm\":{\"NodeID\":\"\",\"NodeAddr\":\"\",\"LocalNodeState\":\"inactive\",\"ControlAvailable\":false,\"Error\":\"\",\"RemoteManagers\":null,\"Nodes\":0,\"Managers\":0,\"Cluster\":{\"ID\":\"\",\"Version\":{},\"CreatedAt\":\"0001-01-01T00:00:00Z\",\"UpdatedAt\":\"0001-01-01T00:00:00Z\",\"Spec\":{\"Orchestration\":{},\"Raft\":{},\"Dispatcher\":{},\"CAConfig\":{},\"TaskDefaults\":{}}}},\"LiveRestoreEnabled\":false}";
        setenv(DOCKER_TESTRUNNER_STRING,k8NodeInfoString.c_str(),1);
        setenv(KUBENETES_SERVICE_HOST_STRING ,"somevalue",1);

        // Enumerate provider. Use k8 specific response instead of the standard docker info response
        StandardTestEnumerateInstances<mi::Container_HostInventory_Class_Provider>(m_keyNames, context, CALL_LOCATION(errMsg));
        CPPUNIT_ASSERT_EQUAL(1, context.Size());

        for (unsigned i = 0; i < context.Size(); ++i)
        {
            wstring instanceId = context[i].GetProperty(L"InstanceID", CALL_LOCATION(errMsg)).GetValue_MIString(CALL_LOCATION(errMsg));
            CPPUNIT_ASSERT(instanceId.length());
            CPPUNIT_ASSERT_EQUAL(std::wstring(L"k8-master-71E8D996-0"), context[i].GetProperty(L"Computer", CALL_LOCATION(errMsg)).GetValue_MIString(CALL_LOCATION(errMsg))) ;
            CPPUNIT_ASSERT_EQUAL(std::wstring(L"1.12.6"), context[i].GetProperty(L"DockerVersion", CALL_LOCATION(errMsg)).GetValue_MIString(CALL_LOCATION(errMsg)));
            CPPUNIT_ASSERT_EQUAL(std::wstring(L"Ubuntu 16.04 LTS"), context[i].GetProperty(L"OperatingSystem", CALL_LOCATION(errMsg)).GetValue_MIString(CALL_LOCATION(errMsg)));
            CPPUNIT_ASSERT_EQUAL(std::wstring(L"local"), context[i].GetProperty(L"Volume", CALL_LOCATION(errMsg)).GetValue_MIString(CALL_LOCATION(errMsg)));
            CPPUNIT_ASSERT_EQUAL(std::wstring(L"Master"), context[i].GetProperty(L"NodeRole", CALL_LOCATION(errMsg)).GetValue_MIString(CALL_LOCATION(errMsg)));
            CPPUNIT_ASSERT_EQUAL(std::wstring(L"Kubernetes"), context[i].GetProperty(L"OrchestratorType", CALL_LOCATION(errMsg)).GetValue_MIString(CALL_LOCATION(errMsg)));
        }

        unsetenv(DOCKER_TESTRUNNER_STRING);
        unsetenv(KUBENETES_SERVICE_HOST_STRING);
    }

    void TestDcosParsing()
    {
        wstring errMsg;
        TestableContext context;
        vector<wstring> m_keyNames;
        m_keyNames.push_back(L"InstanceID");
        string dcosNodeInfoString = "\r\n{\"ID\":\"4H4P:Z5O5:MMPA:BSDD:44TG:3FRY:AJ5Z:SPU4:LIEV:2XIF:SDJ3:FWLL\",\"Containers\":23,\"ContainersRunning\":13,\"ContainersPaused\":0,\"ContainersStopped\":10,\"Images\":25,\"Driver\":\"overlay\",\"DriverStatus\":[[\"Backing Filesystem\",\"extfs\"]],\"SystemStatus\":null,\"Plugins\":{\"Volume\":[\"local\"],\"Network\":[\"host\",\"bridge\",\"null\",\"overlay\"],\"Authorization\":null},\"MemoryLimit\":true,\"SwapLimit\":false,\"KernelMemory\":true,\"CpuCfsPeriod\":true,\"CpuCfsQuota\":true,\"CPUShares\":true,\"CPUSet\":true,\"IPv4Forwarding\":true,\"BridgeNfIptables\":true,\"BridgeNfIp6tables\":true,\"Debug\":false,\"NFd\":89,\"OomKillDisable\":true,\"NGoroutines\":89,\"SystemTime\":\"2017-04-25T22:06:56.371719716Z\",\"ExecutionDriver\":\"\",\"LoggingDriver\":\"json-file\",\"CgroupDriver\":\"cgroupfs\",\"NEventsListener\":0,\"KernelVersion\":\"4.4.0-72-generic\",\"OperatingSystem\":\"Ubuntu 16.04 LTS\",\"OSType\":\"linux\",\"Architecture\":\"x86_64\",\"IndexServerAddress\":\"https://index.docker.io/v1/\",\"RegistryConfig\":{\"InsecureRegistryCIDRs\":[\"127.0.0.0/8\"],\"IndexConfigs\":{\"docker.io\":{\"Name\":\"docker.io\",\"Mirrors\":null,\"Secure\":true,\"Official\":true}},\"Mirrors\":null},\"NCPU\":2,\"MemTotal\":7305641984,\"DockerRootDir\":\"/var/lib/docker\",\"HttpProxy\":\"\",\"HttpsProxy\":\"\",\"NoProxy\":\"\",\"Name\":\"dcos-master-71E8D996-0\",\"Labels\":null,\"ExperimentalBuild\":false,\"ServerVersion\":\"1.12.6\",\"ClusterStore\":\"\",\"ClusterAdvertise\":\"\",\"SecurityOptions\":[\"apparmor\",\"seccomp\"],\"Runtimes\":{\"runc\":{\"path\":\"docker-runc\"}},\"DefaultRuntime\":\"runc\",\"Swarm\":{\"NodeID\":\"\",\"NodeAddr\":\"\",\"LocalNodeState\":\"inactive\",\"ControlAvailable\":false,\"Error\":\"\",\"RemoteManagers\":null,\"Nodes\":0,\"Managers\":0,\"Cluster\":{\"ID\":\"\",\"Version\":{},\"CreatedAt\":\"0001-01-01T00:00:00Z\",\"UpdatedAt\":\"0001-01-01T00:00:00Z\",\"Spec\":{\"Orchestration\":{},\"Raft\":{},\"Dispatcher\":{},\"CAConfig\":{},\"TaskDefaults\":{}}}},\"LiveRestoreEnabled\":false}";
        setenv(DOCKER_TESTRUNNER_STRING,dcosNodeInfoString.c_str(),1);

        // Enumerate provider. Similar to k8 testing
        StandardTestEnumerateInstances<mi::Container_HostInventory_Class_Provider>(m_keyNames, context, CALL_LOCATION(errMsg));
        CPPUNIT_ASSERT_EQUAL(1, context.Size());

        for (unsigned i = 0; i < context.Size(); ++i)
        {
            wstring instanceId = context[i].GetProperty(L"InstanceID", CALL_LOCATION(errMsg)).GetValue_MIString(CALL_LOCATION(errMsg));
            CPPUNIT_ASSERT(instanceId.length());
            CPPUNIT_ASSERT_EQUAL(std::wstring(L"dcos-master-71E8D996-0"), context[i].GetProperty(L"Computer", CALL_LOCATION(errMsg)).GetValue_MIString(CALL_LOCATION(errMsg))) ;
            CPPUNIT_ASSERT_EQUAL(std::wstring(L"Master"), context[i].GetProperty(L"NodeRole", CALL_LOCATION(errMsg)).GetValue_MIString(CALL_LOCATION(errMsg)));
            CPPUNIT_ASSERT_EQUAL(std::wstring(L"DC/OS"), context[i].GetProperty(L"OrchestratorType", CALL_LOCATION(errMsg)).GetValue_MIString(CALL_LOCATION(errMsg)));
        }

        unsetenv(DOCKER_TESTRUNNER_STRING);
    }

    void TestSwarmModeParsing()
    {
        wstring errMsg;
        TestableContext context;
        vector<wstring> m_keyNames;
        m_keyNames.push_back(L"InstanceID");
        string swarmModeNodeInfoString = "\r\n{\"ID\":\"4H4P:Z5O5:MMPA:BSDD:44TG:3FRY:AJ5Z:SPU4:LIEV:2XIF:SDJ3:FWLL\",\"Containers\":23,\"ContainersRunning\":13,\"ContainersPaused\":0,\"ContainersStopped\":10,\"Images\":25,\"Driver\":\"overlay\",\"DriverStatus\":[[\"Backing Filesystem\",\"extfs\"]],\"SystemStatus\":null,\"Plugins\":{\"Volume\":[\"local\"],\"Network\":[\"host\",\"bridge\",\"null\",\"overlay\"],\"Authorization\":null},\"MemoryLimit\":true,\"SwapLimit\":false,\"KernelMemory\":true,\"CpuCfsPeriod\":true,\"CpuCfsQuota\":true,\"CPUShares\":true,\"CPUSet\":true,\"IPv4Forwarding\":true,\"BridgeNfIptables\":true,\"BridgeNfIp6tables\":true,\"Debug\":false,\"NFd\":89,\"OomKillDisable\":true,\"NGoroutines\":89,\"SystemTime\":\"2017-04-25T22:06:56.371719716Z\",\"ExecutionDriver\":\"\",\"LoggingDriver\":\"json-file\",\"CgroupDriver\":\"cgroupfs\",\"NEventsListener\":0,\"KernelVersion\":\"4.4.0-72-generic\",\"OperatingSystem\":\"Ubuntu 16.04 LTS\",\"OSType\":\"linux\",\"Architecture\":\"x86_64\",\"IndexServerAddress\":\"https://index.docker.io/v1/\",\"RegistryConfig\":{\"InsecureRegistryCIDRs\":[\"127.0.0.0/8\"],\"IndexConfigs\":{\"docker.io\":{\"Name\":\"docker.io\",\"Mirrors\":null,\"Secure\":true,\"Official\":true}},\"Mirrors\":null},\"NCPU\":2,\"MemTotal\":7305641984,\"DockerRootDir\":\"/var/lib/docker\",\"HttpProxy\":\"\",\"HttpsProxy\":\"\",\"NoProxy\":\"\",\"Name\":\"swarmm-agent-71E8D996-0\",\"Labels\":null,\"ExperimentalBuild\":false,\"ServerVersion\":\"1.12.6\",\"ClusterStore\":\"\",\"ClusterAdvertise\":\"\",\"SecurityOptions\":[\"apparmor\",\"seccomp\"],\"Runtimes\":{\"runc\":{\"path\":\"docker-runc\"}},\"DefaultRuntime\":\"runc\",\"Swarm\":{\"NodeID\":\"\",\"NodeAddr\":\"\",\"LocalNodeState\":\"inactive\",\"ControlAvailable\":false,\"Error\":\"\",\"RemoteManagers\":null,\"Nodes\":0,\"Managers\":0,\"Cluster\":{\"ID\":\"\",\"Version\":{},\"CreatedAt\":\"0001-01-01T00:00:00Z\",\"UpdatedAt\":\"0001-01-01T00:00:00Z\",\"Spec\":{\"Orchestration\":{},\"Raft\":{},\"Dispatcher\":{},\"CAConfig\":{},\"TaskDefaults\":{}}}},\"LiveRestoreEnabled\":false}";
        setenv(DOCKER_TESTRUNNER_STRING,swarmModeNodeInfoString.c_str(),1);

        // Enumerate provider. Similar to k8 testing
        StandardTestEnumerateInstances<mi::Container_HostInventory_Class_Provider>(m_keyNames, context, CALL_LOCATION(errMsg));
        CPPUNIT_ASSERT_EQUAL(1, context.Size());

        for (unsigned i = 0; i < context.Size(); ++i)
        {
            wstring instanceId = context[i].GetProperty(L"InstanceID", CALL_LOCATION(errMsg)).GetValue_MIString(CALL_LOCATION(errMsg));
            CPPUNIT_ASSERT(instanceId.length());  
            CPPUNIT_ASSERT_EQUAL(std::wstring(L"swarmm-agent-71E8D996-0"), context[i].GetProperty(L"Computer", CALL_LOCATION(errMsg)).GetValue_MIString(CALL_LOCATION(errMsg))) ;
            CPPUNIT_ASSERT_EQUAL(std::wstring(L"Agent"), context[i].GetProperty(L"NodeRole", CALL_LOCATION(errMsg)).GetValue_MIString(CALL_LOCATION(errMsg)));
            CPPUNIT_ASSERT_EQUAL(std::wstring(L"Swarm Mode"), context[i].GetProperty(L"OrchestratorType", CALL_LOCATION(errMsg)).GetValue_MIString(CALL_LOCATION(errMsg)));
        }

        unsetenv(DOCKER_TESTRUNNER_STRING);
    }

    void TestSwarmParsing()
    {
        wstring errMsg;
        TestableContext context;
        vector<wstring> m_keyNames;
        m_keyNames.push_back(L"InstanceID");
        string swarmNodeInfoString = "\r\n{\"ID\":\"4H4P:Z5O5:MMPA:BSDD:44TG:3FRY:AJ5Z:SPU4:LIEV:2XIF:SDJ3:FWLL\",\"Containers\":23,\"ContainersRunning\":13,\"ContainersPaused\":0,\"ContainersStopped\":10,\"Images\":25,\"Driver\":\"overlay\",\"DriverStatus\":[[\"Backing Filesystem\",\"extfs\"]],\"SystemStatus\":null,\"Plugins\":{\"Volume\":[\"local\"],\"Network\":[\"host\",\"bridge\",\"null\",\"overlay\"],\"Authorization\":null},\"MemoryLimit\":true,\"SwapLimit\":false,\"KernelMemory\":true,\"CpuCfsPeriod\":true,\"CpuCfsQuota\":true,\"CPUShares\":true,\"CPUSet\":true,\"IPv4Forwarding\":true,\"BridgeNfIptables\":true,\"BridgeNfIp6tables\":true,\"Debug\":false,\"NFd\":89,\"OomKillDisable\":true,\"NGoroutines\":89,\"SystemTime\":\"2017-04-25T22:06:56.371719716Z\",\"ExecutionDriver\":\"\",\"LoggingDriver\":\"json-file\",\"CgroupDriver\":\"cgroupfs\",\"NEventsListener\":0,\"KernelVersion\":\"4.4.0-72-generic\",\"OperatingSystem\":\"Ubuntu 16.04 LTS\",\"OSType\":\"linux\",\"Architecture\":\"x86_64\",\"IndexServerAddress\":\"https://index.docker.io/v1/\",\"RegistryConfig\":{\"InsecureRegistryCIDRs\":[\"127.0.0.0/8\"],\"IndexConfigs\":{\"docker.io\":{\"Name\":\"docker.io\",\"Mirrors\":null,\"Secure\":true,\"Official\":true}},\"Mirrors\":null},\"NCPU\":2,\"MemTotal\":7305641984,\"DockerRootDir\":\"/var/lib/docker\",\"HttpProxy\":\"\",\"HttpsProxy\":\"\",\"NoProxy\":\"\",\"Name\":\"swarm-agent-71E8D996-0\",\"Labels\":null,\"ExperimentalBuild\":false,\"ServerVersion\":\"1.12.6\",\"ClusterStore\":\"\",\"ClusterAdvertise\":\"\",\"SecurityOptions\":[\"apparmor\",\"seccomp\"],\"Runtimes\":{\"runc\":{\"path\":\"docker-runc\"}},\"DefaultRuntime\":\"runc\",\"Swarm\":{\"NodeID\":\"\",\"NodeAddr\":\"\",\"LocalNodeState\":\"inactive\",\"ControlAvailable\":false,\"Error\":\"\",\"RemoteManagers\":null,\"Nodes\":0,\"Managers\":0,\"Cluster\":{\"ID\":\"\",\"Version\":{},\"CreatedAt\":\"0001-01-01T00:00:00Z\",\"UpdatedAt\":\"0001-01-01T00:00:00Z\",\"Spec\":{\"Orchestration\":{},\"Raft\":{},\"Dispatcher\":{},\"CAConfig\":{},\"TaskDefaults\":{}}}},\"LiveRestoreEnabled\":false}";
        setenv(DOCKER_TESTRUNNER_STRING,swarmNodeInfoString.c_str(),1);

        // Enumerate provider. Similar to k8 testing
        StandardTestEnumerateInstances<mi::Container_HostInventory_Class_Provider>(m_keyNames, context, CALL_LOCATION(errMsg));
        CPPUNIT_ASSERT_EQUAL(1, context.Size());

        for (unsigned i = 0; i < context.Size(); ++i)
        {
            wstring instanceId = context[i].GetProperty(L"InstanceID", CALL_LOCATION(errMsg)).GetValue_MIString(CALL_LOCATION(errMsg));
            CPPUNIT_ASSERT(instanceId.length());
            CPPUNIT_ASSERT_EQUAL(std::wstring(L"swarm-agent-71E8D996-0"), context[i].GetProperty(L"Computer", CALL_LOCATION(errMsg)).GetValue_MIString(CALL_LOCATION(errMsg))) ;
            CPPUNIT_ASSERT_EQUAL(std::wstring(L"Agent"), context[i].GetProperty(L"NodeRole", CALL_LOCATION(errMsg)).GetValue_MIString(CALL_LOCATION(errMsg)));
            CPPUNIT_ASSERT_EQUAL(std::wstring(L"Swarm"), context[i].GetProperty(L"OrchestratorType", CALL_LOCATION(errMsg)).GetValue_MIString(CALL_LOCATION(errMsg)));
        }
    }

    void TestNonOrchestratedParsing()
    {
        wstring errMsg;
        TestableContext context;
        vector<wstring> m_keyNames;
        m_keyNames.push_back(L"InstanceID");
        string  nonOrechestratedNodeInfoString = "\r\n{\"ID\":\"MR7R:T4QM:X3TD:VL6Q:BTO3:54RC:VEAX:2ERN:AWEX:DLFA:6YEP:SZ6I\",\"Containers\":105,\"ContainersRunning\":0,\"ContainersPaused\":0,\"ContainersStopped\":105,\"Images\":9,\"Driver\":\"aufs\",\"DriverStatus\":[[\"Root Dir\",\"/var/lib/docker/aufs\"],[\"Backing Filesystem\",\"extfs\"],[\"Dirs\",\"233\"],[\"Dirperm1 Supported\",\"true\"]],\"SystemStatus\":null,\"Plugins\":{\"Volume\":[\"local\"],\"Network\":[\"bridge\",\"host\",\"macvlan\",\"null\",\"overlay\"],\"Authorization\":null},\"MemoryLimit\":true,\"SwapLimit\":false,\"KernelMemory\":true,\"CpuCfsPeriod\":true,\"CpuCfsQuota\":true,\"CPUShares\":true,\"CPUSet\":true,\"IPv4Forwarding\":true,\"BridgeNfIptables\":true,\"BridgeNfIp6tables\":true,\"Debug\":false,\"NFd\":15,\"OomKillDisable\":true,\"NGoroutines\":23,\"SystemTime\":\"2017-04-25T18:05:00.430709779-04:00\",\"LoggingDriver\":\"json-file\",\"CgroupDriver\":\"cgroupfs\",\"NEventsListener\":0,\"KernelVersion\":\"4.4.0-72-generic\",\"OperatingSystem\":\"Ubuntu 16.04.2 LTS\",\"OSType\":\"linux\",\"Architecture\":\"x86_64\",\"IndexServerAddress\":\"https://index.docker.io/v1/\",\"RegistryConfig\":{\"InsecureRegistryCIDRs\":[\"127.0.0.0/8\"],\"IndexConfigs\":{\"docker.io\":{\"Name\":\"docker.io\",\"Mirrors\":null,\"Secure\":true,\"Official\":true}},\"Mirrors\":[]},\"NCPU\":4,\"MemTotal\":8336683008,\"DockerRootDir\":\"/var/lib/docker\",\"HttpProxy\":\"\",\"HttpsProxy\":\"\",\"NoProxy\":\"\",\"Name\":\"chocoboyLnx\",\"Labels\":null,\"ExperimentalBuild\":false,\"ServerVersion\":\"17.03.0-ce\",\"ClusterStore\":\"\",\"ClusterAdvertise\":\"\",\"Runtimes\":{\"runc\":{\"path\":\"docker-runc\"}},\"DefaultRuntime\":\"runc\",\"Swarm\":{\"NodeID\":\"\",\"NodeAddr\":\"\",\"LocalNodeState\":\"inactive\",\"ControlAvailable\":false,\"Error\":\"\",\"RemoteManagers\":null,\"Nodes\":0,\"Managers\":0,\"Cluster\":{\"ID\":\"\",\"Version\":{},\"CreatedAt\":\"0001-01-01T00:00:00Z\",\"UpdatedAt\":\"0001-01-01T00:00:00Z\",\"Spec\":{\"Orchestration\":{},\"Raft\":{\"ElectionTick\":0,\"HeartbeatTick\":0},\"Dispatcher\":{},\"CAConfig\":{},\"TaskDefaults\":{},\"EncryptionConfig\":{\"AutoLockManagers\":false}}}},\"LiveRestoreEnabled\":false,\"Isolation\":\"\",\"InitBinary\":\"docker-init\",\"ContainerdCommit\":{\"ID\":\"977c511eda0925a723debdc94d09459af49d082a\",\"Expected\":\"977c511eda0925a723debdc94d09459af49d082a\"},\"RuncCommit\":{\"ID\":\"a01dafd48bc1c7cc12bdb01206f9fea7dd6feb70\",\"Expected\":\"a01dafd48bc1c7cc12bdb01206f9fea7dd6feb70\"},\"InitCommit\":{\"ID\":\"949e6fa\",\"Expected\":\"949e6fa\"},\"SecurityOptions\":[\"name=apparmor\",\"name=seccomp,profile=default\"]}";
        setenv(DOCKER_TESTRUNNER_STRING,nonOrechestratedNodeInfoString.c_str(),1);

        // Enumerate provider. Similar to k8 testing
        StandardTestEnumerateInstances<mi::Container_HostInventory_Class_Provider>(m_keyNames, context, CALL_LOCATION(errMsg));
        CPPUNIT_ASSERT_EQUAL(1, context.Size());

        for (unsigned i = 0; i < context.Size(); ++i)
        {
            wstring instanceId = context[i].GetProperty(L"InstanceID", CALL_LOCATION(errMsg)).GetValue_MIString(CALL_LOCATION(errMsg));
            CPPUNIT_ASSERT(instanceId.length());
            CPPUNIT_ASSERT_EQUAL(std::wstring(L"chocoboyLnx"), context[i].GetProperty(L"Computer", CALL_LOCATION(errMsg)).GetValue_MIString(CALL_LOCATION(errMsg))) ;
            CPPUNIT_ASSERT_EQUAL(std::wstring(L"17.03.0-ce"), context[i].GetProperty(L"DockerVersion", CALL_LOCATION(errMsg)).GetValue_MIString(CALL_LOCATION(errMsg)));
            CPPUNIT_ASSERT_EQUAL(std::wstring(L"Ubuntu 16.04.2 LTS"), context[i].GetProperty(L"OperatingSystem", CALL_LOCATION(errMsg)).GetValue_MIString(CALL_LOCATION(errMsg)));
            CPPUNIT_ASSERT_EQUAL(std::wstring(L"Not Orchestrated"), context[i].GetProperty(L"NodeRole", CALL_LOCATION(errMsg)).GetValue_MIString(CALL_LOCATION(errMsg)));
            CPPUNIT_ASSERT_EQUAL(std::wstring(L"None"), context[i].GetProperty(L"OrchestratorType", CALL_LOCATION(errMsg)).GetValue_MIString(CALL_LOCATION(errMsg)));
        }
    }
};

CPPUNIT_TEST_SUITE_REGISTRATION(ContainerHostInventoryTest);
