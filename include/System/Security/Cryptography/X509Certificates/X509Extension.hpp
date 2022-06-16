// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Security.Cryptography.AsnEncodedData
#include "System/Security/Cryptography/AsnEncodedData.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: System.Security.Cryptography.X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Forward declaring type: X509Extension
  class X509Extension;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Security::Cryptography::X509Certificates::X509Extension);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::X509Certificates::X509Extension*, "System.Security.Cryptography.X509Certificates", "X509Extension");
// Type namespace: System.Security.Cryptography.X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Size: 0x21
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.Cryptography.X509Certificates.X509Extension
  // [TokenAttribute] Offset: FFFFFFFF
  class X509Extension : public ::System::Security::Cryptography::AsnEncodedData {
    public:
    public:
    // private System.Boolean _critical
    // Size: 0x1
    // Offset: 0x20
    bool critical;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating conversion operator: operator bool
    constexpr operator bool() const noexcept {
      return critical;
    }
    // Get instance field reference: private System.Boolean _critical
    [[deprecated("Use field access instead!")]] bool& dyn__critical();
    // public System.Boolean get_Critical()
    // Offset: 0x1BEE8E8
    bool get_Critical();
    // public System.Void set_Critical(System.Boolean value)
    // Offset: 0x1BEE8F0
    void set_Critical(bool value);
    // public System.Void .ctor(System.String oid, System.Byte[] rawData, System.Boolean critical)
    // Offset: 0x1BEE8B8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static X509Extension* New_ctor(::StringW oid, ::ArrayW<uint8_t> rawData, bool critical) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Security::Cryptography::X509Certificates::X509Extension::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<X509Extension*, creationType>(oid, rawData, critical)));
    }
    // System.String FormatUnkownData(System.Byte[] data)
    // Offset: 0x1BE2A50
    ::StringW FormatUnkownData(::ArrayW<uint8_t> data);
    // protected System.Void .ctor()
    // Offset: 0x1BE1FB8
    // Implemented from: System.Security.Cryptography.AsnEncodedData
    // Base method: System.Void AsnEncodedData::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static X509Extension* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Security::Cryptography::X509Certificates::X509Extension::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<X509Extension*, creationType>()));
    }
    // public override System.Void CopyFrom(System.Security.Cryptography.AsnEncodedData asnEncodedData)
    // Offset: 0x1BEE8FC
    // Implemented from: System.Security.Cryptography.AsnEncodedData
    // Base method: System.Void AsnEncodedData::CopyFrom(System.Security.Cryptography.AsnEncodedData asnEncodedData)
    void CopyFrom(::System::Security::Cryptography::AsnEncodedData* asnEncodedData);
  }; // System.Security.Cryptography.X509Certificates.X509Extension
  #pragma pack(pop)
  static check_size<sizeof(X509Extension), 32 + sizeof(bool)> __System_Security_Cryptography_X509Certificates_X509ExtensionSizeCheck;
  static_assert(sizeof(X509Extension) == 0x21);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Extension::get_Critical
// Il2CppName: get_Critical
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Security::Cryptography::X509Certificates::X509Extension::*)()>(&System::Security::Cryptography::X509Certificates::X509Extension::get_Critical)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509Extension*), "get_Critical", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Extension::set_Critical
// Il2CppName: set_Critical
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::X509Certificates::X509Extension::*)(bool)>(&System::Security::Cryptography::X509Certificates::X509Extension::set_Critical)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509Extension*), "set_Critical", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Extension::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Extension::FormatUnkownData
// Il2CppName: FormatUnkownData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Security::Cryptography::X509Certificates::X509Extension::*)(::ArrayW<uint8_t>)>(&System::Security::Cryptography::X509Certificates::X509Extension::FormatUnkownData)> {
  static const MethodInfo* get() {
    static auto* data = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509Extension*), "FormatUnkownData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Extension::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Extension::CopyFrom
// Il2CppName: CopyFrom
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::X509Certificates::X509Extension::*)(::System::Security::Cryptography::AsnEncodedData*)>(&System::Security::Cryptography::X509Certificates::X509Extension::CopyFrom)> {
  static const MethodInfo* get() {
    static auto* asnEncodedData = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography", "AsnEncodedData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509Extension*), "CopyFrom", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{asnEncodedData});
  }
};
