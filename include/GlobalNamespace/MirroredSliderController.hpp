// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: SliderControllerBase
#include "GlobalNamespace/SliderControllerBase.hpp"
// Including type: ISliderDidStartDissolvingEvent
#include "GlobalNamespace/ISliderDidStartDissolvingEvent.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IBeatmapObjectSpawnController
  class IBeatmapObjectSpawnController;
  // Forward declaring type: SliderController
  class SliderController;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: MeshFilter
  class MeshFilter;
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: MirroredSliderController
  class MirroredSliderController;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::MirroredSliderController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MirroredSliderController*, "", "MirroredSliderController");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x58
  #pragma pack(push, 1)
  // Autogenerated type: MirroredSliderController
  // [TokenAttribute] Offset: FFFFFFFF
  class MirroredSliderController : public ::GlobalNamespace::SliderControllerBase/*, public ::GlobalNamespace::ISliderDidStartDissolvingEvent*/ {
    public:
    // Writing base type padding for base size: 0x29 to desired offset: 0x30
    char ___base_padding[0x7] = {};
    // Nested type: ::GlobalNamespace::MirroredSliderController::Pool
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
    // private UnityEngine.MeshFilter _meshFilter
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::MeshFilter* meshFilter;
    // Field size check
    static_assert(sizeof(::UnityEngine::MeshFilter*) == 0x8);
    // [InjectAttribute] Offset: 0x10B4D3C
    // private readonly IBeatmapObjectSpawnController _beatmapObjectSpawnController
    // Size: 0x8
    // Offset: 0x38
    ::GlobalNamespace::IBeatmapObjectSpawnController* beatmapObjectSpawnController;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::IBeatmapObjectSpawnController*) == 0x8);
    // private SliderController _followedSlider
    // Size: 0x8
    // Offset: 0x40
    ::GlobalNamespace::SliderController* followedSlider;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::SliderController*) == 0x8);
    // private UnityEngine.Transform _transform
    // Size: 0x8
    // Offset: 0x48
    ::UnityEngine::Transform* transform;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // private UnityEngine.Transform _followedTransform
    // Size: 0x8
    // Offset: 0x50
    ::UnityEngine::Transform* followedTransform;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::GlobalNamespace::ISliderDidStartDissolvingEvent
    operator ::GlobalNamespace::ISliderDidStartDissolvingEvent() noexcept {
      return *reinterpret_cast<::GlobalNamespace::ISliderDidStartDissolvingEvent*>(this);
    }
    // Get instance field reference: private UnityEngine.MeshFilter _meshFilter
    ::UnityEngine::MeshFilter*& dyn__meshFilter();
    // Get instance field reference: private readonly IBeatmapObjectSpawnController _beatmapObjectSpawnController
    ::GlobalNamespace::IBeatmapObjectSpawnController*& dyn__beatmapObjectSpawnController();
    // Get instance field reference: private SliderController _followedSlider
    ::GlobalNamespace::SliderController*& dyn__followedSlider();
    // Get instance field reference: private UnityEngine.Transform _transform
    ::UnityEngine::Transform*& dyn__transform();
    // Get instance field reference: private UnityEngine.Transform _followedTransform
    ::UnityEngine::Transform*& dyn__followedTransform();
    // public System.Void set_hide(System.Boolean value)
    // Offset: 0x132D6AC
    void set_hide(bool value);
    // protected System.Void Awake()
    // Offset: 0x132E084
    void Awake();
    // protected System.Void Update()
    // Offset: 0x132E0AC
    void Update();
    // protected System.Void OnDestroy()
    // Offset: 0x132E28C
    void OnDestroy();
    // public System.Void Mirror(SliderController sliderController)
    // Offset: 0x132CD14
    void Mirror(::GlobalNamespace::SliderController* sliderController);
    // private System.Void UpdateMaterialPropertyBlock(System.Single timeSinceHeadNoteJump)
    // Offset: 0x132E160
    void UpdateMaterialPropertyBlock(float timeSinceHeadNoteJump);
    // private System.Void RemoveListeners()
    // Offset: 0x132E290
    void RemoveListeners();
    // public System.Void HandleSliderDidStartDissolving(SliderController sliderController, System.Single duration)
    // Offset: 0x132E390
    void HandleSliderDidStartDissolving(::GlobalNamespace::SliderController* sliderController, float duration);
    // private System.Void Dissolve(System.Single duration)
    // Offset: 0x132E3B8
    void Dissolve(float duration);
    // public System.Void .ctor()
    // Offset: 0x132E3E0
    // Implemented from: SliderControllerBase
    // Base method: System.Void SliderControllerBase::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MirroredSliderController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MirroredSliderController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MirroredSliderController*, creationType>()));
    }
  }; // MirroredSliderController
  #pragma pack(pop)
  static check_size<sizeof(MirroredSliderController), 80 + sizeof(::UnityEngine::Transform*)> __GlobalNamespace_MirroredSliderControllerSizeCheck;
  static_assert(sizeof(MirroredSliderController) == 0x58);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MirroredSliderController::set_hide
// Il2CppName: set_hide
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MirroredSliderController::*)(bool)>(&GlobalNamespace::MirroredSliderController::set_hide)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MirroredSliderController*), "set_hide", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MirroredSliderController::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MirroredSliderController::*)()>(&GlobalNamespace::MirroredSliderController::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MirroredSliderController*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MirroredSliderController::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MirroredSliderController::*)()>(&GlobalNamespace::MirroredSliderController::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MirroredSliderController*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MirroredSliderController::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MirroredSliderController::*)()>(&GlobalNamespace::MirroredSliderController::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MirroredSliderController*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MirroredSliderController::Mirror
// Il2CppName: Mirror
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MirroredSliderController::*)(::GlobalNamespace::SliderController*)>(&GlobalNamespace::MirroredSliderController::Mirror)> {
  static const MethodInfo* get() {
    static auto* sliderController = &::il2cpp_utils::GetClassFromName("", "SliderController")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MirroredSliderController*), "Mirror", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sliderController});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MirroredSliderController::UpdateMaterialPropertyBlock
// Il2CppName: UpdateMaterialPropertyBlock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MirroredSliderController::*)(float)>(&GlobalNamespace::MirroredSliderController::UpdateMaterialPropertyBlock)> {
  static const MethodInfo* get() {
    static auto* timeSinceHeadNoteJump = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MirroredSliderController*), "UpdateMaterialPropertyBlock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{timeSinceHeadNoteJump});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MirroredSliderController::RemoveListeners
// Il2CppName: RemoveListeners
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MirroredSliderController::*)()>(&GlobalNamespace::MirroredSliderController::RemoveListeners)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MirroredSliderController*), "RemoveListeners", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MirroredSliderController::HandleSliderDidStartDissolving
// Il2CppName: HandleSliderDidStartDissolving
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MirroredSliderController::*)(::GlobalNamespace::SliderController*, float)>(&GlobalNamespace::MirroredSliderController::HandleSliderDidStartDissolving)> {
  static const MethodInfo* get() {
    static auto* sliderController = &::il2cpp_utils::GetClassFromName("", "SliderController")->byval_arg;
    static auto* duration = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MirroredSliderController*), "HandleSliderDidStartDissolving", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sliderController, duration});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MirroredSliderController::Dissolve
// Il2CppName: Dissolve
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MirroredSliderController::*)(float)>(&GlobalNamespace::MirroredSliderController::Dissolve)> {
  static const MethodInfo* get() {
    static auto* duration = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MirroredSliderController*), "Dissolve", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{duration});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MirroredSliderController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!