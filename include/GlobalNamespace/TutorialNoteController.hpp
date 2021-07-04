// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: NoteController
#include "GlobalNamespace/NoteController.hpp"
// Including type: ICubeNoteMirrorable
#include "GlobalNamespace/ICubeNoteMirrorable.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BoxCuttableBySaber
  class BoxCuttableBySaber;
  // Forward declaring type: NoteMovement
  class NoteMovement;
  // Forward declaring type: GameNoteType
  struct GameNoteController_GameNoteType;
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
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x98
  #pragma pack(push, 1)
  // Autogenerated type: TutorialNoteController
  class TutorialNoteController : public GlobalNamespace::NoteController/*, public GlobalNamespace::ICubeNoteMirrorable*/ {
    public:
    // Nested type: GlobalNamespace::TutorialNoteController::Pool
    class Pool;
    // private BoxCuttableBySaber _cuttableBySaberCore
    // Size: 0x8
    // Offset: 0x78
    GlobalNamespace::BoxCuttableBySaber* cuttableBySaberCore;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BoxCuttableBySaber*) == 0x8);
    // private BoxCuttableBySaber _cuttableBySaberBeforeNote
    // Size: 0x8
    // Offset: 0x80
    GlobalNamespace::BoxCuttableBySaber* cuttableBySaberBeforeNote;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BoxCuttableBySaber*) == 0x8);
    // private UnityEngine.GameObject _wrapperGO
    // Size: 0x8
    // Offset: 0x88
    UnityEngine::GameObject* wrapperGO;
    // Field size check
    static_assert(sizeof(UnityEngine::GameObject*) == 0x8);
    // private System.Boolean _beforeNoteCutWasOk
    // Size: 0x1
    // Offset: 0x90
    bool beforeNoteCutWasOk;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _hidden
    // Size: 0x1
    // Offset: 0x91
    bool hidden;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: hidden and: cutAngleTolerance
    char __padding4[0x2] = {};
    // private System.Single _cutAngleTolerance
    // Size: 0x4
    // Offset: 0x94
    float cutAngleTolerance;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: TutorialNoteController
    TutorialNoteController(GlobalNamespace::BoxCuttableBySaber* cuttableBySaberCore_ = {}, GlobalNamespace::BoxCuttableBySaber* cuttableBySaberBeforeNote_ = {}, UnityEngine::GameObject* wrapperGO_ = {}, bool beforeNoteCutWasOk_ = {}, bool hidden_ = {}, float cutAngleTolerance_ = {}) noexcept : cuttableBySaberCore{cuttableBySaberCore_}, cuttableBySaberBeforeNote{cuttableBySaberBeforeNote_}, wrapperGO{wrapperGO_}, beforeNoteCutWasOk{beforeNoteCutWasOk_}, hidden{hidden_}, cutAngleTolerance{cutAngleTolerance_} {}
    // Creating interface conversion operator: operator GlobalNamespace::ICubeNoteMirrorable
    operator GlobalNamespace::ICubeNoteMirrorable() noexcept {
      return *reinterpret_cast<GlobalNamespace::ICubeNoteMirrorable*>(this);
    }
    // public NoteMovement get_noteMovement()
    // Offset: 0x111E604
    GlobalNamespace::NoteMovement* get_noteMovement();
    // public GameNoteController/GameNoteType get_gameNoteType()
    // Offset: 0x111E60C
    GlobalNamespace::GameNoteController_GameNoteType get_gameNoteType();
    // public System.Void Init(NoteData noteData, System.Single worldRotation, UnityEngine.Vector3 moveStartPos, UnityEngine.Vector3 moveEndPos, UnityEngine.Vector3 jumpEndPos, System.Single moveDuration, System.Single jumpDuration, System.Single jumpGravity, System.Single cutDirectionAngleOffset, System.Single cutAngleTolerance, System.Single uniformScale)
    // Offset: 0x111C5DC
    void Init(GlobalNamespace::NoteData* noteData, float worldRotation, UnityEngine::Vector3 moveStartPos, UnityEngine::Vector3 moveEndPos, UnityEngine::Vector3 jumpEndPos, float moveDuration, float jumpDuration, float jumpGravity, float cutDirectionAngleOffset, float cutAngleTolerance, float uniformScale);
    // private System.Void HandleBeforeNoteWasCutBySaber(Saber saber, UnityEngine.Vector3 cutPoint, UnityEngine.Quaternion orientation, UnityEngine.Vector3 cutDirVec)
    // Offset: 0x111E894
    void HandleBeforeNoteWasCutBySaber(GlobalNamespace::Saber* saber, UnityEngine::Vector3 cutPoint, UnityEngine::Quaternion orientation, UnityEngine::Vector3 cutDirVec);
    // private System.Void HandleCoreWasCutBySaber(Saber saber, UnityEngine.Vector3 cutPoint, UnityEngine.Quaternion orientation, UnityEngine.Vector3 cutDirVec)
    // Offset: 0x111E9A4
    void HandleCoreWasCutBySaber(GlobalNamespace::Saber* saber, UnityEngine::Vector3 cutPoint, UnityEngine::Quaternion orientation, UnityEngine::Vector3 cutDirVec);
    // private UnityEngine.Transform INoteMirrorable.get_transform()
    // Offset: 0x111ECC0
    UnityEngine::Transform* INoteMirrorable_get_transform();
    // public override System.Void set_hide(System.Boolean value)
    // Offset: 0x111E5A8
    // Implemented from: NoteController
    // Base method: System.Void NoteController::set_hide(System.Boolean value)
    void set_hide(bool value);
    // public override System.Boolean get_hide()
    // Offset: 0x111E5EC
    // Implemented from: NoteController
    // Base method: System.Boolean NoteController::get_hide()
    bool get_hide();
    // public override System.Void set_pause(System.Boolean value)
    // Offset: 0x111E5F4
    // Implemented from: NoteController
    // Base method: System.Void NoteController::set_pause(System.Boolean value)
    void set_pause(bool value);
    // protected override System.Void Awake()
    // Offset: 0x111E614
    // Implemented from: NoteController
    // Base method: System.Void NoteController::Awake()
    void Awake();
    // protected override System.Void OnDestroy()
    // Offset: 0x111E6E8
    // Implemented from: NoteController
    // Base method: System.Void NoteController::OnDestroy()
    void OnDestroy();
    // protected override System.Void NoteDidPassMissedMarker()
    // Offset: 0x111E83C
    // Implemented from: NoteController
    // Base method: System.Void NoteController::NoteDidPassMissedMarker()
    void NoteDidPassMissedMarker();
    // public System.Void .ctor()
    // Offset: 0x111ECB8
    // Implemented from: NoteController
    // Base method: System.Void NoteController::.ctor()
    // Base method: System.Void NoteControllerBase::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TutorialNoteController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::TutorialNoteController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TutorialNoteController*, creationType>()));
    }
  }; // TutorialNoteController
  #pragma pack(pop)
  static check_size<sizeof(TutorialNoteController), 148 + sizeof(float)> __GlobalNamespace_TutorialNoteControllerSizeCheck;
  static_assert(sizeof(TutorialNoteController) == 0x98);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::TutorialNoteController*, "", "TutorialNoteController");
// Writing MetadataGetter for method: GlobalNamespace::TutorialNoteController::get_noteMovement
// Il2CppName: get_noteMovement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::NoteMovement* (GlobalNamespace::TutorialNoteController::*)()>(&GlobalNamespace::TutorialNoteController::get_noteMovement)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TutorialNoteController*), "get_noteMovement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TutorialNoteController::get_gameNoteType
// Il2CppName: get_gameNoteType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::GameNoteController_GameNoteType (GlobalNamespace::TutorialNoteController::*)()>(&GlobalNamespace::TutorialNoteController::get_gameNoteType)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TutorialNoteController*), "get_gameNoteType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TutorialNoteController::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TutorialNoteController::*)(GlobalNamespace::NoteData*, float, UnityEngine::Vector3, UnityEngine::Vector3, UnityEngine::Vector3, float, float, float, float, float, float)>(&GlobalNamespace::TutorialNoteController::Init)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TutorialNoteController*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<GlobalNamespace::NoteData*>(), ::il2cpp_utils::ExtractIndependentType<float>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector3>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector3>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector3>(), ::il2cpp_utils::ExtractIndependentType<float>(), ::il2cpp_utils::ExtractIndependentType<float>(), ::il2cpp_utils::ExtractIndependentType<float>(), ::il2cpp_utils::ExtractIndependentType<float>(), ::il2cpp_utils::ExtractIndependentType<float>(), ::il2cpp_utils::ExtractIndependentType<float>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TutorialNoteController::HandleBeforeNoteWasCutBySaber
// Il2CppName: HandleBeforeNoteWasCutBySaber
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TutorialNoteController::*)(GlobalNamespace::Saber*, UnityEngine::Vector3, UnityEngine::Quaternion, UnityEngine::Vector3)>(&GlobalNamespace::TutorialNoteController::HandleBeforeNoteWasCutBySaber)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TutorialNoteController*), "HandleBeforeNoteWasCutBySaber", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<GlobalNamespace::Saber*>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector3>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Quaternion>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector3>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TutorialNoteController::HandleCoreWasCutBySaber
// Il2CppName: HandleCoreWasCutBySaber
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TutorialNoteController::*)(GlobalNamespace::Saber*, UnityEngine::Vector3, UnityEngine::Quaternion, UnityEngine::Vector3)>(&GlobalNamespace::TutorialNoteController::HandleCoreWasCutBySaber)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TutorialNoteController*), "HandleCoreWasCutBySaber", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<GlobalNamespace::Saber*>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector3>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Quaternion>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector3>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TutorialNoteController::INoteMirrorable_get_transform
// Il2CppName: INoteMirrorable.get_transform
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Transform* (GlobalNamespace::TutorialNoteController::*)()>(&GlobalNamespace::TutorialNoteController::INoteMirrorable_get_transform)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TutorialNoteController*), "INoteMirrorable.get_transform", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TutorialNoteController::set_hide
// Il2CppName: set_hide
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TutorialNoteController::*)(bool)>(&GlobalNamespace::TutorialNoteController::set_hide)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TutorialNoteController*), "set_hide", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<bool>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TutorialNoteController::get_hide
// Il2CppName: get_hide
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::TutorialNoteController::*)()>(&GlobalNamespace::TutorialNoteController::get_hide)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TutorialNoteController*), "get_hide", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TutorialNoteController::set_pause
// Il2CppName: set_pause
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TutorialNoteController::*)(bool)>(&GlobalNamespace::TutorialNoteController::set_pause)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TutorialNoteController*), "set_pause", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<bool>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TutorialNoteController::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TutorialNoteController::*)()>(&GlobalNamespace::TutorialNoteController::Awake)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TutorialNoteController*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TutorialNoteController::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TutorialNoteController::*)()>(&GlobalNamespace::TutorialNoteController::OnDestroy)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TutorialNoteController*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TutorialNoteController::NoteDidPassMissedMarker
// Il2CppName: NoteDidPassMissedMarker
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TutorialNoteController::*)()>(&GlobalNamespace::TutorialNoteController::NoteDidPassMissedMarker)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TutorialNoteController*), "NoteDidPassMissedMarker", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TutorialNoteController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
