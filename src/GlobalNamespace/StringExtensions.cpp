// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: StringExtensions
#include "GlobalNamespace/StringExtensions.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: StringExtensions.Truncate
::Il2CppString* GlobalNamespace::StringExtensions::Truncate(::Il2CppString* s, int length, bool appendEllipsis) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("StringExtensions").WithContext("Truncate");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("", "StringExtensions", il2cpp_utils::NoArgClass<::Il2CppString*>(), "Truncate", {}, ::il2cpp_utils::ExtractTypes(s, length, appendEllipsis)));
  return ::il2cpp_utils::RunMethodThrow<::Il2CppString*, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, s, length, appendEllipsis);
}