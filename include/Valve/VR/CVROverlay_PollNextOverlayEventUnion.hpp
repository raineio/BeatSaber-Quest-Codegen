// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Valve.VR.CVROverlay
#include "Valve/VR/CVROverlay.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: Valve.VR.IVROverlay
#include "Valve/VR/IVROverlay.hpp"
// Completed includes
// Type namespace: Valve.VR
namespace Valve::VR {
  // WARNING Size may be invalid!
  // WARNING Layout: Explicit may not be correctly taken into account!
  // Autogenerated type: Valve.VR.CVROverlay/Valve.VR.PollNextOverlayEventUnion
  // [TokenAttribute] Offset: FFFFFFFF
  struct CVROverlay::PollNextOverlayEventUnion/*, public System::ValueType*/ {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    private:
    #endif
    // public Valve.VR.IVROverlay/Valve.VR._PollNextOverlayEvent pPollNextOverlayEvent
    // Size: 0x8
    // Offset: 0x0
    Valve::VR::IVROverlay::_PollNextOverlayEvent* pPollNextOverlayEvent;
    // Field size check
    static_assert(sizeof(Valve::VR::IVROverlay::_PollNextOverlayEvent*) == 0x8);
    // public Valve.VR.CVROverlay/Valve.VR._PollNextOverlayEventPacked pPollNextOverlayEventPacked
    // Size: 0x8
    // Offset: 0x0
    Valve::VR::CVROverlay::_PollNextOverlayEventPacked* pPollNextOverlayEventPacked;
    // Field size check
    static_assert(sizeof(Valve::VR::CVROverlay::_PollNextOverlayEventPacked*) == 0x8);
    public:
    // Creating value type constructor for type: PollNextOverlayEventUnion
    constexpr PollNextOverlayEventUnion(Valve::VR::IVROverlay::_PollNextOverlayEvent* pPollNextOverlayEvent_ = {}, Valve::VR::CVROverlay::_PollNextOverlayEventPacked* pPollNextOverlayEventPacked_ = {}) noexcept : pPollNextOverlayEvent{pPollNextOverlayEvent_}, pPollNextOverlayEventPacked{pPollNextOverlayEventPacked_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Get instance field reference: public Valve.VR.IVROverlay/Valve.VR._PollNextOverlayEvent pPollNextOverlayEvent
    Valve::VR::IVROverlay::_PollNextOverlayEvent*& dyn_pPollNextOverlayEvent();
    // Get instance field reference: public Valve.VR.CVROverlay/Valve.VR._PollNextOverlayEventPacked pPollNextOverlayEventPacked
    Valve::VR::CVROverlay::_PollNextOverlayEventPacked*& dyn_pPollNextOverlayEventPacked();
  }; // Valve.VR.CVROverlay/Valve.VR.PollNextOverlayEventUnion
  // WARNING Not writing size check since size may be invalid!
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::CVROverlay::PollNextOverlayEventUnion, "Valve.VR", "CVROverlay/PollNextOverlayEventUnion");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
