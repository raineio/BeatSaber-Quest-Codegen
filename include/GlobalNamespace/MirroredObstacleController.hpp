// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: ObstacleControllerBase
#include "GlobalNamespace/ObstacleControllerBase.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: StretchableObstacle
  class StretchableObstacle;
  // Forward declaring type: ObstacleController
  class ObstacleController;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: MirroredObstacleController
  class MirroredObstacleController;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(GlobalNamespace::MirroredObstacleController);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MirroredObstacleController*, "", "MirroredObstacleController");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: MirroredObstacleController
  // [TokenAttribute] Offset: FFFFFFFF
  class MirroredObstacleController : public GlobalNamespace::ObstacleControllerBase {
    public:
    // Nested type: GlobalNamespace::MirroredObstacleController::Pool
    class Pool;
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private StretchableObstacle _stretchableObstacle
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::StretchableObstacle* stretchableObstacle;
    // Field size check
    static_assert(sizeof(GlobalNamespace::StretchableObstacle*) == 0x8);
    // private ObstacleController _followedObstacle
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::ObstacleController* followedObstacle;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ObstacleController*) == 0x8);
    // private UnityEngine.Transform _transform
    // Size: 0x8
    // Offset: 0x38
    UnityEngine::Transform* transform;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // private UnityEngine.Transform _followedTransform
    // Size: 0x8
    // Offset: 0x40
    UnityEngine::Transform* followedTransform;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    public:
    // Get instance field reference: private StretchableObstacle _stretchableObstacle
    GlobalNamespace::StretchableObstacle*& dyn__stretchableObstacle();
    // Get instance field reference: private ObstacleController _followedObstacle
    GlobalNamespace::ObstacleController*& dyn__followedObstacle();
    // Get instance field reference: private UnityEngine.Transform _transform
    UnityEngine::Transform*& dyn__transform();
    // Get instance field reference: private UnityEngine.Transform _followedTransform
    UnityEngine::Transform*& dyn__followedTransform();
    // public System.Void set_hide(System.Boolean value)
    // Offset: 0x115E3AC
    void set_hide(bool value);
    // protected System.Void Awake()
    // Offset: 0x115EA80
    void Awake();
    // protected System.Void OnDestroy()
    // Offset: 0x115EAA8
    void OnDestroy();
    // protected System.Void Update()
    // Offset: 0x115EB80
    void Update();
    // private System.Void RemoveListeners()
    // Offset: 0x115EAAC
    void RemoveListeners();
    // private System.Void UpdatePositionAndRotation()
    // Offset: 0x115EB84
    void UpdatePositionAndRotation();
    // public System.Void Mirror(ObstacleController obstacleController)
    // Offset: 0x115DF4C
    void Mirror(GlobalNamespace::ObstacleController* obstacleController);
    // private System.Void HandleDidStartDissolving(ObstacleControllerBase obstacleController, System.Single duration)
    // Offset: 0x115ECAC
    void HandleDidStartDissolving(GlobalNamespace::ObstacleControllerBase* obstacleController, float duration);
    // public System.Void .ctor()
    // Offset: 0x115ECB8
    // Implemented from: ObstacleControllerBase
    // Base method: System.Void ObstacleControllerBase::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MirroredObstacleController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MirroredObstacleController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MirroredObstacleController*, creationType>()));
    }
  }; // MirroredObstacleController
  #pragma pack(pop)
  static check_size<sizeof(MirroredObstacleController), 64 + sizeof(UnityEngine::Transform*)> __GlobalNamespace_MirroredObstacleControllerSizeCheck;
  static_assert(sizeof(MirroredObstacleController) == 0x48);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MirroredObstacleController::set_hide
// Il2CppName: set_hide
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MirroredObstacleController::*)(bool)>(&GlobalNamespace::MirroredObstacleController::set_hide)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MirroredObstacleController*), "set_hide", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MirroredObstacleController::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MirroredObstacleController::*)()>(&GlobalNamespace::MirroredObstacleController::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MirroredObstacleController*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MirroredObstacleController::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MirroredObstacleController::*)()>(&GlobalNamespace::MirroredObstacleController::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MirroredObstacleController*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MirroredObstacleController::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MirroredObstacleController::*)()>(&GlobalNamespace::MirroredObstacleController::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MirroredObstacleController*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MirroredObstacleController::RemoveListeners
// Il2CppName: RemoveListeners
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MirroredObstacleController::*)()>(&GlobalNamespace::MirroredObstacleController::RemoveListeners)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MirroredObstacleController*), "RemoveListeners", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MirroredObstacleController::UpdatePositionAndRotation
// Il2CppName: UpdatePositionAndRotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MirroredObstacleController::*)()>(&GlobalNamespace::MirroredObstacleController::UpdatePositionAndRotation)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MirroredObstacleController*), "UpdatePositionAndRotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MirroredObstacleController::Mirror
// Il2CppName: Mirror
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MirroredObstacleController::*)(GlobalNamespace::ObstacleController*)>(&GlobalNamespace::MirroredObstacleController::Mirror)> {
  static const MethodInfo* get() {
    static auto* obstacleController = &::il2cpp_utils::GetClassFromName("", "ObstacleController")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MirroredObstacleController*), "Mirror", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obstacleController});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MirroredObstacleController::HandleDidStartDissolving
// Il2CppName: HandleDidStartDissolving
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MirroredObstacleController::*)(GlobalNamespace::ObstacleControllerBase*, float)>(&GlobalNamespace::MirroredObstacleController::HandleDidStartDissolving)> {
  static const MethodInfo* get() {
    static auto* obstacleController = &::il2cpp_utils::GetClassFromName("", "ObstacleControllerBase")->byval_arg;
    static auto* duration = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MirroredObstacleController*), "HandleDidStartDissolving", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obstacleController, duration});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MirroredObstacleController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
