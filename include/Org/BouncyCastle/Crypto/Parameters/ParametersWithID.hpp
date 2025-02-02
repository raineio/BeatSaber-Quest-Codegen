// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Crypto
namespace Org::BouncyCastle::Crypto {
  // Forward declaring type: ICipherParameters
  class ICipherParameters;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Crypto.Parameters
namespace Org::BouncyCastle::Crypto::Parameters {
  // Forward declaring type: ParametersWithID
  class ParametersWithID;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Parameters::ParametersWithID);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Parameters::ParametersWithID*, "Org.BouncyCastle.Crypto.Parameters", "ParametersWithID");
// Type namespace: Org.BouncyCastle.Crypto.Parameters
namespace Org::BouncyCastle::Crypto::Parameters {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Parameters.ParametersWithID
  // [TokenAttribute] Offset: FFFFFFFF
  class ParametersWithID : public ::Il2CppObject {
    public:
    public:
    // private readonly Org.BouncyCastle.Crypto.ICipherParameters parameters
    // Size: 0x8
    // Offset: 0x10
    ::Org::BouncyCastle::Crypto::ICipherParameters* parameters;
    // Field size check
    static_assert(sizeof(::Org::BouncyCastle::Crypto::ICipherParameters*) == 0x8);
    // private readonly System.Byte[] id
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<uint8_t> id;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    public:
    // Get instance field reference: private readonly Org.BouncyCastle.Crypto.ICipherParameters parameters
    [[deprecated("Use field access instead!")]] ::Org::BouncyCastle::Crypto::ICipherParameters*& dyn_parameters();
    // Get instance field reference: private readonly System.Byte[] id
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn_id();
    // public Org.BouncyCastle.Crypto.ICipherParameters get_Parameters()
    // Offset: 0x166C898
    ::Org::BouncyCastle::Crypto::ICipherParameters* get_Parameters();
    // public System.Byte[] GetID()
    // Offset: 0x166C890
    ::ArrayW<uint8_t> GetID();
  }; // Org.BouncyCastle.Crypto.Parameters.ParametersWithID
  #pragma pack(pop)
  static check_size<sizeof(ParametersWithID), 24 + sizeof(::ArrayW<uint8_t>)> __Org_BouncyCastle_Crypto_Parameters_ParametersWithIDSizeCheck;
  static_assert(sizeof(ParametersWithID) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Parameters::ParametersWithID::get_Parameters
// Il2CppName: get_Parameters
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::ICipherParameters* (Org::BouncyCastle::Crypto::Parameters::ParametersWithID::*)()>(&Org::BouncyCastle::Crypto::Parameters::ParametersWithID::get_Parameters)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Parameters::ParametersWithID*), "get_Parameters", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Parameters::ParametersWithID::GetID
// Il2CppName: GetID
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Org::BouncyCastle::Crypto::Parameters::ParametersWithID::*)()>(&Org::BouncyCastle::Crypto::Parameters::ParametersWithID::GetID)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Parameters::ParametersWithID*), "GetID", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
