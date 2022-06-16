// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: INoteCutSoundEffectDidFinishEvent
#include "GlobalNamespace/INoteCutSoundEffectDidFinishEvent.hpp"
// Including type: NoteCutSoundEffect
#include "GlobalNamespace/NoteCutSoundEffect.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: AudioManagerSO
  class AudioManagerSO;
  // Forward declaring type: BeatmapObjectManager
  class BeatmapObjectManager;
  // Forward declaring type: SaberManager
  class SaberManager;
  // Forward declaring type: AudioTimeSyncController
  class AudioTimeSyncController;
  // Forward declaring type: RandomObjectPicker`1<T>
  template<typename T>
  class RandomObjectPicker_1;
  // Forward declaring type: MemoryPoolContainer`1<T>
  template<typename T>
  class MemoryPoolContainer_1;
  // Forward declaring type: NoteController
  class NoteController;
  // Forward declaring type: NoteCutInfo
  struct NoteCutInfo;
  // Forward declaring type: NoteData
  class NoteData;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AudioClip
  class AudioClip;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: NoteCutSoundEffectManager
  class NoteCutSoundEffectManager;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::NoteCutSoundEffectManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NoteCutSoundEffectManager*, "", "NoteCutSoundEffectManager");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xA8
  #pragma pack(push, 1)
  // Autogenerated type: NoteCutSoundEffectManager
  // [TokenAttribute] Offset: FFFFFFFF
  class NoteCutSoundEffectManager : public ::UnityEngine::MonoBehaviour/*, public ::GlobalNamespace::INoteCutSoundEffectDidFinishEvent*/ {
    public:
    // Nested type: ::GlobalNamespace::NoteCutSoundEffectManager::InitData
    class InitData;
    public:
    // private AudioManagerSO _audioManager
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::AudioManagerSO* audioManager;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::AudioManagerSO*) == 0x8);
    // [SpaceAttribute] Offset: 0x10D1F58
    // private System.Single _audioSamplesBeatAlignOffset
    // Size: 0x4
    // Offset: 0x20
    float audioSamplesBeatAlignOffset;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: audioSamplesBeatAlignOffset and: longCutEffectsAudioClips
    char __padding1[0x4] = {};
    // private UnityEngine.AudioClip[] _longCutEffectsAudioClips
    // Size: 0x8
    // Offset: 0x28
    ::ArrayW<::UnityEngine::AudioClip*> longCutEffectsAudioClips;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::AudioClip*>) == 0x8);
    // private UnityEngine.AudioClip[] _shortCutEffectsAudioClips
    // Size: 0x8
    // Offset: 0x30
    ::ArrayW<::UnityEngine::AudioClip*> shortCutEffectsAudioClips;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::AudioClip*>) == 0x8);
    // [SpaceAttribute] Offset: 0x10D1FB0
    // private UnityEngine.AudioClip _testAudioClip
    // Size: 0x8
    // Offset: 0x38
    ::UnityEngine::AudioClip* testAudioClip;
    // Field size check
    static_assert(sizeof(::UnityEngine::AudioClip*) == 0x8);
    // [InjectOptionalAttribute] Offset: 0x10D1FE8
    // private readonly NoteCutSoundEffectManager/InitData _initData
    // Size: 0x8
    // Offset: 0x40
    ::GlobalNamespace::NoteCutSoundEffectManager::InitData* initData;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::NoteCutSoundEffectManager::InitData*) == 0x8);
    // [InjectAttribute] Offset: 0x10D1FF8
    // private readonly BeatmapObjectManager _beatmapObjectManager
    // Size: 0x8
    // Offset: 0x48
    ::GlobalNamespace::BeatmapObjectManager* beatmapObjectManager;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BeatmapObjectManager*) == 0x8);
    // [InjectAttribute] Offset: 0x10D2008
    // private readonly SaberManager _saberManager
    // Size: 0x8
    // Offset: 0x50
    ::GlobalNamespace::SaberManager* saberManager;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::SaberManager*) == 0x8);
    // [InjectAttribute] Offset: 0x10D2018
    // private readonly NoteCutSoundEffect/Pool _noteCutSoundEffectPool
    // Size: 0x8
    // Offset: 0x58
    ::GlobalNamespace::NoteCutSoundEffect::Pool* noteCutSoundEffectPool;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::NoteCutSoundEffect::Pool*) == 0x8);
    // [InjectAttribute] Offset: 0x10D2028
    // private readonly AudioTimeSyncController _audioTimeSyncController
    // Size: 0x8
    // Offset: 0x60
    ::GlobalNamespace::AudioTimeSyncController* audioTimeSyncController;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::AudioTimeSyncController*) == 0x8);
    // private System.Boolean <handleWrongSaberTypeAsGood>k__BackingField
    // Size: 0x1
    // Offset: 0x68
    bool handleWrongSaberTypeAsGood;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: handleWrongSaberTypeAsGood and: randomLongCutSoundPicker
    char __padding10[0x7] = {};
    // private RandomObjectPicker`1<UnityEngine.AudioClip> _randomLongCutSoundPicker
    // Size: 0x8
    // Offset: 0x70
    ::GlobalNamespace::RandomObjectPicker_1<::UnityEngine::AudioClip*>* randomLongCutSoundPicker;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::RandomObjectPicker_1<::UnityEngine::AudioClip*>*) == 0x8);
    // private RandomObjectPicker`1<UnityEngine.AudioClip> _randomShortCutSoundPicker
    // Size: 0x8
    // Offset: 0x78
    ::GlobalNamespace::RandomObjectPicker_1<::UnityEngine::AudioClip*>* randomShortCutSoundPicker;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::RandomObjectPicker_1<::UnityEngine::AudioClip*>*) == 0x8);
    // private System.Single _prevNoteATime
    // Size: 0x4
    // Offset: 0x80
    float prevNoteATime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _prevNoteBTime
    // Size: 0x4
    // Offset: 0x84
    float prevNoteBTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private NoteCutSoundEffect _prevNoteASoundEffect
    // Size: 0x8
    // Offset: 0x88
    ::GlobalNamespace::NoteCutSoundEffect* prevNoteASoundEffect;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::NoteCutSoundEffect*) == 0x8);
    // private NoteCutSoundEffect _prevNoteBSoundEffect
    // Size: 0x8
    // Offset: 0x90
    ::GlobalNamespace::NoteCutSoundEffect* prevNoteBSoundEffect;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::NoteCutSoundEffect*) == 0x8);
    // private System.Single _beatAlignOffset
    // Size: 0x4
    // Offset: 0x98
    float beatAlignOffset;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean _useTestAudioClips
    // Size: 0x1
    // Offset: 0x9C
    bool useTestAudioClips;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: useTestAudioClips and: noteCutSoundEffectPoolContainer
    char __padding18[0x3] = {};
    // private MemoryPoolContainer`1<NoteCutSoundEffect> _noteCutSoundEffectPoolContainer
    // Size: 0x8
    // Offset: 0xA0
    ::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::NoteCutSoundEffect*>* noteCutSoundEffectPoolContainer;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::NoteCutSoundEffect*>*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::GlobalNamespace::INoteCutSoundEffectDidFinishEvent
    operator ::GlobalNamespace::INoteCutSoundEffectDidFinishEvent() noexcept {
      return *reinterpret_cast<::GlobalNamespace::INoteCutSoundEffectDidFinishEvent*>(this);
    }
    // Creating interface conversion operator: i_INoteCutSoundEffectDidFinishEvent
    inline ::GlobalNamespace::INoteCutSoundEffectDidFinishEvent* i_INoteCutSoundEffectDidFinishEvent() noexcept {
      return reinterpret_cast<::GlobalNamespace::INoteCutSoundEffectDidFinishEvent*>(this);
    }
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // static field const value: static private System.Int32 kMaxNumberOfEffects
    static constexpr const int kMaxNumberOfEffects = 64;
    // Get static field: static private System.Int32 kMaxNumberOfEffects
    static int _get_kMaxNumberOfEffects();
    // Set static field: static private System.Int32 kMaxNumberOfEffects
    static void _set_kMaxNumberOfEffects(int value);
    // static field const value: static private System.Single kTwoNotesAtTheSameTimeVolumeMul
    static constexpr const float kTwoNotesAtTheSameTimeVolumeMul = 0.9;
    // Get static field: static private System.Single kTwoNotesAtTheSameTimeVolumeMul
    static float _get_kTwoNotesAtTheSameTimeVolumeMul();
    // Set static field: static private System.Single kTwoNotesAtTheSameTimeVolumeMul
    static void _set_kTwoNotesAtTheSameTimeVolumeMul(float value);
    // static field const value: static private System.Single kDenseNotesVolumeMul
    static constexpr const float kDenseNotesVolumeMul = 0.9;
    // Get static field: static private System.Single kDenseNotesVolumeMul
    static float _get_kDenseNotesVolumeMul();
    // Set static field: static private System.Single kDenseNotesVolumeMul
    static void _set_kDenseNotesVolumeMul(float value);
    // Get instance field reference: private AudioManagerSO _audioManager
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::AudioManagerSO*& dyn__audioManager();
    // Get instance field reference: private System.Single _audioSamplesBeatAlignOffset
    [[deprecated("Use field access instead!")]] float& dyn__audioSamplesBeatAlignOffset();
    // Get instance field reference: private UnityEngine.AudioClip[] _longCutEffectsAudioClips
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::AudioClip*>& dyn__longCutEffectsAudioClips();
    // Get instance field reference: private UnityEngine.AudioClip[] _shortCutEffectsAudioClips
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::AudioClip*>& dyn__shortCutEffectsAudioClips();
    // Get instance field reference: private UnityEngine.AudioClip _testAudioClip
    [[deprecated("Use field access instead!")]] ::UnityEngine::AudioClip*& dyn__testAudioClip();
    // Get instance field reference: private readonly NoteCutSoundEffectManager/InitData _initData
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::NoteCutSoundEffectManager::InitData*& dyn__initData();
    // Get instance field reference: private readonly BeatmapObjectManager _beatmapObjectManager
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::BeatmapObjectManager*& dyn__beatmapObjectManager();
    // Get instance field reference: private readonly SaberManager _saberManager
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::SaberManager*& dyn__saberManager();
    // Get instance field reference: private readonly NoteCutSoundEffect/Pool _noteCutSoundEffectPool
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::NoteCutSoundEffect::Pool*& dyn__noteCutSoundEffectPool();
    // Get instance field reference: private readonly AudioTimeSyncController _audioTimeSyncController
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::AudioTimeSyncController*& dyn__audioTimeSyncController();
    // Get instance field reference: private System.Boolean <handleWrongSaberTypeAsGood>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$handleWrongSaberTypeAsGood$k__BackingField();
    // Get instance field reference: private RandomObjectPicker`1<UnityEngine.AudioClip> _randomLongCutSoundPicker
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::RandomObjectPicker_1<::UnityEngine::AudioClip*>*& dyn__randomLongCutSoundPicker();
    // Get instance field reference: private RandomObjectPicker`1<UnityEngine.AudioClip> _randomShortCutSoundPicker
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::RandomObjectPicker_1<::UnityEngine::AudioClip*>*& dyn__randomShortCutSoundPicker();
    // Get instance field reference: private System.Single _prevNoteATime
    [[deprecated("Use field access instead!")]] float& dyn__prevNoteATime();
    // Get instance field reference: private System.Single _prevNoteBTime
    [[deprecated("Use field access instead!")]] float& dyn__prevNoteBTime();
    // Get instance field reference: private NoteCutSoundEffect _prevNoteASoundEffect
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::NoteCutSoundEffect*& dyn__prevNoteASoundEffect();
    // Get instance field reference: private NoteCutSoundEffect _prevNoteBSoundEffect
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::NoteCutSoundEffect*& dyn__prevNoteBSoundEffect();
    // Get instance field reference: private System.Single _beatAlignOffset
    [[deprecated("Use field access instead!")]] float& dyn__beatAlignOffset();
    // Get instance field reference: private System.Boolean _useTestAudioClips
    [[deprecated("Use field access instead!")]] bool& dyn__useTestAudioClips();
    // Get instance field reference: private MemoryPoolContainer`1<NoteCutSoundEffect> _noteCutSoundEffectPoolContainer
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::NoteCutSoundEffect*>*& dyn__noteCutSoundEffectPoolContainer();
    // public System.Boolean get_handleWrongSaberTypeAsGood()
    // Offset: 0x14B09FC
    bool get_handleWrongSaberTypeAsGood();
    // public System.Void set_handleWrongSaberTypeAsGood(System.Boolean value)
    // Offset: 0x14B0A04
    void set_handleWrongSaberTypeAsGood(bool value);
    // public System.Void .ctor()
    // Offset: 0x14B148C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NoteCutSoundEffectManager* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::NoteCutSoundEffectManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NoteCutSoundEffectManager*, creationType>()));
    }
    // protected System.Void Start()
    // Offset: 0x14B0A10
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0x14B0C14
    void OnDestroy();
    // private System.Void HandleNoteWasSpawned(NoteController noteController)
    // Offset: 0x14B0CFC
    void HandleNoteWasSpawned(::GlobalNamespace::NoteController* noteController);
    // private System.Void HandleNoteWasCut(NoteController noteController, in NoteCutInfo noteCutInfo)
    // Offset: 0x14B1248
    void HandleNoteWasCut(::GlobalNamespace::NoteController* noteController, ByRef<::GlobalNamespace::NoteCutInfo> noteCutInfo);
    // public System.Void HandleNoteCutSoundEffectDidFinish(NoteCutSoundEffect noteCutSoundEffect)
    // Offset: 0x14B13A8
    void HandleNoteCutSoundEffectDidFinish(::GlobalNamespace::NoteCutSoundEffect* noteCutSoundEffect);
    // private System.Boolean IsSupportedNote(NoteData noteData)
    // Offset: 0x14B120C
    bool IsSupportedNote(::GlobalNamespace::NoteData* noteData);
  }; // NoteCutSoundEffectManager
  #pragma pack(pop)
  static check_size<sizeof(NoteCutSoundEffectManager), 160 + sizeof(::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::NoteCutSoundEffect*>*)> __GlobalNamespace_NoteCutSoundEffectManagerSizeCheck;
  static_assert(sizeof(NoteCutSoundEffectManager) == 0xA8);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::NoteCutSoundEffectManager::get_handleWrongSaberTypeAsGood
// Il2CppName: get_handleWrongSaberTypeAsGood
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::NoteCutSoundEffectManager::*)()>(&GlobalNamespace::NoteCutSoundEffectManager::get_handleWrongSaberTypeAsGood)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoteCutSoundEffectManager*), "get_handleWrongSaberTypeAsGood", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoteCutSoundEffectManager::set_handleWrongSaberTypeAsGood
// Il2CppName: set_handleWrongSaberTypeAsGood
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoteCutSoundEffectManager::*)(bool)>(&GlobalNamespace::NoteCutSoundEffectManager::set_handleWrongSaberTypeAsGood)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoteCutSoundEffectManager*), "set_handleWrongSaberTypeAsGood", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoteCutSoundEffectManager::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::NoteCutSoundEffectManager::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoteCutSoundEffectManager::*)()>(&GlobalNamespace::NoteCutSoundEffectManager::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoteCutSoundEffectManager*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoteCutSoundEffectManager::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoteCutSoundEffectManager::*)()>(&GlobalNamespace::NoteCutSoundEffectManager::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoteCutSoundEffectManager*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoteCutSoundEffectManager::HandleNoteWasSpawned
// Il2CppName: HandleNoteWasSpawned
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoteCutSoundEffectManager::*)(::GlobalNamespace::NoteController*)>(&GlobalNamespace::NoteCutSoundEffectManager::HandleNoteWasSpawned)> {
  static const MethodInfo* get() {
    static auto* noteController = &::il2cpp_utils::GetClassFromName("", "NoteController")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoteCutSoundEffectManager*), "HandleNoteWasSpawned", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{noteController});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoteCutSoundEffectManager::HandleNoteWasCut
// Il2CppName: HandleNoteWasCut
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoteCutSoundEffectManager::*)(::GlobalNamespace::NoteController*, ByRef<::GlobalNamespace::NoteCutInfo>)>(&GlobalNamespace::NoteCutSoundEffectManager::HandleNoteWasCut)> {
  static const MethodInfo* get() {
    static auto* noteController = &::il2cpp_utils::GetClassFromName("", "NoteController")->byval_arg;
    static auto* noteCutInfo = &::il2cpp_utils::GetClassFromName("", "NoteCutInfo")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoteCutSoundEffectManager*), "HandleNoteWasCut", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{noteController, noteCutInfo});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoteCutSoundEffectManager::HandleNoteCutSoundEffectDidFinish
// Il2CppName: HandleNoteCutSoundEffectDidFinish
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoteCutSoundEffectManager::*)(::GlobalNamespace::NoteCutSoundEffect*)>(&GlobalNamespace::NoteCutSoundEffectManager::HandleNoteCutSoundEffectDidFinish)> {
  static const MethodInfo* get() {
    static auto* noteCutSoundEffect = &::il2cpp_utils::GetClassFromName("", "NoteCutSoundEffect")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoteCutSoundEffectManager*), "HandleNoteCutSoundEffectDidFinish", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{noteCutSoundEffect});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoteCutSoundEffectManager::IsSupportedNote
// Il2CppName: IsSupportedNote
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::NoteCutSoundEffectManager::*)(::GlobalNamespace::NoteData*)>(&GlobalNamespace::NoteCutSoundEffectManager::IsSupportedNote)> {
  static const MethodInfo* get() {
    static auto* noteData = &::il2cpp_utils::GetClassFromName("", "NoteData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoteCutSoundEffectManager*), "IsSupportedNote", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{noteData});
  }
};
