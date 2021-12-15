// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.Experimental.GlobalIllumination.LightMode
#include "UnityEngine/Experimental/GlobalIllumination/LightMode.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Including type: UnityEngine.Quaternion
#include "UnityEngine/Quaternion.hpp"
// Including type: UnityEngine.Experimental.GlobalIllumination.LinearColor
#include "UnityEngine/Experimental/GlobalIllumination/LinearColor.hpp"
// Including type: UnityEngine.Experimental.GlobalIllumination.FalloffType
#include "UnityEngine/Experimental/GlobalIllumination/FalloffType.hpp"
// Including type: UnityEngine.Experimental.GlobalIllumination.AngularFalloffType
#include "UnityEngine/Experimental/GlobalIllumination/AngularFalloffType.hpp"
// Completed includes
// Type namespace: UnityEngine.Experimental.GlobalIllumination
namespace UnityEngine::Experimental::GlobalIllumination {
  // Forward declaring type: SpotLight
  struct SpotLight;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Experimental::GlobalIllumination::SpotLight, "UnityEngine.Experimental.GlobalIllumination", "SpotLight");
// Type namespace: UnityEngine.Experimental.GlobalIllumination
namespace UnityEngine::Experimental::GlobalIllumination {
  // Size: 0x56
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.Experimental.GlobalIllumination.SpotLight
  // [TokenAttribute] Offset: FFFFFFFF
  struct SpotLight/*, public System::ValueType*/ {
    public:
    public:
    // public System.Int32 instanceID
    // Size: 0x4
    // Offset: 0x0
    int instanceID;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Boolean shadow
    // Size: 0x1
    // Offset: 0x4
    bool shadow;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public UnityEngine.Experimental.GlobalIllumination.LightMode mode
    // Size: 0x1
    // Offset: 0x5
    UnityEngine::Experimental::GlobalIllumination::LightMode mode;
    // Field size check
    static_assert(sizeof(UnityEngine::Experimental::GlobalIllumination::LightMode) == 0x1);
    // Padding between fields: mode and: position
    char __padding2[0x2] = {};
    // public UnityEngine.Vector3 position
    // Size: 0xC
    // Offset: 0x8
    UnityEngine::Vector3 position;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // public UnityEngine.Quaternion orientation
    // Size: 0x10
    // Offset: 0x14
    UnityEngine::Quaternion orientation;
    // Field size check
    static_assert(sizeof(UnityEngine::Quaternion) == 0x10);
    // public UnityEngine.Experimental.GlobalIllumination.LinearColor color
    // Size: 0x10
    // Offset: 0x24
    UnityEngine::Experimental::GlobalIllumination::LinearColor color;
    // Field size check
    static_assert(sizeof(UnityEngine::Experimental::GlobalIllumination::LinearColor) == 0x10);
    // public UnityEngine.Experimental.GlobalIllumination.LinearColor indirectColor
    // Size: 0x10
    // Offset: 0x34
    UnityEngine::Experimental::GlobalIllumination::LinearColor indirectColor;
    // Field size check
    static_assert(sizeof(UnityEngine::Experimental::GlobalIllumination::LinearColor) == 0x10);
    // public System.Single range
    // Size: 0x4
    // Offset: 0x44
    float range;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single sphereRadius
    // Size: 0x4
    // Offset: 0x48
    float sphereRadius;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single coneAngle
    // Size: 0x4
    // Offset: 0x4C
    float coneAngle;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single innerConeAngle
    // Size: 0x4
    // Offset: 0x50
    float innerConeAngle;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public UnityEngine.Experimental.GlobalIllumination.FalloffType falloff
    // Size: 0x1
    // Offset: 0x54
    UnityEngine::Experimental::GlobalIllumination::FalloffType falloff;
    // Field size check
    static_assert(sizeof(UnityEngine::Experimental::GlobalIllumination::FalloffType) == 0x1);
    // public UnityEngine.Experimental.GlobalIllumination.AngularFalloffType angularFalloff
    // Size: 0x1
    // Offset: 0x55
    UnityEngine::Experimental::GlobalIllumination::AngularFalloffType angularFalloff;
    // Field size check
    static_assert(sizeof(UnityEngine::Experimental::GlobalIllumination::AngularFalloffType) == 0x1);
    public:
    // Creating value type constructor for type: SpotLight
    constexpr SpotLight(int instanceID_ = {}, bool shadow_ = {}, UnityEngine::Experimental::GlobalIllumination::LightMode mode_ = {}, UnityEngine::Vector3 position_ = {}, UnityEngine::Quaternion orientation_ = {}, UnityEngine::Experimental::GlobalIllumination::LinearColor color_ = {}, UnityEngine::Experimental::GlobalIllumination::LinearColor indirectColor_ = {}, float range_ = {}, float sphereRadius_ = {}, float coneAngle_ = {}, float innerConeAngle_ = {}, UnityEngine::Experimental::GlobalIllumination::FalloffType falloff_ = {}, UnityEngine::Experimental::GlobalIllumination::AngularFalloffType angularFalloff_ = {}) noexcept : instanceID{instanceID_}, shadow{shadow_}, mode{mode_}, position{position_}, orientation{orientation_}, color{color_}, indirectColor{indirectColor_}, range{range_}, sphereRadius{sphereRadius_}, coneAngle{coneAngle_}, innerConeAngle{innerConeAngle_}, falloff{falloff_}, angularFalloff{angularFalloff_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Get instance field reference: public System.Int32 instanceID
    int& dyn_instanceID();
    // Get instance field reference: public System.Boolean shadow
    bool& dyn_shadow();
    // Get instance field reference: public UnityEngine.Experimental.GlobalIllumination.LightMode mode
    UnityEngine::Experimental::GlobalIllumination::LightMode& dyn_mode();
    // Get instance field reference: public UnityEngine.Vector3 position
    UnityEngine::Vector3& dyn_position();
    // Get instance field reference: public UnityEngine.Quaternion orientation
    UnityEngine::Quaternion& dyn_orientation();
    // Get instance field reference: public UnityEngine.Experimental.GlobalIllumination.LinearColor color
    UnityEngine::Experimental::GlobalIllumination::LinearColor& dyn_color();
    // Get instance field reference: public UnityEngine.Experimental.GlobalIllumination.LinearColor indirectColor
    UnityEngine::Experimental::GlobalIllumination::LinearColor& dyn_indirectColor();
    // Get instance field reference: public System.Single range
    float& dyn_range();
    // Get instance field reference: public System.Single sphereRadius
    float& dyn_sphereRadius();
    // Get instance field reference: public System.Single coneAngle
    float& dyn_coneAngle();
    // Get instance field reference: public System.Single innerConeAngle
    float& dyn_innerConeAngle();
    // Get instance field reference: public UnityEngine.Experimental.GlobalIllumination.FalloffType falloff
    UnityEngine::Experimental::GlobalIllumination::FalloffType& dyn_falloff();
    // Get instance field reference: public UnityEngine.Experimental.GlobalIllumination.AngularFalloffType angularFalloff
    UnityEngine::Experimental::GlobalIllumination::AngularFalloffType& dyn_angularFalloff();
  }; // UnityEngine.Experimental.GlobalIllumination.SpotLight
  #pragma pack(pop)
  static check_size<sizeof(SpotLight), 85 + sizeof(UnityEngine::Experimental::GlobalIllumination::AngularFalloffType)> __UnityEngine_Experimental_GlobalIllumination_SpotLightSizeCheck;
  static_assert(sizeof(SpotLight) == 0x56);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
