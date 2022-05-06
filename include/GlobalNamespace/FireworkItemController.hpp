// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: TubeBloomPrePassLight
  class TubeBloomPrePassLight;
  // Forward declaring type: RandomObjectPicker`1<T>
  template<typename T>
  class RandomObjectPicker_1;
  // Forward declaring type: DirectionalLight
  class DirectionalLight;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AudioSource
  class AudioSource;
  // Forward declaring type: AnimationCurve
  class AnimationCurve;
  // Forward declaring type: Gradient
  class Gradient;
  // Forward declaring type: AudioClip
  class AudioClip;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: FireworkItemController
  class FireworkItemController;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::FireworkItemController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FireworkItemController*, "", "FireworkItemController");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x98
  #pragma pack(push, 1)
  // Autogenerated type: FireworkItemController
  // [TokenAttribute] Offset: FFFFFFFF
  class FireworkItemController : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::GlobalNamespace::FireworkItemController::FireworkItemParticleSystem
    class FireworkItemParticleSystem;
    // Nested type: ::GlobalNamespace::FireworkItemController::Pool
    class Pool;
    // Nested type: ::GlobalNamespace::FireworkItemController::$FireCoroutine$d__29
    class $FireCoroutine$d__29;
    public:
    // [HeaderAttribute] Offset: 0x10D50BC
    // [NullAllowed] Offset: 0x10D50BC
    // private FireworkItemController/FireworkItemParticleSystem[] _particleSystems
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<::GlobalNamespace::FireworkItemController::FireworkItemParticleSystem*> particleSystems;
    // Field size check
    static_assert(sizeof(::ArrayW<::GlobalNamespace::FireworkItemController::FireworkItemParticleSystem*>) == 0x8);
    // [HeaderAttribute] Offset: 0x10D5118
    // private TubeBloomPrePassLight[] _lights
    // Size: 0x8
    // Offset: 0x20
    ::ArrayW<::GlobalNamespace::TubeBloomPrePassLight*> lights;
    // Field size check
    static_assert(sizeof(::ArrayW<::GlobalNamespace::TubeBloomPrePassLight*>) == 0x8);
    // private UnityEngine.AudioSource _audioSource
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::AudioSource* audioSource;
    // Field size check
    static_assert(sizeof(::UnityEngine::AudioSource*) == 0x8);
    // [SpaceAttribute] Offset: 0x10D5174
    // private System.Single _lightFlashDuration
    // Size: 0x4
    // Offset: 0x30
    float lightFlashDuration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: lightFlashDuration and: lightIntensityCurve
    char __padding3[0x4] = {};
    // private UnityEngine.AnimationCurve _lightIntensityCurve
    // Size: 0x8
    // Offset: 0x38
    ::UnityEngine::AnimationCurve* lightIntensityCurve;
    // Field size check
    static_assert(sizeof(::UnityEngine::AnimationCurve*) == 0x8);
    // private System.Single _lightIntensityMultiplier
    // Size: 0x4
    // Offset: 0x40
    float lightIntensityMultiplier;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [HeaderAttribute] Offset: 0x10D51CC
    // private System.Boolean _randomizeColor
    // Size: 0x1
    // Offset: 0x44
    bool randomizeColor;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: randomizeColor and: lightsColor
    char __padding6[0x3] = {};
    // [DrawIfAttribute] Offset: 0x10D5218
    // private UnityEngine.Color _lightsColor
    // Size: 0x10
    // Offset: 0x48
    ::UnityEngine::Color lightsColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // [DrawIfAttribute] Offset: 0x10D52BC
    // private UnityEngine.Gradient _lightsColorGradient
    // Size: 0x8
    // Offset: 0x58
    ::UnityEngine::Gradient* lightsColorGradient;
    // Field size check
    static_assert(sizeof(::UnityEngine::Gradient*) == 0x8);
    // [SpaceAttribute] Offset: 0x10D5364
    // private System.Boolean _randomizeSpeed
    // Size: 0x1
    // Offset: 0x60
    bool randomizeSpeed;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: randomizeSpeed and: minSpeedMultiplier
    char __padding9[0x3] = {};
    // [DrawIfAttribute] Offset: 0x10D539C
    // private System.Single _minSpeedMultiplier
    // Size: 0x4
    // Offset: 0x64
    float minSpeedMultiplier;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [DrawIfAttribute] Offset: 0x10D5444
    // private System.Single _maxSpeedMultiplier
    // Size: 0x4
    // Offset: 0x68
    float maxSpeedMultiplier;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: maxSpeedMultiplier and: explosionClips
    char __padding11[0x4] = {};
    // private UnityEngine.AudioClip[] _explosionClips
    // Size: 0x8
    // Offset: 0x70
    ::ArrayW<::UnityEngine::AudioClip*> explosionClips;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::AudioClip*>) == 0x8);
    // private RandomObjectPicker`1<UnityEngine.AudioClip> _randomAudioPicker
    // Size: 0x8
    // Offset: 0x78
    ::GlobalNamespace::RandomObjectPicker_1<::UnityEngine::AudioClip*>* randomAudioPicker;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::RandomObjectPicker_1<::UnityEngine::AudioClip*>*) == 0x8);
    // private DirectionalLight _directionalLight
    // Size: 0x8
    // Offset: 0x80
    ::GlobalNamespace::DirectionalLight* directionalLight;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::DirectionalLight*) == 0x8);
    // private System.Single _directionalLightIntensity
    // Size: 0x4
    // Offset: 0x88
    float directionalLightIntensity;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean _initialized
    // Size: 0x1
    // Offset: 0x8C
    bool initialized;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: initialized and: didFinishEvent
    char __padding16[0x3] = {};
    // private System.Action`1<FireworkItemController> didFinishEvent
    // Size: 0x8
    // Offset: 0x90
    ::System::Action_1<::GlobalNamespace::FireworkItemController*>* didFinishEvent;
    // Field size check
    static_assert(sizeof(::System::Action_1<::GlobalNamespace::FireworkItemController*>*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private FireworkItemController/FireworkItemParticleSystem[] _particleSystems
    [[deprecated("Use field access instead!")]] ::ArrayW<::GlobalNamespace::FireworkItemController::FireworkItemParticleSystem*>& dyn__particleSystems();
    // Get instance field reference: private TubeBloomPrePassLight[] _lights
    [[deprecated("Use field access instead!")]] ::ArrayW<::GlobalNamespace::TubeBloomPrePassLight*>& dyn__lights();
    // Get instance field reference: private UnityEngine.AudioSource _audioSource
    [[deprecated("Use field access instead!")]] ::UnityEngine::AudioSource*& dyn__audioSource();
    // Get instance field reference: private System.Single _lightFlashDuration
    [[deprecated("Use field access instead!")]] float& dyn__lightFlashDuration();
    // Get instance field reference: private UnityEngine.AnimationCurve _lightIntensityCurve
    [[deprecated("Use field access instead!")]] ::UnityEngine::AnimationCurve*& dyn__lightIntensityCurve();
    // Get instance field reference: private System.Single _lightIntensityMultiplier
    [[deprecated("Use field access instead!")]] float& dyn__lightIntensityMultiplier();
    // Get instance field reference: private System.Boolean _randomizeColor
    [[deprecated("Use field access instead!")]] bool& dyn__randomizeColor();
    // Get instance field reference: private UnityEngine.Color _lightsColor
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color& dyn__lightsColor();
    // Get instance field reference: private UnityEngine.Gradient _lightsColorGradient
    [[deprecated("Use field access instead!")]] ::UnityEngine::Gradient*& dyn__lightsColorGradient();
    // Get instance field reference: private System.Boolean _randomizeSpeed
    [[deprecated("Use field access instead!")]] bool& dyn__randomizeSpeed();
    // Get instance field reference: private System.Single _minSpeedMultiplier
    [[deprecated("Use field access instead!")]] float& dyn__minSpeedMultiplier();
    // Get instance field reference: private System.Single _maxSpeedMultiplier
    [[deprecated("Use field access instead!")]] float& dyn__maxSpeedMultiplier();
    // Get instance field reference: private UnityEngine.AudioClip[] _explosionClips
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::AudioClip*>& dyn__explosionClips();
    // Get instance field reference: private RandomObjectPicker`1<UnityEngine.AudioClip> _randomAudioPicker
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::RandomObjectPicker_1<::UnityEngine::AudioClip*>*& dyn__randomAudioPicker();
    // Get instance field reference: private DirectionalLight _directionalLight
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::DirectionalLight*& dyn__directionalLight();
    // Get instance field reference: private System.Single _directionalLightIntensity
    [[deprecated("Use field access instead!")]] float& dyn__directionalLightIntensity();
    // Get instance field reference: private System.Boolean _initialized
    [[deprecated("Use field access instead!")]] bool& dyn__initialized();
    // Get instance field reference: private System.Action`1<FireworkItemController> didFinishEvent
    [[deprecated("Use field access instead!")]] ::System::Action_1<::GlobalNamespace::FireworkItemController*>*& dyn_didFinishEvent();
    // public System.Void set_directionalLight(DirectionalLight value)
    // Offset: 0x13758B4
    void set_directionalLight(::GlobalNamespace::DirectionalLight* value);
    // public System.Void set_directionalLightIntensity(System.Single value)
    // Offset: 0x13758BC
    void set_directionalLightIntensity(float value);
    // public System.Void add_didFinishEvent(System.Action`1<FireworkItemController> value)
    // Offset: 0x13758C4
    void add_didFinishEvent(::System::Action_1<::GlobalNamespace::FireworkItemController*>* value);
    // public System.Void remove_didFinishEvent(System.Action`1<FireworkItemController> value)
    // Offset: 0x1375968
    void remove_didFinishEvent(::System::Action_1<::GlobalNamespace::FireworkItemController*>* value);
    // public System.Void .ctor()
    // Offset: 0x13760F0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FireworkItemController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::FireworkItemController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FireworkItemController*, creationType>()));
    }
    // protected System.Void Awake()
    // Offset: 0x1375A0C
    void Awake();
    // protected System.Void OnDisable()
    // Offset: 0x1375A8C
    void OnDisable();
    // public System.Void Fire()
    // Offset: 0x1375C30
    void Fire();
    // private System.Collections.IEnumerator FireCoroutine()
    // Offset: 0x1375C5C
    ::System::Collections::IEnumerator* FireCoroutine();
    // private System.Void SetLightsColor(System.Single intensity)
    // Offset: 0x1375B18
    void SetLightsColor(float intensity);
    // private System.Void PlayExplosionSound()
    // Offset: 0x1375CF8
    void PlayExplosionSound();
    // private System.Void InitializeParticleSystem()
    // Offset: 0x1375DE4
    void InitializeParticleSystem();
  }; // FireworkItemController
  #pragma pack(pop)
  static check_size<sizeof(FireworkItemController), 144 + sizeof(::System::Action_1<::GlobalNamespace::FireworkItemController*>*)> __GlobalNamespace_FireworkItemControllerSizeCheck;
  static_assert(sizeof(FireworkItemController) == 0x98);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::FireworkItemController::set_directionalLight
// Il2CppName: set_directionalLight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FireworkItemController::*)(::GlobalNamespace::DirectionalLight*)>(&GlobalNamespace::FireworkItemController::set_directionalLight)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "DirectionalLight")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FireworkItemController*), "set_directionalLight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FireworkItemController::set_directionalLightIntensity
// Il2CppName: set_directionalLightIntensity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FireworkItemController::*)(float)>(&GlobalNamespace::FireworkItemController::set_directionalLightIntensity)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FireworkItemController*), "set_directionalLightIntensity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FireworkItemController::add_didFinishEvent
// Il2CppName: add_didFinishEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FireworkItemController::*)(::System::Action_1<::GlobalNamespace::FireworkItemController*>*)>(&GlobalNamespace::FireworkItemController::add_didFinishEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "FireworkItemController")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FireworkItemController*), "add_didFinishEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FireworkItemController::remove_didFinishEvent
// Il2CppName: remove_didFinishEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FireworkItemController::*)(::System::Action_1<::GlobalNamespace::FireworkItemController*>*)>(&GlobalNamespace::FireworkItemController::remove_didFinishEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "FireworkItemController")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FireworkItemController*), "remove_didFinishEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FireworkItemController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::FireworkItemController::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FireworkItemController::*)()>(&GlobalNamespace::FireworkItemController::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FireworkItemController*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FireworkItemController::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FireworkItemController::*)()>(&GlobalNamespace::FireworkItemController::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FireworkItemController*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FireworkItemController::Fire
// Il2CppName: Fire
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FireworkItemController::*)()>(&GlobalNamespace::FireworkItemController::Fire)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FireworkItemController*), "Fire", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FireworkItemController::FireCoroutine
// Il2CppName: FireCoroutine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (GlobalNamespace::FireworkItemController::*)()>(&GlobalNamespace::FireworkItemController::FireCoroutine)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FireworkItemController*), "FireCoroutine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FireworkItemController::SetLightsColor
// Il2CppName: SetLightsColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FireworkItemController::*)(float)>(&GlobalNamespace::FireworkItemController::SetLightsColor)> {
  static const MethodInfo* get() {
    static auto* intensity = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FireworkItemController*), "SetLightsColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{intensity});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FireworkItemController::PlayExplosionSound
// Il2CppName: PlayExplosionSound
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FireworkItemController::*)()>(&GlobalNamespace::FireworkItemController::PlayExplosionSound)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FireworkItemController*), "PlayExplosionSound", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FireworkItemController::InitializeParticleSystem
// Il2CppName: InitializeParticleSystem
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FireworkItemController::*)()>(&GlobalNamespace::FireworkItemController::InitializeParticleSystem)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FireworkItemController*), "InitializeParticleSystem", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
