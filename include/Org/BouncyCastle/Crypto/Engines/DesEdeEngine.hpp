// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Org.BouncyCastle.Crypto.Engines.DesEngine
#include "Org/BouncyCastle/Crypto/Engines/DesEngine.hpp"
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
  // Forward declaring type: DesEdeEngine
  class DesEdeEngine;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Engines::DesEdeEngine);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Engines::DesEdeEngine*, "Org.BouncyCastle.Crypto.Engines", "DesEdeEngine");
// Type namespace: Org.BouncyCastle.Crypto.Engines
namespace Org::BouncyCastle::Crypto::Engines {
  // Size: 0x31
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Engines.DesEdeEngine
  // [TokenAttribute] Offset: FFFFFFFF
  class DesEdeEngine : public ::Org::BouncyCastle::Crypto::Engines::DesEngine {
    public:
    public:
    // private System.Int32[] workingKey1
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<int> workingKey1;
    // Field size check
    static_assert(sizeof(::ArrayW<int>) == 0x8);
    // private System.Int32[] workingKey2
    // Size: 0x8
    // Offset: 0x20
    ::ArrayW<int> workingKey2;
    // Field size check
    static_assert(sizeof(::ArrayW<int>) == 0x8);
    // private System.Int32[] workingKey3
    // Size: 0x8
    // Offset: 0x28
    ::ArrayW<int> workingKey3;
    // Field size check
    static_assert(sizeof(::ArrayW<int>) == 0x8);
    // private System.Boolean forEncryption
    // Size: 0x1
    // Offset: 0x30
    bool forEncryption;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Deleting conversion operator: operator ::ArrayW<int>
    constexpr operator ::ArrayW<int>() const noexcept = delete;
    // Get instance field reference: private System.Int32[] workingKey1
    [[deprecated("Use field access instead!")]] ::ArrayW<int>& dyn_workingKey1();
    // Get instance field reference: private System.Int32[] workingKey2
    [[deprecated("Use field access instead!")]] ::ArrayW<int>& dyn_workingKey2();
    // Get instance field reference: private System.Int32[] workingKey3
    [[deprecated("Use field access instead!")]] ::ArrayW<int>& dyn_workingKey3();
    // Get instance field reference: private System.Boolean forEncryption
    [[deprecated("Use field access instead!")]] bool& dyn_forEncryption();
    // public override System.String get_AlgorithmName()
    // Offset: 0x23721C4
    // Implemented from: Org.BouncyCastle.Crypto.Engines.DesEngine
    // Base method: System.String DesEngine::get_AlgorithmName()
    ::StringW get_AlgorithmName();
    // public System.Void .ctor()
    // Offset: 0x2372844
    // Implemented from: Org.BouncyCastle.Crypto.Engines.DesEngine
    // Base method: System.Void DesEngine::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DesEdeEngine* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Org::BouncyCastle::Crypto::Engines::DesEdeEngine::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DesEdeEngine*, creationType>()));
    }
    // public override System.Void Init(System.Boolean forEncryption, Org.BouncyCastle.Crypto.ICipherParameters parameters)
    // Offset: 0x23719AC
    // Implemented from: Org.BouncyCastle.Crypto.Engines.DesEngine
    // Base method: System.Void DesEngine::Init(System.Boolean forEncryption, Org.BouncyCastle.Crypto.ICipherParameters parameters)
    void Init(bool forEncryption, ::Org::BouncyCastle::Crypto::ICipherParameters* parameters);
    // public override System.Int32 GetBlockSize()
    // Offset: 0x237220C
    // Implemented from: Org.BouncyCastle.Crypto.Engines.DesEngine
    // Base method: System.Int32 DesEngine::GetBlockSize()
    int GetBlockSize();
    // public override System.Int32 ProcessBlock(System.Byte[] input, System.Int32 inOff, System.Byte[] output, System.Int32 outOff)
    // Offset: 0x2372214
    // Implemented from: Org.BouncyCastle.Crypto.Engines.DesEngine
    // Base method: System.Int32 DesEngine::ProcessBlock(System.Byte[] input, System.Int32 inOff, System.Byte[] output, System.Int32 outOff)
    int ProcessBlock(::ArrayW<uint8_t> input, int inOff, ::ArrayW<uint8_t> output, int outOff);
    // public override System.Void Reset()
    // Offset: 0x2372840
    // Implemented from: Org.BouncyCastle.Crypto.Engines.DesEngine
    // Base method: System.Void DesEngine::Reset()
    void Reset();
  }; // Org.BouncyCastle.Crypto.Engines.DesEdeEngine
  #pragma pack(pop)
  static check_size<sizeof(DesEdeEngine), 48 + sizeof(bool)> __Org_BouncyCastle_Crypto_Engines_DesEdeEngineSizeCheck;
  static_assert(sizeof(DesEdeEngine) == 0x31);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::DesEdeEngine::get_AlgorithmName
// Il2CppName: get_AlgorithmName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Org::BouncyCastle::Crypto::Engines::DesEdeEngine::*)()>(&Org::BouncyCastle::Crypto::Engines::DesEdeEngine::get_AlgorithmName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::DesEdeEngine*), "get_AlgorithmName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::DesEdeEngine::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::DesEdeEngine::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Engines::DesEdeEngine::*)(bool, ::Org::BouncyCastle::Crypto::ICipherParameters*)>(&Org::BouncyCastle::Crypto::Engines::DesEdeEngine::Init)> {
  static const MethodInfo* get() {
    static auto* forEncryption = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* parameters = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Crypto", "ICipherParameters")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::DesEdeEngine*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{forEncryption, parameters});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::DesEdeEngine::GetBlockSize
// Il2CppName: GetBlockSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Engines::DesEdeEngine::*)()>(&Org::BouncyCastle::Crypto::Engines::DesEdeEngine::GetBlockSize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::DesEdeEngine*), "GetBlockSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::DesEdeEngine::ProcessBlock
// Il2CppName: ProcessBlock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Engines::DesEdeEngine::*)(::ArrayW<uint8_t>, int, ::ArrayW<uint8_t>, int)>(&Org::BouncyCastle::Crypto::Engines::DesEdeEngine::ProcessBlock)> {
  static const MethodInfo* get() {
    static auto* input = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* inOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* output = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* outOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::DesEdeEngine*), "ProcessBlock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input, inOff, output, outOff});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::DesEdeEngine::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Engines::DesEdeEngine::*)()>(&Org::BouncyCastle::Crypto::Engines::DesEdeEngine::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::DesEdeEngine*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
