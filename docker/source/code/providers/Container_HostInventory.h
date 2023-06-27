/* @migen@ */
/*
**==============================================================================
**
** WARNING: THIS FILE WAS AUTOMATICALLY GENERATED. PLEASE DO NOT EDIT.
**
**==============================================================================
*/
#ifndef _Container_HostInventory_h
#define _Container_HostInventory_h

#include <MI.h>
#include "CIM_ManagedElement.h"

/*
**==============================================================================
**
** Container_HostInventory [Container_HostInventory]
**
** Keys:
**    InstanceID
**
**==============================================================================
*/

typedef struct _Container_HostInventory /* extends CIM_ManagedElement */
{
    MI_Instance __instance;
    /* CIM_ManagedElement properties */
    /*KEY*/ MI_ConstStringField InstanceID;
    MI_ConstStringField Caption;
    MI_ConstStringField Description;
    MI_ConstStringField ElementName;
    /* Container_HostInventory properties */
    MI_ConstStringField Computer;
    MI_ConstStringField DockerVersion;
    MI_ConstStringField OperatingSystem;
    MI_ConstStringField Volume;
    MI_ConstStringField Network;
    MI_ConstStringField InternalIp;
    MI_ConstStringField NodeRole;
    MI_ConstStringField OrchestratorType;
}
Container_HostInventory;

typedef struct _Container_HostInventory_Ref
{
    Container_HostInventory* value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
Container_HostInventory_Ref;

typedef struct _Container_HostInventory_ConstRef
{
    MI_CONST Container_HostInventory* value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
Container_HostInventory_ConstRef;

typedef struct _Container_HostInventory_Array
{
    struct _Container_HostInventory** data;
    MI_Uint32 size;
}
Container_HostInventory_Array;

typedef struct _Container_HostInventory_ConstArray
{
    struct _Container_HostInventory MI_CONST* MI_CONST* data;
    MI_Uint32 size;
}
Container_HostInventory_ConstArray;

typedef struct _Container_HostInventory_ArrayRef
{
    Container_HostInventory_Array value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
Container_HostInventory_ArrayRef;

typedef struct _Container_HostInventory_ConstArrayRef
{
    Container_HostInventory_ConstArray value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
Container_HostInventory_ConstArrayRef;

MI_EXTERN_C MI_CONST MI_ClassDecl Container_HostInventory_rtti;

MI_INLINE MI_Result MI_CALL Container_HostInventory_Construct(
    Container_HostInventory* self,
    MI_Context* context)
{
    return MI_ConstructInstance(context, &Container_HostInventory_rtti,
        (MI_Instance*)&self->__instance);
}

MI_INLINE MI_Result MI_CALL Container_HostInventory_Clone(
    const Container_HostInventory* self,
    Container_HostInventory** newInstance)
{
    return MI_Instance_Clone(
        &self->__instance, (MI_Instance**)newInstance);
}

MI_INLINE MI_Boolean MI_CALL Container_HostInventory_IsA(
    const MI_Instance* self)
{
    MI_Boolean res = MI_FALSE;
    return MI_Instance_IsA(self, &Container_HostInventory_rtti, &res) == MI_RESULT_OK && res;
}

MI_INLINE MI_Result MI_CALL Container_HostInventory_Destruct(Container_HostInventory* self)
{
    return MI_Instance_Destruct(&self->__instance);
}

MI_INLINE MI_Result MI_CALL Container_HostInventory_Delete(Container_HostInventory* self)
{
    return MI_Instance_Delete(&self->__instance);
}

MI_INLINE MI_Result MI_CALL Container_HostInventory_Post(
    const Container_HostInventory* self,
    MI_Context* context)
{
    return MI_PostInstance(context, &self->__instance);
}

MI_INLINE MI_Result MI_CALL Container_HostInventory_Set_InstanceID(
    Container_HostInventory* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        0,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL Container_HostInventory_SetPtr_InstanceID(
    Container_HostInventory* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        0,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL Container_HostInventory_Clear_InstanceID(
    Container_HostInventory* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        0);
}

MI_INLINE MI_Result MI_CALL Container_HostInventory_Set_Caption(
    Container_HostInventory* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        1,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL Container_HostInventory_SetPtr_Caption(
    Container_HostInventory* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        1,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL Container_HostInventory_Clear_Caption(
    Container_HostInventory* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        1);
}

MI_INLINE MI_Result MI_CALL Container_HostInventory_Set_Description(
    Container_HostInventory* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        2,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL Container_HostInventory_SetPtr_Description(
    Container_HostInventory* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        2,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL Container_HostInventory_Clear_Description(
    Container_HostInventory* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        2);
}

MI_INLINE MI_Result MI_CALL Container_HostInventory_Set_ElementName(
    Container_HostInventory* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        3,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL Container_HostInventory_SetPtr_ElementName(
    Container_HostInventory* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        3,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL Container_HostInventory_Clear_ElementName(
    Container_HostInventory* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        3);
}

MI_INLINE MI_Result MI_CALL Container_HostInventory_Set_Computer(
    Container_HostInventory* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        4,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL Container_HostInventory_SetPtr_Computer(
    Container_HostInventory* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        4,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL Container_HostInventory_Clear_Computer(
    Container_HostInventory* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        4);
}

MI_INLINE MI_Result MI_CALL Container_HostInventory_Set_DockerVersion(
    Container_HostInventory* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        5,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL Container_HostInventory_SetPtr_DockerVersion(
    Container_HostInventory* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        5,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL Container_HostInventory_Clear_DockerVersion(
    Container_HostInventory* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        5);
}

MI_INLINE MI_Result MI_CALL Container_HostInventory_Set_OperatingSystem(
    Container_HostInventory* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        6,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL Container_HostInventory_SetPtr_OperatingSystem(
    Container_HostInventory* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        6,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL Container_HostInventory_Clear_OperatingSystem(
    Container_HostInventory* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        6);
}

MI_INLINE MI_Result MI_CALL Container_HostInventory_Set_Volume(
    Container_HostInventory* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        7,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL Container_HostInventory_SetPtr_Volume(
    Container_HostInventory* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        7,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL Container_HostInventory_Clear_Volume(
    Container_HostInventory* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        7);
}

MI_INLINE MI_Result MI_CALL Container_HostInventory_Set_Network(
    Container_HostInventory* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        8,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL Container_HostInventory_SetPtr_Network(
    Container_HostInventory* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        8,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL Container_HostInventory_Clear_Network(
    Container_HostInventory* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        8);
}

MI_INLINE MI_Result MI_CALL Container_HostInventory_Set_InternalIp(
    Container_HostInventory* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        9,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL Container_HostInventory_SetPtr_InternalIp(
    Container_HostInventory* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        9,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL Container_HostInventory_Clear_InternalIp(
    Container_HostInventory* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        9);
}

MI_INLINE MI_Result MI_CALL Container_HostInventory_Set_NodeRole(
    Container_HostInventory* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        10,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL Container_HostInventory_SetPtr_NodeRole(
    Container_HostInventory* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        10,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL Container_HostInventory_Clear_NodeRole(
    Container_HostInventory* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        10);
}

MI_INLINE MI_Result MI_CALL Container_HostInventory_Set_OrchestratorType(
    Container_HostInventory* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        11,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL Container_HostInventory_SetPtr_OrchestratorType(
    Container_HostInventory* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        11,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL Container_HostInventory_Clear_OrchestratorType(
    Container_HostInventory* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        11);
}

/*
**==============================================================================
**
** Container_HostInventory provider function prototypes
**
**==============================================================================
*/

/* The developer may optionally define this structure */
typedef struct _Container_HostInventory_Self Container_HostInventory_Self;

MI_EXTERN_C void MI_CALL Container_HostInventory_Load(
    Container_HostInventory_Self** self,
    MI_Module_Self* selfModule,
    MI_Context* context);

MI_EXTERN_C void MI_CALL Container_HostInventory_Unload(
    Container_HostInventory_Self* self,
    MI_Context* context);

MI_EXTERN_C void MI_CALL Container_HostInventory_EnumerateInstances(
    Container_HostInventory_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_PropertySet* propertySet,
    MI_Boolean keysOnly,
    const MI_Filter* filter);

MI_EXTERN_C void MI_CALL Container_HostInventory_GetInstance(
    Container_HostInventory_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const Container_HostInventory* instanceName,
    const MI_PropertySet* propertySet);

MI_EXTERN_C void MI_CALL Container_HostInventory_CreateInstance(
    Container_HostInventory_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const Container_HostInventory* newInstance);

MI_EXTERN_C void MI_CALL Container_HostInventory_ModifyInstance(
    Container_HostInventory_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const Container_HostInventory* modifiedInstance,
    const MI_PropertySet* propertySet);

MI_EXTERN_C void MI_CALL Container_HostInventory_DeleteInstance(
    Container_HostInventory_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const Container_HostInventory* instanceName);


/*
**==============================================================================
**
** Container_HostInventory_Class
**
**==============================================================================
*/

#ifdef __cplusplus
# include <micxx/micxx.h>

MI_BEGIN_NAMESPACE

class Container_HostInventory_Class : public CIM_ManagedElement_Class
{
public:
    
    typedef Container_HostInventory Self;
    
    Container_HostInventory_Class() :
        CIM_ManagedElement_Class(&Container_HostInventory_rtti)
    {
    }
    
    Container_HostInventory_Class(
        const Container_HostInventory* instanceName,
        bool keysOnly) :
        CIM_ManagedElement_Class(
            &Container_HostInventory_rtti,
            &instanceName->__instance,
            keysOnly)
    {
    }
    
    Container_HostInventory_Class(
        const MI_ClassDecl* clDecl,
        const MI_Instance* instance,
        bool keysOnly) :
        CIM_ManagedElement_Class(clDecl, instance, keysOnly)
    {
    }
    
    Container_HostInventory_Class(
        const MI_ClassDecl* clDecl) :
        CIM_ManagedElement_Class(clDecl)
    {
    }
    
    Container_HostInventory_Class& operator=(
        const Container_HostInventory_Class& x)
    {
        CopyRef(x);
        return *this;
    }
    
    Container_HostInventory_Class(
        const Container_HostInventory_Class& x) :
        CIM_ManagedElement_Class(x)
    {
    }

    static const MI_ClassDecl* GetClassDecl()
    {
        return &Container_HostInventory_rtti;
    }

    //
    // Container_HostInventory_Class.Computer
    //
    
    const Field<String>& Computer() const
    {
        const size_t n = offsetof(Self, Computer);
        return GetField<String>(n);
    }
    
    void Computer(const Field<String>& x)
    {
        const size_t n = offsetof(Self, Computer);
        GetField<String>(n) = x;
    }
    
    const String& Computer_value() const
    {
        const size_t n = offsetof(Self, Computer);
        return GetField<String>(n).value;
    }
    
    void Computer_value(const String& x)
    {
        const size_t n = offsetof(Self, Computer);
        GetField<String>(n).Set(x);
    }
    
    bool Computer_exists() const
    {
        const size_t n = offsetof(Self, Computer);
        return GetField<String>(n).exists ? true : false;
    }
    
    void Computer_clear()
    {
        const size_t n = offsetof(Self, Computer);
        GetField<String>(n).Clear();
    }

    //
    // Container_HostInventory_Class.DockerVersion
    //
    
    const Field<String>& DockerVersion() const
    {
        const size_t n = offsetof(Self, DockerVersion);
        return GetField<String>(n);
    }
    
    void DockerVersion(const Field<String>& x)
    {
        const size_t n = offsetof(Self, DockerVersion);
        GetField<String>(n) = x;
    }
    
    const String& DockerVersion_value() const
    {
        const size_t n = offsetof(Self, DockerVersion);
        return GetField<String>(n).value;
    }
    
    void DockerVersion_value(const String& x)
    {
        const size_t n = offsetof(Self, DockerVersion);
        GetField<String>(n).Set(x);
    }
    
    bool DockerVersion_exists() const
    {
        const size_t n = offsetof(Self, DockerVersion);
        return GetField<String>(n).exists ? true : false;
    }
    
    void DockerVersion_clear()
    {
        const size_t n = offsetof(Self, DockerVersion);
        GetField<String>(n).Clear();
    }

    //
    // Container_HostInventory_Class.OperatingSystem
    //
    
    const Field<String>& OperatingSystem() const
    {
        const size_t n = offsetof(Self, OperatingSystem);
        return GetField<String>(n);
    }
    
    void OperatingSystem(const Field<String>& x)
    {
        const size_t n = offsetof(Self, OperatingSystem);
        GetField<String>(n) = x;
    }
    
    const String& OperatingSystem_value() const
    {
        const size_t n = offsetof(Self, OperatingSystem);
        return GetField<String>(n).value;
    }
    
    void OperatingSystem_value(const String& x)
    {
        const size_t n = offsetof(Self, OperatingSystem);
        GetField<String>(n).Set(x);
    }
    
    bool OperatingSystem_exists() const
    {
        const size_t n = offsetof(Self, OperatingSystem);
        return GetField<String>(n).exists ? true : false;
    }
    
    void OperatingSystem_clear()
    {
        const size_t n = offsetof(Self, OperatingSystem);
        GetField<String>(n).Clear();
    }

    //
    // Container_HostInventory_Class.Volume
    //
    
    const Field<String>& Volume() const
    {
        const size_t n = offsetof(Self, Volume);
        return GetField<String>(n);
    }
    
    void Volume(const Field<String>& x)
    {
        const size_t n = offsetof(Self, Volume);
        GetField<String>(n) = x;
    }
    
    const String& Volume_value() const
    {
        const size_t n = offsetof(Self, Volume);
        return GetField<String>(n).value;
    }
    
    void Volume_value(const String& x)
    {
        const size_t n = offsetof(Self, Volume);
        GetField<String>(n).Set(x);
    }
    
    bool Volume_exists() const
    {
        const size_t n = offsetof(Self, Volume);
        return GetField<String>(n).exists ? true : false;
    }
    
    void Volume_clear()
    {
        const size_t n = offsetof(Self, Volume);
        GetField<String>(n).Clear();
    }

    //
    // Container_HostInventory_Class.Network
    //
    
    const Field<String>& Network() const
    {
        const size_t n = offsetof(Self, Network);
        return GetField<String>(n);
    }
    
    void Network(const Field<String>& x)
    {
        const size_t n = offsetof(Self, Network);
        GetField<String>(n) = x;
    }
    
    const String& Network_value() const
    {
        const size_t n = offsetof(Self, Network);
        return GetField<String>(n).value;
    }
    
    void Network_value(const String& x)
    {
        const size_t n = offsetof(Self, Network);
        GetField<String>(n).Set(x);
    }
    
    bool Network_exists() const
    {
        const size_t n = offsetof(Self, Network);
        return GetField<String>(n).exists ? true : false;
    }
    
    void Network_clear()
    {
        const size_t n = offsetof(Self, Network);
        GetField<String>(n).Clear();
    }

    //
    // Container_HostInventory_Class.InternalIp
    //
    
    const Field<String>& InternalIp() const
    {
        const size_t n = offsetof(Self, InternalIp);
        return GetField<String>(n);
    }
    
    void InternalIp(const Field<String>& x)
    {
        const size_t n = offsetof(Self, InternalIp);
        GetField<String>(n) = x;
    }
    
    const String& InternalIp_value() const
    {
        const size_t n = offsetof(Self, InternalIp);
        return GetField<String>(n).value;
    }
    
    void InternalIp_value(const String& x)
    {
        const size_t n = offsetof(Self, InternalIp);
        GetField<String>(n).Set(x);
    }
    
    bool InternalIp_exists() const
    {
        const size_t n = offsetof(Self, InternalIp);
        return GetField<String>(n).exists ? true : false;
    }
    
    void InternalIp_clear()
    {
        const size_t n = offsetof(Self, InternalIp);
        GetField<String>(n).Clear();
    }

    //
    // Container_HostInventory_Class.NodeRole
    //
    
    const Field<String>& NodeRole() const
    {
        const size_t n = offsetof(Self, NodeRole);
        return GetField<String>(n);
    }
    
    void NodeRole(const Field<String>& x)
    {
        const size_t n = offsetof(Self, NodeRole);
        GetField<String>(n) = x;
    }
    
    const String& NodeRole_value() const
    {
        const size_t n = offsetof(Self, NodeRole);
        return GetField<String>(n).value;
    }
    
    void NodeRole_value(const String& x)
    {
        const size_t n = offsetof(Self, NodeRole);
        GetField<String>(n).Set(x);
    }
    
    bool NodeRole_exists() const
    {
        const size_t n = offsetof(Self, NodeRole);
        return GetField<String>(n).exists ? true : false;
    }
    
    void NodeRole_clear()
    {
        const size_t n = offsetof(Self, NodeRole);
        GetField<String>(n).Clear();
    }

    //
    // Container_HostInventory_Class.OrchestratorType
    //
    
    const Field<String>& OrchestratorType() const
    {
        const size_t n = offsetof(Self, OrchestratorType);
        return GetField<String>(n);
    }
    
    void OrchestratorType(const Field<String>& x)
    {
        const size_t n = offsetof(Self, OrchestratorType);
        GetField<String>(n) = x;
    }
    
    const String& OrchestratorType_value() const
    {
        const size_t n = offsetof(Self, OrchestratorType);
        return GetField<String>(n).value;
    }
    
    void OrchestratorType_value(const String& x)
    {
        const size_t n = offsetof(Self, OrchestratorType);
        GetField<String>(n).Set(x);
    }
    
    bool OrchestratorType_exists() const
    {
        const size_t n = offsetof(Self, OrchestratorType);
        return GetField<String>(n).exists ? true : false;
    }
    
    void OrchestratorType_clear()
    {
        const size_t n = offsetof(Self, OrchestratorType);
        GetField<String>(n).Clear();
    }
};

typedef Array<Container_HostInventory_Class> Container_HostInventory_ClassA;

MI_END_NAMESPACE

#endif /* __cplusplus */

#endif /* _Container_HostInventory_h */
