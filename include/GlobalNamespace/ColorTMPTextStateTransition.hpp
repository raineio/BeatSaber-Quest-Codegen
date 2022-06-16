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
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TMP_Text
  class TMP_Text;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: ColorTransitionSO
  class ColorTransitionSO;
  // Forward declaring type: BaseTransitionSO
  class BaseTransitionSO;
}
// Forward declaring namespace: Tweening
namespace Tweening {
  // Forward declaring type: ColorTween
  class ColorTween;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Color
  struct Color;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: ColorTMPTextStateTransition
  class ColorTMPTextStateTransition;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::ColorTMPTextStateTransition);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ColorTMPTextStateTransition*, "", "ColorTMPTextStateTransition");
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: ColorTMPTextStateTransition
  // [TokenAttribute] Offset: FFFFFFFF
  // [AddComponentMenu] Offset: 10CCEE8
  class ColorTMPTextStateTransition : public ::GlobalNamespace::BaseStateTransition_1<::TMPro::TMP_Text*> {
    public:
    public:
    // [SpaceAttribute] Offset: 0x10DFF44
    // private ColorTransitionSO _transition
    // Size: 0x8
    // Offset: 0x28
    ::GlobalNamespace::ColorTransitionSO* transition;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::ColorTransitionSO*) == 0x8);
    // private Tweening.ColorTween _colorTween
    // Size: 0x8
    // Offset: 0x30
    ::Tweening::ColorTween* colorTween;
    // Field size check
    static_assert(sizeof(::Tweening::ColorTween*) == 0x8);
    public:
    // Get instance field reference: private ColorTransitionSO _transition
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::ColorTransitionSO*& dyn__transition();
    // Get instance field reference: private Tweening.ColorTween _colorTween
    [[deprecated("Use field access instead!")]] ::Tweening::ColorTween*& dyn__colorTween();
    // private System.Void StartTween(UnityEngine.Color endColor)
    // Offset: 0x1343F68
    void StartTween(::UnityEngine::Color endColor);
    // private System.Void <StartTween>b__16_0(UnityEngine.Color color)
    // Offset: 0x13444A4
    void $StartTween$b__16_0(::UnityEngine::Color color);
    // private System.Void <StartTween>b__16_1()
    // Offset: 0x13444C8
    void $StartTween$b__16_1();
    // protected override BaseTransitionSO get_transition()
    // Offset: 0x1343F28
    // Implemented from: BaseStateTransition
    // Base method: BaseTransitionSO BaseStateTransition::get_transition()
    ::GlobalNamespace::BaseTransitionSO* get_transition();
    // public System.Void .ctor()
    // Offset: 0x1344454
    // Implemented from: BaseStateTransition`1
    // Base method: System.Void BaseStateTransition_1::.ctor()
    // Base method: System.Void BaseStateTransition::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ColorTMPTextStateTransition* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::ColorTMPTextStateTransition::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ColorTMPTextStateTransition*, creationType>()));
    }
    // protected override System.Void TransitionToNormalState()
    // Offset: 0x1343F30
    // Implemented from: BaseStateTransition
    // Base method: System.Void BaseStateTransition::TransitionToNormalState()
    void TransitionToNormalState();
    // protected override System.Void TransitionToHighlightedState()
    // Offset: 0x134418C
    // Implemented from: BaseStateTransition
    // Base method: System.Void BaseStateTransition::TransitionToHighlightedState()
    void TransitionToHighlightedState();
    // protected override System.Void TransitionToPressedState()
    // Offset: 0x13441C4
    // Implemented from: BaseStateTransition
    // Base method: System.Void BaseStateTransition::TransitionToPressedState()
    void TransitionToPressedState();
    // protected override System.Void TransitionToDisabledState()
    // Offset: 0x13441FC
    // Implemented from: BaseStateTransition
    // Base method: System.Void BaseStateTransition::TransitionToDisabledState()
    void TransitionToDisabledState();
    // protected override System.Void TransitionToSelectedState()
    // Offset: 0x1344234
    // Implemented from: BaseStateTransition
    // Base method: System.Void BaseStateTransition::TransitionToSelectedState()
    void TransitionToSelectedState();
    // protected override System.Void TransitionToSelectedAndHighlightedState()
    // Offset: 0x134426C
    // Implemented from: BaseStateTransition
    // Base method: System.Void BaseStateTransition::TransitionToSelectedAndHighlightedState()
    void TransitionToSelectedAndHighlightedState();
    // protected override System.Void SetNormalState()
    // Offset: 0x13442A4
    // Implemented from: BaseStateTransition
    // Base method: System.Void BaseStateTransition::SetNormalState()
    void SetNormalState();
    // protected override System.Void SetHighlightedState()
    // Offset: 0x13442EC
    // Implemented from: BaseStateTransition
    // Base method: System.Void BaseStateTransition::SetHighlightedState()
    void SetHighlightedState();
    // protected override System.Void SetPressedState()
    // Offset: 0x1344334
    // Implemented from: BaseStateTransition
    // Base method: System.Void BaseStateTransition::SetPressedState()
    void SetPressedState();
    // protected override System.Void SetDisabledState()
    // Offset: 0x134437C
    // Implemented from: BaseStateTransition
    // Base method: System.Void BaseStateTransition::SetDisabledState()
    void SetDisabledState();
    // protected override System.Void SetSelectedState()
    // Offset: 0x13443C4
    // Implemented from: BaseStateTransition
    // Base method: System.Void BaseStateTransition::SetSelectedState()
    void SetSelectedState();
    // protected override System.Void SetSelectedAndHighlightedState()
    // Offset: 0x134440C
    // Implemented from: BaseStateTransition
    // Base method: System.Void BaseStateTransition::SetSelectedAndHighlightedState()
    void SetSelectedAndHighlightedState();
  }; // ColorTMPTextStateTransition
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ColorTMPTextStateTransition::StartTween
// Il2CppName: StartTween
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ColorTMPTextStateTransition::*)(::UnityEngine::Color)>(&GlobalNamespace::ColorTMPTextStateTransition::StartTween)> {
  static const MethodInfo* get() {
    static auto* endColor = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ColorTMPTextStateTransition*), "StartTween", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{endColor});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ColorTMPTextStateTransition::$StartTween$b__16_0
// Il2CppName: <StartTween>b__16_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ColorTMPTextStateTransition::*)(::UnityEngine::Color)>(&GlobalNamespace::ColorTMPTextStateTransition::$StartTween$b__16_0)> {
  static const MethodInfo* get() {
    static auto* color = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ColorTMPTextStateTransition*), "<StartTween>b__16_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{color});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ColorTMPTextStateTransition::$StartTween$b__16_1
// Il2CppName: <StartTween>b__16_1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ColorTMPTextStateTransition::*)()>(&GlobalNamespace::ColorTMPTextStateTransition::$StartTween$b__16_1)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ColorTMPTextStateTransition*), "<StartTween>b__16_1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ColorTMPTextStateTransition::get_transition
// Il2CppName: get_transition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BaseTransitionSO* (GlobalNamespace::ColorTMPTextStateTransition::*)()>(&GlobalNamespace::ColorTMPTextStateTransition::get_transition)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ColorTMPTextStateTransition*), "get_transition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ColorTMPTextStateTransition::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::ColorTMPTextStateTransition::TransitionToNormalState
// Il2CppName: TransitionToNormalState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ColorTMPTextStateTransition::*)()>(&GlobalNamespace::ColorTMPTextStateTransition::TransitionToNormalState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ColorTMPTextStateTransition*), "TransitionToNormalState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ColorTMPTextStateTransition::TransitionToHighlightedState
// Il2CppName: TransitionToHighlightedState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ColorTMPTextStateTransition::*)()>(&GlobalNamespace::ColorTMPTextStateTransition::TransitionToHighlightedState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ColorTMPTextStateTransition*), "TransitionToHighlightedState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ColorTMPTextStateTransition::TransitionToPressedState
// Il2CppName: TransitionToPressedState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ColorTMPTextStateTransition::*)()>(&GlobalNamespace::ColorTMPTextStateTransition::TransitionToPressedState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ColorTMPTextStateTransition*), "TransitionToPressedState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ColorTMPTextStateTransition::TransitionToDisabledState
// Il2CppName: TransitionToDisabledState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ColorTMPTextStateTransition::*)()>(&GlobalNamespace::ColorTMPTextStateTransition::TransitionToDisabledState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ColorTMPTextStateTransition*), "TransitionToDisabledState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ColorTMPTextStateTransition::TransitionToSelectedState
// Il2CppName: TransitionToSelectedState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ColorTMPTextStateTransition::*)()>(&GlobalNamespace::ColorTMPTextStateTransition::TransitionToSelectedState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ColorTMPTextStateTransition*), "TransitionToSelectedState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ColorTMPTextStateTransition::TransitionToSelectedAndHighlightedState
// Il2CppName: TransitionToSelectedAndHighlightedState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ColorTMPTextStateTransition::*)()>(&GlobalNamespace::ColorTMPTextStateTransition::TransitionToSelectedAndHighlightedState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ColorTMPTextStateTransition*), "TransitionToSelectedAndHighlightedState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ColorTMPTextStateTransition::SetNormalState
// Il2CppName: SetNormalState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ColorTMPTextStateTransition::*)()>(&GlobalNamespace::ColorTMPTextStateTransition::SetNormalState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ColorTMPTextStateTransition*), "SetNormalState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ColorTMPTextStateTransition::SetHighlightedState
// Il2CppName: SetHighlightedState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ColorTMPTextStateTransition::*)()>(&GlobalNamespace::ColorTMPTextStateTransition::SetHighlightedState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ColorTMPTextStateTransition*), "SetHighlightedState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ColorTMPTextStateTransition::SetPressedState
// Il2CppName: SetPressedState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ColorTMPTextStateTransition::*)()>(&GlobalNamespace::ColorTMPTextStateTransition::SetPressedState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ColorTMPTextStateTransition*), "SetPressedState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ColorTMPTextStateTransition::SetDisabledState
// Il2CppName: SetDisabledState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ColorTMPTextStateTransition::*)()>(&GlobalNamespace::ColorTMPTextStateTransition::SetDisabledState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ColorTMPTextStateTransition*), "SetDisabledState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ColorTMPTextStateTransition::SetSelectedState
// Il2CppName: SetSelectedState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ColorTMPTextStateTransition::*)()>(&GlobalNamespace::ColorTMPTextStateTransition::SetSelectedState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ColorTMPTextStateTransition*), "SetSelectedState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ColorTMPTextStateTransition::SetSelectedAndHighlightedState
// Il2CppName: SetSelectedAndHighlightedState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ColorTMPTextStateTransition::*)()>(&GlobalNamespace::ColorTMPTextStateTransition::SetSelectedAndHighlightedState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ColorTMPTextStateTransition*), "SetSelectedAndHighlightedState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
