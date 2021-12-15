// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: NoteCutSoundEffectManager
#include "GlobalNamespace/NoteCutSoundEffectManager.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(GlobalNamespace::NoteCutSoundEffectManager::InitData);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::NoteCutSoundEffectManager::InitData*, "", "NoteCutSoundEffectManager/InitData");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x12
  #pragma pack(push, 1)
  // Autogenerated type: NoteCutSoundEffectManager/InitData
  // [TokenAttribute] Offset: FFFFFFFF
  class NoteCutSoundEffectManager::InitData : public ::Il2CppObject {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // public readonly System.Boolean useTestAudioClips
    // Size: 0x1
    // Offset: 0x10
    bool useTestAudioClips;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public readonly System.Boolean ignoreBadCuts
    // Size: 0x1
    // Offset: 0x11
    bool ignoreBadCuts;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: public readonly System.Boolean useTestAudioClips
    bool& dyn_useTestAudioClips();
    // Get instance field reference: public readonly System.Boolean ignoreBadCuts
    bool& dyn_ignoreBadCuts();
    // public System.Void .ctor(System.Boolean useTestAudioClips, System.Boolean ignoreBadCuts)
    // Offset: 0x133F7A4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NoteCutSoundEffectManager::InitData* New_ctor(bool useTestAudioClips, bool ignoreBadCuts) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::NoteCutSoundEffectManager::InitData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NoteCutSoundEffectManager::InitData*, creationType>(useTestAudioClips, ignoreBadCuts)));
    }
  }; // NoteCutSoundEffectManager/InitData
  #pragma pack(pop)
  static check_size<sizeof(NoteCutSoundEffectManager::InitData), 17 + sizeof(bool)> __GlobalNamespace_NoteCutSoundEffectManager_InitDataSizeCheck;
  static_assert(sizeof(NoteCutSoundEffectManager::InitData) == 0x12);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::NoteCutSoundEffectManager::InitData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
