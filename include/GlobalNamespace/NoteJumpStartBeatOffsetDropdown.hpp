// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: SimpleTextDropdown
  class SimpleTextDropdown;
  // Forward declaring type: DropdownWithTableView
  class DropdownWithTableView;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
  // Forward declaring type: Tuple`2<T1, T2>
  template<typename T1, typename T2>
  class Tuple_2;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IReadOnlyList`1<T>
  template<typename T>
  class IReadOnlyList_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: NoteJumpStartBeatOffsetDropdown
  class NoteJumpStartBeatOffsetDropdown : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::NoteJumpStartBeatOffsetDropdown::$$c
    class $$c;
    // private HMUI.SimpleTextDropdown _simpleTextDropdown
    // Offset: 0x18
    HMUI::SimpleTextDropdown* simpleTextDropdown;
    // private System.Action`1<System.Int32> didSelectCellWithIdxEvent
    // Offset: 0x20
    System::Action_1<int>* didSelectCellWithIdxEvent;
    // private System.Collections.Generic.IReadOnlyList`1<System.Tuple`2<System.Single,System.String>> _noteJumpStartBeatOffsetData
    // Offset: 0x28
    System::Collections::Generic::IReadOnlyList_1<System::Tuple_2<float, ::Il2CppString*>*>* noteJumpStartBeatOffsetData;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Void add_didSelectCellWithIdxEvent(System.Action`1<System.Int32> value)
    // Offset: 0x20F95C8
    void add_didSelectCellWithIdxEvent(System::Action_1<int>* value);
    // public System.Void remove_didSelectCellWithIdxEvent(System.Action`1<System.Int32> value)
    // Offset: 0x20F966C
    void remove_didSelectCellWithIdxEvent(System::Action_1<int>* value);
    // private System.Collections.Generic.IReadOnlyList`1<System.Tuple`2<System.Single,System.String>> get_noteJumpStartBeatOffsetData()
    // Offset: 0x20F9710
    System::Collections::Generic::IReadOnlyList_1<System::Tuple_2<float, ::Il2CppString*>*>* get_noteJumpStartBeatOffsetData();
    // protected System.Void Start()
    // Offset: 0x20F9868
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0x20F99F0
    void OnDestroy();
    // public System.Single GetSelectedOffset()
    // Offset: 0x20F9ACC
    float GetSelectedOffset();
    // public System.Void SelectCellWithOffset(System.Single offset)
    // Offset: 0x20F9BA0
    void SelectCellWithOffset(float offset);
    // private System.Int32 GetIdxForOffset(System.Single offset)
    // Offset: 0x20F9BDC
    int GetIdxForOffset(float offset);
    // private System.Void HandleSimpleTextDropdownDidSelectCellWithIdx(HMUI.DropdownWithTableView dropdownWithTableView, System.Int32 idx)
    // Offset: 0x20F9E30
    void HandleSimpleTextDropdownDidSelectCellWithIdx(HMUI::DropdownWithTableView* dropdownWithTableView, int idx);
    // public System.Void .ctor()
    // Offset: 0x20F9EA4
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static NoteJumpStartBeatOffsetDropdown* New_ctor();
  }; // NoteJumpStartBeatOffsetDropdown
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::NoteJumpStartBeatOffsetDropdown*, "", "NoteJumpStartBeatOffsetDropdown");
#pragma pack(pop)
