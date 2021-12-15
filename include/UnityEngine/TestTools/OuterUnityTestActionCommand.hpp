// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.TestTools.BeforeAfterTestCommandBase`1
#include "UnityEngine/TestTools/BeforeAfterTestCommandBase_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::TestTools
namespace UnityEngine::TestTools {
  // Forward declaring type: IOuterUnityTestAction
  class IOuterUnityTestAction;
  // Forward declaring type: BeforeAfterTestCommandState
  class BeforeAfterTestCommandState;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: MethodInfo
  class MethodInfo;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Skipping declaration: IEnumerator because it is already included!
}
// Forward declaring namespace: NUnit::Framework::Internal
namespace NUnit::Framework::Internal {
  // Forward declaring type: Test
  class Test;
}
// Forward declaring namespace: UnityEngine::TestRunner::NUnitExtensions::Runner
namespace UnityEngine::TestRunner::NUnitExtensions::Runner {
  // Forward declaring type: UnityTestExecutionContext
  class UnityTestExecutionContext;
}
// Forward declaring namespace: NUnit::Framework::Internal::Commands
namespace NUnit::Framework::Internal::Commands {
  // Skipping declaration: TestCommand because it is already included!
}
// Completed forward declares
// Type namespace: UnityEngine.TestTools
namespace UnityEngine::TestTools {
  // Forward declaring type: OuterUnityTestActionCommand
  class OuterUnityTestActionCommand;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(UnityEngine::TestTools::OuterUnityTestActionCommand);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TestTools::OuterUnityTestActionCommand*, "UnityEngine.TestTools", "OuterUnityTestActionCommand");
// Type namespace: UnityEngine.TestTools
namespace UnityEngine::TestTools {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.TestTools.OuterUnityTestActionCommand
  // [TokenAttribute] Offset: FFFFFFFF
  class OuterUnityTestActionCommand : public UnityEngine::TestTools::BeforeAfterTestCommandBase_1<UnityEngine::TestTools::IOuterUnityTestAction*> {
    public:
    // static private UnityEngine.TestTools.IOuterUnityTestAction[] GetUnityTestActionsFromMethod(System.Reflection.MethodInfo method)
    // Offset: 0x16D14C4
    static ::ArrayW<UnityEngine::TestTools::IOuterUnityTestAction*> GetUnityTestActionsFromMethod(System::Reflection::MethodInfo* method);
    // protected System.Collections.IEnumerator InvokeBefore(UnityEngine.TestTools.IOuterUnityTestAction action, NUnit.Framework.Internal.Test test, UnityEngine.TestRunner.NUnitExtensions.Runner.UnityTestExecutionContext context)
    // Offset: 0x16D15FC
    System::Collections::IEnumerator* InvokeBefore(UnityEngine::TestTools::IOuterUnityTestAction* action, NUnit::Framework::Internal::Test* test, UnityEngine::TestRunner::NUnitExtensions::Runner::UnityTestExecutionContext* context);
    // protected System.Collections.IEnumerator InvokeAfter(UnityEngine.TestTools.IOuterUnityTestAction action, NUnit.Framework.Internal.Test test, UnityEngine.TestRunner.NUnitExtensions.Runner.UnityTestExecutionContext context)
    // Offset: 0x16D16B8
    System::Collections::IEnumerator* InvokeAfter(UnityEngine::TestTools::IOuterUnityTestAction* action, NUnit::Framework::Internal::Test* test, UnityEngine::TestRunner::NUnitExtensions::Runner::UnityTestExecutionContext* context);
    // public System.Void .ctor(NUnit.Framework.Internal.Commands.TestCommand innerCommand)
    // Offset: 0x16C51A4
    // Implemented from: NUnit.Framework.Internal.Commands.DelegatingTestCommand
    // Base method: System.Void DelegatingTestCommand::.ctor(NUnit.Framework.Internal.Commands.TestCommand innerCommand)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OuterUnityTestActionCommand* New_ctor(NUnit::Framework::Internal::Commands::TestCommand* innerCommand) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::TestTools::OuterUnityTestActionCommand::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OuterUnityTestActionCommand*, creationType>(innerCommand)));
    }
    // protected override UnityEngine.TestTools.BeforeAfterTestCommandState GetState(UnityEngine.TestRunner.NUnitExtensions.Runner.UnityTestExecutionContext context)
    // Offset: 0x16D1778
    // Implemented from: UnityEngine.TestTools.BeforeAfterTestCommandBase`1
    // Base method: UnityEngine.TestTools.BeforeAfterTestCommandState BeforeAfterTestCommandBase_1::GetState(UnityEngine.TestRunner.NUnitExtensions.Runner.UnityTestExecutionContext context)
    UnityEngine::TestTools::BeforeAfterTestCommandState* GetState(UnityEngine::TestRunner::NUnitExtensions::Runner::UnityTestExecutionContext* context);
  }; // UnityEngine.TestTools.OuterUnityTestActionCommand
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::TestTools::OuterUnityTestActionCommand::GetUnityTestActionsFromMethod
// Il2CppName: GetUnityTestActionsFromMethod
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<UnityEngine::TestTools::IOuterUnityTestAction*> (*)(System::Reflection::MethodInfo*)>(&UnityEngine::TestTools::OuterUnityTestActionCommand::GetUnityTestActionsFromMethod)> {
  static const MethodInfo* get() {
    static auto* method = &::il2cpp_utils::GetClassFromName("System.Reflection", "MethodInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::OuterUnityTestActionCommand*), "GetUnityTestActionsFromMethod", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{method});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestTools::OuterUnityTestActionCommand::InvokeBefore
// Il2CppName: InvokeBefore
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerator* (UnityEngine::TestTools::OuterUnityTestActionCommand::*)(UnityEngine::TestTools::IOuterUnityTestAction*, NUnit::Framework::Internal::Test*, UnityEngine::TestRunner::NUnitExtensions::Runner::UnityTestExecutionContext*)>(&UnityEngine::TestTools::OuterUnityTestActionCommand::InvokeBefore)> {
  static const MethodInfo* get() {
    static auto* action = &::il2cpp_utils::GetClassFromName("UnityEngine.TestTools", "IOuterUnityTestAction")->byval_arg;
    static auto* test = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Internal", "Test")->byval_arg;
    static auto* context = &::il2cpp_utils::GetClassFromName("UnityEngine.TestRunner.NUnitExtensions.Runner", "UnityTestExecutionContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::OuterUnityTestActionCommand*), "InvokeBefore", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{action, test, context});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestTools::OuterUnityTestActionCommand::InvokeAfter
// Il2CppName: InvokeAfter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerator* (UnityEngine::TestTools::OuterUnityTestActionCommand::*)(UnityEngine::TestTools::IOuterUnityTestAction*, NUnit::Framework::Internal::Test*, UnityEngine::TestRunner::NUnitExtensions::Runner::UnityTestExecutionContext*)>(&UnityEngine::TestTools::OuterUnityTestActionCommand::InvokeAfter)> {
  static const MethodInfo* get() {
    static auto* action = &::il2cpp_utils::GetClassFromName("UnityEngine.TestTools", "IOuterUnityTestAction")->byval_arg;
    static auto* test = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Internal", "Test")->byval_arg;
    static auto* context = &::il2cpp_utils::GetClassFromName("UnityEngine.TestRunner.NUnitExtensions.Runner", "UnityTestExecutionContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::OuterUnityTestActionCommand*), "InvokeAfter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{action, test, context});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestTools::OuterUnityTestActionCommand::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::TestTools::OuterUnityTestActionCommand::GetState
// Il2CppName: GetState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::TestTools::BeforeAfterTestCommandState* (UnityEngine::TestTools::OuterUnityTestActionCommand::*)(UnityEngine::TestRunner::NUnitExtensions::Runner::UnityTestExecutionContext*)>(&UnityEngine::TestTools::OuterUnityTestActionCommand::GetState)> {
  static const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("UnityEngine.TestRunner.NUnitExtensions.Runner", "UnityTestExecutionContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::OuterUnityTestActionCommand*), "GetState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context});
  }
};
