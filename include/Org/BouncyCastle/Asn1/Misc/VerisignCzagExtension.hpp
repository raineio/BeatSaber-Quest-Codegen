// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Org.BouncyCastle.Asn1.DerIA5String
#include "Org/BouncyCastle/Asn1/DerIA5String.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: Org.BouncyCastle.Asn1.Misc
namespace Org::BouncyCastle::Asn1::Misc {
  // Forward declaring type: VerisignCzagExtension
  class VerisignCzagExtension;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(Org::BouncyCastle::Asn1::Misc::VerisignCzagExtension);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Misc::VerisignCzagExtension*, "Org.BouncyCastle.Asn1.Misc", "VerisignCzagExtension");
// Type namespace: Org.BouncyCastle.Asn1.Misc
namespace Org::BouncyCastle::Asn1::Misc {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Asn1.Misc.VerisignCzagExtension
  // [TokenAttribute] Offset: FFFFFFFF
  class VerisignCzagExtension : public Org::BouncyCastle::Asn1::DerIA5String {
    public:
    // public System.Void .ctor(Org.BouncyCastle.Asn1.DerIA5String str)
    // Offset: 0x1970D8C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static VerisignCzagExtension* New_ctor(Org::BouncyCastle::Asn1::DerIA5String* str) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Asn1::Misc::VerisignCzagExtension::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<VerisignCzagExtension*, creationType>(str)));
    }
    // public override System.String ToString()
    // Offset: 0x1970DD0
    // Implemented from: Org.BouncyCastle.Asn1.DerStringBase
    // Base method: System.String DerStringBase::ToString()
    ::StringW ToString();
  }; // Org.BouncyCastle.Asn1.Misc.VerisignCzagExtension
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::Misc::VerisignCzagExtension::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::Misc::VerisignCzagExtension::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Org::BouncyCastle::Asn1::Misc::VerisignCzagExtension::*)()>(&Org::BouncyCastle::Asn1::Misc::VerisignCzagExtension::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::Misc::VerisignCzagExtension*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
