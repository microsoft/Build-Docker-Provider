/* @migen@ */
/*
**==============================================================================
**
** WARNING: THIS FILE WAS AUTOMATICALLY GENERATED. PLEASE DO NOT EDIT.
**
**==============================================================================
*/
#ifndef _Container_Process_h
#define _Container_Process_h

#include <MI.h>
#include "CIM_ManagedElement.h"

/*
**==============================================================================
**
** Container_Process [Container_Process]
**
** Keys:
**    InstanceID
**
**==============================================================================
*/

typedef struct _Container_Process /* extends CIM_ManagedElement */
{
    MI_Instance __instance;
    /* CIM_ManagedElement properties */
    /*KEY*/ MI_ConstStringField InstanceID;
    MI_ConstStringField Caption;
    MI_ConstStringField Description;
    MI_ConstStringField ElementName;
    /* Container_Process properties */
    MI_ConstStringField Uid;
    MI_ConstStringField PID;
    MI_ConstStringField PPID;
    MI_ConstStringField C;
    MI_ConstStringField STIME;
    MI_ConstStringField Tty;
    MI_ConstStringField TIME;
    MI_ConstStringField Cmd;
    MI_ConstStringField Id;
    MI_ConstStringField Name;
    MI_ConstStringField Pod;
    MI_ConstStringField PodUid;
    MI_ConstStringField Namespace;
    MI_ConstStringField Computer;
}
Container_Process;

typedef struct _Container_Process_Ref
{
    Container_Process* value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
Container_Process_Ref;

typedef struct _Container_Process_ConstRef
{
    MI_CONST Container_Process* value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
Container_Process_ConstRef;

typedef struct _Container_Process_Array
{
    struct _Container_Process** data;
    MI_Uint32 size;
}
Container_Process_Array;

typedef struct _Container_Process_ConstArray
{
    struct _Container_Process MI_CONST* MI_CONST* data;
    MI_Uint32 size;
}
Container_Process_ConstArray;

typedef struct _Container_Process_ArrayRef
{
    Container_Process_Array value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
Container_Process_ArrayRef;

typedef struct _Container_Process_ConstArrayRef
{
    Container_Process_ConstArray value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
Container_Process_ConstArrayRef;

MI_EXTERN_C MI_CONST MI_ClassDecl Container_Process_rtti;

MI_INLINE MI_Result MI_CALL Container_Process_Construct(
    Container_Process* self,
    MI_Context* context)
{
    return MI_ConstructInstance(context, &Container_Process_rtti,
        (MI_Instance*)&self->__instance);
}

MI_INLINE MI_Result MI_CALL Container_Process_Clone(
    const Container_Process* self,
    Container_Process** newInstance)
{
    return MI_Instance_Clone(
        &self->__instance, (MI_Instance**)newInstance);
}

MI_INLINE MI_Boolean MI_CALL Container_Process_IsA(
    const MI_Instance* self)
{
    MI_Boolean res = MI_FALSE;
    return MI_Instance_IsA(self, &Container_Process_rtti, &res) == MI_RESULT_OK && res;
}

MI_INLINE MI_Result MI_CALL Container_Process_Destruct(Container_Process* self)
{
    return MI_Instance_Destruct(&self->__instance);
}

MI_INLINE MI_Result MI_CALL Container_Process_Delete(Container_Process* self)
{
    return MI_Instance_Delete(&self->__instance);
}

MI_INLINE MI_Result MI_CALL Container_Process_Post(
    const Container_Process* self,
    MI_Context* context)
{
    return MI_PostInstance(context, &self->__instance);
}

MI_INLINE MI_Result MI_CALL Container_Process_Set_InstanceID(
    Container_Process* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        0,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL Container_Process_SetPtr_InstanceID(
    Container_Process* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        0,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL Container_Process_Clear_InstanceID(
    Container_Process* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        0);
}

MI_INLINE MI_Result MI_CALL Container_Process_Set_Caption(
    Container_Process* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        1,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL Container_Process_SetPtr_Caption(
    Container_Process* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        1,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL Container_Process_Clear_Caption(
    Container_Process* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        1);
}

MI_INLINE MI_Result MI_CALL Container_Process_Set_Description(
    Container_Process* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        2,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL Container_Process_SetPtr_Description(
    Container_Process* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        2,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL Container_Process_Clear_Description(
    Container_Process* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        2);
}

MI_INLINE MI_Result MI_CALL Container_Process_Set_ElementName(
    Container_Process* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        3,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL Container_Process_SetPtr_ElementName(
    Container_Process* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        3,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL Container_Process_Clear_ElementName(
    Container_Process* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        3);
}

MI_INLINE MI_Result MI_CALL Container_Process_Set_Uid(
    Container_Process* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        4,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL Container_Process_SetPtr_Uid(
    Container_Process* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        4,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL Container_Process_Clear_Uid(
    Container_Process* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        4);
}

MI_INLINE MI_Result MI_CALL Container_Process_Set_PID(
    Container_Process* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        5,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL Container_Process_SetPtr_PID(
    Container_Process* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        5,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL Container_Process_Clear_PID(
    Container_Process* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        5);
}

MI_INLINE MI_Result MI_CALL Container_Process_Set_PPID(
    Container_Process* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        6,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL Container_Process_SetPtr_PPID(
    Container_Process* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        6,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL Container_Process_Clear_PPID(
    Container_Process* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        6);
}

MI_INLINE MI_Result MI_CALL Container_Process_Set_C(
    Container_Process* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        7,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL Container_Process_SetPtr_C(
    Container_Process* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        7,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL Container_Process_Clear_C(
    Container_Process* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        7);
}

MI_INLINE MI_Result MI_CALL Container_Process_Set_STIME(
    Container_Process* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        8,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL Container_Process_SetPtr_STIME(
    Container_Process* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        8,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL Container_Process_Clear_STIME(
    Container_Process* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        8);
}

MI_INLINE MI_Result MI_CALL Container_Process_Set_Tty(
    Container_Process* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        9,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL Container_Process_SetPtr_Tty(
    Container_Process* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        9,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL Container_Process_Clear_Tty(
    Container_Process* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        9);
}

MI_INLINE MI_Result MI_CALL Container_Process_Set_TIME(
    Container_Process* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        10,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL Container_Process_SetPtr_TIME(
    Container_Process* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        10,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL Container_Process_Clear_TIME(
    Container_Process* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        10);
}

MI_INLINE MI_Result MI_CALL Container_Process_Set_Cmd(
    Container_Process* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        11,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL Container_Process_SetPtr_Cmd(
    Container_Process* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        11,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL Container_Process_Clear_Cmd(
    Container_Process* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        11);
}

MI_INLINE MI_Result MI_CALL Container_Process_Set_Id(
    Container_Process* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        12,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL Container_Process_SetPtr_Id(
    Container_Process* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        12,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL Container_Process_Clear_Id(
    Container_Process* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        12);
}

MI_INLINE MI_Result MI_CALL Container_Process_Set_Name(
    Container_Process* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        13,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL Container_Process_SetPtr_Name(
    Container_Process* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        13,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL Container_Process_Clear_Name(
    Container_Process* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        13);
}

MI_INLINE MI_Result MI_CALL Container_Process_Set_Pod(
    Container_Process* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        14,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL Container_Process_SetPtr_Pod(
    Container_Process* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        14,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL Container_Process_Clear_Pod(
    Container_Process* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        14);
}

MI_INLINE MI_Result MI_CALL Container_Process_Set_PodUid(
    Container_Process* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        15,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL Container_Process_SetPtr_PodUid(
    Container_Process* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        15,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL Container_Process_Clear_PodUid(
    Container_Process* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        15);
}

MI_INLINE MI_Result MI_CALL Container_Process_Set_Namespace(
    Container_Process* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        16,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL Container_Process_SetPtr_Namespace(
    Container_Process* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        16,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL Container_Process_Clear_Namespace(
    Container_Process* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        16);
}

MI_INLINE MI_Result MI_CALL Container_Process_Set_Computer(
    Container_Process* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        17,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL Container_Process_SetPtr_Computer(
    Container_Process* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        17,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL Container_Process_Clear_Computer(
    Container_Process* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        17);
}

/*
**==============================================================================
**
** Container_Process provider function prototypes
**
**==============================================================================
*/

/* The developer may optionally define this structure */
typedef struct _Container_Process_Self Container_Process_Self;

MI_EXTERN_C void MI_CALL Container_Process_Load(
    Container_Process_Self** self,
    MI_Module_Self* selfModule,
    MI_Context* context);

MI_EXTERN_C void MI_CALL Container_Process_Unload(
    Container_Process_Self* self,
    MI_Context* context);

MI_EXTERN_C void MI_CALL Container_Process_EnumerateInstances(
    Container_Process_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_PropertySet* propertySet,
    MI_Boolean keysOnly,
    const MI_Filter* filter);

MI_EXTERN_C void MI_CALL Container_Process_GetInstance(
    Container_Process_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const Container_Process* instanceName,
    const MI_PropertySet* propertySet);

MI_EXTERN_C void MI_CALL Container_Process_CreateInstance(
    Container_Process_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const Container_Process* newInstance);

MI_EXTERN_C void MI_CALL Container_Process_ModifyInstance(
    Container_Process_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const Container_Process* modifiedInstance,
    const MI_PropertySet* propertySet);

MI_EXTERN_C void MI_CALL Container_Process_DeleteInstance(
    Container_Process_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const Container_Process* instanceName);


/*
**==============================================================================
**
** Container_Process_Class
**
**==============================================================================
*/

#ifdef __cplusplus
# include <micxx/micxx.h>

MI_BEGIN_NAMESPACE

class Container_Process_Class : public CIM_ManagedElement_Class
{
public:
    
    typedef Container_Process Self;
    
    Container_Process_Class() :
        CIM_ManagedElement_Class(&Container_Process_rtti)
    {
    }
    
    Container_Process_Class(
        const Container_Process* instanceName,
        bool keysOnly) :
        CIM_ManagedElement_Class(
            &Container_Process_rtti,
            &instanceName->__instance,
            keysOnly)
    {
    }
    
    Container_Process_Class(
        const MI_ClassDecl* clDecl,
        const MI_Instance* instance,
        bool keysOnly) :
        CIM_ManagedElement_Class(clDecl, instance, keysOnly)
    {
    }
    
    Container_Process_Class(
        const MI_ClassDecl* clDecl) :
        CIM_ManagedElement_Class(clDecl)
    {
    }
    
    Container_Process_Class& operator=(
        const Container_Process_Class& x)
    {
        CopyRef(x);
        return *this;
    }
    
    Container_Process_Class(
        const Container_Process_Class& x) :
        CIM_ManagedElement_Class(x)
    {
    }

    static const MI_ClassDecl* GetClassDecl()
    {
        return &Container_Process_rtti;
    }

    //
    // Container_Process_Class.Uid
    //
    
    const Field<String>& Uid() const
    {
        const size_t n = offsetof(Self, Uid);
        return GetField<String>(n);
    }
    
    void Uid(const Field<String>& x)
    {
        const size_t n = offsetof(Self, Uid);
        GetField<String>(n) = x;
    }
    
    const String& Uid_value() const
    {
        const size_t n = offsetof(Self, Uid);
        return GetField<String>(n).value;
    }
    
    void Uid_value(const String& x)
    {
        const size_t n = offsetof(Self, Uid);
        GetField<String>(n).Set(x);
    }
    
    bool Uid_exists() const
    {
        const size_t n = offsetof(Self, Uid);
        return GetField<String>(n).exists ? true : false;
    }
    
    void Uid_clear()
    {
        const size_t n = offsetof(Self, Uid);
        GetField<String>(n).Clear();
    }

    //
    // Container_Process_Class.PID
    //
    
    const Field<String>& PID() const
    {
        const size_t n = offsetof(Self, PID);
        return GetField<String>(n);
    }
    
    void PID(const Field<String>& x)
    {
        const size_t n = offsetof(Self, PID);
        GetField<String>(n) = x;
    }
    
    const String& PID_value() const
    {
        const size_t n = offsetof(Self, PID);
        return GetField<String>(n).value;
    }
    
    void PID_value(const String& x)
    {
        const size_t n = offsetof(Self, PID);
        GetField<String>(n).Set(x);
    }
    
    bool PID_exists() const
    {
        const size_t n = offsetof(Self, PID);
        return GetField<String>(n).exists ? true : false;
    }
    
    void PID_clear()
    {
        const size_t n = offsetof(Self, PID);
        GetField<String>(n).Clear();
    }

    //
    // Container_Process_Class.PPID
    //
    
    const Field<String>& PPID() const
    {
        const size_t n = offsetof(Self, PPID);
        return GetField<String>(n);
    }
    
    void PPID(const Field<String>& x)
    {
        const size_t n = offsetof(Self, PPID);
        GetField<String>(n) = x;
    }
    
    const String& PPID_value() const
    {
        const size_t n = offsetof(Self, PPID);
        return GetField<String>(n).value;
    }
    
    void PPID_value(const String& x)
    {
        const size_t n = offsetof(Self, PPID);
        GetField<String>(n).Set(x);
    }
    
    bool PPID_exists() const
    {
        const size_t n = offsetof(Self, PPID);
        return GetField<String>(n).exists ? true : false;
    }
    
    void PPID_clear()
    {
        const size_t n = offsetof(Self, PPID);
        GetField<String>(n).Clear();
    }

    //
    // Container_Process_Class.C
    //
    
    const Field<String>& C() const
    {
        const size_t n = offsetof(Self, C);
        return GetField<String>(n);
    }
    
    void C(const Field<String>& x)
    {
        const size_t n = offsetof(Self, C);
        GetField<String>(n) = x;
    }
    
    const String& C_value() const
    {
        const size_t n = offsetof(Self, C);
        return GetField<String>(n).value;
    }
    
    void C_value(const String& x)
    {
        const size_t n = offsetof(Self, C);
        GetField<String>(n).Set(x);
    }
    
    bool C_exists() const
    {
        const size_t n = offsetof(Self, C);
        return GetField<String>(n).exists ? true : false;
    }
    
    void C_clear()
    {
        const size_t n = offsetof(Self, C);
        GetField<String>(n).Clear();
    }

    //
    // Container_Process_Class.STIME
    //
    
    const Field<String>& STIME() const
    {
        const size_t n = offsetof(Self, STIME);
        return GetField<String>(n);
    }
    
    void STIME(const Field<String>& x)
    {
        const size_t n = offsetof(Self, STIME);
        GetField<String>(n) = x;
    }
    
    const String& STIME_value() const
    {
        const size_t n = offsetof(Self, STIME);
        return GetField<String>(n).value;
    }
    
    void STIME_value(const String& x)
    {
        const size_t n = offsetof(Self, STIME);
        GetField<String>(n).Set(x);
    }
    
    bool STIME_exists() const
    {
        const size_t n = offsetof(Self, STIME);
        return GetField<String>(n).exists ? true : false;
    }
    
    void STIME_clear()
    {
        const size_t n = offsetof(Self, STIME);
        GetField<String>(n).Clear();
    }

    //
    // Container_Process_Class.Tty
    //
    
    const Field<String>& Tty() const
    {
        const size_t n = offsetof(Self, Tty);
        return GetField<String>(n);
    }
    
    void Tty(const Field<String>& x)
    {
        const size_t n = offsetof(Self, Tty);
        GetField<String>(n) = x;
    }
    
    const String& Tty_value() const
    {
        const size_t n = offsetof(Self, Tty);
        return GetField<String>(n).value;
    }
    
    void Tty_value(const String& x)
    {
        const size_t n = offsetof(Self, Tty);
        GetField<String>(n).Set(x);
    }
    
    bool Tty_exists() const
    {
        const size_t n = offsetof(Self, Tty);
        return GetField<String>(n).exists ? true : false;
    }
    
    void Tty_clear()
    {
        const size_t n = offsetof(Self, Tty);
        GetField<String>(n).Clear();
    }

    //
    // Container_Process_Class.TIME
    //
    
    const Field<String>& TIME() const
    {
        const size_t n = offsetof(Self, TIME);
        return GetField<String>(n);
    }
    
    void TIME(const Field<String>& x)
    {
        const size_t n = offsetof(Self, TIME);
        GetField<String>(n) = x;
    }
    
    const String& TIME_value() const
    {
        const size_t n = offsetof(Self, TIME);
        return GetField<String>(n).value;
    }
    
    void TIME_value(const String& x)
    {
        const size_t n = offsetof(Self, TIME);
        GetField<String>(n).Set(x);
    }
    
    bool TIME_exists() const
    {
        const size_t n = offsetof(Self, TIME);
        return GetField<String>(n).exists ? true : false;
    }
    
    void TIME_clear()
    {
        const size_t n = offsetof(Self, TIME);
        GetField<String>(n).Clear();
    }

    //
    // Container_Process_Class.Cmd
    //
    
    const Field<String>& Cmd() const
    {
        const size_t n = offsetof(Self, Cmd);
        return GetField<String>(n);
    }
    
    void Cmd(const Field<String>& x)
    {
        const size_t n = offsetof(Self, Cmd);
        GetField<String>(n) = x;
    }
    
    const String& Cmd_value() const
    {
        const size_t n = offsetof(Self, Cmd);
        return GetField<String>(n).value;
    }
    
    void Cmd_value(const String& x)
    {
        const size_t n = offsetof(Self, Cmd);
        GetField<String>(n).Set(x);
    }
    
    bool Cmd_exists() const
    {
        const size_t n = offsetof(Self, Cmd);
        return GetField<String>(n).exists ? true : false;
    }
    
    void Cmd_clear()
    {
        const size_t n = offsetof(Self, Cmd);
        GetField<String>(n).Clear();
    }

    //
    // Container_Process_Class.Id
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
    // Container_Process_Class.Name
    //
    
    const Field<String>& Name() const
    {
        const size_t n = offsetof(Self, Name);
        return GetField<String>(n);
    }
    
    void Name(const Field<String>& x)
    {
        const size_t n = offsetof(Self, Name);
        GetField<String>(n) = x;
    }
    
    const String& Name_value() const
    {
        const size_t n = offsetof(Self, Name);
        return GetField<String>(n).value;
    }
    
    void Name_value(const String& x)
    {
        const size_t n = offsetof(Self, Name);
        GetField<String>(n).Set(x);
    }
    
    bool Name_exists() const
    {
        const size_t n = offsetof(Self, Name);
        return GetField<String>(n).exists ? true : false;
    }
    
    void Name_clear()
    {
        const size_t n = offsetof(Self, Name);
        GetField<String>(n).Clear();
    }

    //
    // Container_Process_Class.Pod
    //
    
    const Field<String>& Pod() const
    {
        const size_t n = offsetof(Self, Pod);
        return GetField<String>(n);
    }
    
    void Pod(const Field<String>& x)
    {
        const size_t n = offsetof(Self, Pod);
        GetField<String>(n) = x;
    }
    
    const String& Pod_value() const
    {
        const size_t n = offsetof(Self, Pod);
        return GetField<String>(n).value;
    }
    
    void Pod_value(const String& x)
    {
        const size_t n = offsetof(Self, Pod);
        GetField<String>(n).Set(x);
    }
    
    bool Pod_exists() const
    {
        const size_t n = offsetof(Self, Pod);
        return GetField<String>(n).exists ? true : false;
    }
    
    void Pod_clear()
    {
        const size_t n = offsetof(Self, Pod);
        GetField<String>(n).Clear();
    }

    //
    // Container_Process_Class.PodUid
    //
    
    const Field<String>& PodUid() const
    {
        const size_t n = offsetof(Self, PodUid);
        return GetField<String>(n);
    }
    
    void PodUid(const Field<String>& x)
    {
        const size_t n = offsetof(Self, PodUid);
        GetField<String>(n) = x;
    }
    
    const String& PodUid_value() const
    {
        const size_t n = offsetof(Self, PodUid);
        return GetField<String>(n).value;
    }
    
    void PodUid_value(const String& x)
    {
        const size_t n = offsetof(Self, PodUid);
        GetField<String>(n).Set(x);
    }
    
    bool PodUid_exists() const
    {
        const size_t n = offsetof(Self, PodUid);
        return GetField<String>(n).exists ? true : false;
    }
    
    void PodUid_clear()
    {
        const size_t n = offsetof(Self, PodUid);
        GetField<String>(n).Clear();
    }

    //
    // Container_Process_Class.Namespace
    //
    
    const Field<String>& Namespace() const
    {
        const size_t n = offsetof(Self, Namespace);
        return GetField<String>(n);
    }
    
    void Namespace(const Field<String>& x)
    {
        const size_t n = offsetof(Self, Namespace);
        GetField<String>(n) = x;
    }
    
    const String& Namespace_value() const
    {
        const size_t n = offsetof(Self, Namespace);
        return GetField<String>(n).value;
    }
    
    void Namespace_value(const String& x)
    {
        const size_t n = offsetof(Self, Namespace);
        GetField<String>(n).Set(x);
    }
    
    bool Namespace_exists() const
    {
        const size_t n = offsetof(Self, Namespace);
        return GetField<String>(n).exists ? true : false;
    }
    
    void Namespace_clear()
    {
        const size_t n = offsetof(Self, Namespace);
        GetField<String>(n).Clear();
    }

    //
    // Container_Process_Class.Computer
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
};

typedef Array<Container_Process_Class> Container_Process_ClassA;

MI_END_NAMESPACE

#endif /* __cplusplus */

#endif /* _Container_Process_h */
