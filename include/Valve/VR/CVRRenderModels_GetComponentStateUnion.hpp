// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Valve.VR.CVRRenderModels
#include "Valve/VR/CVRRenderModels.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: Valve.VR.IVRRenderModels
#include "Valve/VR/IVRRenderModels.hpp"
// Completed includes
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::CVRRenderModels::GetComponentStateUnion, "Valve.VR", "CVRRenderModels/GetComponentStateUnion");
// Type namespace: Valve.VR
namespace Valve::VR {
  // WARNING Size may be invalid!
  // WARNING Layout: Explicit may not be correctly taken into account!
  // Autogenerated type: Valve.VR.CVRRenderModels/Valve.VR.GetComponentStateUnion
  // [TokenAttribute] Offset: FFFFFFFF
  struct CVRRenderModels::GetComponentStateUnion/*, public System::ValueType*/ {
    public:
    public:
    // public Valve.VR.IVRRenderModels/Valve.VR._GetComponentState pGetComponentState
    // Size: 0x8
    // Offset: 0x0
    Valve::VR::IVRRenderModels::_GetComponentState* pGetComponentState;
    // Field size check
    static_assert(sizeof(Valve::VR::IVRRenderModels::_GetComponentState*) == 0x8);
    // public Valve.VR.CVRRenderModels/Valve.VR._GetComponentStatePacked pGetComponentStatePacked
    // Size: 0x8
    // Offset: 0x0
    Valve::VR::CVRRenderModels::_GetComponentStatePacked* pGetComponentStatePacked;
    // Field size check
    static_assert(sizeof(Valve::VR::CVRRenderModels::_GetComponentStatePacked*) == 0x8);
    public:
    // Creating value type constructor for type: GetComponentStateUnion
    constexpr GetComponentStateUnion(Valve::VR::IVRRenderModels::_GetComponentState* pGetComponentState_ = {}, Valve::VR::CVRRenderModels::_GetComponentStatePacked* pGetComponentStatePacked_ = {}) noexcept : pGetComponentState{pGetComponentState_}, pGetComponentStatePacked{pGetComponentStatePacked_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Get instance field reference: public Valve.VR.IVRRenderModels/Valve.VR._GetComponentState pGetComponentState
    Valve::VR::IVRRenderModels::_GetComponentState*& dyn_pGetComponentState();
    // Get instance field reference: public Valve.VR.CVRRenderModels/Valve.VR._GetComponentStatePacked pGetComponentStatePacked
    Valve::VR::CVRRenderModels::_GetComponentStatePacked*& dyn_pGetComponentStatePacked();
  }; // Valve.VR.CVRRenderModels/Valve.VR.GetComponentStateUnion
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
