// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include <stdint.h>
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Security
namespace Org::BouncyCastle::Security {
  // Forward declaring type: SecureRandom
  class SecureRandom;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
template<class T>
struct Array;
// Completed il2cpp-utils forward declares
// Type namespace: Org.BouncyCastle.Crypto.Paddings
namespace Org::BouncyCastle::Crypto::Paddings {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Paddings.IBlockCipherPadding
  class IBlockCipherPadding {
    public:
    // Creating value type constructor for type: IBlockCipherPadding
    IBlockCipherPadding() noexcept {}
    // public System.Void Init(Org.BouncyCastle.Security.SecureRandom random)
    // Offset: 0xFFFFFFFF
    void Init(Org::BouncyCastle::Security::SecureRandom* random);
    // public System.Int32 AddPadding(System.Byte[] input, System.Int32 inOff)
    // Offset: 0xFFFFFFFF
    int AddPadding(::Array<uint8_t>* input, int inOff);
    // public System.Int32 PadCount(System.Byte[] input)
    // Offset: 0xFFFFFFFF
    int PadCount(::Array<uint8_t>* input);
  }; // Org.BouncyCastle.Crypto.Paddings.IBlockCipherPadding
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Paddings::IBlockCipherPadding*, "Org.BouncyCastle.Crypto.Paddings", "IBlockCipherPadding");
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Paddings::IBlockCipherPadding::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Paddings::IBlockCipherPadding::*)(Org::BouncyCastle::Security::SecureRandom*)>(&Org::BouncyCastle::Crypto::Paddings::IBlockCipherPadding::Init)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Paddings::IBlockCipherPadding*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<Org::BouncyCastle::Security::SecureRandom*>()});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Paddings::IBlockCipherPadding::AddPadding
// Il2CppName: AddPadding
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Paddings::IBlockCipherPadding::*)(::Array<uint8_t>*, int)>(&Org::BouncyCastle::Crypto::Paddings::IBlockCipherPadding::AddPadding)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Paddings::IBlockCipherPadding*), "AddPadding", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<uint8_t>*>(), ::il2cpp_utils::ExtractIndependentType<int>()});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Paddings::IBlockCipherPadding::PadCount
// Il2CppName: PadCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Paddings::IBlockCipherPadding::*)(::Array<uint8_t>*)>(&Org::BouncyCastle::Crypto::Paddings::IBlockCipherPadding::PadCount)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Paddings::IBlockCipherPadding*), "PadCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<uint8_t>*>()});
  }
};
