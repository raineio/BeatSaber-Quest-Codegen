// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: SteamVR_TrackedCamera
#include "GlobalNamespace/SteamVR_TrackedCamera.hpp"
// Including type: Valve.VR.VRTextureBounds_t
#include "Valve/VR/VRTextureBounds_t.hpp"
// Including type: Valve.VR.CameraVideoStreamFrameHeader_t
#include "Valve/VR/CameraVideoStreamFrameHeader_t.hpp"
// Including type: SteamVR_Utils
#include "GlobalNamespace/SteamVR_Utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Texture2D
  class Texture2D;
  // Forward declaring type: Vector3
  struct Vector3;
}
// Forward declaring namespace: Valve::VR
namespace Valve::VR {
  // Skipping declaration: EVRTrackedCameraFrameType because it is already included!
  // Skipping declaration: TrackedDevicePose_t because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: SteamVR_TrackedCamera/VideoStreamTexture
  class SteamVR_TrackedCamera::VideoStreamTexture : public ::Il2CppObject {
    public:
    // private System.Boolean <undistorted>k__BackingField
    // Offset: 0x10
    bool undistorted;
    // private Valve.VR.VRTextureBounds_t <frameBounds>k__BackingField
    // Offset: 0x14
    Valve::VR::VRTextureBounds_t frameBounds;
    // private UnityEngine.Texture2D _texture
    // Offset: 0x28
    UnityEngine::Texture2D* texture;
    // private System.Int32 prevFrameCount
    // Offset: 0x30
    int prevFrameCount;
    // private System.UInt32 glTextureId
    // Offset: 0x34
    uint glTextureId;
    // private SteamVR_TrackedCamera/VideoStream videostream
    // Offset: 0x38
    GlobalNamespace::SteamVR_TrackedCamera::VideoStream* videostream;
    // private Valve.VR.CameraVideoStreamFrameHeader_t header
    // Offset: 0x40
    Valve::VR::CameraVideoStreamFrameHeader_t header;
    // public System.Void .ctor(System.UInt32 deviceIndex, System.Boolean undistorted)
    // Offset: 0x12FBA60
    static SteamVR_TrackedCamera::VideoStreamTexture* New_ctor(uint deviceIndex, bool undistorted);
    // public System.Boolean get_undistorted()
    // Offset: 0x12FBFE0
    bool get_undistorted();
    // private System.Void set_undistorted(System.Boolean value)
    // Offset: 0x12FBFE8
    void set_undistorted(bool value);
    // public System.UInt32 get_deviceIndex()
    // Offset: 0x12FBFF4
    uint get_deviceIndex();
    // public System.Boolean get_hasCamera()
    // Offset: 0x12FC010
    bool get_hasCamera();
    // public System.Boolean get_hasTracking()
    // Offset: 0x12FC02C
    bool get_hasTracking();
    // public System.UInt32 get_frameId()
    // Offset: 0x12FC3CC
    uint get_frameId();
    // public Valve.VR.VRTextureBounds_t get_frameBounds()
    // Offset: 0x12FC3F0
    Valve::VR::VRTextureBounds_t get_frameBounds();
    // private System.Void set_frameBounds(Valve.VR.VRTextureBounds_t value)
    // Offset: 0x12FC3FC
    void set_frameBounds(Valve::VR::VRTextureBounds_t value);
    // public Valve.VR.EVRTrackedCameraFrameType get_frameType()
    // Offset: 0x12FC408
    Valve::VR::EVRTrackedCameraFrameType get_frameType();
    // public UnityEngine.Texture2D get_texture()
    // Offset: 0x12FC410
    UnityEngine::Texture2D* get_texture();
    // public SteamVR_Utils/RigidTransform get_transform()
    // Offset: 0x12FC434
    GlobalNamespace::SteamVR_Utils::RigidTransform get_transform();
    // public UnityEngine.Vector3 get_velocity()
    // Offset: 0x12FC6A8
    UnityEngine::Vector3 get_velocity();
    // public UnityEngine.Vector3 get_angularVelocity()
    // Offset: 0x12FC6F8
    UnityEngine::Vector3 get_angularVelocity();
    // public Valve.VR.TrackedDevicePose_t GetPose()
    // Offset: 0x12FC74C
    Valve::VR::TrackedDevicePose_t GetPose();
    // public System.UInt64 Acquire()
    // Offset: 0x12FC77C
    uint64_t Acquire();
    // public System.UInt64 Release()
    // Offset: 0x12FC794
    uint64_t Release();
    // private System.Void Update()
    // Offset: 0x12FC050
    void Update();
  }; // SteamVR_TrackedCamera/VideoStreamTexture
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SteamVR_TrackedCamera::VideoStreamTexture*, "", "SteamVR_TrackedCamera/VideoStreamTexture");
#pragma pack(pop)
