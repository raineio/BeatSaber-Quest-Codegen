// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: DiffieHellmanUtility
#include "GlobalNamespace/DiffieHellmanUtility.hpp"
// Including type: IDiffieHellmanKeyPair
#include "GlobalNamespace/IDiffieHellmanKeyPair.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: Org::BouncyCastle::Crypto::Agreement
namespace Org::BouncyCastle::Crypto::Agreement {
  // Forward declaring type: ECDHBasicAgreement
  class ECDHBasicAgreement;
}
// Forward declaring namespace: Org::BouncyCastle::Crypto::Parameters
namespace Org::BouncyCastle::Crypto::Parameters {
  // Forward declaring type: ECPrivateKeyParameters
  class ECPrivateKeyParameters;
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: ElipticalCurveKeyPair
  class ElipticalCurveKeyPair;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(GlobalNamespace::DiffieHellmanUtility::ElipticalCurveKeyPair);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::DiffieHellmanUtility::ElipticalCurveKeyPair*, "", "DiffieHellmanUtility/ElipticalCurveKeyPair");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: DiffieHellmanUtility/ElipticalCurveKeyPair
  // [TokenAttribute] Offset: FFFFFFFF
  class DiffieHellmanUtility::ElipticalCurveKeyPair : public ::Il2CppObject/*, public GlobalNamespace::IDiffieHellmanKeyPair*/ {
    public:
    // Nested type: GlobalNamespace::DiffieHellmanUtility::ElipticalCurveKeyPair::$$c__DisplayClass5_0
    class $$c__DisplayClass5_0;
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private readonly Org.BouncyCastle.Crypto.Agreement.ECDHBasicAgreement _ecdhBasicAgreement
    // Size: 0x8
    // Offset: 0x10
    Org::BouncyCastle::Crypto::Agreement::ECDHBasicAgreement* ecdhBasicAgreement;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Crypto::Agreement::ECDHBasicAgreement*) == 0x8);
    // private readonly System.Byte[] _publicKey
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<uint8_t> publicKey;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    public:
    // Creating interface conversion operator: operator GlobalNamespace::IDiffieHellmanKeyPair
    operator GlobalNamespace::IDiffieHellmanKeyPair() noexcept {
      return *reinterpret_cast<GlobalNamespace::IDiffieHellmanKeyPair*>(this);
    }
    // Get instance field reference: private readonly Org.BouncyCastle.Crypto.Agreement.ECDHBasicAgreement _ecdhBasicAgreement
    Org::BouncyCastle::Crypto::Agreement::ECDHBasicAgreement*& dyn__ecdhBasicAgreement();
    // Get instance field reference: private readonly System.Byte[] _publicKey
    ::ArrayW<uint8_t>& dyn__publicKey();
    // public System.Byte[] get_publicKey()
    // Offset: 0x15656B0
    ::ArrayW<uint8_t> get_publicKey();
    // public System.Void .ctor(Org.BouncyCastle.Crypto.Parameters.ECPrivateKeyParameters privateKeyParameters, System.Byte[] publicKey)
    // Offset: 0x1565028
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DiffieHellmanUtility::ElipticalCurveKeyPair* New_ctor(Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters* privateKeyParameters, ::ArrayW<uint8_t> publicKey) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::DiffieHellmanUtility::ElipticalCurveKeyPair::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DiffieHellmanUtility::ElipticalCurveKeyPair*, creationType>(privateKeyParameters, publicKey)));
    }
    // public System.Threading.Tasks.Task`1<System.Byte[]> GetPreMasterSecretAsync(System.Byte[] clientPublicKey)
    // Offset: 0x15656B8
    System::Threading::Tasks::Task_1<::ArrayW<uint8_t>>* GetPreMasterSecretAsync(::ArrayW<uint8_t> clientPublicKey);
    // public System.Byte[] GetPreMasterSecret(System.Byte[] clientPublicKey)
    // Offset: 0x1565798
    ::ArrayW<uint8_t> GetPreMasterSecret(::ArrayW<uint8_t> clientPublicKey);
  }; // DiffieHellmanUtility/ElipticalCurveKeyPair
  #pragma pack(pop)
  static check_size<sizeof(DiffieHellmanUtility::ElipticalCurveKeyPair), 24 + sizeof(::ArrayW<uint8_t>)> __GlobalNamespace_DiffieHellmanUtility_ElipticalCurveKeyPairSizeCheck;
  static_assert(sizeof(DiffieHellmanUtility::ElipticalCurveKeyPair) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::DiffieHellmanUtility::ElipticalCurveKeyPair::get_publicKey
// Il2CppName: get_publicKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (GlobalNamespace::DiffieHellmanUtility::ElipticalCurveKeyPair::*)()>(&GlobalNamespace::DiffieHellmanUtility::ElipticalCurveKeyPair::get_publicKey)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DiffieHellmanUtility::ElipticalCurveKeyPair*), "get_publicKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DiffieHellmanUtility::ElipticalCurveKeyPair::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::DiffieHellmanUtility::ElipticalCurveKeyPair::GetPreMasterSecretAsync
// Il2CppName: GetPreMasterSecretAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<::ArrayW<uint8_t>>* (GlobalNamespace::DiffieHellmanUtility::ElipticalCurveKeyPair::*)(::ArrayW<uint8_t>)>(&GlobalNamespace::DiffieHellmanUtility::ElipticalCurveKeyPair::GetPreMasterSecretAsync)> {
  static const MethodInfo* get() {
    static auto* clientPublicKey = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DiffieHellmanUtility::ElipticalCurveKeyPair*), "GetPreMasterSecretAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{clientPublicKey});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DiffieHellmanUtility::ElipticalCurveKeyPair::GetPreMasterSecret
// Il2CppName: GetPreMasterSecret
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (GlobalNamespace::DiffieHellmanUtility::ElipticalCurveKeyPair::*)(::ArrayW<uint8_t>)>(&GlobalNamespace::DiffieHellmanUtility::ElipticalCurveKeyPair::GetPreMasterSecret)> {
  static const MethodInfo* get() {
    static auto* clientPublicKey = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DiffieHellmanUtility::ElipticalCurveKeyPair*), "GetPreMasterSecret", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{clientPublicKey});
  }
};
