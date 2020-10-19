// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Asn1.Asn1Encodable
#include "Org/BouncyCastle/Asn1/Asn1Encodable.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Asn1
namespace Org::BouncyCastle::Asn1 {
  // Forward declaring type: Asn1StreamParser
  class Asn1StreamParser;
  // Forward declaring type: Asn1Object
  class Asn1Object;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Asn1
namespace Org::BouncyCastle::Asn1 {
  // Autogenerated type: Org.BouncyCastle.Asn1.DerExternalParser
  class DerExternalParser : public Org::BouncyCastle::Asn1::Asn1Encodable {
    public:
    // private readonly Org.BouncyCastle.Asn1.Asn1StreamParser _parser
    // Offset: 0x10
    Org::BouncyCastle::Asn1::Asn1StreamParser* parser;
    // Creating conversion operator: operator Org::BouncyCastle::Asn1::Asn1StreamParser*
    constexpr operator Org::BouncyCastle::Asn1::Asn1StreamParser*() const noexcept {
      return parser;
    }
    // public System.Void .ctor(Org.BouncyCastle.Asn1.Asn1StreamParser parser)
    // Offset: 0x1314CD0
    static DerExternalParser* New_ctor(Org::BouncyCastle::Asn1::Asn1StreamParser* parser);
    // public override Org.BouncyCastle.Asn1.Asn1Object ToAsn1Object()
    // Offset: 0x132325C
    // Implemented from: Org.BouncyCastle.Asn1.Asn1Encodable
    // Base method: Org.BouncyCastle.Asn1.Asn1Object Asn1Encodable::ToAsn1Object()
    Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();
  }; // Org.BouncyCastle.Asn1.DerExternalParser
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::DerExternalParser*, "Org.BouncyCastle.Asn1", "DerExternalParser");
#pragma pack(pop)
