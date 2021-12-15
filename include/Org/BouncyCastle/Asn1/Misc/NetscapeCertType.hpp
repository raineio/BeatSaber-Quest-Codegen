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
// Type namespace: Org.BouncyCastle.Asn1.Misc
namespace Org::BouncyCastle::Asn1::Misc {
  // Forward declaring type: NetscapeCertType
  class NetscapeCertType;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(Org::BouncyCastle::Asn1::Misc::NetscapeCertType);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Misc::NetscapeCertType*, "Org.BouncyCastle.Asn1.Misc", "NetscapeCertType");
// Type namespace: Org.BouncyCastle.Asn1.Misc
namespace Org::BouncyCastle::Asn1::Misc {
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Asn1.Misc.NetscapeCertType
  // [TokenAttribute] Offset: FFFFFFFF
  class NetscapeCertType : public Org::BouncyCastle::Asn1::DerBitString {
    public:
    // public System.Void .ctor(Org.BouncyCastle.Asn1.DerBitString usage)
    // Offset: 0x1970B80
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NetscapeCertType* New_ctor(Org::BouncyCastle::Asn1::DerBitString* usage) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Asn1::Misc::NetscapeCertType::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NetscapeCertType*, creationType>(usage)));
    }
    // public override System.String ToString()
    // Offset: 0x1970C2C
    // Implemented from: Org.BouncyCastle.Asn1.DerStringBase
    // Base method: System.String DerStringBase::ToString()
    ::Il2CppString* ToString();
  }; // Org.BouncyCastle.Asn1.Misc.NetscapeCertType
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::Misc::NetscapeCertType::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::Misc::NetscapeCertType::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (Org::BouncyCastle::Asn1::Misc::NetscapeCertType::*)()>(&Org::BouncyCastle::Asn1::Misc::NetscapeCertType::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::Misc::NetscapeCertType*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
