/* @migen@ */
#ifndef _Container_HostInventory_Class_Provider_h
#define _Container_HostInventory_Class_Provider_h

#include "Container_HostInventory.h"
#ifdef __cplusplus
# include <micxx/micxx.h>
# include "module.h"

#define DOCKER_TESTRUNNER_STRING "DOCKER_TESTRUNNER_STRING"
#define KUBENETES_SERVICE_HOST_STRING "KUBERNETES_SERVICE_HOST"

MI_BEGIN_NAMESPACE

/*
**==============================================================================
**
** Container_HostInventory provider class declaration
**
**==============================================================================
*/

class Container_HostInventory_Class_Provider
{
/* @MIGEN.BEGIN@ CAUTION: PLEASE DO NOT EDIT OR DELETE THIS LINE. */
private:
    Module* m_Module;

public:
    Container_HostInventory_Class_Provider(
        Module* module);

    ~Container_HostInventory_Class_Provider();

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
        const Container_HostInventory_Class& instance,
        const PropertySet& propertySet);

    void CreateInstance(
        Context& context,
        const String& nameSpace,
        const Container_HostInventory_Class& newInstance);

    void ModifyInstance(
        Context& context,
        const String& nameSpace,
        const Container_HostInventory_Class& modifiedInstance,
        const PropertySet& propertySet);

    void DeleteInstance(
        Context& context,
        const String& nameSpace,
        const Container_HostInventory_Class& instance);

/* @MIGEN.END@ CAUTION: PLEASE DO NOT EDIT OR DELETE THIS LINE. */
};

MI_END_NAMESPACE

#endif /* __cplusplus */

#endif /* _Container_HostInventory_Class_Provider_h */

