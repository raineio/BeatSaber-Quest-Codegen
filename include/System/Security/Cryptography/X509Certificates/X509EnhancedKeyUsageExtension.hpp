// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Security.Cryptography.X509Certificates.X509Extension
#include "System/Security/Cryptography/X509Certificates/X509Extension.hpp"
// Including type: System.Security.Cryptography.AsnDecodeStatus
#include "System/Security/Cryptography/AsnDecodeStatus.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Security::Cryptography
namespace System::Security::Cryptography {
  // Forward declaring type: OidCollection
  class OidCollection;
  // Skipping declaration: AsnEncodedData because it is already included!
}
// Completed forward declares
// Type namespace: System.Security.Cryptography.X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Size: 0x34
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.Cryptography.X509Certificates.X509EnhancedKeyUsageExtension
  class X509EnhancedKeyUsageExtension : public System::Security::Cryptography::X509Certificates::X509Extension {
    public:
    // Writing base type padding for base size: 0x21 to desired offset: 0x28
    char ___base_padding[0x7] = {};
    // private System.Security.Cryptography.OidCollection _enhKeyUsage
    // Size: 0x8
    // Offset: 0x28
    System::Security::Cryptography::OidCollection* enhKeyUsage;
    // Field size check
    static_assert(sizeof(System::Security::Cryptography::OidCollection*) == 0x8);
    // private System.Security.Cryptography.AsnDecodeStatus _status
    // Size: 0x4
    // Offset: 0x30
    System::Security::Cryptography::AsnDecodeStatus status;
    // Field size check
    static_assert(sizeof(System::Security::Cryptography::AsnDecodeStatus) == 0x4);
    // Creating value type constructor for type: X509EnhancedKeyUsageExtension
    X509EnhancedKeyUsageExtension(System::Security::Cryptography::OidCollection* enhKeyUsage_ = {}, System::Security::Cryptography::AsnDecodeStatus status_ = {}) noexcept : enhKeyUsage{enhKeyUsage_}, status{status_} {}
    // Deleting conversion operator: operator bool
    constexpr operator bool() const noexcept = delete;
    // public System.Void .ctor(System.Security.Cryptography.AsnEncodedData encodedEnhancedKeyUsages, System.Boolean critical)
    // Offset: 0x18512A4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static X509EnhancedKeyUsageExtension* New_ctor(System::Security::Cryptography::AsnEncodedData* encodedEnhancedKeyUsages, bool critical) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Security::Cryptography::X509Certificates::X509EnhancedKeyUsageExtension::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<X509EnhancedKeyUsageExtension*, creationType>(encodedEnhancedKeyUsages, critical)));
    }
    // System.Security.Cryptography.AsnDecodeStatus Decode(System.Byte[] extension)
    // Offset: 0x1851368
    System::Security::Cryptography::AsnDecodeStatus Decode(::Array<uint8_t>* extension);
    // public override System.Void CopyFrom(System.Security.Cryptography.AsnEncodedData asnEncodedData)
    // Offset: 0x18515D4
    // Implemented from: System.Security.Cryptography.X509Certificates.X509Extension
    // Base method: System.Void X509Extension::CopyFrom(System.Security.Cryptography.AsnEncodedData asnEncodedData)
    void CopyFrom(System::Security::Cryptography::AsnEncodedData* asnEncodedData);
    // override System.String ToString(System.Boolean multiLine)
    // Offset: 0x1851778
    // Implemented from: System.Security.Cryptography.AsnEncodedData
    // Base method: System.String AsnEncodedData::ToString(System.Boolean multiLine)
    ::Il2CppString* ToString(bool multiLine);
  }; // System.Security.Cryptography.X509Certificates.X509EnhancedKeyUsageExtension
  #pragma pack(pop)
  static check_size<sizeof(X509EnhancedKeyUsageExtension), 48 + sizeof(System::Security::Cryptography::AsnDecodeStatus)> __System_Security_Cryptography_X509Certificates_X509EnhancedKeyUsageExtensionSizeCheck;
  static_assert(sizeof(X509EnhancedKeyUsageExtension) == 0x34);
}
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::X509Certificates::X509EnhancedKeyUsageExtension*, "System.Security.Cryptography.X509Certificates", "X509EnhancedKeyUsageExtension");
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509EnhancedKeyUsageExtension::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509EnhancedKeyUsageExtension::Decode
// Il2CppName: Decode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Security::Cryptography::AsnDecodeStatus (System::Security::Cryptography::X509Certificates::X509EnhancedKeyUsageExtension::*)(::Array<uint8_t>*)>(&System::Security::Cryptography::X509Certificates::X509EnhancedKeyUsageExtension::Decode)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509EnhancedKeyUsageExtension*), "Decode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<uint8_t>*>()});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509EnhancedKeyUsageExtension::CopyFrom
// Il2CppName: CopyFrom
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::X509Certificates::X509EnhancedKeyUsageExtension::*)(System::Security::Cryptography::AsnEncodedData*)>(&System::Security::Cryptography::X509Certificates::X509EnhancedKeyUsageExtension::CopyFrom)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509EnhancedKeyUsageExtension*), "CopyFrom", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Security::Cryptography::AsnEncodedData*>()});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509EnhancedKeyUsageExtension::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Security::Cryptography::X509Certificates::X509EnhancedKeyUsageExtension::*)(bool)>(&System::Security::Cryptography::X509Certificates::X509EnhancedKeyUsageExtension::ToString)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509EnhancedKeyUsageExtension*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<bool>()});
  }
};
