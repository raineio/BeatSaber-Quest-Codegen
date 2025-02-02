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
  // Forward declaring type: MaterialPropertyBlockController
  class MaterialPropertyBlockController;
  // Forward declaring type: CutoutAnimateEffect
  class CutoutAnimateEffect;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: SliderControllerBase
  class SliderControllerBase;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::SliderControllerBase);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SliderControllerBase*, "", "SliderControllerBase");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x29
  #pragma pack(push, 1)
  // Autogenerated type: SliderControllerBase
  // [TokenAttribute] Offset: FFFFFFFF
  class SliderControllerBase : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // protected MaterialPropertyBlockController _materialPropertyBlockController
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::MaterialPropertyBlockController* materialPropertyBlockController;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::MaterialPropertyBlockController*) == 0x8);
    // protected CutoutAnimateEffect _cutoutAnimateEffect
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::CutoutAnimateEffect* cutoutAnimateEffect;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::CutoutAnimateEffect*) == 0x8);
    // protected System.Boolean _dissolving
    // Size: 0x1
    // Offset: 0x28
    bool dissolving;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: protected MaterialPropertyBlockController _materialPropertyBlockController
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::MaterialPropertyBlockController*& dyn__materialPropertyBlockController();
    // Get instance field reference: protected CutoutAnimateEffect _cutoutAnimateEffect
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::CutoutAnimateEffect*& dyn__cutoutAnimateEffect();
    // Get instance field reference: protected System.Boolean _dissolving
    [[deprecated("Use field access instead!")]] bool& dyn__dissolving();
    // public System.Void .ctor()
    // Offset: 0x147B8F8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SliderControllerBase* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::SliderControllerBase::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SliderControllerBase*, creationType>()));
    }
    // protected System.Void AnimateCutout(System.Single cutoutStart, System.Single cutoutEnd, System.Single duration)
    // Offset: 0x147B8D0
    void AnimateCutout(float cutoutStart, float cutoutEnd, float duration);
  }; // SliderControllerBase
  #pragma pack(pop)
  static check_size<sizeof(SliderControllerBase), 40 + sizeof(bool)> __GlobalNamespace_SliderControllerBaseSizeCheck;
  static_assert(sizeof(SliderControllerBase) == 0x29);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::SliderControllerBase::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::SliderControllerBase::AnimateCutout
// Il2CppName: AnimateCutout
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SliderControllerBase::*)(float, float, float)>(&GlobalNamespace::SliderControllerBase::AnimateCutout)> {
  static const MethodInfo* get() {
    static auto* cutoutStart = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* cutoutEnd = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* duration = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SliderControllerBase*), "AnimateCutout", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cutoutStart, cutoutEnd, duration});
  }
};
