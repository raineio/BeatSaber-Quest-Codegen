// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.KeyCode
#include "UnityEngine/KeyCode.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: OVRCameraRig
  class OVRCameraRig;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: OVRGridCube
  // [TokenAttribute] Offset: FFFFFFFF
  class OVRGridCube : public UnityEngine::MonoBehaviour {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    private:
    #endif
    // public UnityEngine.KeyCode GridKey
    // Size: 0x4
    // Offset: 0x18
    UnityEngine::KeyCode GridKey;
    // Field size check
    static_assert(sizeof(UnityEngine::KeyCode) == 0x4);
    // Padding between fields: GridKey and: CubeGrid
    char __padding0[0x4] = {};
    // private UnityEngine.GameObject CubeGrid
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::GameObject* CubeGrid;
    // Field size check
    static_assert(sizeof(UnityEngine::GameObject*) == 0x8);
    // private System.Boolean CubeGridOn
    // Size: 0x1
    // Offset: 0x28
    bool CubeGridOn;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean CubeSwitchColorOld
    // Size: 0x1
    // Offset: 0x29
    bool CubeSwitchColorOld;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean CubeSwitchColor
    // Size: 0x1
    // Offset: 0x2A
    bool CubeSwitchColor;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: CubeSwitchColor and: gridSizeX
    char __padding4[0x1] = {};
    // private System.Int32 gridSizeX
    // Size: 0x4
    // Offset: 0x2C
    int gridSizeX;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 gridSizeY
    // Size: 0x4
    // Offset: 0x30
    int gridSizeY;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 gridSizeZ
    // Size: 0x4
    // Offset: 0x34
    int gridSizeZ;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Single gridScale
    // Size: 0x4
    // Offset: 0x38
    float gridScale;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single cubeScale
    // Size: 0x4
    // Offset: 0x3C
    float cubeScale;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private OVRCameraRig CameraController
    // Size: 0x8
    // Offset: 0x40
    GlobalNamespace::OVRCameraRig* CameraController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::OVRCameraRig*) == 0x8);
    public:
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field reference: public UnityEngine.KeyCode GridKey
    UnityEngine::KeyCode& dyn_GridKey();
    // Get instance field reference: private UnityEngine.GameObject CubeGrid
    UnityEngine::GameObject*& dyn_CubeGrid();
    // Get instance field reference: private System.Boolean CubeGridOn
    bool& dyn_CubeGridOn();
    // Get instance field reference: private System.Boolean CubeSwitchColorOld
    bool& dyn_CubeSwitchColorOld();
    // Get instance field reference: private System.Boolean CubeSwitchColor
    bool& dyn_CubeSwitchColor();
    // Get instance field reference: private System.Int32 gridSizeX
    int& dyn_gridSizeX();
    // Get instance field reference: private System.Int32 gridSizeY
    int& dyn_gridSizeY();
    // Get instance field reference: private System.Int32 gridSizeZ
    int& dyn_gridSizeZ();
    // Get instance field reference: private System.Single gridScale
    float& dyn_gridScale();
    // Get instance field reference: private System.Single cubeScale
    float& dyn_cubeScale();
    // Get instance field reference: private OVRCameraRig CameraController
    GlobalNamespace::OVRCameraRig*& dyn_CameraController();
    // private System.Void Update()
    // Offset: 0x16C3900
    void Update();
    // public System.Void SetOVRCameraController(ref OVRCameraRig cameraController)
    // Offset: 0x16C3B68
    void SetOVRCameraController(ByRef<GlobalNamespace::OVRCameraRig*> cameraController);
    // private System.Void UpdateCubeGrid()
    // Offset: 0x16C3904
    void UpdateCubeGrid();
    // private System.Void CreateCubeGrid()
    // Offset: 0x16C3B74
    void CreateCubeGrid();
    // private System.Void CubeGridSwitchColor(System.Boolean CubeSwitchColor)
    // Offset: 0x16C3F20
    void CubeGridSwitchColor(bool CubeSwitchColor);
    // public System.Void .ctor()
    // Offset: 0x16C42C4
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OVRGridCube* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::OVRGridCube::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OVRGridCube*, creationType>()));
    }
  }; // OVRGridCube
  #pragma pack(pop)
  static check_size<sizeof(OVRGridCube), 64 + sizeof(GlobalNamespace::OVRCameraRig*)> __GlobalNamespace_OVRGridCubeSizeCheck;
  static_assert(sizeof(OVRGridCube) == 0x48);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRGridCube*, "", "OVRGridCube");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OVRGridCube::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRGridCube::*)()>(&GlobalNamespace::OVRGridCube::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRGridCube*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRGridCube::SetOVRCameraController
// Il2CppName: SetOVRCameraController
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRGridCube::*)(ByRef<GlobalNamespace::OVRCameraRig*>)>(&GlobalNamespace::OVRGridCube::SetOVRCameraController)> {
  static const MethodInfo* get() {
    static auto* cameraController = &::il2cpp_utils::GetClassFromName("", "OVRCameraRig")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRGridCube*), "SetOVRCameraController", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cameraController});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRGridCube::UpdateCubeGrid
// Il2CppName: UpdateCubeGrid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRGridCube::*)()>(&GlobalNamespace::OVRGridCube::UpdateCubeGrid)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRGridCube*), "UpdateCubeGrid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRGridCube::CreateCubeGrid
// Il2CppName: CreateCubeGrid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRGridCube::*)()>(&GlobalNamespace::OVRGridCube::CreateCubeGrid)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRGridCube*), "CreateCubeGrid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRGridCube::CubeGridSwitchColor
// Il2CppName: CubeGridSwitchColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRGridCube::*)(bool)>(&GlobalNamespace::OVRGridCube::CubeGridSwitchColor)> {
  static const MethodInfo* get() {
    static auto* CubeSwitchColor = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRGridCube*), "CubeGridSwitchColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{CubeSwitchColor});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRGridCube::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
