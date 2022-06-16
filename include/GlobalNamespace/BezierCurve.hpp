// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: BezierCurve
  struct BezierCurve;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BezierCurve, "", "BezierCurve");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: BezierCurve
  // [TokenAttribute] Offset: FFFFFFFF
  // [IsReadOnlyAttribute] Offset: FFFFFFFF
  struct BezierCurve/*, public ::System::ValueType*/ {
    public:
    public:
    // public readonly UnityEngine.Vector3 p0
    // Size: 0xC
    // Offset: 0x0
    ::UnityEngine::Vector3 p0;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // public readonly UnityEngine.Vector3 p1
    // Size: 0xC
    // Offset: 0xC
    ::UnityEngine::Vector3 p1;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // public readonly UnityEngine.Vector3 p2
    // Size: 0xC
    // Offset: 0x18
    ::UnityEngine::Vector3 p2;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // public readonly UnityEngine.Vector3 p3
    // Size: 0xC
    // Offset: 0x24
    ::UnityEngine::Vector3 p3;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    public:
    // Creating value type constructor for type: BezierCurve
    constexpr BezierCurve(::UnityEngine::Vector3 p0_ = {}, ::UnityEngine::Vector3 p1_ = {}, ::UnityEngine::Vector3 p2_ = {}, ::UnityEngine::Vector3 p3_ = {}) noexcept : p0{p0_}, p1{p1_}, p2{p2_}, p3{p3_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: i_ValueType
    inline ::System::ValueType* i_ValueType() noexcept {
      return reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public readonly UnityEngine.Vector3 p0
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_p0();
    // Get instance field reference: public readonly UnityEngine.Vector3 p1
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_p1();
    // Get instance field reference: public readonly UnityEngine.Vector3 p2
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_p2();
    // Get instance field reference: public readonly UnityEngine.Vector3 p3
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_p3();
    // public System.Void .ctor(UnityEngine.Vector3 p0, UnityEngine.Vector3 p1, UnityEngine.Vector3 p2, UnityEngine.Vector3 p3)
    // Offset: 0x13322BC
    // ABORTED: conflicts with another method.  BezierCurve(::UnityEngine::Vector3 p0, ::UnityEngine::Vector3 p1, ::UnityEngine::Vector3 p2, ::UnityEngine::Vector3 p3);
  }; // BezierCurve
  #pragma pack(pop)
  static check_size<sizeof(BezierCurve), 36 + sizeof(::UnityEngine::Vector3)> __GlobalNamespace_BezierCurveSizeCheck;
  static_assert(sizeof(BezierCurve) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BezierCurve::BezierCurve
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
