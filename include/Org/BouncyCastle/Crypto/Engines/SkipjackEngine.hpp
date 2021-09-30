// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Org.BouncyCastle.Crypto.IBlockCipher
#include "Org/BouncyCastle/Crypto/IBlockCipher.hpp"
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
  // Size: 0x31
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Engines.SkipjackEngine
  // [TokenAttribute] Offset: FFFFFFFF
  class SkipjackEngine : public ::Il2CppObject/*, public Org::BouncyCastle::Crypto::IBlockCipher*/ {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    private:
    #endif
    // private System.Int32[] key0
    // Size: 0x8
    // Offset: 0x10
    ::ArrayW<int> key0;
    // Field size check
    static_assert(sizeof(::ArrayW<int>) == 0x8);
    // private System.Int32[] key1
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<int> key1;
    // Field size check
    static_assert(sizeof(::ArrayW<int>) == 0x8);
    // private System.Int32[] key2
    // Size: 0x8
    // Offset: 0x20
    ::ArrayW<int> key2;
    // Field size check
    static_assert(sizeof(::ArrayW<int>) == 0x8);
    // private System.Int32[] key3
    // Size: 0x8
    // Offset: 0x28
    ::ArrayW<int> key3;
    // Field size check
    static_assert(sizeof(::ArrayW<int>) == 0x8);
    // private System.Boolean encrypting
    // Size: 0x1
    // Offset: 0x30
    bool encrypting;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating interface conversion operator: operator Org::BouncyCastle::Crypto::IBlockCipher
    operator Org::BouncyCastle::Crypto::IBlockCipher() noexcept {
      return *reinterpret_cast<Org::BouncyCastle::Crypto::IBlockCipher*>(this);
    }
    // Get static field: static private readonly System.Int16[] ftable
    static ::ArrayW<int16_t> _get_ftable();
    // Set static field: static private readonly System.Int16[] ftable
    static void _set_ftable(::ArrayW<int16_t> value);
    // Get instance field reference: private System.Int32[] key0
    ::ArrayW<int>& dyn_key0();
    // Get instance field reference: private System.Int32[] key1
    ::ArrayW<int>& dyn_key1();
    // Get instance field reference: private System.Int32[] key2
    ::ArrayW<int>& dyn_key2();
    // Get instance field reference: private System.Int32[] key3
    ::ArrayW<int>& dyn_key3();
    // Get instance field reference: private System.Boolean encrypting
    bool& dyn_encrypting();
    // public System.String get_AlgorithmName()
    // Offset: 0x2048128
    ::Il2CppString* get_AlgorithmName();
    // public System.Boolean get_IsPartialBlockOkay()
    // Offset: 0x2048170
    bool get_IsPartialBlockOkay();
    // static private System.Void .cctor()
    // Offset: 0x2048A50
    static void _cctor();
    // public System.Void Init(System.Boolean forEncryption, Org.BouncyCastle.Crypto.ICipherParameters parameters)
    // Offset: 0x2047DF4
    void Init(bool forEncryption, Org::BouncyCastle::Crypto::ICipherParameters* parameters);
    // public System.Int32 GetBlockSize()
    // Offset: 0x2048178
    int GetBlockSize();
    // public System.Int32 ProcessBlock(System.Byte[] input, System.Int32 inOff, System.Byte[] output, System.Int32 outOff)
    // Offset: 0x2048180
    int ProcessBlock(::ArrayW<uint8_t> input, int inOff, ::ArrayW<uint8_t> output, int outOff);
    // public System.Void Reset()
    // Offset: 0x20482A0
    void Reset();
    // private System.Int32 G(System.Int32 k, System.Int32 w)
    // Offset: 0x20482A4
    int G(int k, int w);
    // public System.Int32 EncryptBlock(System.Byte[] input, System.Int32 inOff, System.Byte[] outBytes, System.Int32 outOff)
    // Offset: 0x2048418
    int EncryptBlock(::ArrayW<uint8_t> input, int inOff, ::ArrayW<uint8_t> outBytes, int outOff);
    // private System.Int32 H(System.Int32 k, System.Int32 w)
    // Offset: 0x204866C
    int H(int k, int w);
    // public System.Int32 DecryptBlock(System.Byte[] input, System.Int32 inOff, System.Byte[] outBytes, System.Int32 outOff)
    // Offset: 0x20487E0
    int DecryptBlock(::ArrayW<uint8_t> input, int inOff, ::ArrayW<uint8_t> outBytes, int outOff);
    // public System.Void .ctor()
    // Offset: 0x2048ACC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SkipjackEngine* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Engines::SkipjackEngine::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SkipjackEngine*, creationType>()));
    }
  }; // Org.BouncyCastle.Crypto.Engines.SkipjackEngine
  #pragma pack(pop)
  static check_size<sizeof(SkipjackEngine), 48 + sizeof(bool)> __Org_BouncyCastle_Crypto_Engines_SkipjackEngineSizeCheck;
  static_assert(sizeof(SkipjackEngine) == 0x31);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Engines::SkipjackEngine*, "Org.BouncyCastle.Crypto.Engines", "SkipjackEngine");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::SkipjackEngine::get_AlgorithmName
// Il2CppName: get_AlgorithmName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (Org::BouncyCastle::Crypto::Engines::SkipjackEngine::*)()>(&Org::BouncyCastle::Crypto::Engines::SkipjackEngine::get_AlgorithmName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::SkipjackEngine*), "get_AlgorithmName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::SkipjackEngine::get_IsPartialBlockOkay
// Il2CppName: get_IsPartialBlockOkay
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Crypto::Engines::SkipjackEngine::*)()>(&Org::BouncyCastle::Crypto::Engines::SkipjackEngine::get_IsPartialBlockOkay)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::SkipjackEngine*), "get_IsPartialBlockOkay", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::SkipjackEngine::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Org::BouncyCastle::Crypto::Engines::SkipjackEngine::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::SkipjackEngine*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::SkipjackEngine::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Engines::SkipjackEngine::*)(bool, Org::BouncyCastle::Crypto::ICipherParameters*)>(&Org::BouncyCastle::Crypto::Engines::SkipjackEngine::Init)> {
  static const MethodInfo* get() {
    static auto* forEncryption = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* parameters = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Crypto", "ICipherParameters")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::SkipjackEngine*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{forEncryption, parameters});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::SkipjackEngine::GetBlockSize
// Il2CppName: GetBlockSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Engines::SkipjackEngine::*)()>(&Org::BouncyCastle::Crypto::Engines::SkipjackEngine::GetBlockSize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::SkipjackEngine*), "GetBlockSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::SkipjackEngine::ProcessBlock
// Il2CppName: ProcessBlock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Engines::SkipjackEngine::*)(::ArrayW<uint8_t>, int, ::ArrayW<uint8_t>, int)>(&Org::BouncyCastle::Crypto::Engines::SkipjackEngine::ProcessBlock)> {
  static const MethodInfo* get() {
    static auto* input = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* inOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* output = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* outOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::SkipjackEngine*), "ProcessBlock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input, inOff, output, outOff});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::SkipjackEngine::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Engines::SkipjackEngine::*)()>(&Org::BouncyCastle::Crypto::Engines::SkipjackEngine::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::SkipjackEngine*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::SkipjackEngine::G
// Il2CppName: G
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Engines::SkipjackEngine::*)(int, int)>(&Org::BouncyCastle::Crypto::Engines::SkipjackEngine::G)> {
  static const MethodInfo* get() {
    static auto* k = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* w = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::SkipjackEngine*), "G", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{k, w});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::SkipjackEngine::EncryptBlock
// Il2CppName: EncryptBlock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Engines::SkipjackEngine::*)(::ArrayW<uint8_t>, int, ::ArrayW<uint8_t>, int)>(&Org::BouncyCastle::Crypto::Engines::SkipjackEngine::EncryptBlock)> {
  static const MethodInfo* get() {
    static auto* input = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* inOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* outBytes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* outOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::SkipjackEngine*), "EncryptBlock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input, inOff, outBytes, outOff});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::SkipjackEngine::H
// Il2CppName: H
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Engines::SkipjackEngine::*)(int, int)>(&Org::BouncyCastle::Crypto::Engines::SkipjackEngine::H)> {
  static const MethodInfo* get() {
    static auto* k = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* w = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::SkipjackEngine*), "H", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{k, w});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::SkipjackEngine::DecryptBlock
// Il2CppName: DecryptBlock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Engines::SkipjackEngine::*)(::ArrayW<uint8_t>, int, ::ArrayW<uint8_t>, int)>(&Org::BouncyCastle::Crypto::Engines::SkipjackEngine::DecryptBlock)> {
  static const MethodInfo* get() {
    static auto* input = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* inOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* outBytes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* outOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::SkipjackEngine*), "DecryptBlock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input, inOff, outBytes, outOff});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::SkipjackEngine::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
