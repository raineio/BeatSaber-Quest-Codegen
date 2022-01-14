// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::TestTools::TestRunner
namespace UnityEngine::TestTools::TestRunner {
  // Forward declaring type: TestStartedEvent
  class TestStartedEvent;
  // Forward declaring type: TestFinishedEvent
  class TestFinishedEvent;
  // Forward declaring type: RunStartedEvent
  class RunStartedEvent;
  // Forward declaring type: RunFinishedEvent
  class RunFinishedEvent;
  // Forward declaring type: PlaymodeTestsControllerSettings
  class PlaymodeTestsControllerSettings;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: UnityEngine::TestRunner::NUnitExtensions::Runner
namespace UnityEngine::TestRunner::NUnitExtensions::Runner {
  // Forward declaring type: UnityTestAssemblyRunner
  class UnityTestAssemblyRunner;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: String
  class String;
}
// Completed forward declares
// Type namespace: UnityEngine.TestTools.TestRunner
namespace UnityEngine::TestTools::TestRunner {
  // Forward declaring type: PlaymodeTestsController
  class PlaymodeTestsController;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(UnityEngine::TestTools::TestRunner::PlaymodeTestsController);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TestTools::TestRunner::PlaymodeTestsController*, "UnityEngine.TestTools.TestRunner", "PlaymodeTestsController");
// Type namespace: UnityEngine.TestTools.TestRunner
namespace UnityEngine::TestTools::TestRunner {
  // Size: 0x58
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.TestTools.TestRunner.PlaymodeTestsController
  // [TokenAttribute] Offset: FFFFFFFF
  // [AddComponentMenu] Offset: F6B9B8
  class PlaymodeTestsController : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: UnityEngine::TestTools::TestRunner::PlaymodeTestsController::$Start$d__12
    class $Start$d__12;
    // Nested type: UnityEngine::TestTools::TestRunner::PlaymodeTestsController::$TestRunnerCoroutine$d__15
    class $TestRunnerCoroutine$d__15;
    // Nested type: UnityEngine::TestTools::TestRunner::PlaymodeTestsController::$$c
    class $$c;
    // Nested type: UnityEngine::TestTools::TestRunner::PlaymodeTestsController::$Run$d__16
    class $Run$d__16;
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private System.Collections.IEnumerator m_TestSteps
    // Size: 0x8
    // Offset: 0x18
    System::Collections::IEnumerator* m_TestSteps;
    // Field size check
    static_assert(sizeof(System::Collections::IEnumerator*) == 0x8);
    // private System.Collections.Generic.List`1<System.String> m_AssembliesWithTests
    // Size: 0x8
    // Offset: 0x20
    System::Collections::Generic::List_1<::StringW>* m_AssembliesWithTests;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<::StringW>*) == 0x8);
    // UnityEngine.TestTools.TestRunner.TestStartedEvent testStartedEvent
    // Size: 0x8
    // Offset: 0x28
    UnityEngine::TestTools::TestRunner::TestStartedEvent* testStartedEvent;
    // Field size check
    static_assert(sizeof(UnityEngine::TestTools::TestRunner::TestStartedEvent*) == 0x8);
    // UnityEngine.TestTools.TestRunner.TestFinishedEvent testFinishedEvent
    // Size: 0x8
    // Offset: 0x30
    UnityEngine::TestTools::TestRunner::TestFinishedEvent* testFinishedEvent;
    // Field size check
    static_assert(sizeof(UnityEngine::TestTools::TestRunner::TestFinishedEvent*) == 0x8);
    // UnityEngine.TestTools.TestRunner.RunStartedEvent runStartedEvent
    // Size: 0x8
    // Offset: 0x38
    UnityEngine::TestTools::TestRunner::RunStartedEvent* runStartedEvent;
    // Field size check
    static_assert(sizeof(UnityEngine::TestTools::TestRunner::RunStartedEvent*) == 0x8);
    // UnityEngine.TestTools.TestRunner.RunFinishedEvent runFinishedEvent
    // Size: 0x8
    // Offset: 0x40
    UnityEngine::TestTools::TestRunner::RunFinishedEvent* runFinishedEvent;
    // Field size check
    static_assert(sizeof(UnityEngine::TestTools::TestRunner::RunFinishedEvent*) == 0x8);
    // public UnityEngine.TestTools.TestRunner.PlaymodeTestsControllerSettings settings
    // Size: 0x8
    // Offset: 0x48
    UnityEngine::TestTools::TestRunner::PlaymodeTestsControllerSettings* settings;
    // Field size check
    static_assert(sizeof(UnityEngine::TestTools::TestRunner::PlaymodeTestsControllerSettings*) == 0x8);
    // UnityEngine.TestRunner.NUnitExtensions.Runner.UnityTestAssemblyRunner m_Runner
    // Size: 0x8
    // Offset: 0x50
    UnityEngine::TestRunner::NUnitExtensions::Runner::UnityTestAssemblyRunner* m_Runner;
    // Field size check
    static_assert(sizeof(UnityEngine::TestRunner::NUnitExtensions::Runner::UnityTestAssemblyRunner*) == 0x8);
    public:
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // static field const value: static System.String kPlaymodeTestControllerName
    static constexpr const char* kPlaymodeTestControllerName = "Code-based tests runner";
    // Get static field: static System.String kPlaymodeTestControllerName
    static ::StringW _get_kPlaymodeTestControllerName();
    // Set static field: static System.String kPlaymodeTestControllerName
    static void _set_kPlaymodeTestControllerName(::StringW value);
    // Get instance field reference: private System.Collections.IEnumerator m_TestSteps
    System::Collections::IEnumerator*& dyn_m_TestSteps();
    // Get instance field reference: private System.Collections.Generic.List`1<System.String> m_AssembliesWithTests
    System::Collections::Generic::List_1<::StringW>*& dyn_m_AssembliesWithTests();
    // Get instance field reference: UnityEngine.TestTools.TestRunner.TestStartedEvent testStartedEvent
    UnityEngine::TestTools::TestRunner::TestStartedEvent*& dyn_testStartedEvent();
    // Get instance field reference: UnityEngine.TestTools.TestRunner.TestFinishedEvent testFinishedEvent
    UnityEngine::TestTools::TestRunner::TestFinishedEvent*& dyn_testFinishedEvent();
    // Get instance field reference: UnityEngine.TestTools.TestRunner.RunStartedEvent runStartedEvent
    UnityEngine::TestTools::TestRunner::RunStartedEvent*& dyn_runStartedEvent();
    // Get instance field reference: UnityEngine.TestTools.TestRunner.RunFinishedEvent runFinishedEvent
    UnityEngine::TestTools::TestRunner::RunFinishedEvent*& dyn_runFinishedEvent();
    // Get instance field reference: public UnityEngine.TestTools.TestRunner.PlaymodeTestsControllerSettings settings
    UnityEngine::TestTools::TestRunner::PlaymodeTestsControllerSettings*& dyn_settings();
    // Get instance field reference: UnityEngine.TestRunner.NUnitExtensions.Runner.UnityTestAssemblyRunner m_Runner
    UnityEngine::TestRunner::NUnitExtensions::Runner::UnityTestAssemblyRunner*& dyn_m_Runner();
    // public System.Collections.Generic.List`1<System.String> get_AssembliesWithTests()
    // Offset: 0x16D6184
    System::Collections::Generic::List_1<::StringW>* get_AssembliesWithTests();
    // public System.Void set_AssembliesWithTests(System.Collections.Generic.List`1<System.String> value)
    // Offset: 0x16D618C
    void set_AssembliesWithTests(System::Collections::Generic::List_1<::StringW>* value);
    // public System.Collections.IEnumerator Start()
    // Offset: 0x16D6194
    System::Collections::IEnumerator* Start();
    // static System.Boolean IsControllerOnScene()
    // Offset: 0x16D6230
    static bool IsControllerOnScene();
    // static UnityEngine.TestTools.TestRunner.PlaymodeTestsController GetController()
    // Offset: 0x16D62B4
    static UnityEngine::TestTools::TestRunner::PlaymodeTestsController* GetController();
    // public System.Collections.IEnumerator TestRunnerCoroutine()
    // Offset: 0x16D6318
    System::Collections::IEnumerator* TestRunnerCoroutine();
    // public System.Collections.IEnumerator Run()
    // Offset: 0x16D63B4
    System::Collections::IEnumerator* Run();
    // public System.Void Cleanup()
    // Offset: 0x16D6450
    void Cleanup();
    // static public System.Void TryCleanup()
    // Offset: 0x16D6514
    static void TryCleanup();
    // public System.Void .ctor()
    // Offset: 0x16D65A8
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlaymodeTestsController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::TestTools::TestRunner::PlaymodeTestsController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlaymodeTestsController*, creationType>()));
    }
  }; // UnityEngine.TestTools.TestRunner.PlaymodeTestsController
  #pragma pack(pop)
  static check_size<sizeof(PlaymodeTestsController), 80 + sizeof(UnityEngine::TestRunner::NUnitExtensions::Runner::UnityTestAssemblyRunner*)> __UnityEngine_TestTools_TestRunner_PlaymodeTestsControllerSizeCheck;
  static_assert(sizeof(PlaymodeTestsController) == 0x58);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::TestTools::TestRunner::PlaymodeTestsController::get_AssembliesWithTests
// Il2CppName: get_AssembliesWithTests
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::List_1<::StringW>* (UnityEngine::TestTools::TestRunner::PlaymodeTestsController::*)()>(&UnityEngine::TestTools::TestRunner::PlaymodeTestsController::get_AssembliesWithTests)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::TestRunner::PlaymodeTestsController*), "get_AssembliesWithTests", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestTools::TestRunner::PlaymodeTestsController::set_AssembliesWithTests
// Il2CppName: set_AssembliesWithTests
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TestTools::TestRunner::PlaymodeTestsController::*)(System::Collections::Generic::List_1<::StringW>*)>(&UnityEngine::TestTools::TestRunner::PlaymodeTestsController::set_AssembliesWithTests)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::TestRunner::PlaymodeTestsController*), "set_AssembliesWithTests", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestTools::TestRunner::PlaymodeTestsController::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerator* (UnityEngine::TestTools::TestRunner::PlaymodeTestsController::*)()>(&UnityEngine::TestTools::TestRunner::PlaymodeTestsController::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::TestRunner::PlaymodeTestsController*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestTools::TestRunner::PlaymodeTestsController::IsControllerOnScene
// Il2CppName: IsControllerOnScene
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&UnityEngine::TestTools::TestRunner::PlaymodeTestsController::IsControllerOnScene)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::TestRunner::PlaymodeTestsController*), "IsControllerOnScene", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestTools::TestRunner::PlaymodeTestsController::GetController
// Il2CppName: GetController
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::TestTools::TestRunner::PlaymodeTestsController* (*)()>(&UnityEngine::TestTools::TestRunner::PlaymodeTestsController::GetController)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::TestRunner::PlaymodeTestsController*), "GetController", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestTools::TestRunner::PlaymodeTestsController::TestRunnerCoroutine
// Il2CppName: TestRunnerCoroutine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerator* (UnityEngine::TestTools::TestRunner::PlaymodeTestsController::*)()>(&UnityEngine::TestTools::TestRunner::PlaymodeTestsController::TestRunnerCoroutine)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::TestRunner::PlaymodeTestsController*), "TestRunnerCoroutine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestTools::TestRunner::PlaymodeTestsController::Run
// Il2CppName: Run
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerator* (UnityEngine::TestTools::TestRunner::PlaymodeTestsController::*)()>(&UnityEngine::TestTools::TestRunner::PlaymodeTestsController::Run)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::TestRunner::PlaymodeTestsController*), "Run", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestTools::TestRunner::PlaymodeTestsController::Cleanup
// Il2CppName: Cleanup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TestTools::TestRunner::PlaymodeTestsController::*)()>(&UnityEngine::TestTools::TestRunner::PlaymodeTestsController::Cleanup)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::TestRunner::PlaymodeTestsController*), "Cleanup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestTools::TestRunner::PlaymodeTestsController::TryCleanup
// Il2CppName: TryCleanup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::TestTools::TestRunner::PlaymodeTestsController::TryCleanup)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::TestRunner::PlaymodeTestsController*), "TryCleanup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestTools::TestRunner::PlaymodeTestsController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
