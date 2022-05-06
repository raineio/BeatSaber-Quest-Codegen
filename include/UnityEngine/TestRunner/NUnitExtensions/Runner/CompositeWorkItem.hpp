// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.TestRunner.NUnitExtensions.Runner.UnityWorkItem
#include "UnityEngine/TestRunner/NUnitExtensions/Runner/UnityWorkItem.hpp"
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
}
// Forward declaring namespace: NUnit::Framework::Internal
namespace NUnit::Framework::Internal {
  // Forward declaring type: TestSuite
  class TestSuite;
  // Forward declaring type: TestSuiteResult
  class TestSuiteResult;
}
// Forward declaring namespace: NUnit::Framework::Interfaces
namespace NUnit::Framework::Interfaces {
  // Forward declaring type: ITestFilter
  class ITestFilter;
  // Forward declaring type: ResultState
  class ResultState;
}
// Forward declaring namespace: NUnit::Framework::Internal::Commands
namespace NUnit::Framework::Internal::Commands {
  // Forward declaring type: TestCommand
  class TestCommand;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: CountdownEvent
  class CountdownEvent;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerable
  class IEnumerable;
}
// Completed forward declares
// Type namespace: UnityEngine.TestRunner.NUnitExtensions.Runner
namespace UnityEngine::TestRunner::NUnitExtensions::Runner {
  // Forward declaring type: CompositeWorkItem
  class CompositeWorkItem;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::TestRunner::NUnitExtensions::Runner::CompositeWorkItem);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TestRunner::NUnitExtensions::Runner::CompositeWorkItem*, "UnityEngine.TestRunner.NUnitExtensions.Runner", "CompositeWorkItem");
// Type namespace: UnityEngine.TestRunner.NUnitExtensions.Runner
namespace UnityEngine::TestRunner::NUnitExtensions::Runner {
  // Size: 0x98
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.TestRunner.NUnitExtensions.Runner.CompositeWorkItem
  // [TokenAttribute] Offset: FFFFFFFF
  class CompositeWorkItem : public ::UnityEngine::TestRunner::NUnitExtensions::Runner::UnityWorkItem {
    public:
    // Nested type: ::UnityEngine::TestRunner::NUnitExtensions::Runner::CompositeWorkItem::UnityWorkItemOrderComparer
    class UnityWorkItemOrderComparer;
    // Nested type: ::UnityEngine::TestRunner::NUnitExtensions::Runner::CompositeWorkItem::$PerformWork$d__12
    class $PerformWork$d__12;
    // Nested type: ::UnityEngine::TestRunner::NUnitExtensions::Runner::CompositeWorkItem::$RunChildren$d__16
    class $RunChildren$d__16;
    public:
    // private readonly NUnit.Framework.Internal.TestSuite _suite
    // Size: 0x8
    // Offset: 0x58
    ::NUnit::Framework::Internal::TestSuite* suite;
    // Field size check
    static_assert(sizeof(::NUnit::Framework::Internal::TestSuite*) == 0x8);
    // private readonly NUnit.Framework.Internal.TestSuiteResult _suiteResult
    // Size: 0x8
    // Offset: 0x60
    ::NUnit::Framework::Internal::TestSuiteResult* suiteResult;
    // Field size check
    static_assert(sizeof(::NUnit::Framework::Internal::TestSuiteResult*) == 0x8);
    // private readonly NUnit.Framework.Interfaces.ITestFilter _childFilter
    // Size: 0x8
    // Offset: 0x68
    ::NUnit::Framework::Interfaces::ITestFilter* childFilter;
    // Field size check
    static_assert(sizeof(::NUnit::Framework::Interfaces::ITestFilter*) == 0x8);
    // private NUnit.Framework.Internal.Commands.TestCommand _setupCommand
    // Size: 0x8
    // Offset: 0x70
    ::NUnit::Framework::Internal::Commands::TestCommand* setupCommand;
    // Field size check
    static_assert(sizeof(::NUnit::Framework::Internal::Commands::TestCommand*) == 0x8);
    // private NUnit.Framework.Internal.Commands.TestCommand _teardownCommand
    // Size: 0x8
    // Offset: 0x78
    ::NUnit::Framework::Internal::Commands::TestCommand* teardownCommand;
    // Field size check
    static_assert(sizeof(::NUnit::Framework::Internal::Commands::TestCommand*) == 0x8);
    // private System.Collections.Generic.List`1<UnityEngine.TestRunner.NUnitExtensions.Runner.UnityWorkItem> <Children>k__BackingField
    // Size: 0x8
    // Offset: 0x80
    ::System::Collections::Generic::List_1<::UnityEngine::TestRunner::NUnitExtensions::Runner::UnityWorkItem*>* Children;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::UnityEngine::TestRunner::NUnitExtensions::Runner::UnityWorkItem*>*) == 0x8);
    // private System.Int32 _countOrder
    // Size: 0x4
    // Offset: 0x88
    int countOrder;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: countOrder and: childTestCountdown
    char __padding6[0x4] = {};
    // private System.Threading.CountdownEvent _childTestCountdown
    // Size: 0x8
    // Offset: 0x90
    ::System::Threading::CountdownEvent* childTestCountdown;
    // Field size check
    static_assert(sizeof(::System::Threading::CountdownEvent*) == 0x8);
    public:
    // Get instance field reference: private readonly NUnit.Framework.Internal.TestSuite _suite
    [[deprecated("Use field access instead!")]] ::NUnit::Framework::Internal::TestSuite*& dyn__suite();
    // Get instance field reference: private readonly NUnit.Framework.Internal.TestSuiteResult _suiteResult
    [[deprecated("Use field access instead!")]] ::NUnit::Framework::Internal::TestSuiteResult*& dyn__suiteResult();
    // Get instance field reference: private readonly NUnit.Framework.Interfaces.ITestFilter _childFilter
    [[deprecated("Use field access instead!")]] ::NUnit::Framework::Interfaces::ITestFilter*& dyn__childFilter();
    // Get instance field reference: private NUnit.Framework.Internal.Commands.TestCommand _setupCommand
    [[deprecated("Use field access instead!")]] ::NUnit::Framework::Internal::Commands::TestCommand*& dyn__setupCommand();
    // Get instance field reference: private NUnit.Framework.Internal.Commands.TestCommand _teardownCommand
    [[deprecated("Use field access instead!")]] ::NUnit::Framework::Internal::Commands::TestCommand*& dyn__teardownCommand();
    // Get instance field reference: private System.Collections.Generic.List`1<UnityEngine.TestRunner.NUnitExtensions.Runner.UnityWorkItem> <Children>k__BackingField
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::UnityEngine::TestRunner::NUnitExtensions::Runner::UnityWorkItem*>*& dyn_$Children$k__BackingField();
    // Get instance field reference: private System.Int32 _countOrder
    [[deprecated("Use field access instead!")]] int& dyn__countOrder();
    // Get instance field reference: private System.Threading.CountdownEvent _childTestCountdown
    [[deprecated("Use field access instead!")]] ::System::Threading::CountdownEvent*& dyn__childTestCountdown();
    // public System.Collections.Generic.List`1<UnityEngine.TestRunner.NUnitExtensions.Runner.UnityWorkItem> get_Children()
    // Offset: 0x1971D5C
    ::System::Collections::Generic::List_1<::UnityEngine::TestRunner::NUnitExtensions::Runner::UnityWorkItem*>* get_Children();
    // private System.Void set_Children(System.Collections.Generic.List`1<UnityEngine.TestRunner.NUnitExtensions.Runner.UnityWorkItem> value)
    // Offset: 0x1971D64
    void set_Children(::System::Collections::Generic::List_1<::UnityEngine::TestRunner::NUnitExtensions::Runner::UnityWorkItem*>* value);
    // public System.Void .ctor(NUnit.Framework.Internal.TestSuite suite, NUnit.Framework.Interfaces.ITestFilter childFilter, UnityEngine.TestRunner.NUnitExtensions.Runner.WorkItemFactory factory)
    // Offset: 0x1971D6C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CompositeWorkItem* New_ctor(::NUnit::Framework::Internal::TestSuite* suite, ::NUnit::Framework::Interfaces::ITestFilter* childFilter, ::UnityEngine::TestRunner::NUnitExtensions::Runner::WorkItemFactory* factory) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::TestRunner::NUnitExtensions::Runner::CompositeWorkItem::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CompositeWorkItem*, creationType>(suite, childFilter, factory)));
    }
    // private System.Boolean CheckForCancellation()
    // Offset: 0x1971FB0
    bool CheckForCancellation();
    // private System.Void InitializeSetUpAndTearDownCommands()
    // Offset: 0x1972088
    void InitializeSetUpAndTearDownCommands();
    // private System.Void PerformOneTimeSetUp()
    // Offset: 0x197259C
    void PerformOneTimeSetUp();
    // private System.Collections.IEnumerable RunChildren()
    // Offset: 0x1972918
    ::System::Collections::IEnumerable* RunChildren();
    // private System.Void CreateChildWorkItems()
    // Offset: 0x19729D0
    void CreateChildWorkItems();
    // private System.Void SortChildren()
    // Offset: 0x197314C
    void SortChildren();
    // private System.Void SkipFixture(NUnit.Framework.Interfaces.ResultState resultState, System.String message, System.String stackTrace)
    // Offset: 0x19731E4
    void SkipFixture(::NUnit::Framework::Interfaces::ResultState* resultState, ::StringW message, ::StringW stackTrace);
    // private System.Void SkipChildren(NUnit.Framework.Internal.TestSuite suite, NUnit.Framework.Interfaces.ResultState resultState, System.String message)
    // Offset: 0x19732F0
    void SkipChildren(::NUnit::Framework::Internal::TestSuite* suite, ::NUnit::Framework::Interfaces::ResultState* resultState, ::StringW message);
    // private System.Void PerformOneTimeTearDown()
    // Offset: 0x197383C
    void PerformOneTimeTearDown();
    // private System.String GetSkipReason()
    // Offset: 0x19739FC
    ::StringW GetSkipReason();
    // private System.String GetProviderStackTrace()
    // Offset: 0x1973AEC
    ::StringW GetProviderStackTrace();
    // private System.Void CountDownChildTest()
    // Offset: 0x1973BDC
    void CountDownChildTest();
    // protected override System.Collections.IEnumerable PerformWork()
    // Offset: 0x1971EF8
    // Implemented from: UnityEngine.TestRunner.NUnitExtensions.Runner.UnityWorkItem
    // Base method: System.Collections.IEnumerable UnityWorkItem::PerformWork()
    ::System::Collections::IEnumerable* PerformWork();
    // public override System.Void Cancel(System.Boolean force)
    // Offset: 0x19741A0
    // Implemented from: UnityEngine.TestRunner.NUnitExtensions.Runner.UnityWorkItem
    // Base method: System.Void UnityWorkItem::Cancel(System.Boolean force)
    void Cancel(bool force);
  }; // UnityEngine.TestRunner.NUnitExtensions.Runner.CompositeWorkItem
  #pragma pack(pop)
  static check_size<sizeof(CompositeWorkItem), 144 + sizeof(::System::Threading::CountdownEvent*)> __UnityEngine_TestRunner_NUnitExtensions_Runner_CompositeWorkItemSizeCheck;
  static_assert(sizeof(CompositeWorkItem) == 0x98);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::TestRunner::NUnitExtensions::Runner::CompositeWorkItem::get_Children
// Il2CppName: get_Children
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::TestRunner::NUnitExtensions::Runner::UnityWorkItem*>* (UnityEngine::TestRunner::NUnitExtensions::Runner::CompositeWorkItem::*)()>(&UnityEngine::TestRunner::NUnitExtensions::Runner::CompositeWorkItem::get_Children)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestRunner::NUnitExtensions::Runner::CompositeWorkItem*), "get_Children", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestRunner::NUnitExtensions::Runner::CompositeWorkItem::set_Children
// Il2CppName: set_Children
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TestRunner::NUnitExtensions::Runner::CompositeWorkItem::*)(::System::Collections::Generic::List_1<::UnityEngine::TestRunner::NUnitExtensions::Runner::UnityWorkItem*>*)>(&UnityEngine::TestRunner::NUnitExtensions::Runner::CompositeWorkItem::set_Children)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.TestRunner.NUnitExtensions.Runner", "UnityWorkItem")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestRunner::NUnitExtensions::Runner::CompositeWorkItem*), "set_Children", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestRunner::NUnitExtensions::Runner::CompositeWorkItem::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::TestRunner::NUnitExtensions::Runner::CompositeWorkItem::CheckForCancellation
// Il2CppName: CheckForCancellation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::TestRunner::NUnitExtensions::Runner::CompositeWorkItem::*)()>(&UnityEngine::TestRunner::NUnitExtensions::Runner::CompositeWorkItem::CheckForCancellation)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestRunner::NUnitExtensions::Runner::CompositeWorkItem*), "CheckForCancellation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestRunner::NUnitExtensions::Runner::CompositeWorkItem::InitializeSetUpAndTearDownCommands
// Il2CppName: InitializeSetUpAndTearDownCommands
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TestRunner::NUnitExtensions::Runner::CompositeWorkItem::*)()>(&UnityEngine::TestRunner::NUnitExtensions::Runner::CompositeWorkItem::InitializeSetUpAndTearDownCommands)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestRunner::NUnitExtensions::Runner::CompositeWorkItem*), "InitializeSetUpAndTearDownCommands", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestRunner::NUnitExtensions::Runner::CompositeWorkItem::PerformOneTimeSetUp
// Il2CppName: PerformOneTimeSetUp
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TestRunner::NUnitExtensions::Runner::CompositeWorkItem::*)()>(&UnityEngine::TestRunner::NUnitExtensions::Runner::CompositeWorkItem::PerformOneTimeSetUp)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestRunner::NUnitExtensions::Runner::CompositeWorkItem*), "PerformOneTimeSetUp", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestRunner::NUnitExtensions::Runner::CompositeWorkItem::RunChildren
// Il2CppName: RunChildren
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerable* (UnityEngine::TestRunner::NUnitExtensions::Runner::CompositeWorkItem::*)()>(&UnityEngine::TestRunner::NUnitExtensions::Runner::CompositeWorkItem::RunChildren)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestRunner::NUnitExtensions::Runner::CompositeWorkItem*), "RunChildren", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestRunner::NUnitExtensions::Runner::CompositeWorkItem::CreateChildWorkItems
// Il2CppName: CreateChildWorkItems
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TestRunner::NUnitExtensions::Runner::CompositeWorkItem::*)()>(&UnityEngine::TestRunner::NUnitExtensions::Runner::CompositeWorkItem::CreateChildWorkItems)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestRunner::NUnitExtensions::Runner::CompositeWorkItem*), "CreateChildWorkItems", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestRunner::NUnitExtensions::Runner::CompositeWorkItem::SortChildren
// Il2CppName: SortChildren
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TestRunner::NUnitExtensions::Runner::CompositeWorkItem::*)()>(&UnityEngine::TestRunner::NUnitExtensions::Runner::CompositeWorkItem::SortChildren)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestRunner::NUnitExtensions::Runner::CompositeWorkItem*), "SortChildren", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestRunner::NUnitExtensions::Runner::CompositeWorkItem::SkipFixture
// Il2CppName: SkipFixture
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TestRunner::NUnitExtensions::Runner::CompositeWorkItem::*)(::NUnit::Framework::Interfaces::ResultState*, ::StringW, ::StringW)>(&UnityEngine::TestRunner::NUnitExtensions::Runner::CompositeWorkItem::SkipFixture)> {
  static const MethodInfo* get() {
    static auto* resultState = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Interfaces", "ResultState")->byval_arg;
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* stackTrace = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestRunner::NUnitExtensions::Runner::CompositeWorkItem*), "SkipFixture", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{resultState, message, stackTrace});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestRunner::NUnitExtensions::Runner::CompositeWorkItem::SkipChildren
// Il2CppName: SkipChildren
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TestRunner::NUnitExtensions::Runner::CompositeWorkItem::*)(::NUnit::Framework::Internal::TestSuite*, ::NUnit::Framework::Interfaces::ResultState*, ::StringW)>(&UnityEngine::TestRunner::NUnitExtensions::Runner::CompositeWorkItem::SkipChildren)> {
  static const MethodInfo* get() {
    static auto* suite = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Internal", "TestSuite")->byval_arg;
    static auto* resultState = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Interfaces", "ResultState")->byval_arg;
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestRunner::NUnitExtensions::Runner::CompositeWorkItem*), "SkipChildren", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{suite, resultState, message});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestRunner::NUnitExtensions::Runner::CompositeWorkItem::PerformOneTimeTearDown
// Il2CppName: PerformOneTimeTearDown
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TestRunner::NUnitExtensions::Runner::CompositeWorkItem::*)()>(&UnityEngine::TestRunner::NUnitExtensions::Runner::CompositeWorkItem::PerformOneTimeTearDown)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestRunner::NUnitExtensions::Runner::CompositeWorkItem*), "PerformOneTimeTearDown", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestRunner::NUnitExtensions::Runner::CompositeWorkItem::GetSkipReason
// Il2CppName: GetSkipReason
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::TestRunner::NUnitExtensions::Runner::CompositeWorkItem::*)()>(&UnityEngine::TestRunner::NUnitExtensions::Runner::CompositeWorkItem::GetSkipReason)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestRunner::NUnitExtensions::Runner::CompositeWorkItem*), "GetSkipReason", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestRunner::NUnitExtensions::Runner::CompositeWorkItem::GetProviderStackTrace
// Il2CppName: GetProviderStackTrace
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::TestRunner::NUnitExtensions::Runner::CompositeWorkItem::*)()>(&UnityEngine::TestRunner::NUnitExtensions::Runner::CompositeWorkItem::GetProviderStackTrace)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestRunner::NUnitExtensions::Runner::CompositeWorkItem*), "GetProviderStackTrace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestRunner::NUnitExtensions::Runner::CompositeWorkItem::CountDownChildTest
// Il2CppName: CountDownChildTest
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TestRunner::NUnitExtensions::Runner::CompositeWorkItem::*)()>(&UnityEngine::TestRunner::NUnitExtensions::Runner::CompositeWorkItem::CountDownChildTest)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestRunner::NUnitExtensions::Runner::CompositeWorkItem*), "CountDownChildTest", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestRunner::NUnitExtensions::Runner::CompositeWorkItem::PerformWork
// Il2CppName: PerformWork
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerable* (UnityEngine::TestRunner::NUnitExtensions::Runner::CompositeWorkItem::*)()>(&UnityEngine::TestRunner::NUnitExtensions::Runner::CompositeWorkItem::PerformWork)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestRunner::NUnitExtensions::Runner::CompositeWorkItem*), "PerformWork", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestRunner::NUnitExtensions::Runner::CompositeWorkItem::Cancel
// Il2CppName: Cancel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TestRunner::NUnitExtensions::Runner::CompositeWorkItem::*)(bool)>(&UnityEngine::TestRunner::NUnitExtensions::Runner::CompositeWorkItem::Cancel)> {
  static const MethodInfo* get() {
    static auto* force = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestRunner::NUnitExtensions::Runner::CompositeWorkItem*), "Cancel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{force});
  }
};
