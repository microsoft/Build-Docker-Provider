/*
 * --------------------------------- START OF LICENSE ----------------------------
 *
 * MySQL cimprov ver. 1.0
 *
 * Copyright (c) Microsoft Corporation
 *
 * All rights reserved. 
 *
 * MIT License
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the ""Software""), to deal
 * in the Software without restriction, including without limitation the rights to
 * use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies
 * of the Software, and to permit persons to whom the Software is furnished to do
 * so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED *AS IS*, WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 *
 * ---------------------------------- END OF LICENSE -----------------------------
*/
/**
    \file        

    \brief       Contains log policy of the testrunner.

    \date        2008-08-06 16:30:27

*/
/*----------------------------------------------------------------------------*/

#include <scxcorelib/scxlogpolicy.h>

/*----------------------------------------------------------------------------*/
/**
    Defines the testrunner log policy.
*/
class TestrunnerLogPolicy : public SCXCoreLib::SCXLogPolicy
{
public:
    /**
        Virtual destructor.
    */
    virtual ~TestrunnerLogPolicy() {}

    /**
        Get the path of the log config file.
        \returns the path of the log config file.
    */
    virtual SCXCoreLib::SCXFilePath GetConfigFileName() const
    {
        return SCXCoreLib::SCXFilePath(L"./docker-cimprov.conf");
    }

    /**
        If no config is specified, then log output will be written
        to the file specified by this method.
        \returns Path to the default log file.
    */
    virtual SCXCoreLib::SCXFilePath GetDefaultLogFileName() const
    {
        return SCXCoreLib::SCXFilePath(L"./docker-cimprov.log");
    }
};

/*----------------------------------------------------------------------------*/
/**
    This is the testrunner log policy factory. It will return the testrunner
    log policy.

    \returns The default log policy object.
*/

SCXCoreLib::SCXHandle<SCXCoreLib::SCXLogPolicy> CustomLogPolicyFactory()
{
    return SCXCoreLib::SCXHandle<SCXCoreLib::SCXLogPolicy>( new TestrunnerLogPolicy() );
}

/*----------------------------E-N-D---O-F---F-I-L-E---------------------------*/

