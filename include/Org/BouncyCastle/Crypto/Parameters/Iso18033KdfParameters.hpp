// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Org.BouncyCastle.Crypto.IDerivationParameters
#include "Org/BouncyCastle/Crypto/IDerivationParameters.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Type namespace: Org.BouncyCastle.Crypto.Parameters
namespace Org::BouncyCastle::Crypto::Parameters {
  // Forward declaring type: Iso18033KdfParameters
  class Iso18033KdfParameters;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Parameters::Iso18033KdfParameters);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Parameters::Iso18033KdfParameters*, "Org.BouncyCastle.Crypto.Parameters", "Iso18033KdfParameters");
// Type namespace: Org.BouncyCastle.Crypto.Parameters
namespace Org::BouncyCastle::Crypto::Parameters {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Parameters.Iso18033KdfParameters
  // [TokenAttribute] Offset: FFFFFFFF
  class Iso18033KdfParameters : public ::Il2CppObject/*, public ::Org::BouncyCastle::Crypto::IDerivationParameters*/ {
    public:
    public:
    // private System.Byte[] seed
    // Size: 0x8
    // Offset: 0x10
    ::ArrayW<uint8_t> seed;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    public:
    // Creating interface conversion operator: operator ::Org::BouncyCastle::Crypto::IDerivationParameters
    operator ::Org::BouncyCastle::Crypto::IDerivationParameters() noexcept {
      return *reinterpret_cast<::Org::BouncyCastle::Crypto::IDerivationParameters*>(this);
    }
    // Creating interface conversion operator: i_IDerivationParameters
    inline ::Org::BouncyCastle::Crypto::IDerivationParameters* i_IDerivationParameters() noexcept {
      return reinterpret_cast<::Org::BouncyCastle::Crypto::IDerivationParameters*>(this);
    }
    // Creating conversion operator: operator ::ArrayW<uint8_t>
    constexpr operator ::ArrayW<uint8_t>() const noexcept {
      return seed;
    }
    // Get instance field reference: private System.Byte[] seed
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn_seed();
    // public System.Byte[] GetSeed()
    // Offset: 0x166C7C0
    ::ArrayW<uint8_t> GetSeed();
  }; // Org.BouncyCastle.Crypto.Parameters.Iso18033KdfParameters
  #pragma pack(pop)
  static check_size<sizeof(Iso18033KdfParameters), 16 + sizeof(::ArrayW<uint8_t>)> __Org_BouncyCastle_Crypto_Parameters_Iso18033KdfParametersSizeCheck;
  static_assert(sizeof(Iso18033KdfParameters) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Parameters::Iso18033KdfParameters::GetSeed
// Il2CppName: GetSeed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Org::BouncyCastle::Crypto::Parameters::Iso18033KdfParameters::*)()>(&Org::BouncyCastle::Crypto::Parameters::Iso18033KdfParameters::GetSeed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Parameters::Iso18033KdfParameters*), "GetSeed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
