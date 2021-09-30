// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: HMMainThreadDispatcher
#include "GlobalNamespace/HMMainThreadDispatcher.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
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
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: HMMainThreadDispatcher/<ActionCoroutine>d__4
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class HMMainThreadDispatcher::$ActionCoroutine$d__4 : public ::Il2CppObject/*, public System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*/ {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    private:
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
    // public System.Action action
    // Size: 0x8
    // Offset: 0x20
    System::Action* action;
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
    // Get instance field reference: public System.Action action
    System::Action*& dyn_action();
    // private System.Object System.Collections.Generic.IEnumerator<System.Object>.get_Current()
    // Offset: 0x13858B4
    ::Il2CppObject* System_Collections_Generic_IEnumerator$System_Object$_get_Current();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x138591C
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x1385718
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HMMainThreadDispatcher::$ActionCoroutine$d__4* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::HMMainThreadDispatcher::$ActionCoroutine$d__4::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HMMainThreadDispatcher::$ActionCoroutine$d__4*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x138584C
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x1385850
    bool MoveNext();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x13858BC
    void System_Collections_IEnumerator_Reset();
  }; // HMMainThreadDispatcher/<ActionCoroutine>d__4
  #pragma pack(pop)
  static check_size<sizeof(HMMainThreadDispatcher::$ActionCoroutine$d__4), 32 + sizeof(System::Action*)> __GlobalNamespace_HMMainThreadDispatcher_$ActionCoroutine$d__4SizeCheck;
  static_assert(sizeof(HMMainThreadDispatcher::$ActionCoroutine$d__4) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::HMMainThreadDispatcher::$ActionCoroutine$d__4*, "", "HMMainThreadDispatcher/<ActionCoroutine>d__4");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::HMMainThreadDispatcher::$ActionCoroutine$d__4::System_Collections_Generic_IEnumerator$System_Object$_get_Current
// Il2CppName: System.Collections.Generic.IEnumerator<System.Object>.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (GlobalNamespace::HMMainThreadDispatcher::$ActionCoroutine$d__4::*)()>(&GlobalNamespace::HMMainThreadDispatcher::$ActionCoroutine$d__4::System_Collections_Generic_IEnumerator$System_Object$_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HMMainThreadDispatcher::$ActionCoroutine$d__4*), "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HMMainThreadDispatcher::$ActionCoroutine$d__4::System_Collections_IEnumerator_get_Current
// Il2CppName: System.Collections.IEnumerator.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (GlobalNamespace::HMMainThreadDispatcher::$ActionCoroutine$d__4::*)()>(&GlobalNamespace::HMMainThreadDispatcher::$ActionCoroutine$d__4::System_Collections_IEnumerator_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HMMainThreadDispatcher::$ActionCoroutine$d__4*), "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HMMainThreadDispatcher::$ActionCoroutine$d__4::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::HMMainThreadDispatcher::$ActionCoroutine$d__4::System_IDisposable_Dispose
// Il2CppName: System.IDisposable.Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HMMainThreadDispatcher::$ActionCoroutine$d__4::*)()>(&GlobalNamespace::HMMainThreadDispatcher::$ActionCoroutine$d__4::System_IDisposable_Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HMMainThreadDispatcher::$ActionCoroutine$d__4*), "System.IDisposable.Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HMMainThreadDispatcher::$ActionCoroutine$d__4::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::HMMainThreadDispatcher::$ActionCoroutine$d__4::*)()>(&GlobalNamespace::HMMainThreadDispatcher::$ActionCoroutine$d__4::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HMMainThreadDispatcher::$ActionCoroutine$d__4*), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HMMainThreadDispatcher::$ActionCoroutine$d__4::System_Collections_IEnumerator_Reset
// Il2CppName: System.Collections.IEnumerator.Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HMMainThreadDispatcher::$ActionCoroutine$d__4::*)()>(&GlobalNamespace::HMMainThreadDispatcher::$ActionCoroutine$d__4::System_Collections_IEnumerator_Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HMMainThreadDispatcher::$ActionCoroutine$d__4*), "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
