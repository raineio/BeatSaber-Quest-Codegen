// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: NUnit.Framework.Constraints.TrueConstraint
#include "NUnit/Framework/Constraints/TrueConstraint.hpp"
// Including type: NUnit.Framework.Constraints.ConstraintResult
#include "NUnit/Framework/Constraints/ConstraintResult.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: NUnit.Framework.Constraints.TrueConstraint..ctor
NUnit::Framework::Constraints::TrueConstraint* NUnit::Framework::Constraints::TrueConstraint::New_ctor() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("NUnit::Framework::Constraints").WithContext("TrueConstraint").WithContext(".ctor");
  return THROW_UNLESS(::il2cpp_utils::New<TrueConstraint*>());
}
// Autogenerated method: NUnit.Framework.Constraints.TrueConstraint.ApplyTo
NUnit::Framework::Constraints::ConstraintResult* NUnit::Framework::Constraints::TrueConstraint::ApplyTo(::Il2CppObject* actual) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("NUnit::Framework::Constraints").WithContext("TrueConstraint").WithContext("ApplyTo");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<NUnit::Framework::Constraints::ConstraintResult*>(), "ApplyTo", {}, ::il2cpp_utils::ExtractTypes(actual)));
  return ::il2cpp_utils::RunMethodThrow<NUnit::Framework::Constraints::ConstraintResult*, false>(this, ___internal__method, actual);
}