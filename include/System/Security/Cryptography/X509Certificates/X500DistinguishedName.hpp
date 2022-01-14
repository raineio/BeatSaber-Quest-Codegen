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
// Begin forward declares
// Forward declaring namespace: System::Security::Cryptography::X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Forward declaring type: X500DistinguishedNameFlags
  struct X500DistinguishedNameFlags;
}
// Completed forward declares
// Type namespace: System.Security.Cryptography.X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Forward declaring type: X500DistinguishedName
  class X500DistinguishedName;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(System::Security::Cryptography::X509Certificates::X500DistinguishedName);
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::X509Certificates::X500DistinguishedName*, "System.Security.Cryptography.X509Certificates", "X500DistinguishedName");
// Type namespace: System.Security.Cryptography.X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.Cryptography.X509Certificates.X500DistinguishedName
  // [TokenAttribute] Offset: FFFFFFFF
  // [MonoTODOAttribute] Offset: EAAF00
  class X500DistinguishedName : public System::Security::Cryptography::AsnEncodedData {
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
    // private System.String name
    // Size: 0x8
    // Offset: 0x20
    ::StringW name;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Byte[] canonEncoding
    // Size: 0x8
    // Offset: 0x28
    ::ArrayW<uint8_t> canonEncoding;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    public:
    // Get instance field reference: private System.String name
    ::StringW& dyn_name();
    // Get instance field reference: private System.Byte[] canonEncoding
    ::ArrayW<uint8_t>& dyn_canonEncoding();
    // public System.Void .ctor(System.Byte[] encodedDistinguishedName)
    // Offset: 0x19D4FCC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static X500DistinguishedName* New_ctor(::ArrayW<uint8_t> encodedDistinguishedName) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Security::Cryptography::X509Certificates::X500DistinguishedName::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<X500DistinguishedName*, creationType>(encodedDistinguishedName)));
    }
    // public System.String Decode(System.Security.Cryptography.X509Certificates.X500DistinguishedNameFlags flag)
    // Offset: 0x19D51B0
    ::StringW Decode(System::Security::Cryptography::X509Certificates::X500DistinguishedNameFlags flag);
    // static private System.String GetSeparator(System.Security.Cryptography.X509Certificates.X500DistinguishedNameFlags flag)
    // Offset: 0x19D52EC
    static ::StringW GetSeparator(System::Security::Cryptography::X509Certificates::X500DistinguishedNameFlags flag);
    // private System.Void DecodeRawData()
    // Offset: 0x19D50D4
    void DecodeRawData();
    // static private System.String Canonize(System.String s)
    // Offset: 0x19D53D0
    static ::StringW Canonize(::StringW s);
    // static System.Boolean AreEqual(System.Security.Cryptography.X509Certificates.X500DistinguishedName name1, System.Security.Cryptography.X509Certificates.X500DistinguishedName name2)
    // Offset: 0x19D5654
    static bool AreEqual(System::Security::Cryptography::X509Certificates::X500DistinguishedName* name1, System::Security::Cryptography::X509Certificates::X500DistinguishedName* name2);
    // public override System.String Format(System.Boolean multiLine)
    // Offset: 0x19D5360
    // Implemented from: System.Security.Cryptography.AsnEncodedData
    // Base method: System.String AsnEncodedData::Format(System.Boolean multiLine)
    ::StringW Format(bool multiLine);
  }; // System.Security.Cryptography.X509Certificates.X500DistinguishedName
  #pragma pack(pop)
  static check_size<sizeof(X500DistinguishedName), 40 + sizeof(::ArrayW<uint8_t>)> __System_Security_Cryptography_X509Certificates_X500DistinguishedNameSizeCheck;
  static_assert(sizeof(X500DistinguishedName) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X500DistinguishedName::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X500DistinguishedName::Decode
// Il2CppName: Decode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Security::Cryptography::X509Certificates::X500DistinguishedName::*)(System::Security::Cryptography::X509Certificates::X500DistinguishedNameFlags)>(&System::Security::Cryptography::X509Certificates::X500DistinguishedName::Decode)> {
  static const MethodInfo* get() {
    static auto* flag = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography.X509Certificates", "X500DistinguishedNameFlags")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X500DistinguishedName*), "Decode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{flag});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X500DistinguishedName::GetSeparator
// Il2CppName: GetSeparator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(System::Security::Cryptography::X509Certificates::X500DistinguishedNameFlags)>(&System::Security::Cryptography::X509Certificates::X500DistinguishedName::GetSeparator)> {
  static const MethodInfo* get() {
    static auto* flag = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography.X509Certificates", "X500DistinguishedNameFlags")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X500DistinguishedName*), "GetSeparator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{flag});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X500DistinguishedName::DecodeRawData
// Il2CppName: DecodeRawData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::X509Certificates::X500DistinguishedName::*)()>(&System::Security::Cryptography::X509Certificates::X500DistinguishedName::DecodeRawData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X500DistinguishedName*), "DecodeRawData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X500DistinguishedName::Canonize
// Il2CppName: Canonize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&System::Security::Cryptography::X509Certificates::X500DistinguishedName::Canonize)> {
  static const MethodInfo* get() {
    static auto* s = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X500DistinguishedName*), "Canonize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{s});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X500DistinguishedName::AreEqual
// Il2CppName: AreEqual
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(System::Security::Cryptography::X509Certificates::X500DistinguishedName*, System::Security::Cryptography::X509Certificates::X500DistinguishedName*)>(&System::Security::Cryptography::X509Certificates::X500DistinguishedName::AreEqual)> {
  static const MethodInfo* get() {
    static auto* name1 = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography.X509Certificates", "X500DistinguishedName")->byval_arg;
    static auto* name2 = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography.X509Certificates", "X500DistinguishedName")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X500DistinguishedName*), "AreEqual", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name1, name2});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X500DistinguishedName::Format
// Il2CppName: Format
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Security::Cryptography::X509Certificates::X500DistinguishedName::*)(bool)>(&System::Security::Cryptography::X509Certificates::X500DistinguishedName::Format)> {
  static const MethodInfo* get() {
    static auto* multiLine = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X500DistinguishedName*), "Format", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{multiLine});
  }
};
