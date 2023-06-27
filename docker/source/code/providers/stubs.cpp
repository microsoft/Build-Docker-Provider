/* @migen@ */
/*
**==============================================================================
**
** WARNING: THIS FILE WAS AUTOMATICALLY GENERATED. PLEASE DO NOT EDIT.
**
**==============================================================================
*/
#include <MI.h>
#include "module.h"
#include "Container_ImageInventory_Class_Provider.h"
#include "Container_DaemonEvent_Class_Provider.h"
#include "Container_ContainerStatistics_Class_Provider.h"
#include "Container_ContainerInventory_Class_Provider.h"
#include "Container_ContainerLog_Class_Provider.h"
#include "Container_HostInventory_Class_Provider.h"
#include "Container_Process_Class_Provider.h"

using namespace mi;

MI_EXTERN_C void MI_CALL Container_ImageInventory_Load(
    Container_ImageInventory_Self** self,
    MI_Module_Self* selfModule,
    MI_Context* context)
{
    MI_Result r = MI_RESULT_OK;
    Context ctx(context, &r);
    Container_ImageInventory_Class_Provider* prov = new Container_ImageInventory_Class_Provider((Module*)selfModule);

    prov->Load(ctx);
    if (MI_RESULT_OK != r)
    {
        delete prov;
        MI_Context_PostResult(context, r);
        return;
    }
    *self = (Container_ImageInventory_Self*)prov;
    MI_Context_PostResult(context, MI_RESULT_OK);
}

MI_EXTERN_C void MI_CALL Container_ImageInventory_Unload(
    Container_ImageInventory_Self* self,
    MI_Context* context)
{
    MI_Result r = MI_RESULT_OK;
    Context ctx(context, &r);
    Container_ImageInventory_Class_Provider* prov = (Container_ImageInventory_Class_Provider*)self;

    prov->Unload(ctx);
    delete ((Container_ImageInventory_Class_Provider*)self);
    MI_Context_PostResult(context, r);
}

MI_EXTERN_C void MI_CALL Container_ImageInventory_EnumerateInstances(
    Container_ImageInventory_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_PropertySet* propertySet,
    MI_Boolean keysOnly,
    const MI_Filter* filter)
{
    Container_ImageInventory_Class_Provider* cxxSelf =((Container_ImageInventory_Class_Provider*)self);
    Context  cxxContext(context);

    cxxSelf->EnumerateInstances(
        cxxContext,
        nameSpace,
        __PropertySet(propertySet),
        __bool(keysOnly),
        filter);
}

MI_EXTERN_C void MI_CALL Container_ImageInventory_GetInstance(
    Container_ImageInventory_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const Container_ImageInventory* instanceName,
    const MI_PropertySet* propertySet)
{
    Container_ImageInventory_Class_Provider* cxxSelf =((Container_ImageInventory_Class_Provider*)self);
    Context  cxxContext(context);
    Container_ImageInventory_Class cxxInstanceName(instanceName, true);

    cxxSelf->GetInstance(
        cxxContext,
        nameSpace,
        cxxInstanceName,
        __PropertySet(propertySet));
}

MI_EXTERN_C void MI_CALL Container_ImageInventory_CreateInstance(
    Container_ImageInventory_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const Container_ImageInventory* newInstance)
{
    Container_ImageInventory_Class_Provider* cxxSelf =((Container_ImageInventory_Class_Provider*)self);
    Context  cxxContext(context);
    Container_ImageInventory_Class cxxNewInstance(newInstance, false);

    cxxSelf->CreateInstance(cxxContext, nameSpace, cxxNewInstance);
}

MI_EXTERN_C void MI_CALL Container_ImageInventory_ModifyInstance(
    Container_ImageInventory_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const Container_ImageInventory* modifiedInstance,
    const MI_PropertySet* propertySet)
{
    Container_ImageInventory_Class_Provider* cxxSelf =((Container_ImageInventory_Class_Provider*)self);
    Context  cxxContext(context);
    Container_ImageInventory_Class cxxModifiedInstance(modifiedInstance, false);

    cxxSelf->ModifyInstance(
        cxxContext,
        nameSpace,
        cxxModifiedInstance,
        __PropertySet(propertySet));
}

MI_EXTERN_C void MI_CALL Container_ImageInventory_DeleteInstance(
    Container_ImageInventory_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const Container_ImageInventory* instanceName)
{
    Container_ImageInventory_Class_Provider* cxxSelf =((Container_ImageInventory_Class_Provider*)self);
    Context  cxxContext(context);
    Container_ImageInventory_Class cxxInstanceName(instanceName, true);

    cxxSelf->DeleteInstance(cxxContext, nameSpace, cxxInstanceName);
}

MI_EXTERN_C void MI_CALL Container_DaemonEvent_Load(
    Container_DaemonEvent_Self** self,
    MI_Module_Self* selfModule,
    MI_Context* context)
{
    MI_Result r = MI_RESULT_OK;
    Context ctx(context, &r);
    Container_DaemonEvent_Class_Provider* prov = new Container_DaemonEvent_Class_Provider((Module*)selfModule);

    prov->Load(ctx);
    if (MI_RESULT_OK != r)
    {
        delete prov;
        MI_Context_PostResult(context, r);
        return;
    }
    *self = (Container_DaemonEvent_Self*)prov;
    MI_Context_PostResult(context, MI_RESULT_OK);
}

MI_EXTERN_C void MI_CALL Container_DaemonEvent_Unload(
    Container_DaemonEvent_Self* self,
    MI_Context* context)
{
    MI_Result r = MI_RESULT_OK;
    Context ctx(context, &r);
    Container_DaemonEvent_Class_Provider* prov = (Container_DaemonEvent_Class_Provider*)self;

    prov->Unload(ctx);
    delete ((Container_DaemonEvent_Class_Provider*)self);
    MI_Context_PostResult(context, r);
}

MI_EXTERN_C void MI_CALL Container_DaemonEvent_EnumerateInstances(
    Container_DaemonEvent_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_PropertySet* propertySet,
    MI_Boolean keysOnly,
    const MI_Filter* filter)
{
    Container_DaemonEvent_Class_Provider* cxxSelf =((Container_DaemonEvent_Class_Provider*)self);
    Context  cxxContext(context);

    cxxSelf->EnumerateInstances(
        cxxContext,
        nameSpace,
        __PropertySet(propertySet),
        __bool(keysOnly),
        filter);
}

MI_EXTERN_C void MI_CALL Container_DaemonEvent_GetInstance(
    Container_DaemonEvent_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const Container_DaemonEvent* instanceName,
    const MI_PropertySet* propertySet)
{
    Container_DaemonEvent_Class_Provider* cxxSelf =((Container_DaemonEvent_Class_Provider*)self);
    Context  cxxContext(context);
    Container_DaemonEvent_Class cxxInstanceName(instanceName, true);

    cxxSelf->GetInstance(
        cxxContext,
        nameSpace,
        cxxInstanceName,
        __PropertySet(propertySet));
}

MI_EXTERN_C void MI_CALL Container_DaemonEvent_CreateInstance(
    Container_DaemonEvent_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const Container_DaemonEvent* newInstance)
{
    Container_DaemonEvent_Class_Provider* cxxSelf =((Container_DaemonEvent_Class_Provider*)self);
    Context  cxxContext(context);
    Container_DaemonEvent_Class cxxNewInstance(newInstance, false);

    cxxSelf->CreateInstance(cxxContext, nameSpace, cxxNewInstance);
}

MI_EXTERN_C void MI_CALL Container_DaemonEvent_ModifyInstance(
    Container_DaemonEvent_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const Container_DaemonEvent* modifiedInstance,
    const MI_PropertySet* propertySet)
{
    Container_DaemonEvent_Class_Provider* cxxSelf =((Container_DaemonEvent_Class_Provider*)self);
    Context  cxxContext(context);
    Container_DaemonEvent_Class cxxModifiedInstance(modifiedInstance, false);

    cxxSelf->ModifyInstance(
        cxxContext,
        nameSpace,
        cxxModifiedInstance,
        __PropertySet(propertySet));
}

MI_EXTERN_C void MI_CALL Container_DaemonEvent_DeleteInstance(
    Container_DaemonEvent_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const Container_DaemonEvent* instanceName)
{
    Container_DaemonEvent_Class_Provider* cxxSelf =((Container_DaemonEvent_Class_Provider*)self);
    Context  cxxContext(context);
    Container_DaemonEvent_Class cxxInstanceName(instanceName, true);

    cxxSelf->DeleteInstance(cxxContext, nameSpace, cxxInstanceName);
}

MI_EXTERN_C void MI_CALL Container_ContainerStatistics_Load(
    Container_ContainerStatistics_Self** self,
    MI_Module_Self* selfModule,
    MI_Context* context)
{
    MI_Result r = MI_RESULT_OK;
    Context ctx(context, &r);
    Container_ContainerStatistics_Class_Provider* prov = new Container_ContainerStatistics_Class_Provider((Module*)selfModule);

    prov->Load(ctx);
    if (MI_RESULT_OK != r)
    {
        delete prov;
        MI_Context_PostResult(context, r);
        return;
    }
    *self = (Container_ContainerStatistics_Self*)prov;
    MI_Context_PostResult(context, MI_RESULT_OK);
}

MI_EXTERN_C void MI_CALL Container_ContainerStatistics_Unload(
    Container_ContainerStatistics_Self* self,
    MI_Context* context)
{
    MI_Result r = MI_RESULT_OK;
    Context ctx(context, &r);
    Container_ContainerStatistics_Class_Provider* prov = (Container_ContainerStatistics_Class_Provider*)self;

    prov->Unload(ctx);
    delete ((Container_ContainerStatistics_Class_Provider*)self);
    MI_Context_PostResult(context, r);
}

MI_EXTERN_C void MI_CALL Container_ContainerStatistics_EnumerateInstances(
    Container_ContainerStatistics_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_PropertySet* propertySet,
    MI_Boolean keysOnly,
    const MI_Filter* filter)
{
    Container_ContainerStatistics_Class_Provider* cxxSelf =((Container_ContainerStatistics_Class_Provider*)self);
    Context  cxxContext(context);

    cxxSelf->EnumerateInstances(
        cxxContext,
        nameSpace,
        __PropertySet(propertySet),
        __bool(keysOnly),
        filter);
}

MI_EXTERN_C void MI_CALL Container_ContainerStatistics_GetInstance(
    Container_ContainerStatistics_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const Container_ContainerStatistics* instanceName,
    const MI_PropertySet* propertySet)
{
    Container_ContainerStatistics_Class_Provider* cxxSelf =((Container_ContainerStatistics_Class_Provider*)self);
    Context  cxxContext(context);
    Container_ContainerStatistics_Class cxxInstanceName(instanceName, true);

    cxxSelf->GetInstance(
        cxxContext,
        nameSpace,
        cxxInstanceName,
        __PropertySet(propertySet));
}

MI_EXTERN_C void MI_CALL Container_ContainerStatistics_CreateInstance(
    Container_ContainerStatistics_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const Container_ContainerStatistics* newInstance)
{
    Container_ContainerStatistics_Class_Provider* cxxSelf =((Container_ContainerStatistics_Class_Provider*)self);
    Context  cxxContext(context);
    Container_ContainerStatistics_Class cxxNewInstance(newInstance, false);

    cxxSelf->CreateInstance(cxxContext, nameSpace, cxxNewInstance);
}

MI_EXTERN_C void MI_CALL Container_ContainerStatistics_ModifyInstance(
    Container_ContainerStatistics_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const Container_ContainerStatistics* modifiedInstance,
    const MI_PropertySet* propertySet)
{
    Container_ContainerStatistics_Class_Provider* cxxSelf =((Container_ContainerStatistics_Class_Provider*)self);
    Context  cxxContext(context);
    Container_ContainerStatistics_Class cxxModifiedInstance(modifiedInstance, false);

    cxxSelf->ModifyInstance(
        cxxContext,
        nameSpace,
        cxxModifiedInstance,
        __PropertySet(propertySet));
}

MI_EXTERN_C void MI_CALL Container_ContainerStatistics_DeleteInstance(
    Container_ContainerStatistics_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const Container_ContainerStatistics* instanceName)
{
    Container_ContainerStatistics_Class_Provider* cxxSelf =((Container_ContainerStatistics_Class_Provider*)self);
    Context  cxxContext(context);
    Container_ContainerStatistics_Class cxxInstanceName(instanceName, true);

    cxxSelf->DeleteInstance(cxxContext, nameSpace, cxxInstanceName);
}

MI_EXTERN_C void MI_CALL Container_ContainerInventory_Load(
    Container_ContainerInventory_Self** self,
    MI_Module_Self* selfModule,
    MI_Context* context)
{
    MI_Result r = MI_RESULT_OK;
    Context ctx(context, &r);
    Container_ContainerInventory_Class_Provider* prov = new Container_ContainerInventory_Class_Provider((Module*)selfModule);

    prov->Load(ctx);
    if (MI_RESULT_OK != r)
    {
        delete prov;
        MI_Context_PostResult(context, r);
        return;
    }
    *self = (Container_ContainerInventory_Self*)prov;
    MI_Context_PostResult(context, MI_RESULT_OK);
}

MI_EXTERN_C void MI_CALL Container_ContainerInventory_Unload(
    Container_ContainerInventory_Self* self,
    MI_Context* context)
{
    MI_Result r = MI_RESULT_OK;
    Context ctx(context, &r);
    Container_ContainerInventory_Class_Provider* prov = (Container_ContainerInventory_Class_Provider*)self;

    prov->Unload(ctx);
    delete ((Container_ContainerInventory_Class_Provider*)self);
    MI_Context_PostResult(context, r);
}

MI_EXTERN_C void MI_CALL Container_ContainerInventory_EnumerateInstances(
    Container_ContainerInventory_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_PropertySet* propertySet,
    MI_Boolean keysOnly,
    const MI_Filter* filter)
{
    Container_ContainerInventory_Class_Provider* cxxSelf =((Container_ContainerInventory_Class_Provider*)self);
    Context  cxxContext(context);

    cxxSelf->EnumerateInstances(
        cxxContext,
        nameSpace,
        __PropertySet(propertySet),
        __bool(keysOnly),
        filter);
}

MI_EXTERN_C void MI_CALL Container_ContainerInventory_GetInstance(
    Container_ContainerInventory_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const Container_ContainerInventory* instanceName,
    const MI_PropertySet* propertySet)
{
    Container_ContainerInventory_Class_Provider* cxxSelf =((Container_ContainerInventory_Class_Provider*)self);
    Context  cxxContext(context);
    Container_ContainerInventory_Class cxxInstanceName(instanceName, true);

    cxxSelf->GetInstance(
        cxxContext,
        nameSpace,
        cxxInstanceName,
        __PropertySet(propertySet));
}

MI_EXTERN_C void MI_CALL Container_ContainerInventory_CreateInstance(
    Container_ContainerInventory_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const Container_ContainerInventory* newInstance)
{
    Container_ContainerInventory_Class_Provider* cxxSelf =((Container_ContainerInventory_Class_Provider*)self);
    Context  cxxContext(context);
    Container_ContainerInventory_Class cxxNewInstance(newInstance, false);

    cxxSelf->CreateInstance(cxxContext, nameSpace, cxxNewInstance);
}

MI_EXTERN_C void MI_CALL Container_ContainerInventory_ModifyInstance(
    Container_ContainerInventory_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const Container_ContainerInventory* modifiedInstance,
    const MI_PropertySet* propertySet)
{
    Container_ContainerInventory_Class_Provider* cxxSelf =((Container_ContainerInventory_Class_Provider*)self);
    Context  cxxContext(context);
    Container_ContainerInventory_Class cxxModifiedInstance(modifiedInstance, false);

    cxxSelf->ModifyInstance(
        cxxContext,
        nameSpace,
        cxxModifiedInstance,
        __PropertySet(propertySet));
}

MI_EXTERN_C void MI_CALL Container_ContainerInventory_DeleteInstance(
    Container_ContainerInventory_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const Container_ContainerInventory* instanceName)
{
    Container_ContainerInventory_Class_Provider* cxxSelf =((Container_ContainerInventory_Class_Provider*)self);
    Context  cxxContext(context);
    Container_ContainerInventory_Class cxxInstanceName(instanceName, true);

    cxxSelf->DeleteInstance(cxxContext, nameSpace, cxxInstanceName);
}


MI_EXTERN_C void MI_CALL Container_ContainerLog_Load(
    Container_ContainerLog_Self** self,
    MI_Module_Self* selfModule,
    MI_Context* context)
{
    MI_Result r = MI_RESULT_OK;
    Context ctx(context, &r);
    Container_ContainerLog_Class_Provider* prov = new Container_ContainerLog_Class_Provider((Module*)selfModule);

    prov->Load(ctx);
    if (MI_RESULT_OK != r)
    {
        delete prov;
        MI_Context_PostResult(context, r);
        return;
    }
    *self = (Container_ContainerLog_Self*)prov;
    MI_Context_PostResult(context, MI_RESULT_OK);
}

MI_EXTERN_C void MI_CALL Container_ContainerLog_Unload(
    Container_ContainerLog_Self* self,
    MI_Context* context)
{
    MI_Result r = MI_RESULT_OK;
    Context ctx(context, &r);
    Container_ContainerLog_Class_Provider* prov = (Container_ContainerLog_Class_Provider*)self;

    prov->Unload(ctx);
    delete ((Container_ContainerLog_Class_Provider*)self);
    MI_Context_PostResult(context, r);
}

MI_EXTERN_C void MI_CALL Container_ContainerLog_EnumerateInstances(
    Container_ContainerLog_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_PropertySet* propertySet,
    MI_Boolean keysOnly,
    const MI_Filter* filter)
{
    Container_ContainerLog_Class_Provider* cxxSelf =((Container_ContainerLog_Class_Provider*)self);
    Context  cxxContext(context);

    cxxSelf->EnumerateInstances(
        cxxContext,
        nameSpace,
        __PropertySet(propertySet),
        __bool(keysOnly),
        filter);
}

MI_EXTERN_C void MI_CALL Container_ContainerLog_GetInstance(
    Container_ContainerLog_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const Container_ContainerLog* instanceName,
    const MI_PropertySet* propertySet)
{
    Container_ContainerLog_Class_Provider* cxxSelf =((Container_ContainerLog_Class_Provider*)self);
    Context  cxxContext(context);
    Container_ContainerLog_Class cxxInstanceName(instanceName, true);

    cxxSelf->GetInstance(
        cxxContext,
        nameSpace,
        cxxInstanceName,
        __PropertySet(propertySet));
}

MI_EXTERN_C void MI_CALL Container_ContainerLog_CreateInstance(
    Container_ContainerLog_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const Container_ContainerLog* newInstance)
{
    Container_ContainerLog_Class_Provider* cxxSelf =((Container_ContainerLog_Class_Provider*)self);
    Context  cxxContext(context);
    Container_ContainerLog_Class cxxNewInstance(newInstance, false);

    cxxSelf->CreateInstance(cxxContext, nameSpace, cxxNewInstance);
}

MI_EXTERN_C void MI_CALL Container_ContainerLog_ModifyInstance(
    Container_ContainerLog_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const Container_ContainerLog* modifiedInstance,
    const MI_PropertySet* propertySet)
{
    Container_ContainerLog_Class_Provider* cxxSelf =((Container_ContainerLog_Class_Provider*)self);
    Context  cxxContext(context);
    Container_ContainerLog_Class cxxModifiedInstance(modifiedInstance, false);

    cxxSelf->ModifyInstance(
        cxxContext,
        nameSpace,
        cxxModifiedInstance,
        __PropertySet(propertySet));
}

MI_EXTERN_C void MI_CALL Container_ContainerLog_DeleteInstance(
    Container_ContainerLog_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const Container_ContainerLog* instanceName)
{
    Container_ContainerLog_Class_Provider* cxxSelf =((Container_ContainerLog_Class_Provider*)self);
    Context  cxxContext(context);
    Container_ContainerLog_Class cxxInstanceName(instanceName, true);

    cxxSelf->DeleteInstance(cxxContext, nameSpace, cxxInstanceName);
}

MI_EXTERN_C void MI_CALL Container_HostInventory_Load(
    Container_HostInventory_Self** self,
    MI_Module_Self* selfModule,
    MI_Context* context)
{
    MI_Result r = MI_RESULT_OK;
    Context ctx(context, &r);
    Container_HostInventory_Class_Provider* prov = new Container_HostInventory_Class_Provider((Module*)selfModule);

    prov->Load(ctx);
    if (MI_RESULT_OK != r)
    {
        delete prov;
        MI_Context_PostResult(context, r);
        return;
    }
    *self = (Container_HostInventory_Self*)prov;
    MI_Context_PostResult(context, MI_RESULT_OK);
}

MI_EXTERN_C void MI_CALL Container_HostInventory_Unload(
    Container_HostInventory_Self* self,
    MI_Context* context)
{
    MI_Result r = MI_RESULT_OK;
    Context ctx(context, &r);
    Container_HostInventory_Class_Provider* prov = (Container_HostInventory_Class_Provider*)self;

    prov->Unload(ctx);
    delete ((Container_HostInventory_Class_Provider*)self);
    MI_Context_PostResult(context, r);
}

MI_EXTERN_C void MI_CALL Container_HostInventory_EnumerateInstances(
    Container_HostInventory_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_PropertySet* propertySet,
    MI_Boolean keysOnly,
    const MI_Filter* filter)
{
    Container_HostInventory_Class_Provider* cxxSelf =((Container_HostInventory_Class_Provider*)self);
    Context  cxxContext(context);

    cxxSelf->EnumerateInstances(
        cxxContext,
        nameSpace,
        __PropertySet(propertySet),
        __bool(keysOnly),
        filter);
}

MI_EXTERN_C void MI_CALL Container_HostInventory_GetInstance(
    Container_HostInventory_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const Container_HostInventory* instanceName,
    const MI_PropertySet* propertySet)
{
    Container_HostInventory_Class_Provider* cxxSelf =((Container_HostInventory_Class_Provider*)self);
    Context  cxxContext(context);
    Container_HostInventory_Class cxxInstanceName(instanceName, true);

    cxxSelf->GetInstance(
        cxxContext,
        nameSpace,
        cxxInstanceName,
        __PropertySet(propertySet));
}

MI_EXTERN_C void MI_CALL Container_HostInventory_CreateInstance(
    Container_HostInventory_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const Container_HostInventory* newInstance)
{
    Container_HostInventory_Class_Provider* cxxSelf =((Container_HostInventory_Class_Provider*)self);
    Context  cxxContext(context);
    Container_HostInventory_Class cxxNewInstance(newInstance, false);

    cxxSelf->CreateInstance(cxxContext, nameSpace, cxxNewInstance);
}

MI_EXTERN_C void MI_CALL Container_HostInventory_ModifyInstance(
    Container_HostInventory_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const Container_HostInventory* modifiedInstance,
    const MI_PropertySet* propertySet)
{
    Container_HostInventory_Class_Provider* cxxSelf =((Container_HostInventory_Class_Provider*)self);
    Context  cxxContext(context);
    Container_HostInventory_Class cxxModifiedInstance(modifiedInstance, false);

    cxxSelf->ModifyInstance(
        cxxContext,
        nameSpace,
        cxxModifiedInstance,
        __PropertySet(propertySet));
}

MI_EXTERN_C void MI_CALL Container_HostInventory_DeleteInstance(
    Container_HostInventory_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const Container_HostInventory* instanceName)
{
    Container_HostInventory_Class_Provider* cxxSelf =((Container_HostInventory_Class_Provider*)self);
    Context  cxxContext(context);
    Container_HostInventory_Class cxxInstanceName(instanceName, true);

    cxxSelf->DeleteInstance(cxxContext, nameSpace, cxxInstanceName);
}

MI_EXTERN_C void MI_CALL Container_Process_Load(
    Container_Process_Self** self,
    MI_Module_Self* selfModule,
    MI_Context* context)
{
    MI_Result r = MI_RESULT_OK;
    Context ctx(context, &r);
    Container_Process_Class_Provider* prov = new Container_Process_Class_Provider((Module*)selfModule);

    prov->Load(ctx);
    if (MI_RESULT_OK != r)
    {
        delete prov;
        MI_Context_PostResult(context, r);
        return;
    }
    *self = (Container_Process_Self*)prov;
    MI_Context_PostResult(context, MI_RESULT_OK);
}

MI_EXTERN_C void MI_CALL Container_Process_Unload(
    Container_Process_Self* self,
    MI_Context* context)
{
    MI_Result r = MI_RESULT_OK;
    Context ctx(context, &r);
    Container_Process_Class_Provider* prov = (Container_Process_Class_Provider*)self;

    prov->Unload(ctx);
    delete ((Container_Process_Class_Provider*)self);
    MI_Context_PostResult(context, r);
}

MI_EXTERN_C void MI_CALL Container_Process_EnumerateInstances(
    Container_Process_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_PropertySet* propertySet,
    MI_Boolean keysOnly,
    const MI_Filter* filter)
{
    Container_Process_Class_Provider* cxxSelf =((Container_Process_Class_Provider*)self);
    Context  cxxContext(context);

    cxxSelf->EnumerateInstances(
        cxxContext,
        nameSpace,
        __PropertySet(propertySet),
        __bool(keysOnly),
        filter);
}

MI_EXTERN_C void MI_CALL Container_Process_GetInstance(
    Container_Process_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const Container_Process* instanceName,
    const MI_PropertySet* propertySet)
{
    Container_Process_Class_Provider* cxxSelf =((Container_Process_Class_Provider*)self);
    Context  cxxContext(context);
    Container_Process_Class cxxInstanceName(instanceName, true);

    cxxSelf->GetInstance(
        cxxContext,
        nameSpace,
        cxxInstanceName,
        __PropertySet(propertySet));
}

MI_EXTERN_C void MI_CALL Container_Process_CreateInstance(
    Container_Process_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const Container_Process* newInstance)
{
    Container_Process_Class_Provider* cxxSelf =((Container_Process_Class_Provider*)self);
    Context  cxxContext(context);
    Container_Process_Class cxxNewInstance(newInstance, false);

    cxxSelf->CreateInstance(cxxContext, nameSpace, cxxNewInstance);
}

MI_EXTERN_C void MI_CALL Container_Process_ModifyInstance(
    Container_Process_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const Container_Process* modifiedInstance,
    const MI_PropertySet* propertySet)
{
    Container_Process_Class_Provider* cxxSelf =((Container_Process_Class_Provider*)self);
    Context  cxxContext(context);
    Container_Process_Class cxxModifiedInstance(modifiedInstance, false);

    cxxSelf->ModifyInstance(
        cxxContext,
        nameSpace,
        cxxModifiedInstance,
        __PropertySet(propertySet));
}

MI_EXTERN_C void MI_CALL Container_Process_DeleteInstance(
    Container_Process_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const Container_Process* instanceName)
{
    Container_Process_Class_Provider* cxxSelf =((Container_Process_Class_Provider*)self);
    Context  cxxContext(context);
    Container_Process_Class cxxInstanceName(instanceName, true);

    cxxSelf->DeleteInstance(cxxContext, nameSpace, cxxInstanceName);
}


MI_EXTERN_C MI_SchemaDecl schemaDecl;

void MI_CALL Load(MI_Module_Self** self, struct _MI_Context* context)
{
    *self = (MI_Module_Self*)new Module;
    MI_Context_PostResult(context, MI_RESULT_OK);
}

void MI_CALL Unload(MI_Module_Self* self, struct _MI_Context* context)
{
    Module* module = (Module*)self;
    delete module;
    MI_Context_PostResult(context, MI_RESULT_OK);
}

MI_EXTERN_C MI_EXPORT MI_Module* MI_MAIN_CALL MI_Main(MI_Server* server)
{
    /* WARNING: THIS FUNCTION AUTOMATICALLY GENERATED. PLEASE DO NOT EDIT. */
    extern MI_Server* __mi_server;
    static MI_Module module;
    __mi_server = server;
    module.flags |= MI_MODULE_FLAG_STANDARD_QUALIFIERS;
    module.flags |= MI_MODULE_FLAG_CPLUSPLUS;
    module.charSize = sizeof(MI_Char);
    module.version = MI_VERSION;
    module.generatorVersion = MI_MAKE_VERSION(1,0,8);
    module.schemaDecl = &schemaDecl;
    module.Load = Load;
    module.Unload = Unload;
    return &module;
}

