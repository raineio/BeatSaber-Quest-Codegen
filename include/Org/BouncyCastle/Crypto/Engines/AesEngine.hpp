// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Org.BouncyCastle.Crypto.IBlockCipher
#include "Org/BouncyCastle/Crypto/IBlockCipher.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Crypto
namespace Org::BouncyCastle::Crypto {
  // Forward declaring type: ICipherParameters
  class ICipherParameters;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Crypto.Engines
namespace Org::BouncyCastle::Crypto::Engines {
  // Forward declaring type: AesEngine
  class AesEngine;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Engines::AesEngine);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Engines::AesEngine*, "Org.BouncyCastle.Crypto.Engines", "AesEngine");
// Type namespace: Org.BouncyCastle.Crypto.Engines
namespace Org::BouncyCastle::Crypto::Engines {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Engines.AesEngine
  // [TokenAttribute] Offset: FFFFFFFF
  class AesEngine : public ::Il2CppObject/*, public ::Org::BouncyCastle::Crypto::IBlockCipher*/ {
    public:
    public:
    // private System.Int32 ROUNDS
    // Size: 0x4
    // Offset: 0x10
    int ROUNDS;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: ROUNDS and: WorkingKey
    char __padding0[0x4] = {};
    // private System.UInt32[][] WorkingKey
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<::ArrayW<uint>> WorkingKey;
    // Field size check
    static_assert(sizeof(::ArrayW<::ArrayW<uint>>) == 0x8);
    // private System.UInt32 C0
    // Size: 0x4
    // Offset: 0x20
    uint C0;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // private System.UInt32 C1
    // Size: 0x4
    // Offset: 0x24
    uint C1;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // private System.UInt32 C2
    // Size: 0x4
    // Offset: 0x28
    uint C2;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // private System.UInt32 C3
    // Size: 0x4
    // Offset: 0x2C
    uint C3;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // private System.Boolean forEncryption
    // Size: 0x1
    // Offset: 0x30
    bool forEncryption;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: forEncryption and: s
    char __padding6[0x7] = {};
    // private System.Byte[] s
    // Size: 0x8
    // Offset: 0x38
    ::ArrayW<uint8_t> s;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    public:
    // Creating interface conversion operator: operator ::Org::BouncyCastle::Crypto::IBlockCipher
    operator ::Org::BouncyCastle::Crypto::IBlockCipher() noexcept {
      return *reinterpret_cast<::Org::BouncyCastle::Crypto::IBlockCipher*>(this);
    }
    // Get static field: static private readonly System.Byte[] S
    static ::ArrayW<uint8_t> _get_S();
    // Set static field: static private readonly System.Byte[] S
    static void _set_S(::ArrayW<uint8_t> value);
    // Get static field: static private readonly System.Byte[] Si
    static ::ArrayW<uint8_t> _get_Si();
    // Set static field: static private readonly System.Byte[] Si
    static void _set_Si(::ArrayW<uint8_t> value);
    // Get static field: static private readonly System.Byte[] rcon
    static ::ArrayW<uint8_t> _get_rcon();
    // Set static field: static private readonly System.Byte[] rcon
    static void _set_rcon(::ArrayW<uint8_t> value);
    // Get static field: static private readonly System.UInt32[] T0
    static ::ArrayW<uint> _get_T0();
    // Set static field: static private readonly System.UInt32[] T0
    static void _set_T0(::ArrayW<uint> value);
    // Get static field: static private readonly System.UInt32[] Tinv0
    static ::ArrayW<uint> _get_Tinv0();
    // Set static field: static private readonly System.UInt32[] Tinv0
    static void _set_Tinv0(::ArrayW<uint> value);
    // Get instance field reference: private System.Int32 ROUNDS
    [[deprecated("Use field access instead!")]] int& dyn_ROUNDS();
    // Get instance field reference: private System.UInt32[][] WorkingKey
    [[deprecated("Use field access instead!")]] ::ArrayW<::ArrayW<uint>>& dyn_WorkingKey();
    // Get instance field reference: private System.UInt32 C0
    [[deprecated("Use field access instead!")]] uint& dyn_C0();
    // Get instance field reference: private System.UInt32 C1
    [[deprecated("Use field access instead!")]] uint& dyn_C1();
    // Get instance field reference: private System.UInt32 C2
    [[deprecated("Use field access instead!")]] uint& dyn_C2();
    // Get instance field reference: private System.UInt32 C3
    [[deprecated("Use field access instead!")]] uint& dyn_C3();
    // Get instance field reference: private System.Boolean forEncryption
    [[deprecated("Use field access instead!")]] bool& dyn_forEncryption();
    // Get instance field reference: private System.Byte[] s
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn_s();
    // public System.String get_AlgorithmName()
    // Offset: 0x1E58C2C
    ::StringW get_AlgorithmName();
    // public System.Boolean get_IsPartialBlockOkay()
    // Offset: 0x1E58C74
    bool get_IsPartialBlockOkay();
    // public System.Void .ctor()
    // Offset: 0x1E58A70
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AesEngine* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Org::BouncyCastle::Crypto::Engines::AesEngine::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AesEngine*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x1E5A100
    static void _cctor();
    // static private System.UInt32 Shift(System.UInt32 r, System.Int32 shift)
    // Offset: 0x1E57A24
    static uint Shift(uint r, int shift);
    // static private System.UInt32 FFmulX(System.UInt32 x)
    // Offset: 0x1E57A2C
    static uint FFmulX(uint x);
    // static private System.UInt32 FFmulX2(System.UInt32 x)
    // Offset: 0x1E57A4C
    static uint FFmulX2(uint x);
    // static private System.UInt32 Inv_Mcol(System.UInt32 x)
    // Offset: 0x1E57A68
    static uint Inv_Mcol(uint x);
    // static private System.UInt32 SubWord(System.UInt32 x)
    // Offset: 0x1E57B10
    static uint SubWord(uint x);
    // private System.UInt32[][] GenerateWorkingKey(System.Byte[] key, System.Boolean forEncryption)
    // Offset: 0x1E57BEC
    ::ArrayW<::ArrayW<uint>> GenerateWorkingKey(::ArrayW<uint8_t> key, bool forEncryption);
    // public System.Void Init(System.Boolean forEncryption, Org.BouncyCastle.Crypto.ICipherParameters parameters)
    // Offset: 0x1E58A78
    void Init(bool forEncryption, ::Org::BouncyCastle::Crypto::ICipherParameters* parameters);
    // public System.Int32 GetBlockSize()
    // Offset: 0x1E58C7C
    int GetBlockSize();
    // public System.Int32 ProcessBlock(System.Byte[] input, System.Int32 inOff, System.Byte[] output, System.Int32 outOff)
    // Offset: 0x1E58C84
    int ProcessBlock(::ArrayW<uint8_t> input, int inOff, ::ArrayW<uint8_t> output, int outOff);
    // public System.Void Reset()
    // Offset: 0x1E5A0FC
    void Reset();
    // private System.Void UnPackBlock(System.Byte[] bytes, System.Int32 off)
    // Offset: 0x1E58DA8
    void UnPackBlock(::ArrayW<uint8_t> bytes, int off);
    // private System.Void PackBlock(System.Byte[] bytes, System.Int32 off)
    // Offset: 0x1E5A08C
    void PackBlock(::ArrayW<uint8_t> bytes, int off);
    // private System.Void EncryptBlock(System.UInt32[][] KW)
    // Offset: 0x1E58E24
    void EncryptBlock(::ArrayW<::ArrayW<uint>> KW);
    // private System.Void DecryptBlock(System.UInt32[][] KW)
    // Offset: 0x1E5974C
    void DecryptBlock(::ArrayW<::ArrayW<uint>> KW);
  }; // Org.BouncyCastle.Crypto.Engines.AesEngine
  #pragma pack(pop)
  static check_size<sizeof(AesEngine), 56 + sizeof(::ArrayW<uint8_t>)> __Org_BouncyCastle_Crypto_Engines_AesEngineSizeCheck;
  static_assert(sizeof(AesEngine) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::AesEngine::get_AlgorithmName
// Il2CppName: get_AlgorithmName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Org::BouncyCastle::Crypto::Engines::AesEngine::*)()>(&Org::BouncyCastle::Crypto::Engines::AesEngine::get_AlgorithmName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::AesEngine*), "get_AlgorithmName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::AesEngine::get_IsPartialBlockOkay
// Il2CppName: get_IsPartialBlockOkay
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Crypto::Engines::AesEngine::*)()>(&Org::BouncyCastle::Crypto::Engines::AesEngine::get_IsPartialBlockOkay)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::AesEngine*), "get_IsPartialBlockOkay", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::AesEngine::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::AesEngine::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Org::BouncyCastle::Crypto::Engines::AesEngine::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::AesEngine*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::AesEngine::Shift
// Il2CppName: Shift
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (*)(uint, int)>(&Org::BouncyCastle::Crypto::Engines::AesEngine::Shift)> {
  static const MethodInfo* get() {
    static auto* r = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* shift = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::AesEngine*), "Shift", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{r, shift});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::AesEngine::FFmulX
// Il2CppName: FFmulX
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (*)(uint)>(&Org::BouncyCastle::Crypto::Engines::AesEngine::FFmulX)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::AesEngine*), "FFmulX", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::AesEngine::FFmulX2
// Il2CppName: FFmulX2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (*)(uint)>(&Org::BouncyCastle::Crypto::Engines::AesEngine::FFmulX2)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::AesEngine*), "FFmulX2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::AesEngine::Inv_Mcol
// Il2CppName: Inv_Mcol
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (*)(uint)>(&Org::BouncyCastle::Crypto::Engines::AesEngine::Inv_Mcol)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::AesEngine*), "Inv_Mcol", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::AesEngine::SubWord
// Il2CppName: SubWord
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (*)(uint)>(&Org::BouncyCastle::Crypto::Engines::AesEngine::SubWord)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::AesEngine*), "SubWord", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::AesEngine::GenerateWorkingKey
// Il2CppName: GenerateWorkingKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::ArrayW<uint>> (Org::BouncyCastle::Crypto::Engines::AesEngine::*)(::ArrayW<uint8_t>, bool)>(&Org::BouncyCastle::Crypto::Engines::AesEngine::GenerateWorkingKey)> {
  static const MethodInfo* get() {
    static auto* key = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* forEncryption = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::AesEngine*), "GenerateWorkingKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key, forEncryption});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::AesEngine::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Engines::AesEngine::*)(bool, ::Org::BouncyCastle::Crypto::ICipherParameters*)>(&Org::BouncyCastle::Crypto::Engines::AesEngine::Init)> {
  static const MethodInfo* get() {
    static auto* forEncryption = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* parameters = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Crypto", "ICipherParameters")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::AesEngine*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{forEncryption, parameters});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::AesEngine::GetBlockSize
// Il2CppName: GetBlockSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Engines::AesEngine::*)()>(&Org::BouncyCastle::Crypto::Engines::AesEngine::GetBlockSize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::AesEngine*), "GetBlockSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::AesEngine::ProcessBlock
// Il2CppName: ProcessBlock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Engines::AesEngine::*)(::ArrayW<uint8_t>, int, ::ArrayW<uint8_t>, int)>(&Org::BouncyCastle::Crypto::Engines::AesEngine::ProcessBlock)> {
  static const MethodInfo* get() {
    static auto* input = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* inOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* output = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* outOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::AesEngine*), "ProcessBlock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input, inOff, output, outOff});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::AesEngine::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Engines::AesEngine::*)()>(&Org::BouncyCastle::Crypto::Engines::AesEngine::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::AesEngine*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::AesEngine::UnPackBlock
// Il2CppName: UnPackBlock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Engines::AesEngine::*)(::ArrayW<uint8_t>, int)>(&Org::BouncyCastle::Crypto::Engines::AesEngine::UnPackBlock)> {
  static const MethodInfo* get() {
    static auto* bytes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* off = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::AesEngine*), "UnPackBlock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bytes, off});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::AesEngine::PackBlock
// Il2CppName: PackBlock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Engines::AesEngine::*)(::ArrayW<uint8_t>, int)>(&Org::BouncyCastle::Crypto::Engines::AesEngine::PackBlock)> {
  static const MethodInfo* get() {
    static auto* bytes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* off = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::AesEngine*), "PackBlock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bytes, off});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::AesEngine::EncryptBlock
// Il2CppName: EncryptBlock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Engines::AesEngine::*)(::ArrayW<::ArrayW<uint>>)>(&Org::BouncyCastle::Crypto::Engines::AesEngine::EncryptBlock)> {
  static const MethodInfo* get() {
    static auto* KW = &il2cpp_functions::array_class_get(il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt32"), 1), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::AesEngine*), "EncryptBlock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{KW});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::AesEngine::DecryptBlock
// Il2CppName: DecryptBlock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Engines::AesEngine::*)(::ArrayW<::ArrayW<uint>>)>(&Org::BouncyCastle::Crypto::Engines::AesEngine::DecryptBlock)> {
  static const MethodInfo* get() {
    static auto* KW = &il2cpp_functions::array_class_get(il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt32"), 1), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::AesEngine*), "DecryptBlock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{KW});
  }
};
