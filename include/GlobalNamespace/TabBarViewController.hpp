// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: HMUI.ViewController
#include "HMUI/ViewController.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: TextSegmentedControl
  class TextSegmentedControl;
  // Forward declaring type: SegmentedControl
  class SegmentedControl;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: ContentSizeFitter
  class ContentSizeFitter;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: TabBarViewController
  class TabBarViewController;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(GlobalNamespace::TabBarViewController);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::TabBarViewController*, "", "TabBarViewController");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x91
  #pragma pack(push, 1)
  // Autogenerated type: TabBarViewController
  // [TokenAttribute] Offset: FFFFFFFF
  class TabBarViewController : public HMUI::ViewController {
    public:
    // Nested type: GlobalNamespace::TabBarViewController::TabBarItem
    class TabBarItem;
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private HMUI.TextSegmentedControl _segmentedControll
    // Size: 0x8
    // Offset: 0x70
    HMUI::TextSegmentedControl* segmentedControll;
    // Field size check
    static_assert(sizeof(HMUI::TextSegmentedControl*) == 0x8);
    // private UnityEngine.UI.ContentSizeFitter _contentSizeFilter
    // Size: 0x8
    // Offset: 0x78
    UnityEngine::UI::ContentSizeFitter* contentSizeFilter;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::ContentSizeFitter*) == 0x8);
    // private System.String[] _labels
    // Size: 0x8
    // Offset: 0x80
    ::ArrayW<::StringW> labels;
    // Field size check
    static_assert(sizeof(::ArrayW<::StringW>) == 0x8);
    // private TabBarViewController/TabBarItem[] _items
    // Size: 0x8
    // Offset: 0x88
    ::ArrayW<GlobalNamespace::TabBarViewController::TabBarItem*> items;
    // Field size check
    static_assert(sizeof(::ArrayW<GlobalNamespace::TabBarViewController::TabBarItem*>) == 0x8);
    // private System.Boolean _shouldReloadData
    // Size: 0x1
    // Offset: 0x90
    bool shouldReloadData;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: private HMUI.TextSegmentedControl _segmentedControll
    HMUI::TextSegmentedControl*& dyn__segmentedControll();
    // Get instance field reference: private UnityEngine.UI.ContentSizeFitter _contentSizeFilter
    UnityEngine::UI::ContentSizeFitter*& dyn__contentSizeFilter();
    // Get instance field reference: private System.String[] _labels
    ::ArrayW<::StringW>& dyn__labels();
    // Get instance field reference: private TabBarViewController/TabBarItem[] _items
    ::ArrayW<GlobalNamespace::TabBarViewController::TabBarItem*>& dyn__items();
    // Get instance field reference: private System.Boolean _shouldReloadData
    bool& dyn__shouldReloadData();
    // public System.Boolean get_sizeToFit()
    // Offset: 0x11FF244
    bool get_sizeToFit();
    // public System.Void set_sizeToFit(System.Boolean value)
    // Offset: 0x11FF224
    void set_sizeToFit(bool value);
    // public System.Int32 get_selectedCellNumber()
    // Offset: 0x11FF260
    int get_selectedCellNumber();
    // public System.Void Setup(TabBarViewController/TabBarItem[] items)
    // Offset: 0x11FF27C
    void Setup(::ArrayW<GlobalNamespace::TabBarViewController::TabBarItem*> items);
    // public System.Void SelectItem(System.Int32 index)
    // Offset: 0x11FF3B8
    void SelectItem(int index);
    // public System.Void Clear()
    // Offset: 0x11FF3D4
    void Clear();
    // private System.Void HandleDidSelectCell(HMUI.SegmentedControl segmentedControl, System.Int32 cellNumber)
    // Offset: 0x11FF5E4
    void HandleDidSelectCell(HMUI::SegmentedControl* segmentedControl, int cellNumber);
    // public System.Void .ctor()
    // Offset: 0x11FF638
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TabBarViewController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::TabBarViewController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TabBarViewController*, creationType>()));
    }
    // protected override System.Void DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    // Offset: 0x11FF430
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);
    // protected override System.Void OnDestroy()
    // Offset: 0x11FF500
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::OnDestroy()
    void OnDestroy();
  }; // TabBarViewController
  #pragma pack(pop)
  static check_size<sizeof(TabBarViewController), 144 + sizeof(bool)> __GlobalNamespace_TabBarViewControllerSizeCheck;
  static_assert(sizeof(TabBarViewController) == 0x91);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::TabBarViewController::get_sizeToFit
// Il2CppName: get_sizeToFit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::TabBarViewController::*)()>(&GlobalNamespace::TabBarViewController::get_sizeToFit)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TabBarViewController*), "get_sizeToFit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TabBarViewController::set_sizeToFit
// Il2CppName: set_sizeToFit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TabBarViewController::*)(bool)>(&GlobalNamespace::TabBarViewController::set_sizeToFit)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TabBarViewController*), "set_sizeToFit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TabBarViewController::get_selectedCellNumber
// Il2CppName: get_selectedCellNumber
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::TabBarViewController::*)()>(&GlobalNamespace::TabBarViewController::get_selectedCellNumber)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TabBarViewController*), "get_selectedCellNumber", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TabBarViewController::Setup
// Il2CppName: Setup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TabBarViewController::*)(::ArrayW<GlobalNamespace::TabBarViewController::TabBarItem*>)>(&GlobalNamespace::TabBarViewController::Setup)> {
  static const MethodInfo* get() {
    static auto* items = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("", "TabBarViewController/TabBarItem"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TabBarViewController*), "Setup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{items});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TabBarViewController::SelectItem
// Il2CppName: SelectItem
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TabBarViewController::*)(int)>(&GlobalNamespace::TabBarViewController::SelectItem)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TabBarViewController*), "SelectItem", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TabBarViewController::Clear
// Il2CppName: Clear
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TabBarViewController::*)()>(&GlobalNamespace::TabBarViewController::Clear)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TabBarViewController*), "Clear", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TabBarViewController::HandleDidSelectCell
// Il2CppName: HandleDidSelectCell
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TabBarViewController::*)(HMUI::SegmentedControl*, int)>(&GlobalNamespace::TabBarViewController::HandleDidSelectCell)> {
  static const MethodInfo* get() {
    static auto* segmentedControl = &::il2cpp_utils::GetClassFromName("HMUI", "SegmentedControl")->byval_arg;
    static auto* cellNumber = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TabBarViewController*), "HandleDidSelectCell", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{segmentedControl, cellNumber});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TabBarViewController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::TabBarViewController::DidActivate
// Il2CppName: DidActivate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TabBarViewController::*)(bool, bool, bool)>(&GlobalNamespace::TabBarViewController::DidActivate)> {
  static const MethodInfo* get() {
    static auto* firstActivation = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* addedToHierarchy = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* screenSystemEnabling = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TabBarViewController*), "DidActivate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{firstActivation, addedToHierarchy, screenSystemEnabling});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TabBarViewController::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TabBarViewController::*)()>(&GlobalNamespace::TabBarViewController::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TabBarViewController*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
