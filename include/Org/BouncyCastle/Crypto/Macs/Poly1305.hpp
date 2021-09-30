// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Org.BouncyCastle.Crypto.IMac
#include "Org/BouncyCastle/Crypto/IMac.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Crypto
namespace Org::BouncyCastle::Crypto {
  // Forward declaring type: IBlockCipher
  class IBlockCipher;
  // Forward declaring type: ICipherParameters
  class ICipherParameters;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Crypto.Macs
namespace Org::BouncyCastle::Crypto::Macs {
  // Size: 0x78
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Macs.Poly1305
  // [TokenAttribute] Offset: FFFFFFFF
  class Poly1305 : public ::Il2CppObject/*, public Org::BouncyCastle::Crypto::IMac*/ {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    private:
    #endif
    // private readonly Org.BouncyCastle.Crypto.IBlockCipher cipher
    // Size: 0x8
    // Offset: 0x10
    Org::BouncyCastle::Crypto::IBlockCipher* cipher;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Crypto::IBlockCipher*) == 0x8);
    // private readonly System.Byte[] singleByte
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<uint8_t> singleByte;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // private System.UInt32 r0
    // Size: 0x4
    // Offset: 0x20
    uint r0;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // private System.UInt32 r1
    // Size: 0x4
    // Offset: 0x24
    uint r1;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // private System.UInt32 r2
    // Size: 0x4
    // Offset: 0x28
    uint r2;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // private System.UInt32 r3
    // Size: 0x4
    // Offset: 0x2C
    uint r3;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // private System.UInt32 r4
    // Size: 0x4
    // Offset: 0x30
    uint r4;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // private System.UInt32 s1
    // Size: 0x4
    // Offset: 0x34
    uint s1;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // private System.UInt32 s2
    // Size: 0x4
    // Offset: 0x38
    uint s2;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // private System.UInt32 s3
    // Size: 0x4
    // Offset: 0x3C
    uint s3;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // private System.UInt32 s4
    // Size: 0x4
    // Offset: 0x40
    uint s4;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // private System.UInt32 k0
    // Size: 0x4
    // Offset: 0x44
    uint k0;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // private System.UInt32 k1
    // Size: 0x4
    // Offset: 0x48
    uint k1;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // private System.UInt32 k2
    // Size: 0x4
    // Offset: 0x4C
    uint k2;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // private System.UInt32 k3
    // Size: 0x4
    // Offset: 0x50
    uint k3;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // Padding between fields: k3 and: currentBlock
    char __padding14[0x4] = {};
    // private System.Byte[] currentBlock
    // Size: 0x8
    // Offset: 0x58
    ::ArrayW<uint8_t> currentBlock;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // private System.Int32 currentBlockOffset
    // Size: 0x4
    // Offset: 0x60
    int currentBlockOffset;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.UInt32 h0
    // Size: 0x4
    // Offset: 0x64
    uint h0;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // private System.UInt32 h1
    // Size: 0x4
    // Offset: 0x68
    uint h1;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // private System.UInt32 h2
    // Size: 0x4
    // Offset: 0x6C
    uint h2;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // private System.UInt32 h3
    // Size: 0x4
    // Offset: 0x70
    uint h3;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // private System.UInt32 h4
    // Size: 0x4
    // Offset: 0x74
    uint h4;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    public:
    // Creating interface conversion operator: operator Org::BouncyCastle::Crypto::IMac
    operator Org::BouncyCastle::Crypto::IMac() noexcept {
      return *reinterpret_cast<Org::BouncyCastle::Crypto::IMac*>(this);
    }
    // Get instance field reference: private readonly Org.BouncyCastle.Crypto.IBlockCipher cipher
    Org::BouncyCastle::Crypto::IBlockCipher*& dyn_cipher();
    // Get instance field reference: private readonly System.Byte[] singleByte
    ::ArrayW<uint8_t>& dyn_singleByte();
    // Get instance field reference: private System.UInt32 r0
    uint& dyn_r0();
    // Get instance field reference: private System.UInt32 r1
    uint& dyn_r1();
    // Get instance field reference: private System.UInt32 r2
    uint& dyn_r2();
    // Get instance field reference: private System.UInt32 r3
    uint& dyn_r3();
    // Get instance field reference: private System.UInt32 r4
    uint& dyn_r4();
    // Get instance field reference: private System.UInt32 s1
    uint& dyn_s1();
    // Get instance field reference: private System.UInt32 s2
    uint& dyn_s2();
    // Get instance field reference: private System.UInt32 s3
    uint& dyn_s3();
    // Get instance field reference: private System.UInt32 s4
    uint& dyn_s4();
    // Get instance field reference: private System.UInt32 k0
    uint& dyn_k0();
    // Get instance field reference: private System.UInt32 k1
    uint& dyn_k1();
    // Get instance field reference: private System.UInt32 k2
    uint& dyn_k2();
    // Get instance field reference: private System.UInt32 k3
    uint& dyn_k3();
    // Get instance field reference: private System.Byte[] currentBlock
    ::ArrayW<uint8_t>& dyn_currentBlock();
    // Get instance field reference: private System.Int32 currentBlockOffset
    int& dyn_currentBlockOffset();
    // Get instance field reference: private System.UInt32 h0
    uint& dyn_h0();
    // Get instance field reference: private System.UInt32 h1
    uint& dyn_h1();
    // Get instance field reference: private System.UInt32 h2
    uint& dyn_h2();
    // Get instance field reference: private System.UInt32 h3
    uint& dyn_h3();
    // Get instance field reference: private System.UInt32 h4
    uint& dyn_h4();
    // public System.Void Init(Org.BouncyCastle.Crypto.ICipherParameters parameters)
    // Offset: 0x1A88D50
    void Init(Org::BouncyCastle::Crypto::ICipherParameters* parameters);
    // private System.Void SetKey(System.Byte[] key, System.Byte[] nonce)
    // Offset: 0x1A88ECC
    void SetKey(::ArrayW<uint8_t> key, ::ArrayW<uint8_t> nonce);
    // public System.Int32 GetMacSize()
    // Offset: 0x1A89208
    int GetMacSize();
    // public System.Void Update(System.Byte input)
    // Offset: 0x1A89210
    void Update(uint8_t input);
    // public System.Void BlockUpdate(System.Byte[] input, System.Int32 inOff, System.Int32 len)
    // Offset: 0x1A89250
    void BlockUpdate(::ArrayW<uint8_t> input, int inOff, int len);
    // private System.Void ProcessBlock()
    // Offset: 0x1A89348
    void ProcessBlock();
    // public System.Int32 DoFinal(System.Byte[] output, System.Int32 outOff)
    // Offset: 0x1A89580
    int DoFinal(::ArrayW<uint8_t> output, int outOff);
    // public System.Void Reset()
    // Offset: 0x1A891FC
    void Reset();
    // static private System.UInt64 mul32x32_64(System.UInt32 i1, System.UInt32 i2)
    // Offset: 0x1A89578
    static uint64_t mul32x32_64(uint i1, uint i2);
    // public System.Void .ctor()
    // Offset: 0x1A88CD4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Poly1305* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Macs::Poly1305::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Poly1305*, creationType>()));
    }
  }; // Org.BouncyCastle.Crypto.Macs.Poly1305
  #pragma pack(pop)
  static check_size<sizeof(Poly1305), 116 + sizeof(uint)> __Org_BouncyCastle_Crypto_Macs_Poly1305SizeCheck;
  static_assert(sizeof(Poly1305) == 0x78);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Macs::Poly1305*, "Org.BouncyCastle.Crypto.Macs", "Poly1305");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Macs::Poly1305::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Macs::Poly1305::*)(Org::BouncyCastle::Crypto::ICipherParameters*)>(&Org::BouncyCastle::Crypto::Macs::Poly1305::Init)> {
  static const MethodInfo* get() {
    static auto* parameters = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Crypto", "ICipherParameters")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Macs::Poly1305*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{parameters});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Macs::Poly1305::SetKey
// Il2CppName: SetKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Macs::Poly1305::*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(&Org::BouncyCastle::Crypto::Macs::Poly1305::SetKey)> {
  static const MethodInfo* get() {
    static auto* key = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* nonce = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Macs::Poly1305*), "SetKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key, nonce});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Macs::Poly1305::GetMacSize
// Il2CppName: GetMacSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Macs::Poly1305::*)()>(&Org::BouncyCastle::Crypto::Macs::Poly1305::GetMacSize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Macs::Poly1305*), "GetMacSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Macs::Poly1305::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Macs::Poly1305::*)(uint8_t)>(&Org::BouncyCastle::Crypto::Macs::Poly1305::Update)> {
  static const MethodInfo* get() {
    static auto* input = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Macs::Poly1305*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Macs::Poly1305::BlockUpdate
// Il2CppName: BlockUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Macs::Poly1305::*)(::ArrayW<uint8_t>, int, int)>(&Org::BouncyCastle::Crypto::Macs::Poly1305::BlockUpdate)> {
  static const MethodInfo* get() {
    static auto* input = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* inOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* len = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Macs::Poly1305*), "BlockUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input, inOff, len});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Macs::Poly1305::ProcessBlock
// Il2CppName: ProcessBlock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Macs::Poly1305::*)()>(&Org::BouncyCastle::Crypto::Macs::Poly1305::ProcessBlock)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Macs::Poly1305*), "ProcessBlock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Macs::Poly1305::DoFinal
// Il2CppName: DoFinal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Macs::Poly1305::*)(::ArrayW<uint8_t>, int)>(&Org::BouncyCastle::Crypto::Macs::Poly1305::DoFinal)> {
  static const MethodInfo* get() {
    static auto* output = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* outOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Macs::Poly1305*), "DoFinal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{output, outOff});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Macs::Poly1305::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Macs::Poly1305::*)()>(&Org::BouncyCastle::Crypto::Macs::Poly1305::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Macs::Poly1305*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Macs::Poly1305::mul32x32_64
// Il2CppName: mul32x32_64
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (*)(uint, uint)>(&Org::BouncyCastle::Crypto::Macs::Poly1305::mul32x32_64)> {
  static const MethodInfo* get() {
    static auto* i1 = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* i2 = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Macs::Poly1305*), "mul32x32_64", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{i1, i2});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Macs::Poly1305::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
