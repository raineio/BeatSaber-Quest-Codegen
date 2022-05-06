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
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: ScrollViewItemForVisibilityController
  class ScrollViewItemForVisibilityController;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: RectTransform
  class RectTransform;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Tuple`2<T1, T2>
  template<typename T1, typename T2>
  class Tuple_2;
}
// Completed forward declares
// Type namespace: HMUI
namespace HMUI {
  // Forward declaring type: ScrollViewItemsVisibilityController
  class ScrollViewItemsVisibilityController;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::HMUI::ScrollViewItemsVisibilityController);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::ScrollViewItemsVisibilityController*, "HMUI", "ScrollViewItemsVisibilityController");
// Type namespace: HMUI
namespace HMUI {
  // Size: 0x60
  #pragma pack(push, 1)
  // Autogenerated type: HMUI.ScrollViewItemsVisibilityController
  // [TokenAttribute] Offset: FFFFFFFF
  class ScrollViewItemsVisibilityController : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::HMUI::ScrollViewItemsVisibilityController::$$c
    class $$c;
    public:
    // private UnityEngine.RectTransform _viewport
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::RectTransform* viewport;
    // Field size check
    static_assert(sizeof(::UnityEngine::RectTransform*) == 0x8);
    // private UnityEngine.RectTransform _contentRectTransform
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::RectTransform* contentRectTransform;
    // Field size check
    static_assert(sizeof(::UnityEngine::RectTransform*) == 0x8);
    // private HMUI.ScrollViewItemForVisibilityController[] _items
    // Size: 0x8
    // Offset: 0x28
    ::ArrayW<::HMUI::ScrollViewItemForVisibilityController*> items;
    // Field size check
    static_assert(sizeof(::ArrayW<::HMUI::ScrollViewItemForVisibilityController*>) == 0x8);
    // private System.Single _lastContentAnchoredPositionY
    // Size: 0x4
    // Offset: 0x30
    float lastContentAnchoredPositionY;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: lastContentAnchoredPositionY and: viewportWorldCorners
    char __padding3[0x4] = {};
    // private UnityEngine.Vector3[] _viewportWorldCorners
    // Size: 0x8
    // Offset: 0x38
    ::ArrayW<::UnityEngine::Vector3> viewportWorldCorners;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Vector3>) == 0x8);
    // private System.Tuple`2<HMUI.ScrollViewItemForVisibilityController,System.Single>[] _upperItemsCornes
    // Size: 0x8
    // Offset: 0x40
    ::ArrayW<::System::Tuple_2<::HMUI::ScrollViewItemForVisibilityController*, float>*> upperItemsCornes;
    // Field size check
    static_assert(sizeof(::ArrayW<::System::Tuple_2<::HMUI::ScrollViewItemForVisibilityController*, float>*>) == 0x8);
    // private System.Tuple`2<HMUI.ScrollViewItemForVisibilityController,System.Single>[] _lowerItemsCornes
    // Size: 0x8
    // Offset: 0x48
    ::ArrayW<::System::Tuple_2<::HMUI::ScrollViewItemForVisibilityController*, float>*> lowerItemsCornes;
    // Field size check
    static_assert(sizeof(::ArrayW<::System::Tuple_2<::HMUI::ScrollViewItemForVisibilityController*, float>*>) == 0x8);
    // private System.Int32 _lowerLastVisibleIndex
    // Size: 0x4
    // Offset: 0x50
    int lowerLastVisibleIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _upperLastVisibleIndex
    // Size: 0x4
    // Offset: 0x54
    int upperLastVisibleIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Single _contentMaxY
    // Size: 0x4
    // Offset: 0x58
    float contentMaxY;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _contentMinY
    // Size: 0x4
    // Offset: 0x5C
    float contentMinY;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private UnityEngine.RectTransform _viewport
    [[deprecated("Use field access instead!")]] ::UnityEngine::RectTransform*& dyn__viewport();
    // Get instance field reference: private UnityEngine.RectTransform _contentRectTransform
    [[deprecated("Use field access instead!")]] ::UnityEngine::RectTransform*& dyn__contentRectTransform();
    // Get instance field reference: private HMUI.ScrollViewItemForVisibilityController[] _items
    [[deprecated("Use field access instead!")]] ::ArrayW<::HMUI::ScrollViewItemForVisibilityController*>& dyn__items();
    // Get instance field reference: private System.Single _lastContentAnchoredPositionY
    [[deprecated("Use field access instead!")]] float& dyn__lastContentAnchoredPositionY();
    // Get instance field reference: private UnityEngine.Vector3[] _viewportWorldCorners
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::Vector3>& dyn__viewportWorldCorners();
    // Get instance field reference: private System.Tuple`2<HMUI.ScrollViewItemForVisibilityController,System.Single>[] _upperItemsCornes
    [[deprecated("Use field access instead!")]] ::ArrayW<::System::Tuple_2<::HMUI::ScrollViewItemForVisibilityController*, float>*>& dyn__upperItemsCornes();
    // Get instance field reference: private System.Tuple`2<HMUI.ScrollViewItemForVisibilityController,System.Single>[] _lowerItemsCornes
    [[deprecated("Use field access instead!")]] ::ArrayW<::System::Tuple_2<::HMUI::ScrollViewItemForVisibilityController*, float>*>& dyn__lowerItemsCornes();
    // Get instance field reference: private System.Int32 _lowerLastVisibleIndex
    [[deprecated("Use field access instead!")]] int& dyn__lowerLastVisibleIndex();
    // Get instance field reference: private System.Int32 _upperLastVisibleIndex
    [[deprecated("Use field access instead!")]] int& dyn__upperLastVisibleIndex();
    // Get instance field reference: private System.Single _contentMaxY
    [[deprecated("Use field access instead!")]] float& dyn__contentMaxY();
    // Get instance field reference: private System.Single _contentMinY
    [[deprecated("Use field access instead!")]] float& dyn__contentMinY();
    // public System.Void .ctor()
    // Offset: 0x16C1960
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ScrollViewItemsVisibilityController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::HMUI::ScrollViewItemsVisibilityController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ScrollViewItemsVisibilityController*, creationType>()));
    }
    // protected System.Void Start()
    // Offset: 0x16C103C
    void Start();
    // protected System.Void Update()
    // Offset: 0x16C16CC
    void Update();
    // private System.Void UpdateVisibilityUpDirection(System.Single newContentAnchoredPositionY)
    // Offset: 0x16C1514
    void UpdateVisibilityUpDirection(float newContentAnchoredPositionY);
    // private System.Void UpdateVisibilityDownDirection(System.Single newContentAnchoredPositionY)
    // Offset: 0x16C17BC
    void UpdateVisibilityDownDirection(float newContentAnchoredPositionY);
  }; // HMUI.ScrollViewItemsVisibilityController
  #pragma pack(pop)
  static check_size<sizeof(ScrollViewItemsVisibilityController), 92 + sizeof(float)> __HMUI_ScrollViewItemsVisibilityControllerSizeCheck;
  static_assert(sizeof(ScrollViewItemsVisibilityController) == 0x60);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HMUI::ScrollViewItemsVisibilityController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: HMUI::ScrollViewItemsVisibilityController::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::ScrollViewItemsVisibilityController::*)()>(&HMUI::ScrollViewItemsVisibilityController::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::ScrollViewItemsVisibilityController*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::ScrollViewItemsVisibilityController::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::ScrollViewItemsVisibilityController::*)()>(&HMUI::ScrollViewItemsVisibilityController::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::ScrollViewItemsVisibilityController*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::ScrollViewItemsVisibilityController::UpdateVisibilityUpDirection
// Il2CppName: UpdateVisibilityUpDirection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::ScrollViewItemsVisibilityController::*)(float)>(&HMUI::ScrollViewItemsVisibilityController::UpdateVisibilityUpDirection)> {
  static const MethodInfo* get() {
    static auto* newContentAnchoredPositionY = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::ScrollViewItemsVisibilityController*), "UpdateVisibilityUpDirection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{newContentAnchoredPositionY});
  }
};
// Writing MetadataGetter for method: HMUI::ScrollViewItemsVisibilityController::UpdateVisibilityDownDirection
// Il2CppName: UpdateVisibilityDownDirection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::ScrollViewItemsVisibilityController::*)(float)>(&HMUI::ScrollViewItemsVisibilityController::UpdateVisibilityDownDirection)> {
  static const MethodInfo* get() {
    static auto* newContentAnchoredPositionY = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::ScrollViewItemsVisibilityController*), "UpdateVisibilityDownDirection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{newContentAnchoredPositionY});
  }
};
