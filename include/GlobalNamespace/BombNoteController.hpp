// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: NoteController
#include "GlobalNamespace/NoteController.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: CuttableBySaber
  class CuttableBySaber;
  // Forward declaring type: NoteData
  class NoteData;
  // Forward declaring type: Saber
  class Saber;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
  // Skipping declaration: Vector3 because it is already included!
  // Skipping declaration: Quaternion because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: BombNoteController
  class BombNoteController;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::BombNoteController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BombNoteController*, "", "BombNoteController");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x90
  #pragma pack(push, 1)
  // Autogenerated type: BombNoteController
  // [TokenAttribute] Offset: FFFFFFFF
  class BombNoteController : public ::GlobalNamespace::NoteController {
    public:
    // Nested type: ::GlobalNamespace::BombNoteController::Pool
    class Pool;
    public:
    // private CuttableBySaber _cuttableBySaber
    // Size: 0x8
    // Offset: 0x80
    ::GlobalNamespace::CuttableBySaber* cuttableBySaber;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::CuttableBySaber*) == 0x8);
    // private UnityEngine.GameObject _wrapperGO
    // Size: 0x8
    // Offset: 0x88
    ::UnityEngine::GameObject* wrapperGO;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    public:
    // Get instance field reference: private CuttableBySaber _cuttableBySaber
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::CuttableBySaber*& dyn__cuttableBySaber();
    // Get instance field reference: private UnityEngine.GameObject _wrapperGO
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn__wrapperGO();
    // public System.Void Init(NoteData noteData, System.Single worldRotation, UnityEngine.Vector3 moveStartPos, UnityEngine.Vector3 moveEndPos, UnityEngine.Vector3 jumpEndPos, System.Single moveDuration, System.Single jumpDuration, System.Single jumpGravity)
    // Offset: 0x14015EC
    void Init(::GlobalNamespace::NoteData* noteData, float worldRotation, ::UnityEngine::Vector3 moveStartPos, ::UnityEngine::Vector3 moveEndPos, ::UnityEngine::Vector3 jumpEndPos, float moveDuration, float jumpDuration, float jumpGravity);
    // private System.Void HandleDidPassHalfJump()
    // Offset: 0x14018C0
    void HandleDidPassHalfJump();
    // private System.Void HandleWasCutBySaber(Saber saber, UnityEngine.Vector3 cutPoint, UnityEngine.Quaternion orientation, UnityEngine.Vector3 cutDirVec)
    // Offset: 0x14018E4
    void HandleWasCutBySaber(::GlobalNamespace::Saber* saber, ::UnityEngine::Vector3 cutPoint, ::UnityEngine::Quaternion orientation, ::UnityEngine::Vector3 cutDirVec);
    // public System.Void .ctor()
    // Offset: 0x1401C28
    // Implemented from: NoteController
    // Base method: System.Void NoteController::.ctor()
    // Base method: System.Void NoteControllerBase::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BombNoteController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::BombNoteController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BombNoteController*, creationType>()));
    }
    // protected override System.Void Awake()
    // Offset: 0x14016C4
    // Implemented from: NoteController
    // Base method: System.Void NoteController::Awake()
    void Awake();
    // protected override System.Void OnDestroy()
    // Offset: 0x14017A0
    // Implemented from: NoteController
    // Base method: System.Void NoteController::OnDestroy()
    void OnDestroy();
    // protected override System.Void NoteDidPassMissedMarker()
    // Offset: 0x1401880
    // Implemented from: NoteController
    // Base method: System.Void NoteController::NoteDidPassMissedMarker()
    void NoteDidPassMissedMarker();
    // protected override System.Void NoteDidStartDissolving()
    // Offset: 0x1401BD0
    // Implemented from: NoteController
    // Base method: System.Void NoteController::NoteDidStartDissolving()
    void NoteDidStartDissolving();
    // protected override System.Void HiddenStateDidChange(System.Boolean hide)
    // Offset: 0x1401BF4
    // Implemented from: NoteController
    // Base method: System.Void NoteController::HiddenStateDidChange(System.Boolean hide)
    void HiddenStateDidChange(bool hide);
    // public override System.Void Pause(System.Boolean pause)
    // Offset: 0x1401C18
    // Implemented from: NoteController
    // Base method: System.Void NoteController::Pause(System.Boolean pause)
    void Pause(bool pause);
  }; // BombNoteController
  #pragma pack(pop)
  static check_size<sizeof(BombNoteController), 136 + sizeof(::UnityEngine::GameObject*)> __GlobalNamespace_BombNoteControllerSizeCheck;
  static_assert(sizeof(BombNoteController) == 0x90);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BombNoteController::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BombNoteController::*)(::GlobalNamespace::NoteData*, float, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, float, float, float)>(&GlobalNamespace::BombNoteController::Init)> {
  static const MethodInfo* get() {
    static auto* noteData = &::il2cpp_utils::GetClassFromName("", "NoteData")->byval_arg;
    static auto* worldRotation = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* moveStartPos = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* moveEndPos = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* jumpEndPos = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* moveDuration = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* jumpDuration = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* jumpGravity = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BombNoteController*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{noteData, worldRotation, moveStartPos, moveEndPos, jumpEndPos, moveDuration, jumpDuration, jumpGravity});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BombNoteController::HandleDidPassHalfJump
// Il2CppName: HandleDidPassHalfJump
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BombNoteController::*)()>(&GlobalNamespace::BombNoteController::HandleDidPassHalfJump)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BombNoteController*), "HandleDidPassHalfJump", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BombNoteController::HandleWasCutBySaber
// Il2CppName: HandleWasCutBySaber
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BombNoteController::*)(::GlobalNamespace::Saber*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3)>(&GlobalNamespace::BombNoteController::HandleWasCutBySaber)> {
  static const MethodInfo* get() {
    static auto* saber = &::il2cpp_utils::GetClassFromName("", "Saber")->byval_arg;
    static auto* cutPoint = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* orientation = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    static auto* cutDirVec = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BombNoteController*), "HandleWasCutBySaber", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{saber, cutPoint, orientation, cutDirVec});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BombNoteController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::BombNoteController::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BombNoteController::*)()>(&GlobalNamespace::BombNoteController::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BombNoteController*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BombNoteController::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BombNoteController::*)()>(&GlobalNamespace::BombNoteController::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BombNoteController*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BombNoteController::NoteDidPassMissedMarker
// Il2CppName: NoteDidPassMissedMarker
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BombNoteController::*)()>(&GlobalNamespace::BombNoteController::NoteDidPassMissedMarker)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BombNoteController*), "NoteDidPassMissedMarker", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BombNoteController::NoteDidStartDissolving
// Il2CppName: NoteDidStartDissolving
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BombNoteController::*)()>(&GlobalNamespace::BombNoteController::NoteDidStartDissolving)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BombNoteController*), "NoteDidStartDissolving", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BombNoteController::HiddenStateDidChange
// Il2CppName: HiddenStateDidChange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BombNoteController::*)(bool)>(&GlobalNamespace::BombNoteController::HiddenStateDidChange)> {
  static const MethodInfo* get() {
    static auto* hide = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BombNoteController*), "HiddenStateDidChange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hide});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BombNoteController::Pause
// Il2CppName: Pause
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BombNoteController::*)(bool)>(&GlobalNamespace::BombNoteController::Pause)> {
  static const MethodInfo* get() {
    static auto* pause = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BombNoteController*), "Pause", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pause});
  }
};
