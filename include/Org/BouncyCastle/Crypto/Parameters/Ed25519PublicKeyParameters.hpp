// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Org.BouncyCastle.Crypto.AsymmetricKeyParameter
#include "Org/BouncyCastle/Crypto/AsymmetricKeyParameter.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Type namespace: Org.BouncyCastle.Crypto.Parameters
namespace Org::BouncyCastle::Crypto::Parameters {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Parameters.Ed25519PublicKeyParameters
  // [TokenAttribute] Offset: FFFFFFFF
  class Ed25519PublicKeyParameters : public Org::BouncyCastle::Crypto::AsymmetricKeyParameter {
    public:
    // Writing base type padding for base size: 0x11 to desired offset: 0x18
    char ___base_padding[0x7] = {};
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    private:
    #endif
    // private readonly System.Byte[] data
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<uint8_t> data;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    public:
    // Deleting conversion operator: operator bool
    constexpr operator bool() const noexcept = delete;
    // Get static field: static public readonly System.Int32 KeySize
    static int _get_KeySize();
    // Set static field: static public readonly System.Int32 KeySize
    static void _set_KeySize(int value);
    // Get instance field reference: private readonly System.Byte[] data
    ::ArrayW<uint8_t>& dyn_data();
    // public System.Void .ctor(System.Byte[] buf, System.Int32 off)
    // Offset: 0x1395724
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Ed25519PublicKeyParameters* New_ctor(::ArrayW<uint8_t> buf, int off) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Parameters::Ed25519PublicKeyParameters::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Ed25519PublicKeyParameters*, creationType>(buf, off)));
    }
    // static private System.Void .cctor()
    // Offset: 0x1395BA0
    static void _cctor();
    // public System.Void Encode(System.Byte[] buf, System.Int32 off)
    // Offset: 0x1395A78
    void Encode(::ArrayW<uint8_t> buf, int off);
  }; // Org.BouncyCastle.Crypto.Parameters.Ed25519PublicKeyParameters
  #pragma pack(pop)
  static check_size<sizeof(Ed25519PublicKeyParameters), 24 + sizeof(::ArrayW<uint8_t>)> __Org_BouncyCastle_Crypto_Parameters_Ed25519PublicKeyParametersSizeCheck;
  static_assert(sizeof(Ed25519PublicKeyParameters) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Parameters::Ed25519PublicKeyParameters*, "Org.BouncyCastle.Crypto.Parameters", "Ed25519PublicKeyParameters");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Parameters::Ed25519PublicKeyParameters::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Parameters::Ed25519PublicKeyParameters::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Org::BouncyCastle::Crypto::Parameters::Ed25519PublicKeyParameters::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Parameters::Ed25519PublicKeyParameters*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Parameters::Ed25519PublicKeyParameters::Encode
// Il2CppName: Encode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Parameters::Ed25519PublicKeyParameters::*)(::ArrayW<uint8_t>, int)>(&Org::BouncyCastle::Crypto::Parameters::Ed25519PublicKeyParameters::Encode)> {
  static const MethodInfo* get() {
    static auto* buf = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* off = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Parameters::Ed25519PublicKeyParameters*), "Encode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buf, off});
  }
};
