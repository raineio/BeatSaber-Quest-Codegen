// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Reflection.FieldInfo
#include "System/Reflection/FieldInfo.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: RuntimeFieldInfo
  class RuntimeFieldInfo;
  // Forward declaring type: BindingFlags
  struct BindingFlags;
  // Forward declaring type: Binder
  class Binder;
  // Forward declaring type: Module
  class Module;
  // Forward declaring type: FieldAttributes
  struct FieldAttributes;
}
// Forward declaring namespace: System::Globalization
namespace System::Globalization {
  // Forward declaring type: CultureInfo
  class CultureInfo;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
  // Forward declaring type: RuntimeFieldHandle
  struct RuntimeFieldHandle;
}
// Completed forward declares
// Type namespace: System.Runtime.Serialization
namespace System::Runtime::Serialization {
  // Autogenerated type: System.Runtime.Serialization.SerializationFieldInfo
  class SerializationFieldInfo : public System::Reflection::FieldInfo {
    public:
    // private System.Reflection.RuntimeFieldInfo m_field
    // Offset: 0x10
    System::Reflection::RuntimeFieldInfo* m_field;
    // private System.String m_serializationName
    // Offset: 0x18
    ::Il2CppString* m_serializationName;
    // System.Void .ctor(System.Reflection.RuntimeFieldInfo field, System.String namePrefix)
    // Offset: 0x1459AB4
    static SerializationFieldInfo* New_ctor(System::Reflection::RuntimeFieldInfo* field, ::Il2CppString* namePrefix);
    // System.Object InternalGetValue(System.Object obj)
    // Offset: 0x1459C60
    ::Il2CppObject* InternalGetValue(::Il2CppObject* obj);
    // System.Void InternalSetValue(System.Object obj, System.Object value, System.Reflection.BindingFlags invokeAttr, System.Reflection.Binder binder, System.Globalization.CultureInfo culture)
    // Offset: 0x1459D74
    void InternalSetValue(::Il2CppObject* obj, ::Il2CppObject* value, System::Reflection::BindingFlags invokeAttr, System::Reflection::Binder* binder, System::Globalization::CultureInfo* culture);
    // System.Reflection.RuntimeFieldInfo get_FieldInfo()
    // Offset: 0x1459EAC
    System::Reflection::RuntimeFieldInfo* get_FieldInfo();
    // public override System.Reflection.Module get_Module()
    // Offset: 0x1459A6C
    // Implemented from: System.Reflection.MemberInfo
    // Base method: System.Reflection.Module MemberInfo::get_Module()
    System::Reflection::Module* get_Module();
    // public override System.Int32 get_MetadataToken()
    // Offset: 0x1459A90
    // Implemented from: System.Reflection.MemberInfo
    // Base method: System.Int32 MemberInfo::get_MetadataToken()
    int get_MetadataToken();
    // public override System.String get_Name()
    // Offset: 0x1459B64
    // Implemented from: System.Reflection.MemberInfo
    // Base method: System.String MemberInfo::get_Name()
    ::Il2CppString* get_Name();
    // public override System.Type get_DeclaringType()
    // Offset: 0x1459B6C
    // Implemented from: System.Reflection.MemberInfo
    // Base method: System.Type MemberInfo::get_DeclaringType()
    System::Type* get_DeclaringType();
    // public override System.Type get_ReflectedType()
    // Offset: 0x1459B8C
    // Implemented from: System.Reflection.MemberInfo
    // Base method: System.Type MemberInfo::get_ReflectedType()
    System::Type* get_ReflectedType();
    // public override System.Object[] GetCustomAttributes(System.Boolean inherit)
    // Offset: 0x1459BAC
    // Implemented from: System.Reflection.MemberInfo
    // Base method: System.Object[] MemberInfo::GetCustomAttributes(System.Boolean inherit)
    ::Array<::Il2CppObject*>* GetCustomAttributes(bool inherit);
    // public override System.Object[] GetCustomAttributes(System.Type attributeType, System.Boolean inherit)
    // Offset: 0x1459BD0
    // Implemented from: System.Reflection.MemberInfo
    // Base method: System.Object[] MemberInfo::GetCustomAttributes(System.Type attributeType, System.Boolean inherit)
    ::Array<::Il2CppObject*>* GetCustomAttributes(System::Type* attributeType, bool inherit);
    // public override System.Boolean IsDefined(System.Type attributeType, System.Boolean inherit)
    // Offset: 0x1459BF4
    // Implemented from: System.Reflection.MemberInfo
    // Base method: System.Boolean MemberInfo::IsDefined(System.Type attributeType, System.Boolean inherit)
    bool IsDefined(System::Type* attributeType, bool inherit);
    // public override System.Type get_FieldType()
    // Offset: 0x1459C18
    // Implemented from: System.Reflection.FieldInfo
    // Base method: System.Type FieldInfo::get_FieldType()
    System::Type* get_FieldType();
    // public override System.Object GetValue(System.Object obj)
    // Offset: 0x1459C3C
    // Implemented from: System.Reflection.FieldInfo
    // Base method: System.Object FieldInfo::GetValue(System.Object obj)
    ::Il2CppObject* GetValue(::Il2CppObject* obj);
    // public override System.Void SetValue(System.Object obj, System.Object value, System.Reflection.BindingFlags invokeAttr, System.Reflection.Binder binder, System.Globalization.CultureInfo culture)
    // Offset: 0x1459D50
    // Implemented from: System.Reflection.FieldInfo
    // Base method: System.Void FieldInfo::SetValue(System.Object obj, System.Object value, System.Reflection.BindingFlags invokeAttr, System.Reflection.Binder binder, System.Globalization.CultureInfo culture)
    void SetValue(::Il2CppObject* obj, ::Il2CppObject* value, System::Reflection::BindingFlags invokeAttr, System::Reflection::Binder* binder, System::Globalization::CultureInfo* culture);
    // public override System.RuntimeFieldHandle get_FieldHandle()
    // Offset: 0x1459EB4
    // Implemented from: System.Reflection.FieldInfo
    // Base method: System.RuntimeFieldHandle FieldInfo::get_FieldHandle()
    System::RuntimeFieldHandle get_FieldHandle();
    // public override System.Reflection.FieldAttributes get_Attributes()
    // Offset: 0x1459ED8
    // Implemented from: System.Reflection.FieldInfo
    // Base method: System.Reflection.FieldAttributes FieldInfo::get_Attributes()
    System::Reflection::FieldAttributes get_Attributes();
  }; // System.Runtime.Serialization.SerializationFieldInfo
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::SerializationFieldInfo*, "System.Runtime.Serialization", "SerializationFieldInfo");
#pragma pack(pop)
