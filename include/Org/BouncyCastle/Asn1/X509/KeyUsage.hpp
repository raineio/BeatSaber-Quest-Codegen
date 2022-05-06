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
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: Org.BouncyCastle.Asn1.X509
namespace Org::BouncyCastle::Asn1::X509 {
  // Forward declaring type: KeyUsage
  class KeyUsage;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X509::KeyUsage);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X509::KeyUsage*, "Org.BouncyCastle.Asn1.X509", "KeyUsage");
// Type namespace: Org.BouncyCastle.Asn1.X509
namespace Org::BouncyCastle::Asn1::X509 {
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Asn1.X509.KeyUsage
  // [TokenAttribute] Offset: FFFFFFFF
  class KeyUsage : public ::Org::BouncyCastle::Asn1::DerBitString {
    public:
    // private System.Void .ctor(Org.BouncyCastle.Asn1.DerBitString usage)
    // Offset: 0x1F16084
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static KeyUsage* New_ctor(::Org::BouncyCastle::Asn1::DerBitString* usage) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Org::BouncyCastle::Asn1::X509::KeyUsage::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<KeyUsage*, creationType>(usage)));
    }
    // static public Org.BouncyCastle.Asn1.X509.KeyUsage GetInstance(System.Object obj)
    // Offset: 0x1F15F6C
    static ::Org::BouncyCastle::Asn1::X509::KeyUsage* GetInstance(::Il2CppObject* obj);
    // public override System.String ToString()
    // Offset: 0x1F16130
    // Implemented from: Org.BouncyCastle.Asn1.DerStringBase
    // Base method: System.String DerStringBase::ToString()
    ::StringW ToString();
  }; // Org.BouncyCastle.Asn1.X509.KeyUsage
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::X509::KeyUsage::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::X509::KeyUsage::GetInstance
// Il2CppName: GetInstance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X509::KeyUsage* (*)(::Il2CppObject*)>(&Org::BouncyCastle::Asn1::X509::KeyUsage::GetInstance)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::X509::KeyUsage*), "GetInstance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::X509::KeyUsage::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Org::BouncyCastle::Asn1::X509::KeyUsage::*)()>(&Org::BouncyCastle::Asn1::X509::KeyUsage::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::X509::KeyUsage*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
