// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Mono.Security.X509.X509Crl
#include "Mono/Security/X509/X509Crl.hpp"
// Including type: System.DateTime
#include "System/DateTime.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Mono::Security::X509
namespace Mono::Security::X509 {
  // Forward declaring type: X509ExtensionCollection
  class X509ExtensionCollection;
}
// Forward declaring namespace: Mono::Security
namespace Mono::Security {
  // Forward declaring type: ASN1
  class ASN1;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Mono::Security::X509::X509Crl::X509CrlEntry);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::X509::X509Crl::X509CrlEntry*, "Mono.Security.X509", "X509Crl/X509CrlEntry");
// Type namespace: Mono.Security.X509
namespace Mono::Security::X509 {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Security.X509.X509Crl/Mono.Security.X509.X509CrlEntry
  // [TokenAttribute] Offset: FFFFFFFF
  class X509Crl::X509CrlEntry : public ::Il2CppObject {
    public:
    public:
    // private System.Byte[] sn
    // Size: 0x8
    // Offset: 0x10
    ::ArrayW<uint8_t> sn;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // private System.DateTime revocationDate
    // Size: 0x8
    // Offset: 0x18
    ::System::DateTime revocationDate;
    // Field size check
    static_assert(sizeof(::System::DateTime) == 0x8);
    // private Mono.Security.X509.X509ExtensionCollection extensions
    // Size: 0x8
    // Offset: 0x20
    ::Mono::Security::X509::X509ExtensionCollection* extensions;
    // Field size check
    static_assert(sizeof(::Mono::Security::X509::X509ExtensionCollection*) == 0x8);
    public:
    // Get instance field reference: private System.Byte[] sn
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn_sn();
    // Get instance field reference: private System.DateTime revocationDate
    [[deprecated("Use field access instead!")]] ::System::DateTime& dyn_revocationDate();
    // Get instance field reference: private Mono.Security.X509.X509ExtensionCollection extensions
    [[deprecated("Use field access instead!")]] ::Mono::Security::X509::X509ExtensionCollection*& dyn_extensions();
    // public System.Byte[] get_SerialNumber()
    // Offset: 0x2AA89E8
    ::ArrayW<uint8_t> get_SerialNumber();
    // public System.DateTime get_RevocationDate()
    // Offset: 0x2AA8F58
    ::System::DateTime get_RevocationDate();
    // public Mono.Security.X509.X509ExtensionCollection get_Extensions()
    // Offset: 0x2AA8F60
    ::Mono::Security::X509::X509ExtensionCollection* get_Extensions();
    // System.Void .ctor(Mono.Security.ASN1 entry)
    // Offset: 0x2AA84E4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static X509Crl::X509CrlEntry* New_ctor(::Mono::Security::ASN1* entry) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Mono::Security::X509::X509Crl::X509CrlEntry::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<X509Crl::X509CrlEntry*, creationType>(entry)));
    }
  }; // Mono.Security.X509.X509Crl/Mono.Security.X509.X509CrlEntry
  #pragma pack(pop)
  static check_size<sizeof(X509Crl::X509CrlEntry), 32 + sizeof(::Mono::Security::X509::X509ExtensionCollection*)> __Mono_Security_X509_X509Crl_X509CrlEntrySizeCheck;
  static_assert(sizeof(X509Crl::X509CrlEntry) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Mono::Security::X509::X509Crl::X509CrlEntry::get_SerialNumber
// Il2CppName: get_SerialNumber
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Mono::Security::X509::X509Crl::X509CrlEntry::*)()>(&Mono::Security::X509::X509Crl::X509CrlEntry::get_SerialNumber)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::X509::X509Crl::X509CrlEntry*), "get_SerialNumber", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::X509::X509Crl::X509CrlEntry::get_RevocationDate
// Il2CppName: get_RevocationDate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DateTime (Mono::Security::X509::X509Crl::X509CrlEntry::*)()>(&Mono::Security::X509::X509Crl::X509CrlEntry::get_RevocationDate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::X509::X509Crl::X509CrlEntry*), "get_RevocationDate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::X509::X509Crl::X509CrlEntry::get_Extensions
// Il2CppName: get_Extensions
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Security::X509::X509ExtensionCollection* (Mono::Security::X509::X509Crl::X509CrlEntry::*)()>(&Mono::Security::X509::X509Crl::X509CrlEntry::get_Extensions)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::X509::X509Crl::X509CrlEntry*), "get_Extensions", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::X509::X509Crl::X509CrlEntry::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
