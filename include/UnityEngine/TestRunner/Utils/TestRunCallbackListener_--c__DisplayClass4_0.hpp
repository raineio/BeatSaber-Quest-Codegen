// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.TestRunner.Utils.TestRunCallbackListener
#include "UnityEngine/TestRunner/Utils/TestRunCallbackListener.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: NUnit::Framework::Interfaces
namespace NUnit::Framework::Interfaces {
  // Forward declaring type: ITestResult
  class ITestResult;
}
// Forward declaring namespace: UnityEngine::TestRunner
namespace UnityEngine::TestRunner {
  // Forward declaring type: ITestRunCallback
  class ITestRunCallback;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::TestRunner::Utils::TestRunCallbackListener::$$c__DisplayClass4_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TestRunner::Utils::TestRunCallbackListener::$$c__DisplayClass4_0*, "UnityEngine.TestRunner.Utils", "TestRunCallbackListener/<>c__DisplayClass4_0");
// Type namespace: UnityEngine.TestRunner.Utils
namespace UnityEngine::TestRunner::Utils {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.TestRunner.Utils.TestRunCallbackListener/UnityEngine.TestRunner.Utils.<>c__DisplayClass4_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class TestRunCallbackListener::$$c__DisplayClass4_0 : public ::Il2CppObject {
    public:
    public:
    // public NUnit.Framework.Interfaces.ITestResult testResults
    // Size: 0x8
    // Offset: 0x10
    ::NUnit::Framework::Interfaces::ITestResult* testResults;
    // Field size check
    static_assert(sizeof(::NUnit::Framework::Interfaces::ITestResult*) == 0x8);
    public:
    // Creating conversion operator: operator ::NUnit::Framework::Interfaces::ITestResult*
    constexpr operator ::NUnit::Framework::Interfaces::ITestResult*() const noexcept {
      return testResults;
    }
    // Get instance field reference: public NUnit.Framework.Interfaces.ITestResult testResults
    [[deprecated("Use field access instead!")]] ::NUnit::Framework::Interfaces::ITestResult*& dyn_testResults();
    // public System.Void .ctor()
    // Offset: 0x19B7400
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TestRunCallbackListener::$$c__DisplayClass4_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::TestRunner::Utils::TestRunCallbackListener::$$c__DisplayClass4_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TestRunCallbackListener::$$c__DisplayClass4_0*, creationType>()));
    }
    // System.Void <RunFinished>b__0(UnityEngine.TestRunner.ITestRunCallback callback)
    // Offset: 0x19B78DC
    void $RunFinished$b__0(::UnityEngine::TestRunner::ITestRunCallback* callback);
  }; // UnityEngine.TestRunner.Utils.TestRunCallbackListener/UnityEngine.TestRunner.Utils.<>c__DisplayClass4_0
  #pragma pack(pop)
  static check_size<sizeof(TestRunCallbackListener::$$c__DisplayClass4_0), 16 + sizeof(::NUnit::Framework::Interfaces::ITestResult*)> __UnityEngine_TestRunner_Utils_TestRunCallbackListener_$$c__DisplayClass4_0SizeCheck;
  static_assert(sizeof(TestRunCallbackListener::$$c__DisplayClass4_0) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::TestRunner::Utils::TestRunCallbackListener::$$c__DisplayClass4_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::TestRunner::Utils::TestRunCallbackListener::$$c__DisplayClass4_0::$RunFinished$b__0
// Il2CppName: <RunFinished>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TestRunner::Utils::TestRunCallbackListener::$$c__DisplayClass4_0::*)(::UnityEngine::TestRunner::ITestRunCallback*)>(&UnityEngine::TestRunner::Utils::TestRunCallbackListener::$$c__DisplayClass4_0::$RunFinished$b__0)> {
  static const MethodInfo* get() {
    static auto* callback = &::il2cpp_utils::GetClassFromName("UnityEngine.TestRunner", "ITestRunCallback")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestRunner::Utils::TestRunCallbackListener::$$c__DisplayClass4_0*), "<RunFinished>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{callback});
  }
};
