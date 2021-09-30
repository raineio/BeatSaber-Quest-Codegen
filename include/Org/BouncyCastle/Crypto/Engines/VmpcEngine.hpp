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
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Engines.VmpcEngine
  // [TokenAttribute] Offset: FFFFFFFF
  class VmpcEngine : public ::Il2CppObject/*, public Org::BouncyCastle::Crypto::IStreamCipher*/ {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    private:
    #endif
    // protected System.Byte n
    // Size: 0x1
    // Offset: 0x10
    uint8_t n;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // Padding between fields: n and: P
    char __padding0[0x7] = {};
    // protected System.Byte[] P
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<uint8_t> P;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // protected System.Byte s
    // Size: 0x1
    // Offset: 0x20
    uint8_t s;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // Padding between fields: s and: workingIV
    char __padding2[0x7] = {};
    // protected System.Byte[] workingIV
    // Size: 0x8
    // Offset: 0x28
    ::ArrayW<uint8_t> workingIV;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // protected System.Byte[] workingKey
    // Size: 0x8
    // Offset: 0x30
    ::ArrayW<uint8_t> workingKey;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    public:
    // Creating interface conversion operator: operator Org::BouncyCastle::Crypto::IStreamCipher
    operator Org::BouncyCastle::Crypto::IStreamCipher() noexcept {
      return *reinterpret_cast<Org::BouncyCastle::Crypto::IStreamCipher*>(this);
    }
    // Get instance field reference: protected System.Byte n
    uint8_t& dyn_n();
    // Get instance field reference: protected System.Byte[] P
    ::ArrayW<uint8_t>& dyn_P();
    // Get instance field reference: protected System.Byte s
    uint8_t& dyn_s();
    // Get instance field reference: protected System.Byte[] workingIV
    ::ArrayW<uint8_t>& dyn_workingIV();
    // Get instance field reference: protected System.Byte[] workingKey
    ::ArrayW<uint8_t>& dyn_workingKey();
    // public System.Void Init(System.Boolean forEncryption, Org.BouncyCastle.Crypto.ICipherParameters parameters)
    // Offset: 0x1A7EFA8
    void Init(bool forEncryption, Org::BouncyCastle::Crypto::ICipherParameters* parameters);
    // protected System.Void InitKey(System.Byte[] keyBytes, System.Byte[] ivBytes)
    // Offset: 0x1A7F124
    void InitKey(::ArrayW<uint8_t> keyBytes, ::ArrayW<uint8_t> ivBytes);
    // public System.Void ProcessBytes(System.Byte[] input, System.Int32 inOff, System.Int32 len, System.Byte[] output, System.Int32 outOff)
    // Offset: 0x1A7F350
    void ProcessBytes(::ArrayW<uint8_t> input, int inOff, int len, ::ArrayW<uint8_t> output, int outOff);
    // public System.Void Reset()
    // Offset: 0x1A7F530
    void Reset();
    // public System.Void .ctor()
    // Offset: 0x1A7F540
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static VmpcEngine* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Engines::VmpcEngine::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<VmpcEngine*, creationType>()));
    }
  }; // Org.BouncyCastle.Crypto.Engines.VmpcEngine
  #pragma pack(pop)
  static check_size<sizeof(VmpcEngine), 48 + sizeof(::ArrayW<uint8_t>)> __Org_BouncyCastle_Crypto_Engines_VmpcEngineSizeCheck;
  static_assert(sizeof(VmpcEngine) == 0x38);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Engines::VmpcEngine*, "Org.BouncyCastle.Crypto.Engines", "VmpcEngine");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::VmpcEngine::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Engines::VmpcEngine::*)(bool, Org::BouncyCastle::Crypto::ICipherParameters*)>(&Org::BouncyCastle::Crypto::Engines::VmpcEngine::Init)> {
  static const MethodInfo* get() {
    static auto* forEncryption = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* parameters = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Crypto", "ICipherParameters")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::VmpcEngine*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{forEncryption, parameters});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::VmpcEngine::InitKey
// Il2CppName: InitKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Engines::VmpcEngine::*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(&Org::BouncyCastle::Crypto::Engines::VmpcEngine::InitKey)> {
  static const MethodInfo* get() {
    static auto* keyBytes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* ivBytes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::VmpcEngine*), "InitKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{keyBytes, ivBytes});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::VmpcEngine::ProcessBytes
// Il2CppName: ProcessBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Engines::VmpcEngine::*)(::ArrayW<uint8_t>, int, int, ::ArrayW<uint8_t>, int)>(&Org::BouncyCastle::Crypto::Engines::VmpcEngine::ProcessBytes)> {
  static const MethodInfo* get() {
    static auto* input = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* inOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* len = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* output = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* outOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::VmpcEngine*), "ProcessBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input, inOff, len, output, outOff});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::VmpcEngine::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Engines::VmpcEngine::*)()>(&Org::BouncyCastle::Crypto::Engines::VmpcEngine::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::VmpcEngine*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::VmpcEngine::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
