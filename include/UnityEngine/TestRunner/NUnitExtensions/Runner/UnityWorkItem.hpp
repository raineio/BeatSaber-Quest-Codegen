// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: NUnit.Framework.Internal.Execution.WorkItemState
#include "NUnit/Framework/Internal/Execution/WorkItemState.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::TestRunner::NUnitExtensions::Runner
namespace UnityEngine::TestRunner::NUnitExtensions::Runner {
  // Forward declaring type: WorkItemFactory
  class WorkItemFactory;
  // Forward declaring type: UnityTestExecutionContext
  class UnityTestExecutionContext;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: EventHandler
  class EventHandler;
}
// Forward declaring namespace: NUnit::Framework::Internal
namespace NUnit::Framework::Internal {
  // Forward declaring type: Test
  class Test;
  // Forward declaring type: TestResult
  class TestResult;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: NUnit::Framework
namespace NUnit::Framework {
  // Forward declaring type: ITestAction
  class ITestAction;
}
// Forward declaring namespace: NUnit::Framework::Interfaces
namespace NUnit::Framework::Interfaces {
  // Forward declaring type: ITest
  class ITest;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerable
  class IEnumerable;
}
// Completed forward declares
// Type namespace: UnityEngine.TestRunner.NUnitExtensions.Runner
namespace UnityEngine::TestRunner::NUnitExtensions::Runner {
  // Forward declaring type: UnityWorkItem
  class UnityWorkItem;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::TestRunner::NUnitExtensions::Runner::UnityWorkItem);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TestRunner::NUnitExtensions::Runner::UnityWorkItem*, "UnityEngine.TestRunner.NUnitExtensions.Runner", "UnityWorkItem");
// Type namespace: UnityEngine.TestRunner.NUnitExtensions.Runner
namespace UnityEngine::TestRunner::NUnitExtensions::Runner {
  // Size: 0x58
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.TestRunner.NUnitExtensions.Runner.UnityWorkItem
  // [TokenAttribute] Offset: FFFFFFFF
  class UnityWorkItem : public ::Il2CppObject {
    public:
    public:
    // protected readonly UnityEngine.TestRunner.NUnitExtensions.Runner.WorkItemFactory m_Factory
    // Size: 0x8
    // Offset: 0x10
    ::UnityEngine::TestRunner::NUnitExtensions::Runner::WorkItemFactory* m_Factory;
    // Field size check
    static_assert(sizeof(::UnityEngine::TestRunner::NUnitExtensions::Runner::WorkItemFactory*) == 0x8);
    // protected System.Boolean m_ExecuteTestStartEvent
    // Size: 0x1
    // Offset: 0x18
    bool m_ExecuteTestStartEvent;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // protected System.Boolean m_DontRunRestoringResult
    // Size: 0x1
    // Offset: 0x19
    bool m_DontRunRestoringResult;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: m_DontRunRestoringResult and: Completed
    char __padding2[0x6] = {};
    // private System.EventHandler Completed
    // Size: 0x8
    // Offset: 0x20
    ::System::EventHandler* Completed;
    // Field size check
    static_assert(sizeof(::System::EventHandler*) == 0x8);
    // private System.Boolean <ResultedInDomainReload>k__BackingField
    // Size: 0x1
    // Offset: 0x28
    bool ResultedInDomainReload;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: ResultedInDomainReload and: Context
    char __padding4[0x7] = {};
    // private UnityEngine.TestRunner.NUnitExtensions.Runner.UnityTestExecutionContext <Context>k__BackingField
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::TestRunner::NUnitExtensions::Runner::UnityTestExecutionContext* Context;
    // Field size check
    static_assert(sizeof(::UnityEngine::TestRunner::NUnitExtensions::Runner::UnityTestExecutionContext*) == 0x8);
    // private NUnit.Framework.Internal.Test <Test>k__BackingField
    // Size: 0x8
    // Offset: 0x38
    ::NUnit::Framework::Internal::Test* Test;
    // Field size check
    static_assert(sizeof(::NUnit::Framework::Internal::Test*) == 0x8);
    // private NUnit.Framework.Internal.TestResult <Result>k__BackingField
    // Size: 0x8
    // Offset: 0x40
    ::NUnit::Framework::Internal::TestResult* Result;
    // Field size check
    static_assert(sizeof(::NUnit::Framework::Internal::TestResult*) == 0x8);
    // private NUnit.Framework.Internal.Execution.WorkItemState <State>k__BackingField
    // Size: 0x4
    // Offset: 0x48
    ::NUnit::Framework::Internal::Execution::WorkItemState State;
    // Field size check
    static_assert(sizeof(::NUnit::Framework::Internal::Execution::WorkItemState) == 0x4);
    // Padding between fields: State and: Actions
    char __padding8[0x4] = {};
    // private System.Collections.Generic.List`1<NUnit.Framework.ITestAction> <Actions>k__BackingField
    // Size: 0x8
    // Offset: 0x50
    ::System::Collections::Generic::List_1<::NUnit::Framework::ITestAction*>* Actions;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::NUnit::Framework::ITestAction*>*) == 0x8);
    public:
    // static field const value: static protected System.Int32 k_DefaultTimeout
    static constexpr const int k_DefaultTimeout = 180000;
    // Get static field: static protected System.Int32 k_DefaultTimeout
    static int _get_k_DefaultTimeout();
    // Set static field: static protected System.Int32 k_DefaultTimeout
    static void _set_k_DefaultTimeout(int value);
    // Get instance field reference: protected readonly UnityEngine.TestRunner.NUnitExtensions.Runner.WorkItemFactory m_Factory
    [[deprecated("Use field access instead!")]] ::UnityEngine::TestRunner::NUnitExtensions::Runner::WorkItemFactory*& dyn_m_Factory();
    // Get instance field reference: protected System.Boolean m_ExecuteTestStartEvent
    [[deprecated("Use field access instead!")]] bool& dyn_m_ExecuteTestStartEvent();
    // Get instance field reference: protected System.Boolean m_DontRunRestoringResult
    [[deprecated("Use field access instead!")]] bool& dyn_m_DontRunRestoringResult();
    // Get instance field reference: private System.EventHandler Completed
    [[deprecated("Use field access instead!")]] ::System::EventHandler*& dyn_Completed();
    // Get instance field reference: private System.Boolean <ResultedInDomainReload>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$ResultedInDomainReload$k__BackingField();
    // Get instance field reference: private UnityEngine.TestRunner.NUnitExtensions.Runner.UnityTestExecutionContext <Context>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::TestRunner::NUnitExtensions::Runner::UnityTestExecutionContext*& dyn_$Context$k__BackingField();
    // Get instance field reference: private NUnit.Framework.Internal.Test <Test>k__BackingField
    [[deprecated("Use field access instead!")]] ::NUnit::Framework::Internal::Test*& dyn_$Test$k__BackingField();
    // Get instance field reference: private NUnit.Framework.Internal.TestResult <Result>k__BackingField
    [[deprecated("Use field access instead!")]] ::NUnit::Framework::Internal::TestResult*& dyn_$Result$k__BackingField();
    // Get instance field reference: private NUnit.Framework.Internal.Execution.WorkItemState <State>k__BackingField
    [[deprecated("Use field access instead!")]] ::NUnit::Framework::Internal::Execution::WorkItemState& dyn_$State$k__BackingField();
    // Get instance field reference: private System.Collections.Generic.List`1<NUnit.Framework.ITestAction> <Actions>k__BackingField
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::NUnit::Framework::ITestAction*>*& dyn_$Actions$k__BackingField();
    // public System.Boolean get_ResultedInDomainReload()
    // Offset: 0x197AE2C
    bool get_ResultedInDomainReload();
    // System.Void set_ResultedInDomainReload(System.Boolean value)
    // Offset: 0x197AE34
    void set_ResultedInDomainReload(bool value);
    // public UnityEngine.TestRunner.NUnitExtensions.Runner.UnityTestExecutionContext get_Context()
    // Offset: 0x197AE40
    ::UnityEngine::TestRunner::NUnitExtensions::Runner::UnityTestExecutionContext* get_Context();
    // private System.Void set_Context(UnityEngine.TestRunner.NUnitExtensions.Runner.UnityTestExecutionContext value)
    // Offset: 0x197AE48
    void set_Context(::UnityEngine::TestRunner::NUnitExtensions::Runner::UnityTestExecutionContext* value);
    // public NUnit.Framework.Internal.Test get_Test()
    // Offset: 0x197AE50
    ::NUnit::Framework::Internal::Test* get_Test();
    // private System.Void set_Test(NUnit.Framework.Internal.Test value)
    // Offset: 0x197AE58
    void set_Test(::NUnit::Framework::Internal::Test* value);
    // public NUnit.Framework.Internal.TestResult get_Result()
    // Offset: 0x197AE60
    ::NUnit::Framework::Internal::TestResult* get_Result();
    // protected System.Void set_Result(NUnit.Framework.Internal.TestResult value)
    // Offset: 0x197AE68
    void set_Result(::NUnit::Framework::Internal::TestResult* value);
    // public NUnit.Framework.Internal.Execution.WorkItemState get_State()
    // Offset: 0x197AE70
    ::NUnit::Framework::Internal::Execution::WorkItemState get_State();
    // private System.Void set_State(NUnit.Framework.Internal.Execution.WorkItemState value)
    // Offset: 0x197AE78
    void set_State(::NUnit::Framework::Internal::Execution::WorkItemState value);
    // public System.Collections.Generic.List`1<NUnit.Framework.ITestAction> get_Actions()
    // Offset: 0x197AE80
    ::System::Collections::Generic::List_1<::NUnit::Framework::ITestAction*>* get_Actions();
    // private System.Void set_Actions(System.Collections.Generic.List`1<NUnit.Framework.ITestAction> value)
    // Offset: 0x197AE88
    void set_Actions(::System::Collections::Generic::List_1<::NUnit::Framework::ITestAction*>* value);
    // protected System.Void .ctor(NUnit.Framework.Internal.Test test, UnityEngine.TestRunner.NUnitExtensions.Runner.WorkItemFactory factory)
    // Offset: 0x1971E28
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UnityWorkItem* New_ctor(::NUnit::Framework::Internal::Test* test, ::UnityEngine::TestRunner::NUnitExtensions::Runner::WorkItemFactory* factory) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::TestRunner::NUnitExtensions::Runner::UnityWorkItem::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UnityWorkItem*, creationType>(test, factory)));
    }
    // static protected System.Boolean ShouldRestore(NUnit.Framework.Interfaces.ITest loadedTest)
    // Offset: 0x197AF90
    static bool ShouldRestore(::NUnit::Framework::Interfaces::ITest* loadedTest);
    // protected System.Boolean ShouldExecuteStartEvent()
    // Offset: 0x197AE90
    bool ShouldExecuteStartEvent();
    // protected System.Collections.IEnumerable PerformWork()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Collections::IEnumerable* PerformWork();
    // public System.Void InitializeContext(UnityEngine.TestRunner.NUnitExtensions.Runner.UnityTestExecutionContext context)
    // Offset: 0x19752AC
    void InitializeContext(::UnityEngine::TestRunner::NUnitExtensions::Runner::UnityTestExecutionContext* context);
    // public System.Collections.IEnumerable Execute()
    // Offset: 0x197B1B8
    ::System::Collections::IEnumerable* Execute();
    // protected System.Void WorkItemComplete()
    // Offset: 0x1973FB0
    void WorkItemComplete();
    // public System.Void Cancel(System.Boolean force)
    // Offset: 0x197B334
    void Cancel(bool force);
    // private System.Boolean <ShouldExecuteStartEvent>b__33_0(System.String x)
    // Offset: 0x197B44C
    bool $ShouldExecuteStartEvent$b__33_0(::StringW x);
  }; // UnityEngine.TestRunner.NUnitExtensions.Runner.UnityWorkItem
  #pragma pack(pop)
  static check_size<sizeof(UnityWorkItem), 80 + sizeof(::System::Collections::Generic::List_1<::NUnit::Framework::ITestAction*>*)> __UnityEngine_TestRunner_NUnitExtensions_Runner_UnityWorkItemSizeCheck;
  static_assert(sizeof(UnityWorkItem) == 0x58);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::TestRunner::NUnitExtensions::Runner::UnityWorkItem::get_ResultedInDomainReload
// Il2CppName: get_ResultedInDomainReload
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::TestRunner::NUnitExtensions::Runner::UnityWorkItem::*)()>(&UnityEngine::TestRunner::NUnitExtensions::Runner::UnityWorkItem::get_ResultedInDomainReload)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestRunner::NUnitExtensions::Runner::UnityWorkItem*), "get_ResultedInDomainReload", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestRunner::NUnitExtensions::Runner::UnityWorkItem::set_ResultedInDomainReload
// Il2CppName: set_ResultedInDomainReload
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TestRunner::NUnitExtensions::Runner::UnityWorkItem::*)(bool)>(&UnityEngine::TestRunner::NUnitExtensions::Runner::UnityWorkItem::set_ResultedInDomainReload)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestRunner::NUnitExtensions::Runner::UnityWorkItem*), "set_ResultedInDomainReload", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestRunner::NUnitExtensions::Runner::UnityWorkItem::get_Context
// Il2CppName: get_Context
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::TestRunner::NUnitExtensions::Runner::UnityTestExecutionContext* (UnityEngine::TestRunner::NUnitExtensions::Runner::UnityWorkItem::*)()>(&UnityEngine::TestRunner::NUnitExtensions::Runner::UnityWorkItem::get_Context)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestRunner::NUnitExtensions::Runner::UnityWorkItem*), "get_Context", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestRunner::NUnitExtensions::Runner::UnityWorkItem::set_Context
// Il2CppName: set_Context
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TestRunner::NUnitExtensions::Runner::UnityWorkItem::*)(::UnityEngine::TestRunner::NUnitExtensions::Runner::UnityTestExecutionContext*)>(&UnityEngine::TestRunner::NUnitExtensions::Runner::UnityWorkItem::set_Context)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.TestRunner.NUnitExtensions.Runner", "UnityTestExecutionContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestRunner::NUnitExtensions::Runner::UnityWorkItem*), "set_Context", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestRunner::NUnitExtensions::Runner::UnityWorkItem::get_Test
// Il2CppName: get_Test
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::NUnit::Framework::Internal::Test* (UnityEngine::TestRunner::NUnitExtensions::Runner::UnityWorkItem::*)()>(&UnityEngine::TestRunner::NUnitExtensions::Runner::UnityWorkItem::get_Test)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestRunner::NUnitExtensions::Runner::UnityWorkItem*), "get_Test", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestRunner::NUnitExtensions::Runner::UnityWorkItem::set_Test
// Il2CppName: set_Test
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TestRunner::NUnitExtensions::Runner::UnityWorkItem::*)(::NUnit::Framework::Internal::Test*)>(&UnityEngine::TestRunner::NUnitExtensions::Runner::UnityWorkItem::set_Test)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Internal", "Test")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestRunner::NUnitExtensions::Runner::UnityWorkItem*), "set_Test", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestRunner::NUnitExtensions::Runner::UnityWorkItem::get_Result
// Il2CppName: get_Result
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::NUnit::Framework::Internal::TestResult* (UnityEngine::TestRunner::NUnitExtensions::Runner::UnityWorkItem::*)()>(&UnityEngine::TestRunner::NUnitExtensions::Runner::UnityWorkItem::get_Result)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestRunner::NUnitExtensions::Runner::UnityWorkItem*), "get_Result", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestRunner::NUnitExtensions::Runner::UnityWorkItem::set_Result
// Il2CppName: set_Result
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TestRunner::NUnitExtensions::Runner::UnityWorkItem::*)(::NUnit::Framework::Internal::TestResult*)>(&UnityEngine::TestRunner::NUnitExtensions::Runner::UnityWorkItem::set_Result)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Internal", "TestResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestRunner::NUnitExtensions::Runner::UnityWorkItem*), "set_Result", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestRunner::NUnitExtensions::Runner::UnityWorkItem::get_State
// Il2CppName: get_State
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::NUnit::Framework::Internal::Execution::WorkItemState (UnityEngine::TestRunner::NUnitExtensions::Runner::UnityWorkItem::*)()>(&UnityEngine::TestRunner::NUnitExtensions::Runner::UnityWorkItem::get_State)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestRunner::NUnitExtensions::Runner::UnityWorkItem*), "get_State", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestRunner::NUnitExtensions::Runner::UnityWorkItem::set_State
// Il2CppName: set_State
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TestRunner::NUnitExtensions::Runner::UnityWorkItem::*)(::NUnit::Framework::Internal::Execution::WorkItemState)>(&UnityEngine::TestRunner::NUnitExtensions::Runner::UnityWorkItem::set_State)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Internal.Execution", "WorkItemState")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestRunner::NUnitExtensions::Runner::UnityWorkItem*), "set_State", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestRunner::NUnitExtensions::Runner::UnityWorkItem::get_Actions
// Il2CppName: get_Actions
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::NUnit::Framework::ITestAction*>* (UnityEngine::TestRunner::NUnitExtensions::Runner::UnityWorkItem::*)()>(&UnityEngine::TestRunner::NUnitExtensions::Runner::UnityWorkItem::get_Actions)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestRunner::NUnitExtensions::Runner::UnityWorkItem*), "get_Actions", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestRunner::NUnitExtensions::Runner::UnityWorkItem::set_Actions
// Il2CppName: set_Actions
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TestRunner::NUnitExtensions::Runner::UnityWorkItem::*)(::System::Collections::Generic::List_1<::NUnit::Framework::ITestAction*>*)>(&UnityEngine::TestRunner::NUnitExtensions::Runner::UnityWorkItem::set_Actions)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("NUnit.Framework", "ITestAction")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestRunner::NUnitExtensions::Runner::UnityWorkItem*), "set_Actions", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestRunner::NUnitExtensions::Runner::UnityWorkItem::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::TestRunner::NUnitExtensions::Runner::UnityWorkItem::ShouldRestore
// Il2CppName: ShouldRestore
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::NUnit::Framework::Interfaces::ITest*)>(&UnityEngine::TestRunner::NUnitExtensions::Runner::UnityWorkItem::ShouldRestore)> {
  static const MethodInfo* get() {
    static auto* loadedTest = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Interfaces", "ITest")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestRunner::NUnitExtensions::Runner::UnityWorkItem*), "ShouldRestore", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{loadedTest});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestRunner::NUnitExtensions::Runner::UnityWorkItem::ShouldExecuteStartEvent
// Il2CppName: ShouldExecuteStartEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::TestRunner::NUnitExtensions::Runner::UnityWorkItem::*)()>(&UnityEngine::TestRunner::NUnitExtensions::Runner::UnityWorkItem::ShouldExecuteStartEvent)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestRunner::NUnitExtensions::Runner::UnityWorkItem*), "ShouldExecuteStartEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestRunner::NUnitExtensions::Runner::UnityWorkItem::PerformWork
// Il2CppName: PerformWork
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerable* (UnityEngine::TestRunner::NUnitExtensions::Runner::UnityWorkItem::*)()>(&UnityEngine::TestRunner::NUnitExtensions::Runner::UnityWorkItem::PerformWork)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestRunner::NUnitExtensions::Runner::UnityWorkItem*), "PerformWork", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestRunner::NUnitExtensions::Runner::UnityWorkItem::InitializeContext
// Il2CppName: InitializeContext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TestRunner::NUnitExtensions::Runner::UnityWorkItem::*)(::UnityEngine::TestRunner::NUnitExtensions::Runner::UnityTestExecutionContext*)>(&UnityEngine::TestRunner::NUnitExtensions::Runner::UnityWorkItem::InitializeContext)> {
  static const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("UnityEngine.TestRunner.NUnitExtensions.Runner", "UnityTestExecutionContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestRunner::NUnitExtensions::Runner::UnityWorkItem*), "InitializeContext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestRunner::NUnitExtensions::Runner::UnityWorkItem::Execute
// Il2CppName: Execute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerable* (UnityEngine::TestRunner::NUnitExtensions::Runner::UnityWorkItem::*)()>(&UnityEngine::TestRunner::NUnitExtensions::Runner::UnityWorkItem::Execute)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestRunner::NUnitExtensions::Runner::UnityWorkItem*), "Execute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestRunner::NUnitExtensions::Runner::UnityWorkItem::WorkItemComplete
// Il2CppName: WorkItemComplete
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TestRunner::NUnitExtensions::Runner::UnityWorkItem::*)()>(&UnityEngine::TestRunner::NUnitExtensions::Runner::UnityWorkItem::WorkItemComplete)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestRunner::NUnitExtensions::Runner::UnityWorkItem*), "WorkItemComplete", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestRunner::NUnitExtensions::Runner::UnityWorkItem::Cancel
// Il2CppName: Cancel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TestRunner::NUnitExtensions::Runner::UnityWorkItem::*)(bool)>(&UnityEngine::TestRunner::NUnitExtensions::Runner::UnityWorkItem::Cancel)> {
  static const MethodInfo* get() {
    static auto* force = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestRunner::NUnitExtensions::Runner::UnityWorkItem*), "Cancel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{force});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestRunner::NUnitExtensions::Runner::UnityWorkItem::$ShouldExecuteStartEvent$b__33_0
// Il2CppName: <ShouldExecuteStartEvent>b__33_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::TestRunner::NUnitExtensions::Runner::UnityWorkItem::*)(::StringW)>(&UnityEngine::TestRunner::NUnitExtensions::Runner::UnityWorkItem::$ShouldExecuteStartEvent$b__33_0)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestRunner::NUnitExtensions::Runner::UnityWorkItem*), "<ShouldExecuteStartEvent>b__33_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
