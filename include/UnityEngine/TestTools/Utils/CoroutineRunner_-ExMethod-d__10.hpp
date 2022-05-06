// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.TestTools.Utils.CoroutineRunner
#include "UnityEngine/TestTools/Utils/CoroutineRunner.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Skipping declaration: IEnumerator because it is already included!
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::TestTools::Utils::CoroutineRunner::$ExMethod$d__10);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TestTools::Utils::CoroutineRunner::$ExMethod$d__10*, "UnityEngine.TestTools.Utils", "CoroutineRunner/<ExMethod>d__10");
// Type namespace: UnityEngine.TestTools.Utils
namespace UnityEngine::TestTools::Utils {
  // Size: 0x34
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.TestTools.Utils.CoroutineRunner/UnityEngine.TestTools.Utils.<ExMethod>d__10
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class CoroutineRunner::$ExMethod$d__10 : public ::Il2CppObject/*, public ::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*/ {
    public:
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
    // public UnityEngine.TestTools.Utils.CoroutineRunner <>4__this
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::TestTools::Utils::CoroutineRunner* $$4__this;
    // Field size check
    static_assert(sizeof(::UnityEngine::TestTools::Utils::CoroutineRunner*) == 0x8);
    // public System.Collections.IEnumerator e
    // Size: 0x8
    // Offset: 0x28
    ::System::Collections::IEnumerator* e;
    // Field size check
    static_assert(sizeof(::System::Collections::IEnumerator*) == 0x8);
    // public System.Int32 timeout
    // Size: 0x4
    // Offset: 0x30
    int timeout;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating interface conversion operator: operator ::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>
    operator ::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>() noexcept {
      return *reinterpret_cast<::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*>(this);
    }
    // Get instance field reference: private System.Int32 <>1__state
    [[deprecated("Use field access instead!")]] int& dyn_$$1__state();
    // Get instance field reference: private System.Object <>2__current
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn_$$2__current();
    // Get instance field reference: public UnityEngine.TestTools.Utils.CoroutineRunner <>4__this
    [[deprecated("Use field access instead!")]] ::UnityEngine::TestTools::Utils::CoroutineRunner*& dyn_$$4__this();
    // Get instance field reference: public System.Collections.IEnumerator e
    [[deprecated("Use field access instead!")]] ::System::Collections::IEnumerator*& dyn_e();
    // Get instance field reference: public System.Int32 timeout
    [[deprecated("Use field access instead!")]] int& dyn_timeout();
    // private System.Object System.Collections.Generic.IEnumerator<System.Object>.get_Current()
    // Offset: 0x2AC6C6C
    ::Il2CppObject* System_Collections_Generic_IEnumerator$System_Object$_get_Current();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x2AC6CD4
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x2AC6A38
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CoroutineRunner::$ExMethod$d__10* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::TestTools::Utils::CoroutineRunner::$ExMethod$d__10::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CoroutineRunner::$ExMethod$d__10*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x2AC6B38
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x2AC6B3C
    bool MoveNext();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x2AC6C74
    void System_Collections_IEnumerator_Reset();
  }; // UnityEngine.TestTools.Utils.CoroutineRunner/UnityEngine.TestTools.Utils.<ExMethod>d__10
  #pragma pack(pop)
  static check_size<sizeof(CoroutineRunner::$ExMethod$d__10), 48 + sizeof(int)> __UnityEngine_TestTools_Utils_CoroutineRunner_$ExMethod$d__10SizeCheck;
  static_assert(sizeof(CoroutineRunner::$ExMethod$d__10) == 0x34);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::TestTools::Utils::CoroutineRunner::$ExMethod$d__10::System_Collections_Generic_IEnumerator$System_Object$_get_Current
// Il2CppName: System.Collections.Generic.IEnumerator<System.Object>.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (UnityEngine::TestTools::Utils::CoroutineRunner::$ExMethod$d__10::*)()>(&UnityEngine::TestTools::Utils::CoroutineRunner::$ExMethod$d__10::System_Collections_Generic_IEnumerator$System_Object$_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::Utils::CoroutineRunner::$ExMethod$d__10*), "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestTools::Utils::CoroutineRunner::$ExMethod$d__10::System_Collections_IEnumerator_get_Current
// Il2CppName: System.Collections.IEnumerator.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (UnityEngine::TestTools::Utils::CoroutineRunner::$ExMethod$d__10::*)()>(&UnityEngine::TestTools::Utils::CoroutineRunner::$ExMethod$d__10::System_Collections_IEnumerator_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::Utils::CoroutineRunner::$ExMethod$d__10*), "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestTools::Utils::CoroutineRunner::$ExMethod$d__10::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::TestTools::Utils::CoroutineRunner::$ExMethod$d__10::System_IDisposable_Dispose
// Il2CppName: System.IDisposable.Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TestTools::Utils::CoroutineRunner::$ExMethod$d__10::*)()>(&UnityEngine::TestTools::Utils::CoroutineRunner::$ExMethod$d__10::System_IDisposable_Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::Utils::CoroutineRunner::$ExMethod$d__10*), "System.IDisposable.Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestTools::Utils::CoroutineRunner::$ExMethod$d__10::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::TestTools::Utils::CoroutineRunner::$ExMethod$d__10::*)()>(&UnityEngine::TestTools::Utils::CoroutineRunner::$ExMethod$d__10::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::Utils::CoroutineRunner::$ExMethod$d__10*), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestTools::Utils::CoroutineRunner::$ExMethod$d__10::System_Collections_IEnumerator_Reset
// Il2CppName: System.Collections.IEnumerator.Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TestTools::Utils::CoroutineRunner::$ExMethod$d__10::*)()>(&UnityEngine::TestTools::Utils::CoroutineRunner::$ExMethod$d__10::System_Collections_IEnumerator_Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::Utils::CoroutineRunner::$ExMethod$d__10*), "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
