// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: Valve.VR.VREvent_Reserved_t
#include "Valve/VR/VREvent_Reserved_t.hpp"
// Including type: Valve.VR.VREvent_Controller_t
#include "Valve/VR/VREvent_Controller_t.hpp"
// Including type: Valve.VR.VREvent_Mouse_t
#include "Valve/VR/VREvent_Mouse_t.hpp"
// Including type: Valve.VR.VREvent_Scroll_t
#include "Valve/VR/VREvent_Scroll_t.hpp"
// Including type: Valve.VR.VREvent_Process_t
#include "Valve/VR/VREvent_Process_t.hpp"
// Including type: Valve.VR.VREvent_Notification_t
#include "Valve/VR/VREvent_Notification_t.hpp"
// Including type: Valve.VR.VREvent_Overlay_t
#include "Valve/VR/VREvent_Overlay_t.hpp"
// Including type: Valve.VR.VREvent_Status_t
#include "Valve/VR/VREvent_Status_t.hpp"
// Including type: Valve.VR.VREvent_Ipd_t
#include "Valve/VR/VREvent_Ipd_t.hpp"
// Including type: Valve.VR.VREvent_Chaperone_t
#include "Valve/VR/VREvent_Chaperone_t.hpp"
// Including type: Valve.VR.VREvent_PerformanceTest_t
#include "Valve/VR/VREvent_PerformanceTest_t.hpp"
// Including type: Valve.VR.VREvent_TouchPadMove_t
#include "Valve/VR/VREvent_TouchPadMove_t.hpp"
// Including type: Valve.VR.VREvent_SeatedZeroPoseReset_t
#include "Valve/VR/VREvent_SeatedZeroPoseReset_t.hpp"
// Including type: Valve.VR.VREvent_Screenshot_t
#include "Valve/VR/VREvent_Screenshot_t.hpp"
// Including type: Valve.VR.VREvent_ScreenshotProgress_t
#include "Valve/VR/VREvent_ScreenshotProgress_t.hpp"
// Including type: Valve.VR.VREvent_ApplicationLaunch_t
#include "Valve/VR/VREvent_ApplicationLaunch_t.hpp"
// Including type: Valve.VR.VREvent_EditingCameraSurface_t
#include "Valve/VR/VREvent_EditingCameraSurface_t.hpp"
// Including type: Valve.VR.VREvent_MessageOverlay_t
#include "Valve/VR/VREvent_MessageOverlay_t.hpp"
// Including type: Valve.VR.VREvent_Property_t
#include "Valve/VR/VREvent_Property_t.hpp"
// Including type: Valve.VR.VREvent_DualAnalog_t
#include "Valve/VR/VREvent_DualAnalog_t.hpp"
// Including type: Valve.VR.VREvent_HapticVibration_t
#include "Valve/VR/VREvent_HapticVibration_t.hpp"
// Including type: Valve.VR.VREvent_Keyboard_t
#include "Valve/VR/VREvent_Keyboard_t.hpp"
// Completed includes
// Type namespace: Valve.VR
namespace Valve::VR {
  // Forward declaring type: VREvent_Data_t
  struct VREvent_Data_t;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::VREvent_Data_t, "Valve.VR", "VREvent_Data_t");
// Type namespace: Valve.VR
namespace Valve::VR {
  // WARNING Size may be invalid!
  // WARNING Layout: Explicit may not be correctly taken into account!
  // Autogenerated type: Valve.VR.VREvent_Data_t
  // [TokenAttribute] Offset: FFFFFFFF
  struct VREvent_Data_t/*, public System::ValueType*/ {
    public:
    public:
    // public Valve.VR.VREvent_Reserved_t reserved
    // Size: 0x10
    // Offset: 0x0
    Valve::VR::VREvent_Reserved_t reserved;
    // Field size check
    static_assert(sizeof(Valve::VR::VREvent_Reserved_t) == 0x10);
    // public Valve.VR.VREvent_Controller_t controller
    // Size: 0x4
    // Offset: 0x0
    Valve::VR::VREvent_Controller_t controller;
    // Field size check
    static_assert(sizeof(Valve::VR::VREvent_Controller_t) == 0x4);
    // public Valve.VR.VREvent_Mouse_t mouse
    // Size: 0xC
    // Offset: 0x0
    Valve::VR::VREvent_Mouse_t mouse;
    // Field size check
    static_assert(sizeof(Valve::VR::VREvent_Mouse_t) == 0xC);
    // public Valve.VR.VREvent_Scroll_t scroll
    // Size: 0xC
    // Offset: 0x0
    Valve::VR::VREvent_Scroll_t scroll;
    // Field size check
    static_assert(sizeof(Valve::VR::VREvent_Scroll_t) == 0xC);
    // public Valve.VR.VREvent_Process_t process
    // Size: 0x9
    // Offset: 0x0
    Valve::VR::VREvent_Process_t process;
    // Field size check
    static_assert(sizeof(Valve::VR::VREvent_Process_t) == 0x9);
    // public Valve.VR.VREvent_Notification_t notification
    // Size: 0xC
    // Offset: 0x0
    Valve::VR::VREvent_Notification_t notification;
    // Field size check
    static_assert(sizeof(Valve::VR::VREvent_Notification_t) == 0xC);
    // public Valve.VR.VREvent_Overlay_t overlay
    // Size: 0x8
    // Offset: 0x0
    Valve::VR::VREvent_Overlay_t overlay;
    // Field size check
    static_assert(sizeof(Valve::VR::VREvent_Overlay_t) == 0x8);
    // public Valve.VR.VREvent_Status_t status
    // Size: 0x4
    // Offset: 0x0
    Valve::VR::VREvent_Status_t status;
    // Field size check
    static_assert(sizeof(Valve::VR::VREvent_Status_t) == 0x4);
    // public Valve.VR.VREvent_Ipd_t ipd
    // Size: 0x4
    // Offset: 0x0
    Valve::VR::VREvent_Ipd_t ipd;
    // Field size check
    static_assert(sizeof(Valve::VR::VREvent_Ipd_t) == 0x4);
    // public Valve.VR.VREvent_Chaperone_t chaperone
    // Size: 0x10
    // Offset: 0x0
    Valve::VR::VREvent_Chaperone_t chaperone;
    // Field size check
    static_assert(sizeof(Valve::VR::VREvent_Chaperone_t) == 0x10);
    // public Valve.VR.VREvent_PerformanceTest_t performanceTest
    // Size: 0x4
    // Offset: 0x0
    Valve::VR::VREvent_PerformanceTest_t performanceTest;
    // Field size check
    static_assert(sizeof(Valve::VR::VREvent_PerformanceTest_t) == 0x4);
    // public Valve.VR.VREvent_TouchPadMove_t touchPadMove
    // Size: 0x18
    // Offset: 0x0
    Valve::VR::VREvent_TouchPadMove_t touchPadMove;
    // Field size check
    static_assert(sizeof(Valve::VR::VREvent_TouchPadMove_t) == 0x18);
    // public Valve.VR.VREvent_SeatedZeroPoseReset_t seatedZeroPoseReset
    // Size: 0x1
    // Offset: 0x0
    Valve::VR::VREvent_SeatedZeroPoseReset_t seatedZeroPoseReset;
    // Field size check
    static_assert(sizeof(Valve::VR::VREvent_SeatedZeroPoseReset_t) == 0x1);
    // public Valve.VR.VREvent_Screenshot_t screenshot
    // Size: 0x8
    // Offset: 0x0
    Valve::VR::VREvent_Screenshot_t screenshot;
    // Field size check
    static_assert(sizeof(Valve::VR::VREvent_Screenshot_t) == 0x8);
    // public Valve.VR.VREvent_ScreenshotProgress_t screenshotProgress
    // Size: 0x4
    // Offset: 0x0
    Valve::VR::VREvent_ScreenshotProgress_t screenshotProgress;
    // Field size check
    static_assert(sizeof(Valve::VR::VREvent_ScreenshotProgress_t) == 0x4);
    // public Valve.VR.VREvent_ApplicationLaunch_t applicationLaunch
    // Size: 0x8
    // Offset: 0x0
    Valve::VR::VREvent_ApplicationLaunch_t applicationLaunch;
    // Field size check
    static_assert(sizeof(Valve::VR::VREvent_ApplicationLaunch_t) == 0x8);
    // public Valve.VR.VREvent_EditingCameraSurface_t cameraSurface
    // Size: 0xC
    // Offset: 0x0
    Valve::VR::VREvent_EditingCameraSurface_t cameraSurface;
    // Field size check
    static_assert(sizeof(Valve::VR::VREvent_EditingCameraSurface_t) == 0xC);
    // public Valve.VR.VREvent_MessageOverlay_t messageOverlay
    // Size: 0x4
    // Offset: 0x0
    Valve::VR::VREvent_MessageOverlay_t messageOverlay;
    // Field size check
    static_assert(sizeof(Valve::VR::VREvent_MessageOverlay_t) == 0x4);
    // public Valve.VR.VREvent_Property_t property
    // Size: 0xC
    // Offset: 0x0
    Valve::VR::VREvent_Property_t property;
    // Field size check
    static_assert(sizeof(Valve::VR::VREvent_Property_t) == 0xC);
    // public Valve.VR.VREvent_DualAnalog_t dualAnalog
    // Size: 0x14
    // Offset: 0x0
    Valve::VR::VREvent_DualAnalog_t dualAnalog;
    // Field size check
    static_assert(sizeof(Valve::VR::VREvent_DualAnalog_t) == 0x14);
    // public Valve.VR.VREvent_HapticVibration_t hapticVibration
    // Size: 0x1C
    // Offset: 0x0
    Valve::VR::VREvent_HapticVibration_t hapticVibration;
    // Field size check
    static_assert(sizeof(Valve::VR::VREvent_HapticVibration_t) == 0x1C);
    // public Valve.VR.VREvent_Keyboard_t keyboard
    // Size: 0x10
    // Offset: 0x0
    Valve::VR::VREvent_Keyboard_t keyboard;
    // Field size check
    static_assert(sizeof(Valve::VR::VREvent_Keyboard_t) == 0x10);
    public:
    // Creating value type constructor for type: VREvent_Data_t
    constexpr VREvent_Data_t(Valve::VR::VREvent_Reserved_t reserved_ = {}, Valve::VR::VREvent_Controller_t controller_ = {}, Valve::VR::VREvent_Mouse_t mouse_ = {}, Valve::VR::VREvent_Scroll_t scroll_ = {}, Valve::VR::VREvent_Process_t process_ = {}, Valve::VR::VREvent_Notification_t notification_ = {}, Valve::VR::VREvent_Overlay_t overlay_ = {}, Valve::VR::VREvent_Status_t status_ = {}, Valve::VR::VREvent_Ipd_t ipd_ = {}, Valve::VR::VREvent_Chaperone_t chaperone_ = {}, Valve::VR::VREvent_PerformanceTest_t performanceTest_ = {}, Valve::VR::VREvent_TouchPadMove_t touchPadMove_ = {}, Valve::VR::VREvent_SeatedZeroPoseReset_t seatedZeroPoseReset_ = {}, Valve::VR::VREvent_Screenshot_t screenshot_ = {}, Valve::VR::VREvent_ScreenshotProgress_t screenshotProgress_ = {}, Valve::VR::VREvent_ApplicationLaunch_t applicationLaunch_ = {}, Valve::VR::VREvent_EditingCameraSurface_t cameraSurface_ = {}, Valve::VR::VREvent_MessageOverlay_t messageOverlay_ = {}, Valve::VR::VREvent_Property_t property_ = {}, Valve::VR::VREvent_DualAnalog_t dualAnalog_ = {}, Valve::VR::VREvent_HapticVibration_t hapticVibration_ = {}, Valve::VR::VREvent_Keyboard_t keyboard_ = {}) noexcept : reserved{reserved_}, controller{controller_}, mouse{mouse_}, scroll{scroll_}, process{process_}, notification{notification_}, overlay{overlay_}, status{status_}, ipd{ipd_}, chaperone{chaperone_}, performanceTest{performanceTest_}, touchPadMove{touchPadMove_}, seatedZeroPoseReset{seatedZeroPoseReset_}, screenshot{screenshot_}, screenshotProgress{screenshotProgress_}, applicationLaunch{applicationLaunch_}, cameraSurface{cameraSurface_}, messageOverlay{messageOverlay_}, property{property_}, dualAnalog{dualAnalog_}, hapticVibration{hapticVibration_}, keyboard{keyboard_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Get instance field reference: public Valve.VR.VREvent_Reserved_t reserved
    Valve::VR::VREvent_Reserved_t& dyn_reserved();
    // Get instance field reference: public Valve.VR.VREvent_Controller_t controller
    Valve::VR::VREvent_Controller_t& dyn_controller();
    // Get instance field reference: public Valve.VR.VREvent_Mouse_t mouse
    Valve::VR::VREvent_Mouse_t& dyn_mouse();
    // Get instance field reference: public Valve.VR.VREvent_Scroll_t scroll
    Valve::VR::VREvent_Scroll_t& dyn_scroll();
    // Get instance field reference: public Valve.VR.VREvent_Process_t process
    Valve::VR::VREvent_Process_t& dyn_process();
    // Get instance field reference: public Valve.VR.VREvent_Notification_t notification
    Valve::VR::VREvent_Notification_t& dyn_notification();
    // Get instance field reference: public Valve.VR.VREvent_Overlay_t overlay
    Valve::VR::VREvent_Overlay_t& dyn_overlay();
    // Get instance field reference: public Valve.VR.VREvent_Status_t status
    Valve::VR::VREvent_Status_t& dyn_status();
    // Get instance field reference: public Valve.VR.VREvent_Ipd_t ipd
    Valve::VR::VREvent_Ipd_t& dyn_ipd();
    // Get instance field reference: public Valve.VR.VREvent_Chaperone_t chaperone
    Valve::VR::VREvent_Chaperone_t& dyn_chaperone();
    // Get instance field reference: public Valve.VR.VREvent_PerformanceTest_t performanceTest
    Valve::VR::VREvent_PerformanceTest_t& dyn_performanceTest();
    // Get instance field reference: public Valve.VR.VREvent_TouchPadMove_t touchPadMove
    Valve::VR::VREvent_TouchPadMove_t& dyn_touchPadMove();
    // Get instance field reference: public Valve.VR.VREvent_SeatedZeroPoseReset_t seatedZeroPoseReset
    Valve::VR::VREvent_SeatedZeroPoseReset_t& dyn_seatedZeroPoseReset();
    // Get instance field reference: public Valve.VR.VREvent_Screenshot_t screenshot
    Valve::VR::VREvent_Screenshot_t& dyn_screenshot();
    // Get instance field reference: public Valve.VR.VREvent_ScreenshotProgress_t screenshotProgress
    Valve::VR::VREvent_ScreenshotProgress_t& dyn_screenshotProgress();
    // Get instance field reference: public Valve.VR.VREvent_ApplicationLaunch_t applicationLaunch
    Valve::VR::VREvent_ApplicationLaunch_t& dyn_applicationLaunch();
    // Get instance field reference: public Valve.VR.VREvent_EditingCameraSurface_t cameraSurface
    Valve::VR::VREvent_EditingCameraSurface_t& dyn_cameraSurface();
    // Get instance field reference: public Valve.VR.VREvent_MessageOverlay_t messageOverlay
    Valve::VR::VREvent_MessageOverlay_t& dyn_messageOverlay();
    // Get instance field reference: public Valve.VR.VREvent_Property_t property
    Valve::VR::VREvent_Property_t& dyn_property();
    // Get instance field reference: public Valve.VR.VREvent_DualAnalog_t dualAnalog
    Valve::VR::VREvent_DualAnalog_t& dyn_dualAnalog();
    // Get instance field reference: public Valve.VR.VREvent_HapticVibration_t hapticVibration
    Valve::VR::VREvent_HapticVibration_t& dyn_hapticVibration();
    // Get instance field reference: public Valve.VR.VREvent_Keyboard_t keyboard
    Valve::VR::VREvent_Keyboard_t& dyn_keyboard();
  }; // Valve.VR.VREvent_Data_t
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
