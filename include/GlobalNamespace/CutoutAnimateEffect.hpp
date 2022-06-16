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
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: CutoutEffect
  class CutoutEffect;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AnimationCurve
  class AnimationCurve;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: CutoutAnimateEffect
  class CutoutAnimateEffect;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::CutoutAnimateEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CutoutAnimateEffect*, "", "CutoutAnimateEffect");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x29
  #pragma pack(push, 1)
  // Autogenerated type: CutoutAnimateEffect
  // [TokenAttribute] Offset: FFFFFFFF
  class CutoutAnimateEffect : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::GlobalNamespace::CutoutAnimateEffect::$AnimateToCutoutCoroutine$d__7
    class $AnimateToCutoutCoroutine$d__7;
    public:
    // private CutoutEffect[] _cuttoutEffects
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<::GlobalNamespace::CutoutEffect*> cuttoutEffects;
    // Field size check
    static_assert(sizeof(::ArrayW<::GlobalNamespace::CutoutEffect*>) == 0x8);
    // private UnityEngine.AnimationCurve _transitionCurve
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::AnimationCurve* transitionCurve;
    // Field size check
    static_assert(sizeof(::UnityEngine::AnimationCurve*) == 0x8);
    // private System.Boolean <animating>k__BackingField
    // Size: 0x1
    // Offset: 0x28
    bool animating;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private CutoutEffect[] _cuttoutEffects
    [[deprecated("Use field access instead!")]] ::ArrayW<::GlobalNamespace::CutoutEffect*>& dyn__cuttoutEffects();
    // Get instance field reference: private UnityEngine.AnimationCurve _transitionCurve
    [[deprecated("Use field access instead!")]] ::UnityEngine::AnimationCurve*& dyn__transitionCurve();
    // Get instance field reference: private System.Boolean <animating>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$animating$k__BackingField();
    // public System.Boolean get_animating()
    // Offset: 0x1405AEC
    bool get_animating();
    // private System.Void set_animating(System.Boolean value)
    // Offset: 0x1405AF4
    void set_animating(bool value);
    // public System.Void .ctor()
    // Offset: 0x1405D98
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CutoutAnimateEffect* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::CutoutAnimateEffect::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CutoutAnimateEffect*, creationType>()));
    }
    // protected System.Void Start()
    // Offset: 0x1405B00
    void Start();
    // private System.Collections.IEnumerator AnimateToCutoutCoroutine(System.Single cutoutStart, System.Single cutoutEnd, System.Single duration)
    // Offset: 0x1405B80
    ::System::Collections::IEnumerator* AnimateToCutoutCoroutine(float cutoutStart, float cutoutEnd, float duration);
    // private System.Void SetCutout(System.Single cutout)
    // Offset: 0x1405B08
    void SetCutout(float cutout);
    // public System.Void ResetEffect()
    // Offset: 0x1405D08
    void ResetEffect();
    // public System.Void AnimateCutout(System.Single cutoutStart, System.Single cutoutEnd, System.Single duration)
    // Offset: 0x1405D38
    void AnimateCutout(float cutoutStart, float cutoutEnd, float duration);
  }; // CutoutAnimateEffect
  #pragma pack(pop)
  static check_size<sizeof(CutoutAnimateEffect), 40 + sizeof(bool)> __GlobalNamespace_CutoutAnimateEffectSizeCheck;
  static_assert(sizeof(CutoutAnimateEffect) == 0x29);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::CutoutAnimateEffect::get_animating
// Il2CppName: get_animating
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::CutoutAnimateEffect::*)()>(&GlobalNamespace::CutoutAnimateEffect::get_animating)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CutoutAnimateEffect*), "get_animating", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CutoutAnimateEffect::set_animating
// Il2CppName: set_animating
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CutoutAnimateEffect::*)(bool)>(&GlobalNamespace::CutoutAnimateEffect::set_animating)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CutoutAnimateEffect*), "set_animating", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CutoutAnimateEffect::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::CutoutAnimateEffect::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CutoutAnimateEffect::*)()>(&GlobalNamespace::CutoutAnimateEffect::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CutoutAnimateEffect*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CutoutAnimateEffect::AnimateToCutoutCoroutine
// Il2CppName: AnimateToCutoutCoroutine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (GlobalNamespace::CutoutAnimateEffect::*)(float, float, float)>(&GlobalNamespace::CutoutAnimateEffect::AnimateToCutoutCoroutine)> {
  static const MethodInfo* get() {
    static auto* cutoutStart = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* cutoutEnd = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* duration = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CutoutAnimateEffect*), "AnimateToCutoutCoroutine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cutoutStart, cutoutEnd, duration});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CutoutAnimateEffect::SetCutout
// Il2CppName: SetCutout
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CutoutAnimateEffect::*)(float)>(&GlobalNamespace::CutoutAnimateEffect::SetCutout)> {
  static const MethodInfo* get() {
    static auto* cutout = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CutoutAnimateEffect*), "SetCutout", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cutout});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CutoutAnimateEffect::ResetEffect
// Il2CppName: ResetEffect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CutoutAnimateEffect::*)()>(&GlobalNamespace::CutoutAnimateEffect::ResetEffect)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CutoutAnimateEffect*), "ResetEffect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CutoutAnimateEffect::AnimateCutout
// Il2CppName: AnimateCutout
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CutoutAnimateEffect::*)(float, float, float)>(&GlobalNamespace::CutoutAnimateEffect::AnimateCutout)> {
  static const MethodInfo* get() {
    static auto* cutoutStart = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* cutoutEnd = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* duration = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CutoutAnimateEffect*), "AnimateCutout", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cutoutStart, cutoutEnd, duration});
  }
};
