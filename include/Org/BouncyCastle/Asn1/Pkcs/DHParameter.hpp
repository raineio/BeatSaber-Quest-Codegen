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
// Type namespace: Org.BouncyCastle.Asn1.Pkcs
namespace Org::BouncyCastle::Asn1::Pkcs {
  // Forward declaring type: DHParameter
  class DHParameter;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Pkcs::DHParameter);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Pkcs::DHParameter*, "Org.BouncyCastle.Asn1.Pkcs", "DHParameter");
// Type namespace: Org.BouncyCastle.Asn1.Pkcs
namespace Org::BouncyCastle::Asn1::Pkcs {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Asn1.Pkcs.DHParameter
  // [TokenAttribute] Offset: FFFFFFFF
  class DHParameter : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
    public:
    public:
    // Org.BouncyCastle.Asn1.DerInteger p
    // Size: 0x8
    // Offset: 0x10
    ::Org::BouncyCastle::Asn1::DerInteger* p;
    // Field size check
    static_assert(sizeof(::Org::BouncyCastle::Asn1::DerInteger*) == 0x8);
    // Org.BouncyCastle.Asn1.DerInteger g
    // Size: 0x8
    // Offset: 0x18
    ::Org::BouncyCastle::Asn1::DerInteger* g;
    // Field size check
    static_assert(sizeof(::Org::BouncyCastle::Asn1::DerInteger*) == 0x8);
    // Org.BouncyCastle.Asn1.DerInteger l
    // Size: 0x8
    // Offset: 0x20
    ::Org::BouncyCastle::Asn1::DerInteger* l;
    // Field size check
    static_assert(sizeof(::Org::BouncyCastle::Asn1::DerInteger*) == 0x8);
    public:
    // Get instance field reference: Org.BouncyCastle.Asn1.DerInteger p
    [[deprecated("Use field access instead!")]] ::Org::BouncyCastle::Asn1::DerInteger*& dyn_p();
    // Get instance field reference: Org.BouncyCastle.Asn1.DerInteger g
    [[deprecated("Use field access instead!")]] ::Org::BouncyCastle::Asn1::DerInteger*& dyn_g();
    // Get instance field reference: Org.BouncyCastle.Asn1.DerInteger l
    [[deprecated("Use field access instead!")]] ::Org::BouncyCastle::Asn1::DerInteger*& dyn_l();
    // public Org.BouncyCastle.Math.BigInteger get_P()
    // Offset: 0x1CCC424
    ::Org::BouncyCastle::Math::BigInteger* get_P();
    // public Org.BouncyCastle.Math.BigInteger get_G()
    // Offset: 0x1CCC440
    ::Org::BouncyCastle::Math::BigInteger* get_G();
    // public Org.BouncyCastle.Math.BigInteger get_L()
    // Offset: 0x1CCC45C
    ::Org::BouncyCastle::Math::BigInteger* get_L();
    // public System.Void .ctor(Org.BouncyCastle.Asn1.Asn1Sequence seq)
    // Offset: 0x1CCC0AC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DHParameter* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Org::BouncyCastle::Asn1::Pkcs::DHParameter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DHParameter*, creationType>(seq)));
    }
    // public override Org.BouncyCastle.Asn1.Asn1Object ToAsn1Object()
    // Offset: 0x1CCC470
    // Implemented from: Org.BouncyCastle.Asn1.Asn1Encodable
    // Base method: Org.BouncyCastle.Asn1.Asn1Object Asn1Encodable::ToAsn1Object()
    ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();
  }; // Org.BouncyCastle.Asn1.Pkcs.DHParameter
  #pragma pack(pop)
  static check_size<sizeof(DHParameter), 32 + sizeof(::Org::BouncyCastle::Asn1::DerInteger*)> __Org_BouncyCastle_Asn1_Pkcs_DHParameterSizeCheck;
  static_assert(sizeof(DHParameter) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::Pkcs::DHParameter::get_P
// Il2CppName: get_P
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::BigInteger* (Org::BouncyCastle::Asn1::Pkcs::DHParameter::*)()>(&Org::BouncyCastle::Asn1::Pkcs::DHParameter::get_P)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::Pkcs::DHParameter*), "get_P", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::Pkcs::DHParameter::get_G
// Il2CppName: get_G
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::BigInteger* (Org::BouncyCastle::Asn1::Pkcs::DHParameter::*)()>(&Org::BouncyCastle::Asn1::Pkcs::DHParameter::get_G)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::Pkcs::DHParameter*), "get_G", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::Pkcs::DHParameter::get_L
// Il2CppName: get_L
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::BigInteger* (Org::BouncyCastle::Asn1::Pkcs::DHParameter::*)()>(&Org::BouncyCastle::Asn1::Pkcs::DHParameter::get_L)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::Pkcs::DHParameter*), "get_L", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::Pkcs::DHParameter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::Pkcs::DHParameter::ToAsn1Object
// Il2CppName: ToAsn1Object
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (Org::BouncyCastle::Asn1::Pkcs::DHParameter::*)()>(&Org::BouncyCastle::Asn1::Pkcs::DHParameter::ToAsn1Object)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::Pkcs::DHParameter*), "ToAsn1Object", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
