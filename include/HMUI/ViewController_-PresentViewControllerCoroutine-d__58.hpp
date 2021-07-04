// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: HMUI.ViewController
#include "HMUI/ViewController.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
// Including type: HMUI.ViewController/AnimationDirection
#include "HMUI/ViewController_AnimationDirection.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
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
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: HMUI.ViewController/<PresentViewControllerCoroutine>d__58
  // [CompilerGeneratedAttribute] Offset: DF7DF0
  class ViewController::$PresentViewControllerCoroutine$d__58 : public ::Il2CppObject/*, public System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*/ {
    public:
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
    // public System.Boolean immediately
    // Size: 0x1
    // Offset: 0x30
    bool immediately;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: immediately and: animationDirection
    char __padding4[0x3] = {};
    // public HMUI.ViewController/AnimationDirection animationDirection
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
    // Creating value type constructor for type: $PresentViewControllerCoroutine$d__58
    $PresentViewControllerCoroutine$d__58(int $$1__state_ = {}, ::Il2CppObject* $$2__current_ = {}, HMUI::ViewController* $$4__this_ = {}, HMUI::ViewController* newViewController_ = {}, bool immediately_ = {}, HMUI::ViewController::AnimationDirection animationDirection_ = {}, System::Action* finishedCallback_ = {}) noexcept : $$1__state{$$1__state_}, $$2__current{$$2__current_}, $$4__this{$$4__this_}, newViewController{newViewController_}, immediately{immediately_}, animationDirection{animationDirection_}, finishedCallback{finishedCallback_} {}
    // Creating interface conversion operator: operator System::Collections::Generic::IEnumerator_1<::Il2CppObject*>
    operator System::Collections::Generic::IEnumerator_1<::Il2CppObject*>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*>(this);
    }
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x2386848
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ViewController::$PresentViewControllerCoroutine$d__58* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("HMUI::ViewController::$PresentViewControllerCoroutine$d__58::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ViewController::$PresentViewControllerCoroutine$d__58*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x2386874
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x2386878
    bool MoveNext();
    // private System.Object System.Collections.Generic.IEnumerator<System.Object>.get_Current()
    // Offset: 0x2386B30
    ::Il2CppObject* System_Collections_Generic_IEnumerator$System_Object$_get_Current();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x2386B38
    void System_Collections_IEnumerator_Reset();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x2386B98
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
  }; // HMUI.ViewController/<PresentViewControllerCoroutine>d__58
  #pragma pack(pop)
  static check_size<sizeof(ViewController::$PresentViewControllerCoroutine$d__58), 56 + sizeof(System::Action*)> __HMUI_ViewController_$PresentViewControllerCoroutine$d__58SizeCheck;
  static_assert(sizeof(ViewController::$PresentViewControllerCoroutine$d__58) == 0x40);
}
DEFINE_IL2CPP_ARG_TYPE(HMUI::ViewController::$PresentViewControllerCoroutine$d__58*, "HMUI", "ViewController/<PresentViewControllerCoroutine>d__58");
// Writing MetadataGetter for method: HMUI::ViewController::$PresentViewControllerCoroutine$d__58::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: HMUI::ViewController::$PresentViewControllerCoroutine$d__58::System_IDisposable_Dispose
// Il2CppName: System.IDisposable.Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::ViewController::$PresentViewControllerCoroutine$d__58::*)()>(&HMUI::ViewController::$PresentViewControllerCoroutine$d__58::System_IDisposable_Dispose)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::ViewController::$PresentViewControllerCoroutine$d__58*), "System.IDisposable.Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::ViewController::$PresentViewControllerCoroutine$d__58::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HMUI::ViewController::$PresentViewControllerCoroutine$d__58::*)()>(&HMUI::ViewController::$PresentViewControllerCoroutine$d__58::MoveNext)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::ViewController::$PresentViewControllerCoroutine$d__58*), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::ViewController::$PresentViewControllerCoroutine$d__58::System_Collections_Generic_IEnumerator$System_Object$_get_Current
// Il2CppName: System.Collections.Generic.IEnumerator<System.Object>.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (HMUI::ViewController::$PresentViewControllerCoroutine$d__58::*)()>(&HMUI::ViewController::$PresentViewControllerCoroutine$d__58::System_Collections_Generic_IEnumerator$System_Object$_get_Current)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::ViewController::$PresentViewControllerCoroutine$d__58*), "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::ViewController::$PresentViewControllerCoroutine$d__58::System_Collections_IEnumerator_Reset
// Il2CppName: System.Collections.IEnumerator.Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::ViewController::$PresentViewControllerCoroutine$d__58::*)()>(&HMUI::ViewController::$PresentViewControllerCoroutine$d__58::System_Collections_IEnumerator_Reset)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::ViewController::$PresentViewControllerCoroutine$d__58*), "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::ViewController::$PresentViewControllerCoroutine$d__58::System_Collections_IEnumerator_get_Current
// Il2CppName: System.Collections.IEnumerator.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (HMUI::ViewController::$PresentViewControllerCoroutine$d__58::*)()>(&HMUI::ViewController::$PresentViewControllerCoroutine$d__58::System_Collections_IEnumerator_get_Current)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::ViewController::$PresentViewControllerCoroutine$d__58*), "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
