// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.TestRunner.NUnitExtensions.Runner.UnityWorkItem
#include "UnityEngine/TestRunner/NUnitExtensions/Runner/UnityWorkItem.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::TestRunner::NUnitExtensions::Runner
namespace UnityEngine::TestRunner::NUnitExtensions::Runner {
}
// Forward declaring namespace: NUnit::Framework::Internal::Commands
namespace NUnit::Framework::Internal::Commands {
  // Forward declaring type: TestCommand
  class TestCommand;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: MonoBehaviour
  class MonoBehaviour;
}
// Forward declaring namespace: NUnit::Framework::Internal
namespace NUnit::Framework::Internal {
  // Forward declaring type: TestMethod
  class TestMethod;
}
// Forward declaring namespace: NUnit::Framework::Interfaces
namespace NUnit::Framework::Interfaces {
  // Forward declaring type: ITestFilter
  class ITestFilter;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerable
  class IEnumerable;
}
// Completed forward declares
// Type namespace: UnityEngine.TestRunner.NUnitExtensions.Runner
namespace UnityEngine::TestRunner::NUnitExtensions::Runner {
  // Autogenerated type: UnityEngine.TestRunner.NUnitExtensions.Runner.CoroutineTestWorkItem
  class CoroutineTestWorkItem : public UnityEngine::TestRunner::NUnitExtensions::Runner::UnityWorkItem {
    public:
    // Nested type: UnityEngine::TestRunner::NUnitExtensions::Runner::CoroutineTestWorkItem::$PerformWork$d__6
    class $PerformWork$d__6;
    // private NUnit.Framework.Internal.Commands.TestCommand m_Command
    // Offset: 0x58
    NUnit::Framework::Internal::Commands::TestCommand* m_Command;
    // Creating conversion operator: operator NUnit::Framework::Internal::Commands::TestCommand*
    constexpr operator NUnit::Framework::Internal::Commands::TestCommand*() const noexcept {
      return m_Command;
    }
    // Get static field: static private UnityEngine.MonoBehaviour m_MonoBehaviourCoroutineRunner
    static UnityEngine::MonoBehaviour* _get_m_MonoBehaviourCoroutineRunner();
    // Set static field: static private UnityEngine.MonoBehaviour m_MonoBehaviourCoroutineRunner
    static void _set_m_MonoBehaviourCoroutineRunner(UnityEngine::MonoBehaviour* value);
    // static public UnityEngine.MonoBehaviour get_monoBehaviourCoroutineRunner()
    // Offset: 0x10ACCB0
    static UnityEngine::MonoBehaviour* get_monoBehaviourCoroutineRunner();
    // static public System.Void set_monoBehaviourCoroutineRunner(UnityEngine.MonoBehaviour value)
    // Offset: 0x10ACD7C
    static void set_monoBehaviourCoroutineRunner(UnityEngine::MonoBehaviour* value);
    // public System.Void .ctor(NUnit.Framework.Internal.TestMethod test, NUnit.Framework.Interfaces.ITestFilter filter)
    // Offset: 0x10ACDD4
    static CoroutineTestWorkItem* New_ctor(NUnit::Framework::Internal::TestMethod* test, NUnit::Framework::Interfaces::ITestFilter* filter);
    // protected override System.Collections.IEnumerable PerformWork()
    // Offset: 0x10AD690
    // Implemented from: UnityEngine.TestRunner.NUnitExtensions.Runner.UnityWorkItem
    // Base method: System.Collections.IEnumerable UnityWorkItem::PerformWork()
    System::Collections::IEnumerable* PerformWork();
  }; // UnityEngine.TestRunner.NUnitExtensions.Runner.CoroutineTestWorkItem
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TestRunner::NUnitExtensions::Runner::CoroutineTestWorkItem*, "UnityEngine.TestRunner.NUnitExtensions.Runner", "CoroutineTestWorkItem");
#pragma pack(pop)
