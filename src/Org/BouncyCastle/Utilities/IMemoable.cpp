// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: Org.BouncyCastle.Utilities.IMemoable
#include "Org/BouncyCastle/Utilities/IMemoable.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Org.BouncyCastle.Utilities.IMemoable.Copy
Org::BouncyCastle::Utilities::IMemoable* Org::BouncyCastle::Utilities::IMemoable::Copy() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Utilities").WithContext("IMemoable").WithContext("Copy");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<Org::BouncyCastle::Utilities::IMemoable*>(), "Copy", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<Org::BouncyCastle::Utilities::IMemoable*, false>(this, ___internal__method);
}
// Autogenerated method: Org.BouncyCastle.Utilities.IMemoable.Reset
void Org::BouncyCastle::Utilities::IMemoable::Reset(Org::BouncyCastle::Utilities::IMemoable* other) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Utilities").WithContext("IMemoable").WithContext("Reset");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "Reset", {}, ::il2cpp_utils::ExtractTypes(other)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, other);
}