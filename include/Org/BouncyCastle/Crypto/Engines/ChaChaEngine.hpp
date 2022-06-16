// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Org.BouncyCastle.Crypto.Engines.Salsa20Engine
#include "Org/BouncyCastle/Crypto/Engines/Salsa20Engine.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: Org.BouncyCastle.Crypto.Engines
namespace Org::BouncyCastle::Crypto::Engines {
  // Forward declaring type: ChaChaEngine
  class ChaChaEngine;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Engines::ChaChaEngine);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Engines::ChaChaEngine*, "Org.BouncyCastle.Crypto.Engines", "ChaChaEngine");
// Type namespace: Org.BouncyCastle.Crypto.Engines
namespace Org::BouncyCastle::Crypto::Engines {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Engines.ChaChaEngine
  // [TokenAttribute] Offset: FFFFFFFF
  class ChaChaEngine : public ::Org::BouncyCastle::Crypto::Engines::Salsa20Engine {
    public:
    // static System.Void ChachaCore(System.Int32 rounds, System.UInt32[] input, System.UInt32[] x)
    // Offset: 0x2368B9C
    static void ChachaCore(int rounds, ::ArrayW<uint> input, ::ArrayW<uint> x);
    // public override System.String get_AlgorithmName()
    // Offset: 0x23692D8
    // Implemented from: Org.BouncyCastle.Crypto.Engines.Salsa20Engine
    // Base method: System.String Salsa20Engine::get_AlgorithmName()
    ::StringW get_AlgorithmName();
    // public System.Void .ctor()
    // Offset: 0x2369270
    // Implemented from: Org.BouncyCastle.Crypto.Engines.Salsa20Engine
    // Base method: System.Void Salsa20Engine::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ChaChaEngine* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Org::BouncyCastle::Crypto::Engines::ChaChaEngine::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ChaChaEngine*, creationType>()));
    }
    // protected override System.Void AdvanceCounter()
    // Offset: 0x2369358
    // Implemented from: Org.BouncyCastle.Crypto.Engines.Salsa20Engine
    // Base method: System.Void Salsa20Engine::AdvanceCounter()
    void AdvanceCounter();
    // protected override System.Void ResetCounter()
    // Offset: 0x23693BC
    // Implemented from: Org.BouncyCastle.Crypto.Engines.Salsa20Engine
    // Base method: System.Void Salsa20Engine::ResetCounter()
    void ResetCounter();
    // protected override System.Void SetKey(System.Byte[] keyBytes, System.Byte[] ivBytes)
    // Offset: 0x23693F4
    // Implemented from: Org.BouncyCastle.Crypto.Engines.Salsa20Engine
    // Base method: System.Void Salsa20Engine::SetKey(System.Byte[] keyBytes, System.Byte[] ivBytes)
    void SetKey(::ArrayW<uint8_t> keyBytes, ::ArrayW<uint8_t> ivBytes);
    // protected override System.Void GenerateKeyStream(System.Byte[] output)
    // Offset: 0x2369530
    // Implemented from: Org.BouncyCastle.Crypto.Engines.Salsa20Engine
    // Base method: System.Void Salsa20Engine::GenerateKeyStream(System.Byte[] output)
    void GenerateKeyStream(::ArrayW<uint8_t> output);
  }; // Org.BouncyCastle.Crypto.Engines.ChaChaEngine
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::ChaChaEngine::ChachaCore
// Il2CppName: ChachaCore
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int, ::ArrayW<uint>, ::ArrayW<uint>)>(&Org::BouncyCastle::Crypto::Engines::ChaChaEngine::ChachaCore)> {
  static const MethodInfo* get() {
    static auto* rounds = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* input = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt32"), 1)->byval_arg;
    static auto* x = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt32"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::ChaChaEngine*), "ChachaCore", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rounds, input, x});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::ChaChaEngine::get_AlgorithmName
// Il2CppName: get_AlgorithmName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Org::BouncyCastle::Crypto::Engines::ChaChaEngine::*)()>(&Org::BouncyCastle::Crypto::Engines::ChaChaEngine::get_AlgorithmName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::ChaChaEngine*), "get_AlgorithmName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::ChaChaEngine::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::ChaChaEngine::AdvanceCounter
// Il2CppName: AdvanceCounter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Engines::ChaChaEngine::*)()>(&Org::BouncyCastle::Crypto::Engines::ChaChaEngine::AdvanceCounter)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::ChaChaEngine*), "AdvanceCounter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::ChaChaEngine::ResetCounter
// Il2CppName: ResetCounter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Engines::ChaChaEngine::*)()>(&Org::BouncyCastle::Crypto::Engines::ChaChaEngine::ResetCounter)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::ChaChaEngine*), "ResetCounter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::ChaChaEngine::SetKey
// Il2CppName: SetKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Engines::ChaChaEngine::*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(&Org::BouncyCastle::Crypto::Engines::ChaChaEngine::SetKey)> {
  static const MethodInfo* get() {
    static auto* keyBytes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* ivBytes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::ChaChaEngine*), "SetKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{keyBytes, ivBytes});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::ChaChaEngine::GenerateKeyStream
// Il2CppName: GenerateKeyStream
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Engines::ChaChaEngine::*)(::ArrayW<uint8_t>)>(&Org::BouncyCastle::Crypto::Engines::ChaChaEngine::GenerateKeyStream)> {
  static const MethodInfo* get() {
    static auto* output = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::ChaChaEngine*), "GenerateKeyStream", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{output});
  }
};
