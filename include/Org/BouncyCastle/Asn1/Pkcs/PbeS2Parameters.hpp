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
// Forward declaring namespace: Org::BouncyCastle::Asn1::Pkcs
namespace Org::BouncyCastle::Asn1::Pkcs {
  // Forward declaring type: KeyDerivationFunc
  class KeyDerivationFunc;
  // Forward declaring type: EncryptionScheme
  class EncryptionScheme;
}
// Forward declaring namespace: Org::BouncyCastle::Asn1
namespace Org::BouncyCastle::Asn1 {
  // Forward declaring type: Asn1Sequence
  class Asn1Sequence;
  // Forward declaring type: Asn1Object
  class Asn1Object;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Asn1.Pkcs
namespace Org::BouncyCastle::Asn1::Pkcs {
  // Forward declaring type: PbeS2Parameters
  class PbeS2Parameters;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(Org::BouncyCastle::Asn1::Pkcs::PbeS2Parameters);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Pkcs::PbeS2Parameters*, "Org.BouncyCastle.Asn1.Pkcs", "PbeS2Parameters");
// Type namespace: Org.BouncyCastle.Asn1.Pkcs
namespace Org::BouncyCastle::Asn1::Pkcs {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Asn1.Pkcs.PbeS2Parameters
  // [TokenAttribute] Offset: FFFFFFFF
  class PbeS2Parameters : public Org::BouncyCastle::Asn1::Asn1Encodable {
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
    // private readonly Org.BouncyCastle.Asn1.Pkcs.KeyDerivationFunc func
    // Size: 0x8
    // Offset: 0x10
    Org::BouncyCastle::Asn1::Pkcs::KeyDerivationFunc* func;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Asn1::Pkcs::KeyDerivationFunc*) == 0x8);
    // private readonly Org.BouncyCastle.Asn1.Pkcs.EncryptionScheme scheme
    // Size: 0x8
    // Offset: 0x18
    Org::BouncyCastle::Asn1::Pkcs::EncryptionScheme* scheme;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Asn1::Pkcs::EncryptionScheme*) == 0x8);
    public:
    // Get instance field reference: private readonly Org.BouncyCastle.Asn1.Pkcs.KeyDerivationFunc func
    Org::BouncyCastle::Asn1::Pkcs::KeyDerivationFunc*& dyn_func();
    // Get instance field reference: private readonly Org.BouncyCastle.Asn1.Pkcs.EncryptionScheme scheme
    Org::BouncyCastle::Asn1::Pkcs::EncryptionScheme*& dyn_scheme();
    // public Org.BouncyCastle.Asn1.Pkcs.KeyDerivationFunc get_KeyDerivationFunc()
    // Offset: 0x1975048
    Org::BouncyCastle::Asn1::Pkcs::KeyDerivationFunc* get_KeyDerivationFunc();
    // public Org.BouncyCastle.Asn1.Pkcs.EncryptionScheme get_EncryptionScheme()
    // Offset: 0x1975050
    Org::BouncyCastle::Asn1::Pkcs::EncryptionScheme* get_EncryptionScheme();
    // public System.Void .ctor(Org.BouncyCastle.Asn1.Asn1Sequence seq)
    // Offset: 0x1974C54
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PbeS2Parameters* New_ctor(Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Asn1::Pkcs::PbeS2Parameters::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PbeS2Parameters*, creationType>(seq)));
    }
    // static public Org.BouncyCastle.Asn1.Pkcs.PbeS2Parameters GetInstance(System.Object obj)
    // Offset: 0x1974BB0
    static Org::BouncyCastle::Asn1::Pkcs::PbeS2Parameters* GetInstance(::Il2CppObject* obj);
    // public override Org.BouncyCastle.Asn1.Asn1Object ToAsn1Object()
    // Offset: 0x1975058
    // Implemented from: Org.BouncyCastle.Asn1.Asn1Encodable
    // Base method: Org.BouncyCastle.Asn1.Asn1Object Asn1Encodable::ToAsn1Object()
    Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();
  }; // Org.BouncyCastle.Asn1.Pkcs.PbeS2Parameters
  #pragma pack(pop)
  static check_size<sizeof(PbeS2Parameters), 24 + sizeof(Org::BouncyCastle::Asn1::Pkcs::EncryptionScheme*)> __Org_BouncyCastle_Asn1_Pkcs_PbeS2ParametersSizeCheck;
  static_assert(sizeof(PbeS2Parameters) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::Pkcs::PbeS2Parameters::get_KeyDerivationFunc
// Il2CppName: get_KeyDerivationFunc
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::Pkcs::KeyDerivationFunc* (Org::BouncyCastle::Asn1::Pkcs::PbeS2Parameters::*)()>(&Org::BouncyCastle::Asn1::Pkcs::PbeS2Parameters::get_KeyDerivationFunc)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::Pkcs::PbeS2Parameters*), "get_KeyDerivationFunc", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::Pkcs::PbeS2Parameters::get_EncryptionScheme
// Il2CppName: get_EncryptionScheme
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::Pkcs::EncryptionScheme* (Org::BouncyCastle::Asn1::Pkcs::PbeS2Parameters::*)()>(&Org::BouncyCastle::Asn1::Pkcs::PbeS2Parameters::get_EncryptionScheme)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::Pkcs::PbeS2Parameters*), "get_EncryptionScheme", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::Pkcs::PbeS2Parameters::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::Pkcs::PbeS2Parameters::GetInstance
// Il2CppName: GetInstance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::Pkcs::PbeS2Parameters* (*)(::Il2CppObject*)>(&Org::BouncyCastle::Asn1::Pkcs::PbeS2Parameters::GetInstance)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::Pkcs::PbeS2Parameters*), "GetInstance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::Pkcs::PbeS2Parameters::ToAsn1Object
// Il2CppName: ToAsn1Object
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::Asn1Object* (Org::BouncyCastle::Asn1::Pkcs::PbeS2Parameters::*)()>(&Org::BouncyCastle::Asn1::Pkcs::PbeS2Parameters::ToAsn1Object)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::Pkcs::PbeS2Parameters*), "ToAsn1Object", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
