// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: NUnit.Framework.Interfaces.ITestListener
#include "NUnit/Framework/Interfaces/ITestListener.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::TestTools::TestRunner
namespace UnityEngine::TestTools::TestRunner {
  // Forward declaring type: TestFinishedEvent
  class TestFinishedEvent;
  // Forward declaring type: TestStartedEvent
  class TestStartedEvent;
}
// Forward declaring namespace: NUnit::Framework::Interfaces
namespace NUnit::Framework::Interfaces {
  // Forward declaring type: ITest
  class ITest;
  // Forward declaring type: ITestResult
  class ITestResult;
  // Forward declaring type: TestOutput
  class TestOutput;
}
// Completed forward declares
// Type namespace: UnityEngine.TestTools.TestRunner
namespace UnityEngine::TestTools::TestRunner {
  // Forward declaring type: TestListenerWrapper
  class TestListenerWrapper;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::TestTools::TestRunner::TestListenerWrapper);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TestTools::TestRunner::TestListenerWrapper*, "UnityEngine.TestTools.TestRunner", "TestListenerWrapper");
// Type namespace: UnityEngine.TestTools.TestRunner
namespace UnityEngine::TestTools::TestRunner {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.TestTools.TestRunner.TestListenerWrapper
  // [TokenAttribute] Offset: FFFFFFFF
  class TestListenerWrapper : public ::Il2CppObject/*, public ::NUnit::Framework::Interfaces::ITestListener*/ {
    public:
    public:
    // private readonly UnityEngine.TestTools.TestRunner.TestFinishedEvent m_TestFinishedEvent
    // Size: 0x8
    // Offset: 0x10
    ::UnityEngine::TestTools::TestRunner::TestFinishedEvent* m_TestFinishedEvent;
    // Field size check
    static_assert(sizeof(::UnityEngine::TestTools::TestRunner::TestFinishedEvent*) == 0x8);
    // private readonly UnityEngine.TestTools.TestRunner.TestStartedEvent m_TestStartedEvent
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::TestTools::TestRunner::TestStartedEvent* m_TestStartedEvent;
    // Field size check
    static_assert(sizeof(::UnityEngine::TestTools::TestRunner::TestStartedEvent*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::NUnit::Framework::Interfaces::ITestListener
    operator ::NUnit::Framework::Interfaces::ITestListener() noexcept {
      return *reinterpret_cast<::NUnit::Framework::Interfaces::ITestListener*>(this);
    }
    // Get instance field reference: private readonly UnityEngine.TestTools.TestRunner.TestFinishedEvent m_TestFinishedEvent
    [[deprecated("Use field access instead!")]] ::UnityEngine::TestTools::TestRunner::TestFinishedEvent*& dyn_m_TestFinishedEvent();
    // Get instance field reference: private readonly UnityEngine.TestTools.TestRunner.TestStartedEvent m_TestStartedEvent
    [[deprecated("Use field access instead!")]] ::UnityEngine::TestTools::TestRunner::TestStartedEvent*& dyn_m_TestStartedEvent();
    // public System.Void .ctor(UnityEngine.TestTools.TestRunner.TestStartedEvent testStartedEvent, UnityEngine.TestTools.TestRunner.TestFinishedEvent testFinishedEvent)
    // Offset: 0x2AC5F6C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TestListenerWrapper* New_ctor(::UnityEngine::TestTools::TestRunner::TestStartedEvent* testStartedEvent, ::UnityEngine::TestTools::TestRunner::TestFinishedEvent* testFinishedEvent) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::TestTools::TestRunner::TestListenerWrapper::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TestListenerWrapper*, creationType>(testStartedEvent, testFinishedEvent)));
    }
    // public System.Void TestStarted(NUnit.Framework.Interfaces.ITest test)
    // Offset: 0x2AC5FA4
    void TestStarted(::NUnit::Framework::Interfaces::ITest* test);
    // public System.Void TestFinished(NUnit.Framework.Interfaces.ITestResult result)
    // Offset: 0x2AC600C
    void TestFinished(::NUnit::Framework::Interfaces::ITestResult* result);
    // public System.Void TestOutput(NUnit.Framework.Interfaces.TestOutput output)
    // Offset: 0x2AC6074
    void TestOutput(::NUnit::Framework::Interfaces::TestOutput* output);
  }; // UnityEngine.TestTools.TestRunner.TestListenerWrapper
  #pragma pack(pop)
  static check_size<sizeof(TestListenerWrapper), 24 + sizeof(::UnityEngine::TestTools::TestRunner::TestStartedEvent*)> __UnityEngine_TestTools_TestRunner_TestListenerWrapperSizeCheck;
  static_assert(sizeof(TestListenerWrapper) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::TestTools::TestRunner::TestListenerWrapper::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::TestTools::TestRunner::TestListenerWrapper::TestStarted
// Il2CppName: TestStarted
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TestTools::TestRunner::TestListenerWrapper::*)(::NUnit::Framework::Interfaces::ITest*)>(&UnityEngine::TestTools::TestRunner::TestListenerWrapper::TestStarted)> {
  static const MethodInfo* get() {
    static auto* test = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Interfaces", "ITest")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::TestRunner::TestListenerWrapper*), "TestStarted", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{test});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestTools::TestRunner::TestListenerWrapper::TestFinished
// Il2CppName: TestFinished
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TestTools::TestRunner::TestListenerWrapper::*)(::NUnit::Framework::Interfaces::ITestResult*)>(&UnityEngine::TestTools::TestRunner::TestListenerWrapper::TestFinished)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Interfaces", "ITestResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::TestRunner::TestListenerWrapper*), "TestFinished", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestTools::TestRunner::TestListenerWrapper::TestOutput
// Il2CppName: TestOutput
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TestTools::TestRunner::TestListenerWrapper::*)(::NUnit::Framework::Interfaces::TestOutput*)>(&UnityEngine::TestTools::TestRunner::TestListenerWrapper::TestOutput)> {
  static const MethodInfo* get() {
    static auto* output = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Interfaces", "TestOutput")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::TestRunner::TestListenerWrapper*), "TestOutput", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{output});
  }
};
