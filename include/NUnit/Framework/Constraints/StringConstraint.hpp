// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: NUnit.Framework.Constraints.Constraint
#include "NUnit/Framework/Constraints/Constraint.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: NUnit::Framework::Constraints
namespace NUnit::Framework::Constraints {
  // Forward declaring type: ConstraintResult
  class ConstraintResult;
}
// Completed forward declares
// Type namespace: NUnit.Framework.Constraints
namespace NUnit::Framework::Constraints {
  // Forward declaring type: StringConstraint
  class StringConstraint;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::NUnit::Framework::Constraints::StringConstraint);
DEFINE_IL2CPP_ARG_TYPE(::NUnit::Framework::Constraints::StringConstraint*, "NUnit.Framework.Constraints", "StringConstraint");
// Type namespace: NUnit.Framework.Constraints
namespace NUnit::Framework::Constraints {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: NUnit.Framework.Constraints.StringConstraint
  // [TokenAttribute] Offset: FFFFFFFF
  class StringConstraint : public ::NUnit::Framework::Constraints::Constraint {
    public:
    public:
    // protected System.String expected
    // Size: 0x8
    // Offset: 0x30
    ::StringW expected;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // protected System.Boolean caseInsensitive
    // Size: 0x1
    // Offset: 0x38
    bool caseInsensitive;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: caseInsensitive and: descriptionText
    char __padding1[0x7] = {};
    // protected System.String descriptionText
    // Size: 0x8
    // Offset: 0x40
    ::StringW descriptionText;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Get instance field reference: protected System.String expected
    [[deprecated("Use field access instead!")]] ::StringW& dyn_expected();
    // Get instance field reference: protected System.Boolean caseInsensitive
    [[deprecated("Use field access instead!")]] bool& dyn_caseInsensitive();
    // Get instance field reference: protected System.String descriptionText
    [[deprecated("Use field access instead!")]] ::StringW& dyn_descriptionText();
    // protected System.Void .ctor(System.String expected)
    // Offset: 0x1D5B188
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StringConstraint* New_ctor(::StringW expected) {
      static auto ___internal__logger = ::Logger::get().WithContext("::NUnit::Framework::Constraints::StringConstraint::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StringConstraint*, creationType>(expected)));
    }
    // protected System.Boolean Matches(System.String actual)
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool Matches(::StringW actual);
    // public override System.String get_Description()
    // Offset: 0x1D5B754
    // Implemented from: NUnit.Framework.Constraints.Constraint
    // Base method: System.String Constraint::get_Description()
    ::StringW get_Description();
    // public override NUnit.Framework.Constraints.ConstraintResult ApplyTo(System.Object actual)
    // Offset: 0x1D5B814
    // Implemented from: NUnit.Framework.Constraints.Constraint
    // Base method: NUnit.Framework.Constraints.ConstraintResult Constraint::ApplyTo(System.Object actual)
    ::NUnit::Framework::Constraints::ConstraintResult* ApplyTo(::Il2CppObject* actual);
  }; // NUnit.Framework.Constraints.StringConstraint
  #pragma pack(pop)
  static check_size<sizeof(StringConstraint), 64 + sizeof(::StringW)> __NUnit_Framework_Constraints_StringConstraintSizeCheck;
  static_assert(sizeof(StringConstraint) == 0x48);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: NUnit::Framework::Constraints::StringConstraint::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: NUnit::Framework::Constraints::StringConstraint::Matches
// Il2CppName: Matches
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (NUnit::Framework::Constraints::StringConstraint::*)(::StringW)>(&NUnit::Framework::Constraints::StringConstraint::Matches)> {
  static const MethodInfo* get() {
    static auto* actual = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Constraints::StringConstraint*), "Matches", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{actual});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Constraints::StringConstraint::get_Description
// Il2CppName: get_Description
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (NUnit::Framework::Constraints::StringConstraint::*)()>(&NUnit::Framework::Constraints::StringConstraint::get_Description)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Constraints::StringConstraint*), "get_Description", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Constraints::StringConstraint::ApplyTo
// Il2CppName: ApplyTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::NUnit::Framework::Constraints::ConstraintResult* (NUnit::Framework::Constraints::StringConstraint::*)(::Il2CppObject*)>(&NUnit::Framework::Constraints::StringConstraint::ApplyTo)> {
  static const MethodInfo* get() {
    static auto* actual = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Constraints::StringConstraint*), "ApplyTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{actual});
  }
};
