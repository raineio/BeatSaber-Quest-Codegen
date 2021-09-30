// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Org.BouncyCastle.Crypto.Signers.Ed25519Signer
#include "Org/BouncyCastle/Crypto/Signers/Ed25519Signer.hpp"
// Including type: System.IO.MemoryStream
#include "System/IO/MemoryStream.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Crypto::Parameters
namespace Org::BouncyCastle::Crypto::Parameters {
  // Forward declaring type: Ed25519PrivateKeyParameters
  class Ed25519PrivateKeyParameters;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Crypto.Signers
namespace Org::BouncyCastle::Crypto::Signers {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Signers.Ed25519Signer/Org.BouncyCastle.Crypto.Signers.Buffer
  // [TokenAttribute] Offset: FFFFFFFF
  class Ed25519Signer::Buffer : public System::IO::MemoryStream {
    public:
    // System.Byte[] GenerateSignature(Org.BouncyCastle.Crypto.Parameters.Ed25519PrivateKeyParameters privateKey)
    // Offset: 0x139C090
    ::ArrayW<uint8_t> GenerateSignature(Org::BouncyCastle::Crypto::Parameters::Ed25519PrivateKeyParameters* privateKey);
    // System.Void Reset()
    // Offset: 0x139C204
    void Reset();
    // public System.Void .ctor()
    // Offset: 0x139BF14
    // Implemented from: System.IO.MemoryStream
    // Base method: System.Void MemoryStream::.ctor()
    // Base method: System.Void Stream::.ctor()
    // Base method: System.Void MarshalByRefObject::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Ed25519Signer::Buffer* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Signers::Ed25519Signer::Buffer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Ed25519Signer::Buffer*, creationType>()));
    }
  }; // Org.BouncyCastle.Crypto.Signers.Ed25519Signer/Org.BouncyCastle.Crypto.Signers.Buffer
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Signers::Ed25519Signer::Buffer*, "Org.BouncyCastle.Crypto.Signers", "Ed25519Signer/Buffer");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Signers::Ed25519Signer::Buffer::GenerateSignature
// Il2CppName: GenerateSignature
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Org::BouncyCastle::Crypto::Signers::Ed25519Signer::Buffer::*)(Org::BouncyCastle::Crypto::Parameters::Ed25519PrivateKeyParameters*)>(&Org::BouncyCastle::Crypto::Signers::Ed25519Signer::Buffer::GenerateSignature)> {
  static const MethodInfo* get() {
    static auto* privateKey = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Crypto.Parameters", "Ed25519PrivateKeyParameters")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Signers::Ed25519Signer::Buffer*), "GenerateSignature", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{privateKey});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Signers::Ed25519Signer::Buffer::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Signers::Ed25519Signer::Buffer::*)()>(&Org::BouncyCastle::Crypto::Signers::Ed25519Signer::Buffer::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Signers::Ed25519Signer::Buffer*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Signers::Ed25519Signer::Buffer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
