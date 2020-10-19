// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: NUnit::Framework::Constraints
namespace NUnit::Framework::Constraints {
  // Forward declaring type: TrueConstraint
  class TrueConstraint;
  // Forward declaring type: EqualConstraint
  class EqualConstraint;
}
// Completed forward declares
// Type namespace: NUnit.Framework
namespace NUnit::Framework {
  // Autogenerated type: NUnit.Framework.Is
  class Is : public ::Il2CppObject {
    public:
    // static public NUnit.Framework.Constraints.TrueConstraint get_True()
    // Offset: 0x1ED5B68
    static NUnit::Framework::Constraints::TrueConstraint* get_True();
    // static public NUnit.Framework.Constraints.EqualConstraint EqualTo(System.Object expected)
    // Offset: 0x1ED5BC4
    static NUnit::Framework::Constraints::EqualConstraint* EqualTo(::Il2CppObject* expected);
  }; // NUnit.Framework.Is
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Is*, "NUnit.Framework", "Is");
#pragma pack(pop)
