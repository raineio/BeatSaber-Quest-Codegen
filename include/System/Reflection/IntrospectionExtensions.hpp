// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: TypeInfo
  class TypeInfo;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: System.Reflection
namespace System::Reflection {
  // Forward declaring type: IntrospectionExtensions
  class IntrospectionExtensions;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Reflection::IntrospectionExtensions);
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::IntrospectionExtensions*, "System.Reflection", "IntrospectionExtensions");
// Type namespace: System.Reflection
namespace System::Reflection {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Reflection.IntrospectionExtensions
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExtensionAttribute] Offset: 102F564
  class IntrospectionExtensions : public ::Il2CppObject {
    public:
    // static public System.Reflection.TypeInfo GetTypeInfo(System.Type type)
    // Offset: 0x221140C
    static ::System::Reflection::TypeInfo* GetTypeInfo(::System::Type* type);
  }; // System.Reflection.IntrospectionExtensions
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Reflection::IntrospectionExtensions::GetTypeInfo
// Il2CppName: GetTypeInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::TypeInfo* (*)(::System::Type*)>(&System::Reflection::IntrospectionExtensions::GetTypeInfo)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::IntrospectionExtensions*), "GetTypeInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
