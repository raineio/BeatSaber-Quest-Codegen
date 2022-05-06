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
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: AnnotatedBeatmapLevelCollectionsGridView
  class AnnotatedBeatmapLevelCollectionsGridView;
  // Forward declaring type: LoadingControl
  class LoadingControl;
  // Forward declaring type: AdditionalContentModel
  class AdditionalContentModel;
  // Forward declaring type: IAnnotatedBeatmapLevelCollection
  class IAnnotatedBeatmapLevelCollection;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
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
  // Forward declaring type: AnnotatedBeatmapLevelCollectionsViewController
  class AnnotatedBeatmapLevelCollectionsViewController;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::AnnotatedBeatmapLevelCollectionsViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AnnotatedBeatmapLevelCollectionsViewController*, "", "AnnotatedBeatmapLevelCollectionsViewController");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xB0
  #pragma pack(push, 1)
  // Autogenerated type: AnnotatedBeatmapLevelCollectionsViewController
  // [TokenAttribute] Offset: FFFFFFFF
  class AnnotatedBeatmapLevelCollectionsViewController : public ::HMUI::ViewController {
    public:
    public:
    // private AnnotatedBeatmapLevelCollectionsGridView _annotatedBeatmapLevelCollectionsGridView
    // Size: 0x8
    // Offset: 0x70
    ::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView* annotatedBeatmapLevelCollectionsGridView;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView*) == 0x8);
    // private LoadingControl _loadingControl
    // Size: 0x8
    // Offset: 0x78
    ::GlobalNamespace::LoadingControl* loadingControl;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::LoadingControl*) == 0x8);
    // [InjectAttribute] Offset: 0x10E01F8
    // private readonly AdditionalContentModel _additionalContentModel
    // Size: 0x8
    // Offset: 0x80
    ::GlobalNamespace::AdditionalContentModel* additionalContentModel;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::AdditionalContentModel*) == 0x8);
    // private System.Action didOpenBeatmapLevelCollectionsEvent
    // Size: 0x8
    // Offset: 0x88
    ::System::Action* didOpenBeatmapLevelCollectionsEvent;
    // Field size check
    static_assert(sizeof(::System::Action*) == 0x8);
    // private System.Action didCloseBeatmapLevelCollectionsEvent
    // Size: 0x8
    // Offset: 0x90
    ::System::Action* didCloseBeatmapLevelCollectionsEvent;
    // Field size check
    static_assert(sizeof(::System::Action*) == 0x8);
    // private System.Action`1<IAnnotatedBeatmapLevelCollection> didSelectAnnotatedBeatmapLevelCollectionEvent
    // Size: 0x8
    // Offset: 0x98
    ::System::Action_1<::GlobalNamespace::IAnnotatedBeatmapLevelCollection*>* didSelectAnnotatedBeatmapLevelCollectionEvent;
    // Field size check
    static_assert(sizeof(::System::Action_1<::GlobalNamespace::IAnnotatedBeatmapLevelCollection*>*) == 0x8);
    // private System.Int32 _selectedItemIndex
    // Size: 0x4
    // Offset: 0xA0
    int selectedItemIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: selectedItemIndex and: annotatedBeatmapLevelCollections
    char __padding6[0x4] = {};
    // private System.Collections.Generic.IReadOnlyList`1<IAnnotatedBeatmapLevelCollection> _annotatedBeatmapLevelCollections
    // Size: 0x8
    // Offset: 0xA8
    ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IAnnotatedBeatmapLevelCollection*>* annotatedBeatmapLevelCollections;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IAnnotatedBeatmapLevelCollection*>*) == 0x8);
    public:
    // Get instance field reference: private AnnotatedBeatmapLevelCollectionsGridView _annotatedBeatmapLevelCollectionsGridView
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView*& dyn__annotatedBeatmapLevelCollectionsGridView();
    // Get instance field reference: private LoadingControl _loadingControl
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::LoadingControl*& dyn__loadingControl();
    // Get instance field reference: private readonly AdditionalContentModel _additionalContentModel
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::AdditionalContentModel*& dyn__additionalContentModel();
    // Get instance field reference: private System.Action didOpenBeatmapLevelCollectionsEvent
    [[deprecated("Use field access instead!")]] ::System::Action*& dyn_didOpenBeatmapLevelCollectionsEvent();
    // Get instance field reference: private System.Action didCloseBeatmapLevelCollectionsEvent
    [[deprecated("Use field access instead!")]] ::System::Action*& dyn_didCloseBeatmapLevelCollectionsEvent();
    // Get instance field reference: private System.Action`1<IAnnotatedBeatmapLevelCollection> didSelectAnnotatedBeatmapLevelCollectionEvent
    [[deprecated("Use field access instead!")]] ::System::Action_1<::GlobalNamespace::IAnnotatedBeatmapLevelCollection*>*& dyn_didSelectAnnotatedBeatmapLevelCollectionEvent();
    // Get instance field reference: private System.Int32 _selectedItemIndex
    [[deprecated("Use field access instead!")]] int& dyn__selectedItemIndex();
    // Get instance field reference: private System.Collections.Generic.IReadOnlyList`1<IAnnotatedBeatmapLevelCollection> _annotatedBeatmapLevelCollections
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IAnnotatedBeatmapLevelCollection*>*& dyn__annotatedBeatmapLevelCollections();
    // public IAnnotatedBeatmapLevelCollection get_selectedAnnotatedBeatmapLevelCollection()
    // Offset: 0x14ED260
    ::GlobalNamespace::IAnnotatedBeatmapLevelCollection* get_selectedAnnotatedBeatmapLevelCollection();
    // public System.Int32 get_selectedItemIndex()
    // Offset: 0x14ED3A0
    int get_selectedItemIndex();
    // public System.Void add_didOpenBeatmapLevelCollectionsEvent(System.Action value)
    // Offset: 0x14ECE88
    void add_didOpenBeatmapLevelCollectionsEvent(::System::Action* value);
    // public System.Void remove_didOpenBeatmapLevelCollectionsEvent(System.Action value)
    // Offset: 0x14ECF2C
    void remove_didOpenBeatmapLevelCollectionsEvent(::System::Action* value);
    // public System.Void add_didCloseBeatmapLevelCollectionsEvent(System.Action value)
    // Offset: 0x14ECFD0
    void add_didCloseBeatmapLevelCollectionsEvent(::System::Action* value);
    // public System.Void remove_didCloseBeatmapLevelCollectionsEvent(System.Action value)
    // Offset: 0x14ED074
    void remove_didCloseBeatmapLevelCollectionsEvent(::System::Action* value);
    // public System.Void add_didSelectAnnotatedBeatmapLevelCollectionEvent(System.Action`1<IAnnotatedBeatmapLevelCollection> value)
    // Offset: 0x14ED118
    void add_didSelectAnnotatedBeatmapLevelCollectionEvent(::System::Action_1<::GlobalNamespace::IAnnotatedBeatmapLevelCollection*>* value);
    // public System.Void remove_didSelectAnnotatedBeatmapLevelCollectionEvent(System.Action`1<IAnnotatedBeatmapLevelCollection> value)
    // Offset: 0x14ED1BC
    void remove_didSelectAnnotatedBeatmapLevelCollectionEvent(::System::Action_1<::GlobalNamespace::IAnnotatedBeatmapLevelCollection*>* value);
    // public System.Void .ctor()
    // Offset: 0x14ED9E4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AnnotatedBeatmapLevelCollectionsViewController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::AnnotatedBeatmapLevelCollectionsViewController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AnnotatedBeatmapLevelCollectionsViewController*, creationType>()));
    }
    // public System.Void RefreshAvailability()
    // Offset: 0x14ED504
    void RefreshAvailability();
    // public System.Void SetData(System.Collections.Generic.IReadOnlyList`1<IAnnotatedBeatmapLevelCollection> annotatedBeatmapLevelCollections, System.Int32 selectedItemIndex, System.Boolean hideIfOneOrNoPacks)
    // Offset: 0x14ED678
    void SetData(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IAnnotatedBeatmapLevelCollection*>* annotatedBeatmapLevelCollections, int selectedItemIndex, bool hideIfOneOrNoPacks);
    // public System.Void ShowLoading()
    // Offset: 0x14ED7B0
    void ShowLoading();
    // private System.Void HandleAdditionalContentModelDidInvalidateData()
    // Offset: 0x14ED818
    void HandleAdditionalContentModelDidInvalidateData();
    // private System.Void HandleAnnotatedBeatmapLevelCollectionsGridViewOpen()
    // Offset: 0x14ED830
    void HandleAnnotatedBeatmapLevelCollectionsGridViewOpen();
    // private System.Void HandleAnnotatedBeatmapLevelCollectionsGridViewClose()
    // Offset: 0x14ED844
    void HandleAnnotatedBeatmapLevelCollectionsGridViewClose();
    // private System.Void HandleDidSelectAnnotatedBeatmapLevelCollection(IAnnotatedBeatmapLevelCollection beatmapLevelCollection)
    // Offset: 0x14ED858
    void HandleDidSelectAnnotatedBeatmapLevelCollection(::GlobalNamespace::IAnnotatedBeatmapLevelCollection* beatmapLevelCollection);
    // protected override System.Void DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    // Offset: 0x14ED3A8
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);
    // protected override System.Void DidDeactivate(System.Boolean removedFromHierarchy, System.Boolean screenSystemDisabling)
    // Offset: 0x14ED51C
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidDeactivate(System.Boolean removedFromHierarchy, System.Boolean screenSystemDisabling)
    void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling);
  }; // AnnotatedBeatmapLevelCollectionsViewController
  #pragma pack(pop)
  static check_size<sizeof(AnnotatedBeatmapLevelCollectionsViewController), 168 + sizeof(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IAnnotatedBeatmapLevelCollection*>*)> __GlobalNamespace_AnnotatedBeatmapLevelCollectionsViewControllerSizeCheck;
  static_assert(sizeof(AnnotatedBeatmapLevelCollectionsViewController) == 0xB0);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::AnnotatedBeatmapLevelCollectionsViewController::get_selectedAnnotatedBeatmapLevelCollection
// Il2CppName: get_selectedAnnotatedBeatmapLevelCollection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::IAnnotatedBeatmapLevelCollection* (GlobalNamespace::AnnotatedBeatmapLevelCollectionsViewController::*)()>(&GlobalNamespace::AnnotatedBeatmapLevelCollectionsViewController::get_selectedAnnotatedBeatmapLevelCollection)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AnnotatedBeatmapLevelCollectionsViewController*), "get_selectedAnnotatedBeatmapLevelCollection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AnnotatedBeatmapLevelCollectionsViewController::get_selectedItemIndex
// Il2CppName: get_selectedItemIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::AnnotatedBeatmapLevelCollectionsViewController::*)()>(&GlobalNamespace::AnnotatedBeatmapLevelCollectionsViewController::get_selectedItemIndex)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AnnotatedBeatmapLevelCollectionsViewController*), "get_selectedItemIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AnnotatedBeatmapLevelCollectionsViewController::add_didOpenBeatmapLevelCollectionsEvent
// Il2CppName: add_didOpenBeatmapLevelCollectionsEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AnnotatedBeatmapLevelCollectionsViewController::*)(::System::Action*)>(&GlobalNamespace::AnnotatedBeatmapLevelCollectionsViewController::add_didOpenBeatmapLevelCollectionsEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AnnotatedBeatmapLevelCollectionsViewController*), "add_didOpenBeatmapLevelCollectionsEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AnnotatedBeatmapLevelCollectionsViewController::remove_didOpenBeatmapLevelCollectionsEvent
// Il2CppName: remove_didOpenBeatmapLevelCollectionsEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AnnotatedBeatmapLevelCollectionsViewController::*)(::System::Action*)>(&GlobalNamespace::AnnotatedBeatmapLevelCollectionsViewController::remove_didOpenBeatmapLevelCollectionsEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AnnotatedBeatmapLevelCollectionsViewController*), "remove_didOpenBeatmapLevelCollectionsEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AnnotatedBeatmapLevelCollectionsViewController::add_didCloseBeatmapLevelCollectionsEvent
// Il2CppName: add_didCloseBeatmapLevelCollectionsEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AnnotatedBeatmapLevelCollectionsViewController::*)(::System::Action*)>(&GlobalNamespace::AnnotatedBeatmapLevelCollectionsViewController::add_didCloseBeatmapLevelCollectionsEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AnnotatedBeatmapLevelCollectionsViewController*), "add_didCloseBeatmapLevelCollectionsEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AnnotatedBeatmapLevelCollectionsViewController::remove_didCloseBeatmapLevelCollectionsEvent
// Il2CppName: remove_didCloseBeatmapLevelCollectionsEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AnnotatedBeatmapLevelCollectionsViewController::*)(::System::Action*)>(&GlobalNamespace::AnnotatedBeatmapLevelCollectionsViewController::remove_didCloseBeatmapLevelCollectionsEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AnnotatedBeatmapLevelCollectionsViewController*), "remove_didCloseBeatmapLevelCollectionsEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AnnotatedBeatmapLevelCollectionsViewController::add_didSelectAnnotatedBeatmapLevelCollectionEvent
// Il2CppName: add_didSelectAnnotatedBeatmapLevelCollectionEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AnnotatedBeatmapLevelCollectionsViewController::*)(::System::Action_1<::GlobalNamespace::IAnnotatedBeatmapLevelCollection*>*)>(&GlobalNamespace::AnnotatedBeatmapLevelCollectionsViewController::add_didSelectAnnotatedBeatmapLevelCollectionEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "IAnnotatedBeatmapLevelCollection")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AnnotatedBeatmapLevelCollectionsViewController*), "add_didSelectAnnotatedBeatmapLevelCollectionEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AnnotatedBeatmapLevelCollectionsViewController::remove_didSelectAnnotatedBeatmapLevelCollectionEvent
// Il2CppName: remove_didSelectAnnotatedBeatmapLevelCollectionEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AnnotatedBeatmapLevelCollectionsViewController::*)(::System::Action_1<::GlobalNamespace::IAnnotatedBeatmapLevelCollection*>*)>(&GlobalNamespace::AnnotatedBeatmapLevelCollectionsViewController::remove_didSelectAnnotatedBeatmapLevelCollectionEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "IAnnotatedBeatmapLevelCollection")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AnnotatedBeatmapLevelCollectionsViewController*), "remove_didSelectAnnotatedBeatmapLevelCollectionEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AnnotatedBeatmapLevelCollectionsViewController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::AnnotatedBeatmapLevelCollectionsViewController::RefreshAvailability
// Il2CppName: RefreshAvailability
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AnnotatedBeatmapLevelCollectionsViewController::*)()>(&GlobalNamespace::AnnotatedBeatmapLevelCollectionsViewController::RefreshAvailability)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AnnotatedBeatmapLevelCollectionsViewController*), "RefreshAvailability", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AnnotatedBeatmapLevelCollectionsViewController::SetData
// Il2CppName: SetData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AnnotatedBeatmapLevelCollectionsViewController::*)(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IAnnotatedBeatmapLevelCollection*>*, int, bool)>(&GlobalNamespace::AnnotatedBeatmapLevelCollectionsViewController::SetData)> {
  static const MethodInfo* get() {
    static auto* annotatedBeatmapLevelCollections = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IReadOnlyList`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "IAnnotatedBeatmapLevelCollection")})->byval_arg;
    static auto* selectedItemIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* hideIfOneOrNoPacks = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AnnotatedBeatmapLevelCollectionsViewController*), "SetData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{annotatedBeatmapLevelCollections, selectedItemIndex, hideIfOneOrNoPacks});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AnnotatedBeatmapLevelCollectionsViewController::ShowLoading
// Il2CppName: ShowLoading
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AnnotatedBeatmapLevelCollectionsViewController::*)()>(&GlobalNamespace::AnnotatedBeatmapLevelCollectionsViewController::ShowLoading)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AnnotatedBeatmapLevelCollectionsViewController*), "ShowLoading", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AnnotatedBeatmapLevelCollectionsViewController::HandleAdditionalContentModelDidInvalidateData
// Il2CppName: HandleAdditionalContentModelDidInvalidateData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AnnotatedBeatmapLevelCollectionsViewController::*)()>(&GlobalNamespace::AnnotatedBeatmapLevelCollectionsViewController::HandleAdditionalContentModelDidInvalidateData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AnnotatedBeatmapLevelCollectionsViewController*), "HandleAdditionalContentModelDidInvalidateData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AnnotatedBeatmapLevelCollectionsViewController::HandleAnnotatedBeatmapLevelCollectionsGridViewOpen
// Il2CppName: HandleAnnotatedBeatmapLevelCollectionsGridViewOpen
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AnnotatedBeatmapLevelCollectionsViewController::*)()>(&GlobalNamespace::AnnotatedBeatmapLevelCollectionsViewController::HandleAnnotatedBeatmapLevelCollectionsGridViewOpen)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AnnotatedBeatmapLevelCollectionsViewController*), "HandleAnnotatedBeatmapLevelCollectionsGridViewOpen", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AnnotatedBeatmapLevelCollectionsViewController::HandleAnnotatedBeatmapLevelCollectionsGridViewClose
// Il2CppName: HandleAnnotatedBeatmapLevelCollectionsGridViewClose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AnnotatedBeatmapLevelCollectionsViewController::*)()>(&GlobalNamespace::AnnotatedBeatmapLevelCollectionsViewController::HandleAnnotatedBeatmapLevelCollectionsGridViewClose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AnnotatedBeatmapLevelCollectionsViewController*), "HandleAnnotatedBeatmapLevelCollectionsGridViewClose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AnnotatedBeatmapLevelCollectionsViewController::HandleDidSelectAnnotatedBeatmapLevelCollection
// Il2CppName: HandleDidSelectAnnotatedBeatmapLevelCollection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AnnotatedBeatmapLevelCollectionsViewController::*)(::GlobalNamespace::IAnnotatedBeatmapLevelCollection*)>(&GlobalNamespace::AnnotatedBeatmapLevelCollectionsViewController::HandleDidSelectAnnotatedBeatmapLevelCollection)> {
  static const MethodInfo* get() {
    static auto* beatmapLevelCollection = &::il2cpp_utils::GetClassFromName("", "IAnnotatedBeatmapLevelCollection")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AnnotatedBeatmapLevelCollectionsViewController*), "HandleDidSelectAnnotatedBeatmapLevelCollection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{beatmapLevelCollection});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AnnotatedBeatmapLevelCollectionsViewController::DidActivate
// Il2CppName: DidActivate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AnnotatedBeatmapLevelCollectionsViewController::*)(bool, bool, bool)>(&GlobalNamespace::AnnotatedBeatmapLevelCollectionsViewController::DidActivate)> {
  static const MethodInfo* get() {
    static auto* firstActivation = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* addedToHierarchy = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* screenSystemEnabling = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AnnotatedBeatmapLevelCollectionsViewController*), "DidActivate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{firstActivation, addedToHierarchy, screenSystemEnabling});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AnnotatedBeatmapLevelCollectionsViewController::DidDeactivate
// Il2CppName: DidDeactivate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AnnotatedBeatmapLevelCollectionsViewController::*)(bool, bool)>(&GlobalNamespace::AnnotatedBeatmapLevelCollectionsViewController::DidDeactivate)> {
  static const MethodInfo* get() {
    static auto* removedFromHierarchy = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* screenSystemDisabling = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AnnotatedBeatmapLevelCollectionsViewController*), "DidDeactivate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{removedFromHierarchy, screenSystemDisabling});
  }
};
