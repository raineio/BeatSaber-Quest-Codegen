// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: NUnit.Compatibility
namespace NUnit::Compatibility {
  // Forward declaring type: TypeExtensions
  class TypeExtensions;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::NUnit::Compatibility::TypeExtensions);
DEFINE_IL2CPP_ARG_TYPE(::NUnit::Compatibility::TypeExtensions*, "NUnit.Compatibility", "TypeExtensions");
// Type namespace: NUnit.Compatibility
namespace NUnit::Compatibility {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: NUnit.Compatibility.TypeExtensions
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExtensionAttribute] Offset: FFFFFFFF
  class TypeExtensions : public ::Il2CppObject {
    public:
    // static public System.Type GetTypeInfo(System.Type type)
    // Offset: 0x1C8FB0C
    static ::System::Type* GetTypeInfo(::System::Type* type);
  }; // NUnit.Compatibility.TypeExtensions
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: NUnit::Compatibility::TypeExtensions::GetTypeInfo
// Il2CppName: GetTypeInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (*)(::System::Type*)>(&NUnit::Compatibility::TypeExtensions::GetTypeInfo)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Compatibility::TypeExtensions*), "GetTypeInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
