// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: HMUI.ViewController
#include "HMUI/ViewController.hpp"
// Including type: System.ValueTuple`2
#include "System/ValueTuple_2.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: TextSegmentedControl
  class TextSegmentedControl;
  // Forward declaring type: SegmentedControl
  class SegmentedControl;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: HelpMenuViewController
  class HelpMenuViewController;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(GlobalNamespace::HelpMenuViewController);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::HelpMenuViewController*, "", "HelpMenuViewController");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x88
  #pragma pack(push, 1)
  // Autogenerated type: HelpMenuViewController
  // [TokenAttribute] Offset: FFFFFFFF
  class HelpMenuViewController : public HMUI::ViewController {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private HMUI.TextSegmentedControl _helpMenuSegmentedControl
    // Size: 0x8
    // Offset: 0x70
    HMUI::TextSegmentedControl* helpMenuSegmentedControl;
    // Field size check
    static_assert(sizeof(HMUI::TextSegmentedControl*) == 0x8);
    // private System.Action`1<System.Int32> didSelectHelpSubMenuEvent
    // Size: 0x8
    // Offset: 0x78
    System::Action_1<int>* didSelectHelpSubMenuEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<int>*) == 0x8);
    // [TupleElementNamesAttribute] Offset: 0xF45724
    // private System.Collections.Generic.List`1<System.ValueTuple`2<HMUI.ViewController,System.String>> _viewControllers
    // Size: 0x8
    // Offset: 0x80
    System::Collections::Generic::List_1<System::ValueTuple_2<HMUI::ViewController*, ::Il2CppString*>>* viewControllers;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<System::ValueTuple_2<HMUI::ViewController*, ::Il2CppString*>>*) == 0x8);
    public:
    // Get instance field reference: private HMUI.TextSegmentedControl _helpMenuSegmentedControl
    HMUI::TextSegmentedControl*& dyn__helpMenuSegmentedControl();
    // Get instance field reference: private System.Action`1<System.Int32> didSelectHelpSubMenuEvent
    System::Action_1<int>*& dyn_didSelectHelpSubMenuEvent();
    // Get instance field reference: private System.Collections.Generic.List`1<System.ValueTuple`2<HMUI.ViewController,System.String>> _viewControllers
    System::Collections::Generic::List_1<System::ValueTuple_2<HMUI::ViewController*, ::Il2CppString*>>*& dyn__viewControllers();
    // public System.Void add_didSelectHelpSubMenuEvent(System.Action`1<System.Int32> value)
    // Offset: 0x119DC2C
    void add_didSelectHelpSubMenuEvent(System::Action_1<int>* value);
    // public System.Void remove_didSelectHelpSubMenuEvent(System.Action`1<System.Int32> value)
    // Offset: 0x119DE64
    void remove_didSelectHelpSubMenuEvent(System::Action_1<int>* value);
    // public System.Void Init(System.Collections.Generic.List`1<System.ValueTuple`2<HMUI.ViewController,System.String>> viewControllers)
    // Offset: 0x119E178
    void Init(System::Collections::Generic::List_1<System::ValueTuple_2<HMUI::ViewController*, ::Il2CppString*>>* viewControllers);
    // private System.Void HandleHelpMenuSegmentedControlDidSelectCell(HMUI.SegmentedControl segmentedControl, System.Int32 cellIdx)
    // Offset: 0x119E358
    void HandleHelpMenuSegmentedControlDidSelectCell(HMUI::SegmentedControl* segmentedControl, int cellIdx);
    // public System.Void .ctor()
    // Offset: 0x119E3CC
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HelpMenuViewController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::HelpMenuViewController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HelpMenuViewController*, creationType>()));
    }
    // protected override System.Void DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    // Offset: 0x119E180
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);
  }; // HelpMenuViewController
  #pragma pack(pop)
  static check_size<sizeof(HelpMenuViewController), 128 + sizeof(System::Collections::Generic::List_1<System::ValueTuple_2<HMUI::ViewController*, ::Il2CppString*>>*)> __GlobalNamespace_HelpMenuViewControllerSizeCheck;
  static_assert(sizeof(HelpMenuViewController) == 0x88);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::HelpMenuViewController::add_didSelectHelpSubMenuEvent
// Il2CppName: add_didSelectHelpSubMenuEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HelpMenuViewController::*)(System::Action_1<int>*)>(&GlobalNamespace::HelpMenuViewController::add_didSelectHelpSubMenuEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int32")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HelpMenuViewController*), "add_didSelectHelpSubMenuEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HelpMenuViewController::remove_didSelectHelpSubMenuEvent
// Il2CppName: remove_didSelectHelpSubMenuEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HelpMenuViewController::*)(System::Action_1<int>*)>(&GlobalNamespace::HelpMenuViewController::remove_didSelectHelpSubMenuEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int32")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HelpMenuViewController*), "remove_didSelectHelpSubMenuEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HelpMenuViewController::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HelpMenuViewController::*)(System::Collections::Generic::List_1<System::ValueTuple_2<HMUI::ViewController*, ::Il2CppString*>>*)>(&GlobalNamespace::HelpMenuViewController::Init)> {
  static const MethodInfo* get() {
    static auto* viewControllers = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "ValueTuple`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("HMUI", "ViewController"), ::il2cpp_utils::GetClassFromName("System", "String")})})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HelpMenuViewController*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{viewControllers});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HelpMenuViewController::HandleHelpMenuSegmentedControlDidSelectCell
// Il2CppName: HandleHelpMenuSegmentedControlDidSelectCell
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HelpMenuViewController::*)(HMUI::SegmentedControl*, int)>(&GlobalNamespace::HelpMenuViewController::HandleHelpMenuSegmentedControlDidSelectCell)> {
  static const MethodInfo* get() {
    static auto* segmentedControl = &::il2cpp_utils::GetClassFromName("HMUI", "SegmentedControl")->byval_arg;
    static auto* cellIdx = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HelpMenuViewController*), "HandleHelpMenuSegmentedControlDidSelectCell", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{segmentedControl, cellIdx});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HelpMenuViewController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::HelpMenuViewController::DidActivate
// Il2CppName: DidActivate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HelpMenuViewController::*)(bool, bool, bool)>(&GlobalNamespace::HelpMenuViewController::DidActivate)> {
  static const MethodInfo* get() {
    static auto* firstActivation = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* addedToHierarchy = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* screenSystemEnabling = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HelpMenuViewController*), "DidActivate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{firstActivation, addedToHierarchy, screenSystemEnabling});
  }
};
