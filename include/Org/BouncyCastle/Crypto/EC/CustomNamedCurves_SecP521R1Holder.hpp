// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Org.BouncyCastle.Crypto.EC.CustomNamedCurves
#include "Org/BouncyCastle/Crypto/EC/CustomNamedCurves.hpp"
// Including type: Org.BouncyCastle.Asn1.X9.X9ECParametersHolder
#include "Org/BouncyCastle/Asn1/X9/X9ECParametersHolder.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Asn1::X9
namespace Org::BouncyCastle::Asn1::X9 {
  // Forward declaring type: X9ECParameters
  class X9ECParameters;
}
// Completed forward declares
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(Org::BouncyCastle::Crypto::EC::CustomNamedCurves::SecP521R1Holder);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::EC::CustomNamedCurves::SecP521R1Holder*, "Org.BouncyCastle.Crypto.EC", "CustomNamedCurves/SecP521R1Holder");
// Type namespace: Org.BouncyCastle.Crypto.EC
namespace Org::BouncyCastle::Crypto::EC {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.EC.CustomNamedCurves/Org.BouncyCastle.Crypto.EC.SecP521R1Holder
  // [TokenAttribute] Offset: FFFFFFFF
  class CustomNamedCurves::SecP521R1Holder : public Org::BouncyCastle::Asn1::X9::X9ECParametersHolder {
    public:
    // Get static field: static readonly Org.BouncyCastle.Asn1.X9.X9ECParametersHolder Instance
    static Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* _get_Instance();
    // Set static field: static readonly Org.BouncyCastle.Asn1.X9.X9ECParametersHolder Instance
    static void _set_Instance(Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* value);
    // static private System.Void .cctor()
    // Offset: 0x1AEC708
    static void _cctor();
    // private System.Void .ctor()
    // Offset: 0x1AEC5B4
    // Implemented from: Org.BouncyCastle.Asn1.X9.X9ECParametersHolder
    // Base method: System.Void X9ECParametersHolder::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CustomNamedCurves::SecP521R1Holder* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::EC::CustomNamedCurves::SecP521R1Holder::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CustomNamedCurves::SecP521R1Holder*, creationType>()));
    }
    // protected override Org.BouncyCastle.Asn1.X9.X9ECParameters CreateParameters()
    // Offset: 0x1AEC5BC
    // Implemented from: Org.BouncyCastle.Asn1.X9.X9ECParametersHolder
    // Base method: Org.BouncyCastle.Asn1.X9.X9ECParameters X9ECParametersHolder::CreateParameters()
    Org::BouncyCastle::Asn1::X9::X9ECParameters* CreateParameters();
  }; // Org.BouncyCastle.Crypto.EC.CustomNamedCurves/Org.BouncyCastle.Crypto.EC.SecP521R1Holder
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::EC::CustomNamedCurves::SecP521R1Holder::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Org::BouncyCastle::Crypto::EC::CustomNamedCurves::SecP521R1Holder::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::EC::CustomNamedCurves::SecP521R1Holder*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::EC::CustomNamedCurves::SecP521R1Holder::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::EC::CustomNamedCurves::SecP521R1Holder::CreateParameters
// Il2CppName: CreateParameters
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::X9::X9ECParameters* (Org::BouncyCastle::Crypto::EC::CustomNamedCurves::SecP521R1Holder::*)()>(&Org::BouncyCastle::Crypto::EC::CustomNamedCurves::SecP521R1Holder::CreateParameters)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::EC::CustomNamedCurves::SecP521R1Holder*), "CreateParameters", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
