// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Org.BouncyCastle.Crypto.AsymmetricKeyParameter
#include "Org/BouncyCastle/Crypto/AsymmetricKeyParameter.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Crypto::Parameters
namespace Org::BouncyCastle::Crypto::Parameters {
  // Forward declaring type: ECDomainParameters
  class ECDomainParameters;
}
// Forward declaring namespace: Org::BouncyCastle::Asn1
namespace Org::BouncyCastle::Asn1 {
  // Forward declaring type: DerObjectIdentifier
  class DerObjectIdentifier;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Crypto.Parameters
namespace Org::BouncyCastle::Crypto::Parameters {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Parameters.ECKeyParameters
  // [TokenAttribute] Offset: FFFFFFFF
  class ECKeyParameters : public Org::BouncyCastle::Crypto::AsymmetricKeyParameter {
    public:
    // Writing base type padding for base size: 0x11 to desired offset: 0x18
    char ___base_padding[0x7] = {};
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    private:
    #endif
    // private readonly System.String algorithm
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* algorithm;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private readonly Org.BouncyCastle.Crypto.Parameters.ECDomainParameters parameters
    // Size: 0x8
    // Offset: 0x20
    Org::BouncyCastle::Crypto::Parameters::ECDomainParameters* parameters;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Crypto::Parameters::ECDomainParameters*) == 0x8);
    // private readonly Org.BouncyCastle.Asn1.DerObjectIdentifier publicKeyParamSet
    // Size: 0x8
    // Offset: 0x28
    Org::BouncyCastle::Asn1::DerObjectIdentifier* publicKeyParamSet;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Asn1::DerObjectIdentifier*) == 0x8);
    public:
    // Deleting conversion operator: operator bool
    constexpr operator bool() const noexcept = delete;
    // Get static field: static private readonly System.String[] algorithms
    static ::ArrayW<::Il2CppString*> _get_algorithms();
    // Set static field: static private readonly System.String[] algorithms
    static void _set_algorithms(::ArrayW<::Il2CppString*> value);
    // Get instance field reference: private readonly System.String algorithm
    ::Il2CppString*& dyn_algorithm();
    // Get instance field reference: private readonly Org.BouncyCastle.Crypto.Parameters.ECDomainParameters parameters
    Org::BouncyCastle::Crypto::Parameters::ECDomainParameters*& dyn_parameters();
    // Get instance field reference: private readonly Org.BouncyCastle.Asn1.DerObjectIdentifier publicKeyParamSet
    Org::BouncyCastle::Asn1::DerObjectIdentifier*& dyn_publicKeyParamSet();
    // public System.String get_AlgorithmName()
    // Offset: 0x1394BA0
    ::Il2CppString* get_AlgorithmName();
    // public Org.BouncyCastle.Crypto.Parameters.ECDomainParameters get_Parameters()
    // Offset: 0x1394BA8
    Org::BouncyCastle::Crypto::Parameters::ECDomainParameters* get_Parameters();
    // public Org.BouncyCastle.Asn1.DerObjectIdentifier get_PublicKeyParamSet()
    // Offset: 0x1394BB0
    Org::BouncyCastle::Asn1::DerObjectIdentifier* get_PublicKeyParamSet();
    // protected System.Void .ctor(System.String algorithm, System.Boolean isPrivate, Org.BouncyCastle.Crypto.Parameters.ECDomainParameters parameters)
    // Offset: 0x139478C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ECKeyParameters* New_ctor(::Il2CppString* algorithm, bool isPrivate, Org::BouncyCastle::Crypto::Parameters::ECDomainParameters* parameters) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Parameters::ECKeyParameters::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ECKeyParameters*, creationType>(algorithm, isPrivate, parameters)));
    }
    // protected System.Void .ctor(System.String algorithm, System.Boolean isPrivate, Org.BouncyCastle.Asn1.DerObjectIdentifier publicKeyParamSet)
    // Offset: 0x13949B0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ECKeyParameters* New_ctor(::Il2CppString* algorithm, bool isPrivate, Org::BouncyCastle::Asn1::DerObjectIdentifier* publicKeyParamSet) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Parameters::ECKeyParameters::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ECKeyParameters*, creationType>(algorithm, isPrivate, publicKeyParamSet)));
    }
    // static private System.Void .cctor()
    // Offset: 0x1394D18
    static void _cctor();
    // protected System.Boolean Equals(Org.BouncyCastle.Crypto.Parameters.ECKeyParameters other)
    // Offset: 0x1394C70
    bool Equals(Org::BouncyCastle::Crypto::Parameters::ECKeyParameters* other);
    // static System.String VerifyAlgorithmName(System.String algorithm)
    // Offset: 0x1394884
    static ::Il2CppString* VerifyAlgorithmName(::Il2CppString* algorithm);
    // static Org.BouncyCastle.Crypto.Parameters.ECDomainParameters LookupParameters(Org.BouncyCastle.Asn1.DerObjectIdentifier publicKeyParamSet)
    // Offset: 0x1394AB4
    static Org::BouncyCastle::Crypto::Parameters::ECDomainParameters* LookupParameters(Org::BouncyCastle::Asn1::DerObjectIdentifier* publicKeyParamSet);
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x1394BB8
    // Implemented from: Org.BouncyCastle.Crypto.AsymmetricKeyParameter
    // Base method: System.Boolean AsymmetricKeyParameter::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x1394CD0
    // Implemented from: Org.BouncyCastle.Crypto.AsymmetricKeyParameter
    // Base method: System.Int32 AsymmetricKeyParameter::GetHashCode()
    int GetHashCode();
  }; // Org.BouncyCastle.Crypto.Parameters.ECKeyParameters
  #pragma pack(pop)
  static check_size<sizeof(ECKeyParameters), 40 + sizeof(Org::BouncyCastle::Asn1::DerObjectIdentifier*)> __Org_BouncyCastle_Crypto_Parameters_ECKeyParametersSizeCheck;
  static_assert(sizeof(ECKeyParameters) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Parameters::ECKeyParameters*, "Org.BouncyCastle.Crypto.Parameters", "ECKeyParameters");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Parameters::ECKeyParameters::get_AlgorithmName
// Il2CppName: get_AlgorithmName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (Org::BouncyCastle::Crypto::Parameters::ECKeyParameters::*)()>(&Org::BouncyCastle::Crypto::Parameters::ECKeyParameters::get_AlgorithmName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Parameters::ECKeyParameters*), "get_AlgorithmName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Parameters::ECKeyParameters::get_Parameters
// Il2CppName: get_Parameters
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Crypto::Parameters::ECDomainParameters* (Org::BouncyCastle::Crypto::Parameters::ECKeyParameters::*)()>(&Org::BouncyCastle::Crypto::Parameters::ECKeyParameters::get_Parameters)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Parameters::ECKeyParameters*), "get_Parameters", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Parameters::ECKeyParameters::get_PublicKeyParamSet
// Il2CppName: get_PublicKeyParamSet
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::DerObjectIdentifier* (Org::BouncyCastle::Crypto::Parameters::ECKeyParameters::*)()>(&Org::BouncyCastle::Crypto::Parameters::ECKeyParameters::get_PublicKeyParamSet)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Parameters::ECKeyParameters*), "get_PublicKeyParamSet", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Parameters::ECKeyParameters::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Parameters::ECKeyParameters::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Parameters::ECKeyParameters::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Org::BouncyCastle::Crypto::Parameters::ECKeyParameters::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Parameters::ECKeyParameters*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Parameters::ECKeyParameters::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Crypto::Parameters::ECKeyParameters::*)(Org::BouncyCastle::Crypto::Parameters::ECKeyParameters*)>(&Org::BouncyCastle::Crypto::Parameters::ECKeyParameters::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Crypto.Parameters", "ECKeyParameters")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Parameters::ECKeyParameters*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Parameters::ECKeyParameters::VerifyAlgorithmName
// Il2CppName: VerifyAlgorithmName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(::Il2CppString*)>(&Org::BouncyCastle::Crypto::Parameters::ECKeyParameters::VerifyAlgorithmName)> {
  static const MethodInfo* get() {
    static auto* algorithm = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Parameters::ECKeyParameters*), "VerifyAlgorithmName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{algorithm});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Parameters::ECKeyParameters::LookupParameters
// Il2CppName: LookupParameters
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Crypto::Parameters::ECDomainParameters* (*)(Org::BouncyCastle::Asn1::DerObjectIdentifier*)>(&Org::BouncyCastle::Crypto::Parameters::ECKeyParameters::LookupParameters)> {
  static const MethodInfo* get() {
    static auto* publicKeyParamSet = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Asn1", "DerObjectIdentifier")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Parameters::ECKeyParameters*), "LookupParameters", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{publicKeyParamSet});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Parameters::ECKeyParameters::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Crypto::Parameters::ECKeyParameters::*)(::Il2CppObject*)>(&Org::BouncyCastle::Crypto::Parameters::ECKeyParameters::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Parameters::ECKeyParameters*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Parameters::ECKeyParameters::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Parameters::ECKeyParameters::*)()>(&Org::BouncyCastle::Crypto::Parameters::ECKeyParameters::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Parameters::ECKeyParameters*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
