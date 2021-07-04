// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: ObstacleControllerBase
  class ObstacleControllerBase;
  // Forward declaring type: CutoutAnimateEffect
  class CutoutAnimateEffect;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: ObstacleDissolve
  class ObstacleDissolve : public UnityEngine::MonoBehaviour {
    public:
    // private ObstacleControllerBase _obstacleController
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::ObstacleControllerBase* obstacleController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ObstacleControllerBase*) == 0x8);
    // private CutoutAnimateEffect _cutoutAnimateEffect
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::CutoutAnimateEffect* cutoutAnimateEffect;
    // Field size check
    static_assert(sizeof(GlobalNamespace::CutoutAnimateEffect*) == 0x8);
    // Creating value type constructor for type: ObstacleDissolve
    ObstacleDissolve(GlobalNamespace::ObstacleControllerBase* obstacleController_ = {}, GlobalNamespace::CutoutAnimateEffect* cutoutAnimateEffect_ = {}) noexcept : obstacleController{obstacleController_}, cutoutAnimateEffect{cutoutAnimateEffect_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Void Awake()
    // Offset: 0x11DD838
    void Awake();
    // protected System.Void OnDestroy()
    // Offset: 0x11DD910
    void OnDestroy();
    // private System.Void HandleObstacleDidInitEvent(ObstacleControllerBase obstacleController)
    // Offset: 0x11DDA2C
    void HandleObstacleDidInitEvent(GlobalNamespace::ObstacleControllerBase* obstacleController);
    // private System.Void HandleObcstacleDidStartDissolvingEvent(ObstacleControllerBase obstacleController, System.Single duration)
    // Offset: 0x11DDA48
    void HandleObcstacleDidStartDissolvingEvent(GlobalNamespace::ObstacleControllerBase* obstacleController, float duration);
    // public System.Void .ctor()
    // Offset: 0x11DDA70
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ObstacleDissolve* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ObstacleDissolve::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ObstacleDissolve*, creationType>()));
    }
  }; // ObstacleDissolve
  #pragma pack(pop)
  static check_size<sizeof(ObstacleDissolve), 32 + sizeof(GlobalNamespace::CutoutAnimateEffect*)> __GlobalNamespace_ObstacleDissolveSizeCheck;
  static_assert(sizeof(ObstacleDissolve) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ObstacleDissolve*, "", "ObstacleDissolve");
// Writing MetadataGetter for method: GlobalNamespace::ObstacleDissolve::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ObstacleDissolve::*)()>(&GlobalNamespace::ObstacleDissolve::Awake)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ObstacleDissolve*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ObstacleDissolve::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ObstacleDissolve::*)()>(&GlobalNamespace::ObstacleDissolve::OnDestroy)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ObstacleDissolve*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ObstacleDissolve::HandleObstacleDidInitEvent
// Il2CppName: HandleObstacleDidInitEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ObstacleDissolve::*)(GlobalNamespace::ObstacleControllerBase*)>(&GlobalNamespace::ObstacleDissolve::HandleObstacleDidInitEvent)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ObstacleDissolve*), "HandleObstacleDidInitEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<GlobalNamespace::ObstacleControllerBase*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ObstacleDissolve::HandleObcstacleDidStartDissolvingEvent
// Il2CppName: HandleObcstacleDidStartDissolvingEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ObstacleDissolve::*)(GlobalNamespace::ObstacleControllerBase*, float)>(&GlobalNamespace::ObstacleDissolve::HandleObcstacleDidStartDissolvingEvent)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ObstacleDissolve*), "HandleObcstacleDidStartDissolvingEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<GlobalNamespace::ObstacleControllerBase*>(), ::il2cpp_utils::ExtractIndependentType<float>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ObstacleDissolve::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
