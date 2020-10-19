// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.KeyCode
#include "UnityEngine/KeyCode.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Vector3 because it is already included!
  // Forward declaring type: Camera
  class Camera;
  // Forward declaring type: Cubemap
  class Cubemap;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: OVRCubemapCapture
  class OVRCubemapCapture : public UnityEngine::MonoBehaviour {
    public:
    // public System.Boolean autoTriggerAfterLaunch
    // Offset: 0x18
    bool autoTriggerAfterLaunch;
    // public System.Single autoTriggerDelay
    // Offset: 0x1C
    float autoTriggerDelay;
    // private System.Single autoTriggerElapse
    // Offset: 0x20
    float autoTriggerElapse;
    // public UnityEngine.KeyCode triggeredByKey
    // Offset: 0x24
    UnityEngine::KeyCode triggeredByKey;
    // public System.String pathName
    // Offset: 0x28
    ::Il2CppString* pathName;
    // public System.Int32 cubemapSize
    // Offset: 0x30
    int cubemapSize;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // private System.Void Update()
    // Offset: 0xF71A30
    void Update();
    // static public System.Void TriggerCubemapCapture(UnityEngine.Vector3 capturePos, System.Int32 cubemapSize, System.String pathName)
    // Offset: 0xF71AE8
    static void TriggerCubemapCapture(UnityEngine::Vector3 capturePos, int cubemapSize, ::Il2CppString* pathName);
    // static public System.Void RenderIntoCubemap(UnityEngine.Camera ownerCamera, UnityEngine.Cubemap outCubemap)
    // Offset: 0xF71D60
    static void RenderIntoCubemap(UnityEngine::Camera* ownerCamera, UnityEngine::Cubemap* outCubemap);
    // static public System.Boolean SaveCubemapCapture(UnityEngine.Cubemap cubemap, System.String pathName)
    // Offset: 0xF723BC
    static bool SaveCubemapCapture(UnityEngine::Cubemap* cubemap, ::Il2CppString* pathName);
    // public System.Void .ctor()
    // Offset: 0xF72AB4
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static OVRCubemapCapture* New_ctor();
  }; // OVRCubemapCapture
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRCubemapCapture*, "", "OVRCubemapCapture");
#pragma pack(pop)
