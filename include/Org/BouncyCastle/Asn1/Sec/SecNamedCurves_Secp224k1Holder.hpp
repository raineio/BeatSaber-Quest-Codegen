// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Asn1.Sec.SecNamedCurves
#include "Org/BouncyCastle/Asn1/Sec/SecNamedCurves.hpp"
// Including type: Org.BouncyCastle.Asn1.X9.X9ECParametersHolder
#include "Org/BouncyCastle/Asn1/X9/X9ECParametersHolder.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Asn1::X9
namespace Org::BouncyCastle::Asn1::X9 {
  // Forward declaring type: X9ECParameters
  class X9ECParameters;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Asn1.Sec
namespace Org::BouncyCastle::Asn1::Sec {
  // Autogenerated type: Org.BouncyCastle.Asn1.Sec.SecNamedCurves/Secp224k1Holder
  class SecNamedCurves::Secp224k1Holder : public Org::BouncyCastle::Asn1::X9::X9ECParametersHolder {
    public:
    // Get static field: static readonly Org.BouncyCastle.Asn1.X9.X9ECParametersHolder Instance
    static Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* _get_Instance();
    // Set static field: static readonly Org.BouncyCastle.Asn1.X9.X9ECParametersHolder Instance
    static void _set_Instance(Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* value);
    // static private System.Void .cctor()
    // Offset: 0x1411CF0
    static void _cctor();
    // private System.Void .ctor()
    // Offset: 0x14118D4
    // Implemented from: Org.BouncyCastle.Asn1.X9.X9ECParametersHolder
    // Base method: System.Void X9ECParametersHolder::.ctor()
    // Base method: System.Void Object::.ctor()
    static SecNamedCurves::Secp224k1Holder* New_ctor();
    // protected override Org.BouncyCastle.Asn1.X9.X9ECParameters CreateParameters()
    // Offset: 0x14118DC
    // Implemented from: Org.BouncyCastle.Asn1.X9.X9ECParametersHolder
    // Base method: Org.BouncyCastle.Asn1.X9.X9ECParameters X9ECParametersHolder::CreateParameters()
    Org::BouncyCastle::Asn1::X9::X9ECParameters* CreateParameters();
  }; // Org.BouncyCastle.Asn1.Sec.SecNamedCurves/Secp224k1Holder
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Sec::SecNamedCurves::Secp224k1Holder*, "Org.BouncyCastle.Asn1.Sec", "SecNamedCurves/Secp224k1Holder");
#pragma pack(pop)
