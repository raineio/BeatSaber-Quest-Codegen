// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Org.BouncyCastle.Crypto.AsymmetricKeyParameter
#include "Org/BouncyCastle/Crypto/AsymmetricKeyParameter.hpp"
// Including type: Org.BouncyCastle.Math.EC.Rfc8032.Ed448
#include "Org/BouncyCastle/Math/EC/Rfc8032/Ed448.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Crypto::Parameters
namespace Org::BouncyCastle::Crypto::Parameters {
  // Forward declaring type: Ed448PublicKeyParameters
  class Ed448PublicKeyParameters;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Crypto.Parameters
namespace Org::BouncyCastle::Crypto::Parameters {
  // Forward declaring type: Ed448PrivateKeyParameters
  class Ed448PrivateKeyParameters;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Parameters::Ed448PrivateKeyParameters);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Parameters::Ed448PrivateKeyParameters*, "Org.BouncyCastle.Crypto.Parameters", "Ed448PrivateKeyParameters");
// Type namespace: Org.BouncyCastle.Crypto.Parameters
namespace Org::BouncyCastle::Crypto::Parameters {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Parameters.Ed448PrivateKeyParameters
  // [TokenAttribute] Offset: FFFFFFFF
  class Ed448PrivateKeyParameters : public ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter {
    public:
    // Writing base type padding for base size: 0x11 to desired offset: 0x18
    char ___base_padding[0x7] = {};
    public:
    // private readonly System.Byte[] data
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<uint8_t> data;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // private Org.BouncyCastle.Crypto.Parameters.Ed448PublicKeyParameters cachedPublicKey
    // Size: 0x8
    // Offset: 0x20
    ::Org::BouncyCastle::Crypto::Parameters::Ed448PublicKeyParameters* cachedPublicKey;
    // Field size check
    static_assert(sizeof(::Org::BouncyCastle::Crypto::Parameters::Ed448PublicKeyParameters*) == 0x8);
    public:
    // Deleting conversion operator: operator bool
    constexpr operator bool() const noexcept = delete;
    // Get static field: static public readonly System.Int32 KeySize
    static int _get_KeySize();
    // Set static field: static public readonly System.Int32 KeySize
    static void _set_KeySize(int value);
    // Get static field: static public readonly System.Int32 SignatureSize
    static int _get_SignatureSize();
    // Set static field: static public readonly System.Int32 SignatureSize
    static void _set_SignatureSize(int value);
    // Get instance field reference: private readonly System.Byte[] data
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn_data();
    // Get instance field reference: private Org.BouncyCastle.Crypto.Parameters.Ed448PublicKeyParameters cachedPublicKey
    [[deprecated("Use field access instead!")]] ::Org::BouncyCastle::Crypto::Parameters::Ed448PublicKeyParameters*& dyn_cachedPublicKey();
    // public System.Void .ctor(System.Byte[] buf, System.Int32 off)
    // Offset: 0x15F7D14
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Ed448PrivateKeyParameters* New_ctor(::ArrayW<uint8_t> buf, int off) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Org::BouncyCastle::Crypto::Parameters::Ed448PrivateKeyParameters::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Ed448PrivateKeyParameters*, creationType>(buf, off)));
    }
    // static private System.Void .cctor()
    // Offset: 0x15F8288
    static void _cctor();
    // public Org.BouncyCastle.Crypto.Parameters.Ed448PublicKeyParameters GeneratePublicKey()
    // Offset: 0x15F7DD4
    ::Org::BouncyCastle::Crypto::Parameters::Ed448PublicKeyParameters* GeneratePublicKey();
    // public System.Void Sign(Org.BouncyCastle.Math.EC.Rfc8032.Ed448/Org.BouncyCastle.Math.EC.Rfc8032.Algorithm algorithm, System.Byte[] ctx, System.Byte[] msg, System.Int32 msgOff, System.Int32 msgLen, System.Byte[] sig, System.Int32 sigOff)
    // Offset: 0x15F7FC4
    void Sign(::Org::BouncyCastle::Math::EC::Rfc8032::Ed448::Algorithm algorithm, ::ArrayW<uint8_t> ctx, ::ArrayW<uint8_t> msg, int msgOff, int msgLen, ::ArrayW<uint8_t> sig, int sigOff);
  }; // Org.BouncyCastle.Crypto.Parameters.Ed448PrivateKeyParameters
  #pragma pack(pop)
  static check_size<sizeof(Ed448PrivateKeyParameters), 32 + sizeof(::Org::BouncyCastle::Crypto::Parameters::Ed448PublicKeyParameters*)> __Org_BouncyCastle_Crypto_Parameters_Ed448PrivateKeyParametersSizeCheck;
  static_assert(sizeof(Ed448PrivateKeyParameters) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Parameters::Ed448PrivateKeyParameters::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Parameters::Ed448PrivateKeyParameters::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Org::BouncyCastle::Crypto::Parameters::Ed448PrivateKeyParameters::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Parameters::Ed448PrivateKeyParameters*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Parameters::Ed448PrivateKeyParameters::GeneratePublicKey
// Il2CppName: GeneratePublicKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::Parameters::Ed448PublicKeyParameters* (Org::BouncyCastle::Crypto::Parameters::Ed448PrivateKeyParameters::*)()>(&Org::BouncyCastle::Crypto::Parameters::Ed448PrivateKeyParameters::GeneratePublicKey)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Parameters::Ed448PrivateKeyParameters*), "GeneratePublicKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Parameters::Ed448PrivateKeyParameters::Sign
// Il2CppName: Sign
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Parameters::Ed448PrivateKeyParameters::*)(::Org::BouncyCastle::Math::EC::Rfc8032::Ed448::Algorithm, ::ArrayW<uint8_t>, ::ArrayW<uint8_t>, int, int, ::ArrayW<uint8_t>, int)>(&Org::BouncyCastle::Crypto::Parameters::Ed448PrivateKeyParameters::Sign)> {
  static const MethodInfo* get() {
    static auto* algorithm = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math.EC.Rfc8032", "Ed448/Algorithm")->byval_arg;
    static auto* ctx = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* msg = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* msgOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* msgLen = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* sig = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* sigOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Parameters::Ed448PrivateKeyParameters*), "Sign", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{algorithm, ctx, msg, msgOff, msgLen, sig, sigOff});
  }
};
