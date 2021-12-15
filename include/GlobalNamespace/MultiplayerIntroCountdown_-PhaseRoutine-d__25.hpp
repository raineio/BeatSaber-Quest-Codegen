// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: MultiplayerIntroCountdown
#include "GlobalNamespace/MultiplayerIntroCountdown.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(GlobalNamespace::MultiplayerIntroCountdown::$PhaseRoutine$d__25);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerIntroCountdown::$PhaseRoutine$d__25*, "", "MultiplayerIntroCountdown/<PhaseRoutine>d__25");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: MultiplayerIntroCountdown/<PhaseRoutine>d__25
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class MultiplayerIntroCountdown::$PhaseRoutine$d__25 : public ::Il2CppObject/*, public System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*/ {
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
    // public MultiplayerIntroCountdown <>4__this
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::MultiplayerIntroCountdown* $$4__this;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerIntroCountdown*) == 0x8);
    // public System.String text
    // Size: 0x8
    // Offset: 0x28
    ::Il2CppString* text;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.Single appearDuration
    // Size: 0x4
    // Offset: 0x30
    float appearDuration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single disappearDuration
    // Size: 0x4
    // Offset: 0x34
    float disappearDuration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private MultiplayerIntroCountdown/<>c__DisplayClass25_0 <>8__1
    // Size: 0x8
    // Offset: 0x38
    GlobalNamespace::MultiplayerIntroCountdown::$$c__DisplayClass25_0* $$8__1;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerIntroCountdown::$$c__DisplayClass25_0*) == 0x8);
    public:
    // Creating interface conversion operator: operator System::Collections::Generic::IEnumerator_1<::Il2CppObject*>
    operator System::Collections::Generic::IEnumerator_1<::Il2CppObject*>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*>(this);
    }
    // Get instance field reference: private System.Int32 <>1__state
    int& dyn_$$1__state();
    // Get instance field reference: private System.Object <>2__current
    ::Il2CppObject*& dyn_$$2__current();
    // Get instance field reference: public MultiplayerIntroCountdown <>4__this
    GlobalNamespace::MultiplayerIntroCountdown*& dyn_$$4__this();
    // Get instance field reference: public System.String text
    ::Il2CppString*& dyn_text();
    // Get instance field reference: public System.Single appearDuration
    float& dyn_appearDuration();
    // Get instance field reference: public System.Single disappearDuration
    float& dyn_disappearDuration();
    // Get instance field reference: private MultiplayerIntroCountdown/<>c__DisplayClass25_0 <>8__1
    GlobalNamespace::MultiplayerIntroCountdown::$$c__DisplayClass25_0*& dyn_$$8__1();
    // private System.Object System.Collections.Generic.IEnumerator<System.Object>.get_Current()
    // Offset: 0x1295D0C
    ::Il2CppObject* System_Collections_Generic_IEnumerator$System_Object$_get_Current();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x1295D74
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x129501C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerIntroCountdown::$PhaseRoutine$d__25* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MultiplayerIntroCountdown::$PhaseRoutine$d__25::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerIntroCountdown::$PhaseRoutine$d__25*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x129576C
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x1295770
    bool MoveNext();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x1295D14
    void System_Collections_IEnumerator_Reset();
  }; // MultiplayerIntroCountdown/<PhaseRoutine>d__25
  #pragma pack(pop)
  static check_size<sizeof(MultiplayerIntroCountdown::$PhaseRoutine$d__25), 56 + sizeof(GlobalNamespace::MultiplayerIntroCountdown::$$c__DisplayClass25_0*)> __GlobalNamespace_MultiplayerIntroCountdown_$PhaseRoutine$d__25SizeCheck;
  static_assert(sizeof(MultiplayerIntroCountdown::$PhaseRoutine$d__25) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerIntroCountdown::$PhaseRoutine$d__25::System_Collections_Generic_IEnumerator$System_Object$_get_Current
// Il2CppName: System.Collections.Generic.IEnumerator<System.Object>.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (GlobalNamespace::MultiplayerIntroCountdown::$PhaseRoutine$d__25::*)()>(&GlobalNamespace::MultiplayerIntroCountdown::$PhaseRoutine$d__25::System_Collections_Generic_IEnumerator$System_Object$_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerIntroCountdown::$PhaseRoutine$d__25*), "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerIntroCountdown::$PhaseRoutine$d__25::System_Collections_IEnumerator_get_Current
// Il2CppName: System.Collections.IEnumerator.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (GlobalNamespace::MultiplayerIntroCountdown::$PhaseRoutine$d__25::*)()>(&GlobalNamespace::MultiplayerIntroCountdown::$PhaseRoutine$d__25::System_Collections_IEnumerator_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerIntroCountdown::$PhaseRoutine$d__25*), "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerIntroCountdown::$PhaseRoutine$d__25::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerIntroCountdown::$PhaseRoutine$d__25::System_IDisposable_Dispose
// Il2CppName: System.IDisposable.Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerIntroCountdown::$PhaseRoutine$d__25::*)()>(&GlobalNamespace::MultiplayerIntroCountdown::$PhaseRoutine$d__25::System_IDisposable_Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerIntroCountdown::$PhaseRoutine$d__25*), "System.IDisposable.Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerIntroCountdown::$PhaseRoutine$d__25::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::MultiplayerIntroCountdown::$PhaseRoutine$d__25::*)()>(&GlobalNamespace::MultiplayerIntroCountdown::$PhaseRoutine$d__25::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerIntroCountdown::$PhaseRoutine$d__25*), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerIntroCountdown::$PhaseRoutine$d__25::System_Collections_IEnumerator_Reset
// Il2CppName: System.Collections.IEnumerator.Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerIntroCountdown::$PhaseRoutine$d__25::*)()>(&GlobalNamespace::MultiplayerIntroCountdown::$PhaseRoutine$d__25::System_Collections_IEnumerator_Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerIntroCountdown::$PhaseRoutine$d__25*), "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
