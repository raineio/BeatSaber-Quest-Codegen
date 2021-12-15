// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.TestTools.SetUpTearDownCommand
#include "UnityEngine/TestTools/SetUpTearDownCommand.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: NUnit::Framework::Internal
namespace NUnit::Framework::Internal {
  // Forward declaring type: Test
  class Test;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: MethodInfo
  class MethodInfo;
}
// Forward declaring namespace: UnityEngine::TestRunner::NUnitExtensions::Runner
namespace UnityEngine::TestRunner::NUnitExtensions::Runner {
  // Forward declaring type: UnityTestExecutionContext
  class UnityTestExecutionContext;
}
// Completed forward declares
// Type namespace: UnityEngine.TestTools
namespace UnityEngine::TestTools {
  // Forward declaring type: <InvokeBefore>d__2
  class $InvokeBefore$d__2;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(UnityEngine::TestTools::SetUpTearDownCommand::$InvokeBefore$d__2);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TestTools::SetUpTearDownCommand::$InvokeBefore$d__2*, "UnityEngine.TestTools", "SetUpTearDownCommand/<InvokeBefore>d__2");
// Type namespace: UnityEngine.TestTools
namespace UnityEngine::TestTools {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.TestTools.SetUpTearDownCommand/UnityEngine.TestTools.<InvokeBefore>d__2
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class SetUpTearDownCommand::$InvokeBefore$d__2 : public ::Il2CppObject/*, public System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*/ {
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
    // private System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x10
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: $$1__state and: $$2__current
    char __padding0[0x4] = {};
    // private System.Object <>2__current
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppObject* $$2__current;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // public NUnit.Framework.Internal.Test test
    // Size: 0x8
    // Offset: 0x20
    NUnit::Framework::Internal::Test* test;
    // Field size check
    static_assert(sizeof(NUnit::Framework::Internal::Test*) == 0x8);
    // public System.Reflection.MethodInfo action
    // Size: 0x8
    // Offset: 0x28
    System::Reflection::MethodInfo* action;
    // Field size check
    static_assert(sizeof(System::Reflection::MethodInfo*) == 0x8);
    // public UnityEngine.TestRunner.NUnitExtensions.Runner.UnityTestExecutionContext context
    // Size: 0x8
    // Offset: 0x30
    UnityEngine::TestRunner::NUnitExtensions::Runner::UnityTestExecutionContext* context;
    // Field size check
    static_assert(sizeof(UnityEngine::TestRunner::NUnitExtensions::Runner::UnityTestExecutionContext*) == 0x8);
    public:
    // Creating interface conversion operator: operator System::Collections::Generic::IEnumerator_1<::Il2CppObject*>
    operator System::Collections::Generic::IEnumerator_1<::Il2CppObject*>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*>(this);
    }
    // Get instance field reference: private System.Int32 <>1__state
    int& dyn_$$1__state();
    // Get instance field reference: private System.Object <>2__current
    ::Il2CppObject*& dyn_$$2__current();
    // Get instance field reference: public NUnit.Framework.Internal.Test test
    NUnit::Framework::Internal::Test*& dyn_test();
    // Get instance field reference: public System.Reflection.MethodInfo action
    System::Reflection::MethodInfo*& dyn_action();
    // Get instance field reference: public UnityEngine.TestRunner.NUnitExtensions.Runner.UnityTestExecutionContext context
    UnityEngine::TestRunner::NUnitExtensions::Runner::UnityTestExecutionContext*& dyn_context();
    // private System.Object System.Collections.Generic.IEnumerator<System.Object>.get_Current()
    // Offset: 0x16D1E44
    ::Il2CppObject* System_Collections_Generic_IEnumerator$System_Object$_get_Current();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x16D1EAC
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x16D1954
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SetUpTearDownCommand::$InvokeBefore$d__2* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::TestTools::SetUpTearDownCommand::$InvokeBefore$d__2::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SetUpTearDownCommand::$InvokeBefore$d__2*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x16D1D00
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x16D1D04
    bool MoveNext();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x16D1E4C
    void System_Collections_IEnumerator_Reset();
  }; // UnityEngine.TestTools.SetUpTearDownCommand/UnityEngine.TestTools.<InvokeBefore>d__2
  #pragma pack(pop)
  static check_size<sizeof(SetUpTearDownCommand::$InvokeBefore$d__2), 48 + sizeof(UnityEngine::TestRunner::NUnitExtensions::Runner::UnityTestExecutionContext*)> __UnityEngine_TestTools_SetUpTearDownCommand_$InvokeBefore$d__2SizeCheck;
  static_assert(sizeof(SetUpTearDownCommand::$InvokeBefore$d__2) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::TestTools::SetUpTearDownCommand::$InvokeBefore$d__2::System_Collections_Generic_IEnumerator$System_Object$_get_Current
// Il2CppName: System.Collections.Generic.IEnumerator<System.Object>.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (UnityEngine::TestTools::SetUpTearDownCommand::$InvokeBefore$d__2::*)()>(&UnityEngine::TestTools::SetUpTearDownCommand::$InvokeBefore$d__2::System_Collections_Generic_IEnumerator$System_Object$_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::SetUpTearDownCommand::$InvokeBefore$d__2*), "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestTools::SetUpTearDownCommand::$InvokeBefore$d__2::System_Collections_IEnumerator_get_Current
// Il2CppName: System.Collections.IEnumerator.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (UnityEngine::TestTools::SetUpTearDownCommand::$InvokeBefore$d__2::*)()>(&UnityEngine::TestTools::SetUpTearDownCommand::$InvokeBefore$d__2::System_Collections_IEnumerator_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::SetUpTearDownCommand::$InvokeBefore$d__2*), "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestTools::SetUpTearDownCommand::$InvokeBefore$d__2::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::TestTools::SetUpTearDownCommand::$InvokeBefore$d__2::System_IDisposable_Dispose
// Il2CppName: System.IDisposable.Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TestTools::SetUpTearDownCommand::$InvokeBefore$d__2::*)()>(&UnityEngine::TestTools::SetUpTearDownCommand::$InvokeBefore$d__2::System_IDisposable_Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::SetUpTearDownCommand::$InvokeBefore$d__2*), "System.IDisposable.Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestTools::SetUpTearDownCommand::$InvokeBefore$d__2::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::TestTools::SetUpTearDownCommand::$InvokeBefore$d__2::*)()>(&UnityEngine::TestTools::SetUpTearDownCommand::$InvokeBefore$d__2::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::SetUpTearDownCommand::$InvokeBefore$d__2*), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestTools::SetUpTearDownCommand::$InvokeBefore$d__2::System_Collections_IEnumerator_Reset
// Il2CppName: System.Collections.IEnumerator.Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TestTools::SetUpTearDownCommand::$InvokeBefore$d__2::*)()>(&UnityEngine::TestTools::SetUpTearDownCommand::$InvokeBefore$d__2::System_Collections_IEnumerator_Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::SetUpTearDownCommand::$InvokeBefore$d__2*), "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
