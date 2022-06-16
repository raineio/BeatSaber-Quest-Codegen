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
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: ParticleSystem
  class ParticleSystem;
  // Forward declaring type: Animation
  class Animation;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: VFXController
  class VFXController;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::VFXController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::VFXController*, "", "VFXController");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x29
  #pragma pack(push, 1)
  // Autogenerated type: VFXController
  // [TokenAttribute] Offset: FFFFFFFF
  class VFXController : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::GlobalNamespace::VFXController::$MainCoroutine$d__9
    class $MainCoroutine$d__9;
    public:
    // [NullAllowed] Offset: 0x10ABAE8
    // private UnityEngine.ParticleSystem[] _particleSystems
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<::UnityEngine::ParticleSystem*> particleSystems;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::ParticleSystem*>) == 0x8);
    // [NullAllowed] Offset: 0x10ABB20
    // private UnityEngine.Animation _animation
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::Animation* animation;
    // Field size check
    static_assert(sizeof(::UnityEngine::Animation*) == 0x8);
    // private System.Boolean _deactivateAfterAnimationDuration
    // Size: 0x1
    // Offset: 0x28
    bool deactivateAfterAnimationDuration;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private UnityEngine.ParticleSystem[] _particleSystems
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::ParticleSystem*>& dyn__particleSystems();
    // Get instance field reference: private UnityEngine.Animation _animation
    [[deprecated("Use field access instead!")]] ::UnityEngine::Animation*& dyn__animation();
    // Get instance field reference: private System.Boolean _deactivateAfterAnimationDuration
    [[deprecated("Use field access instead!")]] bool& dyn__deactivateAfterAnimationDuration();
    // public UnityEngine.Animation get_animation()
    // Offset: 0x2A287B0
    ::UnityEngine::Animation* get_animation();
    // public UnityEngine.ParticleSystem[] get_particleSystems()
    // Offset: 0x2A287B8
    ::ArrayW<::UnityEngine::ParticleSystem*> get_particleSystems();
    // public System.Void .ctor()
    // Offset: 0x2A289D8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static VFXController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::VFXController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<VFXController*, creationType>()));
    }
    // protected System.Void Awake()
    // Offset: 0x2A287C0
    void Awake();
    // public System.Void Play()
    // Offset: 0x2A287E8
    void Play();
    // private System.Collections.IEnumerator MainCoroutine(System.Boolean deactivateAfterDuration, System.Single duration)
    // Offset: 0x2A28918
    ::System::Collections::IEnumerator* MainCoroutine(bool deactivateAfterDuration, float duration);
  }; // VFXController
  #pragma pack(pop)
  static check_size<sizeof(VFXController), 40 + sizeof(bool)> __GlobalNamespace_VFXControllerSizeCheck;
  static_assert(sizeof(VFXController) == 0x29);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::VFXController::get_animation
// Il2CppName: get_animation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Animation* (GlobalNamespace::VFXController::*)()>(&GlobalNamespace::VFXController::get_animation)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VFXController*), "get_animation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::VFXController::get_particleSystems
// Il2CppName: get_particleSystems
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::ParticleSystem*> (GlobalNamespace::VFXController::*)()>(&GlobalNamespace::VFXController::get_particleSystems)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VFXController*), "get_particleSystems", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::VFXController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::VFXController::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::VFXController::*)()>(&GlobalNamespace::VFXController::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VFXController*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::VFXController::Play
// Il2CppName: Play
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::VFXController::*)()>(&GlobalNamespace::VFXController::Play)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VFXController*), "Play", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::VFXController::MainCoroutine
// Il2CppName: MainCoroutine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (GlobalNamespace::VFXController::*)(bool, float)>(&GlobalNamespace::VFXController::MainCoroutine)> {
  static const MethodInfo* get() {
    static auto* deactivateAfterDuration = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* duration = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VFXController*), "MainCoroutine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{deactivateAfterDuration, duration});
  }
};
