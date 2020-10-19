// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
  // Forward declaring type: IntPtr
  struct IntPtr;
}
// Forward declaring namespace: UnityEngine::XR
namespace UnityEngine::XR {
  // Forward declaring type: TrackingSpaceType
  struct TrackingSpaceType;
}
// Completed forward declares
// Type namespace: UnityEngine.XR
namespace UnityEngine::XR {
  // Autogenerated type: UnityEngine.XR.XRDevice
  class XRDevice : public ::Il2CppObject {
    public:
    // Get static field: static private System.Action`1<System.String> deviceLoaded
    static System::Action_1<::Il2CppString*>* _get_deviceLoaded();
    // Set static field: static private System.Action`1<System.String> deviceLoaded
    static void _set_deviceLoaded(System::Action_1<::Il2CppString*>* value);
    // static public System.Boolean get_isPresent()
    // Offset: 0x1F78828
    static bool get_isPresent();
    // static public System.String get_model()
    // Offset: 0x1F7885C
    static ::Il2CppString* get_model();
    // static public System.IntPtr GetNativePtr()
    // Offset: 0x1F78890
    static System::IntPtr GetNativePtr();
    // static public System.Boolean SetTrackingSpaceType(UnityEngine.XR.TrackingSpaceType trackingSpaceType)
    // Offset: 0x1F788C4
    static bool SetTrackingSpaceType(UnityEngine::XR::TrackingSpaceType trackingSpaceType);
    // static private System.Void InvokeDeviceLoaded(System.String loadedDeviceName)
    // Offset: 0x1F78904
    static void InvokeDeviceLoaded(::Il2CppString* loadedDeviceName);
    // static private System.Void .cctor()
    // Offset: 0x1F789BC
    static void _cctor();
  }; // UnityEngine.XR.XRDevice
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::XR::XRDevice*, "UnityEngine.XR", "XRDevice");
#pragma pack(pop)
