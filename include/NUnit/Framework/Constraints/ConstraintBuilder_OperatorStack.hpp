// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: NUnit.Framework.Constraints.ConstraintBuilder
#include "NUnit/Framework/Constraints/ConstraintBuilder.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Stack`1<T>
  template<typename T>
  class Stack_1;
}
// Forward declaring namespace: NUnit::Framework::Constraints
namespace NUnit::Framework::Constraints {
  // Forward declaring type: ConstraintOperator
  class ConstraintOperator;
}
// Completed forward declares
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(NUnit::Framework::Constraints::ConstraintBuilder::OperatorStack);
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Constraints::ConstraintBuilder::OperatorStack*, "NUnit.Framework.Constraints", "ConstraintBuilder/OperatorStack");
// Type namespace: NUnit.Framework.Constraints
namespace NUnit::Framework::Constraints {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: NUnit.Framework.Constraints.ConstraintBuilder/NUnit.Framework.Constraints.OperatorStack
  // [TokenAttribute] Offset: FFFFFFFF
  class ConstraintBuilder::OperatorStack : public ::Il2CppObject {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private readonly System.Collections.Generic.Stack`1<NUnit.Framework.Constraints.ConstraintOperator> stack
    // Size: 0x8
    // Offset: 0x10
    System::Collections::Generic::Stack_1<NUnit::Framework::Constraints::ConstraintOperator*>* stack;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::Stack_1<NUnit::Framework::Constraints::ConstraintOperator*>*) == 0x8);
    public:
    // Creating conversion operator: operator System::Collections::Generic::Stack_1<NUnit::Framework::Constraints::ConstraintOperator*>*
    constexpr operator System::Collections::Generic::Stack_1<NUnit::Framework::Constraints::ConstraintOperator*>*() const noexcept {
      return stack;
    }
    // Get instance field reference: private readonly System.Collections.Generic.Stack`1<NUnit.Framework.Constraints.ConstraintOperator> stack
    System::Collections::Generic::Stack_1<NUnit::Framework::Constraints::ConstraintOperator*>*& dyn_stack();
    // public System.Boolean get_Empty()
    // Offset: 0x1937078
    bool get_Empty();
    // public NUnit.Framework.Constraints.ConstraintOperator Pop()
    // Offset: 0x1937020
    NUnit::Framework::Constraints::ConstraintOperator* Pop();
  }; // NUnit.Framework.Constraints.ConstraintBuilder/NUnit.Framework.Constraints.OperatorStack
  #pragma pack(pop)
  static check_size<sizeof(ConstraintBuilder::OperatorStack), 16 + sizeof(System::Collections::Generic::Stack_1<NUnit::Framework::Constraints::ConstraintOperator*>*)> __NUnit_Framework_Constraints_ConstraintBuilder_OperatorStackSizeCheck;
  static_assert(sizeof(ConstraintBuilder::OperatorStack) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: NUnit::Framework::Constraints::ConstraintBuilder::OperatorStack::get_Empty
// Il2CppName: get_Empty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (NUnit::Framework::Constraints::ConstraintBuilder::OperatorStack::*)()>(&NUnit::Framework::Constraints::ConstraintBuilder::OperatorStack::get_Empty)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Constraints::ConstraintBuilder::OperatorStack*), "get_Empty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Constraints::ConstraintBuilder::OperatorStack::Pop
// Il2CppName: Pop
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<NUnit::Framework::Constraints::ConstraintOperator* (NUnit::Framework::Constraints::ConstraintBuilder::OperatorStack::*)()>(&NUnit::Framework::Constraints::ConstraintBuilder::OperatorStack::Pop)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Constraints::ConstraintBuilder::OperatorStack*), "Pop", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
