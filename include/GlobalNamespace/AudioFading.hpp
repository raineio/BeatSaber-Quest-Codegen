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
  // Forward declaring type: AudioSource
  class AudioSource;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: AudioFading
  class AudioFading;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::AudioFading);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AudioFading*, "", "AudioFading");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x2C
  #pragma pack(push, 1)
  // Autogenerated type: AudioFading
  // [TokenAttribute] Offset: FFFFFFFF
  class AudioFading : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private UnityEngine.AudioSource _audioSource
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::AudioSource* audioSource;
    // Field size check
    static_assert(sizeof(::UnityEngine::AudioSource*) == 0x8);
    // private System.Single _smooth
    // Size: 0x4
    // Offset: 0x20
    float smooth;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean _fadeInOnStart
    // Size: 0x1
    // Offset: 0x24
    bool fadeInOnStart;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: fadeInOnStart and: targetVolume
    char __padding2[0x3] = {};
    // private System.Single _targetVolume
    // Size: 0x4
    // Offset: 0x28
    float targetVolume;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private UnityEngine.AudioSource _audioSource
    [[deprecated("Use field access instead!")]] ::UnityEngine::AudioSource*& dyn__audioSource();
    // Get instance field reference: private System.Single _smooth
    [[deprecated("Use field access instead!")]] float& dyn__smooth();
    // Get instance field reference: private System.Boolean _fadeInOnStart
    [[deprecated("Use field access instead!")]] bool& dyn__fadeInOnStart();
    // Get instance field reference: private System.Single _targetVolume
    [[deprecated("Use field access instead!")]] float& dyn__targetVolume();
    // public System.Void .ctor()
    // Offset: 0x1546B04
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AudioFading* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::AudioFading::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AudioFading*, creationType>()));
    }
    // protected System.Void Start()
    // Offset: 0x15468FC
    void Start();
    // protected System.Void Update()
    // Offset: 0x1546998
    void Update();
    // public System.Void FadeOut()
    // Offset: 0x1546AD8
    void FadeOut();
    // public System.Void FadeIn()
    // Offset: 0x1546968
    void FadeIn();
  }; // AudioFading
  #pragma pack(pop)
  static check_size<sizeof(AudioFading), 40 + sizeof(float)> __GlobalNamespace_AudioFadingSizeCheck;
  static_assert(sizeof(AudioFading) == 0x2C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::AudioFading::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::AudioFading::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AudioFading::*)()>(&GlobalNamespace::AudioFading::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AudioFading*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AudioFading::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AudioFading::*)()>(&GlobalNamespace::AudioFading::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AudioFading*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AudioFading::FadeOut
// Il2CppName: FadeOut
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AudioFading::*)()>(&GlobalNamespace::AudioFading::FadeOut)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AudioFading*), "FadeOut", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AudioFading::FadeIn
// Il2CppName: FadeIn
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AudioFading::*)()>(&GlobalNamespace::AudioFading::FadeIn)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AudioFading*), "FadeIn", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
