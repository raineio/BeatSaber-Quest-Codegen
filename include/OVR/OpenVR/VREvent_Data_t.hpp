// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: OVR.OpenVR.VREvent_Reserved_t
#include "OVR/OpenVR/VREvent_Reserved_t.hpp"
// Including type: OVR.OpenVR.VREvent_Controller_t
#include "OVR/OpenVR/VREvent_Controller_t.hpp"
// Including type: OVR.OpenVR.VREvent_Mouse_t
#include "OVR/OpenVR/VREvent_Mouse_t.hpp"
// Including type: OVR.OpenVR.VREvent_Scroll_t
#include "OVR/OpenVR/VREvent_Scroll_t.hpp"
// Including type: OVR.OpenVR.VREvent_Process_t
#include "OVR/OpenVR/VREvent_Process_t.hpp"
// Including type: OVR.OpenVR.VREvent_Notification_t
#include "OVR/OpenVR/VREvent_Notification_t.hpp"
// Including type: OVR.OpenVR.VREvent_Overlay_t
#include "OVR/OpenVR/VREvent_Overlay_t.hpp"
// Including type: OVR.OpenVR.VREvent_Status_t
#include "OVR/OpenVR/VREvent_Status_t.hpp"
// Including type: OVR.OpenVR.VREvent_Ipd_t
#include "OVR/OpenVR/VREvent_Ipd_t.hpp"
// Including type: OVR.OpenVR.VREvent_Chaperone_t
#include "OVR/OpenVR/VREvent_Chaperone_t.hpp"
// Including type: OVR.OpenVR.VREvent_PerformanceTest_t
#include "OVR/OpenVR/VREvent_PerformanceTest_t.hpp"
// Including type: OVR.OpenVR.VREvent_TouchPadMove_t
#include "OVR/OpenVR/VREvent_TouchPadMove_t.hpp"
// Including type: OVR.OpenVR.VREvent_SeatedZeroPoseReset_t
#include "OVR/OpenVR/VREvent_SeatedZeroPoseReset_t.hpp"
// Including type: OVR.OpenVR.VREvent_Screenshot_t
#include "OVR/OpenVR/VREvent_Screenshot_t.hpp"
// Including type: OVR.OpenVR.VREvent_ScreenshotProgress_t
#include "OVR/OpenVR/VREvent_ScreenshotProgress_t.hpp"
// Including type: OVR.OpenVR.VREvent_ApplicationLaunch_t
#include "OVR/OpenVR/VREvent_ApplicationLaunch_t.hpp"
// Including type: OVR.OpenVR.VREvent_EditingCameraSurface_t
#include "OVR/OpenVR/VREvent_EditingCameraSurface_t.hpp"
// Including type: OVR.OpenVR.VREvent_MessageOverlay_t
#include "OVR/OpenVR/VREvent_MessageOverlay_t.hpp"
// Including type: OVR.OpenVR.VREvent_Property_t
#include "OVR/OpenVR/VREvent_Property_t.hpp"
// Including type: OVR.OpenVR.VREvent_DualAnalog_t
#include "OVR/OpenVR/VREvent_DualAnalog_t.hpp"
// Including type: OVR.OpenVR.VREvent_HapticVibration_t
#include "OVR/OpenVR/VREvent_HapticVibration_t.hpp"
// Including type: OVR.OpenVR.VREvent_WebConsole_t
#include "OVR/OpenVR/VREvent_WebConsole_t.hpp"
// Including type: OVR.OpenVR.VREvent_InputBindingLoad_t
#include "OVR/OpenVR/VREvent_InputBindingLoad_t.hpp"
// Including type: OVR.OpenVR.VREvent_SpatialAnchor_t
#include "OVR/OpenVR/VREvent_SpatialAnchor_t.hpp"
// Including type: OVR.OpenVR.VREvent_Keyboard_t
#include "OVR/OpenVR/VREvent_Keyboard_t.hpp"
// Completed includes
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // WARNING Size may be invalid!
  // WARNING Layout: Explicit may not be correctly taken into account!
  // Autogenerated type: OVR.OpenVR.VREvent_Data_t
  // [TokenAttribute] Offset: FFFFFFFF
  struct VREvent_Data_t/*, public System::ValueType*/ {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    private:
    #endif
    // public OVR.OpenVR.VREvent_Reserved_t reserved
    // Size: 0x20
    // Offset: 0x0
    OVR::OpenVR::VREvent_Reserved_t reserved;
    // Field size check
    static_assert(sizeof(OVR::OpenVR::VREvent_Reserved_t) == 0x20);
    // public OVR.OpenVR.VREvent_Controller_t controller
    // Size: 0x4
    // Offset: 0x0
    OVR::OpenVR::VREvent_Controller_t controller;
    // Field size check
    static_assert(sizeof(OVR::OpenVR::VREvent_Controller_t) == 0x4);
    // public OVR.OpenVR.VREvent_Mouse_t mouse
    // Size: 0xC
    // Offset: 0x0
    OVR::OpenVR::VREvent_Mouse_t mouse;
    // Field size check
    static_assert(sizeof(OVR::OpenVR::VREvent_Mouse_t) == 0xC);
    // public OVR.OpenVR.VREvent_Scroll_t scroll
    // Size: 0xC
    // Offset: 0x0
    OVR::OpenVR::VREvent_Scroll_t scroll;
    // Field size check
    static_assert(sizeof(OVR::OpenVR::VREvent_Scroll_t) == 0xC);
    // public OVR.OpenVR.VREvent_Process_t process
    // Size: 0x9
    // Offset: 0x0
    OVR::OpenVR::VREvent_Process_t process;
    // Field size check
    static_assert(sizeof(OVR::OpenVR::VREvent_Process_t) == 0x9);
    // public OVR.OpenVR.VREvent_Notification_t notification
    // Size: 0xC
    // Offset: 0x0
    OVR::OpenVR::VREvent_Notification_t notification;
    // Field size check
    static_assert(sizeof(OVR::OpenVR::VREvent_Notification_t) == 0xC);
    // public OVR.OpenVR.VREvent_Overlay_t overlay
    // Size: 0x10
    // Offset: 0x0
    OVR::OpenVR::VREvent_Overlay_t overlay;
    // Field size check
    static_assert(sizeof(OVR::OpenVR::VREvent_Overlay_t) == 0x10);
    // public OVR.OpenVR.VREvent_Status_t status
    // Size: 0x4
    // Offset: 0x0
    OVR::OpenVR::VREvent_Status_t status;
    // Field size check
    static_assert(sizeof(OVR::OpenVR::VREvent_Status_t) == 0x4);
    // public OVR.OpenVR.VREvent_Ipd_t ipd
    // Size: 0x4
    // Offset: 0x0
    OVR::OpenVR::VREvent_Ipd_t ipd;
    // Field size check
    static_assert(sizeof(OVR::OpenVR::VREvent_Ipd_t) == 0x4);
    // public OVR.OpenVR.VREvent_Chaperone_t chaperone
    // Size: 0x10
    // Offset: 0x0
    OVR::OpenVR::VREvent_Chaperone_t chaperone;
    // Field size check
    static_assert(sizeof(OVR::OpenVR::VREvent_Chaperone_t) == 0x10);
    // public OVR.OpenVR.VREvent_PerformanceTest_t performanceTest
    // Size: 0x4
    // Offset: 0x0
    OVR::OpenVR::VREvent_PerformanceTest_t performanceTest;
    // Field size check
    static_assert(sizeof(OVR::OpenVR::VREvent_PerformanceTest_t) == 0x4);
    // public OVR.OpenVR.VREvent_TouchPadMove_t touchPadMove
    // Size: 0x18
    // Offset: 0x0
    OVR::OpenVR::VREvent_TouchPadMove_t touchPadMove;
    // Field size check
    static_assert(sizeof(OVR::OpenVR::VREvent_TouchPadMove_t) == 0x18);
    // public OVR.OpenVR.VREvent_SeatedZeroPoseReset_t seatedZeroPoseReset
    // Size: 0x1
    // Offset: 0x0
    OVR::OpenVR::VREvent_SeatedZeroPoseReset_t seatedZeroPoseReset;
    // Field size check
    static_assert(sizeof(OVR::OpenVR::VREvent_SeatedZeroPoseReset_t) == 0x1);
    // public OVR.OpenVR.VREvent_Screenshot_t screenshot
    // Size: 0x8
    // Offset: 0x0
    OVR::OpenVR::VREvent_Screenshot_t screenshot;
    // Field size check
    static_assert(sizeof(OVR::OpenVR::VREvent_Screenshot_t) == 0x8);
    // public OVR.OpenVR.VREvent_ScreenshotProgress_t screenshotProgress
    // Size: 0x4
    // Offset: 0x0
    OVR::OpenVR::VREvent_ScreenshotProgress_t screenshotProgress;
    // Field size check
    static_assert(sizeof(OVR::OpenVR::VREvent_ScreenshotProgress_t) == 0x4);
    // public OVR.OpenVR.VREvent_ApplicationLaunch_t applicationLaunch
    // Size: 0x8
    // Offset: 0x0
    OVR::OpenVR::VREvent_ApplicationLaunch_t applicationLaunch;
    // Field size check
    static_assert(sizeof(OVR::OpenVR::VREvent_ApplicationLaunch_t) == 0x8);
    // public OVR.OpenVR.VREvent_EditingCameraSurface_t cameraSurface
    // Size: 0xC
    // Offset: 0x0
    OVR::OpenVR::VREvent_EditingCameraSurface_t cameraSurface;
    // Field size check
    static_assert(sizeof(OVR::OpenVR::VREvent_EditingCameraSurface_t) == 0xC);
    // public OVR.OpenVR.VREvent_MessageOverlay_t messageOverlay
    // Size: 0x4
    // Offset: 0x0
    OVR::OpenVR::VREvent_MessageOverlay_t messageOverlay;
    // Field size check
    static_assert(sizeof(OVR::OpenVR::VREvent_MessageOverlay_t) == 0x4);
    // public OVR.OpenVR.VREvent_Property_t property
    // Size: 0xC
    // Offset: 0x0
    OVR::OpenVR::VREvent_Property_t property;
    // Field size check
    static_assert(sizeof(OVR::OpenVR::VREvent_Property_t) == 0xC);
    // public OVR.OpenVR.VREvent_DualAnalog_t dualAnalog
    // Size: 0x14
    // Offset: 0x0
    OVR::OpenVR::VREvent_DualAnalog_t dualAnalog;
    // Field size check
    static_assert(sizeof(OVR::OpenVR::VREvent_DualAnalog_t) == 0x14);
    // public OVR.OpenVR.VREvent_HapticVibration_t hapticVibration
    // Size: 0x1C
    // Offset: 0x0
    OVR::OpenVR::VREvent_HapticVibration_t hapticVibration;
    // Field size check
    static_assert(sizeof(OVR::OpenVR::VREvent_HapticVibration_t) == 0x1C);
    // public OVR.OpenVR.VREvent_WebConsole_t webConsole
    // Size: 0x8
    // Offset: 0x0
    OVR::OpenVR::VREvent_WebConsole_t webConsole;
    // Field size check
    static_assert(sizeof(OVR::OpenVR::VREvent_WebConsole_t) == 0x8);
    // public OVR.OpenVR.VREvent_InputBindingLoad_t inputBinding
    // Size: 0x20
    // Offset: 0x0
    OVR::OpenVR::VREvent_InputBindingLoad_t inputBinding;
    // Field size check
    static_assert(sizeof(OVR::OpenVR::VREvent_InputBindingLoad_t) == 0x20);
    // public OVR.OpenVR.VREvent_SpatialAnchor_t spatialAnchor
    // Size: 0x4
    // Offset: 0x0
    OVR::OpenVR::VREvent_SpatialAnchor_t spatialAnchor;
    // Field size check
    static_assert(sizeof(OVR::OpenVR::VREvent_SpatialAnchor_t) == 0x4);
    // public OVR.OpenVR.VREvent_Keyboard_t keyboard
    // Size: 0x10
    // Offset: 0x0
    OVR::OpenVR::VREvent_Keyboard_t keyboard;
    // Field size check
    static_assert(sizeof(OVR::OpenVR::VREvent_Keyboard_t) == 0x10);
    public:
    // Creating value type constructor for type: VREvent_Data_t
    constexpr VREvent_Data_t(OVR::OpenVR::VREvent_Reserved_t reserved_ = {}, OVR::OpenVR::VREvent_Controller_t controller_ = {}, OVR::OpenVR::VREvent_Mouse_t mouse_ = {}, OVR::OpenVR::VREvent_Scroll_t scroll_ = {}, OVR::OpenVR::VREvent_Process_t process_ = {}, OVR::OpenVR::VREvent_Notification_t notification_ = {}, OVR::OpenVR::VREvent_Overlay_t overlay_ = {}, OVR::OpenVR::VREvent_Status_t status_ = {}, OVR::OpenVR::VREvent_Ipd_t ipd_ = {}, OVR::OpenVR::VREvent_Chaperone_t chaperone_ = {}, OVR::OpenVR::VREvent_PerformanceTest_t performanceTest_ = {}, OVR::OpenVR::VREvent_TouchPadMove_t touchPadMove_ = {}, OVR::OpenVR::VREvent_SeatedZeroPoseReset_t seatedZeroPoseReset_ = {}, OVR::OpenVR::VREvent_Screenshot_t screenshot_ = {}, OVR::OpenVR::VREvent_ScreenshotProgress_t screenshotProgress_ = {}, OVR::OpenVR::VREvent_ApplicationLaunch_t applicationLaunch_ = {}, OVR::OpenVR::VREvent_EditingCameraSurface_t cameraSurface_ = {}, OVR::OpenVR::VREvent_MessageOverlay_t messageOverlay_ = {}, OVR::OpenVR::VREvent_Property_t property_ = {}, OVR::OpenVR::VREvent_DualAnalog_t dualAnalog_ = {}, OVR::OpenVR::VREvent_HapticVibration_t hapticVibration_ = {}, OVR::OpenVR::VREvent_WebConsole_t webConsole_ = {}, OVR::OpenVR::VREvent_InputBindingLoad_t inputBinding_ = {}, OVR::OpenVR::VREvent_SpatialAnchor_t spatialAnchor_ = {}, OVR::OpenVR::VREvent_Keyboard_t keyboard_ = {}) noexcept : reserved{reserved_}, controller{controller_}, mouse{mouse_}, scroll{scroll_}, process{process_}, notification{notification_}, overlay{overlay_}, status{status_}, ipd{ipd_}, chaperone{chaperone_}, performanceTest{performanceTest_}, touchPadMove{touchPadMove_}, seatedZeroPoseReset{seatedZeroPoseReset_}, screenshot{screenshot_}, screenshotProgress{screenshotProgress_}, applicationLaunch{applicationLaunch_}, cameraSurface{cameraSurface_}, messageOverlay{messageOverlay_}, property{property_}, dualAnalog{dualAnalog_}, hapticVibration{hapticVibration_}, webConsole{webConsole_}, inputBinding{inputBinding_}, spatialAnchor{spatialAnchor_}, keyboard{keyboard_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Get instance field reference: public OVR.OpenVR.VREvent_Reserved_t reserved
    OVR::OpenVR::VREvent_Reserved_t& dyn_reserved();
    // Get instance field reference: public OVR.OpenVR.VREvent_Controller_t controller
    OVR::OpenVR::VREvent_Controller_t& dyn_controller();
    // Get instance field reference: public OVR.OpenVR.VREvent_Mouse_t mouse
    OVR::OpenVR::VREvent_Mouse_t& dyn_mouse();
    // Get instance field reference: public OVR.OpenVR.VREvent_Scroll_t scroll
    OVR::OpenVR::VREvent_Scroll_t& dyn_scroll();
    // Get instance field reference: public OVR.OpenVR.VREvent_Process_t process
    OVR::OpenVR::VREvent_Process_t& dyn_process();
    // Get instance field reference: public OVR.OpenVR.VREvent_Notification_t notification
    OVR::OpenVR::VREvent_Notification_t& dyn_notification();
    // Get instance field reference: public OVR.OpenVR.VREvent_Overlay_t overlay
    OVR::OpenVR::VREvent_Overlay_t& dyn_overlay();
    // Get instance field reference: public OVR.OpenVR.VREvent_Status_t status
    OVR::OpenVR::VREvent_Status_t& dyn_status();
    // Get instance field reference: public OVR.OpenVR.VREvent_Ipd_t ipd
    OVR::OpenVR::VREvent_Ipd_t& dyn_ipd();
    // Get instance field reference: public OVR.OpenVR.VREvent_Chaperone_t chaperone
    OVR::OpenVR::VREvent_Chaperone_t& dyn_chaperone();
    // Get instance field reference: public OVR.OpenVR.VREvent_PerformanceTest_t performanceTest
    OVR::OpenVR::VREvent_PerformanceTest_t& dyn_performanceTest();
    // Get instance field reference: public OVR.OpenVR.VREvent_TouchPadMove_t touchPadMove
    OVR::OpenVR::VREvent_TouchPadMove_t& dyn_touchPadMove();
    // Get instance field reference: public OVR.OpenVR.VREvent_SeatedZeroPoseReset_t seatedZeroPoseReset
    OVR::OpenVR::VREvent_SeatedZeroPoseReset_t& dyn_seatedZeroPoseReset();
    // Get instance field reference: public OVR.OpenVR.VREvent_Screenshot_t screenshot
    OVR::OpenVR::VREvent_Screenshot_t& dyn_screenshot();
    // Get instance field reference: public OVR.OpenVR.VREvent_ScreenshotProgress_t screenshotProgress
    OVR::OpenVR::VREvent_ScreenshotProgress_t& dyn_screenshotProgress();
    // Get instance field reference: public OVR.OpenVR.VREvent_ApplicationLaunch_t applicationLaunch
    OVR::OpenVR::VREvent_ApplicationLaunch_t& dyn_applicationLaunch();
    // Get instance field reference: public OVR.OpenVR.VREvent_EditingCameraSurface_t cameraSurface
    OVR::OpenVR::VREvent_EditingCameraSurface_t& dyn_cameraSurface();
    // Get instance field reference: public OVR.OpenVR.VREvent_MessageOverlay_t messageOverlay
    OVR::OpenVR::VREvent_MessageOverlay_t& dyn_messageOverlay();
    // Get instance field reference: public OVR.OpenVR.VREvent_Property_t property
    OVR::OpenVR::VREvent_Property_t& dyn_property();
    // Get instance field reference: public OVR.OpenVR.VREvent_DualAnalog_t dualAnalog
    OVR::OpenVR::VREvent_DualAnalog_t& dyn_dualAnalog();
    // Get instance field reference: public OVR.OpenVR.VREvent_HapticVibration_t hapticVibration
    OVR::OpenVR::VREvent_HapticVibration_t& dyn_hapticVibration();
    // Get instance field reference: public OVR.OpenVR.VREvent_WebConsole_t webConsole
    OVR::OpenVR::VREvent_WebConsole_t& dyn_webConsole();
    // Get instance field reference: public OVR.OpenVR.VREvent_InputBindingLoad_t inputBinding
    OVR::OpenVR::VREvent_InputBindingLoad_t& dyn_inputBinding();
    // Get instance field reference: public OVR.OpenVR.VREvent_SpatialAnchor_t spatialAnchor
    OVR::OpenVR::VREvent_SpatialAnchor_t& dyn_spatialAnchor();
    // Get instance field reference: public OVR.OpenVR.VREvent_Keyboard_t keyboard
    OVR::OpenVR::VREvent_Keyboard_t& dyn_keyboard();
  }; // OVR.OpenVR.VREvent_Data_t
  // WARNING Not writing size check since size may be invalid!
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::VREvent_Data_t, "OVR.OpenVR", "VREvent_Data_t");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
