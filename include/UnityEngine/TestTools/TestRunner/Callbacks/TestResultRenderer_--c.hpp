// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.TestTools.TestRunner.Callbacks.TestResultRenderer
#include "UnityEngine/TestTools/TestRunner/Callbacks/TestResultRenderer.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Forward declaring namespace: NUnit::Framework::Interfaces
namespace NUnit::Framework::Interfaces {
  // Forward declaring type: ITestResult
  class ITestResult;
}
// Completed forward declares
// Type namespace: UnityEngine.TestTools.TestRunner.Callbacks
namespace UnityEngine::TestTools::TestRunner::Callbacks {
  // Autogenerated type: UnityEngine.TestTools.TestRunner.Callbacks.TestResultRenderer/<>c
  class TestResultRenderer::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly UnityEngine.TestTools.TestRunner.Callbacks.TestResultRenderer/<>c <>9
    static UnityEngine::TestTools::TestRunner::Callbacks::TestResultRenderer::$$c* _get_$$9();
    // Set static field: static public readonly UnityEngine.TestTools.TestRunner.Callbacks.TestResultRenderer/<>c <>9
    static void _set_$$9(UnityEngine::TestTools::TestRunner::Callbacks::TestResultRenderer::$$c* value);
    // Get static field: static public System.Func`2<NUnit.Framework.Interfaces.ITestResult,System.String> <>9__8_0
    static System::Func_2<NUnit::Framework::Interfaces::ITestResult*, ::Il2CppString*>* _get_$$9__8_0();
    // Set static field: static public System.Func`2<NUnit.Framework.Interfaces.ITestResult,System.String> <>9__8_0
    static void _set_$$9__8_0(System::Func_2<NUnit::Framework::Interfaces::ITestResult*, ::Il2CppString*>* value);
    // static private System.Void .cctor()
    // Offset: 0x10BF5CC
    static void _cctor();
    // System.String <Draw>b__8_0(NUnit.Framework.Interfaces.ITestResult result)
    // Offset: 0x10BF63C
    ::Il2CppString* $Draw$b__8_0(NUnit::Framework::Interfaces::ITestResult* result);
    // public System.Void .ctor()
    // Offset: 0x10BF634
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static TestResultRenderer::$$c* New_ctor();
  }; // UnityEngine.TestTools.TestRunner.Callbacks.TestResultRenderer/<>c
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TestTools::TestRunner::Callbacks::TestResultRenderer::$$c*, "UnityEngine.TestTools.TestRunner.Callbacks", "TestResultRenderer/<>c");
#pragma pack(pop)
