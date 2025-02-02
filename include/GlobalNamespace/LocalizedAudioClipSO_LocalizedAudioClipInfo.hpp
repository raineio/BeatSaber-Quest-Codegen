// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: LocalizedAudioClipSO
#include "GlobalNamespace/LocalizedAudioClipSO.hpp"
// Including type: Polyglot.Language
#include "Polyglot/Language.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AudioClip
  class AudioClip;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::LocalizedAudioClipSO::LocalizedAudioClipInfo);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LocalizedAudioClipSO::LocalizedAudioClipInfo*, "", "LocalizedAudioClipSO/LocalizedAudioClipInfo");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: LocalizedAudioClipSO/LocalizedAudioClipInfo
  // [TokenAttribute] Offset: FFFFFFFF
  class LocalizedAudioClipSO::LocalizedAudioClipInfo : public ::Il2CppObject {
    public:
    public:
    // public Polyglot.Language language
    // Size: 0x4
    // Offset: 0x10
    ::Polyglot::Language language;
    // Field size check
    static_assert(sizeof(::Polyglot::Language) == 0x4);
    // Padding between fields: language and: localizedAudioClip
    char __padding0[0x4] = {};
    // public UnityEngine.AudioClip localizedAudioClip
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::AudioClip* localizedAudioClip;
    // Field size check
    static_assert(sizeof(::UnityEngine::AudioClip*) == 0x8);
    public:
    // Get instance field reference: public Polyglot.Language language
    [[deprecated("Use field access instead!")]] ::Polyglot::Language& dyn_language();
    // Get instance field reference: public UnityEngine.AudioClip localizedAudioClip
    [[deprecated("Use field access instead!")]] ::UnityEngine::AudioClip*& dyn_localizedAudioClip();
    // public System.Void .ctor()
    // Offset: 0x134402C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LocalizedAudioClipSO::LocalizedAudioClipInfo* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::LocalizedAudioClipSO::LocalizedAudioClipInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LocalizedAudioClipSO::LocalizedAudioClipInfo*, creationType>()));
    }
  }; // LocalizedAudioClipSO/LocalizedAudioClipInfo
  #pragma pack(pop)
  static check_size<sizeof(LocalizedAudioClipSO::LocalizedAudioClipInfo), 24 + sizeof(::UnityEngine::AudioClip*)> __GlobalNamespace_LocalizedAudioClipSO_LocalizedAudioClipInfoSizeCheck;
  static_assert(sizeof(LocalizedAudioClipSO::LocalizedAudioClipInfo) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::LocalizedAudioClipSO::LocalizedAudioClipInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
