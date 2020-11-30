// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: MeshRenderer
  class MeshRenderer;
  // Forward declaring type: MaterialPropertyBlock
  class MaterialPropertyBlock;
  // Skipping declaration: Vector3 because it is already included!
}
// Completed forward declares
// Type namespace: VRUIControls
namespace VRUIControls {
  // Autogenerated type: VRUIControls.VRLaserPointer
  class VRLaserPointer : public UnityEngine::MonoBehaviour {
    public:
    // private UnityEngine.MeshRenderer _renderer
    // Offset: 0x18
    UnityEngine::MeshRenderer* renderer;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get static field: static private readonly System.Int32 _fadeStartNormalizedDistanceId
    static int _get__fadeStartNormalizedDistanceId();
    // Set static field: static private readonly System.Int32 _fadeStartNormalizedDistanceId
    static void _set__fadeStartNormalizedDistanceId(int value);
    // Get static field: static private UnityEngine.MaterialPropertyBlock _materialPropertyBlock
    static UnityEngine::MaterialPropertyBlock* _get__materialPropertyBlock();
    // Set static field: static private UnityEngine.MaterialPropertyBlock _materialPropertyBlock
    static void _set__materialPropertyBlock(UnityEngine::MaterialPropertyBlock* value);
    // public System.Void SetLocalPosition(UnityEngine.Vector3 position)
    // Offset: 0x1993C5C
    void SetLocalPosition(UnityEngine::Vector3 position);
    // public System.Void SetLocalScale(UnityEngine.Vector3 scale)
    // Offset: 0x1993CA8
    void SetLocalScale(UnityEngine::Vector3 scale);
    // public System.Void SetFadeDistance(System.Single distance)
    // Offset: 0x1993CF4
    void SetFadeDistance(float distance);
    // public System.Void .ctor()
    // Offset: 0x1993E14
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static VRLaserPointer* New_ctor();
    // static private System.Void .cctor()
    // Offset: 0x1993E1C
    // Implemented from: UnityEngine.Object
    // Base method: System.Void Object::.cctor()
    static void _cctor();
  }; // VRUIControls.VRLaserPointer
  check_size<sizeof(VRLaserPointer), 24 + sizeof(void*) + 8 - (24 + sizeof(void*)) % 8> __VRUIControls_VRLaserPointerSizeCheck;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(VRUIControls::VRLaserPointer*, "VRUIControls", "VRLaserPointer");
#pragma pack(pop)