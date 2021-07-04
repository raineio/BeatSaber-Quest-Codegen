// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::TestTools::TestRunner::Callbacks
namespace UnityEngine::TestTools::TestRunner::Callbacks {
  // Forward declaring type: TestResultRenderer
  class TestResultRenderer;
}
// Forward declaring namespace: NUnit::Framework::Interfaces
namespace NUnit::Framework::Interfaces {
  // Forward declaring type: ITest
  class ITest;
  // Forward declaring type: ITestResult
  class ITestResult;
}
// Completed forward declares
// Type namespace: UnityEngine.TestTools.TestRunner.Callbacks
namespace UnityEngine::TestTools::TestRunner::Callbacks {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.TestTools.TestRunner.Callbacks.TestResultRendererCallback
  class TestResultRendererCallback : public UnityEngine::MonoBehaviour {
    public:
    // private UnityEngine.TestTools.TestRunner.Callbacks.TestResultRenderer m_ResultRenderer
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::TestTools::TestRunner::Callbacks::TestResultRenderer* m_ResultRenderer;
    // Field size check
    static_assert(sizeof(UnityEngine::TestTools::TestRunner::Callbacks::TestResultRenderer*) == 0x8);
    // Creating value type constructor for type: TestResultRendererCallback
    TestResultRendererCallback(UnityEngine::TestTools::TestRunner::Callbacks::TestResultRenderer* m_ResultRenderer_ = {}) noexcept : m_ResultRenderer{m_ResultRenderer_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Void RunStarted(NUnit.Framework.Interfaces.ITest testsToRun)
    // Offset: 0x14BC5E4
    void RunStarted(NUnit::Framework::Interfaces::ITest* testsToRun);
    // public System.Void RunFinished(NUnit.Framework.Interfaces.ITestResult testResults)
    // Offset: 0x14BC5E8
    void RunFinished(NUnit::Framework::Interfaces::ITestResult* testResults);
    // public System.Void OnGUI()
    // Offset: 0x14BC6D0
    void OnGUI();
    // public System.Void TestStarted(NUnit.Framework.Interfaces.ITest test)
    // Offset: 0x14BC6E0
    void TestStarted(NUnit::Framework::Interfaces::ITest* test);
    // public System.Void TestFinished(NUnit.Framework.Interfaces.ITestResult result)
    // Offset: 0x14BC6E4
    void TestFinished(NUnit::Framework::Interfaces::ITestResult* result);
    // public System.Void .ctor()
    // Offset: 0x14BC6E8
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TestResultRendererCallback* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::TestTools::TestRunner::Callbacks::TestResultRendererCallback::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TestResultRendererCallback*, creationType>()));
    }
  }; // UnityEngine.TestTools.TestRunner.Callbacks.TestResultRendererCallback
  #pragma pack(pop)
  static check_size<sizeof(TestResultRendererCallback), 24 + sizeof(UnityEngine::TestTools::TestRunner::Callbacks::TestResultRenderer*)> __UnityEngine_TestTools_TestRunner_Callbacks_TestResultRendererCallbackSizeCheck;
  static_assert(sizeof(TestResultRendererCallback) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TestTools::TestRunner::Callbacks::TestResultRendererCallback*, "UnityEngine.TestTools.TestRunner.Callbacks", "TestResultRendererCallback");
// Writing MetadataGetter for method: UnityEngine::TestTools::TestRunner::Callbacks::TestResultRendererCallback::RunStarted
// Il2CppName: RunStarted
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TestTools::TestRunner::Callbacks::TestResultRendererCallback::*)(NUnit::Framework::Interfaces::ITest*)>(&UnityEngine::TestTools::TestRunner::Callbacks::TestResultRendererCallback::RunStarted)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::TestRunner::Callbacks::TestResultRendererCallback*), "RunStarted", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<NUnit::Framework::Interfaces::ITest*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestTools::TestRunner::Callbacks::TestResultRendererCallback::RunFinished
// Il2CppName: RunFinished
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TestTools::TestRunner::Callbacks::TestResultRendererCallback::*)(NUnit::Framework::Interfaces::ITestResult*)>(&UnityEngine::TestTools::TestRunner::Callbacks::TestResultRendererCallback::RunFinished)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::TestRunner::Callbacks::TestResultRendererCallback*), "RunFinished", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<NUnit::Framework::Interfaces::ITestResult*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestTools::TestRunner::Callbacks::TestResultRendererCallback::OnGUI
// Il2CppName: OnGUI
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TestTools::TestRunner::Callbacks::TestResultRendererCallback::*)()>(&UnityEngine::TestTools::TestRunner::Callbacks::TestResultRendererCallback::OnGUI)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::TestRunner::Callbacks::TestResultRendererCallback*), "OnGUI", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestTools::TestRunner::Callbacks::TestResultRendererCallback::TestStarted
// Il2CppName: TestStarted
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TestTools::TestRunner::Callbacks::TestResultRendererCallback::*)(NUnit::Framework::Interfaces::ITest*)>(&UnityEngine::TestTools::TestRunner::Callbacks::TestResultRendererCallback::TestStarted)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::TestRunner::Callbacks::TestResultRendererCallback*), "TestStarted", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<NUnit::Framework::Interfaces::ITest*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestTools::TestRunner::Callbacks::TestResultRendererCallback::TestFinished
// Il2CppName: TestFinished
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TestTools::TestRunner::Callbacks::TestResultRendererCallback::*)(NUnit::Framework::Interfaces::ITestResult*)>(&UnityEngine::TestTools::TestRunner::Callbacks::TestResultRendererCallback::TestFinished)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::TestRunner::Callbacks::TestResultRendererCallback*), "TestFinished", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<NUnit::Framework::Interfaces::ITestResult*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestTools::TestRunner::Callbacks::TestResultRendererCallback::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
