// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Reflection.FieldInfo
#include "System/Reflection/FieldInfo.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: FieldAttributes
  struct FieldAttributes;
  // Forward declaring type: BindingFlags
  struct BindingFlags;
  // Forward declaring type: Binder
  class Binder;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
  // Forward declaring type: RuntimeFieldHandle
  struct RuntimeFieldHandle;
}
// Forward declaring namespace: System::Globalization
namespace System::Globalization {
  // Forward declaring type: CultureInfo
  class CultureInfo;
}
// Completed forward declares
// Type namespace: System.Reflection.Emit
namespace System::Reflection::Emit {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Reflection.Emit.FieldBuilder
  class FieldBuilder : public System::Reflection::FieldInfo {
    public:
    // Creating value type constructor for type: FieldBuilder
    FieldBuilder() noexcept {}
    // public override System.Reflection.FieldAttributes get_Attributes()
    // Offset: 0x1C78850
    // Implemented from: System.Reflection.FieldInfo
    // Base method: System.Reflection.FieldAttributes FieldInfo::get_Attributes()
    System::Reflection::FieldAttributes get_Attributes();
    // public override System.Type get_DeclaringType()
    // Offset: 0x1C788AC
    // Implemented from: System.Reflection.MemberInfo
    // Base method: System.Type MemberInfo::get_DeclaringType()
    System::Type* get_DeclaringType();
    // public override System.Type get_FieldType()
    // Offset: 0x1C78908
    // Implemented from: System.Reflection.FieldInfo
    // Base method: System.Type FieldInfo::get_FieldType()
    System::Type* get_FieldType();
    // public override System.String get_Name()
    // Offset: 0x1C78964
    // Implemented from: System.Reflection.MemberInfo
    // Base method: System.String MemberInfo::get_Name()
    ::Il2CppString* get_Name();
    // public override System.Object GetValue(System.Object obj)
    // Offset: 0x1C789C0
    // Implemented from: System.Reflection.FieldInfo
    // Base method: System.Object FieldInfo::GetValue(System.Object obj)
    ::Il2CppObject* GetValue(::Il2CppObject* obj);
    // public override System.RuntimeFieldHandle get_FieldHandle()
    // Offset: 0x1C78A1C
    // Implemented from: System.Reflection.FieldInfo
    // Base method: System.RuntimeFieldHandle FieldInfo::get_FieldHandle()
    System::RuntimeFieldHandle get_FieldHandle();
    // public override System.Type get_ReflectedType()
    // Offset: 0x1C78A5C
    // Implemented from: System.Reflection.MemberInfo
    // Base method: System.Type MemberInfo::get_ReflectedType()
    System::Type* get_ReflectedType();
    // public override System.Object[] GetCustomAttributes(System.Boolean inherit)
    // Offset: 0x1C78A9C
    // Implemented from: System.Reflection.MemberInfo
    // Base method: System.Object[] MemberInfo::GetCustomAttributes(System.Boolean inherit)
    ::Array<::Il2CppObject*>* GetCustomAttributes(bool inherit);
    // public override System.Object[] GetCustomAttributes(System.Type attributeType, System.Boolean inherit)
    // Offset: 0x1C78ADC
    // Implemented from: System.Reflection.MemberInfo
    // Base method: System.Object[] MemberInfo::GetCustomAttributes(System.Type attributeType, System.Boolean inherit)
    ::Array<::Il2CppObject*>* GetCustomAttributes(System::Type* attributeType, bool inherit);
    // public override System.Boolean IsDefined(System.Type attributeType, System.Boolean inherit)
    // Offset: 0x1C78B1C
    // Implemented from: System.Reflection.MemberInfo
    // Base method: System.Boolean MemberInfo::IsDefined(System.Type attributeType, System.Boolean inherit)
    bool IsDefined(System::Type* attributeType, bool inherit);
    // public override System.Void SetValue(System.Object obj, System.Object val, System.Reflection.BindingFlags invokeAttr, System.Reflection.Binder binder, System.Globalization.CultureInfo culture)
    // Offset: 0x1C78B5C
    // Implemented from: System.Reflection.FieldInfo
    // Base method: System.Void FieldInfo::SetValue(System.Object obj, System.Object val, System.Reflection.BindingFlags invokeAttr, System.Reflection.Binder binder, System.Globalization.CultureInfo culture)
    void SetValue(::Il2CppObject* obj, ::Il2CppObject* val, System::Reflection::BindingFlags invokeAttr, System::Reflection::Binder* binder, System::Globalization::CultureInfo* culture);
  }; // System.Reflection.Emit.FieldBuilder
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Reflection::Emit::FieldBuilder*, "System.Reflection.Emit", "FieldBuilder");
// Writing MetadataGetter for method: System::Reflection::Emit::FieldBuilder::get_Attributes
// Il2CppName: get_Attributes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::FieldAttributes (System::Reflection::Emit::FieldBuilder::*)()>(&System::Reflection::Emit::FieldBuilder::get_Attributes)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::Emit::FieldBuilder*), "get_Attributes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::Emit::FieldBuilder::get_DeclaringType
// Il2CppName: get_DeclaringType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Type* (System::Reflection::Emit::FieldBuilder::*)()>(&System::Reflection::Emit::FieldBuilder::get_DeclaringType)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::Emit::FieldBuilder*), "get_DeclaringType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::Emit::FieldBuilder::get_FieldType
// Il2CppName: get_FieldType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Type* (System::Reflection::Emit::FieldBuilder::*)()>(&System::Reflection::Emit::FieldBuilder::get_FieldType)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::Emit::FieldBuilder*), "get_FieldType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::Emit::FieldBuilder::get_Name
// Il2CppName: get_Name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Reflection::Emit::FieldBuilder::*)()>(&System::Reflection::Emit::FieldBuilder::get_Name)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::Emit::FieldBuilder*), "get_Name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::Emit::FieldBuilder::GetValue
// Il2CppName: GetValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Reflection::Emit::FieldBuilder::*)(::Il2CppObject*)>(&System::Reflection::Emit::FieldBuilder::GetValue)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::Emit::FieldBuilder*), "GetValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>()});
  }
};
// Writing MetadataGetter for method: System::Reflection::Emit::FieldBuilder::get_FieldHandle
// Il2CppName: get_FieldHandle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::RuntimeFieldHandle (System::Reflection::Emit::FieldBuilder::*)()>(&System::Reflection::Emit::FieldBuilder::get_FieldHandle)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::Emit::FieldBuilder*), "get_FieldHandle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::Emit::FieldBuilder::get_ReflectedType
// Il2CppName: get_ReflectedType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Type* (System::Reflection::Emit::FieldBuilder::*)()>(&System::Reflection::Emit::FieldBuilder::get_ReflectedType)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::Emit::FieldBuilder*), "get_ReflectedType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::Emit::FieldBuilder::GetCustomAttributes
// Il2CppName: GetCustomAttributes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<::Il2CppObject*>* (System::Reflection::Emit::FieldBuilder::*)(bool)>(&System::Reflection::Emit::FieldBuilder::GetCustomAttributes)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::Emit::FieldBuilder*), "GetCustomAttributes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<bool>()});
  }
};
// Writing MetadataGetter for method: System::Reflection::Emit::FieldBuilder::GetCustomAttributes
// Il2CppName: GetCustomAttributes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<::Il2CppObject*>* (System::Reflection::Emit::FieldBuilder::*)(System::Type*, bool)>(&System::Reflection::Emit::FieldBuilder::GetCustomAttributes)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::Emit::FieldBuilder*), "GetCustomAttributes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Type*>(), ::il2cpp_utils::ExtractIndependentType<bool>()});
  }
};
// Writing MetadataGetter for method: System::Reflection::Emit::FieldBuilder::IsDefined
// Il2CppName: IsDefined
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Reflection::Emit::FieldBuilder::*)(System::Type*, bool)>(&System::Reflection::Emit::FieldBuilder::IsDefined)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::Emit::FieldBuilder*), "IsDefined", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Type*>(), ::il2cpp_utils::ExtractIndependentType<bool>()});
  }
};
// Writing MetadataGetter for method: System::Reflection::Emit::FieldBuilder::SetValue
// Il2CppName: SetValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Reflection::Emit::FieldBuilder::*)(::Il2CppObject*, ::Il2CppObject*, System::Reflection::BindingFlags, System::Reflection::Binder*, System::Globalization::CultureInfo*)>(&System::Reflection::Emit::FieldBuilder::SetValue)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::Emit::FieldBuilder*), "SetValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>(), ::il2cpp_utils::ExtractIndependentType<System::Reflection::BindingFlags>(), ::il2cpp_utils::ExtractIndependentType<System::Reflection::Binder*>(), ::il2cpp_utils::ExtractIndependentType<System::Globalization::CultureInfo*>()});
  }
};
