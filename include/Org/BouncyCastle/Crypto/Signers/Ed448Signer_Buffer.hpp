// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Org.BouncyCastle.Crypto.Signers.Ed448Signer
#include "Org/BouncyCastle/Crypto/Signers/Ed448Signer.hpp"
// Including type: System.IO.MemoryStream
#include "System/IO/MemoryStream.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Crypto::Parameters
namespace Org::BouncyCastle::Crypto::Parameters {
  // Forward declaring type: Ed448PrivateKeyParameters
  class Ed448PrivateKeyParameters;
}
// Completed forward declares
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(Org::BouncyCastle::Crypto::Signers::Ed448Signer::Buffer);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Signers::Ed448Signer::Buffer*, "Org.BouncyCastle.Crypto.Signers", "Ed448Signer/Buffer");
// Type namespace: Org.BouncyCastle.Crypto.Signers
namespace Org::BouncyCastle::Crypto::Signers {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Signers.Ed448Signer/Org.BouncyCastle.Crypto.Signers.Buffer
  // [TokenAttribute] Offset: FFFFFFFF
  class Ed448Signer::Buffer : public System::IO::MemoryStream {
    public:
    // System.Byte[] GenerateSignature(Org.BouncyCastle.Crypto.Parameters.Ed448PrivateKeyParameters privateKey, System.Byte[] ctx)
    // Offset: 0x13C17BC
    ::ArrayW<uint8_t> GenerateSignature(Org::BouncyCastle::Crypto::Parameters::Ed448PrivateKeyParameters* privateKey, ::ArrayW<uint8_t> ctx);
    // System.Void Reset()
    // Offset: 0x13C1934
    void Reset();
    // public System.Void .ctor()
    // Offset: 0x13C163C
    // Implemented from: System.IO.MemoryStream
    // Base method: System.Void MemoryStream::.ctor()
    // Base method: System.Void Stream::.ctor()
    // Base method: System.Void MarshalByRefObject::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Ed448Signer::Buffer* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Signers::Ed448Signer::Buffer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Ed448Signer::Buffer*, creationType>()));
    }
  }; // Org.BouncyCastle.Crypto.Signers.Ed448Signer/Org.BouncyCastle.Crypto.Signers.Buffer
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Signers::Ed448Signer::Buffer::GenerateSignature
// Il2CppName: GenerateSignature
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Org::BouncyCastle::Crypto::Signers::Ed448Signer::Buffer::*)(Org::BouncyCastle::Crypto::Parameters::Ed448PrivateKeyParameters*, ::ArrayW<uint8_t>)>(&Org::BouncyCastle::Crypto::Signers::Ed448Signer::Buffer::GenerateSignature)> {
  static const MethodInfo* get() {
    static auto* privateKey = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Crypto.Parameters", "Ed448PrivateKeyParameters")->byval_arg;
    static auto* ctx = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Signers::Ed448Signer::Buffer*), "GenerateSignature", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{privateKey, ctx});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Signers::Ed448Signer::Buffer::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Signers::Ed448Signer::Buffer::*)()>(&Org::BouncyCastle::Crypto::Signers::Ed448Signer::Buffer::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Signers::Ed448Signer::Buffer*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Signers::Ed448Signer::Buffer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
