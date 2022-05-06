// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVRTracker
#include "GlobalNamespace/OVRTracker.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRTracker::Frustum, "", "OVRTracker/Frustum");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: OVRTracker/Frustum
  // [TokenAttribute] Offset: FFFFFFFF
  struct OVRTracker::Frustum/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.Single nearZ
    // Size: 0x4
    // Offset: 0x0
    float nearZ;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single farZ
    // Size: 0x4
    // Offset: 0x4
    float farZ;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public UnityEngine.Vector2 fov
    // Size: 0x8
    // Offset: 0x8
    ::UnityEngine::Vector2 fov;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector2) == 0x8);
    public:
    // Creating value type constructor for type: Frustum
    constexpr Frustum(float nearZ_ = {}, float farZ_ = {}, ::UnityEngine::Vector2 fov_ = {}) noexcept : nearZ{nearZ_}, farZ{farZ_}, fov{fov_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public System.Single nearZ
    [[deprecated("Use field access instead!")]] float& dyn_nearZ();
    // Get instance field reference: public System.Single farZ
    [[deprecated("Use field access instead!")]] float& dyn_farZ();
    // Get instance field reference: public UnityEngine.Vector2 fov
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector2& dyn_fov();
  }; // OVRTracker/Frustum
  #pragma pack(pop)
  static check_size<sizeof(OVRTracker::Frustum), 8 + sizeof(::UnityEngine::Vector2)> __GlobalNamespace_OVRTracker_FrustumSizeCheck;
  static_assert(sizeof(OVRTracker::Frustum) == 0x10);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
