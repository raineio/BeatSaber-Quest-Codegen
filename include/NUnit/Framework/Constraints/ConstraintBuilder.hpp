// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: NUnit::Framework::Constraints
namespace NUnit::Framework::Constraints {
  // Forward declaring type: IConstraint
  class IConstraint;
}
// Completed forward declares
// Type namespace: NUnit.Framework.Constraints
namespace NUnit::Framework::Constraints {
  // Forward declaring type: ConstraintBuilder
  class ConstraintBuilder;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(NUnit::Framework::Constraints::ConstraintBuilder);
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Constraints::ConstraintBuilder*, "NUnit.Framework.Constraints", "ConstraintBuilder");
// Type namespace: NUnit.Framework.Constraints
namespace NUnit::Framework::Constraints {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: NUnit.Framework.Constraints.ConstraintBuilder
  // [TokenAttribute] Offset: FFFFFFFF
  class ConstraintBuilder : public ::Il2CppObject {
    public:
    // Nested type: NUnit::Framework::Constraints::ConstraintBuilder::OperatorStack
    class OperatorStack;
    // Nested type: NUnit::Framework::Constraints::ConstraintBuilder::ConstraintStack
    class ConstraintStack;
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private readonly NUnit.Framework.Constraints.ConstraintBuilder/NUnit.Framework.Constraints.OperatorStack ops
    // Size: 0x8
    // Offset: 0x10
    NUnit::Framework::Constraints::ConstraintBuilder::OperatorStack* ops;
    // Field size check
    static_assert(sizeof(NUnit::Framework::Constraints::ConstraintBuilder::OperatorStack*) == 0x8);
    // private readonly NUnit.Framework.Constraints.ConstraintBuilder/NUnit.Framework.Constraints.ConstraintStack constraints
    // Size: 0x8
    // Offset: 0x18
    NUnit::Framework::Constraints::ConstraintBuilder::ConstraintStack* constraints;
    // Field size check
    static_assert(sizeof(NUnit::Framework::Constraints::ConstraintBuilder::ConstraintStack*) == 0x8);
    // private System.Object lastPushed
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppObject* lastPushed;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    public:
    // Get instance field reference: private readonly NUnit.Framework.Constraints.ConstraintBuilder/NUnit.Framework.Constraints.OperatorStack ops
    NUnit::Framework::Constraints::ConstraintBuilder::OperatorStack*& dyn_ops();
    // Get instance field reference: private readonly NUnit.Framework.Constraints.ConstraintBuilder/NUnit.Framework.Constraints.ConstraintStack constraints
    NUnit::Framework::Constraints::ConstraintBuilder::ConstraintStack*& dyn_constraints();
    // Get instance field reference: private System.Object lastPushed
    ::Il2CppObject*& dyn_lastPushed();
    // private System.Boolean get_IsResolvable()
    // Offset: 0x1936F68
    bool get_IsResolvable();
    // public NUnit.Framework.Constraints.IConstraint Resolve()
    // Offset: 0x1936DBC
    NUnit::Framework::Constraints::IConstraint* Resolve();
  }; // NUnit.Framework.Constraints.ConstraintBuilder
  #pragma pack(pop)
  static check_size<sizeof(ConstraintBuilder), 32 + sizeof(::Il2CppObject*)> __NUnit_Framework_Constraints_ConstraintBuilderSizeCheck;
  static_assert(sizeof(ConstraintBuilder) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: NUnit::Framework::Constraints::ConstraintBuilder::get_IsResolvable
// Il2CppName: get_IsResolvable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (NUnit::Framework::Constraints::ConstraintBuilder::*)()>(&NUnit::Framework::Constraints::ConstraintBuilder::get_IsResolvable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Constraints::ConstraintBuilder*), "get_IsResolvable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Constraints::ConstraintBuilder::Resolve
// Il2CppName: Resolve
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<NUnit::Framework::Constraints::IConstraint* (NUnit::Framework::Constraints::ConstraintBuilder::*)()>(&NUnit::Framework::Constraints::ConstraintBuilder::Resolve)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Constraints::ConstraintBuilder*), "Resolve", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
