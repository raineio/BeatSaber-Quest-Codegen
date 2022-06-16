// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: NoteController
#include "GlobalNamespace/NoteController.hpp"
// Including type: ICubeNoteControllerInitializable`1
#include "GlobalNamespace/ICubeNoteControllerInitializable_1.hpp"
// Including type: IGameNoteMirrorable
#include "GlobalNamespace/IGameNoteMirrorable.hpp"
// Including type: INoteVisualModifierTypeProvider
#include "GlobalNamespace/INoteVisualModifierTypeProvider.hpp"
// Including type: INoteMovementProvider
#include "GlobalNamespace/INoteMovementProvider.hpp"
// Including type: NoteVisualModifierType
#include "GlobalNamespace/NoteVisualModifierType.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BoxCuttableBySaber
  class BoxCuttableBySaber;
  // Forward declaring type: AudioTimeSyncController
  class AudioTimeSyncController;
  // Forward declaring type: NoteMovement
  class NoteMovement;
  // Skipping declaration: NoteData because it is already included!
  // Forward declaring type: Saber
  class Saber;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
  // Skipping declaration: Quaternion because it is already included!
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: BurstSliderGameNoteController
  class BurstSliderGameNoteController;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::BurstSliderGameNoteController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BurstSliderGameNoteController*, "", "BurstSliderGameNoteController");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xD0
  #pragma pack(push, 1)
  // Autogenerated type: BurstSliderGameNoteController
  // [TokenAttribute] Offset: FFFFFFFF
  class BurstSliderGameNoteController : public ::GlobalNamespace::NoteController/*, public ::GlobalNamespace::ICubeNoteControllerInitializable_1<::GlobalNamespace::BurstSliderGameNoteController*>, public ::GlobalNamespace::IGameNoteMirrorable, public ::GlobalNamespace::INoteVisualModifierTypeProvider, public ::GlobalNamespace::INoteMovementProvider*/ {
    public:
    // Nested type: ::GlobalNamespace::BurstSliderGameNoteController::Pool
    class Pool;
    public:
    // private BoxCuttableBySaber[] _bigCuttableBySaberList
    // Size: 0x8
    // Offset: 0x80
    ::ArrayW<::GlobalNamespace::BoxCuttableBySaber*> bigCuttableBySaberList;
    // Field size check
    static_assert(sizeof(::ArrayW<::GlobalNamespace::BoxCuttableBySaber*>) == 0x8);
    // private BoxCuttableBySaber[] _smallCuttableBySaberList
    // Size: 0x8
    // Offset: 0x88
    ::ArrayW<::GlobalNamespace::BoxCuttableBySaber*> smallCuttableBySaberList;
    // Field size check
    static_assert(sizeof(::ArrayW<::GlobalNamespace::BoxCuttableBySaber*>) == 0x8);
    // private UnityEngine.GameObject _wrapperGO
    // Size: 0x8
    // Offset: 0x90
    ::UnityEngine::GameObject* wrapperGO;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // [InjectAttribute] Offset: 0x10D65B4
    // private readonly AudioTimeSyncController _audioTimeSyncController
    // Size: 0x8
    // Offset: 0x98
    ::GlobalNamespace::AudioTimeSyncController* audioTimeSyncController;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::AudioTimeSyncController*) == 0x8);
    // private System.Action`1<BurstSliderGameNoteController> cubeNoteControllerDidInitEvent
    // Size: 0x8
    // Offset: 0xA0
    ::System::Action_1<::GlobalNamespace::BurstSliderGameNoteController*>* cubeNoteControllerDidInitEvent;
    // Field size check
    static_assert(sizeof(::System::Action_1<::GlobalNamespace::BurstSliderGameNoteController*>*) == 0x8);
    // private NoteVisualModifierType _noteVisualModifierType
    // Size: 0x4
    // Offset: 0xA8
    ::GlobalNamespace::NoteVisualModifierType noteVisualModifierType;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::NoteVisualModifierType) == 0x4);
    // private NoteData/GameplayType _gameplayType
    // Size: 0x4
    // Offset: 0xAC
    ::GlobalNamespace::NoteData::GameplayType gameplayType;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::NoteData::GameplayType) == 0x4);
    // private BoxCuttableBySaber _bigCuttableBySaber
    // Size: 0x8
    // Offset: 0xB0
    ::GlobalNamespace::BoxCuttableBySaber* bigCuttableBySaber;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BoxCuttableBySaber*) == 0x8);
    // private UnityEngine.Vector3 _originalColliderSize
    // Size: 0xC
    // Offset: 0xB8
    ::UnityEngine::Vector3 originalColliderSize;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 _originalColliderCenter
    // Size: 0xC
    // Offset: 0xC4
    ::UnityEngine::Vector3 originalColliderCenter;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    public:
    // Creating interface conversion operator: operator ::GlobalNamespace::ICubeNoteControllerInitializable_1<::GlobalNamespace::BurstSliderGameNoteController*>
    operator ::GlobalNamespace::ICubeNoteControllerInitializable_1<::GlobalNamespace::BurstSliderGameNoteController*>() noexcept {
      return *reinterpret_cast<::GlobalNamespace::ICubeNoteControllerInitializable_1<::GlobalNamespace::BurstSliderGameNoteController*>*>(this);
    }
    // Creating interface conversion operator: i_BurstSliderGameNoteController
    inline ::GlobalNamespace::ICubeNoteControllerInitializable_1<::GlobalNamespace::BurstSliderGameNoteController*>* i_BurstSliderGameNoteController() noexcept {
      return reinterpret_cast<::GlobalNamespace::ICubeNoteControllerInitializable_1<::GlobalNamespace::BurstSliderGameNoteController*>*>(this);
    }
    // Creating interface conversion operator: operator ::GlobalNamespace::IGameNoteMirrorable
    operator ::GlobalNamespace::IGameNoteMirrorable() noexcept {
      return *reinterpret_cast<::GlobalNamespace::IGameNoteMirrorable*>(this);
    }
    // Creating interface conversion operator: i_IGameNoteMirrorable
    inline ::GlobalNamespace::IGameNoteMirrorable* i_IGameNoteMirrorable() noexcept {
      return reinterpret_cast<::GlobalNamespace::IGameNoteMirrorable*>(this);
    }
    // Creating interface conversion operator: operator ::GlobalNamespace::INoteVisualModifierTypeProvider
    operator ::GlobalNamespace::INoteVisualModifierTypeProvider() noexcept {
      return *reinterpret_cast<::GlobalNamespace::INoteVisualModifierTypeProvider*>(this);
    }
    // Creating interface conversion operator: i_INoteVisualModifierTypeProvider
    inline ::GlobalNamespace::INoteVisualModifierTypeProvider* i_INoteVisualModifierTypeProvider() noexcept {
      return reinterpret_cast<::GlobalNamespace::INoteVisualModifierTypeProvider*>(this);
    }
    // Creating interface conversion operator: operator ::GlobalNamespace::INoteMovementProvider
    operator ::GlobalNamespace::INoteMovementProvider() noexcept {
      return *reinterpret_cast<::GlobalNamespace::INoteMovementProvider*>(this);
    }
    // Creating interface conversion operator: i_INoteMovementProvider
    inline ::GlobalNamespace::INoteMovementProvider* i_INoteMovementProvider() noexcept {
      return reinterpret_cast<::GlobalNamespace::INoteMovementProvider*>(this);
    }
    // Get instance field reference: private BoxCuttableBySaber[] _bigCuttableBySaberList
    [[deprecated("Use field access instead!")]] ::ArrayW<::GlobalNamespace::BoxCuttableBySaber*>& dyn__bigCuttableBySaberList();
    // Get instance field reference: private BoxCuttableBySaber[] _smallCuttableBySaberList
    [[deprecated("Use field access instead!")]] ::ArrayW<::GlobalNamespace::BoxCuttableBySaber*>& dyn__smallCuttableBySaberList();
    // Get instance field reference: private UnityEngine.GameObject _wrapperGO
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn__wrapperGO();
    // Get instance field reference: private readonly AudioTimeSyncController _audioTimeSyncController
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::AudioTimeSyncController*& dyn__audioTimeSyncController();
    // Get instance field reference: private System.Action`1<BurstSliderGameNoteController> cubeNoteControllerDidInitEvent
    [[deprecated("Use field access instead!")]] ::System::Action_1<::GlobalNamespace::BurstSliderGameNoteController*>*& dyn_cubeNoteControllerDidInitEvent();
    // Get instance field reference: private NoteVisualModifierType _noteVisualModifierType
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::NoteVisualModifierType& dyn__noteVisualModifierType();
    // Get instance field reference: private NoteData/GameplayType _gameplayType
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::NoteData::GameplayType& dyn__gameplayType();
    // Get instance field reference: private BoxCuttableBySaber _bigCuttableBySaber
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::BoxCuttableBySaber*& dyn__bigCuttableBySaber();
    // Get instance field reference: private UnityEngine.Vector3 _originalColliderSize
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn__originalColliderSize();
    // Get instance field reference: private UnityEngine.Vector3 _originalColliderCenter
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn__originalColliderCenter();
    // public NoteMovement get_noteMovement()
    // Offset: 0x133A1F4
    ::GlobalNamespace::NoteMovement* get_noteMovement();
    // public NoteVisualModifierType get_noteVisualModifierType()
    // Offset: 0x133A1FC
    ::GlobalNamespace::NoteVisualModifierType get_noteVisualModifierType();
    // public NoteData/GameplayType get_gameplayType()
    // Offset: 0x133A204
    ::GlobalNamespace::NoteData::GameplayType get_gameplayType();
    // public System.Void add_cubeNoteControllerDidInitEvent(System.Action`1<BurstSliderGameNoteController> value)
    // Offset: 0x133A0AC
    void add_cubeNoteControllerDidInitEvent(::System::Action_1<::GlobalNamespace::BurstSliderGameNoteController*>* value);
    // public System.Void remove_cubeNoteControllerDidInitEvent(System.Action`1<BurstSliderGameNoteController> value)
    // Offset: 0x133A150
    void remove_cubeNoteControllerDidInitEvent(::System::Action_1<::GlobalNamespace::BurstSliderGameNoteController*>* value);
    // public System.Void Init(NoteData noteData, System.Single worldRotation, UnityEngine.Vector3 moveStartPos, UnityEngine.Vector3 moveEndPos, UnityEngine.Vector3 jumpEndPos, System.Single moveDuration, System.Single jumpDuration, System.Single jumpGravity, NoteVisualModifierType noteVisualModifierType, System.Single uniformScale)
    // Offset: 0x133A20C
    void Init(::GlobalNamespace::NoteData* noteData, float worldRotation, ::UnityEngine::Vector3 moveStartPos, ::UnityEngine::Vector3 moveEndPos, ::UnityEngine::Vector3 jumpEndPos, float moveDuration, float jumpDuration, float jumpGravity, ::GlobalNamespace::NoteVisualModifierType noteVisualModifierType, float uniformScale);
    // private System.Void HandleBigWasCutBySaber(Saber saber, UnityEngine.Vector3 cutPoint, UnityEngine.Quaternion orientation, UnityEngine.Vector3 cutDirVec)
    // Offset: 0x133AA8C
    void HandleBigWasCutBySaber(::GlobalNamespace::Saber* saber, ::UnityEngine::Vector3 cutPoint, ::UnityEngine::Quaternion orientation, ::UnityEngine::Vector3 cutDirVec);
    // private System.Void HandleSmallWasCutBySaber(Saber saber, UnityEngine.Vector3 cutPoint, UnityEngine.Quaternion orientation, UnityEngine.Vector3 cutDirVec)
    // Offset: 0x133AFE4
    void HandleSmallWasCutBySaber(::GlobalNamespace::Saber* saber, ::UnityEngine::Vector3 cutPoint, ::UnityEngine::Quaternion orientation, ::UnityEngine::Vector3 cutDirVec);
    // private System.Void HandleCut(Saber saber, UnityEngine.Vector3 cutPoint, UnityEngine.Quaternion orientation, UnityEngine.Vector3 cutDirVec, System.Boolean allowBadCut)
    // Offset: 0x133AAA4
    void HandleCut(::GlobalNamespace::Saber* saber, ::UnityEngine::Vector3 cutPoint, ::UnityEngine::Quaternion orientation, ::UnityEngine::Vector3 cutDirVec, bool allowBadCut);
    // public System.Void .ctor()
    // Offset: 0x133B0FC
    // Implemented from: NoteController
    // Base method: System.Void NoteController::.ctor()
    // Base method: System.Void NoteControllerBase::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BurstSliderGameNoteController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::BurstSliderGameNoteController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BurstSliderGameNoteController*, creationType>()));
    }
    // protected override System.Void Awake()
    // Offset: 0x133A554
    // Implemented from: NoteController
    // Base method: System.Void NoteController::Awake()
    void Awake();
    // protected override System.Void OnDestroy()
    // Offset: 0x133A710
    // Implemented from: NoteController
    // Base method: System.Void NoteController::OnDestroy()
    void OnDestroy();
    // protected override System.Void NoteDidPassMissedMarker()
    // Offset: 0x133A8EC
    // Implemented from: NoteController
    // Base method: System.Void NoteController::NoteDidPassMissedMarker()
    void NoteDidPassMissedMarker();
    // protected override System.Void NoteDidStartDissolving()
    // Offset: 0x133A9C0
    // Implemented from: NoteController
    // Base method: System.Void NoteController::NoteDidStartDissolving()
    void NoteDidStartDissolving();
    // protected override System.Void NoteDidStartJump()
    // Offset: 0x133AFFC
    // Implemented from: NoteController
    // Base method: System.Void NoteController::NoteDidStartJump()
    void NoteDidStartJump();
    // protected override System.Void HiddenStateDidChange(System.Boolean hide)
    // Offset: 0x133B0C8
    // Implemented from: NoteController
    // Base method: System.Void NoteController::HiddenStateDidChange(System.Boolean hide)
    void HiddenStateDidChange(bool hide);
    // public override System.Void Pause(System.Boolean pause)
    // Offset: 0x133B0EC
    // Implemented from: NoteController
    // Base method: System.Void NoteController::Pause(System.Boolean pause)
    void Pause(bool pause);
  }; // BurstSliderGameNoteController
  #pragma pack(pop)
  static check_size<sizeof(BurstSliderGameNoteController), 196 + sizeof(::UnityEngine::Vector3)> __GlobalNamespace_BurstSliderGameNoteControllerSizeCheck;
  static_assert(sizeof(BurstSliderGameNoteController) == 0xD0);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BurstSliderGameNoteController::get_noteMovement
// Il2CppName: get_noteMovement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::NoteMovement* (GlobalNamespace::BurstSliderGameNoteController::*)()>(&GlobalNamespace::BurstSliderGameNoteController::get_noteMovement)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BurstSliderGameNoteController*), "get_noteMovement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BurstSliderGameNoteController::get_noteVisualModifierType
// Il2CppName: get_noteVisualModifierType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::NoteVisualModifierType (GlobalNamespace::BurstSliderGameNoteController::*)()>(&GlobalNamespace::BurstSliderGameNoteController::get_noteVisualModifierType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BurstSliderGameNoteController*), "get_noteVisualModifierType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BurstSliderGameNoteController::get_gameplayType
// Il2CppName: get_gameplayType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::NoteData::GameplayType (GlobalNamespace::BurstSliderGameNoteController::*)()>(&GlobalNamespace::BurstSliderGameNoteController::get_gameplayType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BurstSliderGameNoteController*), "get_gameplayType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BurstSliderGameNoteController::add_cubeNoteControllerDidInitEvent
// Il2CppName: add_cubeNoteControllerDidInitEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BurstSliderGameNoteController::*)(::System::Action_1<::GlobalNamespace::BurstSliderGameNoteController*>*)>(&GlobalNamespace::BurstSliderGameNoteController::add_cubeNoteControllerDidInitEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "BurstSliderGameNoteController")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BurstSliderGameNoteController*), "add_cubeNoteControllerDidInitEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BurstSliderGameNoteController::remove_cubeNoteControllerDidInitEvent
// Il2CppName: remove_cubeNoteControllerDidInitEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BurstSliderGameNoteController::*)(::System::Action_1<::GlobalNamespace::BurstSliderGameNoteController*>*)>(&GlobalNamespace::BurstSliderGameNoteController::remove_cubeNoteControllerDidInitEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "BurstSliderGameNoteController")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BurstSliderGameNoteController*), "remove_cubeNoteControllerDidInitEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BurstSliderGameNoteController::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BurstSliderGameNoteController::*)(::GlobalNamespace::NoteData*, float, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, float, float, float, ::GlobalNamespace::NoteVisualModifierType, float)>(&GlobalNamespace::BurstSliderGameNoteController::Init)> {
  static const MethodInfo* get() {
    static auto* noteData = &::il2cpp_utils::GetClassFromName("", "NoteData")->byval_arg;
    static auto* worldRotation = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* moveStartPos = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* moveEndPos = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* jumpEndPos = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* moveDuration = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* jumpDuration = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* jumpGravity = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* noteVisualModifierType = &::il2cpp_utils::GetClassFromName("", "NoteVisualModifierType")->byval_arg;
    static auto* uniformScale = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BurstSliderGameNoteController*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{noteData, worldRotation, moveStartPos, moveEndPos, jumpEndPos, moveDuration, jumpDuration, jumpGravity, noteVisualModifierType, uniformScale});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BurstSliderGameNoteController::HandleBigWasCutBySaber
// Il2CppName: HandleBigWasCutBySaber
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BurstSliderGameNoteController::*)(::GlobalNamespace::Saber*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3)>(&GlobalNamespace::BurstSliderGameNoteController::HandleBigWasCutBySaber)> {
  static const MethodInfo* get() {
    static auto* saber = &::il2cpp_utils::GetClassFromName("", "Saber")->byval_arg;
    static auto* cutPoint = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* orientation = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    static auto* cutDirVec = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BurstSliderGameNoteController*), "HandleBigWasCutBySaber", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{saber, cutPoint, orientation, cutDirVec});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BurstSliderGameNoteController::HandleSmallWasCutBySaber
// Il2CppName: HandleSmallWasCutBySaber
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BurstSliderGameNoteController::*)(::GlobalNamespace::Saber*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3)>(&GlobalNamespace::BurstSliderGameNoteController::HandleSmallWasCutBySaber)> {
  static const MethodInfo* get() {
    static auto* saber = &::il2cpp_utils::GetClassFromName("", "Saber")->byval_arg;
    static auto* cutPoint = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* orientation = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    static auto* cutDirVec = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BurstSliderGameNoteController*), "HandleSmallWasCutBySaber", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{saber, cutPoint, orientation, cutDirVec});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BurstSliderGameNoteController::HandleCut
// Il2CppName: HandleCut
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BurstSliderGameNoteController::*)(::GlobalNamespace::Saber*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3, bool)>(&GlobalNamespace::BurstSliderGameNoteController::HandleCut)> {
  static const MethodInfo* get() {
    static auto* saber = &::il2cpp_utils::GetClassFromName("", "Saber")->byval_arg;
    static auto* cutPoint = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* orientation = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    static auto* cutDirVec = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* allowBadCut = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BurstSliderGameNoteController*), "HandleCut", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{saber, cutPoint, orientation, cutDirVec, allowBadCut});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BurstSliderGameNoteController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::BurstSliderGameNoteController::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BurstSliderGameNoteController::*)()>(&GlobalNamespace::BurstSliderGameNoteController::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BurstSliderGameNoteController*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BurstSliderGameNoteController::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BurstSliderGameNoteController::*)()>(&GlobalNamespace::BurstSliderGameNoteController::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BurstSliderGameNoteController*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BurstSliderGameNoteController::NoteDidPassMissedMarker
// Il2CppName: NoteDidPassMissedMarker
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BurstSliderGameNoteController::*)()>(&GlobalNamespace::BurstSliderGameNoteController::NoteDidPassMissedMarker)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BurstSliderGameNoteController*), "NoteDidPassMissedMarker", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BurstSliderGameNoteController::NoteDidStartDissolving
// Il2CppName: NoteDidStartDissolving
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BurstSliderGameNoteController::*)()>(&GlobalNamespace::BurstSliderGameNoteController::NoteDidStartDissolving)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BurstSliderGameNoteController*), "NoteDidStartDissolving", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BurstSliderGameNoteController::NoteDidStartJump
// Il2CppName: NoteDidStartJump
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BurstSliderGameNoteController::*)()>(&GlobalNamespace::BurstSliderGameNoteController::NoteDidStartJump)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BurstSliderGameNoteController*), "NoteDidStartJump", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BurstSliderGameNoteController::HiddenStateDidChange
// Il2CppName: HiddenStateDidChange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BurstSliderGameNoteController::*)(bool)>(&GlobalNamespace::BurstSliderGameNoteController::HiddenStateDidChange)> {
  static const MethodInfo* get() {
    static auto* hide = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BurstSliderGameNoteController*), "HiddenStateDidChange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hide});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BurstSliderGameNoteController::Pause
// Il2CppName: Pause
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BurstSliderGameNoteController::*)(bool)>(&GlobalNamespace::BurstSliderGameNoteController::Pause)> {
  static const MethodInfo* get() {
    static auto* pause = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BurstSliderGameNoteController*), "Pause", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pause});
  }
};
