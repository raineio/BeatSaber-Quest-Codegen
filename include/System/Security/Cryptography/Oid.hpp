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
// Completed includes
// Type namespace: System.Security.Cryptography
namespace System::Security::Cryptography {
  // Forward declaring type: Oid
  class Oid;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(System::Security::Cryptography::Oid);
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::Oid*, "System.Security.Cryptography", "Oid");
// Type namespace: System.Security.Cryptography
namespace System::Security::Cryptography {
  // Size: 0x24
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.Cryptography.Oid
  // [TokenAttribute] Offset: FFFFFFFF
  class Oid : public ::Il2CppObject {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private System.String m_value
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* m_value;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String m_friendlyName
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* m_friendlyName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Security.Cryptography.OidGroup m_group
    // Size: 0x4
    // Offset: 0x20
    System::Security::Cryptography::OidGroup m_group;
    // Field size check
    static_assert(sizeof(System::Security::Cryptography::OidGroup) == 0x4);
    public:
    // Get instance field reference: private System.String m_value
    ::Il2CppString*& dyn_m_value();
    // Get instance field reference: private System.String m_friendlyName
    ::Il2CppString*& dyn_m_friendlyName();
    // Get instance field reference: private System.Security.Cryptography.OidGroup m_group
    System::Security::Cryptography::OidGroup& dyn_m_group();
    // public System.String get_Value()
    // Offset: 0x19D3C30
    ::Il2CppString* get_Value();
    // public System.Void set_Value(System.String value)
    // Offset: 0x19D3C38
    void set_Value(::Il2CppString* value);
    // public System.String get_FriendlyName()
    // Offset: 0x19D3C40
    ::Il2CppString* get_FriendlyName();
    // public System.Void .ctor(System.String oid)
    // Offset: 0x19D3A48
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Oid* New_ctor(::Il2CppString* oid) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Security::Cryptography::Oid::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Oid*, creationType>(oid)));
    }
    // System.Void .ctor(System.String oid, System.Security.Cryptography.OidGroup group, System.Boolean lookupFriendlyName)
    // Offset: 0x19D3A90
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Oid* New_ctor(::Il2CppString* oid, System::Security::Cryptography::OidGroup group, bool lookupFriendlyName) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Security::Cryptography::Oid::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Oid*, creationType>(oid, group, lookupFriendlyName)));
    }
    // public System.Void .ctor(System.String value, System.String friendlyName)
    // Offset: 0x19D3B48
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Oid* New_ctor(::Il2CppString* value, ::Il2CppString* friendlyName) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Security::Cryptography::Oid::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Oid*, creationType>(value, friendlyName)));
    }
    // public System.Void .ctor(System.Security.Cryptography.Oid oid)
    // Offset: 0x19D3B80
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Oid* New_ctor(System::Security::Cryptography::Oid* oid) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Security::Cryptography::Oid::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Oid*, creationType>(oid)));
    }
    // public System.Void .ctor()
    // Offset: 0x19D3A40
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Oid* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Security::Cryptography::Oid::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Oid*, creationType>()));
    }
  }; // System.Security.Cryptography.Oid
  #pragma pack(pop)
  static check_size<sizeof(Oid), 32 + sizeof(System::Security::Cryptography::OidGroup)> __System_Security_Cryptography_OidSizeCheck;
  static_assert(sizeof(Oid) == 0x24);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Security::Cryptography::Oid::get_Value
// Il2CppName: get_Value
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Security::Cryptography::Oid::*)()>(&System::Security::Cryptography::Oid::get_Value)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::Oid*), "get_Value", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::Oid::set_Value
// Il2CppName: set_Value
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::Oid::*)(::Il2CppString*)>(&System::Security::Cryptography::Oid::set_Value)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::Oid*), "set_Value", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::Oid::get_FriendlyName
// Il2CppName: get_FriendlyName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Security::Cryptography::Oid::*)()>(&System::Security::Cryptography::Oid::get_FriendlyName)> {
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
