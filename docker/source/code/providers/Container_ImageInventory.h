/* @migen@ */
/*
**==============================================================================
**
** WARNING: THIS FILE WAS AUTOMATICALLY GENERATED. PLEASE DO NOT EDIT.
**
**==============================================================================
*/
#ifndef _Container_ImageInventory_h
#define _Container_ImageInventory_h

#include <MI.h>
#include "CIM_ManagedElement.h"

/*
**==============================================================================
**
** Container_ImageInventory [Container_ImageInventory]
**
** Keys:
**    InstanceID
**
**==============================================================================
*/

typedef struct _Container_ImageInventory /* extends CIM_ManagedElement */
{
    MI_Instance __instance;
    /* CIM_ManagedElement properties */
    /*KEY*/ MI_ConstStringField InstanceID;
    MI_ConstStringField Caption;
    MI_ConstStringField Description;
    MI_ConstStringField ElementName;
    /* Container_ImageInventory properties */
    MI_ConstStringField Image;
    MI_ConstStringField Repository;
    MI_ConstStringField ImageTag;
    MI_ConstStringField Computer;
    MI_ConstUint32Field Running;
    MI_ConstUint32Field Stopped;
    MI_ConstUint32Field Failed;
    MI_ConstUint32Field Paused;
    MI_ConstUint32Field Total;
    MI_ConstStringField ImageSize;
    MI_ConstStringField VirtualSize;
}
Container_ImageInventory;

typedef struct _Container_ImageInventory_Ref
{
    Container_ImageInventory* value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
Container_ImageInventory_Ref;

typedef struct _Container_ImageInventory_ConstRef
{
    MI_CONST Container_ImageInventory* value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
Container_ImageInventory_ConstRef;

typedef struct _Container_ImageInventory_Array
{
    struct _Container_ImageInventory** data;
    MI_Uint32 size;
}
Container_ImageInventory_Array;

typedef struct _Container_ImageInventory_ConstArray
{
    struct _Container_ImageInventory MI_CONST* MI_CONST* data;
    MI_Uint32 size;
}
Container_ImageInventory_ConstArray;

typedef struct _Container_ImageInventory_ArrayRef
{
    Container_ImageInventory_Array value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
Container_ImageInventory_ArrayRef;

typedef struct _Container_ImageInventory_ConstArrayRef
{
    Container_ImageInventory_ConstArray value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
Container_ImageInventory_ConstArrayRef;

MI_EXTERN_C MI_CONST MI_ClassDecl Container_ImageInventory_rtti;

MI_INLINE MI_Result MI_CALL Container_ImageInventory_Construct(
    Container_ImageInventory* self,
    MI_Context* context)
{
    return MI_ConstructInstance(context, &Container_ImageInventory_rtti,
        (MI_Instance*)&self->__instance);
}

MI_INLINE MI_Result MI_CALL Container_ImageInventory_Clone(
    const Container_ImageInventory* self,
    Container_ImageInventory** newInstance)
{
    return MI_Instance_Clone(
        &self->__instance, (MI_Instance**)newInstance);
}

MI_INLINE MI_Boolean MI_CALL Container_ImageInventory_IsA(
    const MI_Instance* self)
{
    MI_Boolean res = MI_FALSE;
    return MI_Instance_IsA(self, &Container_ImageInventory_rtti, &res) == MI_RESULT_OK && res;
}

MI_INLINE MI_Result MI_CALL Container_ImageInventory_Destruct(Container_ImageInventory* self)
{
    return MI_Instance_Destruct(&self->__instance);
}

MI_INLINE MI_Result MI_CALL Container_ImageInventory_Delete(Container_ImageInventory* self)
{
    return MI_Instance_Delete(&self->__instance);
}

MI_INLINE MI_Result MI_CALL Container_ImageInventory_Post(
    const Container_ImageInventory* self,
    MI_Context* context)
{
    return MI_PostInstance(context, &self->__instance);
}

MI_INLINE MI_Result MI_CALL Container_ImageInventory_Set_InstanceID(
    Container_ImageInventory* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        0,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL Container_ImageInventory_SetPtr_InstanceID(
    Container_ImageInventory* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        0,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL Container_ImageInventory_Clear_InstanceID(
    Container_ImageInventory* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        0);
}

MI_INLINE MI_Result MI_CALL Container_ImageInventory_Set_Caption(
    Container_ImageInventory* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        1,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL Container_ImageInventory_SetPtr_Caption(
    Container_ImageInventory* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        1,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL Container_ImageInventory_Clear_Caption(
    Container_ImageInventory* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        1);
}

MI_INLINE MI_Result MI_CALL Container_ImageInventory_Set_Description(
    Container_ImageInventory* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        2,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL Container_ImageInventory_SetPtr_Description(
    Container_ImageInventory* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        2,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL Container_ImageInventory_Clear_Description(
    Container_ImageInventory* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        2);
}

MI_INLINE MI_Result MI_CALL Container_ImageInventory_Set_ElementName(
    Container_ImageInventory* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        3,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL Container_ImageInventory_SetPtr_ElementName(
    Container_ImageInventory* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        3,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL Container_ImageInventory_Clear_ElementName(
    Container_ImageInventory* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        3);
}

MI_INLINE MI_Result MI_CALL Container_ImageInventory_Set_Image(
    Container_ImageInventory* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        4,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL Container_ImageInventory_SetPtr_Image(
    Container_ImageInventory* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        4,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL Container_ImageInventory_Clear_Image(
    Container_ImageInventory* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        4);
}

MI_INLINE MI_Result MI_CALL Container_ImageInventory_Set_Repository(
    Container_ImageInventory* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        5,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL Container_ImageInventory_SetPtr_Repository(
    Container_ImageInventory* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        5,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL Container_ImageInventory_Clear_Repository(
    Container_ImageInventory* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        5);
}

MI_INLINE MI_Result MI_CALL Container_ImageInventory_Set_ImageTag(
    Container_ImageInventory* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        6,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL Container_ImageInventory_SetPtr_ImageTag(
    Container_ImageInventory* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        6,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL Container_ImageInventory_Clear_ImageTag(
    Container_ImageInventory* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        6);
}

MI_INLINE MI_Result MI_CALL Container_ImageInventory_Set_Computer(
    Container_ImageInventory* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        7,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL Container_ImageInventory_SetPtr_Computer(
    Container_ImageInventory* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        7,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL Container_ImageInventory_Clear_Computer(
    Container_ImageInventory* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        7);
}

MI_INLINE MI_Result MI_CALL Container_ImageInventory_Set_Running(
    Container_ImageInventory* self,
    MI_Uint32 x)
{
    ((MI_Uint32Field*)&self->Running)->value = x;
    ((MI_Uint32Field*)&self->Running)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL Container_ImageInventory_Clear_Running(
    Container_ImageInventory* self)
{
    memset((void*)&self->Running, 0, sizeof(self->Running));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL Container_ImageInventory_Set_Stopped(
    Container_ImageInventory* self,
    MI_Uint32 x)
{
    ((MI_Uint32Field*)&self->Stopped)->value = x;
    ((MI_Uint32Field*)&self->Stopped)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL Container_ImageInventory_Clear_Stopped(
    Container_ImageInventory* self)
{
    memset((void*)&self->Stopped, 0, sizeof(self->Stopped));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL Container_ImageInventory_Set_Failed(
    Container_ImageInventory* self,
    MI_Uint32 x)
{
    ((MI_Uint32Field*)&self->Failed)->value = x;
    ((MI_Uint32Field*)&self->Failed)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL Container_ImageInventory_Clear_Failed(
    Container_ImageInventory* self)
{
    memset((void*)&self->Failed, 0, sizeof(self->Failed));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL Container_ImageInventory_Set_Paused(
    Container_ImageInventory* self,
    MI_Uint32 x)
{
    ((MI_Uint32Field*)&self->Paused)->value = x;
    ((MI_Uint32Field*)&self->Paused)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL Container_ImageInventory_Clear_Paused(
    Container_ImageInventory* self)
{
    memset((void*)&self->Paused, 0, sizeof(self->Paused));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL Container_ImageInventory_Set_Total(
    Container_ImageInventory* self,
    MI_Uint32 x)
{
    ((MI_Uint32Field*)&self->Total)->value = x;
    ((MI_Uint32Field*)&self->Total)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL Container_ImageInventory_Clear_Total(
    Container_ImageInventory* self)
{
    memset((void*)&self->Total, 0, sizeof(self->Total));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL Container_ImageInventory_Set_ImageSize(
    Container_ImageInventory* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        13,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL Container_ImageInventory_SetPtr_ImageSize(
    Container_ImageInventory* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        13,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL Container_ImageInventory_Clear_ImageSize(
    Container_ImageInventory* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        13);
}

MI_INLINE MI_Result MI_CALL Container_ImageInventory_Set_VirtualSize(
    Container_ImageInventory* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        14,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL Container_ImageInventory_SetPtr_VirtualSize(
    Container_ImageInventory* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        14,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL Container_ImageInventory_Clear_VirtualSize(
    Container_ImageInventory* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        14);
}

/*
**==============================================================================
**
** Container_ImageInventory provider function prototypes
**
**==============================================================================
*/

/* The developer may optionally define this structure */
typedef struct _Container_ImageInventory_Self Container_ImageInventory_Self;

MI_EXTERN_C void MI_CALL Container_ImageInventory_Load(
    Container_ImageInventory_Self** self,
    MI_Module_Self* selfModule,
    MI_Context* context);

MI_EXTERN_C void MI_CALL Container_ImageInventory_Unload(
    Container_ImageInventory_Self* self,
    MI_Context* context);

MI_EXTERN_C void MI_CALL Container_ImageInventory_EnumerateInstances(
    Container_ImageInventory_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_PropertySet* propertySet,
    MI_Boolean keysOnly,
    const MI_Filter* filter);

MI_EXTERN_C void MI_CALL Container_ImageInventory_GetInstance(
    Container_ImageInventory_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const Container_ImageInventory* instanceName,
    const MI_PropertySet* propertySet);

MI_EXTERN_C void MI_CALL Container_ImageInventory_CreateInstance(
    Container_ImageInventory_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const Container_ImageInventory* newInstance);

MI_EXTERN_C void MI_CALL Container_ImageInventory_ModifyInstance(
    Container_ImageInventory_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const Container_ImageInventory* modifiedInstance,
    const MI_PropertySet* propertySet);

MI_EXTERN_C void MI_CALL Container_ImageInventory_DeleteInstance(
    Container_ImageInventory_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const Container_ImageInventory* instanceName);


/*
**==============================================================================
**
** Container_ImageInventory_Class
**
**==============================================================================
*/

#ifdef __cplusplus
# include <micxx/micxx.h>

MI_BEGIN_NAMESPACE

class Container_ImageInventory_Class : public CIM_ManagedElement_Class
{
public:
    
    typedef Container_ImageInventory Self;
    
    Container_ImageInventory_Class() :
        CIM_ManagedElement_Class(&Container_ImageInventory_rtti)
    {
    }
    
    Container_ImageInventory_Class(
        const Container_ImageInventory* instanceName,
        bool keysOnly) :
        CIM_ManagedElement_Class(
            &Container_ImageInventory_rtti,
            &instanceName->__instance,
            keysOnly)
    {
    }
    
    Container_ImageInventory_Class(
        const MI_ClassDecl* clDecl,
        const MI_Instance* instance,
        bool keysOnly) :
        CIM_ManagedElement_Class(clDecl, instance, keysOnly)
    {
    }
    
    Container_ImageInventory_Class(
        const MI_ClassDecl* clDecl) :
        CIM_ManagedElement_Class(clDecl)
    {
    }
    
    Container_ImageInventory_Class& operator=(
        const Container_ImageInventory_Class& x)
    {
        CopyRef(x);
        return *this;
    }
    
    Container_ImageInventory_Class(
        const Container_ImageInventory_Class& x) :
        CIM_ManagedElement_Class(x)
    {
    }

    static const MI_ClassDecl* GetClassDecl()
    {
        return &Container_ImageInventory_rtti;
    }

    //
    // Container_ImageInventory_Class.Image
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
    // Container_ImageInventory_Class.Repository
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
    // Container_ImageInventory_Class.ImageTag
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
    // Container_ImageInventory_Class.Computer
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
    // Container_ImageInventory_Class.Running
    //
    
    const Field<Uint32>& Running() const
    {
        const size_t n = offsetof(Self, Running);
        return GetField<Uint32>(n);
    }
    
    void Running(const Field<Uint32>& x)
    {
        const size_t n = offsetof(Self, Running);
        GetField<Uint32>(n) = x;
    }
    
    const Uint32& Running_value() const
    {
        const size_t n = offsetof(Self, Running);
        return GetField<Uint32>(n).value;
    }
    
    void Running_value(const Uint32& x)
    {
        const size_t n = offsetof(Self, Running);
        GetField<Uint32>(n).Set(x);
    }
    
    bool Running_exists() const
    {
        const size_t n = offsetof(Self, Running);
        return GetField<Uint32>(n).exists ? true : false;
    }
    
    void Running_clear()
    {
        const size_t n = offsetof(Self, Running);
        GetField<Uint32>(n).Clear();
    }

    //
    // Container_ImageInventory_Class.Stopped
    //
    
    const Field<Uint32>& Stopped() const
    {
        const size_t n = offsetof(Self, Stopped);
        return GetField<Uint32>(n);
    }
    
    void Stopped(const Field<Uint32>& x)
    {
        const size_t n = offsetof(Self, Stopped);
        GetField<Uint32>(n) = x;
    }
    
    const Uint32& Stopped_value() const
    {
        const size_t n = offsetof(Self, Stopped);
        return GetField<Uint32>(n).value;
    }
    
    void Stopped_value(const Uint32& x)
    {
        const size_t n = offsetof(Self, Stopped);
        GetField<Uint32>(n).Set(x);
    }
    
    bool Stopped_exists() const
    {
        const size_t n = offsetof(Self, Stopped);
        return GetField<Uint32>(n).exists ? true : false;
    }
    
    void Stopped_clear()
    {
        const size_t n = offsetof(Self, Stopped);
        GetField<Uint32>(n).Clear();
    }

    //
    // Container_ImageInventory_Class.Failed
    //
    
    const Field<Uint32>& Failed() const
    {
        const size_t n = offsetof(Self, Failed);
        return GetField<Uint32>(n);
    }
    
    void Failed(const Field<Uint32>& x)
    {
        const size_t n = offsetof(Self, Failed);
        GetField<Uint32>(n) = x;
    }
    
    const Uint32& Failed_value() const
    {
        const size_t n = offsetof(Self, Failed);
        return GetField<Uint32>(n).value;
    }
    
    void Failed_value(const Uint32& x)
    {
        const size_t n = offsetof(Self, Failed);
        GetField<Uint32>(n).Set(x);
    }
    
    bool Failed_exists() const
    {
        const size_t n = offsetof(Self, Failed);
        return GetField<Uint32>(n).exists ? true : false;
    }
    
    void Failed_clear()
    {
        const size_t n = offsetof(Self, Failed);
        GetField<Uint32>(n).Clear();
    }

    //
    // Container_ImageInventory_Class.Paused
    //
    
    const Field<Uint32>& Paused() const
    {
        const size_t n = offsetof(Self, Paused);
        return GetField<Uint32>(n);
    }
    
    void Paused(const Field<Uint32>& x)
    {
        const size_t n = offsetof(Self, Paused);
        GetField<Uint32>(n) = x;
    }
    
    const Uint32& Paused_value() const
    {
        const size_t n = offsetof(Self, Paused);
        return GetField<Uint32>(n).value;
    }
    
    void Paused_value(const Uint32& x)
    {
        const size_t n = offsetof(Self, Paused);
        GetField<Uint32>(n).Set(x);
    }
    
    bool Paused_exists() const
    {
        const size_t n = offsetof(Self, Paused);
        return GetField<Uint32>(n).exists ? true : false;
    }
    
    void Paused_clear()
    {
        const size_t n = offsetof(Self, Paused);
        GetField<Uint32>(n).Clear();
    }

    //
    // Container_ImageInventory_Class.Total
    //
    
    const Field<Uint32>& Total() const
    {
        const size_t n = offsetof(Self, Total);
        return GetField<Uint32>(n);
    }
    
    void Total(const Field<Uint32>& x)
    {
        const size_t n = offsetof(Self, Total);
        GetField<Uint32>(n) = x;
    }
    
    const Uint32& Total_value() const
    {
        const size_t n = offsetof(Self, Total);
        return GetField<Uint32>(n).value;
    }
    
    void Total_value(const Uint32& x)
    {
        const size_t n = offsetof(Self, Total);
        GetField<Uint32>(n).Set(x);
    }
    
    bool Total_exists() const
    {
        const size_t n = offsetof(Self, Total);
        return GetField<Uint32>(n).exists ? true : false;
    }
    
    void Total_clear()
    {
        const size_t n = offsetof(Self, Total);
        GetField<Uint32>(n).Clear();
    }

    //
    // Container_ImageInventory_Class.ImageSize
    //
    
    const Field<String>& ImageSize() const
    {
        const size_t n = offsetof(Self, ImageSize);
        return GetField<String>(n);
    }
    
    void ImageSize(const Field<String>& x)
    {
        const size_t n = offsetof(Self, ImageSize);
        GetField<String>(n) = x;
    }
    
    const String& ImageSize_value() const
    {
        const size_t n = offsetof(Self, ImageSize);
        return GetField<String>(n).value;
    }
    
    void ImageSize_value(const String& x)
    {
        const size_t n = offsetof(Self, ImageSize);
        GetField<String>(n).Set(x);
    }
    
    bool ImageSize_exists() const
    {
        const size_t n = offsetof(Self, ImageSize);
        return GetField<String>(n).exists ? true : false;
    }
    
    void ImageSize_clear()
    {
        const size_t n = offsetof(Self, ImageSize);
        GetField<String>(n).Clear();
    }

    //
    // Container_ImageInventory_Class.VirtualSize
    //
    
    const Field<String>& VirtualSize() const
    {
        const size_t n = offsetof(Self, VirtualSize);
        return GetField<String>(n);
    }
    
    void VirtualSize(const Field<String>& x)
    {
        const size_t n = offsetof(Self, VirtualSize);
        GetField<String>(n) = x;
    }
    
    const String& VirtualSize_value() const
    {
        const size_t n = offsetof(Self, VirtualSize);
        return GetField<String>(n).value;
    }
    
    void VirtualSize_value(const String& x)
    {
        const size_t n = offsetof(Self, VirtualSize);
        GetField<String>(n).Set(x);
    }
    
    bool VirtualSize_exists() const
    {
        const size_t n = offsetof(Self, VirtualSize);
        return GetField<String>(n).exists ? true : false;
    }
    
    void VirtualSize_clear()
    {
        const size_t n = offsetof(Self, VirtualSize);
        GetField<String>(n).Clear();
    }
};

typedef Array<Container_ImageInventory_Class> Container_ImageInventory_ClassA;

MI_END_NAMESPACE

#endif /* __cplusplus */

#endif /* _Container_ImageInventory_h */
