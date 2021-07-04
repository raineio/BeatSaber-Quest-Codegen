// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: NUnit.Framework.Constraints.Constraint
#include "NUnit/Framework/Constraints/Constraint.hpp"
// Including type: NUnit.Framework.Constraints.NUnitEqualityComparer
#include "NUnit/Framework/Constraints/NUnitEqualityComparer.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: NUnit::Framework::Constraints
namespace NUnit::Framework::Constraints {
  // Forward declaring type: Tolerance
  class Tolerance;
  // Forward declaring type: ConstraintResult
  class ConstraintResult;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IList`1<T>
  template<typename T>
  class IList_1;
}
// Completed forward declares
// Type namespace: NUnit.Framework.Constraints
namespace NUnit::Framework::Constraints {
  // Size: 0x49
  #pragma pack(push, 1)
  // Autogenerated type: NUnit.Framework.Constraints.EqualConstraint
  class EqualConstraint : public NUnit::Framework::Constraints::Constraint {
    public:
    // private readonly System.Object _expected
    // Size: 0x8
    // Offset: 0x30
    ::Il2CppObject* expected;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private NUnit.Framework.Constraints.Tolerance _tolerance
    // Size: 0x8
    // Offset: 0x38
    NUnit::Framework::Constraints::Tolerance* tolerance;
    // Field size check
    static_assert(sizeof(NUnit::Framework::Constraints::Tolerance*) == 0x8);
    // private NUnit.Framework.Constraints.NUnitEqualityComparer _comparer
    // Size: 0x8
    // Offset: 0x40
    NUnit::Framework::Constraints::NUnitEqualityComparer* comparer;
    // Field size check
    static_assert(sizeof(NUnit::Framework::Constraints::NUnitEqualityComparer*) == 0x8);
    // [DebuggerBrowsableAttribute] Offset: 0xE05F10
    // [CompilerGeneratedAttribute] Offset: 0xE05F10
    // private System.Boolean <ClipStrings>k__BackingField
    // Size: 0x1
    // Offset: 0x48
    bool ClipStrings;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: EqualConstraint
    EqualConstraint(::Il2CppObject* expected_ = {}, NUnit::Framework::Constraints::Tolerance* tolerance_ = {}, NUnit::Framework::Constraints::NUnitEqualityComparer* comparer_ = {}, bool ClipStrings_ = {}) noexcept : expected{expected_}, tolerance{tolerance_}, comparer{comparer_}, ClipStrings{ClipStrings_} {}
    // public System.Void .ctor(System.Object expected)
    // Offset: 0x17248BC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EqualConstraint* New_ctor(::Il2CppObject* expected) {
      static auto ___internal__logger = ::Logger::get().WithContext("NUnit::Framework::Constraints::EqualConstraint::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EqualConstraint*, creationType>(expected)));
    }
    // public NUnit.Framework.Constraints.Tolerance get_Tolerance()
    // Offset: 0x1724A30
    NUnit::Framework::Constraints::Tolerance* get_Tolerance();
    // public System.Boolean get_CaseInsensitive()
    // Offset: 0x1724A38
    bool get_CaseInsensitive();
    // public System.Boolean get_ClipStrings()
    // Offset: 0x1724A5C
    bool get_ClipStrings();
    // private System.Void set_ClipStrings(System.Boolean value)
    // Offset: 0x1724A64
    void set_ClipStrings(bool value);
    // public System.Collections.Generic.IList`1<NUnit.Framework.Constraints.NUnitEqualityComparer/FailurePoint> get_FailurePoints()
    // Offset: 0x1724A70
    System::Collections::Generic::IList_1<NUnit::Framework::Constraints::NUnitEqualityComparer::FailurePoint*>* get_FailurePoints();
    // private System.Void AdjustArgumentIfNeeded(ref T arg)
    // Offset: 0xFFFFFFFF
    template<class T>
    void AdjustArgumentIfNeeded(T& arg) {
      static auto ___internal__logger = ::Logger::get().WithContext("NUnit::Framework::Constraints::EqualConstraint::AdjustArgumentIfNeeded");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "AdjustArgumentIfNeeded", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(arg)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___generic__method, arg);
    }
    // public override NUnit.Framework.Constraints.ConstraintResult ApplyTo(System.Object actual)
    // Offset: 0x1724A94
    // Implemented from: NUnit.Framework.Constraints.Constraint
    // Base method: NUnit.Framework.Constraints.ConstraintResult Constraint::ApplyTo(System.Object actual)
    NUnit::Framework::Constraints::ConstraintResult* ApplyTo(::Il2CppObject* actual);
    // public override System.String get_Description()
    // Offset: 0x1724BFC
    // Implemented from: NUnit.Framework.Constraints.Constraint
    // Base method: System.String Constraint::get_Description()
    ::Il2CppString* get_Description();
  }; // NUnit.Framework.Constraints.EqualConstraint
  #pragma pack(pop)
  static check_size<sizeof(EqualConstraint), 72 + sizeof(bool)> __NUnit_Framework_Constraints_EqualConstraintSizeCheck;
  static_assert(sizeof(EqualConstraint) == 0x49);
}
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Constraints::EqualConstraint*, "NUnit.Framework.Constraints", "EqualConstraint");
// Writing MetadataGetter for method: NUnit::Framework::Constraints::EqualConstraint::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: NUnit::Framework::Constraints::EqualConstraint::get_Tolerance
// Il2CppName: get_Tolerance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<NUnit::Framework::Constraints::Tolerance* (NUnit::Framework::Constraints::EqualConstraint::*)()>(&NUnit::Framework::Constraints::EqualConstraint::get_Tolerance)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Constraints::EqualConstraint*), "get_Tolerance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Constraints::EqualConstraint::get_CaseInsensitive
// Il2CppName: get_CaseInsensitive
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (NUnit::Framework::Constraints::EqualConstraint::*)()>(&NUnit::Framework::Constraints::EqualConstraint::get_CaseInsensitive)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Constraints::EqualConstraint*), "get_CaseInsensitive", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Constraints::EqualConstraint::get_ClipStrings
// Il2CppName: get_ClipStrings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (NUnit::Framework::Constraints::EqualConstraint::*)()>(&NUnit::Framework::Constraints::EqualConstraint::get_ClipStrings)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Constraints::EqualConstraint*), "get_ClipStrings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Constraints::EqualConstraint::set_ClipStrings
// Il2CppName: set_ClipStrings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (NUnit::Framework::Constraints::EqualConstraint::*)(bool)>(&NUnit::Framework::Constraints::EqualConstraint::set_ClipStrings)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Constraints::EqualConstraint*), "set_ClipStrings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<bool>()});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Constraints::EqualConstraint::get_FailurePoints
// Il2CppName: get_FailurePoints
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IList_1<NUnit::Framework::Constraints::NUnitEqualityComparer::FailurePoint*>* (NUnit::Framework::Constraints::EqualConstraint::*)()>(&NUnit::Framework::Constraints::EqualConstraint::get_FailurePoints)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Constraints::EqualConstraint*), "get_FailurePoints", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Constraints::EqualConstraint::AdjustArgumentIfNeeded
// Il2CppName: AdjustArgumentIfNeeded
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: NUnit::Framework::Constraints::EqualConstraint::ApplyTo
// Il2CppName: ApplyTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<NUnit::Framework::Constraints::ConstraintResult* (NUnit::Framework::Constraints::EqualConstraint::*)(::Il2CppObject*)>(&NUnit::Framework::Constraints::EqualConstraint::ApplyTo)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Constraints::EqualConstraint*), "ApplyTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>()});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Constraints::EqualConstraint::get_Description
// Il2CppName: get_Description
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (NUnit::Framework::Constraints::EqualConstraint::*)()>(&NUnit::Framework::Constraints::EqualConstraint::get_Description)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Constraints::EqualConstraint*), "get_Description", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
