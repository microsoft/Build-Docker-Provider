/* @migen@ */
/*
**==============================================================================
**
** WARNING: THIS FILE WAS AUTOMATICALLY GENERATED. PLEASE DO NOT EDIT.
**
**==============================================================================
*/
#ifndef _Container_DaemonEvent_h
#define _Container_DaemonEvent_h

#include <MI.h>
#include "CIM_ManagedElement.h"

/*
**==============================================================================
**
** Container_DaemonEvent [Container_DaemonEvent]
**
** Keys:
**    InstanceID
**
**==============================================================================
*/

typedef struct _Container_DaemonEvent /* extends CIM_ManagedElement */
{
    MI_Instance __instance;
    /* CIM_ManagedElement properties */
    /*KEY*/ MI_ConstStringField InstanceID;
    MI_ConstStringField Caption;
    MI_ConstStringField Description;
    MI_ConstStringField ElementName;
    /* Container_DaemonEvent properties */
    MI_ConstStringField Computer;
    MI_ConstStringField TimeOfCommand;
    MI_ConstStringField Command;
    MI_ConstStringField Id;
    MI_ConstStringField ContainerName;
}
Container_DaemonEvent;

typedef struct _Container_DaemonEvent_Ref
{
    Container_DaemonEvent* value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
Container_DaemonEvent_Ref;

typedef struct _Container_DaemonEvent_ConstRef
{
    MI_CONST Container_DaemonEvent* value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
Container_DaemonEvent_ConstRef;

typedef struct _Container_DaemonEvent_Array
{
    struct _Container_DaemonEvent** data;
    MI_Uint32 size;
}
Container_DaemonEvent_Array;

typedef struct _Container_DaemonEvent_ConstArray
{
    struct _Container_DaemonEvent MI_CONST* MI_CONST* data;
    MI_Uint32 size;
}
Container_DaemonEvent_ConstArray;

typedef struct _Container_DaemonEvent_ArrayRef
{
    Container_DaemonEvent_Array value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
Container_DaemonEvent_ArrayRef;

typedef struct _Container_DaemonEvent_ConstArrayRef
{
    Container_DaemonEvent_ConstArray value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
Container_DaemonEvent_ConstArrayRef;

MI_EXTERN_C MI_CONST MI_ClassDecl Container_DaemonEvent_rtti;

MI_INLINE MI_Result MI_CALL Container_DaemonEvent_Construct(
    Container_DaemonEvent* self,
    MI_Context* context)
{
    return MI_ConstructInstance(context, &Container_DaemonEvent_rtti,
        (MI_Instance*)&self->__instance);
}

MI_INLINE MI_Result MI_CALL Container_DaemonEvent_Clone(
    const Container_DaemonEvent* self,
    Container_DaemonEvent** newInstance)
{
    return MI_Instance_Clone(
        &self->__instance, (MI_Instance**)newInstance);
}

MI_INLINE MI_Boolean MI_CALL Container_DaemonEvent_IsA(
    const MI_Instance* self)
{
    MI_Boolean res = MI_FALSE;
    return MI_Instance_IsA(self, &Container_DaemonEvent_rtti, &res) == MI_RESULT_OK && res;
}

MI_INLINE MI_Result MI_CALL Container_DaemonEvent_Destruct(Container_DaemonEvent* self)
{
    return MI_Instance_Destruct(&self->__instance);
}

MI_INLINE MI_Result MI_CALL Container_DaemonEvent_Delete(Container_DaemonEvent* self)
{
    return MI_Instance_Delete(&self->__instance);
}

MI_INLINE MI_Result MI_CALL Container_DaemonEvent_Post(
    const Container_DaemonEvent* self,
    MI_Context* context)
{
    return MI_PostInstance(context, &self->__instance);
}

MI_INLINE MI_Result MI_CALL Container_DaemonEvent_Set_InstanceID(
    Container_DaemonEvent* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        0,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL Container_DaemonEvent_SetPtr_InstanceID(
    Container_DaemonEvent* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        0,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL Container_DaemonEvent_Clear_InstanceID(
    Container_DaemonEvent* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        0);
}

MI_INLINE MI_Result MI_CALL Container_DaemonEvent_Set_Caption(
    Container_DaemonEvent* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        1,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL Container_DaemonEvent_SetPtr_Caption(
    Container_DaemonEvent* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        1,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL Container_DaemonEvent_Clear_Caption(
    Container_DaemonEvent* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        1);
}

MI_INLINE MI_Result MI_CALL Container_DaemonEvent_Set_Description(
    Container_DaemonEvent* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        2,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL Container_DaemonEvent_SetPtr_Description(
    Container_DaemonEvent* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        2,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL Container_DaemonEvent_Clear_Description(
    Container_DaemonEvent* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        2);
}

MI_INLINE MI_Result MI_CALL Container_DaemonEvent_Set_ElementName(
    Container_DaemonEvent* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        3,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL Container_DaemonEvent_SetPtr_ElementName(
    Container_DaemonEvent* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        3,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL Container_DaemonEvent_Clear_ElementName(
    Container_DaemonEvent* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        3);
}

MI_INLINE MI_Result MI_CALL Container_DaemonEvent_Set_Computer(
    Container_DaemonEvent* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        4,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL Container_DaemonEvent_SetPtr_Computer(
    Container_DaemonEvent* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        4,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL Container_DaemonEvent_Clear_Computer(
    Container_DaemonEvent* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        4);
}

MI_INLINE MI_Result MI_CALL Container_DaemonEvent_Set_TimeOfCommand(
    Container_DaemonEvent* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        5,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL Container_DaemonEvent_SetPtr_TimeOfCommand(
    Container_DaemonEvent* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        5,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL Container_DaemonEvent_Clear_TimeOfCommand(
    Container_DaemonEvent* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        5);
}

MI_INLINE MI_Result MI_CALL Container_DaemonEvent_Set_Command(
    Container_DaemonEvent* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        6,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL Container_DaemonEvent_SetPtr_Command(
    Container_DaemonEvent* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        6,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL Container_DaemonEvent_Clear_Command(
    Container_DaemonEvent* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        6);
}

MI_INLINE MI_Result MI_CALL Container_DaemonEvent_Set_Id(
    Container_DaemonEvent* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        7,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL Container_DaemonEvent_SetPtr_Id(
    Container_DaemonEvent* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        7,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL Container_DaemonEvent_Clear_Id(
    Container_DaemonEvent* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        7);
}

MI_INLINE MI_Result MI_CALL Container_DaemonEvent_Set_ContainerName(
    Container_DaemonEvent* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        8,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL Container_DaemonEvent_SetPtr_ContainerName(
    Container_DaemonEvent* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        8,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL Container_DaemonEvent_Clear_ContainerName(
    Container_DaemonEvent* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        8);
}

/*
**==============================================================================
**
** Container_DaemonEvent provider function prototypes
**
**==============================================================================
*/

/* The developer may optionally define this structure */
typedef struct _Container_DaemonEvent_Self Container_DaemonEvent_Self;

MI_EXTERN_C void MI_CALL Container_DaemonEvent_Load(
    Container_DaemonEvent_Self** self,
    MI_Module_Self* selfModule,
    MI_Context* context);

MI_EXTERN_C void MI_CALL Container_DaemonEvent_Unload(
    Container_DaemonEvent_Self* self,
    MI_Context* context);

MI_EXTERN_C void MI_CALL Container_DaemonEvent_EnumerateInstances(
    Container_DaemonEvent_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_PropertySet* propertySet,
    MI_Boolean keysOnly,
    const MI_Filter* filter);

MI_EXTERN_C void MI_CALL Container_DaemonEvent_GetInstance(
    Container_DaemonEvent_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const Container_DaemonEvent* instanceName,
    const MI_PropertySet* propertySet);

MI_EXTERN_C void MI_CALL Container_DaemonEvent_CreateInstance(
    Container_DaemonEvent_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const Container_DaemonEvent* newInstance);

MI_EXTERN_C void MI_CALL Container_DaemonEvent_ModifyInstance(
    Container_DaemonEvent_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const Container_DaemonEvent* modifiedInstance,
    const MI_PropertySet* propertySet);

MI_EXTERN_C void MI_CALL Container_DaemonEvent_DeleteInstance(
    Container_DaemonEvent_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const Container_DaemonEvent* instanceName);


/*
**==============================================================================
**
** Container_DaemonEvent_Class
**
**==============================================================================
*/

#ifdef __cplusplus
# include <micxx/micxx.h>

MI_BEGIN_NAMESPACE

class Container_DaemonEvent_Class : public CIM_ManagedElement_Class
{
public:
    
    typedef Container_DaemonEvent Self;
    
    Container_DaemonEvent_Class() :
        CIM_ManagedElement_Class(&Container_DaemonEvent_rtti)
    {
    }
    
    Container_DaemonEvent_Class(
        const Container_DaemonEvent* instanceName,
        bool keysOnly) :
        CIM_ManagedElement_Class(
            &Container_DaemonEvent_rtti,
            &instanceName->__instance,
            keysOnly)
    {
    }
    
    Container_DaemonEvent_Class(
        const MI_ClassDecl* clDecl,
        const MI_Instance* instance,
        bool keysOnly) :
        CIM_ManagedElement_Class(clDecl, instance, keysOnly)
    {
    }
    
    Container_DaemonEvent_Class(
        const MI_ClassDecl* clDecl) :
        CIM_ManagedElement_Class(clDecl)
    {
    }
    
    Container_DaemonEvent_Class& operator=(
        const Container_DaemonEvent_Class& x)
    {
        CopyRef(x);
        return *this;
    }
    
    Container_DaemonEvent_Class(
        const Container_DaemonEvent_Class& x) :
        CIM_ManagedElement_Class(x)
    {
    }

    static const MI_ClassDecl* GetClassDecl()
    {
        return &Container_DaemonEvent_rtti;
    }

    //
    // Container_DaemonEvent_Class.Computer
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
    // Container_DaemonEvent_Class.TimeOfCommand
    //
    
    const Field<String>& TimeOfCommand() const
    {
        const size_t n = offsetof(Self, TimeOfCommand);
        return GetField<String>(n);
    }
    
    void TimeOfCommand(const Field<String>& x)
    {
        const size_t n = offsetof(Self, TimeOfCommand);
        GetField<String>(n) = x;
    }
    
    const String& TimeOfCommand_value() const
    {
        const size_t n = offsetof(Self, TimeOfCommand);
        return GetField<String>(n).value;
    }
    
    void TimeOfCommand_value(const String& x)
    {
        const size_t n = offsetof(Self, TimeOfCommand);
        GetField<String>(n).Set(x);
    }
    
    bool TimeOfCommand_exists() const
    {
        const size_t n = offsetof(Self, TimeOfCommand);
        return GetField<String>(n).exists ? true : false;
    }
    
    void TimeOfCommand_clear()
    {
        const size_t n = offsetof(Self, TimeOfCommand);
        GetField<String>(n).Clear();
    }

    //
    // Container_DaemonEvent_Class.Command
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
    // Container_DaemonEvent_Class.Id
    //
    
    const Field<String>& Id() const
    {
        const size_t n = offsetof(Self, Id);
        return GetField<String>(n);
    }
    
    void Id(const Field<String>& x)
    {
        const size_t n = offsetof(Self, Id);
        GetField<String>(n) = x;
    }
    
    const String& Id_value() const
    {
        const size_t n = offsetof(Self, Id);
        return GetField<String>(n).value;
    }
    
    void Id_value(const String& x)
    {
        const size_t n = offsetof(Self, Id);
        GetField<String>(n).Set(x);
    }
    
    bool Id_exists() const
    {
        const size_t n = offsetof(Self, Id);
        return GetField<String>(n).exists ? true : false;
    }
    
    void Id_clear()
    {
        const size_t n = offsetof(Self, Id);
        GetField<String>(n).Clear();
    }

    //
    // Container_DaemonEvent_Class.ContainerName
    //
    
    const Field<String>& ContainerName() const
    {
        const size_t n = offsetof(Self, ContainerName);
        return GetField<String>(n);
    }
    
    void ContainerName(const Field<String>& x)
    {
        const size_t n = offsetof(Self, ContainerName);
        GetField<String>(n) = x;
    }
    
    const String& ContainerName_value() const
    {
        const size_t n = offsetof(Self, ContainerName);
        return GetField<String>(n).value;
    }
    
    void ContainerName_value(const String& x)
    {
        const size_t n = offsetof(Self, ContainerName);
        GetField<String>(n).Set(x);
    }
    
    bool ContainerName_exists() const
    {
        const size_t n = offsetof(Self, ContainerName);
        return GetField<String>(n).exists ? true : false;
    }
    
    void ContainerName_clear()
    {
        const size_t n = offsetof(Self, ContainerName);
        GetField<String>(n).Clear();
    }
};

typedef Array<Container_DaemonEvent_Class> Container_DaemonEvent_ClassA;

MI_END_NAMESPACE

#endif /* __cplusplus */

#endif /* _Container_DaemonEvent_h */
