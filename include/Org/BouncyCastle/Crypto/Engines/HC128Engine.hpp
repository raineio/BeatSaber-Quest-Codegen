// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Org.BouncyCastle.Crypto.IStreamCipher
#include "Org/BouncyCastle/Crypto/IStreamCipher.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
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
  // Size: 0x4C
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Engines.HC128Engine
  // [TokenAttribute] Offset: FFFFFFFF
  class HC128Engine : public ::Il2CppObject/*, public Org::BouncyCastle::Crypto::IStreamCipher*/ {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    private:
    #endif
    // private System.UInt32[] p
    // Size: 0x8
    // Offset: 0x10
    ::ArrayW<uint> p;
    // Field size check
    static_assert(sizeof(::ArrayW<uint>) == 0x8);
    // private System.UInt32[] q
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<uint> q;
    // Field size check
    static_assert(sizeof(::ArrayW<uint>) == 0x8);
    // private System.UInt32 cnt
    // Size: 0x4
    // Offset: 0x20
    uint cnt;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // Padding between fields: cnt and: key
    char __padding2[0x4] = {};
    // private System.Byte[] key
    // Size: 0x8
    // Offset: 0x28
    ::ArrayW<uint8_t> key;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // private System.Byte[] iv
    // Size: 0x8
    // Offset: 0x30
    ::ArrayW<uint8_t> iv;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // private System.Boolean initialised
    // Size: 0x1
    // Offset: 0x38
    bool initialised;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: initialised and: buf
    char __padding5[0x7] = {};
    // private System.Byte[] buf
    // Size: 0x8
    // Offset: 0x40
    ::ArrayW<uint8_t> buf;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // private System.Int32 idx
    // Size: 0x4
    // Offset: 0x48
    int idx;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating interface conversion operator: operator Org::BouncyCastle::Crypto::IStreamCipher
    operator Org::BouncyCastle::Crypto::IStreamCipher() noexcept {
      return *reinterpret_cast<Org::BouncyCastle::Crypto::IStreamCipher*>(this);
    }
    // Get instance field reference: private System.UInt32[] p
    ::ArrayW<uint>& dyn_p();
    // Get instance field reference: private System.UInt32[] q
    ::ArrayW<uint>& dyn_q();
    // Get instance field reference: private System.UInt32 cnt
    uint& dyn_cnt();
    // Get instance field reference: private System.Byte[] key
    ::ArrayW<uint8_t>& dyn_key();
    // Get instance field reference: private System.Byte[] iv
    ::ArrayW<uint8_t>& dyn_iv();
    // Get instance field reference: private System.Boolean initialised
    bool& dyn_initialised();
    // Get instance field reference: private System.Byte[] buf
    ::ArrayW<uint8_t>& dyn_buf();
    // Get instance field reference: private System.Int32 idx
    int& dyn_idx();
    // public System.String get_AlgorithmName()
    // Offset: 0x1FCFD54
    ::Il2CppString* get_AlgorithmName();
    // static private System.UInt32 F1(System.UInt32 x)
    // Offset: 0x1FCF754
    static uint F1(uint x);
    // static private System.UInt32 F2(System.UInt32 x)
    // Offset: 0x1FCF76C
    static uint F2(uint x);
    // private System.UInt32 G1(System.UInt32 x, System.UInt32 y, System.UInt32 z)
    // Offset: 0x1FCF77C
    uint G1(uint x, uint y, uint z);
    // private System.UInt32 G2(System.UInt32 x, System.UInt32 y, System.UInt32 z)
    // Offset: 0x1FCF790
    uint G2(uint x, uint y, uint z);
    // static private System.UInt32 RotateLeft(System.UInt32 x, System.Int32 bits)
    // Offset: 0x1FCF7A4
    static uint RotateLeft(uint x, int bits);
    // static private System.UInt32 RotateRight(System.UInt32 x, System.Int32 bits)
    // Offset: 0x1FCF764
    static uint RotateRight(uint x, int bits);
    // private System.UInt32 H1(System.UInt32 x)
    // Offset: 0x1FCF7B0
    uint H1(uint x);
    // private System.UInt32 H2(System.UInt32 x)
    // Offset: 0x1FCF808
    uint H2(uint x);
    // static private System.UInt32 Mod1024(System.UInt32 x)
    // Offset: 0x1FCF860
    static uint Mod1024(uint x);
    // static private System.UInt32 Mod512(System.UInt32 x)
    // Offset: 0x1FCF868
    static uint Mod512(uint x);
    // static private System.UInt32 Dim(System.UInt32 x, System.UInt32 y)
    // Offset: 0x1FCF870
    static uint Dim(uint x, uint y);
    // private System.UInt32 Step()
    // Offset: 0x1FCF87C
    uint Step();
    // private System.Void Init()
    // Offset: 0x1FCFA48
    void Init();
    // public System.Void Init(System.Boolean forEncryption, Org.BouncyCastle.Crypto.ICipherParameters parameters)
    // Offset: 0x1FCFD9C
    void Init(bool forEncryption, Org::BouncyCastle::Crypto::ICipherParameters* parameters);
    // private System.Byte GetByte()
    // Offset: 0x1FCFF6C
    uint8_t GetByte();
    // public System.Void ProcessBytes(System.Byte[] input, System.Int32 inOff, System.Int32 len, System.Byte[] output, System.Int32 outOff)
    // Offset: 0x1FCFFEC
    void ProcessBytes(::ArrayW<uint8_t> input, int inOff, int len, ::ArrayW<uint8_t> output, int outOff);
    // public System.Void Reset()
    // Offset: 0x1FD018C
    void Reset();
    // public System.Void .ctor()
    // Offset: 0x1FD0190
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HC128Engine* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Engines::HC128Engine::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HC128Engine*, creationType>()));
    }
  }; // Org.BouncyCastle.Crypto.Engines.HC128Engine
  #pragma pack(pop)
  static check_size<sizeof(HC128Engine), 72 + sizeof(int)> __Org_BouncyCastle_Crypto_Engines_HC128EngineSizeCheck;
  static_assert(sizeof(HC128Engine) == 0x4C);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Engines::HC128Engine*, "Org.BouncyCastle.Crypto.Engines", "HC128Engine");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::HC128Engine::get_AlgorithmName
// Il2CppName: get_AlgorithmName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (Org::BouncyCastle::Crypto::Engines::HC128Engine::*)()>(&Org::BouncyCastle::Crypto::Engines::HC128Engine::get_AlgorithmName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::HC128Engine*), "get_AlgorithmName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::HC128Engine::F1
// Il2CppName: F1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (*)(uint)>(&Org::BouncyCastle::Crypto::Engines::HC128Engine::F1)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::HC128Engine*), "F1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::HC128Engine::F2
// Il2CppName: F2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (*)(uint)>(&Org::BouncyCastle::Crypto::Engines::HC128Engine::F2)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::HC128Engine*), "F2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::HC128Engine::G1
// Il2CppName: G1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (Org::BouncyCastle::Crypto::Engines::HC128Engine::*)(uint, uint, uint)>(&Org::BouncyCastle::Crypto::Engines::HC128Engine::G1)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* y = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* z = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::HC128Engine*), "G1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, y, z});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::HC128Engine::G2
// Il2CppName: G2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (Org::BouncyCastle::Crypto::Engines::HC128Engine::*)(uint, uint, uint)>(&Org::BouncyCastle::Crypto::Engines::HC128Engine::G2)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* y = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* z = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::HC128Engine*), "G2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, y, z});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::HC128Engine::RotateLeft
// Il2CppName: RotateLeft
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (*)(uint, int)>(&Org::BouncyCastle::Crypto::Engines::HC128Engine::RotateLeft)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* bits = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::HC128Engine*), "RotateLeft", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, bits});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::HC128Engine::RotateRight
// Il2CppName: RotateRight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (*)(uint, int)>(&Org::BouncyCastle::Crypto::Engines::HC128Engine::RotateRight)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* bits = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::HC128Engine*), "RotateRight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, bits});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::HC128Engine::H1
// Il2CppName: H1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (Org::BouncyCastle::Crypto::Engines::HC128Engine::*)(uint)>(&Org::BouncyCastle::Crypto::Engines::HC128Engine::H1)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::HC128Engine*), "H1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::HC128Engine::H2
// Il2CppName: H2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (Org::BouncyCastle::Crypto::Engines::HC128Engine::*)(uint)>(&Org::BouncyCastle::Crypto::Engines::HC128Engine::H2)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::HC128Engine*), "H2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::HC128Engine::Mod1024
// Il2CppName: Mod1024
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (*)(uint)>(&Org::BouncyCastle::Crypto::Engines::HC128Engine::Mod1024)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::HC128Engine*), "Mod1024", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::HC128Engine::Mod512
// Il2CppName: Mod512
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (*)(uint)>(&Org::BouncyCastle::Crypto::Engines::HC128Engine::Mod512)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::HC128Engine*), "Mod512", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::HC128Engine::Dim
// Il2CppName: Dim
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (*)(uint, uint)>(&Org::BouncyCastle::Crypto::Engines::HC128Engine::Dim)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* y = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::HC128Engine*), "Dim", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, y});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::HC128Engine::Step
// Il2CppName: Step
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (Org::BouncyCastle::Crypto::Engines::HC128Engine::*)()>(&Org::BouncyCastle::Crypto::Engines::HC128Engine::Step)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::HC128Engine*), "Step", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::HC128Engine::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Engines::HC128Engine::*)()>(&Org::BouncyCastle::Crypto::Engines::HC128Engine::Init)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::HC128Engine*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::HC128Engine::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Engines::HC128Engine::*)(bool, Org::BouncyCastle::Crypto::ICipherParameters*)>(&Org::BouncyCastle::Crypto::Engines::HC128Engine::Init)> {
  static const MethodInfo* get() {
    static auto* forEncryption = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* parameters = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Crypto", "ICipherParameters")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::HC128Engine*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{forEncryption, parameters});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::HC128Engine::GetByte
// Il2CppName: GetByte
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (Org::BouncyCastle::Crypto::Engines::HC128Engine::*)()>(&Org::BouncyCastle::Crypto::Engines::HC128Engine::GetByte)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::HC128Engine*), "GetByte", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::HC128Engine::ProcessBytes
// Il2CppName: ProcessBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Engines::HC128Engine::*)(::ArrayW<uint8_t>, int, int, ::ArrayW<uint8_t>, int)>(&Org::BouncyCastle::Crypto::Engines::HC128Engine::ProcessBytes)> {
  static const MethodInfo* get() {
    static auto* input = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* inOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* len = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* output = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* outOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::HC128Engine*), "ProcessBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input, inOff, len, output, outOff});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::HC128Engine::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Engines::HC128Engine::*)()>(&Org::BouncyCastle::Crypto::Engines::HC128Engine::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::HC128Engine*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::HC128Engine::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
