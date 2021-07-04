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
  // Size: 0x29
  #pragma pack(push, 1)
  // Autogenerated type: CutoutAnimateEffect
  class CutoutAnimateEffect : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::CutoutAnimateEffect::$AnimateToCutoutCoroutine$d__7
    class $AnimateToCutoutCoroutine$d__7;
    // private CutoutEffect[] _cuttoutEffects
    // Size: 0x8
    // Offset: 0x18
    ::Array<GlobalNamespace::CutoutEffect*>* cuttoutEffects;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::CutoutEffect*>*) == 0x8);
    // private UnityEngine.AnimationCurve _transitionCurve
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::AnimationCurve* transitionCurve;
    // Field size check
    static_assert(sizeof(UnityEngine::AnimationCurve*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xE1A0D4
    // private System.Boolean <animating>k__BackingField
    // Size: 0x1
    // Offset: 0x28
    bool animating;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: CutoutAnimateEffect
    CutoutAnimateEffect(::Array<GlobalNamespace::CutoutEffect*>* cuttoutEffects_ = {}, UnityEngine::AnimationCurve* transitionCurve_ = {}, bool animating_ = {}) noexcept : cuttoutEffects{cuttoutEffects_}, transitionCurve{transitionCurve_}, animating{animating_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Boolean get_animating()
    // Offset: 0x119B0B0
    bool get_animating();
    // private System.Void set_animating(System.Boolean value)
    // Offset: 0x119B0B8
    void set_animating(bool value);
    // protected System.Void Start()
    // Offset: 0x119B0C4
    void Start();
    // private System.Collections.IEnumerator AnimateToCutoutCoroutine(System.Single cutoutStart, System.Single cutoutEnd, System.Single duration)
    // Offset: 0x119B144
    System::Collections::IEnumerator* AnimateToCutoutCoroutine(float cutoutStart, float cutoutEnd, float duration);
    // private System.Void SetCutout(System.Single cutout)
    // Offset: 0x119B0CC
    void SetCutout(float cutout);
    // public System.Void ResetEffect()
    // Offset: 0x119B2CC
    void ResetEffect();
    // public System.Void AnimateCutout(System.Single cutoutStart, System.Single cutoutEnd, System.Single duration)
    // Offset: 0x119B2FC
    void AnimateCutout(float cutoutStart, float cutoutEnd, float duration);
    // public System.Void .ctor()
    // Offset: 0x119B35C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CutoutAnimateEffect* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::CutoutAnimateEffect::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CutoutAnimateEffect*, creationType>()));
    }
  }; // CutoutAnimateEffect
  #pragma pack(pop)
  static check_size<sizeof(CutoutAnimateEffect), 40 + sizeof(bool)> __GlobalNamespace_CutoutAnimateEffectSizeCheck;
  static_assert(sizeof(CutoutAnimateEffect) == 0x29);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::CutoutAnimateEffect*, "", "CutoutAnimateEffect");
// Writing MetadataGetter for method: GlobalNamespace::CutoutAnimateEffect::get_animating
// Il2CppName: get_animating
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::CutoutAnimateEffect::*)()>(&GlobalNamespace::CutoutAnimateEffect::get_animating)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CutoutAnimateEffect*), "get_animating", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CutoutAnimateEffect::set_animating
// Il2CppName: set_animating
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CutoutAnimateEffect::*)(bool)>(&GlobalNamespace::CutoutAnimateEffect::set_animating)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CutoutAnimateEffect*), "set_animating", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<bool>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CutoutAnimateEffect::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CutoutAnimateEffect::*)()>(&GlobalNamespace::CutoutAnimateEffect::Start)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CutoutAnimateEffect*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CutoutAnimateEffect::AnimateToCutoutCoroutine
// Il2CppName: AnimateToCutoutCoroutine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerator* (GlobalNamespace::CutoutAnimateEffect::*)(float, float, float)>(&GlobalNamespace::CutoutAnimateEffect::AnimateToCutoutCoroutine)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CutoutAnimateEffect*), "AnimateToCutoutCoroutine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<float>(), ::il2cpp_utils::ExtractIndependentType<float>(), ::il2cpp_utils::ExtractIndependentType<float>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CutoutAnimateEffect::SetCutout
// Il2CppName: SetCutout
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CutoutAnimateEffect::*)(float)>(&GlobalNamespace::CutoutAnimateEffect::SetCutout)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CutoutAnimateEffect*), "SetCutout", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<float>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CutoutAnimateEffect::ResetEffect
// Il2CppName: ResetEffect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CutoutAnimateEffect::*)()>(&GlobalNamespace::CutoutAnimateEffect::ResetEffect)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CutoutAnimateEffect*), "ResetEffect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CutoutAnimateEffect::AnimateCutout
// Il2CppName: AnimateCutout
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CutoutAnimateEffect::*)(float, float, float)>(&GlobalNamespace::CutoutAnimateEffect::AnimateCutout)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CutoutAnimateEffect*), "AnimateCutout", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<float>(), ::il2cpp_utils::ExtractIndependentType<float>(), ::il2cpp_utils::ExtractIndependentType<float>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CutoutAnimateEffect::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
