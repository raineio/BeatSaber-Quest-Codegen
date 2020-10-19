// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVRInput
#include "GlobalNamespace/OVRInput.hpp"
// Including type: OVRInput/OVRControllerBase
#include "GlobalNamespace/OVRInput_OVRControllerBase.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: String
  class String;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: OVRInput/OVRControllerGamepadMac
  class OVRInput::OVRControllerGamepadMac : public GlobalNamespace::OVRInput::OVRControllerBase {
    public:
    // Nested type: GlobalNamespace::OVRInput::OVRControllerGamepadMac::AxisGPC
    struct AxisGPC;
    // Nested type: GlobalNamespace::OVRInput::OVRControllerGamepadMac::ButtonGPC
    struct ButtonGPC;
    // private System.Boolean initialized
    // Offset: 0x101
    bool initialized;
    // Creating conversion operator: operator bool
    constexpr operator bool() const noexcept {
      return initialized;
    }
    // static field const value: static private System.String DllName
    static constexpr const char* DllName = "OVRGamepad";
    // Get static field: static private System.String DllName
    static ::Il2CppString* _get_DllName();
    // Set static field: static private System.String DllName
    static void _set_DllName(::Il2CppString* value);
    // static private System.Boolean OVR_GamepadController_Initialize()
    // Offset: 0x10EA790
    static bool OVR_GamepadController_Initialize();
    // static private System.Boolean OVR_GamepadController_Destroy()
    // Offset: 0x10EA87C
    static bool OVR_GamepadController_Destroy();
    // static private System.Boolean OVR_GamepadController_Update()
    // Offset: 0x10EAEA4
    static bool OVR_GamepadController_Update();
    // static private System.Single OVR_GamepadController_GetAxis(System.Int32 axis)
    // Offset: 0x10EAFA8
    static float OVR_GamepadController_GetAxis(int axis);
    // static private System.Boolean OVR_GamepadController_GetButton(System.Int32 button)
    // Offset: 0x10EAF20
    static bool OVR_GamepadController_GetButton(int button);
    // static private System.Boolean OVR_GamepadController_SetVibration(System.Int32 node, System.Single strength, System.Single frequency)
    // Offset: 0x10EB404
    static bool OVR_GamepadController_SetVibration(int node, float strength, float frequency);
    // public System.Void .ctor()
    // Offset: 0x10EA75C
    // Implemented from: OVRInput/OVRControllerBase
    // Base method: System.Void OVRControllerBase::.ctor()
    // Base method: System.Void Object::.ctor()
    static OVRInput::OVRControllerGamepadMac* New_ctor();
    // protected override System.Void Finalize()
    // Offset: 0x10EA80C
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
    // public override OVRInput/Controller Update()
    // Offset: 0x10EA8F8
    // Implemented from: OVRInput/OVRControllerBase
    // Base method: OVRInput/Controller OVRControllerBase::Update()
    GlobalNamespace::OVRInput::Controller Update();
    // public override System.Void ConfigureButtonMap()
    // Offset: 0x10EB028
    // Implemented from: OVRInput/OVRControllerBase
    // Base method: System.Void OVRControllerBase::ConfigureButtonMap()
    void ConfigureButtonMap();
    // public override System.Void ConfigureTouchMap()
    // Offset: 0x10EB238
    // Implemented from: OVRInput/OVRControllerBase
    // Base method: System.Void OVRControllerBase::ConfigureTouchMap()
    void ConfigureTouchMap();
    // public override System.Void ConfigureNearTouchMap()
    // Offset: 0x10EB2E8
    // Implemented from: OVRInput/OVRControllerBase
    // Base method: System.Void OVRControllerBase::ConfigureNearTouchMap()
    void ConfigureNearTouchMap();
    // public override System.Void ConfigureAxis1DMap()
    // Offset: 0x10EB338
    // Implemented from: OVRInput/OVRControllerBase
    // Base method: System.Void OVRControllerBase::ConfigureAxis1DMap()
    void ConfigureAxis1DMap();
    // public override System.Void ConfigureAxis2DMap()
    // Offset: 0x10EB390
    // Implemented from: OVRInput/OVRControllerBase
    // Base method: System.Void OVRControllerBase::ConfigureAxis2DMap()
    void ConfigureAxis2DMap();
    // public override System.Void SetControllerVibration(System.Single frequency, System.Single amplitude)
    // Offset: 0x10EB3E8
    // Implemented from: OVRInput/OVRControllerBase
    // Base method: System.Void OVRControllerBase::SetControllerVibration(System.Single frequency, System.Single amplitude)
    void SetControllerVibration(float frequency, float amplitude);
  }; // OVRInput/OVRControllerGamepadMac
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRInput::OVRControllerGamepadMac*, "", "OVRInput/OVRControllerGamepadMac");
#pragma pack(pop)
