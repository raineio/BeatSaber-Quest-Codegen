// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Completed includes
// Begin il2cpp-utils forward declares
struct Il2CppString;
// Completed il2cpp-utils forward declares
// Type namespace: System
namespace System {
  // Forward declaring type: TypeName
  class TypeName;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(System::TypeName);
DEFINE_IL2CPP_ARG_TYPE(System::TypeName*, "System", "TypeName");
// Type namespace: System
namespace System {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.TypeName
  // [TokenAttribute] Offset: FFFFFFFF
  class TypeName/*, public System::IEquatable_1<System::TypeName*>*/ {
    public:
    // Creating interface conversion operator: operator System::IEquatable_1<System::TypeName*>
    operator System::IEquatable_1<System::TypeName*>() noexcept {
      return *reinterpret_cast<System::IEquatable_1<System::TypeName*>*>(this);
    }
    // public System.String get_DisplayName()
    // Offset: 0xFFFFFFFF
    ::Il2CppString* get_DisplayName();
  }; // System.TypeName
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::TypeName::get_DisplayName
// Il2CppName: get_DisplayName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::TypeName::*)()>(&System::TypeName::get_DisplayName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::TypeName*), "get_DisplayName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
