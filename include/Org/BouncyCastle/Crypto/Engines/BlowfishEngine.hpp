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
  // Forward declaring type: BlowfishEngine
  class BlowfishEngine;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Engines::BlowfishEngine);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Engines::BlowfishEngine*, "Org.BouncyCastle.Crypto.Engines", "BlowfishEngine");
// Type namespace: Org.BouncyCastle.Crypto.Engines
namespace Org::BouncyCastle::Crypto::Engines {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Engines.BlowfishEngine
  // [TokenAttribute] Offset: FFFFFFFF
  class BlowfishEngine : public ::Il2CppObject/*, public ::Org::BouncyCastle::Crypto::IBlockCipher*/ {
    public:
    public:
    // private readonly System.UInt32[] S0
    // Size: 0x8
    // Offset: 0x10
    ::ArrayW<uint> S0;
    // Field size check
    static_assert(sizeof(::ArrayW<uint>) == 0x8);
    // private readonly System.UInt32[] S1
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<uint> S1;
    // Field size check
    static_assert(sizeof(::ArrayW<uint>) == 0x8);
    // private readonly System.UInt32[] S2
    // Size: 0x8
    // Offset: 0x20
    ::ArrayW<uint> S2;
    // Field size check
    static_assert(sizeof(::ArrayW<uint>) == 0x8);
    // private readonly System.UInt32[] S3
    // Size: 0x8
    // Offset: 0x28
    ::ArrayW<uint> S3;
    // Field size check
    static_assert(sizeof(::ArrayW<uint>) == 0x8);
    // private readonly System.UInt32[] P
    // Size: 0x8
    // Offset: 0x30
    ::ArrayW<uint> P;
    // Field size check
    static_assert(sizeof(::ArrayW<uint>) == 0x8);
    // private System.Boolean encrypting
    // Size: 0x1
    // Offset: 0x38
    bool encrypting;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: encrypting and: workingKey
    char __padding5[0x7] = {};
    // private System.Byte[] workingKey
    // Size: 0x8
    // Offset: 0x40
    ::ArrayW<uint8_t> workingKey;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    public:
    // Creating interface conversion operator: operator ::Org::BouncyCastle::Crypto::IBlockCipher
    operator ::Org::BouncyCastle::Crypto::IBlockCipher() noexcept {
      return *reinterpret_cast<::Org::BouncyCastle::Crypto::IBlockCipher*>(this);
    }
    // Creating interface conversion operator: i_IBlockCipher
    inline ::Org::BouncyCastle::Crypto::IBlockCipher* i_IBlockCipher() noexcept {
      return reinterpret_cast<::Org::BouncyCastle::Crypto::IBlockCipher*>(this);
    }
    // Get static field: static private readonly System.UInt32[] KP
    static ::ArrayW<uint> _get_KP();
    // Set static field: static private readonly System.UInt32[] KP
    static void _set_KP(::ArrayW<uint> value);
    // Get static field: static private readonly System.UInt32[] KS0
    static ::ArrayW<uint> _get_KS0();
    // Set static field: static private readonly System.UInt32[] KS0
    static void _set_KS0(::ArrayW<uint> value);
    // Get static field: static private readonly System.UInt32[] KS1
    static ::ArrayW<uint> _get_KS1();
    // Set static field: static private readonly System.UInt32[] KS1
    static void _set_KS1(::ArrayW<uint> value);
    // Get static field: static private readonly System.UInt32[] KS2
    static ::ArrayW<uint> _get_KS2();
    // Set static field: static private readonly System.UInt32[] KS2
    static void _set_KS2(::ArrayW<uint> value);
    // Get static field: static private readonly System.UInt32[] KS3
    static ::ArrayW<uint> _get_KS3();
    // Set static field: static private readonly System.UInt32[] KS3
    static void _set_KS3(::ArrayW<uint> value);
    // Get static field: static private readonly System.Int32 ROUNDS
    static int _get_ROUNDS();
    // Set static field: static private readonly System.Int32 ROUNDS
    static void _set_ROUNDS(int value);
    // Get static field: static private readonly System.Int32 SBOX_SK
    static int _get_SBOX_SK();
    // Set static field: static private readonly System.Int32 SBOX_SK
    static void _set_SBOX_SK(int value);
    // Get static field: static private readonly System.Int32 P_SZ
    static int _get_P_SZ();
    // Set static field: static private readonly System.Int32 P_SZ
    static void _set_P_SZ(int value);
    // Get instance field reference: private readonly System.UInt32[] S0
    [[deprecated("Use field access instead!")]] ::ArrayW<uint>& dyn_S0();
    // Get instance field reference: private readonly System.UInt32[] S1
    [[deprecated("Use field access instead!")]] ::ArrayW<uint>& dyn_S1();
    // Get instance field reference: private readonly System.UInt32[] S2
    [[deprecated("Use field access instead!")]] ::ArrayW<uint>& dyn_S2();
    // Get instance field reference: private readonly System.UInt32[] S3
    [[deprecated("Use field access instead!")]] ::ArrayW<uint>& dyn_S3();
    // Get instance field reference: private readonly System.UInt32[] P
    [[deprecated("Use field access instead!")]] ::ArrayW<uint>& dyn_P();
    // Get instance field reference: private System.Boolean encrypting
    [[deprecated("Use field access instead!")]] bool& dyn_encrypting();
    // Get instance field reference: private System.Byte[] workingKey
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn_workingKey();
    // public System.String get_AlgorithmName()
    // Offset: 0x23F8AA8
    ::StringW get_AlgorithmName();
    // public System.Boolean get_IsPartialBlockOkay()
    // Offset: 0x23F8AF0
    bool get_IsPartialBlockOkay();
    // public System.Void .ctor()
    // Offset: 0x23F8524
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BlowfishEngine* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Org::BouncyCastle::Crypto::Engines::BlowfishEngine::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BlowfishEngine*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x23F9220
    static void _cctor();
    // public System.Void Init(System.Boolean forEncryption, Org.BouncyCastle.Crypto.ICipherParameters parameters)
    // Offset: 0x23F8618
    void Init(bool forEncryption, ::Org::BouncyCastle::Crypto::ICipherParameters* parameters);
    // public System.Int32 ProcessBlock(System.Byte[] input, System.Int32 inOff, System.Byte[] output, System.Int32 outOff)
    // Offset: 0x23F8AF8
    int ProcessBlock(::ArrayW<uint8_t> input, int inOff, ::ArrayW<uint8_t> output, int outOff);
    // public System.Void Reset()
    // Offset: 0x23F8F88
    void Reset();
    // public System.Int32 GetBlockSize()
    // Offset: 0x23F8F8C
    int GetBlockSize();
    // private System.UInt32 F(System.UInt32 x)
    // Offset: 0x23F8F94
    uint F(uint x);
    // private System.Void ProcessTable(System.UInt32 xl, System.UInt32 xr, System.UInt32[] table)
    // Offset: 0x23F9040
    void ProcessTable(uint xl, uint xr, ::ArrayW<uint> table);
    // private System.Void SetKey(System.Byte[] key)
    // Offset: 0x23F8774
    void SetKey(::ArrayW<uint8_t> key);
    // private System.Void EncryptBlock(System.Byte[] src, System.Int32 srcIndex, System.Byte[] dst, System.Int32 dstIndex)
    // Offset: 0x23F8C1C
    void EncryptBlock(::ArrayW<uint8_t> src, int srcIndex, ::ArrayW<uint8_t> dst, int dstIndex);
    // private System.Void DecryptBlock(System.Byte[] src, System.Int32 srcIndex, System.Byte[] dst, System.Int32 dstIndex)
    // Offset: 0x23F8DE0
    void DecryptBlock(::ArrayW<uint8_t> src, int srcIndex, ::ArrayW<uint8_t> dst, int dstIndex);
  }; // Org.BouncyCastle.Crypto.Engines.BlowfishEngine
  #pragma pack(pop)
  static check_size<sizeof(BlowfishEngine), 64 + sizeof(::ArrayW<uint8_t>)> __Org_BouncyCastle_Crypto_Engines_BlowfishEngineSizeCheck;
  static_assert(sizeof(BlowfishEngine) == 0x48);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::BlowfishEngine::get_AlgorithmName
// Il2CppName: get_AlgorithmName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Org::BouncyCastle::Crypto::Engines::BlowfishEngine::*)()>(&Org::BouncyCastle::Crypto::Engines::BlowfishEngine::get_AlgorithmName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::BlowfishEngine*), "get_AlgorithmName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::BlowfishEngine::get_IsPartialBlockOkay
// Il2CppName: get_IsPartialBlockOkay
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Crypto::Engines::BlowfishEngine::*)()>(&Org::BouncyCastle::Crypto::Engines::BlowfishEngine::get_IsPartialBlockOkay)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::BlowfishEngine*), "get_IsPartialBlockOkay", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::BlowfishEngine::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::BlowfishEngine::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Org::BouncyCastle::Crypto::Engines::BlowfishEngine::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::BlowfishEngine*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::BlowfishEngine::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Engines::BlowfishEngine::*)(bool, ::Org::BouncyCastle::Crypto::ICipherParameters*)>(&Org::BouncyCastle::Crypto::Engines::BlowfishEngine::Init)> {
  static const MethodInfo* get() {
    static auto* forEncryption = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* parameters = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Crypto", "ICipherParameters")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::BlowfishEngine*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{forEncryption, parameters});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::BlowfishEngine::ProcessBlock
// Il2CppName: ProcessBlock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Engines::BlowfishEngine::*)(::ArrayW<uint8_t>, int, ::ArrayW<uint8_t>, int)>(&Org::BouncyCastle::Crypto::Engines::BlowfishEngine::ProcessBlock)> {
  static const MethodInfo* get() {
    static auto* input = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* inOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* output = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* outOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::BlowfishEngine*), "ProcessBlock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input, inOff, output, outOff});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::BlowfishEngine::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Engines::BlowfishEngine::*)()>(&Org::BouncyCastle::Crypto::Engines::BlowfishEngine::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::BlowfishEngine*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::BlowfishEngine::GetBlockSize
// Il2CppName: GetBlockSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Engines::BlowfishEngine::*)()>(&Org::BouncyCastle::Crypto::Engines::BlowfishEngine::GetBlockSize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::BlowfishEngine*), "GetBlockSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::BlowfishEngine::F
// Il2CppName: F
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (Org::BouncyCastle::Crypto::Engines::BlowfishEngine::*)(uint)>(&Org::BouncyCastle::Crypto::Engines::BlowfishEngine::F)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::BlowfishEngine*), "F", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::BlowfishEngine::ProcessTable
// Il2CppName: ProcessTable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Engines::BlowfishEngine::*)(uint, uint, ::ArrayW<uint>)>(&Org::BouncyCastle::Crypto::Engines::BlowfishEngine::ProcessTable)> {
  static const MethodInfo* get() {
    static auto* xl = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* xr = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* table = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt32"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::BlowfishEngine*), "ProcessTable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{xl, xr, table});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::BlowfishEngine::SetKey
// Il2CppName: SetKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Engines::BlowfishEngine::*)(::ArrayW<uint8_t>)>(&Org::BouncyCastle::Crypto::Engines::BlowfishEngine::SetKey)> {
  static const MethodInfo* get() {
    static auto* key = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::BlowfishEngine*), "SetKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::BlowfishEngine::EncryptBlock
// Il2CppName: EncryptBlock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Engines::BlowfishEngine::*)(::ArrayW<uint8_t>, int, ::ArrayW<uint8_t>, int)>(&Org::BouncyCastle::Crypto::Engines::BlowfishEngine::EncryptBlock)> {
  static const MethodInfo* get() {
    static auto* src = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* srcIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* dst = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* dstIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::BlowfishEngine*), "EncryptBlock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{src, srcIndex, dst, dstIndex});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::BlowfishEngine::DecryptBlock
// Il2CppName: DecryptBlock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Engines::BlowfishEngine::*)(::ArrayW<uint8_t>, int, ::ArrayW<uint8_t>, int)>(&Org::BouncyCastle::Crypto::Engines::BlowfishEngine::DecryptBlock)> {
  static const MethodInfo* get() {
    static auto* src = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* srcIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* dst = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* dstIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::BlowfishEngine*), "DecryptBlock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{src, srcIndex, dst, dstIndex});
  }
};
