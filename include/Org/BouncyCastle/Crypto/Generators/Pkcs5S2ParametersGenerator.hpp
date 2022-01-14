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
  // Forward declaring type: IMac
  class IMac;
  // Forward declaring type: IDigest
  class IDigest;
  // Forward declaring type: ICipherParameters
  class ICipherParameters;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Crypto.Generators
namespace Org::BouncyCastle::Crypto::Generators {
  // Forward declaring type: Pkcs5S2ParametersGenerator
  class Pkcs5S2ParametersGenerator;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(Org::BouncyCastle::Crypto::Generators::Pkcs5S2ParametersGenerator);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Generators::Pkcs5S2ParametersGenerator*, "Org.BouncyCastle.Crypto.Generators", "Pkcs5S2ParametersGenerator");
// Type namespace: Org.BouncyCastle.Crypto.Generators
namespace Org::BouncyCastle::Crypto::Generators {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Generators.Pkcs5S2ParametersGenerator
  // [TokenAttribute] Offset: FFFFFFFF
  class Pkcs5S2ParametersGenerator : public Org::BouncyCastle::Crypto::PbeParametersGenerator {
    public:
    // Writing base type padding for base size: 0x24 to desired offset: 0x28
    char ___base_padding[0x4] = {};
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private readonly Org.BouncyCastle.Crypto.IMac hMac
    // Size: 0x8
    // Offset: 0x28
    Org::BouncyCastle::Crypto::IMac* hMac;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Crypto::IMac*) == 0x8);
    // private readonly System.Byte[] state
    // Size: 0x8
    // Offset: 0x30
    ::ArrayW<uint8_t> state;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    public:
    // Get instance field reference: private readonly Org.BouncyCastle.Crypto.IMac hMac
    Org::BouncyCastle::Crypto::IMac*& dyn_hMac();
    // Get instance field reference: private readonly System.Byte[] state
    ::ArrayW<uint8_t>& dyn_state();
    // public System.Void .ctor(Org.BouncyCastle.Crypto.IDigest digest)
    // Offset: 0x1ABB7A8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Pkcs5S2ParametersGenerator* New_ctor(Org::BouncyCastle::Crypto::IDigest* digest) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Generators::Pkcs5S2ParametersGenerator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Pkcs5S2ParametersGenerator*, creationType>(digest)));
    }
    // private System.Void F(System.Byte[] S, System.Int32 c, System.Byte[] iBuf, System.Byte[] outBytes, System.Int32 outOff)
    // Offset: 0x1ABBA18
    void F(::ArrayW<uint8_t> S, int c, ::ArrayW<uint8_t> iBuf, ::ArrayW<uint8_t> outBytes, int outOff);
    // private System.Byte[] GenerateDerivedKey(System.Int32 dkLen)
    // Offset: 0x1ABBE20
    ::ArrayW<uint8_t> GenerateDerivedKey(int dkLen);
    // public override Org.BouncyCastle.Crypto.ICipherParameters GenerateDerivedParameters(System.String algorithm, System.Int32 keySize)
    // Offset: 0x1ABC050
    // Implemented from: Org.BouncyCastle.Crypto.PbeParametersGenerator
    // Base method: Org.BouncyCastle.Crypto.ICipherParameters PbeParametersGenerator::GenerateDerivedParameters(System.String algorithm, System.Int32 keySize)
    Org::BouncyCastle::Crypto::ICipherParameters* GenerateDerivedParameters(::StringW algorithm, int keySize);
    // public override Org.BouncyCastle.Crypto.ICipherParameters GenerateDerivedParameters(System.String algorithm, System.Int32 keySize, System.Int32 ivSize)
    // Offset: 0x1ABC0F8
    // Implemented from: Org.BouncyCastle.Crypto.PbeParametersGenerator
    // Base method: Org.BouncyCastle.Crypto.ICipherParameters PbeParametersGenerator::GenerateDerivedParameters(System.String algorithm, System.Int32 keySize, System.Int32 ivSize)
    Org::BouncyCastle::Crypto::ICipherParameters* GenerateDerivedParameters(::StringW algorithm, int keySize, int ivSize);
    // public override Org.BouncyCastle.Crypto.ICipherParameters GenerateDerivedMacParameters(System.Int32 keySize)
    // Offset: 0x1ABC1F8
    // Implemented from: Org.BouncyCastle.Crypto.PbeParametersGenerator
    // Base method: Org.BouncyCastle.Crypto.ICipherParameters PbeParametersGenerator::GenerateDerivedMacParameters(System.Int32 keySize)
    Org::BouncyCastle::Crypto::ICipherParameters* GenerateDerivedMacParameters(int keySize);
  }; // Org.BouncyCastle.Crypto.Generators.Pkcs5S2ParametersGenerator
  #pragma pack(pop)
  static check_size<sizeof(Pkcs5S2ParametersGenerator), 48 + sizeof(::ArrayW<uint8_t>)> __Org_BouncyCastle_Crypto_Generators_Pkcs5S2ParametersGeneratorSizeCheck;
  static_assert(sizeof(Pkcs5S2ParametersGenerator) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Generators::Pkcs5S2ParametersGenerator::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Generators::Pkcs5S2ParametersGenerator::F
// Il2CppName: F
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Generators::Pkcs5S2ParametersGenerator::*)(::ArrayW<uint8_t>, int, ::ArrayW<uint8_t>, ::ArrayW<uint8_t>, int)>(&Org::BouncyCastle::Crypto::Generators::Pkcs5S2ParametersGenerator::F)> {
  static const MethodInfo* get() {
    static auto* S = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* c = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* iBuf = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* outBytes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* outOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Generators::Pkcs5S2ParametersGenerator*), "F", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{S, c, iBuf, outBytes, outOff});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Generators::Pkcs5S2ParametersGenerator::GenerateDerivedKey
// Il2CppName: GenerateDerivedKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Org::BouncyCastle::Crypto::Generators::Pkcs5S2ParametersGenerator::*)(int)>(&Org::BouncyCastle::Crypto::Generators::Pkcs5S2ParametersGenerator::GenerateDerivedKey)> {
  static const MethodInfo* get() {
    static auto* dkLen = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Generators::Pkcs5S2ParametersGenerator*), "GenerateDerivedKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{dkLen});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Generators::Pkcs5S2ParametersGenerator::GenerateDerivedParameters
// Il2CppName: GenerateDerivedParameters
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Crypto::ICipherParameters* (Org::BouncyCastle::Crypto::Generators::Pkcs5S2ParametersGenerator::*)(::StringW, int)>(&Org::BouncyCastle::Crypto::Generators::Pkcs5S2ParametersGenerator::GenerateDerivedParameters)> {
  static const MethodInfo* get() {
    static auto* algorithm = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* keySize = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Generators::Pkcs5S2ParametersGenerator*), "GenerateDerivedParameters", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{algorithm, keySize});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Generators::Pkcs5S2ParametersGenerator::GenerateDerivedParameters
// Il2CppName: GenerateDerivedParameters
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Crypto::ICipherParameters* (Org::BouncyCastle::Crypto::Generators::Pkcs5S2ParametersGenerator::*)(::StringW, int, int)>(&Org::BouncyCastle::Crypto::Generators::Pkcs5S2ParametersGenerator::GenerateDerivedParameters)> {
  static const MethodInfo* get() {
    static auto* algorithm = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* keySize = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* ivSize = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Generators::Pkcs5S2ParametersGenerator*), "GenerateDerivedParameters", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{algorithm, keySize, ivSize});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Generators::Pkcs5S2ParametersGenerator::GenerateDerivedMacParameters
// Il2CppName: GenerateDerivedMacParameters
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Crypto::ICipherParameters* (Org::BouncyCastle::Crypto::Generators::Pkcs5S2ParametersGenerator::*)(int)>(&Org::BouncyCastle::Crypto::Generators::Pkcs5S2ParametersGenerator::GenerateDerivedMacParameters)> {
  static const MethodInfo* get() {
    static auto* keySize = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Generators::Pkcs5S2ParametersGenerator*), "GenerateDerivedMacParameters", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{keySize});
  }
};
