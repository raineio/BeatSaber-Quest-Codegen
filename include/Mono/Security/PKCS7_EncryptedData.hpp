// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Mono.Security.PKCS7
#include "Mono/Security/PKCS7.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Mono::Security
namespace Mono::Security {
  // Forward declaring type: ASN1
  class ASN1;
}
// Completed forward declares
// Type namespace: Mono.Security
namespace Mono::Security {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Security.PKCS7/EncryptedData
  class PKCS7::EncryptedData : public ::Il2CppObject {
    public:
    // private System.Byte _version
    // Size: 0x1
    // Offset: 0x10
    uint8_t version;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // Padding between fields: version and: content
    char __padding0[0x7] = {};
    // private Mono.Security.PKCS7/ContentInfo _content
    // Size: 0x8
    // Offset: 0x18
    Mono::Security::PKCS7::ContentInfo* content;
    // Field size check
    static_assert(sizeof(Mono::Security::PKCS7::ContentInfo*) == 0x8);
    // private Mono.Security.PKCS7/ContentInfo _encryptionAlgorithm
    // Size: 0x8
    // Offset: 0x20
    Mono::Security::PKCS7::ContentInfo* encryptionAlgorithm;
    // Field size check
    static_assert(sizeof(Mono::Security::PKCS7::ContentInfo*) == 0x8);
    // private System.Byte[] _encrypted
    // Size: 0x8
    // Offset: 0x28
    ::Array<uint8_t>* encrypted;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // Creating value type constructor for type: EncryptedData
    EncryptedData(uint8_t version_ = {}, Mono::Security::PKCS7::ContentInfo* content_ = {}, Mono::Security::PKCS7::ContentInfo* encryptionAlgorithm_ = {}, ::Array<uint8_t>* encrypted_ = {}) noexcept : version{version_}, content{content_}, encryptionAlgorithm{encryptionAlgorithm_}, encrypted{encrypted_} {}
    // public System.Void .ctor(Mono.Security.ASN1 asn1)
    // Offset: 0x1D79538
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PKCS7::EncryptedData* New_ctor(Mono::Security::ASN1* asn1) {
      static auto ___internal__logger = ::Logger::get().WithContext("Mono::Security::PKCS7::EncryptedData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PKCS7::EncryptedData*, creationType>(asn1)));
    }
    // public Mono.Security.PKCS7/ContentInfo get_EncryptionAlgorithm()
    // Offset: 0x1D797EC
    Mono::Security::PKCS7::ContentInfo* get_EncryptionAlgorithm();
    // public System.Byte[] get_EncryptedContent()
    // Offset: 0x1D797F4
    ::Array<uint8_t>* get_EncryptedContent();
    // public System.Void .ctor()
    // Offset: 0x1D79510
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PKCS7::EncryptedData* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Mono::Security::PKCS7::EncryptedData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PKCS7::EncryptedData*, creationType>()));
    }
  }; // Mono.Security.PKCS7/EncryptedData
  #pragma pack(pop)
  static check_size<sizeof(PKCS7::EncryptedData), 40 + sizeof(::Array<uint8_t>*)> __Mono_Security_PKCS7_EncryptedDataSizeCheck;
  static_assert(sizeof(PKCS7::EncryptedData) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(Mono::Security::PKCS7::EncryptedData*, "Mono.Security", "PKCS7/EncryptedData");
// Writing MetadataGetter for method: Mono::Security::PKCS7::EncryptedData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Mono::Security::PKCS7::EncryptedData::get_EncryptionAlgorithm
// Il2CppName: get_EncryptionAlgorithm
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Mono::Security::PKCS7::ContentInfo* (Mono::Security::PKCS7::EncryptedData::*)()>(&Mono::Security::PKCS7::EncryptedData::get_EncryptionAlgorithm)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::PKCS7::EncryptedData*), "get_EncryptionAlgorithm", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::PKCS7::EncryptedData::get_EncryptedContent
// Il2CppName: get_EncryptedContent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<uint8_t>* (Mono::Security::PKCS7::EncryptedData::*)()>(&Mono::Security::PKCS7::EncryptedData::get_EncryptedContent)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::PKCS7::EncryptedData*), "get_EncryptedContent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::PKCS7::EncryptedData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
