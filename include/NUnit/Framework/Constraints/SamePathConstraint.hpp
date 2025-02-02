// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: NUnit.Framework.Constraints.PathConstraint
#include "NUnit/Framework/Constraints/PathConstraint.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: NUnit.Framework.Constraints
namespace NUnit::Framework::Constraints {
  // Forward declaring type: SamePathConstraint
  class SamePathConstraint;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::NUnit::Framework::Constraints::SamePathConstraint);
DEFINE_IL2CPP_ARG_TYPE(::NUnit::Framework::Constraints::SamePathConstraint*, "NUnit.Framework.Constraints", "SamePathConstraint");
// Type namespace: NUnit.Framework.Constraints
namespace NUnit::Framework::Constraints {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: NUnit.Framework.Constraints.SamePathConstraint
  // [TokenAttribute] Offset: FFFFFFFF
  class SamePathConstraint : public ::NUnit::Framework::Constraints::PathConstraint {
    public:
    // public override System.String get_Description()
    // Offset: 0x1D5B678
    // Implemented from: NUnit.Framework.Constraints.StringConstraint
    // Base method: System.String StringConstraint::get_Description()
    ::StringW get_Description();
    // public System.Void .ctor(System.String expected)
    // Offset: 0x1D59D94
    // Implemented from: NUnit.Framework.Constraints.PathConstraint
    // Base method: System.Void PathConstraint::.ctor(System.String expected)
    // Base method: System.Void StringConstraint::.ctor(System.String expected)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SamePathConstraint* New_ctor(::StringW expected) {
      static auto ___internal__logger = ::Logger::get().WithContext("::NUnit::Framework::Constraints::SamePathConstraint::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SamePathConstraint*, creationType>(expected)));
    }
    // protected override System.Boolean Matches(System.String actual)
    // Offset: 0x1D5B6FC
    // Implemented from: NUnit.Framework.Constraints.StringConstraint
    // Base method: System.Boolean StringConstraint::Matches(System.String actual)
    bool Matches(::StringW actual);
  }; // NUnit.Framework.Constraints.SamePathConstraint
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: NUnit::Framework::Constraints::SamePathConstraint::get_Description
// Il2CppName: get_Description
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (NUnit::Framework::Constraints::SamePathConstraint::*)()>(&NUnit::Framework::Constraints::SamePathConstraint::get_Description)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Constraints::SamePathConstraint*), "get_Description", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Constraints::SamePathConstraint::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: NUnit::Framework::Constraints::SamePathConstraint::Matches
// Il2CppName: Matches
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (NUnit::Framework::Constraints::SamePathConstraint::*)(::StringW)>(&NUnit::Framework::Constraints::SamePathConstraint::Matches)> {
  static const MethodInfo* get() {
    static auto* actual = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Constraints::SamePathConstraint*), "Matches", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{actual});
  }
};
