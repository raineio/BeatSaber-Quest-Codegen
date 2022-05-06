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
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: MultiplayerConnectedPlayerNoteController
  class MultiplayerConnectedPlayerNoteController;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::MultiplayerConnectedPlayerNoteController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerConnectedPlayerNoteController*, "", "MultiplayerConnectedPlayerNoteController");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x88
  #pragma pack(push, 1)
  // Autogenerated type: MultiplayerConnectedPlayerNoteController
  // [TokenAttribute] Offset: FFFFFFFF
  class MultiplayerConnectedPlayerNoteController : public ::GlobalNamespace::NoteController {
    public:
    public:
    // private UnityEngine.GameObject _visualsWrapperGo
    // Size: 0x8
    // Offset: 0x80
    ::UnityEngine::GameObject* visualsWrapperGo;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    public:
    // Get instance field reference: private UnityEngine.GameObject _visualsWrapperGo
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn__visualsWrapperGo();
    // public System.Void .ctor()
    // Offset: 0x13CF5E8
    // Implemented from: NoteController
    // Base method: System.Void NoteController::.ctor()
    // Base method: System.Void NoteControllerBase::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerConnectedPlayerNoteController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MultiplayerConnectedPlayerNoteController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerConnectedPlayerNoteController*, creationType>()));
    }
    // protected override System.Void HiddenStateDidChange(System.Boolean hide)
    // Offset: 0x13D1948
    // Implemented from: NoteController
    // Base method: System.Void NoteController::HiddenStateDidChange(System.Boolean hide)
    void HiddenStateDidChange(bool hide);
    // public override System.Void Pause(System.Boolean pause)
    // Offset: 0x13D196C
    // Implemented from: NoteController
    // Base method: System.Void NoteController::Pause(System.Boolean pause)
    void Pause(bool pause);
  }; // MultiplayerConnectedPlayerNoteController
  #pragma pack(pop)
  static check_size<sizeof(MultiplayerConnectedPlayerNoteController), 128 + sizeof(::UnityEngine::GameObject*)> __GlobalNamespace_MultiplayerConnectedPlayerNoteControllerSizeCheck;
  static_assert(sizeof(MultiplayerConnectedPlayerNoteController) == 0x88);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerConnectedPlayerNoteController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerConnectedPlayerNoteController::HiddenStateDidChange
// Il2CppName: HiddenStateDidChange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerConnectedPlayerNoteController::*)(bool)>(&GlobalNamespace::MultiplayerConnectedPlayerNoteController::HiddenStateDidChange)> {
  static const MethodInfo* get() {
    static auto* hide = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerConnectedPlayerNoteController*), "HiddenStateDidChange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hide});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerConnectedPlayerNoteController::Pause
// Il2CppName: Pause
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerConnectedPlayerNoteController::*)(bool)>(&GlobalNamespace::MultiplayerConnectedPlayerNoteController::Pause)> {
  static const MethodInfo* get() {
    static auto* pause = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerConnectedPlayerNoteController*), "Pause", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pause});
  }
};
