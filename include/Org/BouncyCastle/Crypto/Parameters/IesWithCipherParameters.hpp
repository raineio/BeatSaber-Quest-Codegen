// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Org.BouncyCastle.Crypto.Parameters.IesParameters
#include "Org/BouncyCastle/Crypto/Parameters/IesParameters.hpp"
// Completed includes
// Type namespace: Org.BouncyCastle.Crypto.Parameters
namespace Org::BouncyCastle::Crypto::Parameters {
  // Forward declaring type: IesWithCipherParameters
  class IesWithCipherParameters;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(Org::BouncyCastle::Crypto::Parameters::IesWithCipherParameters);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Parameters::IesWithCipherParameters*, "Org.BouncyCastle.Crypto.Parameters", "IesWithCipherParameters");
// Type namespace: Org.BouncyCastle.Crypto.Parameters
namespace Org::BouncyCastle::Crypto::Parameters {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Parameters.IesWithCipherParameters
  // [TokenAttribute] Offset: FFFFFFFF
  class IesWithCipherParameters : public Org::BouncyCastle::Crypto::Parameters::IesParameters {
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
    // private System.Int32 cipherKeySize
    // Size: 0x4
    // Offset: 0x24
    int cipherKeySize;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return cipherKeySize;
    }
    // Get instance field reference: private System.Int32 cipherKeySize
    int& dyn_cipherKeySize();
    // public System.Int32 get_CipherKeySize()
    // Offset: 0x13BBA2C
    int get_CipherKeySize();
  }; // Org.BouncyCastle.Crypto.Parameters.IesWithCipherParameters
  #pragma pack(pop)
  static check_size<sizeof(IesWithCipherParameters), 36 + sizeof(int)> __Org_BouncyCastle_Crypto_Parameters_IesWithCipherParametersSizeCheck;
  static_assert(sizeof(IesWithCipherParameters) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Parameters::IesWithCipherParameters::get_CipherKeySize
// Il2CppName: get_CipherKeySize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Parameters::IesWithCipherParameters::*)()>(&Org::BouncyCastle::Crypto::Parameters::IesWithCipherParameters::get_CipherKeySize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Parameters::IesWithCipherParameters*), "get_CipherKeySize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
