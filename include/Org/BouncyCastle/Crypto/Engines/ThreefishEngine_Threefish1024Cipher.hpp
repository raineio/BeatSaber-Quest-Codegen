// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Org.BouncyCastle.Crypto.Engines.ThreefishEngine
#include "Org/BouncyCastle/Crypto/Engines/ThreefishEngine.hpp"
// Including type: Org.BouncyCastle.Crypto.Engines.ThreefishEngine/Org.BouncyCastle.Crypto.Engines.ThreefishCipher
#include "Org/BouncyCastle/Crypto/Engines/ThreefishEngine_ThreefishCipher.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Engines::ThreefishEngine::Threefish1024Cipher);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Engines::ThreefishEngine::Threefish1024Cipher*, "Org.BouncyCastle.Crypto.Engines", "ThreefishEngine/Threefish1024Cipher");
// Type namespace: Org.BouncyCastle.Crypto.Engines
namespace Org::BouncyCastle::Crypto::Engines {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Engines.ThreefishEngine/Org.BouncyCastle.Crypto.Engines.Threefish1024Cipher
  // [TokenAttribute] Offset: FFFFFFFF
  class ThreefishEngine::Threefish1024Cipher : public ::Org::BouncyCastle::Crypto::Engines::ThreefishEngine::ThreefishCipher {
    public:
    // public System.Void .ctor(System.UInt64[] kw, System.UInt64[] t)
    // Offset: 0x2415610
    // Implemented from: Org.BouncyCastle.Crypto.Engines.ThreefishEngine/Org.BouncyCastle.Crypto.Engines.ThreefishCipher
    // Base method: System.Void ThreefishCipher::.ctor(System.UInt64[] kw, System.UInt64[] t)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ThreefishEngine::Threefish1024Cipher* New_ctor(::ArrayW<uint64_t> kw, ::ArrayW<uint64_t> t) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Org::BouncyCastle::Crypto::Engines::ThreefishEngine::Threefish1024Cipher::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ThreefishEngine::Threefish1024Cipher*, creationType>(kw, t)));
    }
    // override System.Void EncryptBlock(System.UInt64[] block, System.UInt64[] outWords)
    // Offset: 0x2416400
    // Implemented from: Org.BouncyCastle.Crypto.Engines.ThreefishEngine/Org.BouncyCastle.Crypto.Engines.ThreefishCipher
    // Base method: System.Void ThreefishCipher::EncryptBlock(System.UInt64[] block, System.UInt64[] outWords)
    void EncryptBlock(::ArrayW<uint64_t> block, ::ArrayW<uint64_t> outWords);
    // override System.Void DecryptBlock(System.UInt64[] block, System.UInt64[] state)
    // Offset: 0x2416D7C
    // Implemented from: Org.BouncyCastle.Crypto.Engines.ThreefishEngine/Org.BouncyCastle.Crypto.Engines.ThreefishCipher
    // Base method: System.Void ThreefishCipher::DecryptBlock(System.UInt64[] block, System.UInt64[] state)
    void DecryptBlock(::ArrayW<uint64_t> block, ::ArrayW<uint64_t> state);
  }; // Org.BouncyCastle.Crypto.Engines.ThreefishEngine/Org.BouncyCastle.Crypto.Engines.Threefish1024Cipher
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::ThreefishEngine::Threefish1024Cipher::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::ThreefishEngine::Threefish1024Cipher::EncryptBlock
// Il2CppName: EncryptBlock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Engines::ThreefishEngine::Threefish1024Cipher::*)(::ArrayW<uint64_t>, ::ArrayW<uint64_t>)>(&Org::BouncyCastle::Crypto::Engines::ThreefishEngine::Threefish1024Cipher::EncryptBlock)> {
  static const MethodInfo* get() {
    static auto* block = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt64"), 1)->byval_arg;
    static auto* outWords = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt64"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::ThreefishEngine::Threefish1024Cipher*), "EncryptBlock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{block, outWords});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::ThreefishEngine::Threefish1024Cipher::DecryptBlock
// Il2CppName: DecryptBlock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Engines::ThreefishEngine::Threefish1024Cipher::*)(::ArrayW<uint64_t>, ::ArrayW<uint64_t>)>(&Org::BouncyCastle::Crypto::Engines::ThreefishEngine::Threefish1024Cipher::DecryptBlock)> {
  static const MethodInfo* get() {
    static auto* block = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt64"), 1)->byval_arg;
    static auto* state = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt64"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::ThreefishEngine::Threefish1024Cipher*), "DecryptBlock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{block, state});
  }
};
