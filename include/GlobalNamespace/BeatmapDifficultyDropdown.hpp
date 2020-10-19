// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: BeatmapDifficultyMask
#include "GlobalNamespace/BeatmapDifficultyMask.hpp"
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
  // Autogenerated type: BeatmapDifficultyDropdown
  class BeatmapDifficultyDropdown : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::BeatmapDifficultyDropdown::$$c
    class $$c;
    // private HMUI.SimpleTextDropdown _simpleTextDropdown
    // Offset: 0x18
    HMUI::SimpleTextDropdown* simpleTextDropdown;
    // private System.Action`1<System.Int32> didSelectCellWithIdxEvent
    // Offset: 0x20
    System::Action_1<int>* didSelectCellWithIdxEvent;
    // private System.Collections.Generic.IReadOnlyList`1<System.Tuple`2<BeatmapDifficultyMask,System.String>> _beatmapDifficultyData
    // Offset: 0x28
    System::Collections::Generic::IReadOnlyList_1<System::Tuple_2<GlobalNamespace::BeatmapDifficultyMask, ::Il2CppString*>*>* beatmapDifficultyData;
    // private System.Boolean <includeAllDifficulties>k__BackingField
    // Offset: 0x30
    bool includeAllDifficulties;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Void add_didSelectCellWithIdxEvent(System.Action`1<System.Int32> value)
    // Offset: 0x20C97A0
    void add_didSelectCellWithIdxEvent(System::Action_1<int>* value);
    // public System.Void remove_didSelectCellWithIdxEvent(System.Action`1<System.Int32> value)
    // Offset: 0x20C9844
    void remove_didSelectCellWithIdxEvent(System::Action_1<int>* value);
    // private System.Collections.Generic.IReadOnlyList`1<System.Tuple`2<BeatmapDifficultyMask,System.String>> get_beatmapDifficultyData()
    // Offset: 0x20C98E8
    System::Collections::Generic::IReadOnlyList_1<System::Tuple_2<GlobalNamespace::BeatmapDifficultyMask, ::Il2CppString*>*>* get_beatmapDifficultyData();
    // public System.Boolean get_includeAllDifficulties()
    // Offset: 0x20C9AE4
    bool get_includeAllDifficulties();
    // public System.Void set_includeAllDifficulties(System.Boolean value)
    // Offset: 0x20C9AEC
    void set_includeAllDifficulties(bool value);
    // protected System.Void Start()
    // Offset: 0x20C9AF8
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0x20C9C80
    void OnDestroy();
    // public BeatmapDifficultyMask GetSelectedBeatmapDifficultyMask()
    // Offset: 0x20C9D5C
    GlobalNamespace::BeatmapDifficultyMask GetSelectedBeatmapDifficultyMask();
    // public System.Void SelectCellWithBeatmapDifficultyMask(BeatmapDifficultyMask beatmapDifficultyMask)
    // Offset: 0x20C9E30
    void SelectCellWithBeatmapDifficultyMask(GlobalNamespace::BeatmapDifficultyMask beatmapDifficultyMask);
    // private System.Int32 GetIdxForBeatmapDifficultyMask(BeatmapDifficultyMask beatmapDifficultyMask)
    // Offset: 0x20C9E6C
    int GetIdxForBeatmapDifficultyMask(GlobalNamespace::BeatmapDifficultyMask beatmapDifficultyMask);
    // private System.Void HandleSimpleTextDropdownDidSelectCellWithIdx(HMUI.DropdownWithTableView dropdownWithTableView, System.Int32 idx)
    // Offset: 0x20C9F14
    void HandleSimpleTextDropdownDidSelectCellWithIdx(HMUI::DropdownWithTableView* dropdownWithTableView, int idx);
    // public System.Void .ctor()
    // Offset: 0x20C9F88
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static BeatmapDifficultyDropdown* New_ctor();
  }; // BeatmapDifficultyDropdown
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapDifficultyDropdown*, "", "BeatmapDifficultyDropdown");
#pragma pack(pop)
