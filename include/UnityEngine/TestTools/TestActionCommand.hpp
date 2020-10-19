// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.TestTools.BeforeAfterTestCommandBase`1
#include "UnityEngine/TestTools/BeforeAfterTestCommandBase_1.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::TestTools
namespace UnityEngine::TestTools {
  // Forward declaring type: BeforeAfterTestCommandState
  class BeforeAfterTestCommandState;
}
// Forward declaring namespace: NUnit::Framework
namespace NUnit::Framework {
  // Forward declaring type: ITestAction
  class ITestAction;
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
  // Autogenerated type: UnityEngine.TestTools.TestActionCommand
  class TestActionCommand : public UnityEngine::TestTools::BeforeAfterTestCommandBase_1<NUnit::Framework::ITestAction*> {
    public:
    // Nested type: UnityEngine::TestTools::TestActionCommand::$InvokeBefore$d__2
    class $InvokeBefore$d__2;
    // Nested type: UnityEngine::TestTools::TestActionCommand::$InvokeAfter$d__3
    class $InvokeAfter$d__3;
    // static private NUnit.Framework.ITestAction[] GetTestActionsFromMethod(System.Reflection.MethodInfo method)
    // Offset: 0x10BCF28
    static ::Array<NUnit::Framework::ITestAction*>* GetTestActionsFromMethod(System::Reflection::MethodInfo* method);
    // protected System.Collections.IEnumerator InvokeBefore(NUnit.Framework.ITestAction action, NUnit.Framework.Internal.Test test, UnityEngine.TestRunner.NUnitExtensions.Runner.UnityTestExecutionContext context)
    // Offset: 0x10BD060
    System::Collections::IEnumerator* InvokeBefore(NUnit::Framework::ITestAction* action, NUnit::Framework::Internal::Test* test, UnityEngine::TestRunner::NUnitExtensions::Runner::UnityTestExecutionContext* context);
    // protected System.Collections.IEnumerator InvokeAfter(NUnit.Framework.ITestAction action, NUnit.Framework.Internal.Test test, UnityEngine.TestRunner.NUnitExtensions.Runner.UnityTestExecutionContext context)
    // Offset: 0x10BD124
    System::Collections::IEnumerator* InvokeAfter(NUnit::Framework::ITestAction* action, NUnit::Framework::Internal::Test* test, UnityEngine::TestRunner::NUnitExtensions::Runner::UnityTestExecutionContext* context);
    // public System.Void .ctor(NUnit.Framework.Internal.Commands.TestCommand innerCommand)
    // Offset: 0x10AF5A0
    // Implemented from: NUnit.Framework.Internal.Commands.DelegatingTestCommand
    // Base method: System.Void DelegatingTestCommand::.ctor(NUnit.Framework.Internal.Commands.TestCommand innerCommand)
    static TestActionCommand* New_ctor(NUnit::Framework::Internal::Commands::TestCommand* innerCommand);
    // protected override UnityEngine.TestTools.BeforeAfterTestCommandState GetState(UnityEngine.TestRunner.NUnitExtensions.Runner.UnityTestExecutionContext context)
    // Offset: 0x10BD1E8
    // Implemented from: UnityEngine.TestTools.BeforeAfterTestCommandBase`1
    // Base method: UnityEngine.TestTools.BeforeAfterTestCommandState BeforeAfterTestCommandBase_1::GetState(UnityEngine.TestRunner.NUnitExtensions.Runner.UnityTestExecutionContext context)
    UnityEngine::TestTools::BeforeAfterTestCommandState* GetState(UnityEngine::TestRunner::NUnitExtensions::Runner::UnityTestExecutionContext* context);
  }; // UnityEngine.TestTools.TestActionCommand
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TestTools::TestActionCommand*, "UnityEngine.TestTools", "TestActionCommand");
#pragma pack(pop)
