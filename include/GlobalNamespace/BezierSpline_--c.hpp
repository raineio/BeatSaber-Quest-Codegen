// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: BezierSpline
#include "GlobalNamespace/BezierSpline.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Comparison`1<T>
  template<typename T>
  class Comparison_1;
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: BezierSpline/<>c
  class BezierSpline::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly BezierSpline/<>c <>9
    static GlobalNamespace::BezierSpline::$$c* _get_$$9();
    // Set static field: static public readonly BezierSpline/<>c <>9
    static void _set_$$9(GlobalNamespace::BezierSpline::$$c* value);
    // Get static field: static public System.Comparison`1<UnityEngine.Vector3> <>9__6_0
    static System::Comparison_1<UnityEngine::Vector3>* _get_$$9__6_0();
    // Set static field: static public System.Comparison`1<UnityEngine.Vector3> <>9__6_0
    static void _set_$$9__6_0(System::Comparison_1<UnityEngine::Vector3>* value);
    // Get static field: static public System.Func`2<UnityEngine.Vector3,System.Single> <>9__8_0
    static System::Func_2<UnityEngine::Vector3, float>* _get_$$9__8_0();
    // Set static field: static public System.Func`2<UnityEngine.Vector3,System.Single> <>9__8_0
    static void _set_$$9__8_0(System::Func_2<UnityEngine::Vector3, float>* value);
    // Get static field: static public System.Func`2<UnityEngine.Vector3,System.Single> <>9__8_1
    static System::Func_2<UnityEngine::Vector3, float>* _get_$$9__8_1();
    // Set static field: static public System.Func`2<UnityEngine.Vector3,System.Single> <>9__8_1
    static void _set_$$9__8_1(System::Func_2<UnityEngine::Vector3, float>* value);
    // Get static field: static public System.Func`2<UnityEngine.Vector3,System.Single> <>9__8_2
    static System::Func_2<UnityEngine::Vector3, float>* _get_$$9__8_2();
    // Set static field: static public System.Func`2<UnityEngine.Vector3,System.Single> <>9__8_2
    static void _set_$$9__8_2(System::Func_2<UnityEngine::Vector3, float>* value);
    // static private System.Void .cctor()
    // Offset: 0x1A2DFF0
    static void _cctor();
    // System.Int32 <SortSourceData>b__6_0(UnityEngine.Vector3 point1, UnityEngine.Vector3 point2)
    // Offset: 0x1A2E060
    int $SortSourceData$b__6_0(UnityEngine::Vector3 point1, UnityEngine::Vector3 point2);
    // System.Single <ComputeControlPoints>b__8_0(UnityEngine.Vector3 p)
    // Offset: 0x1A2E094
    float $ComputeControlPoints$b__8_0(UnityEngine::Vector3 p);
    // System.Single <ComputeControlPoints>b__8_1(UnityEngine.Vector3 p)
    // Offset: 0x1A2E098
    float $ComputeControlPoints$b__8_1(UnityEngine::Vector3 p);
    // System.Single <ComputeControlPoints>b__8_2(UnityEngine.Vector3 p)
    // Offset: 0x1A2E0A0
    float $ComputeControlPoints$b__8_2(UnityEngine::Vector3 p);
    // public System.Void .ctor()
    // Offset: 0x1A2E058
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static BezierSpline::$$c* New_ctor();
  }; // BezierSpline/<>c
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BezierSpline::$$c*, "", "BezierSpline/<>c");
#pragma pack(pop)