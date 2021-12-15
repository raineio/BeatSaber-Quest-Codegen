// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: MultiplayerConnectedPlayerNoteController
#include "GlobalNamespace/MultiplayerConnectedPlayerNoteController.hpp"
// Including type: ICubeNoteControllerInitializable`1
#include "GlobalNamespace/ICubeNoteControllerInitializable_1.hpp"
// Including type: ICubeNoteTypeProvider
#include "GlobalNamespace/ICubeNoteTypeProvider.hpp"
// Including type: INoteMovementProvider
#include "GlobalNamespace/INoteMovementProvider.hpp"
// Including type: GameNoteController/GameNoteType
#include "GlobalNamespace/GameNoteController_GameNoteType.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: NoteMovement
  class NoteMovement;
  // Forward declaring type: NoteData
  class NoteData;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Vector3 because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: MultiplayerConnectedPlayerGameNoteController
  class MultiplayerConnectedPlayerGameNoteController;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(GlobalNamespace::MultiplayerConnectedPlayerGameNoteController);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerConnectedPlayerGameNoteController*, "", "MultiplayerConnectedPlayerGameNoteController");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x94
  #pragma pack(push, 1)
  // Autogenerated type: MultiplayerConnectedPlayerGameNoteController
  // [TokenAttribute] Offset: FFFFFFFF
  class MultiplayerConnectedPlayerGameNoteController : public GlobalNamespace::MultiplayerConnectedPlayerNoteController/*, public GlobalNamespace::ICubeNoteControllerInitializable_1<GlobalNamespace::MultiplayerConnectedPlayerGameNoteController*>, public GlobalNamespace::ICubeNoteTypeProvider, public GlobalNamespace::INoteMovementProvider*/ {
    public:
    // Writing base type padding for base size: 0x81 to desired offset: 0x88
    char ___base_padding[0x7] = {};
    // Nested type: GlobalNamespace::MultiplayerConnectedPlayerGameNoteController::Pool
    class Pool;
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private System.Action`1<MultiplayerConnectedPlayerGameNoteController> cubeNoteControllerDidInitEvent
    // Size: 0x8
    // Offset: 0x88
    System::Action_1<GlobalNamespace::MultiplayerConnectedPlayerGameNoteController*>* cubeNoteControllerDidInitEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<GlobalNamespace::MultiplayerConnectedPlayerGameNoteController*>*) == 0x8);
    // private GameNoteController/GameNoteType _gameNoteType
    // Size: 0x4
    // Offset: 0x90
    GlobalNamespace::GameNoteController_GameNoteType gameNoteType;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameNoteController_GameNoteType) == 0x4);
    public:
    // Creating interface conversion operator: operator GlobalNamespace::ICubeNoteControllerInitializable_1<GlobalNamespace::MultiplayerConnectedPlayerGameNoteController*>
    operator GlobalNamespace::ICubeNoteControllerInitializable_1<GlobalNamespace::MultiplayerConnectedPlayerGameNoteController*>() noexcept {
      return *reinterpret_cast<GlobalNamespace::ICubeNoteControllerInitializable_1<GlobalNamespace::MultiplayerConnectedPlayerGameNoteController*>*>(this);
    }
    // Creating interface conversion operator: operator GlobalNamespace::ICubeNoteTypeProvider
    operator GlobalNamespace::ICubeNoteTypeProvider() noexcept {
      return *reinterpret_cast<GlobalNamespace::ICubeNoteTypeProvider*>(this);
    }
    // Creating interface conversion operator: operator GlobalNamespace::INoteMovementProvider
    operator GlobalNamespace::INoteMovementProvider() noexcept {
      return *reinterpret_cast<GlobalNamespace::INoteMovementProvider*>(this);
    }
    // Get instance field reference: private System.Action`1<MultiplayerConnectedPlayerGameNoteController> cubeNoteControllerDidInitEvent
    System::Action_1<GlobalNamespace::MultiplayerConnectedPlayerGameNoteController*>*& dyn_cubeNoteControllerDidInitEvent();
    // Get instance field reference: private GameNoteController/GameNoteType _gameNoteType
    GlobalNamespace::GameNoteController_GameNoteType& dyn__gameNoteType();
    // public NoteMovement get_noteMovement()
    // Offset: 0x11CBA40
    GlobalNamespace::NoteMovement* get_noteMovement();
    // public GameNoteController/GameNoteType get_gameNoteType()
    // Offset: 0x11CBA48
    GlobalNamespace::GameNoteController_GameNoteType get_gameNoteType();
    // public System.Void add_cubeNoteControllerDidInitEvent(System.Action`1<MultiplayerConnectedPlayerGameNoteController> value)
    // Offset: 0x11CB8F8
    void add_cubeNoteControllerDidInitEvent(System::Action_1<GlobalNamespace::MultiplayerConnectedPlayerGameNoteController*>* value);
    // public System.Void remove_cubeNoteControllerDidInitEvent(System.Action`1<MultiplayerConnectedPlayerGameNoteController> value)
    // Offset: 0x11CB99C
    void remove_cubeNoteControllerDidInitEvent(System::Action_1<GlobalNamespace::MultiplayerConnectedPlayerGameNoteController*>* value);
    // public System.Void Init(NoteData noteData, System.Single worldRotation, UnityEngine.Vector3 moveStartPos, UnityEngine.Vector3 moveEndPos, UnityEngine.Vector3 jumpEndPos, System.Single moveDuration, System.Single jumpDuration, System.Single jumpGravity, GameNoteController/GameNoteType gameNoteType, System.Single cutDirectionAngleOffset, System.Single uniformScale)
    // Offset: 0x11CA16C
    void Init(GlobalNamespace::NoteData* noteData, float worldRotation, UnityEngine::Vector3 moveStartPos, UnityEngine::Vector3 moveEndPos, UnityEngine::Vector3 jumpEndPos, float moveDuration, float jumpDuration, float jumpGravity, GlobalNamespace::GameNoteController_GameNoteType gameNoteType, float cutDirectionAngleOffset, float uniformScale);
    // public System.Void .ctor()
    // Offset: 0x11CBA50
    // Implemented from: MultiplayerConnectedPlayerNoteController
    // Base method: System.Void MultiplayerConnectedPlayerNoteController::.ctor()
    // Base method: System.Void NoteController::.ctor()
    // Base method: System.Void NoteControllerBase::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerConnectedPlayerGameNoteController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MultiplayerConnectedPlayerGameNoteController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerConnectedPlayerGameNoteController*, creationType>()));
    }
  }; // MultiplayerConnectedPlayerGameNoteController
  #pragma pack(pop)
  static check_size<sizeof(MultiplayerConnectedPlayerGameNoteController), 144 + sizeof(GlobalNamespace::GameNoteController_GameNoteType)> __GlobalNamespace_MultiplayerConnectedPlayerGameNoteControllerSizeCheck;
  static_assert(sizeof(MultiplayerConnectedPlayerGameNoteController) == 0x94);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerConnectedPlayerGameNoteController::get_noteMovement
// Il2CppName: get_noteMovement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::NoteMovement* (GlobalNamespace::MultiplayerConnectedPlayerGameNoteController::*)()>(&GlobalNamespace::MultiplayerConnectedPlayerGameNoteController::get_noteMovement)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerConnectedPlayerGameNoteController*), "get_noteMovement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerConnectedPlayerGameNoteController::get_gameNoteType
// Il2CppName: get_gameNoteType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::GameNoteController_GameNoteType (GlobalNamespace::MultiplayerConnectedPlayerGameNoteController::*)()>(&GlobalNamespace::MultiplayerConnectedPlayerGameNoteController::get_gameNoteType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerConnectedPlayerGameNoteController*), "get_gameNoteType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerConnectedPlayerGameNoteController::add_cubeNoteControllerDidInitEvent
// Il2CppName: add_cubeNoteControllerDidInitEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerConnectedPlayerGameNoteController::*)(System::Action_1<GlobalNamespace::MultiplayerConnectedPlayerGameNoteController*>*)>(&GlobalNamespace::MultiplayerConnectedPlayerGameNoteController::add_cubeNoteControllerDidInitEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "MultiplayerConnectedPlayerGameNoteController")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerConnectedPlayerGameNoteController*), "add_cubeNoteControllerDidInitEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerConnectedPlayerGameNoteController::remove_cubeNoteControllerDidInitEvent
// Il2CppName: remove_cubeNoteControllerDidInitEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerConnectedPlayerGameNoteController::*)(System::Action_1<GlobalNamespace::MultiplayerConnectedPlayerGameNoteController*>*)>(&GlobalNamespace::MultiplayerConnectedPlayerGameNoteController::remove_cubeNoteControllerDidInitEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "MultiplayerConnectedPlayerGameNoteController")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerConnectedPlayerGameNoteController*), "remove_cubeNoteControllerDidInitEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerConnectedPlayerGameNoteController::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerConnectedPlayerGameNoteController::*)(GlobalNamespace::NoteData*, float, UnityEngine::Vector3, UnityEngine::Vector3, UnityEngine::Vector3, float, float, float, GlobalNamespace::GameNoteController_GameNoteType, float, float)>(&GlobalNamespace::MultiplayerConnectedPlayerGameNoteController::Init)> {
  static const MethodInfo* get() {
    static auto* noteData = &::il2cpp_utils::GetClassFromName("", "NoteData")->byval_arg;
    static auto* worldRotation = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* moveStartPos = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* moveEndPos = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* jumpEndPos = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* moveDuration = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* jumpDuration = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* jumpGravity = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* gameNoteType = &::il2cpp_utils::GetClassFromName("", "GameNoteController/GameNoteType")->byval_arg;
    static auto* cutDirectionAngleOffset = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* uniformScale = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerConnectedPlayerGameNoteController*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{noteData, worldRotation, moveStartPos, moveEndPos, jumpEndPos, moveDuration, jumpDuration, jumpGravity, gameNoteType, cutDirectionAngleOffset, uniformScale});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerConnectedPlayerGameNoteController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
