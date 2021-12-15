// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: RectTransform
  class RectTransform;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: PageControlElement
  class PageControlElement;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: Queue`1<T>
  template<typename T>
  class Queue_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: PageControl
  class PageControl;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(GlobalNamespace::PageControl);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PageControl*, "", "PageControl");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: PageControl
  // [TokenAttribute] Offset: FFFFFFFF
  class PageControl : public UnityEngine::MonoBehaviour {
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
    // private UnityEngine.RectTransform _content
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::RectTransform* content;
    // Field size check
    static_assert(sizeof(UnityEngine::RectTransform*) == 0x8);
    // [SpaceAttribute] Offset: 0xF489EC
    // private System.Single _spacing
    // Size: 0x4
    // Offset: 0x20
    float spacing;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: spacing and: elementPrefab
    char __padding1[0x4] = {};
    // [SpaceAttribute] Offset: 0xF48A24
    // private PageControlElement _elementPrefab
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::PageControlElement* elementPrefab;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PageControlElement*) == 0x8);
    // private readonly System.Collections.Generic.List`1<PageControlElement> _activeElements
    // Size: 0x8
    // Offset: 0x30
    System::Collections::Generic::List_1<GlobalNamespace::PageControlElement*>* activeElements;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<GlobalNamespace::PageControlElement*>*) == 0x8);
    // private readonly System.Collections.Generic.Queue`1<PageControlElement> _inactiveElements
    // Size: 0x8
    // Offset: 0x38
    System::Collections::Generic::Queue_1<GlobalNamespace::PageControlElement*>* inactiveElements;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::Queue_1<GlobalNamespace::PageControlElement*>*) == 0x8);
    // private System.Int32 _selectedPage
    // Size: 0x4
    // Offset: 0x40
    int selectedPage;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _pagesCount
    // Size: 0x4
    // Offset: 0x44
    int pagesCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field reference: private UnityEngine.RectTransform _content
    UnityEngine::RectTransform*& dyn__content();
    // Get instance field reference: private System.Single _spacing
    float& dyn__spacing();
    // Get instance field reference: private PageControlElement _elementPrefab
    GlobalNamespace::PageControlElement*& dyn__elementPrefab();
    // Get instance field reference: private readonly System.Collections.Generic.List`1<PageControlElement> _activeElements
    System::Collections::Generic::List_1<GlobalNamespace::PageControlElement*>*& dyn__activeElements();
    // Get instance field reference: private readonly System.Collections.Generic.Queue`1<PageControlElement> _inactiveElements
    System::Collections::Generic::Queue_1<GlobalNamespace::PageControlElement*>*& dyn__inactiveElements();
    // Get instance field reference: private System.Int32 _selectedPage
    int& dyn__selectedPage();
    // Get instance field reference: private System.Int32 _pagesCount
    int& dyn__pagesCount();
    // public System.Void SetPagesCount(System.Int32 pagesCount)
    // Offset: 0x1148408
    void SetPagesCount(int pagesCount);
    // public System.Void SetSelectedPageIndex(System.Int32 page)
    // Offset: 0x1148780
    void SetSelectedPageIndex(int page);
    // public System.Void SetVisible(System.Boolean isVisible)
    // Offset: 0x1148870
    void SetVisible(bool isVisible);
    // public System.Void .ctor()
    // Offset: 0x11488AC
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PageControl* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::PageControl::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PageControl*, creationType>()));
    }
  }; // PageControl
  #pragma pack(pop)
  static check_size<sizeof(PageControl), 68 + sizeof(int)> __GlobalNamespace_PageControlSizeCheck;
  static_assert(sizeof(PageControl) == 0x48);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::PageControl::SetPagesCount
// Il2CppName: SetPagesCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PageControl::*)(int)>(&GlobalNamespace::PageControl::SetPagesCount)> {
  static const MethodInfo* get() {
    static auto* pagesCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PageControl*), "SetPagesCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pagesCount});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PageControl::SetSelectedPageIndex
// Il2CppName: SetSelectedPageIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PageControl::*)(int)>(&GlobalNamespace::PageControl::SetSelectedPageIndex)> {
  static const MethodInfo* get() {
    static auto* page = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PageControl*), "SetSelectedPageIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{page});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PageControl::SetVisible
// Il2CppName: SetVisible
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PageControl::*)(bool)>(&GlobalNamespace::PageControl::SetVisible)> {
  static const MethodInfo* get() {
    static auto* isVisible = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PageControl*), "SetVisible", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{isVisible});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PageControl::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
