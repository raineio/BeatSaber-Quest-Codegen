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
  // Autogenerated type: INoteControllerNoteDidStartDissolvingEvent
  class INoteControllerNoteDidStartDissolvingEvent {
    public:
    // Creating value type constructor for type: INoteControllerNoteDidStartDissolvingEvent
    INoteControllerNoteDidStartDissolvingEvent() noexcept {}
    // public System.Void HandleNoteControllerNoteDidStartDissolving(NoteControllerBase noteController, System.Single duration)
    // Offset: 0xFFFFFFFF
    void HandleNoteControllerNoteDidStartDissolving(GlobalNamespace::NoteControllerBase* noteController, float duration);
  }; // INoteControllerNoteDidStartDissolvingEvent
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::INoteControllerNoteDidStartDissolvingEvent*, "", "INoteControllerNoteDidStartDissolvingEvent");
// Writing MetadataGetter for method: GlobalNamespace::INoteControllerNoteDidStartDissolvingEvent::HandleNoteControllerNoteDidStartDissolving
// Il2CppName: HandleNoteControllerNoteDidStartDissolving
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::INoteControllerNoteDidStartDissolvingEvent::*)(GlobalNamespace::NoteControllerBase*, float)>(&GlobalNamespace::INoteControllerNoteDidStartDissolvingEvent::HandleNoteControllerNoteDidStartDissolving)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::INoteControllerNoteDidStartDissolvingEvent*), "HandleNoteControllerNoteDidStartDissolving", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<GlobalNamespace::NoteControllerBase*>(), ::il2cpp_utils::ExtractIndependentType<float>()});
  }
};
