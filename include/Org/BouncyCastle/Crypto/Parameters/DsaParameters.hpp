// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Org.BouncyCastle.Crypto.ICipherParameters
#include "Org/BouncyCastle/Crypto/ICipherParameters.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Math
namespace Org::BouncyCastle::Math {
  // Forward declaring type: BigInteger
  class BigInteger;
}
// Forward declaring namespace: Org::BouncyCastle::Crypto::Parameters
namespace Org::BouncyCastle::Crypto::Parameters {
  // Forward declaring type: DsaValidationParameters
  class DsaValidationParameters;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Crypto.Parameters
namespace Org::BouncyCastle::Crypto::Parameters {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Parameters.DsaParameters
  // [TokenAttribute] Offset: FFFFFFFF
  class DsaParameters : public ::Il2CppObject/*, public Org::BouncyCastle::Crypto::ICipherParameters*/ {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    private:
    #endif
    // private readonly Org.BouncyCastle.Math.BigInteger p
    // Size: 0x8
    // Offset: 0x10
    Org::BouncyCastle::Math::BigInteger* p;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Math::BigInteger*) == 0x8);
    // private readonly Org.BouncyCastle.Math.BigInteger q
    // Size: 0x8
    // Offset: 0x18
    Org::BouncyCastle::Math::BigInteger* q;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Math::BigInteger*) == 0x8);
    // private readonly Org.BouncyCastle.Math.BigInteger g
    // Size: 0x8
    // Offset: 0x20
    Org::BouncyCastle::Math::BigInteger* g;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Math::BigInteger*) == 0x8);
    // private readonly Org.BouncyCastle.Crypto.Parameters.DsaValidationParameters validation
    // Size: 0x8
    // Offset: 0x28
    Org::BouncyCastle::Crypto::Parameters::DsaValidationParameters* validation;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Crypto::Parameters::DsaValidationParameters*) == 0x8);
    public:
    // Creating interface conversion operator: operator Org::BouncyCastle::Crypto::ICipherParameters
    operator Org::BouncyCastle::Crypto::ICipherParameters() noexcept {
      return *reinterpret_cast<Org::BouncyCastle::Crypto::ICipherParameters*>(this);
    }
    // Get instance field reference: private readonly Org.BouncyCastle.Math.BigInteger p
    Org::BouncyCastle::Math::BigInteger*& dyn_p();
    // Get instance field reference: private readonly Org.BouncyCastle.Math.BigInteger q
    Org::BouncyCastle::Math::BigInteger*& dyn_q();
    // Get instance field reference: private readonly Org.BouncyCastle.Math.BigInteger g
    Org::BouncyCastle::Math::BigInteger*& dyn_g();
    // Get instance field reference: private readonly Org.BouncyCastle.Crypto.Parameters.DsaValidationParameters validation
    Org::BouncyCastle::Crypto::Parameters::DsaValidationParameters*& dyn_validation();
    // public Org.BouncyCastle.Math.BigInteger get_P()
    // Offset: 0x13936FC
    Org::BouncyCastle::Math::BigInteger* get_P();
    // public Org.BouncyCastle.Math.BigInteger get_Q()
    // Offset: 0x1393704
    Org::BouncyCastle::Math::BigInteger* get_Q();
    // public Org.BouncyCastle.Math.BigInteger get_G()
    // Offset: 0x139370C
    Org::BouncyCastle::Math::BigInteger* get_G();
    // public System.Void .ctor(Org.BouncyCastle.Math.BigInteger p, Org.BouncyCastle.Math.BigInteger q, Org.BouncyCastle.Math.BigInteger g)
    // Offset: 0x1393600
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DsaParameters* New_ctor(Org::BouncyCastle::Math::BigInteger* p, Org::BouncyCastle::Math::BigInteger* q, Org::BouncyCastle::Math::BigInteger* g) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Parameters::DsaParameters::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DsaParameters*, creationType>(p, q, g)));
    }
    // public System.Void .ctor(Org.BouncyCastle.Math.BigInteger p, Org.BouncyCastle.Math.BigInteger q, Org.BouncyCastle.Math.BigInteger g, Org.BouncyCastle.Crypto.Parameters.DsaValidationParameters parameters)
    // Offset: 0x1393608
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DsaParameters* New_ctor(Org::BouncyCastle::Math::BigInteger* p, Org::BouncyCastle::Math::BigInteger* q, Org::BouncyCastle::Math::BigInteger* g, Org::BouncyCastle::Crypto::Parameters::DsaValidationParameters* parameters) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Parameters::DsaParameters::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DsaParameters*, creationType>(p, q, g, parameters)));
    }
    // protected System.Boolean Equals(Org.BouncyCastle.Crypto.Parameters.DsaParameters other)
    // Offset: 0x13937C4
    bool Equals(Org::BouncyCastle::Crypto::Parameters::DsaParameters* other);
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x1393714
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x1393848
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
  }; // Org.BouncyCastle.Crypto.Parameters.DsaParameters
  #pragma pack(pop)
  static check_size<sizeof(DsaParameters), 40 + sizeof(Org::BouncyCastle::Crypto::Parameters::DsaValidationParameters*)> __Org_BouncyCastle_Crypto_Parameters_DsaParametersSizeCheck;
  static_assert(sizeof(DsaParameters) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Parameters::DsaParameters*, "Org.BouncyCastle.Crypto.Parameters", "DsaParameters");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Parameters::DsaParameters::get_P
// Il2CppName: get_P
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::BigInteger* (Org::BouncyCastle::Crypto::Parameters::DsaParameters::*)()>(&Org::BouncyCastle::Crypto::Parameters::DsaParameters::get_P)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Parameters::DsaParameters*), "get_P", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Parameters::DsaParameters::get_Q
// Il2CppName: get_Q
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::BigInteger* (Org::BouncyCastle::Crypto::Parameters::DsaParameters::*)()>(&Org::BouncyCastle::Crypto::Parameters::DsaParameters::get_Q)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Parameters::DsaParameters*), "get_Q", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Parameters::DsaParameters::get_G
// Il2CppName: get_G
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::BigInteger* (Org::BouncyCastle::Crypto::Parameters::DsaParameters::*)()>(&Org::BouncyCastle::Crypto::Parameters::DsaParameters::get_G)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Parameters::DsaParameters*), "get_G", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Parameters::DsaParameters::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Parameters::DsaParameters::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Parameters::DsaParameters::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Crypto::Parameters::DsaParameters::*)(Org::BouncyCastle::Crypto::Parameters::DsaParameters*)>(&Org::BouncyCastle::Crypto::Parameters::DsaParameters::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Crypto.Parameters", "DsaParameters")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Parameters::DsaParameters*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Parameters::DsaParameters::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Crypto::Parameters::DsaParameters::*)(::Il2CppObject*)>(&Org::BouncyCastle::Crypto::Parameters::DsaParameters::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Parameters::DsaParameters*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Parameters::DsaParameters::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Parameters::DsaParameters::*)()>(&Org::BouncyCastle::Crypto::Parameters::DsaParameters::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Parameters::DsaParameters*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
