// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVRSystem
#include "OVR/OpenVR/IVRSystem.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: IntPtr because it is already included!
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Forward declaring namespace: OVR::OpenVR
namespace OVR::OpenVR {
  // Forward declaring type: HiddenAreaMesh_t
  struct HiddenAreaMesh_t;
  // Forward declaring type: EVREye
  struct EVREye;
  // Forward declaring type: EHiddenAreaMeshType
  struct EHiddenAreaMeshType;
}
// Completed forward declares
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Autogenerated type: OVR.OpenVR.IVRSystem/_GetHiddenAreaMesh
  class IVRSystem::_GetHiddenAreaMesh : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1C94EE4
    static IVRSystem::_GetHiddenAreaMesh* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public OVR.OpenVR.HiddenAreaMesh_t Invoke(OVR.OpenVR.EVREye eEye, OVR.OpenVR.EHiddenAreaMeshType type)
    // Offset: 0x1C94EF8
    OVR::OpenVR::HiddenAreaMesh_t Invoke(OVR::OpenVR::EVREye eEye, OVR::OpenVR::EHiddenAreaMeshType type);
    // public System.IAsyncResult BeginInvoke(OVR.OpenVR.EVREye eEye, OVR.OpenVR.EHiddenAreaMeshType type, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1C9518C
    System::IAsyncResult* BeginInvoke(OVR::OpenVR::EVREye eEye, OVR::OpenVR::EHiddenAreaMeshType type, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public OVR.OpenVR.HiddenAreaMesh_t EndInvoke(System.IAsyncResult result)
    // Offset: 0x1C95234
    OVR::OpenVR::HiddenAreaMesh_t EndInvoke(System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRSystem/_GetHiddenAreaMesh
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRSystem::_GetHiddenAreaMesh*, "OVR.OpenVR", "IVRSystem/_GetHiddenAreaMesh");
#pragma pack(pop)
