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
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Animator
  class Animator;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: LevelFailedTextEffect
  class LevelFailedTextEffect;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::LevelFailedTextEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LevelFailedTextEffect*, "", "LevelFailedTextEffect");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: LevelFailedTextEffect
  // [TokenAttribute] Offset: FFFFFFFF
  class LevelFailedTextEffect : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private UnityEngine.Animator _animator
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::Animator* animator;
    // Field size check
    static_assert(sizeof(::UnityEngine::Animator*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private UnityEngine.Animator _animator
    [[deprecated("Use field access instead!")]] ::UnityEngine::Animator*& dyn__animator();
    // public System.Void .ctor()
    // Offset: 0x13BA398
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LevelFailedTextEffect* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::LevelFailedTextEffect::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LevelFailedTextEffect*, creationType>()));
    }
    // public System.Void ShowEffect()
    // Offset: 0x13BA350
    void ShowEffect();
  }; // LevelFailedTextEffect
  #pragma pack(pop)
  static check_size<sizeof(LevelFailedTextEffect), 24 + sizeof(::UnityEngine::Animator*)> __GlobalNamespace_LevelFailedTextEffectSizeCheck;
  static_assert(sizeof(LevelFailedTextEffect) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::LevelFailedTextEffect::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::LevelFailedTextEffect::ShowEffect
// Il2CppName: ShowEffect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LevelFailedTextEffect::*)()>(&GlobalNamespace::LevelFailedTextEffect::ShowEffect)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LevelFailedTextEffect*), "ShowEffect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
