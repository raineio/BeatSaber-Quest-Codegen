// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVRPlugin
#include "GlobalNamespace/OVRPlugin.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: OVRPlugin/Vector2f
#include "GlobalNamespace/OVRPlugin_Vector2f.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRPlugin::ControllerState, "", "OVRPlugin/ControllerState");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: OVRPlugin/ControllerState
  // [TokenAttribute] Offset: FFFFFFFF
  struct OVRPlugin::ControllerState/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.UInt32 ConnectedControllers
    // Size: 0x4
    // Offset: 0x0
    uint ConnectedControllers;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // public System.UInt32 Buttons
    // Size: 0x4
    // Offset: 0x4
    uint Buttons;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // public System.UInt32 Touches
    // Size: 0x4
    // Offset: 0x8
    uint Touches;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // public System.UInt32 NearTouches
    // Size: 0x4
    // Offset: 0xC
    uint NearTouches;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // public System.Single LIndexTrigger
    // Size: 0x4
    // Offset: 0x10
    float LIndexTrigger;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single RIndexTrigger
    // Size: 0x4
    // Offset: 0x14
    float RIndexTrigger;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single LHandTrigger
    // Size: 0x4
    // Offset: 0x18
    float LHandTrigger;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single RHandTrigger
    // Size: 0x4
    // Offset: 0x1C
    float RHandTrigger;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public OVRPlugin/Vector2f LThumbstick
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::OVRPlugin::Vector2f LThumbstick;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::OVRPlugin::Vector2f) == 0x8);
    // public OVRPlugin/Vector2f RThumbstick
    // Size: 0x8
    // Offset: 0x28
    ::GlobalNamespace::OVRPlugin::Vector2f RThumbstick;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::OVRPlugin::Vector2f) == 0x8);
    public:
    // Creating value type constructor for type: ControllerState
    constexpr ControllerState(uint ConnectedControllers_ = {}, uint Buttons_ = {}, uint Touches_ = {}, uint NearTouches_ = {}, float LIndexTrigger_ = {}, float RIndexTrigger_ = {}, float LHandTrigger_ = {}, float RHandTrigger_ = {}, ::GlobalNamespace::OVRPlugin::Vector2f LThumbstick_ = {}, ::GlobalNamespace::OVRPlugin::Vector2f RThumbstick_ = {}) noexcept : ConnectedControllers{ConnectedControllers_}, Buttons{Buttons_}, Touches{Touches_}, NearTouches{NearTouches_}, LIndexTrigger{LIndexTrigger_}, RIndexTrigger{RIndexTrigger_}, LHandTrigger{LHandTrigger_}, RHandTrigger{RHandTrigger_}, LThumbstick{LThumbstick_}, RThumbstick{RThumbstick_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public System.UInt32 ConnectedControllers
    [[deprecated("Use field access instead!")]] uint& dyn_ConnectedControllers();
    // Get instance field reference: public System.UInt32 Buttons
    [[deprecated("Use field access instead!")]] uint& dyn_Buttons();
    // Get instance field reference: public System.UInt32 Touches
    [[deprecated("Use field access instead!")]] uint& dyn_Touches();
    // Get instance field reference: public System.UInt32 NearTouches
    [[deprecated("Use field access instead!")]] uint& dyn_NearTouches();
    // Get instance field reference: public System.Single LIndexTrigger
    [[deprecated("Use field access instead!")]] float& dyn_LIndexTrigger();
    // Get instance field reference: public System.Single RIndexTrigger
    [[deprecated("Use field access instead!")]] float& dyn_RIndexTrigger();
    // Get instance field reference: public System.Single LHandTrigger
    [[deprecated("Use field access instead!")]] float& dyn_LHandTrigger();
    // Get instance field reference: public System.Single RHandTrigger
    [[deprecated("Use field access instead!")]] float& dyn_RHandTrigger();
    // Get instance field reference: public OVRPlugin/Vector2f LThumbstick
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::OVRPlugin::Vector2f& dyn_LThumbstick();
    // Get instance field reference: public OVRPlugin/Vector2f RThumbstick
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::OVRPlugin::Vector2f& dyn_RThumbstick();
  }; // OVRPlugin/ControllerState
  #pragma pack(pop)
  static check_size<sizeof(OVRPlugin::ControllerState), 40 + sizeof(::GlobalNamespace::OVRPlugin::Vector2f)> __GlobalNamespace_OVRPlugin_ControllerStateSizeCheck;
  static_assert(sizeof(OVRPlugin::ControllerState) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
