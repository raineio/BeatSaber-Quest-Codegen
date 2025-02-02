// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: NUnit.Framework.Internal.TestResult
#include "NUnit/Framework/Internal/TestResult.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
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
  // Forward declaring type: TestSuiteResult
  class TestSuiteResult;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::NUnit::Framework::Internal::TestSuiteResult);
DEFINE_IL2CPP_ARG_TYPE(::NUnit::Framework::Internal::TestSuiteResult*, "NUnit.Framework.Internal", "TestSuiteResult");
// Type namespace: NUnit.Framework.Internal
namespace NUnit::Framework::Internal {
  // Size: 0x78
  #pragma pack(push, 1)
  // Autogenerated type: NUnit.Framework.Internal.TestSuiteResult
  // [TokenAttribute] Offset: FFFFFFFF
  class TestSuiteResult : public ::NUnit::Framework::Internal::TestResult {
    public:
    public:
    // private System.Int32 _passCount
    // Size: 0x4
    // Offset: 0x60
    int passCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _failCount
    // Size: 0x4
    // Offset: 0x64
    int failCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _skipCount
    // Size: 0x4
    // Offset: 0x68
    int skipCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _inconclusiveCount
    // Size: 0x4
    // Offset: 0x6C
    int inconclusiveCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Collections.Generic.List`1<NUnit.Framework.Interfaces.ITestResult> _children
    // Size: 0x8
    // Offset: 0x70
    ::System::Collections::Generic::List_1<::NUnit::Framework::Interfaces::ITestResult*>* children;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::NUnit::Framework::Interfaces::ITestResult*>*) == 0x8);
    public:
    // Get instance field reference: private System.Int32 _passCount
    [[deprecated("Use field access instead!")]] int& dyn__passCount();
    // Get instance field reference: private System.Int32 _failCount
    [[deprecated("Use field access instead!")]] int& dyn__failCount();
    // Get instance field reference: private System.Int32 _skipCount
    [[deprecated("Use field access instead!")]] int& dyn__skipCount();
    // Get instance field reference: private System.Int32 _inconclusiveCount
    [[deprecated("Use field access instead!")]] int& dyn__inconclusiveCount();
    // Get instance field reference: private System.Collections.Generic.List`1<NUnit.Framework.Interfaces.ITestResult> _children
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::NUnit::Framework::Interfaces::ITestResult*>*& dyn__children();
    // public System.Void .ctor(NUnit.Framework.Internal.TestSuite suite)
    // Offset: 0x2AB1008
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TestSuiteResult* New_ctor(::NUnit::Framework::Internal::TestSuite* suite) {
      static auto ___internal__logger = ::Logger::get().WithContext("::NUnit::Framework::Internal::TestSuiteResult::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TestSuiteResult*, creationType>(suite)));
    }
    // public System.Void AddResult(NUnit.Framework.Interfaces.ITestResult result)
    // Offset: 0x2AB1548
    void AddResult(::NUnit::Framework::Interfaces::ITestResult* result);
    // public override System.Int32 get_FailCount()
    // Offset: 0x2AB14C8
    // Implemented from: NUnit.Framework.Internal.TestResult
    // Base method: System.Int32 TestResult::get_FailCount()
    int get_FailCount();
    // public override System.Int32 get_PassCount()
    // Offset: 0x2AB14D0
    // Implemented from: NUnit.Framework.Internal.TestResult
    // Base method: System.Int32 TestResult::get_PassCount()
    int get_PassCount();
    // public override System.Int32 get_SkipCount()
    // Offset: 0x2AB14D8
    // Implemented from: NUnit.Framework.Internal.TestResult
    // Base method: System.Int32 TestResult::get_SkipCount()
    int get_SkipCount();
    // public override System.Int32 get_InconclusiveCount()
    // Offset: 0x2AB14E0
    // Implemented from: NUnit.Framework.Internal.TestResult
    // Base method: System.Int32 TestResult::get_InconclusiveCount()
    int get_InconclusiveCount();
    // public override System.Boolean get_HasChildren()
    // Offset: 0x2AB14E8
    // Implemented from: NUnit.Framework.Internal.TestResult
    // Base method: System.Boolean TestResult::get_HasChildren()
    bool get_HasChildren();
    // public override System.Collections.Generic.IEnumerable`1<NUnit.Framework.Interfaces.ITestResult> get_Children()
    // Offset: 0x2AB1540
    // Implemented from: NUnit.Framework.Internal.TestResult
    // Base method: System.Collections.Generic.IEnumerable`1<NUnit.Framework.Interfaces.ITestResult> TestResult::get_Children()
    ::System::Collections::Generic::IEnumerable_1<::NUnit::Framework::Interfaces::ITestResult*>* get_Children();
  }; // NUnit.Framework.Internal.TestSuiteResult
  #pragma pack(pop)
  static check_size<sizeof(TestSuiteResult), 112 + sizeof(::System::Collections::Generic::List_1<::NUnit::Framework::Interfaces::ITestResult*>*)> __NUnit_Framework_Internal_TestSuiteResultSizeCheck;
  static_assert(sizeof(TestSuiteResult) == 0x78);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: NUnit::Framework::Internal::TestSuiteResult::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: NUnit::Framework::Internal::TestSuiteResult::AddResult
// Il2CppName: AddResult
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (NUnit::Framework::Internal::TestSuiteResult::*)(::NUnit::Framework::Interfaces::ITestResult*)>(&NUnit::Framework::Internal::TestSuiteResult::AddResult)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Interfaces", "ITestResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::TestSuiteResult*), "AddResult", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::TestSuiteResult::get_FailCount
// Il2CppName: get_FailCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (NUnit::Framework::Internal::TestSuiteResult::*)()>(&NUnit::Framework::Internal::TestSuiteResult::get_FailCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::TestSuiteResult*), "get_FailCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::TestSuiteResult::get_PassCount
// Il2CppName: get_PassCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (NUnit::Framework::Internal::TestSuiteResult::*)()>(&NUnit::Framework::Internal::TestSuiteResult::get_PassCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::TestSuiteResult*), "get_PassCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::TestSuiteResult::get_SkipCount
// Il2CppName: get_SkipCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (NUnit::Framework::Internal::TestSuiteResult::*)()>(&NUnit::Framework::Internal::TestSuiteResult::get_SkipCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::TestSuiteResult*), "get_SkipCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::TestSuiteResult::get_InconclusiveCount
// Il2CppName: get_InconclusiveCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (NUnit::Framework::Internal::TestSuiteResult::*)()>(&NUnit::Framework::Internal::TestSuiteResult::get_InconclusiveCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::TestSuiteResult*), "get_InconclusiveCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::TestSuiteResult::get_HasChildren
// Il2CppName: get_HasChildren
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (NUnit::Framework::Internal::TestSuiteResult::*)()>(&NUnit::Framework::Internal::TestSuiteResult::get_HasChildren)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::TestSuiteResult*), "get_HasChildren", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::TestSuiteResult::get_Children
// Il2CppName: get_Children
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::NUnit::Framework::Interfaces::ITestResult*>* (NUnit::Framework::Internal::TestSuiteResult::*)()>(&NUnit::Framework::Internal::TestSuiteResult::get_Children)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::TestSuiteResult*), "get_Children", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
