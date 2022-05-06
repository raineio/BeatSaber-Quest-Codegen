// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MainCamera
  class MainCamera;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: MoveAndRotateWithMainCamera
  class MoveAndRotateWithMainCamera;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::MoveAndRotateWithMainCamera);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MoveAndRotateWithMainCamera*, "", "MoveAndRotateWithMainCamera");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: MoveAndRotateWithMainCamera
  // [TokenAttribute] Offset: FFFFFFFF
  class MoveAndRotateWithMainCamera : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // [InjectAttribute] Offset: 0x10E3E28
    // private readonly MainCamera _mainCamera
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::MainCamera* mainCamera;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::MainCamera*) == 0x8);
    // private UnityEngine.Quaternion _rotationOffset
    // Size: 0x10
    // Offset: 0x20
    ::UnityEngine::Quaternion rotationOffset;
    // Field size check
    static_assert(sizeof(::UnityEngine::Quaternion) == 0x10);
    // private UnityEngine.Vector3 _positionOffset
    // Size: 0xC
    // Offset: 0x30
    ::UnityEngine::Vector3 positionOffset;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // Padding between fields: positionOffset and: transform
    char __padding2[0x4] = {};
    // private UnityEngine.Transform _transform
    // Size: 0x8
    // Offset: 0x40
    ::UnityEngine::Transform* transform;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private readonly MainCamera _mainCamera
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::MainCamera*& dyn__mainCamera();
    // Get instance field reference: private UnityEngine.Quaternion _rotationOffset
    [[deprecated("Use field access instead!")]] ::UnityEngine::Quaternion& dyn__rotationOffset();
    // Get instance field reference: private UnityEngine.Vector3 _positionOffset
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn__positionOffset();
    // Get instance field reference: private UnityEngine.Transform _transform
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn__transform();
    // public System.Void .ctor()
    // Offset: 0x13C6958
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MoveAndRotateWithMainCamera* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MoveAndRotateWithMainCamera::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MoveAndRotateWithMainCamera*, creationType>()));
    }
    // protected System.Void Awake()
    // Offset: 0x13C6784
    void Awake();
    // protected System.Void LateUpdate()
    // Offset: 0x13C67DC
    void LateUpdate();
  }; // MoveAndRotateWithMainCamera
  #pragma pack(pop)
  static check_size<sizeof(MoveAndRotateWithMainCamera), 64 + sizeof(::UnityEngine::Transform*)> __GlobalNamespace_MoveAndRotateWithMainCameraSizeCheck;
  static_assert(sizeof(MoveAndRotateWithMainCamera) == 0x48);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MoveAndRotateWithMainCamera::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::MoveAndRotateWithMainCamera::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MoveAndRotateWithMainCamera::*)()>(&GlobalNamespace::MoveAndRotateWithMainCamera::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MoveAndRotateWithMainCamera*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MoveAndRotateWithMainCamera::LateUpdate
// Il2CppName: LateUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MoveAndRotateWithMainCamera::*)()>(&GlobalNamespace::MoveAndRotateWithMainCamera::LateUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MoveAndRotateWithMainCamera*), "LateUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
