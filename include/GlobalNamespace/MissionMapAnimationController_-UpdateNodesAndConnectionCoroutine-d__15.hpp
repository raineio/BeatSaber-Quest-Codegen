// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: MissionMapAnimationController
#include "GlobalNamespace/MissionMapAnimationController.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MissionNodeConnection
  class MissionNodeConnection;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: <UpdateNodesAndConnectionCoroutine>d__15
  class $UpdateNodesAndConnectionCoroutine$d__15;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(GlobalNamespace::MissionMapAnimationController::$UpdateNodesAndConnectionCoroutine$d__15);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MissionMapAnimationController::$UpdateNodesAndConnectionCoroutine$d__15*, "", "MissionMapAnimationController/<UpdateNodesAndConnectionCoroutine>d__15");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x3C
  #pragma pack(push, 1)
  // Autogenerated type: MissionMapAnimationController/<UpdateNodesAndConnectionCoroutine>d__15
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class MissionMapAnimationController::$UpdateNodesAndConnectionCoroutine$d__15 : public ::Il2CppObject/*, public System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*/ {
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
    // public MissionMapAnimationController <>4__this
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::MissionMapAnimationController* $$4__this;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MissionMapAnimationController*) == 0x8);
    // private MissionNodeConnection[] <newEnabledConnection>5__2
    // Size: 0x8
    // Offset: 0x28
    ::ArrayW<GlobalNamespace::MissionNodeConnection*> $newEnabledConnection$5__2;
    // Field size check
    static_assert(sizeof(::ArrayW<GlobalNamespace::MissionNodeConnection*>) == 0x8);
    // private MissionNodeConnection[] <>7__wrap2
    // Size: 0x8
    // Offset: 0x30
    ::ArrayW<GlobalNamespace::MissionNodeConnection*> $$7__wrap2;
    // Field size check
    static_assert(sizeof(::ArrayW<GlobalNamespace::MissionNodeConnection*>) == 0x8);
    // private System.Int32 <>7__wrap3
    // Size: 0x4
    // Offset: 0x38
    int $$7__wrap3;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating interface conversion operator: operator System::Collections::Generic::IEnumerator_1<::Il2CppObject*>
    operator System::Collections::Generic::IEnumerator_1<::Il2CppObject*>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*>(this);
    }
    // Get instance field reference: private System.Int32 <>1__state
    int& dyn_$$1__state();
    // Get instance field reference: private System.Object <>2__current
    ::Il2CppObject*& dyn_$$2__current();
    // Get instance field reference: public MissionMapAnimationController <>4__this
    GlobalNamespace::MissionMapAnimationController*& dyn_$$4__this();
    // Get instance field reference: private MissionNodeConnection[] <newEnabledConnection>5__2
    ::ArrayW<GlobalNamespace::MissionNodeConnection*>& dyn_$newEnabledConnection$5__2();
    // Get instance field reference: private MissionNodeConnection[] <>7__wrap2
    ::ArrayW<GlobalNamespace::MissionNodeConnection*>& dyn_$$7__wrap2();
    // Get instance field reference: private System.Int32 <>7__wrap3
    int& dyn_$$7__wrap3();
    // private System.Object System.Collections.Generic.IEnumerator<System.Object>.get_Current()
    // Offset: 0x1163C60
    ::Il2CppObject* System_Collections_Generic_IEnumerator$System_Object$_get_Current();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x1163CC8
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x11631B0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MissionMapAnimationController::$UpdateNodesAndConnectionCoroutine$d__15* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MissionMapAnimationController::$UpdateNodesAndConnectionCoroutine$d__15::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MissionMapAnimationController::$UpdateNodesAndConnectionCoroutine$d__15*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x116373C
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x1163740
    bool MoveNext();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x1163C68
    void System_Collections_IEnumerator_Reset();
  }; // MissionMapAnimationController/<UpdateNodesAndConnectionCoroutine>d__15
  #pragma pack(pop)
  static check_size<sizeof(MissionMapAnimationController::$UpdateNodesAndConnectionCoroutine$d__15), 56 + sizeof(int)> __GlobalNamespace_MissionMapAnimationController_$UpdateNodesAndConnectionCoroutine$d__15SizeCheck;
  static_assert(sizeof(MissionMapAnimationController::$UpdateNodesAndConnectionCoroutine$d__15) == 0x3C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MissionMapAnimationController::$UpdateNodesAndConnectionCoroutine$d__15::System_Collections_Generic_IEnumerator$System_Object$_get_Current
// Il2CppName: System.Collections.Generic.IEnumerator<System.Object>.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (GlobalNamespace::MissionMapAnimationController::$UpdateNodesAndConnectionCoroutine$d__15::*)()>(&GlobalNamespace::MissionMapAnimationController::$UpdateNodesAndConnectionCoroutine$d__15::System_Collections_Generic_IEnumerator$System_Object$_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionMapAnimationController::$UpdateNodesAndConnectionCoroutine$d__15*), "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionMapAnimationController::$UpdateNodesAndConnectionCoroutine$d__15::System_Collections_IEnumerator_get_Current
// Il2CppName: System.Collections.IEnumerator.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (GlobalNamespace::MissionMapAnimationController::$UpdateNodesAndConnectionCoroutine$d__15::*)()>(&GlobalNamespace::MissionMapAnimationController::$UpdateNodesAndConnectionCoroutine$d__15::System_Collections_IEnumerator_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionMapAnimationController::$UpdateNodesAndConnectionCoroutine$d__15*), "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionMapAnimationController::$UpdateNodesAndConnectionCoroutine$d__15::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::MissionMapAnimationController::$UpdateNodesAndConnectionCoroutine$d__15::System_IDisposable_Dispose
// Il2CppName: System.IDisposable.Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionMapAnimationController::$UpdateNodesAndConnectionCoroutine$d__15::*)()>(&GlobalNamespace::MissionMapAnimationController::$UpdateNodesAndConnectionCoroutine$d__15::System_IDisposable_Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionMapAnimationController::$UpdateNodesAndConnectionCoroutine$d__15*), "System.IDisposable.Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionMapAnimationController::$UpdateNodesAndConnectionCoroutine$d__15::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::MissionMapAnimationController::$UpdateNodesAndConnectionCoroutine$d__15::*)()>(&GlobalNamespace::MissionMapAnimationController::$UpdateNodesAndConnectionCoroutine$d__15::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionMapAnimationController::$UpdateNodesAndConnectionCoroutine$d__15*), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionMapAnimationController::$UpdateNodesAndConnectionCoroutine$d__15::System_Collections_IEnumerator_Reset
// Il2CppName: System.Collections.IEnumerator.Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionMapAnimationController::$UpdateNodesAndConnectionCoroutine$d__15::*)()>(&GlobalNamespace::MissionMapAnimationController::$UpdateNodesAndConnectionCoroutine$d__15::System_Collections_IEnumerator_Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionMapAnimationController::$UpdateNodesAndConnectionCoroutine$d__15*), "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
