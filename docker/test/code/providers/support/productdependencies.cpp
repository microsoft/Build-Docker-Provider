/*--------------------------------------------------------------------------------
Copyright (c) Microsoft Corporation. All rights reserved. See license.txt for license information.
*/
/**
\file        productdependencies.cpp

\brief       Implements dummy product dependencies for logging subsystem of PAL

\date        2013-02-26 13:38:00
*/
/*----------------------------------------------------------------------------*/

#include <scxcorelib/scxcmn.h>
#include <scxcorelib/stringaid.h>
#include <scxcorelib/scxproductdependencies.h>

namespace SCXCoreLib
{
    namespace SCXProductDependencies
    {
        void WriteLogFileHeader(SCXHandle<std::wfstream> &stream, int logFileRunningNumber, SCXCalendarTime& procStartTimestamp){}

        void WrtieItemToLog(SCXHandle<std::wfstream> &stream, const SCXLogItem& item, const std::wstring& message)
        {
            (void)item;

            (*stream) << message << std::endl;
        }
    }
}
