// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.EventSystems.IPointerEnterHandler
#include "UnityEngine/EventSystems/IPointerEnterHandler.hpp"
// Including type: UnityEngine.EventSystems.IPointerExitHandler
#include "UnityEngine/EventSystems/IPointerExitHandler.hpp"
// Including type: GridView/IDataSource
#include "GlobalNamespace/GridView_IDataSource.hpp"
// Including type: HMUI.SelectableCell
#include "HMUI/SelectableCell.hpp"
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
  // Skipping declaration: GridView because it is already included!
  // Forward declaring type: PageControl
  class PageControl;
  // Forward declaring type: AnnotatedBeatmapLevelCollectionsGridViewAnimator
  class AnnotatedBeatmapLevelCollectionsGridViewAnimator;
  // Forward declaring type: AnnotatedBeatmapLevelCollectionCell
  class AnnotatedBeatmapLevelCollectionCell;
  // Forward declaring type: AdditionalContentModel
  class AdditionalContentModel;
  // Forward declaring type: IVRPlatformHelper
  class IVRPlatformHelper;
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
  // Forward declaring type: HashSet`1<T>
  template<typename T>
  class HashSet_1;
  // Forward declaring type: IReadOnlyList`1<T>
  template<typename T>
  class IReadOnlyList_1;
}
// Forward declaring namespace: UnityEngine::EventSystems
namespace UnityEngine::EventSystems {
  // Forward declaring type: PointerEventData
  class PointerEventData;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: AnnotatedBeatmapLevelCollectionsGridView
  class AnnotatedBeatmapLevelCollectionsGridView;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView*, "", "AnnotatedBeatmapLevelCollectionsGridView");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x8C
  #pragma pack(push, 1)
  // Autogenerated type: AnnotatedBeatmapLevelCollectionsGridView
  // [TokenAttribute] Offset: FFFFFFFF
  class AnnotatedBeatmapLevelCollectionsGridView : public ::UnityEngine::MonoBehaviour/*, public ::UnityEngine::EventSystems::IPointerEnterHandler, public ::UnityEngine::EventSystems::IPointerExitHandler, public ::GlobalNamespace::GridView::IDataSource*/ {
    public:
    public:
    // private GridView _gridView
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::GridView* gridView;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::GridView*) == 0x8);
    // private PageControl _pageControl
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::PageControl* pageControl;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::PageControl*) == 0x8);
    // [SpaceAttribute] Offset: 0x10E2164
    // private AnnotatedBeatmapLevelCollectionsGridViewAnimator _animator
    // Size: 0x8
    // Offset: 0x28
    ::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridViewAnimator* animator;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridViewAnimator*) == 0x8);
    // [SpaceAttribute] Offset: 0x10E219C
    // private AnnotatedBeatmapLevelCollectionCell _cellPrefab
    // Size: 0x8
    // Offset: 0x30
    ::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell* cellPrefab;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell*) == 0x8);
    // private System.Single _cellWidth
    // Size: 0x4
    // Offset: 0x38
    float cellWidth;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _cellHeight
    // Size: 0x4
    // Offset: 0x3C
    float cellHeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [SpaceAttribute] Offset: 0x10E21F4
    // private System.String[] _promoPackIDStrings
    // Size: 0x8
    // Offset: 0x40
    ::ArrayW<::StringW> promoPackIDStrings;
    // Field size check
    static_assert(sizeof(::ArrayW<::StringW>) == 0x8);
    // [InjectAttribute] Offset: 0x10E222C
    // private readonly AdditionalContentModel _additionalContentModel
    // Size: 0x8
    // Offset: 0x48
    ::GlobalNamespace::AdditionalContentModel* additionalContentModel;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::AdditionalContentModel*) == 0x8);
    // [InjectAttribute] Offset: 0x10E223C
    // private readonly IVRPlatformHelper _vrPlatformHelper
    // Size: 0x8
    // Offset: 0x50
    ::GlobalNamespace::IVRPlatformHelper* vrPlatformHelper;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::IVRPlatformHelper*) == 0x8);
    // private System.Action didOpenAnnotatedBeatmapLevelCollectionEvent
    // Size: 0x8
    // Offset: 0x58
    ::System::Action* didOpenAnnotatedBeatmapLevelCollectionEvent;
    // Field size check
    static_assert(sizeof(::System::Action*) == 0x8);
    // private System.Action didCloseAnnotatedBeatmapLevelCollectionEvent
    // Size: 0x8
    // Offset: 0x60
    ::System::Action* didCloseAnnotatedBeatmapLevelCollectionEvent;
    // Field size check
    static_assert(sizeof(::System::Action*) == 0x8);
    // private System.Action`1<IAnnotatedBeatmapLevelCollection> didSelectAnnotatedBeatmapLevelCollectionEvent
    // Size: 0x8
    // Offset: 0x68
    ::System::Action_1<::GlobalNamespace::IAnnotatedBeatmapLevelCollection*>* didSelectAnnotatedBeatmapLevelCollectionEvent;
    // Field size check
    static_assert(sizeof(::System::Action_1<::GlobalNamespace::IAnnotatedBeatmapLevelCollection*>*) == 0x8);
    // private System.Boolean _isInitialized
    // Size: 0x1
    // Offset: 0x70
    bool isInitialized;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _isHovering
    // Size: 0x1
    // Offset: 0x71
    bool isHovering;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isHovering and: promoPackIDs
    char __padding13[0x6] = {};
    // private System.Collections.Generic.HashSet`1<System.String> _promoPackIDs
    // Size: 0x8
    // Offset: 0x78
    ::System::Collections::Generic::HashSet_1<::StringW>* promoPackIDs;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::HashSet_1<::StringW>*) == 0x8);
    // private System.Collections.Generic.IReadOnlyList`1<IAnnotatedBeatmapLevelCollection> _annotatedBeatmapLevelCollections
    // Size: 0x8
    // Offset: 0x80
    ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IAnnotatedBeatmapLevelCollection*>* annotatedBeatmapLevelCollections;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IAnnotatedBeatmapLevelCollection*>*) == 0x8);
    // private System.Int32 _selectedCellIndex
    // Size: 0x4
    // Offset: 0x88
    int selectedCellIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating interface conversion operator: operator ::UnityEngine::EventSystems::IPointerEnterHandler
    operator ::UnityEngine::EventSystems::IPointerEnterHandler() noexcept {
      return *reinterpret_cast<::UnityEngine::EventSystems::IPointerEnterHandler*>(this);
    }
    // Creating interface conversion operator: operator ::UnityEngine::EventSystems::IPointerExitHandler
    operator ::UnityEngine::EventSystems::IPointerExitHandler() noexcept {
      return *reinterpret_cast<::UnityEngine::EventSystems::IPointerExitHandler*>(this);
    }
    // Creating interface conversion operator: operator ::GlobalNamespace::GridView::IDataSource
    operator ::GlobalNamespace::GridView::IDataSource() noexcept {
      return *reinterpret_cast<::GlobalNamespace::GridView::IDataSource*>(this);
    }
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private GridView _gridView
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::GridView*& dyn__gridView();
    // Get instance field reference: private PageControl _pageControl
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::PageControl*& dyn__pageControl();
    // Get instance field reference: private AnnotatedBeatmapLevelCollectionsGridViewAnimator _animator
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridViewAnimator*& dyn__animator();
    // Get instance field reference: private AnnotatedBeatmapLevelCollectionCell _cellPrefab
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell*& dyn__cellPrefab();
    // Get instance field reference: private System.Single _cellWidth
    [[deprecated("Use field access instead!")]] float& dyn__cellWidth();
    // Get instance field reference: private System.Single _cellHeight
    [[deprecated("Use field access instead!")]] float& dyn__cellHeight();
    // Get instance field reference: private System.String[] _promoPackIDStrings
    [[deprecated("Use field access instead!")]] ::ArrayW<::StringW>& dyn__promoPackIDStrings();
    // Get instance field reference: private readonly AdditionalContentModel _additionalContentModel
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::AdditionalContentModel*& dyn__additionalContentModel();
    // Get instance field reference: private readonly IVRPlatformHelper _vrPlatformHelper
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::IVRPlatformHelper*& dyn__vrPlatformHelper();
    // Get instance field reference: private System.Action didOpenAnnotatedBeatmapLevelCollectionEvent
    [[deprecated("Use field access instead!")]] ::System::Action*& dyn_didOpenAnnotatedBeatmapLevelCollectionEvent();
    // Get instance field reference: private System.Action didCloseAnnotatedBeatmapLevelCollectionEvent
    [[deprecated("Use field access instead!")]] ::System::Action*& dyn_didCloseAnnotatedBeatmapLevelCollectionEvent();
    // Get instance field reference: private System.Action`1<IAnnotatedBeatmapLevelCollection> didSelectAnnotatedBeatmapLevelCollectionEvent
    [[deprecated("Use field access instead!")]] ::System::Action_1<::GlobalNamespace::IAnnotatedBeatmapLevelCollection*>*& dyn_didSelectAnnotatedBeatmapLevelCollectionEvent();
    // Get instance field reference: private System.Boolean _isInitialized
    [[deprecated("Use field access instead!")]] bool& dyn__isInitialized();
    // Get instance field reference: private System.Boolean _isHovering
    [[deprecated("Use field access instead!")]] bool& dyn__isHovering();
    // Get instance field reference: private System.Collections.Generic.HashSet`1<System.String> _promoPackIDs
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::HashSet_1<::StringW>*& dyn__promoPackIDs();
    // Get instance field reference: private System.Collections.Generic.IReadOnlyList`1<IAnnotatedBeatmapLevelCollection> _annotatedBeatmapLevelCollections
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IAnnotatedBeatmapLevelCollection*>*& dyn__annotatedBeatmapLevelCollections();
    // Get instance field reference: private System.Int32 _selectedCellIndex
    [[deprecated("Use field access instead!")]] int& dyn__selectedCellIndex();
    // public System.Void add_didOpenAnnotatedBeatmapLevelCollectionEvent(System.Action value)
    // Offset: 0x14EAB30
    void add_didOpenAnnotatedBeatmapLevelCollectionEvent(::System::Action* value);
    // public System.Void remove_didOpenAnnotatedBeatmapLevelCollectionEvent(System.Action value)
    // Offset: 0x14EABD4
    void remove_didOpenAnnotatedBeatmapLevelCollectionEvent(::System::Action* value);
    // public System.Void add_didCloseAnnotatedBeatmapLevelCollectionEvent(System.Action value)
    // Offset: 0x14EAC78
    void add_didCloseAnnotatedBeatmapLevelCollectionEvent(::System::Action* value);
    // public System.Void remove_didCloseAnnotatedBeatmapLevelCollectionEvent(System.Action value)
    // Offset: 0x14EAD1C
    void remove_didCloseAnnotatedBeatmapLevelCollectionEvent(::System::Action* value);
    // public System.Void add_didSelectAnnotatedBeatmapLevelCollectionEvent(System.Action`1<IAnnotatedBeatmapLevelCollection> value)
    // Offset: 0x14EADC0
    void add_didSelectAnnotatedBeatmapLevelCollectionEvent(::System::Action_1<::GlobalNamespace::IAnnotatedBeatmapLevelCollection*>* value);
    // public System.Void remove_didSelectAnnotatedBeatmapLevelCollectionEvent(System.Action`1<IAnnotatedBeatmapLevelCollection> value)
    // Offset: 0x14EAE64
    void remove_didSelectAnnotatedBeatmapLevelCollectionEvent(::System::Action_1<::GlobalNamespace::IAnnotatedBeatmapLevelCollection*>* value);
    // public System.Void .ctor()
    // Offset: 0x14ECAB4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AnnotatedBeatmapLevelCollectionsGridView* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AnnotatedBeatmapLevelCollectionsGridView*, creationType>()));
    }
    // public System.Void SetData(System.Collections.Generic.IReadOnlyList`1<IAnnotatedBeatmapLevelCollection> annotatedBeatmapLevelCollections)
    // Offset: 0x14EAF08
    void SetData(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IAnnotatedBeatmapLevelCollection*>* annotatedBeatmapLevelCollections);
    // private System.Void Init()
    // Offset: 0x14EAFA8
    void Init();
    // protected System.Void OnEnable()
    // Offset: 0x14EB150
    void OnEnable();
    // protected System.Void OnDisable()
    // Offset: 0x14EB270
    void OnDisable();
    // public System.Void Show()
    // Offset: 0x14EB394
    void Show();
    // public System.Void Hide()
    // Offset: 0x14EB3BC
    void Hide();
    // public System.Void CancelAsyncOperations()
    // Offset: 0x14EB3E4
    void CancelAsyncOperations();
    // public System.Void RefreshAvailability()
    // Offset: 0x14EB520
    void RefreshAvailability();
    // public System.Void SelectAndScrollToCellWithIdx(System.Int32 idx)
    // Offset: 0x14EB764
    void SelectAndScrollToCellWithIdx(int idx);
    // public System.Void OnPointerEnter(UnityEngine.EventSystems.PointerEventData eventData)
    // Offset: 0x14EBA70
    void OnPointerEnter(::UnityEngine::EventSystems::PointerEventData* eventData);
    // public System.Void OnPointerExit(UnityEngine.EventSystems.PointerEventData eventData)
    // Offset: 0x14EBE18
    void OnPointerExit(::UnityEngine::EventSystems::PointerEventData* eventData);
    // private System.Void HandleAdditionalContentModelDidInvalidateData()
    // Offset: 0x14EC16C
    void HandleAdditionalContentModelDidInvalidateData();
    // private System.Void HandleVRPlatformHelperInputFocusCaptured()
    // Offset: 0x14EC2EC
    void HandleVRPlatformHelperInputFocusCaptured();
    // private System.Void HandleCellSelectionDidChange(HMUI.SelectableCell selectableCell, HMUI.SelectableCell/HMUI.TransitionType transition, System.Object changeOwner)
    // Offset: 0x14EC33C
    void HandleCellSelectionDidChange(::HMUI::SelectableCell* selectableCell, ::HMUI::SelectableCell::TransitionType transition, ::Il2CppObject* changeOwner);
    // public System.Int32 GetNumberOfCells()
    // Offset: 0x14EC230
    int GetNumberOfCells();
    // public System.Single GetCellWidth()
    // Offset: 0x14EC748
    float GetCellWidth();
    // public System.Single GetCellHeight()
    // Offset: 0x14EC750
    float GetCellHeight();
    // public UnityEngine.MonoBehaviour CellForIdx(GridView gridView, System.Int32 idx)
    // Offset: 0x14EC758
    ::UnityEngine::MonoBehaviour* CellForIdx(::GlobalNamespace::GridView* gridView, int idx);
  }; // AnnotatedBeatmapLevelCollectionsGridView
  #pragma pack(pop)
  static check_size<sizeof(AnnotatedBeatmapLevelCollectionsGridView), 136 + sizeof(int)> __GlobalNamespace_AnnotatedBeatmapLevelCollectionsGridViewSizeCheck;
  static_assert(sizeof(AnnotatedBeatmapLevelCollectionsGridView) == 0x8C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::add_didOpenAnnotatedBeatmapLevelCollectionEvent
// Il2CppName: add_didOpenAnnotatedBeatmapLevelCollectionEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::*)(::System::Action*)>(&GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::add_didOpenAnnotatedBeatmapLevelCollectionEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView*), "add_didOpenAnnotatedBeatmapLevelCollectionEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::remove_didOpenAnnotatedBeatmapLevelCollectionEvent
// Il2CppName: remove_didOpenAnnotatedBeatmapLevelCollectionEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::*)(::System::Action*)>(&GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::remove_didOpenAnnotatedBeatmapLevelCollectionEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView*), "remove_didOpenAnnotatedBeatmapLevelCollectionEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::add_didCloseAnnotatedBeatmapLevelCollectionEvent
// Il2CppName: add_didCloseAnnotatedBeatmapLevelCollectionEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::*)(::System::Action*)>(&GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::add_didCloseAnnotatedBeatmapLevelCollectionEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView*), "add_didCloseAnnotatedBeatmapLevelCollectionEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::remove_didCloseAnnotatedBeatmapLevelCollectionEvent
// Il2CppName: remove_didCloseAnnotatedBeatmapLevelCollectionEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::*)(::System::Action*)>(&GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::remove_didCloseAnnotatedBeatmapLevelCollectionEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView*), "remove_didCloseAnnotatedBeatmapLevelCollectionEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::add_didSelectAnnotatedBeatmapLevelCollectionEvent
// Il2CppName: add_didSelectAnnotatedBeatmapLevelCollectionEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::*)(::System::Action_1<::GlobalNamespace::IAnnotatedBeatmapLevelCollection*>*)>(&GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::add_didSelectAnnotatedBeatmapLevelCollectionEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "IAnnotatedBeatmapLevelCollection")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView*), "add_didSelectAnnotatedBeatmapLevelCollectionEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::remove_didSelectAnnotatedBeatmapLevelCollectionEvent
// Il2CppName: remove_didSelectAnnotatedBeatmapLevelCollectionEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::*)(::System::Action_1<::GlobalNamespace::IAnnotatedBeatmapLevelCollection*>*)>(&GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::remove_didSelectAnnotatedBeatmapLevelCollectionEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "IAnnotatedBeatmapLevelCollection")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView*), "remove_didSelectAnnotatedBeatmapLevelCollectionEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::SetData
// Il2CppName: SetData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::*)(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IAnnotatedBeatmapLevelCollection*>*)>(&GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::SetData)> {
  static const MethodInfo* get() {
    static auto* annotatedBeatmapLevelCollections = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IReadOnlyList`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "IAnnotatedBeatmapLevelCollection")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView*), "SetData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{annotatedBeatmapLevelCollections});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::*)()>(&GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::Init)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::*)()>(&GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::*)()>(&GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::Show
// Il2CppName: Show
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::*)()>(&GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::Show)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView*), "Show", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::Hide
// Il2CppName: Hide
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::*)()>(&GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::Hide)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView*), "Hide", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::CancelAsyncOperations
// Il2CppName: CancelAsyncOperations
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::*)()>(&GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::CancelAsyncOperations)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView*), "CancelAsyncOperations", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::RefreshAvailability
// Il2CppName: RefreshAvailability
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::*)()>(&GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::RefreshAvailability)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView*), "RefreshAvailability", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::SelectAndScrollToCellWithIdx
// Il2CppName: SelectAndScrollToCellWithIdx
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::*)(int)>(&GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::SelectAndScrollToCellWithIdx)> {
  static const MethodInfo* get() {
    static auto* idx = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView*), "SelectAndScrollToCellWithIdx", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{idx});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::OnPointerEnter
// Il2CppName: OnPointerEnter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::*)(::UnityEngine::EventSystems::PointerEventData*)>(&GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::OnPointerEnter)> {
  static const MethodInfo* get() {
    static auto* eventData = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "PointerEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView*), "OnPointerEnter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eventData});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::OnPointerExit
// Il2CppName: OnPointerExit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::*)(::UnityEngine::EventSystems::PointerEventData*)>(&GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::OnPointerExit)> {
  static const MethodInfo* get() {
    static auto* eventData = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "PointerEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView*), "OnPointerExit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eventData});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::HandleAdditionalContentModelDidInvalidateData
// Il2CppName: HandleAdditionalContentModelDidInvalidateData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::*)()>(&GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::HandleAdditionalContentModelDidInvalidateData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView*), "HandleAdditionalContentModelDidInvalidateData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::HandleVRPlatformHelperInputFocusCaptured
// Il2CppName: HandleVRPlatformHelperInputFocusCaptured
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::*)()>(&GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::HandleVRPlatformHelperInputFocusCaptured)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView*), "HandleVRPlatformHelperInputFocusCaptured", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::HandleCellSelectionDidChange
// Il2CppName: HandleCellSelectionDidChange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::*)(::HMUI::SelectableCell*, ::HMUI::SelectableCell::TransitionType, ::Il2CppObject*)>(&GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::HandleCellSelectionDidChange)> {
  static const MethodInfo* get() {
    static auto* selectableCell = &::il2cpp_utils::GetClassFromName("HMUI", "SelectableCell")->byval_arg;
    static auto* transition = &::il2cpp_utils::GetClassFromName("HMUI", "SelectableCell/TransitionType")->byval_arg;
    static auto* changeOwner = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView*), "HandleCellSelectionDidChange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{selectableCell, transition, changeOwner});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::GetNumberOfCells
// Il2CppName: GetNumberOfCells
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::*)()>(&GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::GetNumberOfCells)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView*), "GetNumberOfCells", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::GetCellWidth
// Il2CppName: GetCellWidth
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::*)()>(&GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::GetCellWidth)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView*), "GetCellWidth", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::GetCellHeight
// Il2CppName: GetCellHeight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::*)()>(&GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::GetCellHeight)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView*), "GetCellHeight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::CellForIdx
// Il2CppName: CellForIdx
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::MonoBehaviour* (GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::*)(::GlobalNamespace::GridView*, int)>(&GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::CellForIdx)> {
  static const MethodInfo* get() {
    static auto* gridView = &::il2cpp_utils::GetClassFromName("", "GridView")->byval_arg;
    static auto* idx = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView*), "CellForIdx", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{gridView, idx});
  }
};
