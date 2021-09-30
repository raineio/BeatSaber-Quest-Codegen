// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Org.BouncyCastle.Crypto.IBasicAgreement
#include "Org/BouncyCastle/Crypto/IBasicAgreement.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Crypto::Parameters
namespace Org::BouncyCastle::Crypto::Parameters {
  // Forward declaring type: DHPrivateKeyParameters
  class DHPrivateKeyParameters;
  // Forward declaring type: DHParameters
  class DHParameters;
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
// Type namespace: Org.BouncyCastle.Crypto.Agreement
namespace Org::BouncyCastle::Crypto::Agreement {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Agreement.DHBasicAgreement
  // [TokenAttribute] Offset: FFFFFFFF
  class DHBasicAgreement : public ::Il2CppObject/*, public Org::BouncyCastle::Crypto::IBasicAgreement*/ {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    private:
    #endif
    // private Org.BouncyCastle.Crypto.Parameters.DHPrivateKeyParameters key
    // Size: 0x8
    // Offset: 0x10
    Org::BouncyCastle::Crypto::Parameters::DHPrivateKeyParameters* key;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Crypto::Parameters::DHPrivateKeyParameters*) == 0x8);
    // private Org.BouncyCastle.Crypto.Parameters.DHParameters dhParams
    // Size: 0x8
    // Offset: 0x18
    Org::BouncyCastle::Crypto::Parameters::DHParameters* dhParams;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Crypto::Parameters::DHParameters*) == 0x8);
    public:
    // Creating interface conversion operator: operator Org::BouncyCastle::Crypto::IBasicAgreement
    operator Org::BouncyCastle::Crypto::IBasicAgreement() noexcept {
      return *reinterpret_cast<Org::BouncyCastle::Crypto::IBasicAgreement*>(this);
    }
    // Get instance field reference: private Org.BouncyCastle.Crypto.Parameters.DHPrivateKeyParameters key
    Org::BouncyCastle::Crypto::Parameters::DHPrivateKeyParameters*& dyn_key();
    // Get instance field reference: private Org.BouncyCastle.Crypto.Parameters.DHParameters dhParams
    Org::BouncyCastle::Crypto::Parameters::DHParameters*& dyn_dhParams();
    // public System.Void Init(Org.BouncyCastle.Crypto.ICipherParameters parameters)
    // Offset: 0x1BC8F68
    void Init(Org::BouncyCastle::Crypto::ICipherParameters* parameters);
    // public System.Int32 GetFieldSize()
    // Offset: 0x1BC9070
    int GetFieldSize();
    // public Org.BouncyCastle.Math.BigInteger CalculateAgreement(Org.BouncyCastle.Crypto.ICipherParameters pubKey)
    // Offset: 0x1BC90B8
    Org::BouncyCastle::Math::BigInteger* CalculateAgreement(Org::BouncyCastle::Crypto::ICipherParameters* pubKey);
    // public System.Void .ctor()
    // Offset: 0x1BC931C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DHBasicAgreement* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Agreement::DHBasicAgreement::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DHBasicAgreement*, creationType>()));
    }
  }; // Org.BouncyCastle.Crypto.Agreement.DHBasicAgreement
  #pragma pack(pop)
  static check_size<sizeof(DHBasicAgreement), 24 + sizeof(Org::BouncyCastle::Crypto::Parameters::DHParameters*)> __Org_BouncyCastle_Crypto_Agreement_DHBasicAgreementSizeCheck;
  static_assert(sizeof(DHBasicAgreement) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Agreement::DHBasicAgreement*, "Org.BouncyCastle.Crypto.Agreement", "DHBasicAgreement");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Agreement::DHBasicAgreement::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Agreement::DHBasicAgreement::*)(Org::BouncyCastle::Crypto::ICipherParameters*)>(&Org::BouncyCastle::Crypto::Agreement::DHBasicAgreement::Init)> {
  static const MethodInfo* get() {
    static auto* parameters = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Crypto", "ICipherParameters")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Agreement::DHBasicAgreement*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{parameters});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Agreement::DHBasicAgreement::GetFieldSize
// Il2CppName: GetFieldSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Agreement::DHBasicAgreement::*)()>(&Org::BouncyCastle::Crypto::Agreement::DHBasicAgreement::GetFieldSize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Agreement::DHBasicAgreement*), "GetFieldSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Agreement::DHBasicAgreement::CalculateAgreement
// Il2CppName: CalculateAgreement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::BigInteger* (Org::BouncyCastle::Crypto::Agreement::DHBasicAgreement::*)(Org::BouncyCastle::Crypto::ICipherParameters*)>(&Org::BouncyCastle::Crypto::Agreement::DHBasicAgreement::CalculateAgreement)> {
  static const MethodInfo* get() {
    static auto* pubKey = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Crypto", "ICipherParameters")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Agreement::DHBasicAgreement*), "CalculateAgreement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pubKey});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Agreement::DHBasicAgreement::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
