// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Asn1.Asn1OctetStringParser
#include "Org/BouncyCastle/Asn1/Asn1OctetStringParser.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Asn1
namespace Org::BouncyCastle::Asn1 {
  // Forward declaring type: Asn1StreamParser
  class Asn1StreamParser;
  // Forward declaring type: Asn1Object
  class Asn1Object;
}
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: Stream
  class Stream;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Asn1
namespace Org::BouncyCastle::Asn1 {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Asn1.BerOctetStringParser
  class BerOctetStringParser : public ::Il2CppObject/*, public Org::BouncyCastle::Asn1::Asn1OctetStringParser*/ {
    public:
    // private readonly Org.BouncyCastle.Asn1.Asn1StreamParser _parser
    // Size: 0x8
    // Offset: 0x10
    Org::BouncyCastle::Asn1::Asn1StreamParser* parser;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Asn1::Asn1StreamParser*) == 0x8);
    // Creating value type constructor for type: BerOctetStringParser
    BerOctetStringParser(Org::BouncyCastle::Asn1::Asn1StreamParser* parser_ = {}) noexcept : parser{parser_} {}
    // Creating interface conversion operator: operator Org::BouncyCastle::Asn1::Asn1OctetStringParser
    operator Org::BouncyCastle::Asn1::Asn1OctetStringParser() noexcept {
      return *reinterpret_cast<Org::BouncyCastle::Asn1::Asn1OctetStringParser*>(this);
    }
    // Creating conversion operator: operator Org::BouncyCastle::Asn1::Asn1StreamParser*
    constexpr operator Org::BouncyCastle::Asn1::Asn1StreamParser*() const noexcept {
      return parser;
    }
    // System.Void .ctor(Org.BouncyCastle.Asn1.Asn1StreamParser parser)
    // Offset: 0x16F2544
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BerOctetStringParser* New_ctor(Org::BouncyCastle::Asn1::Asn1StreamParser* parser) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Asn1::BerOctetStringParser::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BerOctetStringParser*, creationType>(parser)));
    }
    // public System.IO.Stream GetOctetStream()
    // Offset: 0x16F86E4
    System::IO::Stream* GetOctetStream();
    // public Org.BouncyCastle.Asn1.Asn1Object ToAsn1Object()
    // Offset: 0x16F2570
    Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();
  }; // Org.BouncyCastle.Asn1.BerOctetStringParser
  #pragma pack(pop)
  static check_size<sizeof(BerOctetStringParser), 16 + sizeof(Org::BouncyCastle::Asn1::Asn1StreamParser*)> __Org_BouncyCastle_Asn1_BerOctetStringParserSizeCheck;
  static_assert(sizeof(BerOctetStringParser) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::BerOctetStringParser*, "Org.BouncyCastle.Asn1", "BerOctetStringParser");
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::BerOctetStringParser::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::BerOctetStringParser::GetOctetStream
// Il2CppName: GetOctetStream
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IO::Stream* (Org::BouncyCastle::Asn1::BerOctetStringParser::*)()>(&Org::BouncyCastle::Asn1::BerOctetStringParser::GetOctetStream)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::BerOctetStringParser*), "GetOctetStream", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::BerOctetStringParser::ToAsn1Object
// Il2CppName: ToAsn1Object
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::Asn1Object* (Org::BouncyCastle::Asn1::BerOctetStringParser::*)()>(&Org::BouncyCastle::Asn1::BerOctetStringParser::ToAsn1Object)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::BerOctetStringParser*), "ToAsn1Object", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
