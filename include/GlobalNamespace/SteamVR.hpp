// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
// Including type: SteamVR_Utils
#include "GlobalNamespace/SteamVR_Utils.hpp"
// Including type: Valve.VR.ETextureType
#include "Valve/VR/ETextureType.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Valve::VR
namespace Valve::VR {
  // Forward declaring type: CVRSystem
  class CVRSystem;
  // Forward declaring type: CVRCompositor
  class CVRCompositor;
  // Forward declaring type: CVROverlay
  class CVROverlay;
  // Forward declaring type: VRTextureBounds_t
  struct VRTextureBounds_t;
  // Forward declaring type: EVRInitError
  struct EVRInitError;
  // Forward declaring type: ETrackedDeviceProperty
  struct ETrackedDeviceProperty;
  // Forward declaring type: TrackedDevicePose_t
  struct TrackedDevicePose_t;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: SteamVR
  class SteamVR : public ::Il2CppObject, public System::IDisposable {
    public:
    // private Valve.VR.CVRSystem <hmd>k__BackingField
    // Offset: 0x10
    Valve::VR::CVRSystem* hmd;
    // private Valve.VR.CVRCompositor <compositor>k__BackingField
    // Offset: 0x18
    Valve::VR::CVRCompositor* compositor;
    // private Valve.VR.CVROverlay <overlay>k__BackingField
    // Offset: 0x20
    Valve::VR::CVROverlay* overlay;
    // private System.Single <sceneWidth>k__BackingField
    // Offset: 0x28
    float sceneWidth;
    // private System.Single <sceneHeight>k__BackingField
    // Offset: 0x2C
    float sceneHeight;
    // private System.Single <aspect>k__BackingField
    // Offset: 0x30
    float aspect;
    // private System.Single <fieldOfView>k__BackingField
    // Offset: 0x34
    float fieldOfView;
    // private UnityEngine.Vector2 <tanHalfFov>k__BackingField
    // Offset: 0x38
    UnityEngine::Vector2 tanHalfFov;
    // private Valve.VR.VRTextureBounds_t[] <textureBounds>k__BackingField
    // Offset: 0x40
    ::Array<Valve::VR::VRTextureBounds_t>* textureBounds;
    // private SteamVR_Utils/RigidTransform[] <eyes>k__BackingField
    // Offset: 0x48
    ::Array<GlobalNamespace::SteamVR_Utils::RigidTransform>* eyes;
    // public Valve.VR.ETextureType textureType
    // Offset: 0x50
    Valve::VR::ETextureType textureType;
    // Get static field: static private System.Boolean _enabled
    static bool _get__enabled();
    // Set static field: static private System.Boolean _enabled
    static void _set__enabled(bool value);
    // Get static field: static private SteamVR _instance
    static GlobalNamespace::SteamVR* _get__instance();
    // Set static field: static private SteamVR _instance
    static void _set__instance(GlobalNamespace::SteamVR* value);
    // Get static field: static private System.Boolean <initializing>k__BackingField
    static bool _get_$initializing$k__BackingField();
    // Set static field: static private System.Boolean <initializing>k__BackingField
    static void _set_$initializing$k__BackingField(bool value);
    // Get static field: static private System.Boolean <calibrating>k__BackingField
    static bool _get_$calibrating$k__BackingField();
    // Set static field: static private System.Boolean <calibrating>k__BackingField
    static void _set_$calibrating$k__BackingField(bool value);
    // Get static field: static private System.Boolean <outOfRange>k__BackingField
    static bool _get_$outOfRange$k__BackingField();
    // Set static field: static private System.Boolean <outOfRange>k__BackingField
    static void _set_$outOfRange$k__BackingField(bool value);
    // Get static field: static public System.Boolean[] connected
    static ::Array<bool>* _get_connected();
    // Set static field: static public System.Boolean[] connected
    static void _set_connected(::Array<bool>* value);
    // static public System.Boolean get_active()
    // Offset: 0x102819C
    static bool get_active();
    // static public System.Boolean get_enabled()
    // Offset: 0x102820C
    static bool get_enabled();
    // static public System.Void set_enabled(System.Boolean value)
    // Offset: 0x10282A8
    static void set_enabled(bool value);
    // static public SteamVR get_instance()
    // Offset: 0x10283EC
    static GlobalNamespace::SteamVR* get_instance();
    // static public System.Boolean get_usingNativeSupport()
    // Offset: 0x102872C
    static bool get_usingNativeSupport();
    // static private SteamVR CreateInstance()
    // Offset: 0x1028504
    static GlobalNamespace::SteamVR* CreateInstance();
    // static private System.Void ReportError(Valve.VR.EVRInitError error)
    // Offset: 0x1028798
    static void ReportError(Valve::VR::EVRInitError error);
    // public Valve.VR.CVRSystem get_hmd()
    // Offset: 0x1029144
    Valve::VR::CVRSystem* get_hmd();
    // private System.Void set_hmd(Valve.VR.CVRSystem value)
    // Offset: 0x102914C
    void set_hmd(Valve::VR::CVRSystem* value);
    // public Valve.VR.CVRCompositor get_compositor()
    // Offset: 0x1029154
    Valve::VR::CVRCompositor* get_compositor();
    // private System.Void set_compositor(Valve.VR.CVRCompositor value)
    // Offset: 0x102915C
    void set_compositor(Valve::VR::CVRCompositor* value);
    // public Valve.VR.CVROverlay get_overlay()
    // Offset: 0x1029164
    Valve::VR::CVROverlay* get_overlay();
    // private System.Void set_overlay(Valve.VR.CVROverlay value)
    // Offset: 0x102916C
    void set_overlay(Valve::VR::CVROverlay* value);
    // static public System.Boolean get_initializing()
    // Offset: 0x1029174
    static bool get_initializing();
    // static private System.Void set_initializing(System.Boolean value)
    // Offset: 0x10291DC
    static void set_initializing(bool value);
    // static public System.Boolean get_calibrating()
    // Offset: 0x102924C
    static bool get_calibrating();
    // static private System.Void set_calibrating(System.Boolean value)
    // Offset: 0x10292B4
    static void set_calibrating(bool value);
    // static public System.Boolean get_outOfRange()
    // Offset: 0x1029324
    static bool get_outOfRange();
    // static private System.Void set_outOfRange(System.Boolean value)
    // Offset: 0x102938C
    static void set_outOfRange(bool value);
    // public System.Single get_sceneWidth()
    // Offset: 0x10293FC
    float get_sceneWidth();
    // private System.Void set_sceneWidth(System.Single value)
    // Offset: 0x1029404
    void set_sceneWidth(float value);
    // public System.Single get_sceneHeight()
    // Offset: 0x102940C
    float get_sceneHeight();
    // private System.Void set_sceneHeight(System.Single value)
    // Offset: 0x1029414
    void set_sceneHeight(float value);
    // public System.Single get_aspect()
    // Offset: 0x102941C
    float get_aspect();
    // private System.Void set_aspect(System.Single value)
    // Offset: 0x1029424
    void set_aspect(float value);
    // public System.Single get_fieldOfView()
    // Offset: 0x102942C
    float get_fieldOfView();
    // private System.Void set_fieldOfView(System.Single value)
    // Offset: 0x1029434
    void set_fieldOfView(float value);
    // public UnityEngine.Vector2 get_tanHalfFov()
    // Offset: 0x102943C
    UnityEngine::Vector2 get_tanHalfFov();
    // private System.Void set_tanHalfFov(UnityEngine.Vector2 value)
    // Offset: 0x1029444
    void set_tanHalfFov(UnityEngine::Vector2 value);
    // public Valve.VR.VRTextureBounds_t[] get_textureBounds()
    // Offset: 0x102944C
    ::Array<Valve::VR::VRTextureBounds_t>* get_textureBounds();
    // private System.Void set_textureBounds(Valve.VR.VRTextureBounds_t[] value)
    // Offset: 0x1029454
    void set_textureBounds(::Array<Valve::VR::VRTextureBounds_t>* value);
    // public SteamVR_Utils/RigidTransform[] get_eyes()
    // Offset: 0x102945C
    ::Array<GlobalNamespace::SteamVR_Utils::RigidTransform>* get_eyes();
    // private System.Void set_eyes(SteamVR_Utils/RigidTransform[] value)
    // Offset: 0x1029464
    void set_eyes(::Array<GlobalNamespace::SteamVR_Utils::RigidTransform>* value);
    // public System.String get_hmd_TrackingSystemName()
    // Offset: 0x102946C
    ::Il2CppString* get_hmd_TrackingSystemName();
    // public System.String get_hmd_ModelNumber()
    // Offset: 0x10295C0
    ::Il2CppString* get_hmd_ModelNumber();
    // public System.String get_hmd_SerialNumber()
    // Offset: 0x10295CC
    ::Il2CppString* get_hmd_SerialNumber();
    // public System.Single get_hmd_SecondsFromVsyncToPhotons()
    // Offset: 0x10295D8
    float get_hmd_SecondsFromVsyncToPhotons();
    // public System.Single get_hmd_DisplayFrequency()
    // Offset: 0x1029624
    float get_hmd_DisplayFrequency();
    // public System.String GetTrackedDeviceString(System.UInt32 deviceId)
    // Offset: 0x1029630
    ::Il2CppString* GetTrackedDeviceString(uint deviceId);
    // public System.String GetStringProperty(Valve.VR.ETrackedDeviceProperty prop, System.UInt32 deviceId)
    // Offset: 0x1029478
    ::Il2CppString* GetStringProperty(Valve::VR::ETrackedDeviceProperty prop, uint deviceId);
    // public System.Single GetFloatProperty(Valve.VR.ETrackedDeviceProperty prop, System.UInt32 deviceId)
    // Offset: 0x10295E4
    float GetFloatProperty(Valve::VR::ETrackedDeviceProperty prop, uint deviceId);
    // private System.Void OnInitializing(System.Boolean initializing)
    // Offset: 0x1029718
    void OnInitializing(bool initializing);
    // private System.Void OnCalibrating(System.Boolean calibrating)
    // Offset: 0x10297CC
    void OnCalibrating(bool calibrating);
    // private System.Void OnOutOfRange(System.Boolean outOfRange)
    // Offset: 0x1029880
    void OnOutOfRange(bool outOfRange);
    // private System.Void OnDeviceConnected(System.Int32 i, System.Boolean connected)
    // Offset: 0x1029934
    void OnDeviceConnected(int i, bool connected);
    // private System.Void OnNewPoses(Valve.VR.TrackedDevicePose_t[] poses)
    // Offset: 0x10299D8
    void OnNewPoses(::Array<Valve::VR::TrackedDevicePose_t>* poses);
    // private System.Void Dispose(System.Boolean disposing)
    // Offset: 0x1029EF0
    void Dispose(bool disposing);
    // static public System.Void SafeDispose()
    // Offset: 0x1028348
    static void SafeDispose();
    // static private System.Void .cctor()
    // Offset: 0x102A1AC
    static void _cctor();
    // private System.Void .ctor()
    // Offset: 0x10288EC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static SteamVR* New_ctor();
    // protected override System.Void Finalize()
    // Offset: 0x1029E84
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
    // public System.Void Dispose()
    // Offset: 0x102A138
    // Implemented from: System.IDisposable
    // Base method: System.Void IDisposable::Dispose()
    void Dispose();
    // Creating proxy method: System_IDisposable_Dispose
    // Maps to method: Dispose
    void System_IDisposable_Dispose();
  }; // SteamVR
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SteamVR*, "", "SteamVR");
#pragma pack(pop)
