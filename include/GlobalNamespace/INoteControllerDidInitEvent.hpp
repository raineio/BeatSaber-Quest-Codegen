// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: NoteControllerBase
  class NoteControllerBase;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: INoteControllerDidInitEvent
  class INoteControllerDidInitEvent {
    public:
    // Creating value type constructor for type: INoteControllerDidInitEvent
    INoteControllerDidInitEvent() noexcept {}
    // public System.Void HandleNoteControllerDidInit(NoteControllerBase noteController)
    // Offset: 0xFFFFFFFF
    void HandleNoteControllerDidInit(GlobalNamespace::NoteControllerBase* noteController);
  }; // INoteControllerDidInitEvent
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::INoteControllerDidInitEvent*, "", "INoteControllerDidInitEvent");
// Writing MetadataGetter for method: GlobalNamespace::INoteControllerDidInitEvent::HandleNoteControllerDidInit
// Il2CppName: HandleNoteControllerDidInit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::INoteControllerDidInitEvent::*)(GlobalNamespace::NoteControllerBase*)>(&GlobalNamespace::INoteControllerDidInitEvent::HandleNoteControllerDidInit)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::INoteControllerDidInitEvent*), "HandleNoteControllerDidInit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<GlobalNamespace::NoteControllerBase*>()});
  }
};
