// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Org.BouncyCastle.Crypto.PbeParametersGenerator
#include "Org/BouncyCastle/Crypto/PbeParametersGenerator.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Crypto
namespace Org::BouncyCastle::Crypto {
  // Forward declaring type: IDigest
  class IDigest;
  // Forward declaring type: ICipherParameters
  class ICipherParameters;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Crypto.Generators
namespace Org::BouncyCastle::Crypto::Generators {
  // Forward declaring type: Pkcs5S1ParametersGenerator
  class Pkcs5S1ParametersGenerator;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Generators::Pkcs5S1ParametersGenerator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Generators::Pkcs5S1ParametersGenerator*, "Org.BouncyCastle.Crypto.Generators", "Pkcs5S1ParametersGenerator");
// Type namespace: Org.BouncyCastle.Crypto.Generators
namespace Org::BouncyCastle::Crypto::Generators {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Generators.Pkcs5S1ParametersGenerator
  // [TokenAttribute] Offset: FFFFFFFF
  class Pkcs5S1ParametersGenerator : public ::Org::BouncyCastle::Crypto::PbeParametersGenerator {
    public:
    // Writing base type padding for base size: 0x24 to desired offset: 0x28
    char ___base_padding[0x4] = {};
    public:
    // private readonly Org.BouncyCastle.Crypto.IDigest digest
    // Size: 0x8
    // Offset: 0x28
    ::Org::BouncyCastle::Crypto::IDigest* digest;
    // Field size check
    static_assert(sizeof(::Org::BouncyCastle::Crypto::IDigest*) == 0x8);
    public:
    // Creating conversion operator: operator ::Org::BouncyCastle::Crypto::IDigest*
    constexpr operator ::Org::BouncyCastle::Crypto::IDigest*() const noexcept {
      return digest;
    }
    // Get instance field reference: private readonly Org.BouncyCastle.Crypto.IDigest digest
    [[deprecated("Use field access instead!")]] ::Org::BouncyCastle::Crypto::IDigest*& dyn_digest();
    // public System.Void .ctor(Org.BouncyCastle.Crypto.IDigest digest)
    // Offset: 0x1EB5268
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Pkcs5S1ParametersGenerator* New_ctor(::Org::BouncyCastle::Crypto::IDigest* digest) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Org::BouncyCastle::Crypto::Generators::Pkcs5S1ParametersGenerator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Pkcs5S1ParametersGenerator*, creationType>(digest)));
    }
    // private System.Byte[] GenerateDerivedKey()
    // Offset: 0x1EB5294
    ::ArrayW<uint8_t> GenerateDerivedKey();
    // public override Org.BouncyCastle.Crypto.ICipherParameters GenerateDerivedParameters(System.String algorithm, System.Int32 keySize)
    // Offset: 0x1EB560C
    // Implemented from: Org.BouncyCastle.Crypto.PbeParametersGenerator
    // Base method: Org.BouncyCastle.Crypto.ICipherParameters PbeParametersGenerator::GenerateDerivedParameters(System.String algorithm, System.Int32 keySize)
    ::Org::BouncyCastle::Crypto::ICipherParameters* GenerateDerivedParameters(::StringW algorithm, int keySize);
    // public override Org.BouncyCastle.Crypto.ICipherParameters GenerateDerivedParameters(System.String algorithm, System.Int32 keySize, System.Int32 ivSize)
    // Offset: 0x1EB57B4
    // Implemented from: Org.BouncyCastle.Crypto.PbeParametersGenerator
    // Base method: Org.BouncyCastle.Crypto.ICipherParameters PbeParametersGenerator::GenerateDerivedParameters(System.String algorithm, System.Int32 keySize, System.Int32 ivSize)
    ::Org::BouncyCastle::Crypto::ICipherParameters* GenerateDerivedParameters(::StringW algorithm, int keySize, int ivSize);
    // public override Org.BouncyCastle.Crypto.ICipherParameters GenerateDerivedMacParameters(System.Int32 keySize)
    // Offset: 0x1EB59B0
    // Implemented from: Org.BouncyCastle.Crypto.PbeParametersGenerator
    // Base method: Org.BouncyCastle.Crypto.ICipherParameters PbeParametersGenerator::GenerateDerivedMacParameters(System.Int32 keySize)
    ::Org::BouncyCastle::Crypto::ICipherParameters* GenerateDerivedMacParameters(int keySize);
  }; // Org.BouncyCastle.Crypto.Generators.Pkcs5S1ParametersGenerator
  #pragma pack(pop)
  static check_size<sizeof(Pkcs5S1ParametersGenerator), 40 + sizeof(::Org::BouncyCastle::Crypto::IDigest*)> __Org_BouncyCastle_Crypto_Generators_Pkcs5S1ParametersGeneratorSizeCheck;
  static_assert(sizeof(Pkcs5S1ParametersGenerator) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Generators::Pkcs5S1ParametersGenerator::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Generators::Pkcs5S1ParametersGenerator::GenerateDerivedKey
// Il2CppName: GenerateDerivedKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Org::BouncyCastle::Crypto::Generators::Pkcs5S1ParametersGenerator::*)()>(&Org::BouncyCastle::Crypto::Generators::Pkcs5S1ParametersGenerator::GenerateDerivedKey)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Generators::Pkcs5S1ParametersGenerator*), "GenerateDerivedKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Generators::Pkcs5S1ParametersGenerator::GenerateDerivedParameters
// Il2CppName: GenerateDerivedParameters
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::ICipherParameters* (Org::BouncyCastle::Crypto::Generators::Pkcs5S1ParametersGenerator::*)(::StringW, int)>(&Org::BouncyCastle::Crypto::Generators::Pkcs5S1ParametersGenerator::GenerateDerivedParameters)> {
  static const MethodInfo* get() {
    static auto* algorithm = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* keySize = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Generators::Pkcs5S1ParametersGenerator*), "GenerateDerivedParameters", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{algorithm, keySize});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Generators::Pkcs5S1ParametersGenerator::GenerateDerivedParameters
// Il2CppName: GenerateDerivedParameters
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::ICipherParameters* (Org::BouncyCastle::Crypto::Generators::Pkcs5S1ParametersGenerator::*)(::StringW, int, int)>(&Org::BouncyCastle::Crypto::Generators::Pkcs5S1ParametersGenerator::GenerateDerivedParameters)> {
  static const MethodInfo* get() {
    static auto* algorithm = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* keySize = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* ivSize = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Generators::Pkcs5S1ParametersGenerator*), "GenerateDerivedParameters", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{algorithm, keySize, ivSize});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Generators::Pkcs5S1ParametersGenerator::GenerateDerivedMacParameters
// Il2CppName: GenerateDerivedMacParameters
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::ICipherParameters* (Org::BouncyCastle::Crypto::Generators::Pkcs5S1ParametersGenerator::*)(int)>(&Org::BouncyCastle::Crypto::Generators::Pkcs5S1ParametersGenerator::GenerateDerivedMacParameters)> {
  static const MethodInfo* get() {
    static auto* keySize = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Generators::Pkcs5S1ParametersGenerator*), "GenerateDerivedMacParameters", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{keySize});
  }
};
