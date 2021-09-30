// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Org.BouncyCastle.Crypto.Digests.KeccakDigest
#include "Org/BouncyCastle/Crypto/Digests/KeccakDigest.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Utilities
namespace Org::BouncyCastle::Utilities {
  // Skipping declaration: IMemoable because it is already included!
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Crypto.Digests
namespace Org::BouncyCastle::Crypto::Digests {
  // Size: 0x2D
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Digests.Sha3Digest
  // [TokenAttribute] Offset: FFFFFFFF
  class Sha3Digest : public Org::BouncyCastle::Crypto::Digests::KeccakDigest {
    public:
    // public System.Void .ctor(Org.BouncyCastle.Crypto.Digests.Sha3Digest source)
    // Offset: 0x1A9DE08
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Sha3Digest* New_ctor(Org::BouncyCastle::Crypto::Digests::Sha3Digest* source) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Digests::Sha3Digest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Sha3Digest*, creationType>(source)));
    }
    // static private System.Int32 CheckBitLength(System.Int32 bitLength)
    // Offset: 0x1A9DC94
    static int CheckBitLength(int bitLength);
    // public override System.String get_AlgorithmName()
    // Offset: 0x1A9DE80
    // Implemented from: Org.BouncyCastle.Crypto.Digests.KeccakDigest
    // Base method: System.String KeccakDigest::get_AlgorithmName()
    ::Il2CppString* get_AlgorithmName();
    // public System.Void .ctor(System.Int32 bitLength)
    // Offset: 0x1A9DD80
    // Implemented from: Org.BouncyCastle.Crypto.Digests.KeccakDigest
    // Base method: System.Void KeccakDigest::.ctor(System.Int32 bitLength)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Sha3Digest* New_ctor(int bitLength) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Digests::Sha3Digest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Sha3Digest*, creationType>(bitLength)));
    }
    // public override System.Int32 DoFinal(System.Byte[] output, System.Int32 outOff)
    // Offset: 0x1A9DF00
    // Implemented from: Org.BouncyCastle.Crypto.Digests.KeccakDigest
    // Base method: System.Int32 KeccakDigest::DoFinal(System.Byte[] output, System.Int32 outOff)
    int DoFinal(::ArrayW<uint8_t> output, int outOff);
    // public override Org.BouncyCastle.Utilities.IMemoable Copy()
    // Offset: 0x1A9DF4C
    // Implemented from: Org.BouncyCastle.Crypto.Digests.KeccakDigest
    // Base method: Org.BouncyCastle.Utilities.IMemoable KeccakDigest::Copy()
    Org::BouncyCastle::Utilities::IMemoable* Copy();
  }; // Org.BouncyCastle.Crypto.Digests.Sha3Digest
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Digests::Sha3Digest*, "Org.BouncyCastle.Crypto.Digests", "Sha3Digest");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::Sha3Digest::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::Sha3Digest::CheckBitLength
// Il2CppName: CheckBitLength
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(int)>(&Org::BouncyCastle::Crypto::Digests::Sha3Digest::CheckBitLength)> {
  static const MethodInfo* get() {
    static auto* bitLength = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::Sha3Digest*), "CheckBitLength", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bitLength});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::Sha3Digest::get_AlgorithmName
// Il2CppName: get_AlgorithmName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (Org::BouncyCastle::Crypto::Digests::Sha3Digest::*)()>(&Org::BouncyCastle::Crypto::Digests::Sha3Digest::get_AlgorithmName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::Sha3Digest*), "get_AlgorithmName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::Sha3Digest::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::Sha3Digest::DoFinal
// Il2CppName: DoFinal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Digests::Sha3Digest::*)(::ArrayW<uint8_t>, int)>(&Org::BouncyCastle::Crypto::Digests::Sha3Digest::DoFinal)> {
  static const MethodInfo* get() {
    static auto* output = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* outOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::Sha3Digest*), "DoFinal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{output, outOff});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::Sha3Digest::Copy
// Il2CppName: Copy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Utilities::IMemoable* (Org::BouncyCastle::Crypto::Digests::Sha3Digest::*)()>(&Org::BouncyCastle::Crypto::Digests::Sha3Digest::Copy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::Sha3Digest*), "Copy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
