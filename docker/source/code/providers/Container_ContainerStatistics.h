/* @migen@ */
/*
**==============================================================================
**
** WARNING: THIS FILE WAS AUTOMATICALLY GENERATED. PLEASE DO NOT EDIT.
**
**==============================================================================
*/
#ifndef _Container_ContainerStatistics_h
#define _Container_ContainerStatistics_h

#include <MI.h>
#include "CIM_ManagedElement.h"

/*
**==============================================================================
**
** Container_ContainerStatistics [Container_ContainerStatistics]
**
** Keys:
**    InstanceID
**
**==============================================================================
*/

typedef struct _Container_ContainerStatistics /* extends CIM_ManagedElement */
{
    MI_Instance __instance;
    /* CIM_ManagedElement properties */
    /*KEY*/ MI_ConstStringField InstanceID;
    MI_ConstStringField Caption;
    MI_ConstStringField Description;
    MI_ConstStringField ElementName;
    /* Container_ContainerStatistics properties */
    MI_ConstUint64Field NetRXBytes;
    MI_ConstUint64Field NetTXBytes;
    MI_ConstUint64Field MemUsedMB;
    MI_ConstUint64Field CPUTotal;
    MI_ConstUint16Field CPUTotalPct;
    MI_ConstUint64Field DiskBytesRead;
    MI_ConstUint64Field DiskBytesWritten;
}
Container_ContainerStatistics;

typedef struct _Container_ContainerStatistics_Ref
{
    Container_ContainerStatistics* value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
Container_ContainerStatistics_Ref;

typedef struct _Container_ContainerStatistics_ConstRef
{
    MI_CONST Container_ContainerStatistics* value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
Container_ContainerStatistics_ConstRef;

typedef struct _Container_ContainerStatistics_Array
{
    struct _Container_ContainerStatistics** data;
    MI_Uint32 size;
}
Container_ContainerStatistics_Array;

typedef struct _Container_ContainerStatistics_ConstArray
{
    struct _Container_ContainerStatistics MI_CONST* MI_CONST* data;
    MI_Uint32 size;
}
Container_ContainerStatistics_ConstArray;

typedef struct _Container_ContainerStatistics_ArrayRef
{
    Container_ContainerStatistics_Array value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
Container_ContainerStatistics_ArrayRef;

typedef struct _Container_ContainerStatistics_ConstArrayRef
{
    Container_ContainerStatistics_ConstArray value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
Container_ContainerStatistics_ConstArrayRef;

MI_EXTERN_C MI_CONST MI_ClassDecl Container_ContainerStatistics_rtti;

MI_INLINE MI_Result MI_CALL Container_ContainerStatistics_Construct(
    Container_ContainerStatistics* self,
    MI_Context* context)
{
    return MI_ConstructInstance(context, &Container_ContainerStatistics_rtti,
        (MI_Instance*)&self->__instance);
}

MI_INLINE MI_Result MI_CALL Container_ContainerStatistics_Clone(
    const Container_ContainerStatistics* self,
    Container_ContainerStatistics** newInstance)
{
    return MI_Instance_Clone(
        &self->__instance, (MI_Instance**)newInstance);
}

MI_INLINE MI_Boolean MI_CALL Container_ContainerStatistics_IsA(
    const MI_Instance* self)
{
    MI_Boolean res = MI_FALSE;
    return MI_Instance_IsA(self, &Container_ContainerStatistics_rtti, &res) == MI_RESULT_OK && res;
}

MI_INLINE MI_Result MI_CALL Container_ContainerStatistics_Destruct(Container_ContainerStatistics* self)
{
    return MI_Instance_Destruct(&self->__instance);
}

MI_INLINE MI_Result MI_CALL Container_ContainerStatistics_Delete(Container_ContainerStatistics* self)
{
    return MI_Instance_Delete(&self->__instance);
}

MI_INLINE MI_Result MI_CALL Container_ContainerStatistics_Post(
    const Container_ContainerStatistics* self,
    MI_Context* context)
{
    return MI_PostInstance(context, &self->__instance);
}

MI_INLINE MI_Result MI_CALL Container_ContainerStatistics_Set_InstanceID(
    Container_ContainerStatistics* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        0,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL Container_ContainerStatistics_SetPtr_InstanceID(
    Container_ContainerStatistics* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        0,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL Container_ContainerStatistics_Clear_InstanceID(
    Container_ContainerStatistics* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        0);
}

MI_INLINE MI_Result MI_CALL Container_ContainerStatistics_Set_Caption(
    Container_ContainerStatistics* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        1,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL Container_ContainerStatistics_SetPtr_Caption(
    Container_ContainerStatistics* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        1,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL Container_ContainerStatistics_Clear_Caption(
    Container_ContainerStatistics* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        1);
}

MI_INLINE MI_Result MI_CALL Container_ContainerStatistics_Set_Description(
    Container_ContainerStatistics* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        2,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL Container_ContainerStatistics_SetPtr_Description(
    Container_ContainerStatistics* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        2,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL Container_ContainerStatistics_Clear_Description(
    Container_ContainerStatistics* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        2);
}

MI_INLINE MI_Result MI_CALL Container_ContainerStatistics_Set_ElementName(
    Container_ContainerStatistics* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        3,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL Container_ContainerStatistics_SetPtr_ElementName(
    Container_ContainerStatistics* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        3,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL Container_ContainerStatistics_Clear_ElementName(
    Container_ContainerStatistics* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        3);
}

MI_INLINE MI_Result MI_CALL Container_ContainerStatistics_Set_NetRXBytes(
    Container_ContainerStatistics* self,
    MI_Uint64 x)
{
    ((MI_Uint64Field*)&self->NetRXBytes)->value = x;
    ((MI_Uint64Field*)&self->NetRXBytes)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL Container_ContainerStatistics_Clear_NetRXBytes(
    Container_ContainerStatistics* self)
{
    memset((void*)&self->NetRXBytes, 0, sizeof(self->NetRXBytes));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL Container_ContainerStatistics_Set_NetTXBytes(
    Container_ContainerStatistics* self,
    MI_Uint64 x)
{
    ((MI_Uint64Field*)&self->NetTXBytes)->value = x;
    ((MI_Uint64Field*)&self->NetTXBytes)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL Container_ContainerStatistics_Clear_NetTXBytes(
    Container_ContainerStatistics* self)
{
    memset((void*)&self->NetTXBytes, 0, sizeof(self->NetTXBytes));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL Container_ContainerStatistics_Set_MemUsedMB(
    Container_ContainerStatistics* self,
    MI_Uint64 x)
{
    ((MI_Uint64Field*)&self->MemUsedMB)->value = x;
    ((MI_Uint64Field*)&self->MemUsedMB)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL Container_ContainerStatistics_Clear_MemUsedMB(
    Container_ContainerStatistics* self)
{
    memset((void*)&self->MemUsedMB, 0, sizeof(self->MemUsedMB));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL Container_ContainerStatistics_Set_CPUTotal(
    Container_ContainerStatistics* self,
    MI_Uint64 x)
{
    ((MI_Uint64Field*)&self->CPUTotal)->value = x;
    ((MI_Uint64Field*)&self->CPUTotal)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL Container_ContainerStatistics_Clear_CPUTotal(
    Container_ContainerStatistics* self)
{
    memset((void*)&self->CPUTotal, 0, sizeof(self->CPUTotal));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL Container_ContainerStatistics_Set_CPUTotalPct(
    Container_ContainerStatistics* self,
    MI_Uint16 x)
{
    ((MI_Uint16Field*)&self->CPUTotalPct)->value = x;
    ((MI_Uint16Field*)&self->CPUTotalPct)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL Container_ContainerStatistics_Clear_CPUTotalPct(
    Container_ContainerStatistics* self)
{
    memset((void*)&self->CPUTotalPct, 0, sizeof(self->CPUTotalPct));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL Container_ContainerStatistics_Set_DiskBytesRead(
    Container_ContainerStatistics* self,
    MI_Uint64 x)
{
    ((MI_Uint64Field*)&self->DiskBytesRead)->value = x;
    ((MI_Uint64Field*)&self->DiskBytesRead)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL Container_ContainerStatistics_Clear_DiskBytesRead(
    Container_ContainerStatistics* self)
{
    memset((void*)&self->DiskBytesRead, 0, sizeof(self->DiskBytesRead));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL Container_ContainerStatistics_Set_DiskBytesWritten(
    Container_ContainerStatistics* self,
    MI_Uint64 x)
{
    ((MI_Uint64Field*)&self->DiskBytesWritten)->value = x;
    ((MI_Uint64Field*)&self->DiskBytesWritten)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL Container_ContainerStatistics_Clear_DiskBytesWritten(
    Container_ContainerStatistics* self)
{
    memset((void*)&self->DiskBytesWritten, 0, sizeof(self->DiskBytesWritten));
    return MI_RESULT_OK;
}

/*
**==============================================================================
**
** Container_ContainerStatistics provider function prototypes
**
**==============================================================================
*/

/* The developer may optionally define this structure */
typedef struct _Container_ContainerStatistics_Self Container_ContainerStatistics_Self;

MI_EXTERN_C void MI_CALL Container_ContainerStatistics_Load(
    Container_ContainerStatistics_Self** self,
    MI_Module_Self* selfModule,
    MI_Context* context);

MI_EXTERN_C void MI_CALL Container_ContainerStatistics_Unload(
    Container_ContainerStatistics_Self* self,
    MI_Context* context);

MI_EXTERN_C void MI_CALL Container_ContainerStatistics_EnumerateInstances(
    Container_ContainerStatistics_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_PropertySet* propertySet,
    MI_Boolean keysOnly,
    const MI_Filter* filter);

MI_EXTERN_C void MI_CALL Container_ContainerStatistics_GetInstance(
    Container_ContainerStatistics_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const Container_ContainerStatistics* instanceName,
    const MI_PropertySet* propertySet);

MI_EXTERN_C void MI_CALL Container_ContainerStatistics_CreateInstance(
    Container_ContainerStatistics_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const Container_ContainerStatistics* newInstance);

MI_EXTERN_C void MI_CALL Container_ContainerStatistics_ModifyInstance(
    Container_ContainerStatistics_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const Container_ContainerStatistics* modifiedInstance,
    const MI_PropertySet* propertySet);

MI_EXTERN_C void MI_CALL Container_ContainerStatistics_DeleteInstance(
    Container_ContainerStatistics_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const Container_ContainerStatistics* instanceName);


/*
**==============================================================================
**
** Container_ContainerStatistics_Class
**
**==============================================================================
*/

#ifdef __cplusplus
# include <micxx/micxx.h>

MI_BEGIN_NAMESPACE

class Container_ContainerStatistics_Class : public CIM_ManagedElement_Class
{
public:
    
    typedef Container_ContainerStatistics Self;
    
    Container_ContainerStatistics_Class() :
        CIM_ManagedElement_Class(&Container_ContainerStatistics_rtti)
    {
    }
    
    Container_ContainerStatistics_Class(
        const Container_ContainerStatistics* instanceName,
        bool keysOnly) :
        CIM_ManagedElement_Class(
            &Container_ContainerStatistics_rtti,
            &instanceName->__instance,
            keysOnly)
    {
    }
    
    Container_ContainerStatistics_Class(
        const MI_ClassDecl* clDecl,
        const MI_Instance* instance,
        bool keysOnly) :
        CIM_ManagedElement_Class(clDecl, instance, keysOnly)
    {
    }
    
    Container_ContainerStatistics_Class(
        const MI_ClassDecl* clDecl) :
        CIM_ManagedElement_Class(clDecl)
    {
    }
    
    Container_ContainerStatistics_Class& operator=(
        const Container_ContainerStatistics_Class& x)
    {
        CopyRef(x);
        return *this;
    }
    
    Container_ContainerStatistics_Class(
        const Container_ContainerStatistics_Class& x) :
        CIM_ManagedElement_Class(x)
    {
    }

    static const MI_ClassDecl* GetClassDecl()
    {
        return &Container_ContainerStatistics_rtti;
    }

    //
    // Container_ContainerStatistics_Class.NetRXBytes
    //
    
    const Field<Uint64>& NetRXBytes() const
    {
        const size_t n = offsetof(Self, NetRXBytes);
        return GetField<Uint64>(n);
    }
    
    void NetRXBytes(const Field<Uint64>& x)
    {
        const size_t n = offsetof(Self, NetRXBytes);
        GetField<Uint64>(n) = x;
    }
    
    const Uint64& NetRXBytes_value() const
    {
        const size_t n = offsetof(Self, NetRXBytes);
        return GetField<Uint64>(n).value;
    }
    
    void NetRXBytes_value(const Uint64& x)
    {
        const size_t n = offsetof(Self, NetRXBytes);
        GetField<Uint64>(n).Set(x);
    }
    
    bool NetRXBytes_exists() const
    {
        const size_t n = offsetof(Self, NetRXBytes);
        return GetField<Uint64>(n).exists ? true : false;
    }
    
    void NetRXBytes_clear()
    {
        const size_t n = offsetof(Self, NetRXBytes);
        GetField<Uint64>(n).Clear();
    }

    //
    // Container_ContainerStatistics_Class.NetTXBytes
    //
    
    const Field<Uint64>& NetTXBytes() const
    {
        const size_t n = offsetof(Self, NetTXBytes);
        return GetField<Uint64>(n);
    }
    
    void NetTXBytes(const Field<Uint64>& x)
    {
        const size_t n = offsetof(Self, NetTXBytes);
        GetField<Uint64>(n) = x;
    }
    
    const Uint64& NetTXBytes_value() const
    {
        const size_t n = offsetof(Self, NetTXBytes);
        return GetField<Uint64>(n).value;
    }
    
    void NetTXBytes_value(const Uint64& x)
    {
        const size_t n = offsetof(Self, NetTXBytes);
        GetField<Uint64>(n).Set(x);
    }
    
    bool NetTXBytes_exists() const
    {
        const size_t n = offsetof(Self, NetTXBytes);
        return GetField<Uint64>(n).exists ? true : false;
    }
    
    void NetTXBytes_clear()
    {
        const size_t n = offsetof(Self, NetTXBytes);
        GetField<Uint64>(n).Clear();
    }

    //
    // Container_ContainerStatistics_Class.MemUsedMB
    //
    
    const Field<Uint64>& MemUsedMB() const
    {
        const size_t n = offsetof(Self, MemUsedMB);
        return GetField<Uint64>(n);
    }
    
    void MemUsedMB(const Field<Uint64>& x)
    {
        const size_t n = offsetof(Self, MemUsedMB);
        GetField<Uint64>(n) = x;
    }
    
    const Uint64& MemUsedMB_value() const
    {
        const size_t n = offsetof(Self, MemUsedMB);
        return GetField<Uint64>(n).value;
    }
    
    void MemUsedMB_value(const Uint64& x)
    {
        const size_t n = offsetof(Self, MemUsedMB);
        GetField<Uint64>(n).Set(x);
    }
    
    bool MemUsedMB_exists() const
    {
        const size_t n = offsetof(Self, MemUsedMB);
        return GetField<Uint64>(n).exists ? true : false;
    }
    
    void MemUsedMB_clear()
    {
        const size_t n = offsetof(Self, MemUsedMB);
        GetField<Uint64>(n).Clear();
    }

    //
    // Container_ContainerStatistics_Class.CPUTotal
    //
    
    const Field<Uint64>& CPUTotal() const
    {
        const size_t n = offsetof(Self, CPUTotal);
        return GetField<Uint64>(n);
    }
    
    void CPUTotal(const Field<Uint64>& x)
    {
        const size_t n = offsetof(Self, CPUTotal);
        GetField<Uint64>(n) = x;
    }
    
    const Uint64& CPUTotal_value() const
    {
        const size_t n = offsetof(Self, CPUTotal);
        return GetField<Uint64>(n).value;
    }
    
    void CPUTotal_value(const Uint64& x)
    {
        const size_t n = offsetof(Self, CPUTotal);
        GetField<Uint64>(n).Set(x);
    }
    
    bool CPUTotal_exists() const
    {
        const size_t n = offsetof(Self, CPUTotal);
        return GetField<Uint64>(n).exists ? true : false;
    }
    
    void CPUTotal_clear()
    {
        const size_t n = offsetof(Self, CPUTotal);
        GetField<Uint64>(n).Clear();
    }

    //
    // Container_ContainerStatistics_Class.CPUTotalPct
    //
    
    const Field<Uint16>& CPUTotalPct() const
    {
        const size_t n = offsetof(Self, CPUTotalPct);
        return GetField<Uint16>(n);
    }
    
    void CPUTotalPct(const Field<Uint16>& x)
    {
        const size_t n = offsetof(Self, CPUTotalPct);
        GetField<Uint16>(n) = x;
    }
    
    const Uint16& CPUTotalPct_value() const
    {
        const size_t n = offsetof(Self, CPUTotalPct);
        return GetField<Uint16>(n).value;
    }
    
    void CPUTotalPct_value(const Uint16& x)
    {
        const size_t n = offsetof(Self, CPUTotalPct);
        GetField<Uint16>(n).Set(x);
    }
    
    bool CPUTotalPct_exists() const
    {
        const size_t n = offsetof(Self, CPUTotalPct);
        return GetField<Uint16>(n).exists ? true : false;
    }
    
    void CPUTotalPct_clear()
    {
        const size_t n = offsetof(Self, CPUTotalPct);
        GetField<Uint16>(n).Clear();
    }

    //
    // Container_ContainerStatistics_Class.DiskBytesRead
    //
    
    const Field<Uint64>& DiskBytesRead() const
    {
        const size_t n = offsetof(Self, DiskBytesRead);
        return GetField<Uint64>(n);
    }
    
    void DiskBytesRead(const Field<Uint64>& x)
    {
        const size_t n = offsetof(Self, DiskBytesRead);
        GetField<Uint64>(n) = x;
    }
    
    const Uint64& DiskBytesRead_value() const
    {
        const size_t n = offsetof(Self, DiskBytesRead);
        return GetField<Uint64>(n).value;
    }
    
    void DiskBytesRead_value(const Uint64& x)
    {
        const size_t n = offsetof(Self, DiskBytesRead);
        GetField<Uint64>(n).Set(x);
    }
    
    bool DiskBytesRead_exists() const
    {
        const size_t n = offsetof(Self, DiskBytesRead);
        return GetField<Uint64>(n).exists ? true : false;
    }
    
    void DiskBytesRead_clear()
    {
        const size_t n = offsetof(Self, DiskBytesRead);
        GetField<Uint64>(n).Clear();
    }

    //
    // Container_ContainerStatistics_Class.DiskBytesWritten
    //
    
    const Field<Uint64>& DiskBytesWritten() const
    {
        const size_t n = offsetof(Self, DiskBytesWritten);
        return GetField<Uint64>(n);
    }
    
    void DiskBytesWritten(const Field<Uint64>& x)
    {
        const size_t n = offsetof(Self, DiskBytesWritten);
        GetField<Uint64>(n) = x;
    }
    
    const Uint64& DiskBytesWritten_value() const
    {
        const size_t n = offsetof(Self, DiskBytesWritten);
        return GetField<Uint64>(n).value;
    }
    
    void DiskBytesWritten_value(const Uint64& x)
    {
        const size_t n = offsetof(Self, DiskBytesWritten);
        GetField<Uint64>(n).Set(x);
    }
    
    bool DiskBytesWritten_exists() const
    {
        const size_t n = offsetof(Self, DiskBytesWritten);
        return GetField<Uint64>(n).exists ? true : false;
    }
    
    void DiskBytesWritten_clear()
    {
        const size_t n = offsetof(Self, DiskBytesWritten);
        GetField<Uint64>(n).Clear();
    }
};

typedef Array<Container_ContainerStatistics_Class> Container_ContainerStatistics_ClassA;

MI_END_NAMESPACE

#endif /* __cplusplus */

#endif /* _Container_ContainerStatistics_h */
