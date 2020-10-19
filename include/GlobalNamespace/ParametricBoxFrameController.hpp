// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: MeshRenderer
  class MeshRenderer;
  // Skipping declaration: Vector3 because it is already included!
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MaterialPropertyBlockController
  class MaterialPropertyBlockController;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: ParametricBoxFrameController
  class ParametricBoxFrameController : public UnityEngine::MonoBehaviour {
    public:
    // public System.Single width
    // Offset: 0x18
    float width;
    // public System.Single height
    // Offset: 0x1C
    float height;
    // public System.Single length
    // Offset: 0x20
    float length;
    // public System.Single edgeSize
    // Offset: 0x24
    float edgeSize;
    // public UnityEngine.Color color
    // Offset: 0x28
    UnityEngine::Color color;
    // private UnityEngine.MeshRenderer _meshRenderer
    // Offset: 0x38
    UnityEngine::MeshRenderer* meshRenderer;
    // private MaterialPropertyBlockController _materialPropertyBlockController
    // Offset: 0x40
    GlobalNamespace::MaterialPropertyBlockController* materialPropertyBlockController;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get static field: static private readonly System.Int32 _colorID
    static int _get__colorID();
    // Set static field: static private readonly System.Int32 _colorID
    static void _set__colorID(int value);
    // Get static field: static private readonly System.Int32 _sizeParamsID
    static int _get__sizeParamsID();
    // Set static field: static private readonly System.Int32 _sizeParamsID
    static void _set__sizeParamsID(int value);
    // public System.Void set_localPosition(UnityEngine.Vector3 value)
    // Offset: 0x1D023C4
    void set_localPosition(UnityEngine::Vector3 value);
    // protected System.Void Awake()
    // Offset: 0x1D02410
    void Awake();
    // protected System.Void OnEnable()
    // Offset: 0x1D02430
    void OnEnable();
    // protected System.Void OnDisable()
    // Offset: 0x1D025DC
    void OnDisable();
    // public System.Void Refresh()
    // Offset: 0x1D02464
    void Refresh();
    // public System.Void .ctor()
    // Offset: 0x1D025FC
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static ParametricBoxFrameController* New_ctor();
    // static private System.Void .cctor()
    // Offset: 0x1D02610
    // Implemented from: UnityEngine.Object
    // Base method: System.Void Object::.cctor()
    static void _cctor();
  }; // ParametricBoxFrameController
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ParametricBoxFrameController*, "", "ParametricBoxFrameController");
#pragma pack(pop)
