// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: HMUI.Screen
#include "HMUI/Screen.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
// Including type: HMUI.ViewController/HMUI.AnimationType
#include "HMUI/ViewController_AnimationType.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: HMUI
namespace HMUI {
  // Skipping declaration: ViewController because it is already included!
}
// Completed forward declares
// Type namespace: HMUI
namespace HMUI {
  // Forward declaring type: <TransitionCoroutine>d__5
  class $TransitionCoroutine$d__5;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(HMUI::Screen::$TransitionCoroutine$d__5);
DEFINE_IL2CPP_ARG_TYPE(HMUI::Screen::$TransitionCoroutine$d__5*, "HMUI", "Screen/<TransitionCoroutine>d__5");
// Type namespace: HMUI
namespace HMUI {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: HMUI.Screen/HMUI.<TransitionCoroutine>d__5
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class Screen::$TransitionCoroutine$d__5 : public ::Il2CppObject/*, public System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*/ {
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
    // public HMUI.Screen <>4__this
    // Size: 0x8
    // Offset: 0x20
    HMUI::Screen* $$4__this;
    // Field size check
    static_assert(sizeof(HMUI::Screen*) == 0x8);
    // public HMUI.ViewController newRootViewController
    // Size: 0x8
    // Offset: 0x28
    HMUI::ViewController* newRootViewController;
    // Field size check
    static_assert(sizeof(HMUI::ViewController*) == 0x8);
    // public HMUI.ViewController/HMUI.AnimationType animationType
    // Size: 0x4
    // Offset: 0x30
    HMUI::ViewController::AnimationType animationType;
    // Field size check
    static_assert(sizeof(HMUI::ViewController::AnimationType) == 0x4);
    // Padding between fields: animationType and: $oldRootViewController$5__2
    char __padding4[0x4] = {};
    // private HMUI.ViewController <oldRootViewController>5__2
    // Size: 0x8
    // Offset: 0x38
    HMUI::ViewController* $oldRootViewController$5__2;
    // Field size check
    static_assert(sizeof(HMUI::ViewController*) == 0x8);
    // private System.Single <oldRootViewControllerStartAlpha>5__3
    // Size: 0x4
    // Offset: 0x40
    float $oldRootViewControllerStartAlpha$5__3;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single <elapsedTime>5__4
    // Size: 0x4
    // Offset: 0x44
    float $elapsedTime$5__4;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Creating interface conversion operator: operator System::Collections::Generic::IEnumerator_1<::Il2CppObject*>
    operator System::Collections::Generic::IEnumerator_1<::Il2CppObject*>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*>(this);
    }
    // Get instance field reference: private System.Int32 <>1__state
    int& dyn_$$1__state();
    // Get instance field reference: private System.Object <>2__current
    ::Il2CppObject*& dyn_$$2__current();
    // Get instance field reference: public HMUI.Screen <>4__this
    HMUI::Screen*& dyn_$$4__this();
    // Get instance field reference: public HMUI.ViewController newRootViewController
    HMUI::ViewController*& dyn_newRootViewController();
    // Get instance field reference: public HMUI.ViewController/HMUI.AnimationType animationType
    HMUI::ViewController::AnimationType& dyn_animationType();
    // Get instance field reference: private HMUI.ViewController <oldRootViewController>5__2
    HMUI::ViewController*& dyn_$oldRootViewController$5__2();
    // Get instance field reference: private System.Single <oldRootViewControllerStartAlpha>5__3
    float& dyn_$oldRootViewControllerStartAlpha$5__3();
    // Get instance field reference: private System.Single <elapsedTime>5__4
    float& dyn_$elapsedTime$5__4();
    // private System.Object System.Collections.Generic.IEnumerator<System.Object>.get_Current()
    // Offset: 0x14C7894
    ::Il2CppObject* System_Collections_Generic_IEnumerator$System_Object$_get_Current();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x14C78FC
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x14C72B0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Screen::$TransitionCoroutine$d__5* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("HMUI::Screen::$TransitionCoroutine$d__5::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Screen::$TransitionCoroutine$d__5*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x14C72F0
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x14C72F4
    bool MoveNext();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x14C789C
    void System_Collections_IEnumerator_Reset();
  }; // HMUI.Screen/HMUI.<TransitionCoroutine>d__5
  #pragma pack(pop)
  static check_size<sizeof(Screen::$TransitionCoroutine$d__5), 68 + sizeof(float)> __HMUI_Screen_$TransitionCoroutine$d__5SizeCheck;
  static_assert(sizeof(Screen::$TransitionCoroutine$d__5) == 0x48);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HMUI::Screen::$TransitionCoroutine$d__5::System_Collections_Generic_IEnumerator$System_Object$_get_Current
// Il2CppName: System.Collections.Generic.IEnumerator<System.Object>.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (HMUI::Screen::$TransitionCoroutine$d__5::*)()>(&HMUI::Screen::$TransitionCoroutine$d__5::System_Collections_Generic_IEnumerator$System_Object$_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::Screen::$TransitionCoroutine$d__5*), "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::Screen::$TransitionCoroutine$d__5::System_Collections_IEnumerator_get_Current
// Il2CppName: System.Collections.IEnumerator.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (HMUI::Screen::$TransitionCoroutine$d__5::*)()>(&HMUI::Screen::$TransitionCoroutine$d__5::System_Collections_IEnumerator_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::Screen::$TransitionCoroutine$d__5*), "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::Screen::$TransitionCoroutine$d__5::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: HMUI::Screen::$TransitionCoroutine$d__5::System_IDisposable_Dispose
// Il2CppName: System.IDisposable.Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::Screen::$TransitionCoroutine$d__5::*)()>(&HMUI::Screen::$TransitionCoroutine$d__5::System_IDisposable_Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::Screen::$TransitionCoroutine$d__5*), "System.IDisposable.Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::Screen::$TransitionCoroutine$d__5::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HMUI::Screen::$TransitionCoroutine$d__5::*)()>(&HMUI::Screen::$TransitionCoroutine$d__5::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::Screen::$TransitionCoroutine$d__5*), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::Screen::$TransitionCoroutine$d__5::System_Collections_IEnumerator_Reset
// Il2CppName: System.Collections.IEnumerator.Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::Screen::$TransitionCoroutine$d__5::*)()>(&HMUI::Screen::$TransitionCoroutine$d__5::System_Collections_IEnumerator_Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::Screen::$TransitionCoroutine$d__5*), "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
