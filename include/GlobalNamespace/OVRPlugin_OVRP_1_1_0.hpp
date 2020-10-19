// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVRPlugin
#include "GlobalNamespace/OVRPlugin.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Version
  class Version;
  // Forward declaring type: IntPtr
  struct IntPtr;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: OVRPlugin/OVRP_1_1_0
  class OVRPlugin::OVRP_1_1_0 : public ::Il2CppObject {
    public:
    // Get static field: static public readonly System.Version version
    static System::Version* _get_version();
    // Set static field: static public readonly System.Version version
    static void _set_version(System::Version* value);
    // static public OVRPlugin/Bool ovrp_GetInitialized()
    // Offset: 0x12658B4
    static GlobalNamespace::OVRPlugin::Bool ovrp_GetInitialized();
    // static private System.IntPtr _ovrp_GetVersion()
    // Offset: 0x1265928
    static System::IntPtr _ovrp_GetVersion();
    // static public System.String ovrp_GetVersion()
    // Offset: 0x126599C
    static ::Il2CppString* ovrp_GetVersion();
    // static private System.IntPtr _ovrp_GetNativeSDKVersion()
    // Offset: 0x1265A2C
    static System::IntPtr _ovrp_GetNativeSDKVersion();
    // static public System.String ovrp_GetNativeSDKVersion()
    // Offset: 0x1265AA0
    static ::Il2CppString* ovrp_GetNativeSDKVersion();
    // static public System.IntPtr ovrp_GetAudioOutId()
    // Offset: 0x1265B30
    static System::IntPtr ovrp_GetAudioOutId();
    // static public System.IntPtr ovrp_GetAudioInId()
    // Offset: 0x1265BA4
    static System::IntPtr ovrp_GetAudioInId();
    // static public System.Single ovrp_GetEyeTextureScale()
    // Offset: 0x1265C18
    static float ovrp_GetEyeTextureScale();
    // static public OVRPlugin/Bool ovrp_SetEyeTextureScale(System.Single value)
    // Offset: 0x1265C88
    static GlobalNamespace::OVRPlugin::Bool ovrp_SetEyeTextureScale(float value);
    // static public OVRPlugin/Bool ovrp_GetTrackingOrientationSupported()
    // Offset: 0x1265D10
    static GlobalNamespace::OVRPlugin::Bool ovrp_GetTrackingOrientationSupported();
    // static public OVRPlugin/Bool ovrp_GetTrackingOrientationEnabled()
    // Offset: 0x1265D84
    static GlobalNamespace::OVRPlugin::Bool ovrp_GetTrackingOrientationEnabled();
    // static public OVRPlugin/Bool ovrp_SetTrackingOrientationEnabled(OVRPlugin/Bool value)
    // Offset: 0x1265DF8
    static GlobalNamespace::OVRPlugin::Bool ovrp_SetTrackingOrientationEnabled(GlobalNamespace::OVRPlugin::Bool value);
    // static public OVRPlugin/Bool ovrp_GetTrackingPositionSupported()
    // Offset: 0x1265E78
    static GlobalNamespace::OVRPlugin::Bool ovrp_GetTrackingPositionSupported();
    // static public OVRPlugin/Bool ovrp_GetTrackingPositionEnabled()
    // Offset: 0x1265EEC
    static GlobalNamespace::OVRPlugin::Bool ovrp_GetTrackingPositionEnabled();
    // static public OVRPlugin/Bool ovrp_SetTrackingPositionEnabled(OVRPlugin/Bool value)
    // Offset: 0x1265F60
    static GlobalNamespace::OVRPlugin::Bool ovrp_SetTrackingPositionEnabled(GlobalNamespace::OVRPlugin::Bool value);
    // static public OVRPlugin/Bool ovrp_GetNodePresent(OVRPlugin/Node nodeId)
    // Offset: 0x1265FE0
    static GlobalNamespace::OVRPlugin::Bool ovrp_GetNodePresent(GlobalNamespace::OVRPlugin::Node nodeId);
    // static public OVRPlugin/Bool ovrp_GetNodeOrientationTracked(OVRPlugin/Node nodeId)
    // Offset: 0x1266060
    static GlobalNamespace::OVRPlugin::Bool ovrp_GetNodeOrientationTracked(GlobalNamespace::OVRPlugin::Node nodeId);
    // static public OVRPlugin/Bool ovrp_GetNodePositionTracked(OVRPlugin/Node nodeId)
    // Offset: 0x12660E0
    static GlobalNamespace::OVRPlugin::Bool ovrp_GetNodePositionTracked(GlobalNamespace::OVRPlugin::Node nodeId);
    // static public OVRPlugin/Frustumf ovrp_GetNodeFrustum(OVRPlugin/Node nodeId)
    // Offset: 0x1266160
    static GlobalNamespace::OVRPlugin::Frustumf ovrp_GetNodeFrustum(GlobalNamespace::OVRPlugin::Node nodeId);
    // static public OVRPlugin/ControllerState ovrp_GetControllerState(System.UInt32 controllerMask)
    // Offset: 0x12661E0
    static GlobalNamespace::OVRPlugin::ControllerState ovrp_GetControllerState(uint controllerMask);
    // static public System.Int32 ovrp_GetSystemCpuLevel()
    // Offset: 0x1266270
    static int ovrp_GetSystemCpuLevel();
    // static public OVRPlugin/Bool ovrp_SetSystemCpuLevel(System.Int32 value)
    // Offset: 0x12662E4
    static GlobalNamespace::OVRPlugin::Bool ovrp_SetSystemCpuLevel(int value);
    // static public System.Int32 ovrp_GetSystemGpuLevel()
    // Offset: 0x1266364
    static int ovrp_GetSystemGpuLevel();
    // static public OVRPlugin/Bool ovrp_SetSystemGpuLevel(System.Int32 value)
    // Offset: 0x12663D8
    static GlobalNamespace::OVRPlugin::Bool ovrp_SetSystemGpuLevel(int value);
    // static public OVRPlugin/Bool ovrp_GetSystemPowerSavingMode()
    // Offset: 0x1266458
    static GlobalNamespace::OVRPlugin::Bool ovrp_GetSystemPowerSavingMode();
    // static public System.Single ovrp_GetSystemDisplayFrequency()
    // Offset: 0x12664CC
    static float ovrp_GetSystemDisplayFrequency();
    // static public System.Int32 ovrp_GetSystemVSyncCount()
    // Offset: 0x126653C
    static int ovrp_GetSystemVSyncCount();
    // static public System.Single ovrp_GetSystemVolume()
    // Offset: 0x12665B0
    static float ovrp_GetSystemVolume();
    // static public OVRPlugin/BatteryStatus ovrp_GetSystemBatteryStatus()
    // Offset: 0x1266620
    static GlobalNamespace::OVRPlugin::BatteryStatus ovrp_GetSystemBatteryStatus();
    // static public System.Single ovrp_GetSystemBatteryLevel()
    // Offset: 0x1266694
    static float ovrp_GetSystemBatteryLevel();
    // static public System.Single ovrp_GetSystemBatteryTemperature()
    // Offset: 0x1266704
    static float ovrp_GetSystemBatteryTemperature();
    // static private System.IntPtr _ovrp_GetSystemProductName()
    // Offset: 0x1266774
    static System::IntPtr _ovrp_GetSystemProductName();
    // static public System.String ovrp_GetSystemProductName()
    // Offset: 0x12667E8
    static ::Il2CppString* ovrp_GetSystemProductName();
    // static public OVRPlugin/Bool ovrp_ShowSystemUI(OVRPlugin/PlatformUI ui)
    // Offset: 0x1266878
    static GlobalNamespace::OVRPlugin::Bool ovrp_ShowSystemUI(GlobalNamespace::OVRPlugin::PlatformUI ui);
    // static public OVRPlugin/Bool ovrp_GetAppMonoscopic()
    // Offset: 0x12668F8
    static GlobalNamespace::OVRPlugin::Bool ovrp_GetAppMonoscopic();
    // static public OVRPlugin/Bool ovrp_SetAppMonoscopic(OVRPlugin/Bool value)
    // Offset: 0x126696C
    static GlobalNamespace::OVRPlugin::Bool ovrp_SetAppMonoscopic(GlobalNamespace::OVRPlugin::Bool value);
    // static public OVRPlugin/Bool ovrp_GetAppHasVrFocus()
    // Offset: 0x12669EC
    static GlobalNamespace::OVRPlugin::Bool ovrp_GetAppHasVrFocus();
    // static public OVRPlugin/Bool ovrp_GetAppShouldQuit()
    // Offset: 0x1266A60
    static GlobalNamespace::OVRPlugin::Bool ovrp_GetAppShouldQuit();
    // static public OVRPlugin/Bool ovrp_GetAppShouldRecenter()
    // Offset: 0x1266AD4
    static GlobalNamespace::OVRPlugin::Bool ovrp_GetAppShouldRecenter();
    // static private System.IntPtr _ovrp_GetAppLatencyTimings()
    // Offset: 0x1266B48
    static System::IntPtr _ovrp_GetAppLatencyTimings();
    // static public System.String ovrp_GetAppLatencyTimings()
    // Offset: 0x1266BBC
    static ::Il2CppString* ovrp_GetAppLatencyTimings();
    // static public OVRPlugin/Bool ovrp_GetUserPresent()
    // Offset: 0x1266C4C
    static GlobalNamespace::OVRPlugin::Bool ovrp_GetUserPresent();
    // static public System.Single ovrp_GetUserIPD()
    // Offset: 0x1266CC0
    static float ovrp_GetUserIPD();
    // static public OVRPlugin/Bool ovrp_SetUserIPD(System.Single value)
    // Offset: 0x1266D30
    static GlobalNamespace::OVRPlugin::Bool ovrp_SetUserIPD(float value);
    // static public System.Single ovrp_GetUserEyeDepth()
    // Offset: 0x1266DB8
    static float ovrp_GetUserEyeDepth();
    // static public OVRPlugin/Bool ovrp_SetUserEyeDepth(System.Single value)
    // Offset: 0x1266E28
    static GlobalNamespace::OVRPlugin::Bool ovrp_SetUserEyeDepth(float value);
    // static public System.Single ovrp_GetUserEyeHeight()
    // Offset: 0x1266EB0
    static float ovrp_GetUserEyeHeight();
    // static public OVRPlugin/Bool ovrp_SetUserEyeHeight(System.Single value)
    // Offset: 0x1266F20
    static GlobalNamespace::OVRPlugin::Bool ovrp_SetUserEyeHeight(float value);
    // static private System.Void .cctor()
    // Offset: 0x1266FA8
    static void _cctor();
  }; // OVRPlugin/OVRP_1_1_0
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRPlugin::OVRP_1_1_0*, "", "OVRPlugin/OVRP_1_1_0");
#pragma pack(pop)
