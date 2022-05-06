// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: BaseStateTransition`1
#include "GlobalNamespace/BaseStateTransition_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: RectTransform
  class RectTransform;
  // Skipping declaration: Vector3 because it is already included!
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: Vector3TransitionSO
  class Vector3TransitionSO;
  // Forward declaring type: BaseTransitionSO
  class BaseTransitionSO;
}
// Forward declaring namespace: Tweening
namespace Tweening {
  // Forward declaring type: Vector3Tween
  class Vector3Tween;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: ScaleRectTransformViewStateTransition
  class ScaleRectTransformViewStateTransition;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::ScaleRectTransformViewStateTransition);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ScaleRectTransformViewStateTransition*, "", "ScaleRectTransformViewStateTransition");
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: ScaleRectTransformViewStateTransition
  // [TokenAttribute] Offset: FFFFFFFF
  // [AddComponentMenu] Offset: 10CB550
  class ScaleRectTransformViewStateTransition : public ::GlobalNamespace::BaseStateTransition_1<::UnityEngine::RectTransform*> {
    public:
    public:
    // [SpaceAttribute] Offset: 0x10DD418
    // private Vector3TransitionSO _transition
    // Size: 0x8
    // Offset: 0x28
    ::GlobalNamespace::Vector3TransitionSO* transition;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::Vector3TransitionSO*) == 0x8);
    // private Tweening.Vector3Tween _vectorTween
    // Size: 0x8
    // Offset: 0x30
    ::Tweening::Vector3Tween* vectorTween;
    // Field size check
    static_assert(sizeof(::Tweening::Vector3Tween*) == 0x8);
    public:
    // Get instance field reference: private Vector3TransitionSO _transition
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::Vector3TransitionSO*& dyn__transition();
    // Get instance field reference: private Tweening.Vector3Tween _vectorTween
    [[deprecated("Use field access instead!")]] ::Tweening::Vector3Tween*& dyn__vectorTween();
    // private System.Void StartTween(UnityEngine.Vector3 endScale)
    // Offset: 0x14632A4
    void StartTween(::UnityEngine::Vector3 endScale);
    // private System.Void <StartTween>b__16_0(UnityEngine.Vector3 pos)
    // Offset: 0x14636B4
    void $StartTween$b__16_0(::UnityEngine::Vector3 pos);
    // private System.Void <StartTween>b__16_1()
    // Offset: 0x14636D0
    void $StartTween$b__16_1();
    // protected override BaseTransitionSO get_transition()
    // Offset: 0x146327C
    // Implemented from: BaseStateTransition
    // Base method: BaseTransitionSO BaseStateTransition::get_transition()
    ::GlobalNamespace::BaseTransitionSO* get_transition();
    // public System.Void .ctor()
    // Offset: 0x1463664
    // Implemented from: BaseStateTransition`1
    // Base method: System.Void BaseStateTransition_1::.ctor()
    // Base method: System.Void BaseStateTransition::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ScaleRectTransformViewStateTransition* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::ScaleRectTransformViewStateTransition::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ScaleRectTransformViewStateTransition*, creationType>()));
    }
    // protected override System.Void TransitionToNormalState()
    // Offset: 0x1463284
    // Implemented from: BaseStateTransition
    // Base method: System.Void BaseStateTransition::TransitionToNormalState()
    void TransitionToNormalState();
    // protected override System.Void TransitionToHighlightedState()
    // Offset: 0x14634A4
    // Implemented from: BaseStateTransition
    // Base method: System.Void BaseStateTransition::TransitionToHighlightedState()
    void TransitionToHighlightedState();
    // protected override System.Void TransitionToPressedState()
    // Offset: 0x14634C4
    // Implemented from: BaseStateTransition
    // Base method: System.Void BaseStateTransition::TransitionToPressedState()
    void TransitionToPressedState();
    // protected override System.Void TransitionToDisabledState()
    // Offset: 0x14634E4
    // Implemented from: BaseStateTransition
    // Base method: System.Void BaseStateTransition::TransitionToDisabledState()
    void TransitionToDisabledState();
    // protected override System.Void TransitionToSelectedState()
    // Offset: 0x1463504
    // Implemented from: BaseStateTransition
    // Base method: System.Void BaseStateTransition::TransitionToSelectedState()
    void TransitionToSelectedState();
    // protected override System.Void TransitionToSelectedAndHighlightedState()
    // Offset: 0x1463524
    // Implemented from: BaseStateTransition
    // Base method: System.Void BaseStateTransition::TransitionToSelectedAndHighlightedState()
    void TransitionToSelectedAndHighlightedState();
    // protected override System.Void SetNormalState()
    // Offset: 0x1463544
    // Implemented from: BaseStateTransition
    // Base method: System.Void BaseStateTransition::SetNormalState()
    void SetNormalState();
    // protected override System.Void SetHighlightedState()
    // Offset: 0x1463574
    // Implemented from: BaseStateTransition
    // Base method: System.Void BaseStateTransition::SetHighlightedState()
    void SetHighlightedState();
    // protected override System.Void SetPressedState()
    // Offset: 0x14635A4
    // Implemented from: BaseStateTransition
    // Base method: System.Void BaseStateTransition::SetPressedState()
    void SetPressedState();
    // protected override System.Void SetDisabledState()
    // Offset: 0x14635D4
    // Implemented from: BaseStateTransition
    // Base method: System.Void BaseStateTransition::SetDisabledState()
    void SetDisabledState();
    // protected override System.Void SetSelectedState()
    // Offset: 0x1463604
    // Implemented from: BaseStateTransition
    // Base method: System.Void BaseStateTransition::SetSelectedState()
    void SetSelectedState();
    // protected override System.Void SetSelectedAndHighlightedState()
    // Offset: 0x1463634
    // Implemented from: BaseStateTransition
    // Base method: System.Void BaseStateTransition::SetSelectedAndHighlightedState()
    void SetSelectedAndHighlightedState();
  }; // ScaleRectTransformViewStateTransition
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ScaleRectTransformViewStateTransition::StartTween
// Il2CppName: StartTween
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ScaleRectTransformViewStateTransition::*)(::UnityEngine::Vector3)>(&GlobalNamespace::ScaleRectTransformViewStateTransition::StartTween)> {
  static const MethodInfo* get() {
    static auto* endScale = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ScaleRectTransformViewStateTransition*), "StartTween", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{endScale});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ScaleRectTransformViewStateTransition::$StartTween$b__16_0
// Il2CppName: <StartTween>b__16_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ScaleRectTransformViewStateTransition::*)(::UnityEngine::Vector3)>(&GlobalNamespace::ScaleRectTransformViewStateTransition::$StartTween$b__16_0)> {
  static const MethodInfo* get() {
    static auto* pos = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ScaleRectTransformViewStateTransition*), "<StartTween>b__16_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pos});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ScaleRectTransformViewStateTransition::$StartTween$b__16_1
// Il2CppName: <StartTween>b__16_1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ScaleRectTransformViewStateTransition::*)()>(&GlobalNamespace::ScaleRectTransformViewStateTransition::$StartTween$b__16_1)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ScaleRectTransformViewStateTransition*), "<StartTween>b__16_1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ScaleRectTransformViewStateTransition::get_transition
// Il2CppName: get_transition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BaseTransitionSO* (GlobalNamespace::ScaleRectTransformViewStateTransition::*)()>(&GlobalNamespace::ScaleRectTransformViewStateTransition::get_transition)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ScaleRectTransformViewStateTransition*), "get_transition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ScaleRectTransformViewStateTransition::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::ScaleRectTransformViewStateTransition::TransitionToNormalState
// Il2CppName: TransitionToNormalState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ScaleRectTransformViewStateTransition::*)()>(&GlobalNamespace::ScaleRectTransformViewStateTransition::TransitionToNormalState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ScaleRectTransformViewStateTransition*), "TransitionToNormalState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ScaleRectTransformViewStateTransition::TransitionToHighlightedState
// Il2CppName: TransitionToHighlightedState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ScaleRectTransformViewStateTransition::*)()>(&GlobalNamespace::ScaleRectTransformViewStateTransition::TransitionToHighlightedState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ScaleRectTransformViewStateTransition*), "TransitionToHighlightedState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ScaleRectTransformViewStateTransition::TransitionToPressedState
// Il2CppName: TransitionToPressedState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ScaleRectTransformViewStateTransition::*)()>(&GlobalNamespace::ScaleRectTransformViewStateTransition::TransitionToPressedState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ScaleRectTransformViewStateTransition*), "TransitionToPressedState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ScaleRectTransformViewStateTransition::TransitionToDisabledState
// Il2CppName: TransitionToDisabledState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ScaleRectTransformViewStateTransition::*)()>(&GlobalNamespace::ScaleRectTransformViewStateTransition::TransitionToDisabledState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ScaleRectTransformViewStateTransition*), "TransitionToDisabledState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ScaleRectTransformViewStateTransition::TransitionToSelectedState
// Il2CppName: TransitionToSelectedState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ScaleRectTransformViewStateTransition::*)()>(&GlobalNamespace::ScaleRectTransformViewStateTransition::TransitionToSelectedState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ScaleRectTransformViewStateTransition*), "TransitionToSelectedState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ScaleRectTransformViewStateTransition::TransitionToSelectedAndHighlightedState
// Il2CppName: TransitionToSelectedAndHighlightedState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ScaleRectTransformViewStateTransition::*)()>(&GlobalNamespace::ScaleRectTransformViewStateTransition::TransitionToSelectedAndHighlightedState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ScaleRectTransformViewStateTransition*), "TransitionToSelectedAndHighlightedState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ScaleRectTransformViewStateTransition::SetNormalState
// Il2CppName: SetNormalState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ScaleRectTransformViewStateTransition::*)()>(&GlobalNamespace::ScaleRectTransformViewStateTransition::SetNormalState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ScaleRectTransformViewStateTransition*), "SetNormalState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ScaleRectTransformViewStateTransition::SetHighlightedState
// Il2CppName: SetHighlightedState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ScaleRectTransformViewStateTransition::*)()>(&GlobalNamespace::ScaleRectTransformViewStateTransition::SetHighlightedState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ScaleRectTransformViewStateTransition*), "SetHighlightedState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ScaleRectTransformViewStateTransition::SetPressedState
// Il2CppName: SetPressedState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ScaleRectTransformViewStateTransition::*)()>(&GlobalNamespace::ScaleRectTransformViewStateTransition::SetPressedState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ScaleRectTransformViewStateTransition*), "SetPressedState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ScaleRectTransformViewStateTransition::SetDisabledState
// Il2CppName: SetDisabledState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ScaleRectTransformViewStateTransition::*)()>(&GlobalNamespace::ScaleRectTransformViewStateTransition::SetDisabledState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ScaleRectTransformViewStateTransition*), "SetDisabledState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ScaleRectTransformViewStateTransition::SetSelectedState
// Il2CppName: SetSelectedState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ScaleRectTransformViewStateTransition::*)()>(&GlobalNamespace::ScaleRectTransformViewStateTransition::SetSelectedState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ScaleRectTransformViewStateTransition*), "SetSelectedState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ScaleRectTransformViewStateTransition::SetSelectedAndHighlightedState
// Il2CppName: SetSelectedAndHighlightedState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ScaleRectTransformViewStateTransition::*)()>(&GlobalNamespace::ScaleRectTransformViewStateTransition::SetSelectedAndHighlightedState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ScaleRectTransformViewStateTransition*), "SetSelectedAndHighlightedState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
