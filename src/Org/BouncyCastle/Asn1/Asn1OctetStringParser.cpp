// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: Org.BouncyCastle.Asn1.Asn1OctetStringParser
#include "Org/BouncyCastle/Asn1/Asn1OctetStringParser.hpp"
// Including type: System.IO.Stream
#include "System/IO/Stream.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Org.BouncyCastle.Asn1.Asn1OctetStringParser.GetOctetStream
System::IO::Stream* Org::BouncyCastle::Asn1::Asn1OctetStringParser::GetOctetStream() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Asn1").WithContext("Asn1OctetStringParser").WithContext("GetOctetStream");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<System::IO::Stream*>(), "GetOctetStream", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<System::IO::Stream*, false>(this, ___internal__method);
}