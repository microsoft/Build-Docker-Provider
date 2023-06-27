/* @migen@ */
/*
**==============================================================================
**
** WARNING: THIS FILE WAS AUTOMATICALLY GENERATED. PLEASE DO NOT EDIT.
**
**==============================================================================
*/
#ifndef _Container_ContainerInventory_h
#define _Container_ContainerInventory_h

#include <MI.h>
#include "CIM_ManagedElement.h"

/*
**==============================================================================
**
** Container_ContainerInventory [Container_ContainerInventory]
**
** Keys:
**    InstanceID
**
**==============================================================================
*/

typedef struct _Container_ContainerInventory /* extends CIM_ManagedElement */
{
    MI_Instance __instance;
    /* CIM_ManagedElement properties */
    /*KEY*/ MI_ConstStringField InstanceID;
    MI_ConstStringField Caption;
    MI_ConstStringField Description;
    MI_ConstStringField ElementName;
    /* Container_ContainerInventory properties */
    MI_ConstStringField CreatedTime;
    MI_ConstStringField State;
    MI_ConstUint32Field ExitCode;
    MI_ConstStringField StartedTime;
    MI_ConstStringField FinishedTime;
    MI_ConstStringField ImageId;
    MI_ConstStringField Image;
    MI_ConstStringField Repository;
    MI_ConstStringField ImageTag;
    MI_ConstStringField ComposeGroup;
    MI_ConstStringField ContainerHostname;
    MI_ConstStringField Computer;
    MI_ConstStringField Command;
    MI_ConstStringField EnvironmentVar;
    MI_ConstStringField Ports;
    MI_ConstStringField Links;
}
Container_ContainerInventory;

typedef struct _Container_ContainerInventory_Ref
{
    Container_ContainerInventory* value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
Container_ContainerInventory_Ref;

typedef struct _Container_ContainerInventory_ConstRef
{
    MI_CONST Container_ContainerInventory* value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
Container_ContainerInventory_ConstRef;

typedef struct _Container_ContainerInventory_Array
{
    struct _Container_ContainerInventory** data;
    MI_Uint32 size;
}
Container_ContainerInventory_Array;

typedef struct _Container_ContainerInventory_ConstArray
{
    struct _Container_ContainerInventory MI_CONST* MI_CONST* data;
    MI_Uint32 size;
}
Container_ContainerInventory_ConstArray;

typedef struct _Container_ContainerInventory_ArrayRef
{
    Container_ContainerInventory_Array value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
Container_ContainerInventory_ArrayRef;

typedef struct _Container_ContainerInventory_ConstArrayRef
{
    Container_ContainerInventory_ConstArray value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
Container_ContainerInventory_ConstArrayRef;

MI_EXTERN_C MI_CONST MI_ClassDecl Container_ContainerInventory_rtti;

MI_INLINE MI_Result MI_CALL Container_ContainerInventory_Construct(
    Container_ContainerInventory* self,
    MI_Context* context)
{
    return MI_ConstructInstance(context, &Container_ContainerInventory_rtti,
        (MI_Instance*)&self->__instance);
}

MI_INLINE MI_Result MI_CALL Container_ContainerInventory_Clone(
    const Container_ContainerInventory* self,
    Container_ContainerInventory** newInstance)
{
    return MI_Instance_Clone(
        &self->__instance, (MI_Instance**)newInstance);
}

MI_INLINE MI_Boolean MI_CALL Container_ContainerInventory_IsA(
    const MI_Instance* self)
{
    MI_Boolean res = MI_FALSE;
    return MI_Instance_IsA(self, &Container_ContainerInventory_rtti, &res) == MI_RESULT_OK && res;
}

MI_INLINE MI_Result MI_CALL Container_ContainerInventory_Destruct(Container_ContainerInventory* self)
{
    return MI_Instance_Destruct(&self->__instance);
}

MI_INLINE MI_Result MI_CALL Container_ContainerInventory_Delete(Container_ContainerInventory* self)
{
    return MI_Instance_Delete(&self->__instance);
}

MI_INLINE MI_Result MI_CALL Container_ContainerInventory_Post(
    const Container_ContainerInventory* self,
    MI_Context* context)
{
    return MI_PostInstance(context, &self->__instance);
}

MI_INLINE MI_Result MI_CALL Container_ContainerInventory_Set_InstanceID(
    Container_ContainerInventory* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        0,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL Container_ContainerInventory_SetPtr_InstanceID(
    Container_ContainerInventory* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        0,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL Container_ContainerInventory_Clear_InstanceID(
    Container_ContainerInventory* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        0);
}

MI_INLINE MI_Result MI_CALL Container_ContainerInventory_Set_Caption(
    Container_ContainerInventory* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        1,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL Container_ContainerInventory_SetPtr_Caption(
    Container_ContainerInventory* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        1,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL Container_ContainerInventory_Clear_Caption(
    Container_ContainerInventory* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        1);
}

MI_INLINE MI_Result MI_CALL Container_ContainerInventory_Set_Description(
    Container_ContainerInventory* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        2,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL Container_ContainerInventory_SetPtr_Description(
    Container_ContainerInventory* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        2,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL Container_ContainerInventory_Clear_Description(
    Container_ContainerInventory* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        2);
}

MI_INLINE MI_Result MI_CALL Container_ContainerInventory_Set_ElementName(
    Container_ContainerInventory* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        3,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL Container_ContainerInventory_SetPtr_ElementName(
    Container_ContainerInventory* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        3,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL Container_ContainerInventory_Clear_ElementName(
    Container_ContainerInventory* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        3);
}

MI_INLINE MI_Result MI_CALL Container_ContainerInventory_Set_CreatedTime(
    Container_ContainerInventory* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        4,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL Container_ContainerInventory_SetPtr_CreatedTime(
    Container_ContainerInventory* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        4,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL Container_ContainerInventory_Clear_CreatedTime(
    Container_ContainerInventory* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        4);
}

MI_INLINE MI_Result MI_CALL Container_ContainerInventory_Set_State(
    Container_ContainerInventory* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        5,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL Container_ContainerInventory_SetPtr_State(
    Container_ContainerInventory* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        5,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL Container_ContainerInventory_Clear_State(
    Container_ContainerInventory* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        5);
}

MI_INLINE MI_Result MI_CALL Container_ContainerInventory_Set_ExitCode(
    Container_ContainerInventory* self,
    MI_Uint32 x)
{
    ((MI_Uint32Field*)&self->ExitCode)->value = x;
    ((MI_Uint32Field*)&self->ExitCode)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL Container_ContainerInventory_Clear_ExitCode(
    Container_ContainerInventory* self)
{
    memset((void*)&self->ExitCode, 0, sizeof(self->ExitCode));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL Container_ContainerInventory_Set_StartedTime(
    Container_ContainerInventory* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        7,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL Container_ContainerInventory_SetPtr_StartedTime(
    Container_ContainerInventory* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        7,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL Container_ContainerInventory_Clear_StartedTime(
    Container_ContainerInventory* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        7);
}

MI_INLINE MI_Result MI_CALL Container_ContainerInventory_Set_FinishedTime(
    Container_ContainerInventory* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        8,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL Container_ContainerInventory_SetPtr_FinishedTime(
    Container_ContainerInventory* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        8,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL Container_ContainerInventory_Clear_FinishedTime(
    Container_ContainerInventory* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        8);
}

MI_INLINE MI_Result MI_CALL Container_ContainerInventory_Set_ImageId(
    Container_ContainerInventory* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        9,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL Container_ContainerInventory_SetPtr_ImageId(
    Container_ContainerInventory* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        9,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL Container_ContainerInventory_Clear_ImageId(
    Container_ContainerInventory* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        9);
}

MI_INLINE MI_Result MI_CALL Container_ContainerInventory_Set_Image(
    Container_ContainerInventory* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        10,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL Container_ContainerInventory_SetPtr_Image(
    Container_ContainerInventory* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        10,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL Container_ContainerInventory_Clear_Image(
    Container_ContainerInventory* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        10);
}

MI_INLINE MI_Result MI_CALL Container_ContainerInventory_Set_Repository(
    Container_ContainerInventory* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        11,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL Container_ContainerInventory_SetPtr_Repository(
    Container_ContainerInventory* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        11,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL Container_ContainerInventory_Clear_Repository(
    Container_ContainerInventory* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        11);
}

MI_INLINE MI_Result MI_CALL Container_ContainerInventory_Set_ImageTag(
    Container_ContainerInventory* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        12,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL Container_ContainerInventory_SetPtr_ImageTag(
    Container_ContainerInventory* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        12,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL Container_ContainerInventory_Clear_ImageTag(
    Container_ContainerInventory* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        12);
}

MI_INLINE MI_Result MI_CALL Container_ContainerInventory_Set_ComposeGroup(
    Container_ContainerInventory* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        13,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL Container_ContainerInventory_SetPtr_ComposeGroup(
    Container_ContainerInventory* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        13,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL Container_ContainerInventory_Clear_ComposeGroup(
    Container_ContainerInventory* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        13);
}

MI_INLINE MI_Result MI_CALL Container_ContainerInventory_Set_ContainerHostname(
    Container_ContainerInventory* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        14,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL Container_ContainerInventory_SetPtr_ContainerHostname(
    Container_ContainerInventory* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        14,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL Container_ContainerInventory_Clear_ContainerHostname(
    Container_ContainerInventory* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        14);
}

MI_INLINE MI_Result MI_CALL Container_ContainerInventory_Set_Computer(
    Container_ContainerInventory* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        15,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL Container_ContainerInventory_SetPtr_Computer(
    Container_ContainerInventory* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        15,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL Container_ContainerInventory_Clear_Computer(
    Container_ContainerInventory* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        15);
}

MI_INLINE MI_Result MI_CALL Container_ContainerInventory_Set_Command(
    Container_ContainerInventory* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        16,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL Container_ContainerInventory_SetPtr_Command(
    Container_ContainerInventory* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        16,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL Container_ContainerInventory_Clear_Command(
    Container_ContainerInventory* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        16);
}

MI_INLINE MI_Result MI_CALL Container_ContainerInventory_Set_EnvironmentVar(
    Container_ContainerInventory* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        17,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL Container_ContainerInventory_SetPtr_EnvironmentVar(
    Container_ContainerInventory* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        17,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL Container_ContainerInventory_Clear_EnvironmentVar(
    Container_ContainerInventory* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        17);
}

MI_INLINE MI_Result MI_CALL Container_ContainerInventory_Set_Ports(
    Container_ContainerInventory* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        18,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL Container_ContainerInventory_SetPtr_Ports(
    Container_ContainerInventory* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        18,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL Container_ContainerInventory_Clear_Ports(
    Container_ContainerInventory* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        18);
}

MI_INLINE MI_Result MI_CALL Container_ContainerInventory_Set_Links(
    Container_ContainerInventory* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        19,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL Container_ContainerInventory_SetPtr_Links(
    Container_ContainerInventory* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        19,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL Container_ContainerInventory_Clear_Links(
    Container_ContainerInventory* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        19);
}

/*
**==============================================================================
**
** Container_ContainerInventory provider function prototypes
**
**==============================================================================
*/

/* The developer may optionally define this structure */
typedef struct _Container_ContainerInventory_Self Container_ContainerInventory_Self;

MI_EXTERN_C void MI_CALL Container_ContainerInventory_Load(
    Container_ContainerInventory_Self** self,
    MI_Module_Self* selfModule,
    MI_Context* context);

MI_EXTERN_C void MI_CALL Container_ContainerInventory_Unload(
    Container_ContainerInventory_Self* self,
    MI_Context* context);

MI_EXTERN_C void MI_CALL Container_ContainerInventory_EnumerateInstances(
    Container_ContainerInventory_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_PropertySet* propertySet,
    MI_Boolean keysOnly,
    const MI_Filter* filter);

MI_EXTERN_C void MI_CALL Container_ContainerInventory_GetInstance(
    Container_ContainerInventory_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const Container_ContainerInventory* instanceName,
    const MI_PropertySet* propertySet);

MI_EXTERN_C void MI_CALL Container_ContainerInventory_CreateInstance(
    Container_ContainerInventory_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const Container_ContainerInventory* newInstance);

MI_EXTERN_C void MI_CALL Container_ContainerInventory_ModifyInstance(
    Container_ContainerInventory_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const Container_ContainerInventory* modifiedInstance,
    const MI_PropertySet* propertySet);

MI_EXTERN_C void MI_CALL Container_ContainerInventory_DeleteInstance(
    Container_ContainerInventory_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const Container_ContainerInventory* instanceName);


/*
**==============================================================================
**
** Container_ContainerInventory_Class
**
**==============================================================================
*/

#ifdef __cplusplus
# include <micxx/micxx.h>

MI_BEGIN_NAMESPACE

class Container_ContainerInventory_Class : public CIM_ManagedElement_Class
{
public:
    
    typedef Container_ContainerInventory Self;
    
    Container_ContainerInventory_Class() :
        CIM_ManagedElement_Class(&Container_ContainerInventory_rtti)
    {
    }
    
    Container_ContainerInventory_Class(
        const Container_ContainerInventory* instanceName,
        bool keysOnly) :
        CIM_ManagedElement_Class(
            &Container_ContainerInventory_rtti,
            &instanceName->__instance,
            keysOnly)
    {
    }
    
    Container_ContainerInventory_Class(
        const MI_ClassDecl* clDecl,
        const MI_Instance* instance,
        bool keysOnly) :
        CIM_ManagedElement_Class(clDecl, instance, keysOnly)
    {
    }
    
    Container_ContainerInventory_Class(
        const MI_ClassDecl* clDecl) :
        CIM_ManagedElement_Class(clDecl)
    {
    }
    
    Container_ContainerInventory_Class& operator=(
        const Container_ContainerInventory_Class& x)
    {
        CopyRef(x);
        return *this;
    }
    
    Container_ContainerInventory_Class(
        const Container_ContainerInventory_Class& x) :
        CIM_ManagedElement_Class(x)
    {
    }

    static const MI_ClassDecl* GetClassDecl()
    {
        return &Container_ContainerInventory_rtti;
    }

    //
    // Container_ContainerInventory_Class.CreatedTime
    //
    
    const Field<String>& CreatedTime() const
    {
        const size_t n = offsetof(Self, CreatedTime);
        return GetField<String>(n);
    }
    
    void CreatedTime(const Field<String>& x)
    {
        const size_t n = offsetof(Self, CreatedTime);
        GetField<String>(n) = x;
    }
    
    const String& CreatedTime_value() const
    {
        const size_t n = offsetof(Self, CreatedTime);
        return GetField<String>(n).value;
    }
    
    void CreatedTime_value(const String& x)
    {
        const size_t n = offsetof(Self, CreatedTime);
        GetField<String>(n).Set(x);
    }
    
    bool CreatedTime_exists() const
    {
        const size_t n = offsetof(Self, CreatedTime);
        return GetField<String>(n).exists ? true : false;
    }
    
    void CreatedTime_clear()
    {
        const size_t n = offsetof(Self, CreatedTime);
        GetField<String>(n).Clear();
    }

    //
    // Container_ContainerInventory_Class.State
    //
    
    const Field<String>& State() const
    {
        const size_t n = offsetof(Self, State);
        return GetField<String>(n);
    }
    
    void State(const Field<String>& x)
    {
        const size_t n = offsetof(Self, State);
        GetField<String>(n) = x;
    }
    
    const String& State_value() const
    {
        const size_t n = offsetof(Self, State);
        return GetField<String>(n).value;
    }
    
    void State_value(const String& x)
    {
        const size_t n = offsetof(Self, State);
        GetField<String>(n).Set(x);
    }
    
    bool State_exists() const
    {
        const size_t n = offsetof(Self, State);
        return GetField<String>(n).exists ? true : false;
    }
    
    void State_clear()
    {
        const size_t n = offsetof(Self, State);
        GetField<String>(n).Clear();
    }

    //
    // Container_ContainerInventory_Class.ExitCode
    //
    
    const Field<Uint32>& ExitCode() const
    {
        const size_t n = offsetof(Self, ExitCode);
        return GetField<Uint32>(n);
    }
    
    void ExitCode(const Field<Uint32>& x)
    {
        const size_t n = offsetof(Self, ExitCode);
        GetField<Uint32>(n) = x;
    }
    
    const Uint32& ExitCode_value() const
    {
        const size_t n = offsetof(Self, ExitCode);
        return GetField<Uint32>(n).value;
    }
    
    void ExitCode_value(const Uint32& x)
    {
        const size_t n = offsetof(Self, ExitCode);
        GetField<Uint32>(n).Set(x);
    }
    
    bool ExitCode_exists() const
    {
        const size_t n = offsetof(Self, ExitCode);
        return GetField<Uint32>(n).exists ? true : false;
    }
    
    void ExitCode_clear()
    {
        const size_t n = offsetof(Self, ExitCode);
        GetField<Uint32>(n).Clear();
    }

    //
    // Container_ContainerInventory_Class.StartedTime
    //
    
    const Field<String>& StartedTime() const
    {
        const size_t n = offsetof(Self, StartedTime);
        return GetField<String>(n);
    }
    
    void StartedTime(const Field<String>& x)
    {
        const size_t n = offsetof(Self, StartedTime);
        GetField<String>(n) = x;
    }
    
    const String& StartedTime_value() const
    {
        const size_t n = offsetof(Self, StartedTime);
        return GetField<String>(n).value;
    }
    
    void StartedTime_value(const String& x)
    {
        const size_t n = offsetof(Self, StartedTime);
        GetField<String>(n).Set(x);
    }
    
    bool StartedTime_exists() const
    {
        const size_t n = offsetof(Self, StartedTime);
        return GetField<String>(n).exists ? true : false;
    }
    
    void StartedTime_clear()
    {
        const size_t n = offsetof(Self, StartedTime);
        GetField<String>(n).Clear();
    }

    //
    // Container_ContainerInventory_Class.FinishedTime
    //
    
    const Field<String>& FinishedTime() const
    {
        const size_t n = offsetof(Self, FinishedTime);
        return GetField<String>(n);
    }
    
    void FinishedTime(const Field<String>& x)
    {
        const size_t n = offsetof(Self, FinishedTime);
        GetField<String>(n) = x;
    }
    
    const String& FinishedTime_value() const
    {
        const size_t n = offsetof(Self, FinishedTime);
        return GetField<String>(n).value;
    }
    
    void FinishedTime_value(const String& x)
    {
        const size_t n = offsetof(Self, FinishedTime);
        GetField<String>(n).Set(x);
    }
    
    bool FinishedTime_exists() const
    {
        const size_t n = offsetof(Self, FinishedTime);
        return GetField<String>(n).exists ? true : false;
    }
    
    void FinishedTime_clear()
    {
        const size_t n = offsetof(Self, FinishedTime);
        GetField<String>(n).Clear();
    }

    //
    // Container_ContainerInventory_Class.ImageId
    //
    
    const Field<String>& ImageId() const
    {
        const size_t n = offsetof(Self, ImageId);
        return GetField<String>(n);
    }
    
    void ImageId(const Field<String>& x)
    {
        const size_t n = offsetof(Self, ImageId);
        GetField<String>(n) = x;
    }
    
    const String& ImageId_value() const
    {
        const size_t n = offsetof(Self, ImageId);
        return GetField<String>(n).value;
    }
    
    void ImageId_value(const String& x)
    {
        const size_t n = offsetof(Self, ImageId);
        GetField<String>(n).Set(x);
    }
    
    bool ImageId_exists() const
    {
        const size_t n = offsetof(Self, ImageId);
        return GetField<String>(n).exists ? true : false;
    }
    
    void ImageId_clear()
    {
        const size_t n = offsetof(Self, ImageId);
        GetField<String>(n).Clear();
    }

    //
    // Container_ContainerInventory_Class.Image
    //
    
    const Field<String>& Image() const
    {
        const size_t n = offsetof(Self, Image);
        return GetField<String>(n);
    }
    
    void Image(const Field<String>& x)
    {
        const size_t n = offsetof(Self, Image);
        GetField<String>(n) = x;
    }
    
    const String& Image_value() const
    {
        const size_t n = offsetof(Self, Image);
        return GetField<String>(n).value;
    }
    
    void Image_value(const String& x)
    {
        const size_t n = offsetof(Self, Image);
        GetField<String>(n).Set(x);
    }
    
    bool Image_exists() const
    {
        const size_t n = offsetof(Self, Image);
        return GetField<String>(n).exists ? true : false;
    }
    
    void Image_clear()
    {
        const size_t n = offsetof(Self, Image);
        GetField<String>(n).Clear();
    }

    //
    // Container_ContainerInventory_Class.Repository
    //
    
    const Field<String>& Repository() const
    {
        const size_t n = offsetof(Self, Repository);
        return GetField<String>(n);
    }
    
    void Repository(const Field<String>& x)
    {
        const size_t n = offsetof(Self, Repository);
        GetField<String>(n) = x;
    }
    
    const String& Repository_value() const
    {
        const size_t n = offsetof(Self, Repository);
        return GetField<String>(n).value;
    }
    
    void Repository_value(const String& x)
    {
        const size_t n = offsetof(Self, Repository);
        GetField<String>(n).Set(x);
    }
    
    bool Repository_exists() const
    {
        const size_t n = offsetof(Self, Repository);
        return GetField<String>(n).exists ? true : false;
    }
    
    void Repository_clear()
    {
        const size_t n = offsetof(Self, Repository);
        GetField<String>(n).Clear();
    }

    //
    // Container_ContainerInventory_Class.ImageTag
    //
    
    const Field<String>& ImageTag() const
    {
        const size_t n = offsetof(Self, ImageTag);
        return GetField<String>(n);
    }
    
    void ImageTag(const Field<String>& x)
    {
        const size_t n = offsetof(Self, ImageTag);
        GetField<String>(n) = x;
    }
    
    const String& ImageTag_value() const
    {
        const size_t n = offsetof(Self, ImageTag);
        return GetField<String>(n).value;
    }
    
    void ImageTag_value(const String& x)
    {
        const size_t n = offsetof(Self, ImageTag);
        GetField<String>(n).Set(x);
    }
    
    bool ImageTag_exists() const
    {
        const size_t n = offsetof(Self, ImageTag);
        return GetField<String>(n).exists ? true : false;
    }
    
    void ImageTag_clear()
    {
        const size_t n = offsetof(Self, ImageTag);
        GetField<String>(n).Clear();
    }

    //
    // Container_ContainerInventory_Class.ComposeGroup
    //
    
    const Field<String>& ComposeGroup() const
    {
        const size_t n = offsetof(Self, ComposeGroup);
        return GetField<String>(n);
    }
    
    void ComposeGroup(const Field<String>& x)
    {
        const size_t n = offsetof(Self, ComposeGroup);
        GetField<String>(n) = x;
    }
    
    const String& ComposeGroup_value() const
    {
        const size_t n = offsetof(Self, ComposeGroup);
        return GetField<String>(n).value;
    }
    
    void ComposeGroup_value(const String& x)
    {
        const size_t n = offsetof(Self, ComposeGroup);
        GetField<String>(n).Set(x);
    }
    
    bool ComposeGroup_exists() const
    {
        const size_t n = offsetof(Self, ComposeGroup);
        return GetField<String>(n).exists ? true : false;
    }
    
    void ComposeGroup_clear()
    {
        const size_t n = offsetof(Self, ComposeGroup);
        GetField<String>(n).Clear();
    }

    //
    // Container_ContainerInventory_Class.ContainerHostname
    //
    
    const Field<String>& ContainerHostname() const
    {
        const size_t n = offsetof(Self, ContainerHostname);
        return GetField<String>(n);
    }
    
    void ContainerHostname(const Field<String>& x)
    {
        const size_t n = offsetof(Self, ContainerHostname);
        GetField<String>(n) = x;
    }
    
    const String& ContainerHostname_value() const
    {
        const size_t n = offsetof(Self, ContainerHostname);
        return GetField<String>(n).value;
    }
    
    void ContainerHostname_value(const String& x)
    {
        const size_t n = offsetof(Self, ContainerHostname);
        GetField<String>(n).Set(x);
    }
    
    bool ContainerHostname_exists() const
    {
        const size_t n = offsetof(Self, ContainerHostname);
        return GetField<String>(n).exists ? true : false;
    }
    
    void ContainerHostname_clear()
    {
        const size_t n = offsetof(Self, ContainerHostname);
        GetField<String>(n).Clear();
    }

    //
    // Container_ContainerInventory_Class.Computer
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
    // Container_ContainerInventory_Class.Command
    //
    
    const Field<String>& Command() const
    {
        const size_t n = offsetof(Self, Command);
        return GetField<String>(n);
    }
    
    void Command(const Field<String>& x)
    {
        const size_t n = offsetof(Self, Command);
        GetField<String>(n) = x;
    }
    
    const String& Command_value() const
    {
        const size_t n = offsetof(Self, Command);
        return GetField<String>(n).value;
    }
    
    void Command_value(const String& x)
    {
        const size_t n = offsetof(Self, Command);
        GetField<String>(n).Set(x);
    }
    
    bool Command_exists() const
    {
        const size_t n = offsetof(Self, Command);
        return GetField<String>(n).exists ? true : false;
    }
    
    void Command_clear()
    {
        const size_t n = offsetof(Self, Command);
        GetField<String>(n).Clear();
    }

    //
    // Container_ContainerInventory_Class.EnvironmentVar
    //
    
    const Field<String>& EnvironmentVar() const
    {
        const size_t n = offsetof(Self, EnvironmentVar);
        return GetField<String>(n);
    }
    
    void EnvironmentVar(const Field<String>& x)
    {
        const size_t n = offsetof(Self, EnvironmentVar);
        GetField<String>(n) = x;
    }
    
    const String& EnvironmentVar_value() const
    {
        const size_t n = offsetof(Self, EnvironmentVar);
        return GetField<String>(n).value;
    }
    
    void EnvironmentVar_value(const String& x)
    {
        const size_t n = offsetof(Self, EnvironmentVar);
        GetField<String>(n).Set(x);
    }
    
    bool EnvironmentVar_exists() const
    {
        const size_t n = offsetof(Self, EnvironmentVar);
        return GetField<String>(n).exists ? true : false;
    }
    
    void EnvironmentVar_clear()
    {
        const size_t n = offsetof(Self, EnvironmentVar);
        GetField<String>(n).Clear();
    }

    //
    // Container_ContainerInventory_Class.Ports
    //
    
    const Field<String>& Ports() const
    {
        const size_t n = offsetof(Self, Ports);
        return GetField<String>(n);
    }
    
    void Ports(const Field<String>& x)
    {
        const size_t n = offsetof(Self, Ports);
        GetField<String>(n) = x;
    }
    
    const String& Ports_value() const
    {
        const size_t n = offsetof(Self, Ports);
        return GetField<String>(n).value;
    }
    
    void Ports_value(const String& x)
    {
        const size_t n = offsetof(Self, Ports);
        GetField<String>(n).Set(x);
    }
    
    bool Ports_exists() const
    {
        const size_t n = offsetof(Self, Ports);
        return GetField<String>(n).exists ? true : false;
    }
    
    void Ports_clear()
    {
        const size_t n = offsetof(Self, Ports);
        GetField<String>(n).Clear();
    }

    //
    // Container_ContainerInventory_Class.Links
    //
    
    const Field<String>& Links() const
    {
        const size_t n = offsetof(Self, Links);
        return GetField<String>(n);
    }
    
    void Links(const Field<String>& x)
    {
        const size_t n = offsetof(Self, Links);
        GetField<String>(n) = x;
    }
    
    const String& Links_value() const
    {
        const size_t n = offsetof(Self, Links);
        return GetField<String>(n).value;
    }
    
    void Links_value(const String& x)
    {
        const size_t n = offsetof(Self, Links);
        GetField<String>(n).Set(x);
    }
    
    bool Links_exists() const
    {
        const size_t n = offsetof(Self, Links);
        return GetField<String>(n).exists ? true : false;
    }
    
    void Links_clear()
    {
        const size_t n = offsetof(Self, Links);
        GetField<String>(n).Clear();
    }
};

typedef Array<Container_ContainerInventory_Class> Container_ContainerInventory_ClassA;

MI_END_NAMESPACE

#endif /* __cplusplus */

#endif /* _Container_ContainerInventory_h */
