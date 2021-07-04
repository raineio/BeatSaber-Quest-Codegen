// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Crypto.AsymmetricKeyParameter
#include "Org/BouncyCastle/Crypto/AsymmetricKeyParameter.hpp"
// Including type: Org.BouncyCastle.Math.EC.Rfc8032.Ed448
#include "Org/BouncyCastle/Math/EC/Rfc8032/Ed448.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
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
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Parameters.Ed448PrivateKeyParameters
  class Ed448PrivateKeyParameters : public Org::BouncyCastle::Crypto::AsymmetricKeyParameter {
    public:
    // Writing base type padding for base size: 0x11 to desired offset: 0x18
    char ___base_padding[0x7] = {};
    // private readonly System.Byte[] data
    // Size: 0x8
    // Offset: 0x18
    ::Array<uint8_t>* data;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private Org.BouncyCastle.Crypto.Parameters.Ed448PublicKeyParameters cachedPublicKey
    // Size: 0x8
    // Offset: 0x20
    Org::BouncyCastle::Crypto::Parameters::Ed448PublicKeyParameters* cachedPublicKey;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Crypto::Parameters::Ed448PublicKeyParameters*) == 0x8);
    // Creating value type constructor for type: Ed448PrivateKeyParameters
    Ed448PrivateKeyParameters(::Array<uint8_t>* data_ = {}, Org::BouncyCastle::Crypto::Parameters::Ed448PublicKeyParameters* cachedPublicKey_ = {}) noexcept : data{data_}, cachedPublicKey{cachedPublicKey_} {}
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
    // public System.Void .ctor(System.Byte[] buf, System.Int32 off)
    // Offset: 0x125BEB0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Ed448PrivateKeyParameters* New_ctor(::Array<uint8_t>* buf, int off) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Parameters::Ed448PrivateKeyParameters::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Ed448PrivateKeyParameters*, creationType>(buf, off)));
    }
    // public Org.BouncyCastle.Crypto.Parameters.Ed448PublicKeyParameters GeneratePublicKey()
    // Offset: 0x125BF70
    Org::BouncyCastle::Crypto::Parameters::Ed448PublicKeyParameters* GeneratePublicKey();
    // public System.Void Sign(Org.BouncyCastle.Math.EC.Rfc8032.Ed448/Algorithm algorithm, System.Byte[] ctx, System.Byte[] msg, System.Int32 msgOff, System.Int32 msgLen, System.Byte[] sig, System.Int32 sigOff)
    // Offset: 0x125C160
    void Sign(Org::BouncyCastle::Math::EC::Rfc8032::Ed448::Algorithm algorithm, ::Array<uint8_t>* ctx, ::Array<uint8_t>* msg, int msgOff, int msgLen, ::Array<uint8_t>* sig, int sigOff);
    // static private System.Void .cctor()
    // Offset: 0x125C424
    static void _cctor();
  }; // Org.BouncyCastle.Crypto.Parameters.Ed448PrivateKeyParameters
  #pragma pack(pop)
  static check_size<sizeof(Ed448PrivateKeyParameters), 32 + sizeof(Org::BouncyCastle::Crypto::Parameters::Ed448PublicKeyParameters*)> __Org_BouncyCastle_Crypto_Parameters_Ed448PrivateKeyParametersSizeCheck;
  static_assert(sizeof(Ed448PrivateKeyParameters) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Parameters::Ed448PrivateKeyParameters*, "Org.BouncyCastle.Crypto.Parameters", "Ed448PrivateKeyParameters");
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Parameters::Ed448PrivateKeyParameters::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Parameters::Ed448PrivateKeyParameters::GeneratePublicKey
// Il2CppName: GeneratePublicKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Crypto::Parameters::Ed448PublicKeyParameters* (Org::BouncyCastle::Crypto::Parameters::Ed448PrivateKeyParameters::*)()>(&Org::BouncyCastle::Crypto::Parameters::Ed448PrivateKeyParameters::GeneratePublicKey)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Parameters::Ed448PrivateKeyParameters*), "GeneratePublicKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Parameters::Ed448PrivateKeyParameters::Sign
// Il2CppName: Sign
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Parameters::Ed448PrivateKeyParameters::*)(Org::BouncyCastle::Math::EC::Rfc8032::Ed448::Algorithm, ::Array<uint8_t>*, ::Array<uint8_t>*, int, int, ::Array<uint8_t>*, int)>(&Org::BouncyCastle::Crypto::Parameters::Ed448PrivateKeyParameters::Sign)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Parameters::Ed448PrivateKeyParameters*), "Sign", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<Org::BouncyCastle::Math::EC::Rfc8032::Ed448::Algorithm>(), ::il2cpp_utils::ExtractIndependentType<::Array<uint8_t>*>(), ::il2cpp_utils::ExtractIndependentType<::Array<uint8_t>*>(), ::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<::Array<uint8_t>*>(), ::il2cpp_utils::ExtractIndependentType<int>()});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Parameters::Ed448PrivateKeyParameters::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Org::BouncyCastle::Crypto::Parameters::Ed448PrivateKeyParameters::_cctor)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Parameters::Ed448PrivateKeyParameters*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
