// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.TestTools.EnumerableSetUpTearDownCommand
#include "UnityEngine/TestTools/EnumerableSetUpTearDownCommand.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: MethodInfo
  class MethodInfo;
}
// Completed forward declares
// Type namespace: UnityEngine.TestTools
namespace UnityEngine::TestTools {
  // Autogenerated type: UnityEngine.TestTools.EnumerableSetUpTearDownCommand/<>c
  class EnumerableSetUpTearDownCommand::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly UnityEngine.TestTools.EnumerableSetUpTearDownCommand/<>c <>9
    static UnityEngine::TestTools::EnumerableSetUpTearDownCommand::$$c* _get_$$9();
    // Set static field: static public readonly UnityEngine.TestTools.EnumerableSetUpTearDownCommand/<>c <>9
    static void _set_$$9(UnityEngine::TestTools::EnumerableSetUpTearDownCommand::$$c* value);
    // Get static field: static public System.Func`2<System.Reflection.MethodInfo,System.Boolean> <>9__1_0
    static System::Func_2<System::Reflection::MethodInfo*, bool>* _get_$$9__1_0();
    // Set static field: static public System.Func`2<System.Reflection.MethodInfo,System.Boolean> <>9__1_0
    static void _set_$$9__1_0(System::Func_2<System::Reflection::MethodInfo*, bool>* value);
    // static private System.Void .cctor()
    // Offset: 0x10B97BC
    static void _cctor();
    // System.Boolean <GetMethodsWithAttributeFromFixture>b__1_0(System.Reflection.MethodInfo x)
    // Offset: 0x10B982C
    bool $GetMethodsWithAttributeFromFixture$b__1_0(System::Reflection::MethodInfo* x);
    // public System.Void .ctor()
    // Offset: 0x10B9824
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static EnumerableSetUpTearDownCommand::$$c* New_ctor();
  }; // UnityEngine.TestTools.EnumerableSetUpTearDownCommand/<>c
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TestTools::EnumerableSetUpTearDownCommand::$$c*, "UnityEngine.TestTools", "EnumerableSetUpTearDownCommand/<>c");
#pragma pack(pop)
