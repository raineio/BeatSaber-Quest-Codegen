// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Org.BouncyCastle.Crypto.ICipherParameters
#include "Org/BouncyCastle/Crypto/ICipherParameters.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Crypto::Parameters
namespace Org::BouncyCastle::Crypto::Parameters {
  // Forward declaring type: KeyParameter
  class KeyParameter;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Crypto.Parameters
namespace Org::BouncyCastle::Crypto::Parameters {
  // Forward declaring type: AeadParameters
  class AeadParameters;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Parameters::AeadParameters);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Parameters::AeadParameters*, "Org.BouncyCastle.Crypto.Parameters", "AeadParameters");
// Type namespace: Org.BouncyCastle.Crypto.Parameters
namespace Org::BouncyCastle::Crypto::Parameters {
  // Size: 0x2C
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Parameters.AeadParameters
  // [TokenAttribute] Offset: FFFFFFFF
  class AeadParameters : public ::Il2CppObject/*, public ::Org::BouncyCastle::Crypto::ICipherParameters*/ {
    public:
    public:
    // private readonly System.Byte[] associatedText
    // Size: 0x8
    // Offset: 0x10
    ::ArrayW<uint8_t> associatedText;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // private readonly System.Byte[] nonce
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<uint8_t> nonce;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // private readonly Org.BouncyCastle.Crypto.Parameters.KeyParameter key
    // Size: 0x8
    // Offset: 0x20
    ::Org::BouncyCastle::Crypto::Parameters::KeyParameter* key;
    // Field size check
    static_assert(sizeof(::Org::BouncyCastle::Crypto::Parameters::KeyParameter*) == 0x8);
    // private readonly System.Int32 macSize
    // Size: 0x4
    // Offset: 0x28
    int macSize;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating interface conversion operator: operator ::Org::BouncyCastle::Crypto::ICipherParameters
    operator ::Org::BouncyCastle::Crypto::ICipherParameters() noexcept {
      return *reinterpret_cast<::Org::BouncyCastle::Crypto::ICipherParameters*>(this);
    }
    // Get instance field reference: private readonly System.Byte[] associatedText
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn_associatedText();
    // Get instance field reference: private readonly System.Byte[] nonce
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn_nonce();
    // Get instance field reference: private readonly Org.BouncyCastle.Crypto.Parameters.KeyParameter key
    [[deprecated("Use field access instead!")]] ::Org::BouncyCastle::Crypto::Parameters::KeyParameter*& dyn_key();
    // Get instance field reference: private readonly System.Int32 macSize
    [[deprecated("Use field access instead!")]] int& dyn_macSize();
    // public Org.BouncyCastle.Crypto.Parameters.KeyParameter get_Key()
    // Offset: 0x15F2F3C
    ::Org::BouncyCastle::Crypto::Parameters::KeyParameter* get_Key();
    // public System.Int32 get_MacSize()
    // Offset: 0x15F2F44
    int get_MacSize();
    // public System.Byte[] GetAssociatedText()
    // Offset: 0x15F2F4C
    ::ArrayW<uint8_t> GetAssociatedText();
    // public System.Byte[] GetNonce()
    // Offset: 0x15F2F54
    ::ArrayW<uint8_t> GetNonce();
  }; // Org.BouncyCastle.Crypto.Parameters.AeadParameters
  #pragma pack(pop)
  static check_size<sizeof(AeadParameters), 40 + sizeof(int)> __Org_BouncyCastle_Crypto_Parameters_AeadParametersSizeCheck;
  static_assert(sizeof(AeadParameters) == 0x2C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Parameters::AeadParameters::get_Key
// Il2CppName: get_Key
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::Parameters::KeyParameter* (Org::BouncyCastle::Crypto::Parameters::AeadParameters::*)()>(&Org::BouncyCastle::Crypto::Parameters::AeadParameters::get_Key)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Parameters::AeadParameters*), "get_Key", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Parameters::AeadParameters::get_MacSize
// Il2CppName: get_MacSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Parameters::AeadParameters::*)()>(&Org::BouncyCastle::Crypto::Parameters::AeadParameters::get_MacSize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Parameters::AeadParameters*), "get_MacSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Parameters::AeadParameters::GetAssociatedText
// Il2CppName: GetAssociatedText
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Org::BouncyCastle::Crypto::Parameters::AeadParameters::*)()>(&Org::BouncyCastle::Crypto::Parameters::AeadParameters::GetAssociatedText)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Parameters::AeadParameters*), "GetAssociatedText", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Parameters::AeadParameters::GetNonce
// Il2CppName: GetNonce
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Org::BouncyCastle::Crypto::Parameters::AeadParameters::*)()>(&Org::BouncyCastle::Crypto::Parameters::AeadParameters::GetNonce)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Parameters::AeadParameters*), "GetNonce", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
