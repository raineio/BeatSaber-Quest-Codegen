// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: NUnit.Framework.Internal.TestResult
#include "NUnit/Framework/Internal/TestResult.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Forward declaring namespace: NUnit::Framework::Interfaces
namespace NUnit::Framework::Interfaces {
  // Skipping declaration: ITestResult because it is already included!
}
// Forward declaring namespace: NUnit::Framework::Internal
namespace NUnit::Framework::Internal {
  // Forward declaring type: TestSuite
  class TestSuite;
}
// Completed forward declares
// Type namespace: NUnit.Framework.Internal
namespace NUnit::Framework::Internal {
  // Autogenerated type: NUnit.Framework.Internal.TestSuiteResult
  class TestSuiteResult : public NUnit::Framework::Internal::TestResult {
    public:
    // private System.Int32 _passCount
    // Offset: 0x60
    int passCount;
    // private System.Int32 _failCount
    // Offset: 0x64
    int failCount;
    // private System.Int32 _skipCount
    // Offset: 0x68
    int skipCount;
    // private System.Int32 _inconclusiveCount
    // Offset: 0x6C
    int inconclusiveCount;
    // private System.Collections.Generic.List`1<NUnit.Framework.Interfaces.ITestResult> _children
    // Offset: 0x70
    System::Collections::Generic::List_1<NUnit::Framework::Interfaces::ITestResult*>* children;
    // public System.Void .ctor(NUnit.Framework.Internal.TestSuite suite)
    // Offset: 0x1ED2488
    static TestSuiteResult* New_ctor(NUnit::Framework::Internal::TestSuite* suite);
    // public System.Void AddResult(NUnit.Framework.Interfaces.ITestResult result)
    // Offset: 0x1ED29E0
    void AddResult(NUnit::Framework::Interfaces::ITestResult* result);
    // public override System.Int32 get_FailCount()
    // Offset: 0x1ED2960
    // Implemented from: NUnit.Framework.Internal.TestResult
    // Base method: System.Int32 TestResult::get_FailCount()
    int get_FailCount();
    // public override System.Int32 get_PassCount()
    // Offset: 0x1ED2968
    // Implemented from: NUnit.Framework.Internal.TestResult
    // Base method: System.Int32 TestResult::get_PassCount()
    int get_PassCount();
    // public override System.Int32 get_SkipCount()
    // Offset: 0x1ED2970
    // Implemented from: NUnit.Framework.Internal.TestResult
    // Base method: System.Int32 TestResult::get_SkipCount()
    int get_SkipCount();
    // public override System.Int32 get_InconclusiveCount()
    // Offset: 0x1ED2978
    // Implemented from: NUnit.Framework.Internal.TestResult
    // Base method: System.Int32 TestResult::get_InconclusiveCount()
    int get_InconclusiveCount();
    // public override System.Boolean get_HasChildren()
    // Offset: 0x1ED2980
    // Implemented from: NUnit.Framework.Internal.TestResult
    // Base method: System.Boolean TestResult::get_HasChildren()
    bool get_HasChildren();
    // public override System.Collections.Generic.IEnumerable`1<NUnit.Framework.Interfaces.ITestResult> get_Children()
    // Offset: 0x1ED29D8
    // Implemented from: NUnit.Framework.Internal.TestResult
    // Base method: System.Collections.Generic.IEnumerable`1<NUnit.Framework.Interfaces.ITestResult> TestResult::get_Children()
    System::Collections::Generic::IEnumerable_1<NUnit::Framework::Interfaces::ITestResult*>* get_Children();
  }; // NUnit.Framework.Internal.TestSuiteResult
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Internal::TestSuiteResult*, "NUnit.Framework.Internal", "TestSuiteResult");
#pragma pack(pop)
