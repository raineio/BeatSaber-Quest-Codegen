// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Org.BouncyCastle.Asn1.Asn1Encodable
#include "Org/BouncyCastle/Asn1/Asn1Encodable.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Asn1::X509
namespace Org::BouncyCastle::Asn1::X509 {
  // Forward declaring type: AlgorithmIdentifier
  class AlgorithmIdentifier;
}
// Forward declaring namespace: Org::BouncyCastle::Asn1
namespace Org::BouncyCastle::Asn1 {
  // Forward declaring type: DerInteger
  class DerInteger;
  // Forward declaring type: Asn1Sequence
  class Asn1Sequence;
  // Forward declaring type: Asn1Object
  class Asn1Object;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Asn1.Pkcs
namespace Org::BouncyCastle::Asn1::Pkcs {
  // Forward declaring type: RsassaPssParameters
  class RsassaPssParameters;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(Org::BouncyCastle::Asn1::Pkcs::RsassaPssParameters);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Pkcs::RsassaPssParameters*, "Org.BouncyCastle.Asn1.Pkcs", "RsassaPssParameters");
// Type namespace: Org.BouncyCastle.Asn1.Pkcs
namespace Org::BouncyCastle::Asn1::Pkcs {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Asn1.Pkcs.RsassaPssParameters
  // [TokenAttribute] Offset: FFFFFFFF
  class RsassaPssParameters : public Org::BouncyCastle::Asn1::Asn1Encodable {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private Org.BouncyCastle.Asn1.X509.AlgorithmIdentifier hashAlgorithm
    // Size: 0x8
    // Offset: 0x10
    Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* hashAlgorithm;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*) == 0x8);
    // private Org.BouncyCastle.Asn1.X509.AlgorithmIdentifier maskGenAlgorithm
    // Size: 0x8
    // Offset: 0x18
    Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* maskGenAlgorithm;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*) == 0x8);
    // private Org.BouncyCastle.Asn1.DerInteger saltLength
    // Size: 0x8
    // Offset: 0x20
    Org::BouncyCastle::Asn1::DerInteger* saltLength;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Asn1::DerInteger*) == 0x8);
    // private Org.BouncyCastle.Asn1.DerInteger trailerField
    // Size: 0x8
    // Offset: 0x28
    Org::BouncyCastle::Asn1::DerInteger* trailerField;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Asn1::DerInteger*) == 0x8);
    public:
    // Get static field: static public readonly Org.BouncyCastle.Asn1.X509.AlgorithmIdentifier DefaultHashAlgorithm
    static Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* _get_DefaultHashAlgorithm();
    // Set static field: static public readonly Org.BouncyCastle.Asn1.X509.AlgorithmIdentifier DefaultHashAlgorithm
    static void _set_DefaultHashAlgorithm(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* value);
    // Get static field: static public readonly Org.BouncyCastle.Asn1.X509.AlgorithmIdentifier DefaultMaskGenFunction
    static Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* _get_DefaultMaskGenFunction();
    // Set static field: static public readonly Org.BouncyCastle.Asn1.X509.AlgorithmIdentifier DefaultMaskGenFunction
    static void _set_DefaultMaskGenFunction(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* value);
    // Get static field: static public readonly Org.BouncyCastle.Asn1.DerInteger DefaultSaltLength
    static Org::BouncyCastle::Asn1::DerInteger* _get_DefaultSaltLength();
    // Set static field: static public readonly Org.BouncyCastle.Asn1.DerInteger DefaultSaltLength
    static void _set_DefaultSaltLength(Org::BouncyCastle::Asn1::DerInteger* value);
    // Get static field: static public readonly Org.BouncyCastle.Asn1.DerInteger DefaultTrailerField
    static Org::BouncyCastle::Asn1::DerInteger* _get_DefaultTrailerField();
    // Set static field: static public readonly Org.BouncyCastle.Asn1.DerInteger DefaultTrailerField
    static void _set_DefaultTrailerField(Org::BouncyCastle::Asn1::DerInteger* value);
    // Get instance field reference: private Org.BouncyCastle.Asn1.X509.AlgorithmIdentifier hashAlgorithm
    Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*& dyn_hashAlgorithm();
    // Get instance field reference: private Org.BouncyCastle.Asn1.X509.AlgorithmIdentifier maskGenAlgorithm
    Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*& dyn_maskGenAlgorithm();
    // Get instance field reference: private Org.BouncyCastle.Asn1.DerInteger saltLength
    Org::BouncyCastle::Asn1::DerInteger*& dyn_saltLength();
    // Get instance field reference: private Org.BouncyCastle.Asn1.DerInteger trailerField
    Org::BouncyCastle::Asn1::DerInteger*& dyn_trailerField();
    // public Org.BouncyCastle.Asn1.X509.AlgorithmIdentifier get_HashAlgorithm()
    // Offset: 0x197890C
    Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* get_HashAlgorithm();
    // public System.Void .ctor(Org.BouncyCastle.Asn1.X509.AlgorithmIdentifier hashAlgorithm, Org.BouncyCastle.Asn1.X509.AlgorithmIdentifier maskGenAlgorithm, Org.BouncyCastle.Asn1.DerInteger saltLength, Org.BouncyCastle.Asn1.DerInteger trailerField)
    // Offset: 0x19788C0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RsassaPssParameters* New_ctor(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* hashAlgorithm, Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* maskGenAlgorithm, Org::BouncyCastle::Asn1::DerInteger* saltLength, Org::BouncyCastle::Asn1::DerInteger* trailerField) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Asn1::Pkcs::RsassaPssParameters::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RsassaPssParameters*, creationType>(hashAlgorithm, maskGenAlgorithm, saltLength, trailerField)));
    }
    // public System.Void .ctor(Org.BouncyCastle.Asn1.Asn1Sequence seq)
    // Offset: 0x19786D8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RsassaPssParameters* New_ctor(Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Asn1::Pkcs::RsassaPssParameters::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RsassaPssParameters*, creationType>(seq)));
    }
    // static private System.Void .cctor()
    // Offset: 0x1978BA0
    static void _cctor();
    // static public Org.BouncyCastle.Asn1.Pkcs.RsassaPssParameters GetInstance(System.Object obj)
    // Offset: 0x1978558
    static Org::BouncyCastle::Asn1::Pkcs::RsassaPssParameters* GetInstance(::Il2CppObject* obj);
    // public override Org.BouncyCastle.Asn1.Asn1Object ToAsn1Object()
    // Offset: 0x1978914
    // Implemented from: Org.BouncyCastle.Asn1.Asn1Encodable
    // Base method: Org.BouncyCastle.Asn1.Asn1Object Asn1Encodable::ToAsn1Object()
    Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();
  }; // Org.BouncyCastle.Asn1.Pkcs.RsassaPssParameters
  #pragma pack(pop)
  static check_size<sizeof(RsassaPssParameters), 40 + sizeof(Org::BouncyCastle::Asn1::DerInteger*)> __Org_BouncyCastle_Asn1_Pkcs_RsassaPssParametersSizeCheck;
  static_assert(sizeof(RsassaPssParameters) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::Pkcs::RsassaPssParameters::get_HashAlgorithm
// Il2CppName: get_HashAlgorithm
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* (Org::BouncyCastle::Asn1::Pkcs::RsassaPssParameters::*)()>(&Org::BouncyCastle::Asn1::Pkcs::RsassaPssParameters::get_HashAlgorithm)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::Pkcs::RsassaPssParameters*), "get_HashAlgorithm", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::Pkcs::RsassaPssParameters::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::Pkcs::RsassaPssParameters::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::Pkcs::RsassaPssParameters::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Org::BouncyCastle::Asn1::Pkcs::RsassaPssParameters::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::Pkcs::RsassaPssParameters*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::Pkcs::RsassaPssParameters::GetInstance
// Il2CppName: GetInstance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::Pkcs::RsassaPssParameters* (*)(::Il2CppObject*)>(&Org::BouncyCastle::Asn1::Pkcs::RsassaPssParameters::GetInstance)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::Pkcs::RsassaPssParameters*), "GetInstance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::Pkcs::RsassaPssParameters::ToAsn1Object
// Il2CppName: ToAsn1Object
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::Asn1Object* (Org::BouncyCastle::Asn1::Pkcs::RsassaPssParameters::*)()>(&Org::BouncyCastle::Asn1::Pkcs::RsassaPssParameters::ToAsn1Object)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::Pkcs::RsassaPssParameters*), "ToAsn1Object", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
