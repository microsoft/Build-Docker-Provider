/* @migen@ */
#ifndef _Container_ContainerLog_Class_Provider_h
#define _Container_ContainerLog_Class_Provider_h

#include "Container_ContainerLog.h"
#ifdef __cplusplus
# include <micxx/micxx.h>
# include "module.h"

MI_BEGIN_NAMESPACE

/*
**==============================================================================
**
** Container_ContainerLog provider class declaration
**
**==============================================================================
*/

class Container_ContainerLog_Class_Provider
{
/* @MIGEN.BEGIN@ CAUTION: PLEASE DO NOT EDIT OR DELETE THIS LINE. */
private:
    Module* m_Module;

public:
    Container_ContainerLog_Class_Provider(
        Module* module);

    ~Container_ContainerLog_Class_Provider();

    inline Module* getModule()
    {
        return m_Module;
    }

    void Load(
        Context& context);

    void Unload(
        Context& context);

    void EnumerateInstances(
        Context& context,
        const String& nameSpace,
        const PropertySet& propertySet,
        bool keysOnly,
        const MI_Filter* filter);

    void GetInstance(
        Context& context,
        const String& nameSpace,
        const Container_ContainerLog_Class& instance,
        const PropertySet& propertySet);

    void CreateInstance(
        Context& context,
        const String& nameSpace,
        const Container_ContainerLog_Class& newInstance);

    void ModifyInstance(
        Context& context,
        const String& nameSpace,
        const Container_ContainerLog_Class& modifiedInstance,
        const PropertySet& propertySet);

    void DeleteInstance(
        Context& context,
        const String& nameSpace,
        const Container_ContainerLog_Class& instance);

/* @MIGEN.END@ CAUTION: PLEASE DO NOT EDIT OR DELETE THIS LINE. */
};

MI_END_NAMESPACE

#endif /* __cplusplus */

#endif /* _Container_ContainerLog_Class_Provider_h */

