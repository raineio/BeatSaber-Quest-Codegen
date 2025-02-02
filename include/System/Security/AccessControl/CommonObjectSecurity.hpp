// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Security.AccessControl.ObjectSecurity
#include "System/Security/AccessControl/ObjectSecurity.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Security::AccessControl
namespace System::Security::AccessControl {
  // Forward declaring type: AuthorizationRuleCollection
  class AuthorizationRuleCollection;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: System.Security.AccessControl
namespace System::Security::AccessControl {
  // Forward declaring type: CommonObjectSecurity
  class CommonObjectSecurity;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Security::AccessControl::CommonObjectSecurity);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::AccessControl::CommonObjectSecurity*, "System.Security.AccessControl", "CommonObjectSecurity");
// Type namespace: System.Security.AccessControl
namespace System::Security::AccessControl {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.AccessControl.CommonObjectSecurity
  // [TokenAttribute] Offset: FFFFFFFF
  class CommonObjectSecurity : public ::System::Security::AccessControl::ObjectSecurity {
    public:
    // protected System.Void .ctor(System.Boolean isContainer)
    // Offset: 0x1BD72DC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CommonObjectSecurity* New_ctor(bool isContainer) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Security::AccessControl::CommonObjectSecurity::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CommonObjectSecurity*, creationType>(isContainer)));
    }
    // public System.Security.AccessControl.AuthorizationRuleCollection GetAccessRules(System.Boolean includeExplicit, System.Boolean includeInherited, System.Type targetType)
    // Offset: 0x1BD73D4
    ::System::Security::AccessControl::AuthorizationRuleCollection* GetAccessRules(bool includeExplicit, bool includeInherited, ::System::Type* targetType);
  }; // System.Security.AccessControl.CommonObjectSecurity
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Security::AccessControl::CommonObjectSecurity::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Security::AccessControl::CommonObjectSecurity::GetAccessRules
// Il2CppName: GetAccessRules
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::AccessControl::AuthorizationRuleCollection* (System::Security::AccessControl::CommonObjectSecurity::*)(bool, bool, ::System::Type*)>(&System::Security::AccessControl::CommonObjectSecurity::GetAccessRules)> {
  static const MethodInfo* get() {
    static auto* includeExplicit = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* includeInherited = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* targetType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::AccessControl::CommonObjectSecurity*), "GetAccessRules", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{includeExplicit, includeInherited, targetType});
  }
};
