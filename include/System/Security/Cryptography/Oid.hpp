// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Security.Cryptography.OidGroup
#include "System/Security/Cryptography/OidGroup.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: System.Security.Cryptography
namespace System::Security::Cryptography {
  // Forward declaring type: Oid
  class Oid;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Security::Cryptography::Oid);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::Oid*, "System.Security.Cryptography", "Oid");
// Type namespace: System.Security.Cryptography
namespace System::Security::Cryptography {
  // Size: 0x24
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.Cryptography.Oid
  // [TokenAttribute] Offset: FFFFFFFF
  class Oid : public ::Il2CppObject {
    public:
    public:
    // private System.String m_value
    // Size: 0x8
    // Offset: 0x10
    ::StringW m_value;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String m_friendlyName
    // Size: 0x8
    // Offset: 0x18
    ::StringW m_friendlyName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Security.Cryptography.OidGroup m_group
    // Size: 0x4
    // Offset: 0x20
    ::System::Security::Cryptography::OidGroup m_group;
    // Field size check
    static_assert(sizeof(::System::Security::Cryptography::OidGroup) == 0x4);
    public:
    // Get instance field reference: private System.String m_value
    [[deprecated("Use field access instead!")]] ::StringW& dyn_m_value();
    // Get instance field reference: private System.String m_friendlyName
    [[deprecated("Use field access instead!")]] ::StringW& dyn_m_friendlyName();
    // Get instance field reference: private System.Security.Cryptography.OidGroup m_group
    [[deprecated("Use field access instead!")]] ::System::Security::Cryptography::OidGroup& dyn_m_group();
    // public System.String get_Value()
    // Offset: 0x1BEC630
    ::StringW get_Value();
    // public System.Void set_Value(System.String value)
    // Offset: 0x1BEC638
    void set_Value(::StringW value);
    // public System.String get_FriendlyName()
    // Offset: 0x1BEC640
    ::StringW get_FriendlyName();
    // public System.Void .ctor()
    // Offset: 0x1BEC448
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Oid* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Security::Cryptography::Oid::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Oid*, creationType>()));
    }
    // public System.Void .ctor(System.String oid)
    // Offset: 0x1BEC450
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Oid* New_ctor(::StringW oid) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Security::Cryptography::Oid::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Oid*, creationType>(oid)));
    }
    // System.Void .ctor(System.String oid, System.Security.Cryptography.OidGroup group, System.Boolean lookupFriendlyName)
    // Offset: 0x1BEC494
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Oid* New_ctor(::StringW oid, ::System::Security::Cryptography::OidGroup group, bool lookupFriendlyName) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Security::Cryptography::Oid::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Oid*, creationType>(oid, group, lookupFriendlyName)));
    }
    // public System.Void .ctor(System.String value, System.String friendlyName)
    // Offset: 0x1BEC548
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Oid* New_ctor(::StringW value, ::StringW friendlyName) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Security::Cryptography::Oid::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Oid*, creationType>(value, friendlyName)));
    }
    // public System.Void .ctor(System.Security.Cryptography.Oid oid)
    // Offset: 0x1BEC580
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Oid* New_ctor(::System::Security::Cryptography::Oid* oid) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Security::Cryptography::Oid::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Oid*, creationType>(oid)));
    }
  }; // System.Security.Cryptography.Oid
  #pragma pack(pop)
  static check_size<sizeof(Oid), 32 + sizeof(::System::Security::Cryptography::OidGroup)> __System_Security_Cryptography_OidSizeCheck;
  static_assert(sizeof(Oid) == 0x24);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Security::Cryptography::Oid::get_Value
// Il2CppName: get_Value
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Security::Cryptography::Oid::*)()>(&System::Security::Cryptography::Oid::get_Value)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::Oid*), "get_Value", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::Oid::set_Value
// Il2CppName: set_Value
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::Oid::*)(::StringW)>(&System::Security::Cryptography::Oid::set_Value)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::Oid*), "set_Value", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::Oid::get_FriendlyName
// Il2CppName: get_FriendlyName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Security::Cryptography::Oid::*)()>(&System::Security::Cryptography::Oid::get_FriendlyName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::Oid*), "get_FriendlyName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::Oid::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Security::Cryptography::Oid::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Security::Cryptography::Oid::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Security::Cryptography::Oid::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Security::Cryptography::Oid::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
