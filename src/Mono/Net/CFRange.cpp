// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: Mono.Net.CFRange
#include "Mono/Net/CFRange.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Mono.Net.CFRange..ctor
Mono::Net::CFRange::CFRange(int loc, int len) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Mono::Net").WithContext("CFRange").WithContext(".ctor");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(*this, il2cpp_utils::NoArgClass<CFRange>(), ".ctor", {}, ::il2cpp_utils::ExtractTypes(loc, len)));
  ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, loc, len);
}