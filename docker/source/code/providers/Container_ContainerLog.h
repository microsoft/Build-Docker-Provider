/* @migen@ */
/*
**==============================================================================
**
** WARNING: THIS FILE WAS AUTOMATICALLY GENERATED. PLEASE DO NOT EDIT.
**
**==============================================================================
*/
#ifndef _Container_ContainerLog_h
#define _Container_ContainerLog_h

#include <MI.h>
#include "CIM_ManagedElement.h"

/*
**==============================================================================
**
** Container_ContainerLog [Container_ContainerLog]
**
** Keys:
**    InstanceID
**
**==============================================================================
*/

typedef struct _Container_ContainerLog /* extends CIM_ManagedElement */
{
    MI_Instance __instance;
    /* CIM_ManagedElement properties */
    /*KEY*/ MI_ConstStringField InstanceID;
    MI_ConstStringField Caption;
    MI_ConstStringField Description;
    MI_ConstStringField ElementName;
    /* Container_ContainerLog properties */
    MI_ConstStringField Image;
    MI_ConstStringField ImageName;
    MI_ConstStringField Id;
    MI_ConstStringField Name;
    MI_ConstStringField LogEntrySource;
    MI_ConstStringField LogEntry;
    MI_ConstStringField Computer;
}
Container_ContainerLog;

typedef struct _Container_ContainerLog_Ref
{
    Container_ContainerLog* value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
Container_ContainerLog_Ref;

typedef struct _Container_ContainerLog_ConstRef
{
    MI_CONST Container_ContainerLog* value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
Container_ContainerLog_ConstRef;

typedef struct _Container_ContainerLog_Array
{
    struct _Container_ContainerLog** data;
    MI_Uint32 size;
}
Container_ContainerLog_Array;

typedef struct _Container_ContainerLog_ConstArray
{
    struct _Container_ContainerLog MI_CONST* MI_CONST* data;
    MI_Uint32 size;
}
Container_ContainerLog_ConstArray;

typedef struct _Container_ContainerLog_ArrayRef
{
    Container_ContainerLog_Array value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
Container_ContainerLog_ArrayRef;

typedef struct _Container_ContainerLog_ConstArrayRef
{
    Container_ContainerLog_ConstArray value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
Container_ContainerLog_ConstArrayRef;

MI_EXTERN_C MI_CONST MI_ClassDecl Container_ContainerLog_rtti;

MI_INLINE MI_Result MI_CALL Container_ContainerLog_Construct(
    Container_ContainerLog* self,
    MI_Context* context)
{
    return MI_ConstructInstance(context, &Container_ContainerLog_rtti,
        (MI_Instance*)&self->__instance);
}

MI_INLINE MI_Result MI_CALL Container_ContainerLog_Clone(
    const Container_ContainerLog* self,
    Container_ContainerLog** newInstance)
{
    return MI_Instance_Clone(
        &self->__instance, (MI_Instance**)newInstance);
}

MI_INLINE MI_Boolean MI_CALL Container_ContainerLog_IsA(
    const MI_Instance* self)
{
    MI_Boolean res = MI_FALSE;
    return MI_Instance_IsA(self, &Container_ContainerLog_rtti, &res) == MI_RESULT_OK && res;
}

MI_INLINE MI_Result MI_CALL Container_ContainerLog_Destruct(Container_ContainerLog* self)
{
    return MI_Instance_Destruct(&self->__instance);
}

MI_INLINE MI_Result MI_CALL Container_ContainerLog_Delete(Container_ContainerLog* self)
{
    return MI_Instance_Delete(&self->__instance);
}

MI_INLINE MI_Result MI_CALL Container_ContainerLog_Post(
    const Container_ContainerLog* self,
    MI_Context* context)
{
    return MI_PostInstance(context, &self->__instance);
}

MI_INLINE MI_Result MI_CALL Container_ContainerLog_Set_InstanceID(
    Container_ContainerLog* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        0,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL Container_ContainerLog_SetPtr_InstanceID(
    Container_ContainerLog* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        0,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL Container_ContainerLog_Clear_InstanceID(
    Container_ContainerLog* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        0);
}

MI_INLINE MI_Result MI_CALL Container_ContainerLog_Set_Caption(
    Container_ContainerLog* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        1,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL Container_ContainerLog_SetPtr_Caption(
    Container_ContainerLog* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        1,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL Container_ContainerLog_Clear_Caption(
    Container_ContainerLog* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        1);
}

MI_INLINE MI_Result MI_CALL Container_ContainerLog_Set_Description(
    Container_ContainerLog* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        2,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL Container_ContainerLog_SetPtr_Description(
    Container_ContainerLog* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        2,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL Container_ContainerLog_Clear_Description(
    Container_ContainerLog* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        2);
}

MI_INLINE MI_Result MI_CALL Container_ContainerLog_Set_ElementName(
    Container_ContainerLog* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        3,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL Container_ContainerLog_SetPtr_ElementName(
    Container_ContainerLog* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        3,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL Container_ContainerLog_Clear_ElementName(
    Container_ContainerLog* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        3);
}

MI_INLINE MI_Result MI_CALL Container_ContainerLog_Set_Image(
    Container_ContainerLog* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        4,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL Container_ContainerLog_SetPtr_Image(
    Container_ContainerLog* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        4,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL Container_ContainerLog_Clear_Image(
    Container_ContainerLog* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        4);
}

MI_INLINE MI_Result MI_CALL Container_ContainerLog_Set_ImageName(
    Container_ContainerLog* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        5,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL Container_ContainerLog_SetPtr_ImageName(
    Container_ContainerLog* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        5,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL Container_ContainerLog_Clear_ImageName(
    Container_ContainerLog* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        5);
}

MI_INLINE MI_Result MI_CALL Container_ContainerLog_Set_Id(
    Container_ContainerLog* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        6,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL Container_ContainerLog_SetPtr_Id(
    Container_ContainerLog* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        6,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL Container_ContainerLog_Clear_Id(
    Container_ContainerLog* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        6);
}

MI_INLINE MI_Result MI_CALL Container_ContainerLog_Set_Name(
    Container_ContainerLog* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        7,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL Container_ContainerLog_SetPtr_Name(
    Container_ContainerLog* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        7,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL Container_ContainerLog_Clear_Name(
    Container_ContainerLog* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        7);
}

MI_INLINE MI_Result MI_CALL Container_ContainerLog_Set_LogEntrySource(
    Container_ContainerLog* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        8,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL Container_ContainerLog_SetPtr_LogEntrySource(
    Container_ContainerLog* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        8,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL Container_ContainerLog_Clear_LogEntrySource(
    Container_ContainerLog* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        8);
}

MI_INLINE MI_Result MI_CALL Container_ContainerLog_Set_LogEntry(
    Container_ContainerLog* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        9,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL Container_ContainerLog_SetPtr_LogEntry(
    Container_ContainerLog* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        9,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL Container_ContainerLog_Clear_LogEntry(
    Container_ContainerLog* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        9);
}

MI_INLINE MI_Result MI_CALL Container_ContainerLog_Set_Computer(
    Container_ContainerLog* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        10,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL Container_ContainerLog_SetPtr_Computer(
    Container_ContainerLog* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        10,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL Container_ContainerLog_Clear_Computer(
    Container_ContainerLog* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        10);
}

/*
**==============================================================================
**
** Container_ContainerLog provider function prototypes
**
**==============================================================================
*/

/* The developer may optionally define this structure */
typedef struct _Container_ContainerLog_Self Container_ContainerLog_Self;

MI_EXTERN_C void MI_CALL Container_ContainerLog_Load(
    Container_ContainerLog_Self** self,
    MI_Module_Self* selfModule,
    MI_Context* context);

MI_EXTERN_C void MI_CALL Container_ContainerLog_Unload(
    Container_ContainerLog_Self* self,
    MI_Context* context);

MI_EXTERN_C void MI_CALL Container_ContainerLog_EnumerateInstances(
    Container_ContainerLog_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_PropertySet* propertySet,
    MI_Boolean keysOnly,
    const MI_Filter* filter);

MI_EXTERN_C void MI_CALL Container_ContainerLog_GetInstance(
    Container_ContainerLog_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const Container_ContainerLog* instanceName,
    const MI_PropertySet* propertySet);

MI_EXTERN_C void MI_CALL Container_ContainerLog_CreateInstance(
    Container_ContainerLog_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const Container_ContainerLog* newInstance);

MI_EXTERN_C void MI_CALL Container_ContainerLog_ModifyInstance(
    Container_ContainerLog_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const Container_ContainerLog* modifiedInstance,
    const MI_PropertySet* propertySet);

MI_EXTERN_C void MI_CALL Container_ContainerLog_DeleteInstance(
    Container_ContainerLog_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const Container_ContainerLog* instanceName);


/*
**==============================================================================
**
** Container_ContainerLog_Class
**
**==============================================================================
*/

#ifdef __cplusplus
# include <micxx/micxx.h>

MI_BEGIN_NAMESPACE

class Container_ContainerLog_Class : public CIM_ManagedElement_Class
{
public:
    
    typedef Container_ContainerLog Self;
    
    Container_ContainerLog_Class() :
        CIM_ManagedElement_Class(&Container_ContainerLog_rtti)
    {
    }
    
    Container_ContainerLog_Class(
        const Container_ContainerLog* instanceName,
        bool keysOnly) :
        CIM_ManagedElement_Class(
            &Container_ContainerLog_rtti,
            &instanceName->__instance,
            keysOnly)
    {
    }
    
    Container_ContainerLog_Class(
        const MI_ClassDecl* clDecl,
        const MI_Instance* instance,
        bool keysOnly) :
        CIM_ManagedElement_Class(clDecl, instance, keysOnly)
    {
    }
    
    Container_ContainerLog_Class(
        const MI_ClassDecl* clDecl) :
        CIM_ManagedElement_Class(clDecl)
    {
    }
    
    Container_ContainerLog_Class& operator=(
        const Container_ContainerLog_Class& x)
    {
        CopyRef(x);
        return *this;
    }
    
    Container_ContainerLog_Class(
        const Container_ContainerLog_Class& x) :
        CIM_ManagedElement_Class(x)
    {
    }

    static const MI_ClassDecl* GetClassDecl()
    {
        return &Container_ContainerLog_rtti;
    }

    //
    // Container_ContainerLog_Class.Image
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
    // Container_ContainerLog_Class.ImageName
    //
    
    const Field<String>& ImageName() const
    {
        const size_t n = offsetof(Self, ImageName);
        return GetField<String>(n);
    }
    
    void ImageName(const Field<String>& x)
    {
        const size_t n = offsetof(Self, ImageName);
        GetField<String>(n) = x;
    }
    
    const String& ImageName_value() const
    {
        const size_t n = offsetof(Self, ImageName);
        return GetField<String>(n).value;
    }
    
    void ImageName_value(const String& x)
    {
        const size_t n = offsetof(Self, ImageName);
        GetField<String>(n).Set(x);
    }
    
    bool ImageName_exists() const
    {
        const size_t n = offsetof(Self, ImageName);
        return GetField<String>(n).exists ? true : false;
    }
    
    void ImageName_clear()
    {
        const size_t n = offsetof(Self, ImageName);
        GetField<String>(n).Clear();
    }

    //
    // Container_ContainerLog_Class.Id
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
    // Container_ContainerLog_Class.Name
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
    // Container_ContainerLog_Class.LogEntrySource
    //
    
    const Field<String>& LogEntrySource() const
    {
        const size_t n = offsetof(Self, LogEntrySource);
        return GetField<String>(n);
    }
    
    void LogEntrySource(const Field<String>& x)
    {
        const size_t n = offsetof(Self, LogEntrySource);
        GetField<String>(n) = x;
    }
    
    const String& LogEntrySource_value() const
    {
        const size_t n = offsetof(Self, LogEntrySource);
        return GetField<String>(n).value;
    }
    
    void LogEntrySource_value(const String& x)
    {
        const size_t n = offsetof(Self, LogEntrySource);
        GetField<String>(n).Set(x);
    }
    
    bool LogEntrySource_exists() const
    {
        const size_t n = offsetof(Self, LogEntrySource);
        return GetField<String>(n).exists ? true : false;
    }
    
    void LogEntrySource_clear()
    {
        const size_t n = offsetof(Self, LogEntrySource);
        GetField<String>(n).Clear();
    }

    //
    // Container_ContainerLog_Class.LogEntry
    //
    
    const Field<String>& LogEntry() const
    {
        const size_t n = offsetof(Self, LogEntry);
        return GetField<String>(n);
    }
    
    void LogEntry(const Field<String>& x)
    {
        const size_t n = offsetof(Self, LogEntry);
        GetField<String>(n) = x;
    }
    
    const String& LogEntry_value() const
    {
        const size_t n = offsetof(Self, LogEntry);
        return GetField<String>(n).value;
    }
    
    void LogEntry_value(const String& x)
    {
        const size_t n = offsetof(Self, LogEntry);
        GetField<String>(n).Set(x);
    }
    
    bool LogEntry_exists() const
    {
        const size_t n = offsetof(Self, LogEntry);
        return GetField<String>(n).exists ? true : false;
    }
    
    void LogEntry_clear()
    {
        const size_t n = offsetof(Self, LogEntry);
        GetField<String>(n).Clear();
    }

    //
    // Container_ContainerLog_Class.Computer
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

typedef Array<Container_ContainerLog_Class> Container_ContainerLog_ClassA;

MI_END_NAMESPACE

#endif /* __cplusplus */

#endif /* _Container_ContainerLog_h */
