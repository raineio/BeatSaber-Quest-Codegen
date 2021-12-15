// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Org.BouncyCastle.Crypto.ICipherParameters
#include "Org/BouncyCastle/Crypto/ICipherParameters.hpp"
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
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
  // Forward declaring type: TweakableBlockCipherParameters
  class TweakableBlockCipherParameters;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(Org::BouncyCastle::Crypto::Parameters::TweakableBlockCipherParameters);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Parameters::TweakableBlockCipherParameters*, "Org.BouncyCastle.Crypto.Parameters", "TweakableBlockCipherParameters");
// Type namespace: Org.BouncyCastle.Crypto.Parameters
namespace Org::BouncyCastle::Crypto::Parameters {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Parameters.TweakableBlockCipherParameters
  // [TokenAttribute] Offset: FFFFFFFF
  class TweakableBlockCipherParameters : public ::Il2CppObject/*, public Org::BouncyCastle::Crypto::ICipherParameters*/ {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private readonly System.Byte[] tweak
    // Size: 0x8
    // Offset: 0x10
    ::ArrayW<uint8_t> tweak;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // private readonly Org.BouncyCastle.Crypto.Parameters.KeyParameter key
    // Size: 0x8
    // Offset: 0x18
    Org::BouncyCastle::Crypto::Parameters::KeyParameter* key;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Crypto::Parameters::KeyParameter*) == 0x8);
    public:
    // Creating interface conversion operator: operator Org::BouncyCastle::Crypto::ICipherParameters
    operator Org::BouncyCastle::Crypto::ICipherParameters() noexcept {
      return *reinterpret_cast<Org::BouncyCastle::Crypto::ICipherParameters*>(this);
    }
    // Get instance field reference: private readonly System.Byte[] tweak
    ::ArrayW<uint8_t>& dyn_tweak();
    // Get instance field reference: private readonly Org.BouncyCastle.Crypto.Parameters.KeyParameter key
    Org::BouncyCastle::Crypto::Parameters::KeyParameter*& dyn_key();
    // public Org.BouncyCastle.Crypto.Parameters.KeyParameter get_Key()
    // Offset: 0x13BCD44
    Org::BouncyCastle::Crypto::Parameters::KeyParameter* get_Key();
    // public System.Byte[] get_Tweak()
    // Offset: 0x13BCD4C
    ::ArrayW<uint8_t> get_Tweak();
  }; // Org.BouncyCastle.Crypto.Parameters.TweakableBlockCipherParameters
  #pragma pack(pop)
  static check_size<sizeof(TweakableBlockCipherParameters), 24 + sizeof(Org::BouncyCastle::Crypto::Parameters::KeyParameter*)> __Org_BouncyCastle_Crypto_Parameters_TweakableBlockCipherParametersSizeCheck;
  static_assert(sizeof(TweakableBlockCipherParameters) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Parameters::TweakableBlockCipherParameters::get_Key
// Il2CppName: get_Key
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Crypto::Parameters::KeyParameter* (Org::BouncyCastle::Crypto::Parameters::TweakableBlockCipherParameters::*)()>(&Org::BouncyCastle::Crypto::Parameters::TweakableBlockCipherParameters::get_Key)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Parameters::TweakableBlockCipherParameters*), "get_Key", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Parameters::TweakableBlockCipherParameters::get_Tweak
// Il2CppName: get_Tweak
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Org::BouncyCastle::Crypto::Parameters::TweakableBlockCipherParameters::*)()>(&Org::BouncyCastle::Crypto::Parameters::TweakableBlockCipherParameters::get_Tweak)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Parameters::TweakableBlockCipherParameters*), "get_Tweak", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
