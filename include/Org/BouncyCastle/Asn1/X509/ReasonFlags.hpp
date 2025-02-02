// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Org.BouncyCastle.Asn1.DerBitString
#include "Org/BouncyCastle/Asn1/DerBitString.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Org.BouncyCastle.Asn1.X509
namespace Org::BouncyCastle::Asn1::X509 {
  // Forward declaring type: ReasonFlags
  class ReasonFlags;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X509::ReasonFlags);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X509::ReasonFlags*, "Org.BouncyCastle.Asn1.X509", "ReasonFlags");
// Type namespace: Org.BouncyCastle.Asn1.X509
namespace Org::BouncyCastle::Asn1::X509 {
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Asn1.X509.ReasonFlags
  // [TokenAttribute] Offset: FFFFFFFF
  class ReasonFlags : public ::Org::BouncyCastle::Asn1::DerBitString {
    public:
    // public System.Void .ctor(Org.BouncyCastle.Asn1.DerBitString reasons)
    // Offset: 0x1F9D734
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ReasonFlags* New_ctor(::Org::BouncyCastle::Asn1::DerBitString* reasons) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Org::BouncyCastle::Asn1::X509::ReasonFlags::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ReasonFlags*, creationType>(reasons)));
    }
  }; // Org.BouncyCastle.Asn1.X509.ReasonFlags
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::X509::ReasonFlags::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
