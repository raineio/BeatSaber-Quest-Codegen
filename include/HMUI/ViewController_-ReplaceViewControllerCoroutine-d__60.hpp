// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: HMUI.ViewController
#include "HMUI/ViewController.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
// Including type: HMUI.ViewController/HMUI.AnimationType
#include "HMUI/ViewController_AnimationType.hpp"
// Including type: HMUI.ViewController/HMUI.AnimationDirection
#include "HMUI/ViewController_AnimationDirection.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Completed forward declares
// Type namespace: HMUI
namespace HMUI {
  // Forward declaring type: <ReplaceViewControllerCoroutine>d__60
  class $ReplaceViewControllerCoroutine$d__60;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(HMUI::ViewController::$ReplaceViewControllerCoroutine$d__60);
DEFINE_IL2CPP_ARG_TYPE(HMUI::ViewController::$ReplaceViewControllerCoroutine$d__60*, "HMUI", "ViewController/<ReplaceViewControllerCoroutine>d__60");
// Type namespace: HMUI
namespace HMUI {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: HMUI.ViewController/HMUI.<ReplaceViewControllerCoroutine>d__60
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class ViewController::$ReplaceViewControllerCoroutine$d__60 : public ::Il2CppObject/*, public System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*/ {
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
    // private System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x10
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: $$1__state and: $$2__current
    char __padding0[0x4] = {};
    // private System.Object <>2__current
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppObject* $$2__current;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // public HMUI.ViewController <>4__this
    // Size: 0x8
    // Offset: 0x20
    HMUI::ViewController* $$4__this;
    // Field size check
    static_assert(sizeof(HMUI::ViewController*) == 0x8);
    // public HMUI.ViewController newViewController
    // Size: 0x8
    // Offset: 0x28
    HMUI::ViewController* newViewController;
    // Field size check
    static_assert(sizeof(HMUI::ViewController*) == 0x8);
    // public HMUI.ViewController/HMUI.AnimationType animationType
    // Size: 0x4
    // Offset: 0x30
    HMUI::ViewController::AnimationType animationType;
    // Field size check
    static_assert(sizeof(HMUI::ViewController::AnimationType) == 0x4);
    // public HMUI.ViewController/HMUI.AnimationDirection animationDirection
    // Size: 0x4
    // Offset: 0x34
    HMUI::ViewController::AnimationDirection animationDirection;
    // Field size check
    static_assert(sizeof(HMUI::ViewController::AnimationDirection) == 0x4);
    // public System.Action finishedCallback
    // Size: 0x8
    // Offset: 0x38
    System::Action* finishedCallback;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    public:
    // Creating interface conversion operator: operator System::Collections::Generic::IEnumerator_1<::Il2CppObject*>
    operator System::Collections::Generic::IEnumerator_1<::Il2CppObject*>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*>(this);
    }
    // Get instance field reference: private System.Int32 <>1__state
    int& dyn_$$1__state();
    // Get instance field reference: private System.Object <>2__current
    ::Il2CppObject*& dyn_$$2__current();
    // Get instance field reference: public HMUI.ViewController <>4__this
    HMUI::ViewController*& dyn_$$4__this();
    // Get instance field reference: public HMUI.ViewController newViewController
    HMUI::ViewController*& dyn_newViewController();
    // Get instance field reference: public HMUI.ViewController/HMUI.AnimationType animationType
    HMUI::ViewController::AnimationType& dyn_animationType();
    // Get instance field reference: public HMUI.ViewController/HMUI.AnimationDirection animationDirection
    HMUI::ViewController::AnimationDirection& dyn_animationDirection();
    // Get instance field reference: public System.Action finishedCallback
    System::Action*& dyn_finishedCallback();
    // private System.Object System.Collections.Generic.IEnumerator<System.Object>.get_Current()
    // Offset: 0x264D3DC
    ::Il2CppObject* System_Collections_Generic_IEnumerator$System_Object$_get_Current();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x264D444
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x264C05C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ViewController::$ReplaceViewControllerCoroutine$d__60* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("HMUI::ViewController::$ReplaceViewControllerCoroutine$d__60::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ViewController::$ReplaceViewControllerCoroutine$d__60*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x264D170
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x264D174
    bool MoveNext();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x264D3E4
    void System_Collections_IEnumerator_Reset();
  }; // HMUI.ViewController/HMUI.<ReplaceViewControllerCoroutine>d__60
  #pragma pack(pop)
  static check_size<sizeof(ViewController::$ReplaceViewControllerCoroutine$d__60), 56 + sizeof(System::Action*)> __HMUI_ViewController_$ReplaceViewControllerCoroutine$d__60SizeCheck;
  static_assert(sizeof(ViewController::$ReplaceViewControllerCoroutine$d__60) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HMUI::ViewController::$ReplaceViewControllerCoroutine$d__60::System_Collections_Generic_IEnumerator$System_Object$_get_Current
// Il2CppName: System.Collections.Generic.IEnumerator<System.Object>.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (HMUI::ViewController::$ReplaceViewControllerCoroutine$d__60::*)()>(&HMUI::ViewController::$ReplaceViewControllerCoroutine$d__60::System_Collections_Generic_IEnumerator$System_Object$_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::ViewController::$ReplaceViewControllerCoroutine$d__60*), "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::ViewController::$ReplaceViewControllerCoroutine$d__60::System_Collections_IEnumerator_get_Current
// Il2CppName: System.Collections.IEnumerator.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (HMUI::ViewController::$ReplaceViewControllerCoroutine$d__60::*)()>(&HMUI::ViewController::$ReplaceViewControllerCoroutine$d__60::System_Collections_IEnumerator_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::ViewController::$ReplaceViewControllerCoroutine$d__60*), "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::ViewController::$ReplaceViewControllerCoroutine$d__60::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: HMUI::ViewController::$ReplaceViewControllerCoroutine$d__60::System_IDisposable_Dispose
// Il2CppName: System.IDisposable.Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::ViewController::$ReplaceViewControllerCoroutine$d__60::*)()>(&HMUI::ViewController::$ReplaceViewControllerCoroutine$d__60::System_IDisposable_Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::ViewController::$ReplaceViewControllerCoroutine$d__60*), "System.IDisposable.Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::ViewController::$ReplaceViewControllerCoroutine$d__60::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HMUI::ViewController::$ReplaceViewControllerCoroutine$d__60::*)()>(&HMUI::ViewController::$ReplaceViewControllerCoroutine$d__60::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::ViewController::$ReplaceViewControllerCoroutine$d__60*), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::ViewController::$ReplaceViewControllerCoroutine$d__60::System_Collections_IEnumerator_Reset
// Il2CppName: System.Collections.IEnumerator.Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::ViewController::$ReplaceViewControllerCoroutine$d__60::*)()>(&HMUI::ViewController::$ReplaceViewControllerCoroutine$d__60::System_Collections_IEnumerator_Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::ViewController::$ReplaceViewControllerCoroutine$d__60*), "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
