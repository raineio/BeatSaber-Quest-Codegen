// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Org.BouncyCastle.Crypto.IRsa
#include "Org/BouncyCastle/Crypto/IRsa.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Crypto::Parameters
namespace Org::BouncyCastle::Crypto::Parameters {
  // Forward declaring type: RsaKeyParameters
  class RsaKeyParameters;
}
// Forward declaring namespace: Org::BouncyCastle::Crypto
namespace Org::BouncyCastle::Crypto {
  // Forward declaring type: ICipherParameters
  class ICipherParameters;
}
// Forward declaring namespace: Org::BouncyCastle::Math
namespace Org::BouncyCastle::Math {
  // Forward declaring type: BigInteger
  class BigInteger;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Crypto.Engines
namespace Org::BouncyCastle::Crypto::Engines {
  // Forward declaring type: RsaCoreEngine
  class RsaCoreEngine;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Engines::RsaCoreEngine);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Engines::RsaCoreEngine*, "Org.BouncyCastle.Crypto.Engines", "RsaCoreEngine");
// Type namespace: Org.BouncyCastle.Crypto.Engines
namespace Org::BouncyCastle::Crypto::Engines {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Engines.RsaCoreEngine
  // [TokenAttribute] Offset: FFFFFFFF
  class RsaCoreEngine : public ::Il2CppObject/*, public ::Org::BouncyCastle::Crypto::IRsa*/ {
    public:
    public:
    // private Org.BouncyCastle.Crypto.Parameters.RsaKeyParameters key
    // Size: 0x8
    // Offset: 0x10
    ::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters* key;
    // Field size check
    static_assert(sizeof(::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters*) == 0x8);
    // private System.Boolean forEncryption
    // Size: 0x1
    // Offset: 0x18
    bool forEncryption;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: forEncryption and: bitSize
    char __padding1[0x3] = {};
    // private System.Int32 bitSize
    // Size: 0x4
    // Offset: 0x1C
    int bitSize;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating interface conversion operator: operator ::Org::BouncyCastle::Crypto::IRsa
    operator ::Org::BouncyCastle::Crypto::IRsa() noexcept {
      return *reinterpret_cast<::Org::BouncyCastle::Crypto::IRsa*>(this);
    }
    // Creating interface conversion operator: i_IRsa
    inline ::Org::BouncyCastle::Crypto::IRsa* i_IRsa() noexcept {
      return reinterpret_cast<::Org::BouncyCastle::Crypto::IRsa*>(this);
    }
    // Get instance field reference: private Org.BouncyCastle.Crypto.Parameters.RsaKeyParameters key
    [[deprecated("Use field access instead!")]] ::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters*& dyn_key();
    // Get instance field reference: private System.Boolean forEncryption
    [[deprecated("Use field access instead!")]] bool& dyn_forEncryption();
    // Get instance field reference: private System.Int32 bitSize
    [[deprecated("Use field access instead!")]] int& dyn_bitSize();
    // public System.Void .ctor()
    // Offset: 0x2403F3C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RsaCoreEngine* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Org::BouncyCastle::Crypto::Engines::RsaCoreEngine::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RsaCoreEngine*, creationType>()));
    }
    // private System.Void CheckInitialised()
    // Offset: 0x2404724
    void CheckInitialised();
    // public System.Void Init(System.Boolean forEncryption, Org.BouncyCastle.Crypto.ICipherParameters parameters)
    // Offset: 0x24047A8
    void Init(bool forEncryption, ::Org::BouncyCastle::Crypto::ICipherParameters* parameters);
    // public System.Int32 GetInputBlockSize()
    // Offset: 0x24048CC
    int GetInputBlockSize();
    // public System.Int32 GetOutputBlockSize()
    // Offset: 0x2404914
    int GetOutputBlockSize();
    // public Org.BouncyCastle.Math.BigInteger ConvertInput(System.Byte[] inBuf, System.Int32 inOff, System.Int32 inLen)
    // Offset: 0x240495C
    ::Org::BouncyCastle::Math::BigInteger* ConvertInput(::ArrayW<uint8_t> inBuf, int inOff, int inLen);
    // public System.Byte[] ConvertOutput(Org.BouncyCastle.Math.BigInteger result)
    // Offset: 0x2404A70
    ::ArrayW<uint8_t> ConvertOutput(::Org::BouncyCastle::Math::BigInteger* result);
    // public Org.BouncyCastle.Math.BigInteger ProcessBlock(Org.BouncyCastle.Math.BigInteger input)
    // Offset: 0x2404B44
    ::Org::BouncyCastle::Math::BigInteger* ProcessBlock(::Org::BouncyCastle::Math::BigInteger* input);
  }; // Org.BouncyCastle.Crypto.Engines.RsaCoreEngine
  #pragma pack(pop)
  static check_size<sizeof(RsaCoreEngine), 28 + sizeof(int)> __Org_BouncyCastle_Crypto_Engines_RsaCoreEngineSizeCheck;
  static_assert(sizeof(RsaCoreEngine) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::RsaCoreEngine::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::RsaCoreEngine::CheckInitialised
// Il2CppName: CheckInitialised
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Engines::RsaCoreEngine::*)()>(&Org::BouncyCastle::Crypto::Engines::RsaCoreEngine::CheckInitialised)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::RsaCoreEngine*), "CheckInitialised", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::RsaCoreEngine::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Engines::RsaCoreEngine::*)(bool, ::Org::BouncyCastle::Crypto::ICipherParameters*)>(&Org::BouncyCastle::Crypto::Engines::RsaCoreEngine::Init)> {
  static const MethodInfo* get() {
    static auto* forEncryption = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* parameters = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Crypto", "ICipherParameters")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::RsaCoreEngine*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{forEncryption, parameters});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::RsaCoreEngine::GetInputBlockSize
// Il2CppName: GetInputBlockSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Engines::RsaCoreEngine::*)()>(&Org::BouncyCastle::Crypto::Engines::RsaCoreEngine::GetInputBlockSize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::RsaCoreEngine*), "GetInputBlockSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::RsaCoreEngine::GetOutputBlockSize
// Il2CppName: GetOutputBlockSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Engines::RsaCoreEngine::*)()>(&Org::BouncyCastle::Crypto::Engines::RsaCoreEngine::GetOutputBlockSize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::RsaCoreEngine*), "GetOutputBlockSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::RsaCoreEngine::ConvertInput
// Il2CppName: ConvertInput
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::BigInteger* (Org::BouncyCastle::Crypto::Engines::RsaCoreEngine::*)(::ArrayW<uint8_t>, int, int)>(&Org::BouncyCastle::Crypto::Engines::RsaCoreEngine::ConvertInput)> {
  static const MethodInfo* get() {
    static auto* inBuf = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* inOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* inLen = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::RsaCoreEngine*), "ConvertInput", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{inBuf, inOff, inLen});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::RsaCoreEngine::ConvertOutput
// Il2CppName: ConvertOutput
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Org::BouncyCastle::Crypto::Engines::RsaCoreEngine::*)(::Org::BouncyCastle::Math::BigInteger*)>(&Org::BouncyCastle::Crypto::Engines::RsaCoreEngine::ConvertOutput)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math", "BigInteger")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::RsaCoreEngine*), "ConvertOutput", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::RsaCoreEngine::ProcessBlock
// Il2CppName: ProcessBlock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::BigInteger* (Org::BouncyCastle::Crypto::Engines::RsaCoreEngine::*)(::Org::BouncyCastle::Math::BigInteger*)>(&Org::BouncyCastle::Crypto::Engines::RsaCoreEngine::ProcessBlock)> {
  static const MethodInfo* get() {
    static auto* input = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math", "BigInteger")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::RsaCoreEngine*), "ProcessBlock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input});
  }
};
