// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: HMUI.ViewController
#include "HMUI/ViewController.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: SettingsSubMenuInfo
  class SettingsSubMenuInfo;
}
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: TextSegmentedControl
  class TextSegmentedControl;
  // Forward declaring type: SegmentedControl
  class SegmentedControl;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: MainSettingsMenuViewController
  class MainSettingsMenuViewController : public HMUI::ViewController {
    public:
    // private System.Action`2<SettingsSubMenuInfo,System.Int32> didSelectSettingsSubMenuEvent
    // Offset: 0x70
    System::Action_2<GlobalNamespace::SettingsSubMenuInfo*, int>* didSelectSettingsSubMenuEvent;
    // private SettingsSubMenuInfo[] _settingsSubMenuInfos
    // Offset: 0x78
    ::Array<GlobalNamespace::SettingsSubMenuInfo*>* settingsSubMenuInfos;
    // private HMUI.TextSegmentedControl _settingsMenuSegmentedControl
    // Offset: 0x80
    HMUI::TextSegmentedControl* settingsMenuSegmentedControl;
    // private SettingsSubMenuInfo _selectedSubMenuInfo
    // Offset: 0x88
    GlobalNamespace::SettingsSubMenuInfo* selectedSubMenuInfo;
    // private System.Int32 _selectedSubMenuInfoIdx
    // Offset: 0x90
    int selectedSubMenuInfoIdx;
    // public System.Void add_didSelectSettingsSubMenuEvent(System.Action`2<SettingsSubMenuInfo,System.Int32> value)
    // Offset: 0x1FBFC64
    void add_didSelectSettingsSubMenuEvent(System::Action_2<GlobalNamespace::SettingsSubMenuInfo*, int>* value);
    // public System.Void remove_didSelectSettingsSubMenuEvent(System.Action`2<SettingsSubMenuInfo,System.Int32> value)
    // Offset: 0x1FBFD08
    void remove_didSelectSettingsSubMenuEvent(System::Action_2<GlobalNamespace::SettingsSubMenuInfo*, int>* value);
    // public System.Int32 get_numberOfSubMenus()
    // Offset: 0x1FBFDAC
    int get_numberOfSubMenus();
    // public SettingsSubMenuInfo get_selectedSubMenuInfo()
    // Offset: 0x1FBFDC8
    GlobalNamespace::SettingsSubMenuInfo* get_selectedSubMenuInfo();
    // public System.Void Init(System.Int32 selectedSubMenuInfoIdx)
    // Offset: 0x1FBFDD0
    void Init(int selectedSubMenuInfoIdx);
    // private System.Void HandleSettingsMenuSegmentedControlDidSelectCell(HMUI.SegmentedControl segmentedControl, System.Int32 cellIdx)
    // Offset: 0x1FBFFAC
    void HandleSettingsMenuSegmentedControlDidSelectCell(HMUI::SegmentedControl* segmentedControl, int cellIdx);
    // protected override System.Void DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    // Offset: 0x1FBFE14
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);
    // public System.Void .ctor()
    // Offset: 0x1FC0060
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static MainSettingsMenuViewController* New_ctor();
  }; // MainSettingsMenuViewController
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MainSettingsMenuViewController*, "", "MainSettingsMenuViewController");
#pragma pack(pop)
