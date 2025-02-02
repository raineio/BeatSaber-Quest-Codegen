// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: Org.BouncyCastle.Asn1
namespace Org::BouncyCastle::Asn1 {
  // Forward declaring type: OidTokenizer
  class OidTokenizer;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Org::BouncyCastle::Asn1::OidTokenizer);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::OidTokenizer*, "Org.BouncyCastle.Asn1", "OidTokenizer");
// Type namespace: Org.BouncyCastle.Asn1
namespace Org::BouncyCastle::Asn1 {
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Asn1.OidTokenizer
  // [TokenAttribute] Offset: FFFFFFFF
  class OidTokenizer : public ::Il2CppObject {
    public:
    public:
    // private System.String oid
    // Size: 0x8
    // Offset: 0x10
    ::StringW oid;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Int32 index
    // Size: 0x4
    // Offset: 0x18
    int index;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: private System.String oid
    [[deprecated("Use field access instead!")]] ::StringW& dyn_oid();
    // Get instance field reference: private System.Int32 index
    [[deprecated("Use field access instead!")]] int& dyn_index();
    // public System.Boolean get_HasMoreTokens()
    // Offset: 0x1D82718
    bool get_HasMoreTokens();
    // public System.Void .ctor(System.String oid)
    // Offset: 0x1D826EC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OidTokenizer* New_ctor(::StringW oid) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Org::BouncyCastle::Asn1::OidTokenizer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OidTokenizer*, creationType>(oid)));
    }
    // public System.String NextToken()
    // Offset: 0x1D82728
    ::StringW NextToken();
  }; // Org.BouncyCastle.Asn1.OidTokenizer
  #pragma pack(pop)
  static check_size<sizeof(OidTokenizer), 24 + sizeof(int)> __Org_BouncyCastle_Asn1_OidTokenizerSizeCheck;
  static_assert(sizeof(OidTokenizer) == 0x1C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::OidTokenizer::get_HasMoreTokens
// Il2CppName: get_HasMoreTokens
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Asn1::OidTokenizer::*)()>(&Org::BouncyCastle::Asn1::OidTokenizer::get_HasMoreTokens)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::OidTokenizer*), "get_HasMoreTokens", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::OidTokenizer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::OidTokenizer::NextToken
// Il2CppName: NextToken
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Org::BouncyCastle::Asn1::OidTokenizer::*)()>(&Org::BouncyCastle::Asn1::OidTokenizer::NextToken)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::OidTokenizer*), "NextToken", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
