// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: VRPlatformSDK
#include "GlobalNamespace/VRPlatformSDK.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IVRPlatformHelper
  class IVRPlatformHelper;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: ActivateOnPlatform
  class ActivateOnPlatform : public UnityEngine::MonoBehaviour {
    public:
    // private VRPlatformSDK _vrPlatformSdk
    // Offset: 0x18
    GlobalNamespace::VRPlatformSDK vrPlatformSdk;
    // private readonly IVRPlatformHelper _vrPlatformHelper
    // Offset: 0x20
    GlobalNamespace::IVRPlatformHelper* vrPlatformHelper;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // private System.Void Awake()
    // Offset: 0x2108274
    void Awake();
    // public System.Void .ctor()
    // Offset: 0x210835C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static ActivateOnPlatform* New_ctor();
  }; // ActivateOnPlatform
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ActivateOnPlatform*, "", "ActivateOnPlatform");
#pragma pack(pop)
