// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Org.BouncyCastle.Asn1.Asn1Encodable
#include "Org/BouncyCastle/Asn1/Asn1Encodable.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Asn1
namespace Org::BouncyCastle::Asn1 {
  // Forward declaring type: DerInteger
  class DerInteger;
  // Forward declaring type: Asn1Sequence
  class Asn1Sequence;
  // Forward declaring type: Asn1Object
  class Asn1Object;
}
// Forward declaring namespace: Org::BouncyCastle::Math
namespace Org::BouncyCastle::Math {
  // Forward declaring type: BigInteger
  class BigInteger;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Asn1.X509
namespace Org::BouncyCastle::Asn1::X509 {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Asn1.X509.DsaParameter
  // [TokenAttribute] Offset: FFFFFFFF
  class DsaParameter : public Org::BouncyCastle::Asn1::Asn1Encodable {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    private:
    #endif
    // readonly Org.BouncyCastle.Asn1.DerInteger p
    // Size: 0x8
    // Offset: 0x10
    Org::BouncyCastle::Asn1::DerInteger* p;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Asn1::DerInteger*) == 0x8);
    // readonly Org.BouncyCastle.Asn1.DerInteger q
    // Size: 0x8
    // Offset: 0x18
    Org::BouncyCastle::Asn1::DerInteger* q;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Asn1::DerInteger*) == 0x8);
    // readonly Org.BouncyCastle.Asn1.DerInteger g
    // Size: 0x8
    // Offset: 0x20
    Org::BouncyCastle::Asn1::DerInteger* g;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Asn1::DerInteger*) == 0x8);
    public:
    // Get instance field reference: readonly Org.BouncyCastle.Asn1.DerInteger p
    Org::BouncyCastle::Asn1::DerInteger*& dyn_p();
    // Get instance field reference: readonly Org.BouncyCastle.Asn1.DerInteger q
    Org::BouncyCastle::Asn1::DerInteger*& dyn_q();
    // Get instance field reference: readonly Org.BouncyCastle.Asn1.DerInteger g
    Org::BouncyCastle::Asn1::DerInteger*& dyn_g();
    // public Org.BouncyCastle.Math.BigInteger get_P()
    // Offset: 0x1BB892C
    Org::BouncyCastle::Math::BigInteger* get_P();
    // public Org.BouncyCastle.Math.BigInteger get_Q()
    // Offset: 0x1BB8948
    Org::BouncyCastle::Math::BigInteger* get_Q();
    // public Org.BouncyCastle.Math.BigInteger get_G()
    // Offset: 0x1BB8964
    Org::BouncyCastle::Math::BigInteger* get_G();
    // private System.Void .ctor(Org.BouncyCastle.Asn1.Asn1Sequence seq)
    // Offset: 0x1BB87C8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DsaParameter* New_ctor(Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Asn1::X509::DsaParameter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DsaParameter*, creationType>(seq)));
    }
    // static public Org.BouncyCastle.Asn1.X509.DsaParameter GetInstance(System.Object obj)
    // Offset: 0x1BB8654
    static Org::BouncyCastle::Asn1::X509::DsaParameter* GetInstance(::Il2CppObject* obj);
    // public override Org.BouncyCastle.Asn1.Asn1Object ToAsn1Object()
    // Offset: 0x1BB8980
    // Implemented from: Org.BouncyCastle.Asn1.Asn1Encodable
    // Base method: Org.BouncyCastle.Asn1.Asn1Object Asn1Encodable::ToAsn1Object()
    Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();
  }; // Org.BouncyCastle.Asn1.X509.DsaParameter
  #pragma pack(pop)
  static check_size<sizeof(DsaParameter), 32 + sizeof(Org::BouncyCastle::Asn1::DerInteger*)> __Org_BouncyCastle_Asn1_X509_DsaParameterSizeCheck;
  static_assert(sizeof(DsaParameter) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::X509::DsaParameter*, "Org.BouncyCastle.Asn1.X509", "DsaParameter");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::X509::DsaParameter::get_P
// Il2CppName: get_P
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::BigInteger* (Org::BouncyCastle::Asn1::X509::DsaParameter::*)()>(&Org::BouncyCastle::Asn1::X509::DsaParameter::get_P)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::X509::DsaParameter*), "get_P", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::X509::DsaParameter::get_Q
// Il2CppName: get_Q
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::BigInteger* (Org::BouncyCastle::Asn1::X509::DsaParameter::*)()>(&Org::BouncyCastle::Asn1::X509::DsaParameter::get_Q)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::X509::DsaParameter*), "get_Q", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::X509::DsaParameter::get_G
// Il2CppName: get_G
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::BigInteger* (Org::BouncyCastle::Asn1::X509::DsaParameter::*)()>(&Org::BouncyCastle::Asn1::X509::DsaParameter::get_G)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::X509::DsaParameter*), "get_G", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::X509::DsaParameter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::X509::DsaParameter::GetInstance
// Il2CppName: GetInstance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::X509::DsaParameter* (*)(::Il2CppObject*)>(&Org::BouncyCastle::Asn1::X509::DsaParameter::GetInstance)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::X509::DsaParameter*), "GetInstance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::X509::DsaParameter::ToAsn1Object
// Il2CppName: ToAsn1Object
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::Asn1Object* (Org::BouncyCastle::Asn1::X509::DsaParameter::*)()>(&Org::BouncyCastle::Asn1::X509::DsaParameter::ToAsn1Object)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::X509::DsaParameter*), "ToAsn1Object", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
