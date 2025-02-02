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
  // Forward declaring type: SerpentEngineBase
  class SerpentEngineBase;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Engines::SerpentEngineBase);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Engines::SerpentEngineBase*, "Org.BouncyCastle.Crypto.Engines", "SerpentEngineBase");
// Type namespace: Org.BouncyCastle.Crypto.Engines
namespace Org::BouncyCastle::Crypto::Engines {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Engines.SerpentEngineBase
  // [TokenAttribute] Offset: FFFFFFFF
  class SerpentEngineBase : public ::Il2CppObject/*, public ::Org::BouncyCastle::Crypto::IBlockCipher*/ {
    public:
    public:
    // protected System.Boolean encrypting
    // Size: 0x1
    // Offset: 0x10
    bool encrypting;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: encrypting and: wKey
    char __padding0[0x7] = {};
    // protected System.Int32[] wKey
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<int> wKey;
    // Field size check
    static_assert(sizeof(::ArrayW<int>) == 0x8);
    // protected System.Int32 X0
    // Size: 0x4
    // Offset: 0x20
    int X0;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // protected System.Int32 X1
    // Size: 0x4
    // Offset: 0x24
    int X1;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // protected System.Int32 X2
    // Size: 0x4
    // Offset: 0x28
    int X2;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // protected System.Int32 X3
    // Size: 0x4
    // Offset: 0x2C
    int X3;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating interface conversion operator: operator ::Org::BouncyCastle::Crypto::IBlockCipher
    operator ::Org::BouncyCastle::Crypto::IBlockCipher() noexcept {
      return *reinterpret_cast<::Org::BouncyCastle::Crypto::IBlockCipher*>(this);
    }
    // Creating interface conversion operator: i_IBlockCipher
    inline ::Org::BouncyCastle::Crypto::IBlockCipher* i_IBlockCipher() noexcept {
      return reinterpret_cast<::Org::BouncyCastle::Crypto::IBlockCipher*>(this);
    }
    // Get static field: static protected readonly System.Int32 BlockSize
    static int _get_BlockSize();
    // Set static field: static protected readonly System.Int32 BlockSize
    static void _set_BlockSize(int value);
    // Get instance field reference: protected System.Boolean encrypting
    [[deprecated("Use field access instead!")]] bool& dyn_encrypting();
    // Get instance field reference: protected System.Int32[] wKey
    [[deprecated("Use field access instead!")]] ::ArrayW<int>& dyn_wKey();
    // Get instance field reference: protected System.Int32 X0
    [[deprecated("Use field access instead!")]] int& dyn_X0();
    // Get instance field reference: protected System.Int32 X1
    [[deprecated("Use field access instead!")]] int& dyn_X1();
    // Get instance field reference: protected System.Int32 X2
    [[deprecated("Use field access instead!")]] int& dyn_X2();
    // Get instance field reference: protected System.Int32 X3
    [[deprecated("Use field access instead!")]] int& dyn_X3();
    // public System.String get_AlgorithmName()
    // Offset: 0x24B0B98
    ::StringW get_AlgorithmName();
    // public System.Boolean get_IsPartialBlockOkay()
    // Offset: 0x24B0BE0
    bool get_IsPartialBlockOkay();
    // protected System.Void .ctor()
    // Offset: 0x24B09FC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SerpentEngineBase* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Org::BouncyCastle::Crypto::Engines::SerpentEngineBase::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SerpentEngineBase*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x24B0DF0
    static void _cctor();
    // public System.Void Init(System.Boolean encrypting, Org.BouncyCastle.Crypto.ICipherParameters parameters)
    // Offset: 0x24B0A04
    void Init(bool encrypting, ::Org::BouncyCastle::Crypto::ICipherParameters* parameters);
    // public System.Int32 GetBlockSize()
    // Offset: 0x24B0BE8
    int GetBlockSize();
    // public System.Int32 ProcessBlock(System.Byte[] input, System.Int32 inOff, System.Byte[] output, System.Int32 outOff)
    // Offset: 0x24B0C50
    int ProcessBlock(::ArrayW<uint8_t> input, int inOff, ::ArrayW<uint8_t> output, int outOff);
    // public System.Void Reset()
    // Offset: 0x24B0DE4
    void Reset();
    // static protected System.Int32 RotateLeft(System.Int32 x, System.Int32 bits)
    // Offset: 0x24AD5A8
    static int RotateLeft(int x, int bits);
    // static private System.Int32 RotateRight(System.Int32 x, System.Int32 bits)
    // Offset: 0x24B0DE8
    static int RotateRight(int x, int bits);
    // protected System.Void Sb0(System.Int32 a, System.Int32 b, System.Int32 c, System.Int32 d)
    // Offset: 0x24AD68C
    void Sb0(int a, int b, int c, int d);
    // protected System.Void Ib0(System.Int32 a, System.Int32 b, System.Int32 c, System.Int32 d)
    // Offset: 0x24B0950
    void Ib0(int a, int b, int c, int d);
    // protected System.Void Sb1(System.Int32 a, System.Int32 b, System.Int32 c, System.Int32 d)
    // Offset: 0x24AD64C
    void Sb1(int a, int b, int c, int d);
    // protected System.Void Ib1(System.Int32 a, System.Int32 b, System.Int32 c, System.Int32 d)
    // Offset: 0x24B0910
    void Ib1(int a, int b, int c, int d);
    // protected System.Void Sb2(System.Int32 a, System.Int32 b, System.Int32 c, System.Int32 d)
    // Offset: 0x24AD600
    void Sb2(int a, int b, int c, int d);
    // protected System.Void Ib2(System.Int32 a, System.Int32 b, System.Int32 c, System.Int32 d)
    // Offset: 0x24B08CC
    void Ib2(int a, int b, int c, int d);
    // protected System.Void Sb3(System.Int32 a, System.Int32 b, System.Int32 c, System.Int32 d)
    // Offset: 0x24AD5B4
    void Sb3(int a, int b, int c, int d);
    // protected System.Void Ib3(System.Int32 a, System.Int32 b, System.Int32 c, System.Int32 d)
    // Offset: 0x24B0884
    void Ib3(int a, int b, int c, int d);
    // protected System.Void Sb4(System.Int32 a, System.Int32 b, System.Int32 c, System.Int32 d)
    // Offset: 0x24AD79C
    void Sb4(int a, int b, int c, int d);
    // protected System.Void Ib4(System.Int32 a, System.Int32 b, System.Int32 c, System.Int32 d)
    // Offset: 0x24B0840
    void Ib4(int a, int b, int c, int d);
    // protected System.Void Sb5(System.Int32 a, System.Int32 b, System.Int32 c, System.Int32 d)
    // Offset: 0x24AD754
    void Sb5(int a, int b, int c, int d);
    // protected System.Void Ib5(System.Int32 a, System.Int32 b, System.Int32 c, System.Int32 d)
    // Offset: 0x24B07F8
    void Ib5(int a, int b, int c, int d);
    // protected System.Void Sb6(System.Int32 a, System.Int32 b, System.Int32 c, System.Int32 d)
    // Offset: 0x24AD714
    void Sb6(int a, int b, int c, int d);
    // protected System.Void Ib6(System.Int32 a, System.Int32 b, System.Int32 c, System.Int32 d)
    // Offset: 0x24B07B4
    void Ib6(int a, int b, int c, int d);
    // protected System.Void Sb7(System.Int32 a, System.Int32 b, System.Int32 c, System.Int32 d)
    // Offset: 0x24AD6CC
    void Sb7(int a, int b, int c, int d);
    // protected System.Void Ib7(System.Int32 a, System.Int32 b, System.Int32 c, System.Int32 d)
    // Offset: 0x24B06CC
    void Ib7(int a, int b, int c, int d);
    // protected System.Void LT()
    // Offset: 0x24AED54
    void LT();
    // protected System.Void InverseLT()
    // Offset: 0x24B0718
    void InverseLT();
    // protected System.Int32[] MakeWorkingKey(System.Byte[] key)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::ArrayW<int> MakeWorkingKey(::ArrayW<uint8_t> key);
    // protected System.Void EncryptBlock(System.Byte[] input, System.Int32 inOff, System.Byte[] output, System.Int32 outOff)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void EncryptBlock(::ArrayW<uint8_t> input, int inOff, ::ArrayW<uint8_t> output, int outOff);
    // protected System.Void DecryptBlock(System.Byte[] input, System.Int32 inOff, System.Byte[] output, System.Int32 outOff)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void DecryptBlock(::ArrayW<uint8_t> input, int inOff, ::ArrayW<uint8_t> output, int outOff);
  }; // Org.BouncyCastle.Crypto.Engines.SerpentEngineBase
  #pragma pack(pop)
  static check_size<sizeof(SerpentEngineBase), 44 + sizeof(int)> __Org_BouncyCastle_Crypto_Engines_SerpentEngineBaseSizeCheck;
  static_assert(sizeof(SerpentEngineBase) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::SerpentEngineBase::get_AlgorithmName
// Il2CppName: get_AlgorithmName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Org::BouncyCastle::Crypto::Engines::SerpentEngineBase::*)()>(&Org::BouncyCastle::Crypto::Engines::SerpentEngineBase::get_AlgorithmName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::SerpentEngineBase*), "get_AlgorithmName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::SerpentEngineBase::get_IsPartialBlockOkay
// Il2CppName: get_IsPartialBlockOkay
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Crypto::Engines::SerpentEngineBase::*)()>(&Org::BouncyCastle::Crypto::Engines::SerpentEngineBase::get_IsPartialBlockOkay)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::SerpentEngineBase*), "get_IsPartialBlockOkay", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::SerpentEngineBase::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::SerpentEngineBase::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Org::BouncyCastle::Crypto::Engines::SerpentEngineBase::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::SerpentEngineBase*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::SerpentEngineBase::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Engines::SerpentEngineBase::*)(bool, ::Org::BouncyCastle::Crypto::ICipherParameters*)>(&Org::BouncyCastle::Crypto::Engines::SerpentEngineBase::Init)> {
  static const MethodInfo* get() {
    static auto* encrypting = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* parameters = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Crypto", "ICipherParameters")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::SerpentEngineBase*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{encrypting, parameters});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::SerpentEngineBase::GetBlockSize
// Il2CppName: GetBlockSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Engines::SerpentEngineBase::*)()>(&Org::BouncyCastle::Crypto::Engines::SerpentEngineBase::GetBlockSize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::SerpentEngineBase*), "GetBlockSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::SerpentEngineBase::ProcessBlock
// Il2CppName: ProcessBlock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Engines::SerpentEngineBase::*)(::ArrayW<uint8_t>, int, ::ArrayW<uint8_t>, int)>(&Org::BouncyCastle::Crypto::Engines::SerpentEngineBase::ProcessBlock)> {
  static const MethodInfo* get() {
    static auto* input = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* inOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* output = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* outOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::SerpentEngineBase*), "ProcessBlock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input, inOff, output, outOff});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::SerpentEngineBase::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Engines::SerpentEngineBase::*)()>(&Org::BouncyCastle::Crypto::Engines::SerpentEngineBase::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::SerpentEngineBase*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::SerpentEngineBase::RotateLeft
// Il2CppName: RotateLeft
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(int, int)>(&Org::BouncyCastle::Crypto::Engines::SerpentEngineBase::RotateLeft)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* bits = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::SerpentEngineBase*), "RotateLeft", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, bits});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::SerpentEngineBase::RotateRight
// Il2CppName: RotateRight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(int, int)>(&Org::BouncyCastle::Crypto::Engines::SerpentEngineBase::RotateRight)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* bits = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::SerpentEngineBase*), "RotateRight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, bits});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::SerpentEngineBase::Sb0
// Il2CppName: Sb0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Engines::SerpentEngineBase::*)(int, int, int, int)>(&Org::BouncyCastle::Crypto::Engines::SerpentEngineBase::Sb0)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* c = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* d = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::SerpentEngineBase*), "Sb0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, b, c, d});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::SerpentEngineBase::Ib0
// Il2CppName: Ib0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Engines::SerpentEngineBase::*)(int, int, int, int)>(&Org::BouncyCastle::Crypto::Engines::SerpentEngineBase::Ib0)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* c = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* d = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::SerpentEngineBase*), "Ib0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, b, c, d});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::SerpentEngineBase::Sb1
// Il2CppName: Sb1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Engines::SerpentEngineBase::*)(int, int, int, int)>(&Org::BouncyCastle::Crypto::Engines::SerpentEngineBase::Sb1)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* c = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* d = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::SerpentEngineBase*), "Sb1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, b, c, d});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::SerpentEngineBase::Ib1
// Il2CppName: Ib1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Engines::SerpentEngineBase::*)(int, int, int, int)>(&Org::BouncyCastle::Crypto::Engines::SerpentEngineBase::Ib1)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* c = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* d = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::SerpentEngineBase*), "Ib1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, b, c, d});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::SerpentEngineBase::Sb2
// Il2CppName: Sb2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Engines::SerpentEngineBase::*)(int, int, int, int)>(&Org::BouncyCastle::Crypto::Engines::SerpentEngineBase::Sb2)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* c = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* d = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::SerpentEngineBase*), "Sb2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, b, c, d});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::SerpentEngineBase::Ib2
// Il2CppName: Ib2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Engines::SerpentEngineBase::*)(int, int, int, int)>(&Org::BouncyCastle::Crypto::Engines::SerpentEngineBase::Ib2)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* c = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* d = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::SerpentEngineBase*), "Ib2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, b, c, d});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::SerpentEngineBase::Sb3
// Il2CppName: Sb3
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Engines::SerpentEngineBase::*)(int, int, int, int)>(&Org::BouncyCastle::Crypto::Engines::SerpentEngineBase::Sb3)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* c = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* d = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::SerpentEngineBase*), "Sb3", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, b, c, d});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::SerpentEngineBase::Ib3
// Il2CppName: Ib3
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Engines::SerpentEngineBase::*)(int, int, int, int)>(&Org::BouncyCastle::Crypto::Engines::SerpentEngineBase::Ib3)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* c = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* d = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::SerpentEngineBase*), "Ib3", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, b, c, d});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::SerpentEngineBase::Sb4
// Il2CppName: Sb4
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Engines::SerpentEngineBase::*)(int, int, int, int)>(&Org::BouncyCastle::Crypto::Engines::SerpentEngineBase::Sb4)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* c = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* d = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::SerpentEngineBase*), "Sb4", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, b, c, d});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::SerpentEngineBase::Ib4
// Il2CppName: Ib4
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Engines::SerpentEngineBase::*)(int, int, int, int)>(&Org::BouncyCastle::Crypto::Engines::SerpentEngineBase::Ib4)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* c = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* d = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::SerpentEngineBase*), "Ib4", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, b, c, d});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::SerpentEngineBase::Sb5
// Il2CppName: Sb5
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Engines::SerpentEngineBase::*)(int, int, int, int)>(&Org::BouncyCastle::Crypto::Engines::SerpentEngineBase::Sb5)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* c = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* d = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::SerpentEngineBase*), "Sb5", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, b, c, d});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::SerpentEngineBase::Ib5
// Il2CppName: Ib5
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Engines::SerpentEngineBase::*)(int, int, int, int)>(&Org::BouncyCastle::Crypto::Engines::SerpentEngineBase::Ib5)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* c = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* d = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::SerpentEngineBase*), "Ib5", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, b, c, d});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::SerpentEngineBase::Sb6
// Il2CppName: Sb6
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Engines::SerpentEngineBase::*)(int, int, int, int)>(&Org::BouncyCastle::Crypto::Engines::SerpentEngineBase::Sb6)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* c = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* d = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::SerpentEngineBase*), "Sb6", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, b, c, d});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::SerpentEngineBase::Ib6
// Il2CppName: Ib6
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Engines::SerpentEngineBase::*)(int, int, int, int)>(&Org::BouncyCastle::Crypto::Engines::SerpentEngineBase::Ib6)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* c = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* d = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::SerpentEngineBase*), "Ib6", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, b, c, d});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::SerpentEngineBase::Sb7
// Il2CppName: Sb7
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Engines::SerpentEngineBase::*)(int, int, int, int)>(&Org::BouncyCastle::Crypto::Engines::SerpentEngineBase::Sb7)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* c = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* d = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::SerpentEngineBase*), "Sb7", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, b, c, d});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::SerpentEngineBase::Ib7
// Il2CppName: Ib7
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Engines::SerpentEngineBase::*)(int, int, int, int)>(&Org::BouncyCastle::Crypto::Engines::SerpentEngineBase::Ib7)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* c = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* d = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::SerpentEngineBase*), "Ib7", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, b, c, d});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::SerpentEngineBase::LT
// Il2CppName: LT
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Engines::SerpentEngineBase::*)()>(&Org::BouncyCastle::Crypto::Engines::SerpentEngineBase::LT)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::SerpentEngineBase*), "LT", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::SerpentEngineBase::InverseLT
// Il2CppName: InverseLT
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Engines::SerpentEngineBase::*)()>(&Org::BouncyCastle::Crypto::Engines::SerpentEngineBase::InverseLT)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::SerpentEngineBase*), "InverseLT", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::SerpentEngineBase::MakeWorkingKey
// Il2CppName: MakeWorkingKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<int> (Org::BouncyCastle::Crypto::Engines::SerpentEngineBase::*)(::ArrayW<uint8_t>)>(&Org::BouncyCastle::Crypto::Engines::SerpentEngineBase::MakeWorkingKey)> {
  static const MethodInfo* get() {
    static auto* key = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::SerpentEngineBase*), "MakeWorkingKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::SerpentEngineBase::EncryptBlock
// Il2CppName: EncryptBlock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Engines::SerpentEngineBase::*)(::ArrayW<uint8_t>, int, ::ArrayW<uint8_t>, int)>(&Org::BouncyCastle::Crypto::Engines::SerpentEngineBase::EncryptBlock)> {
  static const MethodInfo* get() {
    static auto* input = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* inOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* output = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* outOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::SerpentEngineBase*), "EncryptBlock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input, inOff, output, outOff});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::SerpentEngineBase::DecryptBlock
// Il2CppName: DecryptBlock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Engines::SerpentEngineBase::*)(::ArrayW<uint8_t>, int, ::ArrayW<uint8_t>, int)>(&Org::BouncyCastle::Crypto::Engines::SerpentEngineBase::DecryptBlock)> {
  static const MethodInfo* get() {
    static auto* input = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* inOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* output = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* outOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::SerpentEngineBase*), "DecryptBlock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input, inOff, output, outOff});
  }
};
