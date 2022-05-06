// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Org.BouncyCastle.Crypto.BufferedBlockCipher
#include "Org/BouncyCastle/Crypto/BufferedBlockCipher.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Crypto
namespace Org::BouncyCastle::Crypto {
  // Forward declaring type: IBlockCipher
  class IBlockCipher;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Crypto.Modes
namespace Org::BouncyCastle::Crypto::Modes {
  // Forward declaring type: CtsBlockCipher
  class CtsBlockCipher;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Modes::CtsBlockCipher);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Modes::CtsBlockCipher*, "Org.BouncyCastle.Crypto.Modes", "CtsBlockCipher");
// Type namespace: Org.BouncyCastle.Crypto.Modes
namespace Org::BouncyCastle::Crypto::Modes {
  // Size: 0x2C
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Modes.CtsBlockCipher
  // [TokenAttribute] Offset: FFFFFFFF
  class CtsBlockCipher : public ::Org::BouncyCastle::Crypto::BufferedBlockCipher {
    public:
    public:
    // private readonly System.Int32 blockSize
    // Size: 0x4
    // Offset: 0x28
    int blockSize;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return blockSize;
    }
    // Get instance field reference: private readonly System.Int32 blockSize
    [[deprecated("Use field access instead!")]] int& dyn_blockSize();
    // public System.Void .ctor(Org.BouncyCastle.Crypto.IBlockCipher cipher)
    // Offset: 0x1E3D850
    // Implemented from: Org.BouncyCastle.Crypto.BufferedBlockCipher
    // Base method: System.Void BufferedBlockCipher::.ctor(Org.BouncyCastle.Crypto.IBlockCipher cipher)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CtsBlockCipher* New_ctor(::Org::BouncyCastle::Crypto::IBlockCipher* cipher) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Org::BouncyCastle::Crypto::Modes::CtsBlockCipher::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CtsBlockCipher*, creationType>(cipher)));
    }
    // public override System.Int32 GetUpdateOutputSize(System.Int32 length)
    // Offset: 0x1E3D9E4
    // Implemented from: Org.BouncyCastle.Crypto.BufferedBlockCipher
    // Base method: System.Int32 BufferedBlockCipher::GetUpdateOutputSize(System.Int32 length)
    int GetUpdateOutputSize(int length);
    // public override System.Int32 GetOutputSize(System.Int32 length)
    // Offset: 0x1E3DA1C
    // Implemented from: Org.BouncyCastle.Crypto.BufferedBlockCipher
    // Base method: System.Int32 BufferedBlockCipher::GetOutputSize(System.Int32 length)
    int GetOutputSize(int length);
    // public override System.Int32 ProcessBytes(System.Byte[] input, System.Int32 inOff, System.Int32 length, System.Byte[] output, System.Int32 outOff)
    // Offset: 0x1E3DA28
    // Implemented from: Org.BouncyCastle.Crypto.BufferedBlockCipher
    // Base method: System.Int32 BufferedBlockCipher::ProcessBytes(System.Byte[] input, System.Int32 inOff, System.Int32 length, System.Byte[] output, System.Int32 outOff)
    int ProcessBytes(::ArrayW<uint8_t> input, int inOff, int length, ::ArrayW<uint8_t> output, int outOff);
    // public override System.Int32 DoFinal(System.Byte[] output, System.Int32 outOff)
    // Offset: 0x1E3DD68
    // Implemented from: Org.BouncyCastle.Crypto.BufferedBlockCipher
    // Base method: System.Int32 BufferedBlockCipher::DoFinal(System.Byte[] output, System.Int32 outOff)
    int DoFinal(::ArrayW<uint8_t> output, int outOff);
  }; // Org.BouncyCastle.Crypto.Modes.CtsBlockCipher
  #pragma pack(pop)
  static check_size<sizeof(CtsBlockCipher), 40 + sizeof(int)> __Org_BouncyCastle_Crypto_Modes_CtsBlockCipherSizeCheck;
  static_assert(sizeof(CtsBlockCipher) == 0x2C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Modes::CtsBlockCipher::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Modes::CtsBlockCipher::GetUpdateOutputSize
// Il2CppName: GetUpdateOutputSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Modes::CtsBlockCipher::*)(int)>(&Org::BouncyCastle::Crypto::Modes::CtsBlockCipher::GetUpdateOutputSize)> {
  static const MethodInfo* get() {
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Modes::CtsBlockCipher*), "GetUpdateOutputSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{length});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Modes::CtsBlockCipher::GetOutputSize
// Il2CppName: GetOutputSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Modes::CtsBlockCipher::*)(int)>(&Org::BouncyCastle::Crypto::Modes::CtsBlockCipher::GetOutputSize)> {
  static const MethodInfo* get() {
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Modes::CtsBlockCipher*), "GetOutputSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{length});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Modes::CtsBlockCipher::ProcessBytes
// Il2CppName: ProcessBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Modes::CtsBlockCipher::*)(::ArrayW<uint8_t>, int, int, ::ArrayW<uint8_t>, int)>(&Org::BouncyCastle::Crypto::Modes::CtsBlockCipher::ProcessBytes)> {
  static const MethodInfo* get() {
    static auto* input = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* inOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* output = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* outOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Modes::CtsBlockCipher*), "ProcessBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input, inOff, length, output, outOff});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Modes::CtsBlockCipher::DoFinal
// Il2CppName: DoFinal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Modes::CtsBlockCipher::*)(::ArrayW<uint8_t>, int)>(&Org::BouncyCastle::Crypto::Modes::CtsBlockCipher::DoFinal)> {
  static const MethodInfo* get() {
    static auto* output = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* outOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Modes::CtsBlockCipher*), "DoFinal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{output, outOff});
  }
};
