#ifndef _TEST_HELPER_H_
#define _TEST_HELPER_H_

#include <scxcorelib/scxcmn.h>
#include <scxcorelib/scxprocess.h>
#include <scxcorelib/stringaid.h>
#include <testutils/scxunit.h>
#include <testutils/providertestutils.h>

using namespace std;
using namespace SCXCoreLib;

class TestHelper
{
public:
    static string NewGuid()
    {
        uuid_t uuid;
        uuid_generate_random(uuid);
        char s[37];
        uuid_unparse(uuid, s);
        return s;
    }

    static string RunCommand(const char* command)
    {
        istringstream processInput;
        ostringstream processOutput;
        ostringstream processErr;

        CPPUNIT_ASSERT(!SCXProcess::Run(StrFromMultibyte(string(command)), processInput, processOutput, processErr, 0));
        CPPUNIT_ASSERT_EQUAL(processErr.str(), string());

        return processOutput.str();
    }
};

#endif /* _TEST_HELPER_H_ */
