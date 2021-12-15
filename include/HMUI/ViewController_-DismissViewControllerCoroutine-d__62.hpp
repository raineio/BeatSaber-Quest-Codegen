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
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(HMUI::ViewController::$DismissViewControllerCoroutine$d__62);
DEFINE_IL2CPP_ARG_TYPE(HMUI::ViewController::$DismissViewControllerCoroutine$d__62*, "HMUI", "ViewController/<DismissViewControllerCoroutine>d__62");
// Type namespace: HMUI
namespace HMUI {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: HMUI.ViewController/HMUI.<DismissViewControllerCoroutine>d__62
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class ViewController::$DismissViewControllerCoroutine$d__62 : public ::Il2CppObject/*, public System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*/ {
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
    // public System.Boolean immediately
    // Size: 0x1
    // Offset: 0x28
    bool immediately;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: immediately and: animationDirection
    char __padding3[0x3] = {};
    // public HMUI.ViewController/HMUI.AnimationDirection animationDirection
    // Size: 0x4
    // Offset: 0x2C
    HMUI::ViewController::AnimationDirection animationDirection;
    // Field size check
    static_assert(sizeof(HMUI::ViewController::AnimationDirection) == 0x4);
    // public System.Action finishedCallback
    // Size: 0x8
    // Offset: 0x30
    System::Action* finishedCallback;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // private HMUI.ViewController <movingInViewController>5__2
    // Size: 0x8
    // Offset: 0x38
    HMUI::ViewController* $movingInViewController$5__2;
    // Field size check
    static_assert(sizeof(HMUI::ViewController*) == 0x8);
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
    // Get instance field reference: public System.Boolean immediately
    bool& dyn_immediately();
    // Get instance field reference: public HMUI.ViewController/HMUI.AnimationDirection animationDirection
    HMUI::ViewController::AnimationDirection& dyn_animationDirection();
    // Get instance field reference: public System.Action finishedCallback
    System::Action*& dyn_finishedCallback();
    // Get instance field reference: private HMUI.ViewController <movingInViewController>5__2
    HMUI::ViewController*& dyn_$movingInViewController$5__2();
    // private System.Object System.Collections.Generic.IEnumerator<System.Object>.get_Current()
    // Offset: 0x264CDD4
    ::Il2CppObject* System_Collections_Generic_IEnumerator$System_Object$_get_Current();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x264CE3C
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x264C154
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ViewController::$DismissViewControllerCoroutine$d__62* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("HMUI::ViewController::$DismissViewControllerCoroutine$d__62::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ViewController::$DismissViewControllerCoroutine$d__62*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x264CA8C
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x264CA90
    bool MoveNext();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x264CDDC
    void System_Collections_IEnumerator_Reset();
  }; // HMUI.ViewController/HMUI.<DismissViewControllerCoroutine>d__62
  #pragma pack(pop)
  static check_size<sizeof(ViewController::$DismissViewControllerCoroutine$d__62), 56 + sizeof(HMUI::ViewController*)> __HMUI_ViewController_$DismissViewControllerCoroutine$d__62SizeCheck;
  static_assert(sizeof(ViewController::$DismissViewControllerCoroutine$d__62) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HMUI::ViewController::$DismissViewControllerCoroutine$d__62::System_Collections_Generic_IEnumerator$System_Object$_get_Current
// Il2CppName: System.Collections.Generic.IEnumerator<System.Object>.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (HMUI::ViewController::$DismissViewControllerCoroutine$d__62::*)()>(&HMUI::ViewController::$DismissViewControllerCoroutine$d__62::System_Collections_Generic_IEnumerator$System_Object$_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::ViewController::$DismissViewControllerCoroutine$d__62*), "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::ViewController::$DismissViewControllerCoroutine$d__62::System_Collections_IEnumerator_get_Current
// Il2CppName: System.Collections.IEnumerator.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (HMUI::ViewController::$DismissViewControllerCoroutine$d__62::*)()>(&HMUI::ViewController::$DismissViewControllerCoroutine$d__62::System_Collections_IEnumerator_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::ViewController::$DismissViewControllerCoroutine$d__62*), "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::ViewController::$DismissViewControllerCoroutine$d__62::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: HMUI::ViewController::$DismissViewControllerCoroutine$d__62::System_IDisposable_Dispose
// Il2CppName: System.IDisposable.Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::ViewController::$DismissViewControllerCoroutine$d__62::*)()>(&HMUI::ViewController::$DismissViewControllerCoroutine$d__62::System_IDisposable_Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::ViewController::$DismissViewControllerCoroutine$d__62*), "System.IDisposable.Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::ViewController::$DismissViewControllerCoroutine$d__62::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HMUI::ViewController::$DismissViewControllerCoroutine$d__62::*)()>(&HMUI::ViewController::$DismissViewControllerCoroutine$d__62::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::ViewController::$DismissViewControllerCoroutine$d__62*), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::ViewController::$DismissViewControllerCoroutine$d__62::System_Collections_IEnumerator_Reset
// Il2CppName: System.Collections.IEnumerator.Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::ViewController::$DismissViewControllerCoroutine$d__62::*)()>(&HMUI::ViewController::$DismissViewControllerCoroutine$d__62::System_Collections_IEnumerator_Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::ViewController::$DismissViewControllerCoroutine$d__62*), "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
