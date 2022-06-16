// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.TestTools.EnumerableTestMethodCommand
#include "UnityEngine/TestTools/EnumerableTestMethodCommand.hpp"
// Including type: System.Collections.Generic.IEnumerable`1
#include "System/Collections/Generic/IEnumerable_1.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: NUnit::Framework::Internal
namespace NUnit::Framework::Internal {
  // Forward declaring type: ITestExecutionContext
  class ITestExecutionContext;
}
// Forward declaring namespace: UnityEngine::TestTools
namespace UnityEngine::TestTools {
  // Forward declaring type: TestEnumerator
  class TestEnumerator;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Skipping declaration: IEnumerator because it is already included!
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::TestTools::EnumerableTestMethodCommand::$ExecuteEnumerable$d__2);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TestTools::EnumerableTestMethodCommand::$ExecuteEnumerable$d__2*, "UnityEngine.TestTools", "EnumerableTestMethodCommand/<ExecuteEnumerable>d__2");
// Type namespace: UnityEngine.TestTools
namespace UnityEngine::TestTools {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.TestTools.EnumerableTestMethodCommand/UnityEngine.TestTools.<ExecuteEnumerable>d__2
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class EnumerableTestMethodCommand::$ExecuteEnumerable$d__2 : public ::Il2CppObject/*, public ::System::Collections::Generic::IEnumerable_1<::Il2CppObject*>, public ::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*/ {
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
    // private System.Int32 <>l__initialThreadId
    // Size: 0x4
    // Offset: 0x20
    int $$l__initialThreadId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: $$l__initialThreadId and: $$4__this
    char __padding2[0x4] = {};
    // public UnityEngine.TestTools.EnumerableTestMethodCommand <>4__this
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::TestTools::EnumerableTestMethodCommand* $$4__this;
    // Field size check
    static_assert(sizeof(::UnityEngine::TestTools::EnumerableTestMethodCommand*) == 0x8);
    // private NUnit.Framework.Internal.ITestExecutionContext context
    // Size: 0x8
    // Offset: 0x30
    ::NUnit::Framework::Internal::ITestExecutionContext* context;
    // Field size check
    static_assert(sizeof(::NUnit::Framework::Internal::ITestExecutionContext*) == 0x8);
    // public NUnit.Framework.Internal.ITestExecutionContext <>3__context
    // Size: 0x8
    // Offset: 0x38
    ::NUnit::Framework::Internal::ITestExecutionContext* $$3__context;
    // Field size check
    static_assert(sizeof(::NUnit::Framework::Internal::ITestExecutionContext*) == 0x8);
    // private UnityEngine.TestTools.TestEnumerator <testEnumeraterYieldInstruction>5__2
    // Size: 0x8
    // Offset: 0x40
    ::UnityEngine::TestTools::TestEnumerator* $testEnumeraterYieldInstruction$5__2;
    // Field size check
    static_assert(sizeof(::UnityEngine::TestTools::TestEnumerator*) == 0x8);
    // private System.Collections.IEnumerator <executingEnumerator>5__3
    // Size: 0x8
    // Offset: 0x48
    ::System::Collections::IEnumerator* $executingEnumerator$5__3;
    // Field size check
    static_assert(sizeof(::System::Collections::IEnumerator*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::Collections::Generic::IEnumerable_1<::Il2CppObject*>
    operator ::System::Collections::Generic::IEnumerable_1<::Il2CppObject*>() noexcept {
      return *reinterpret_cast<::System::Collections::Generic::IEnumerable_1<::Il2CppObject*>*>(this);
    }
    // Creating interface conversion operator: i_Il2CppObject
    inline ::System::Collections::Generic::IEnumerable_1<::Il2CppObject*>* i_Il2CppObject() noexcept {
      return reinterpret_cast<::System::Collections::Generic::IEnumerable_1<::Il2CppObject*>*>(this);
    }
    // Creating interface conversion operator: operator ::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>
    operator ::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>() noexcept {
      return *reinterpret_cast<::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*>(this);
    }
    // Get instance field reference: private System.Int32 <>1__state
    [[deprecated("Use field access instead!")]] int& dyn_$$1__state();
    // Get instance field reference: private System.Object <>2__current
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn_$$2__current();
    // Get instance field reference: private System.Int32 <>l__initialThreadId
    [[deprecated("Use field access instead!")]] int& dyn_$$l__initialThreadId();
    // Get instance field reference: public UnityEngine.TestTools.EnumerableTestMethodCommand <>4__this
    [[deprecated("Use field access instead!")]] ::UnityEngine::TestTools::EnumerableTestMethodCommand*& dyn_$$4__this();
    // Get instance field reference: private NUnit.Framework.Internal.ITestExecutionContext context
    [[deprecated("Use field access instead!")]] ::NUnit::Framework::Internal::ITestExecutionContext*& dyn_context();
    // Get instance field reference: public NUnit.Framework.Internal.ITestExecutionContext <>3__context
    [[deprecated("Use field access instead!")]] ::NUnit::Framework::Internal::ITestExecutionContext*& dyn_$$3__context();
    // Get instance field reference: private UnityEngine.TestTools.TestEnumerator <testEnumeraterYieldInstruction>5__2
    [[deprecated("Use field access instead!")]] ::UnityEngine::TestTools::TestEnumerator*& dyn_$testEnumeraterYieldInstruction$5__2();
    // Get instance field reference: private System.Collections.IEnumerator <executingEnumerator>5__3
    [[deprecated("Use field access instead!")]] ::System::Collections::IEnumerator*& dyn_$executingEnumerator$5__3();
    // private System.Object System.Collections.Generic.IEnumerator<System.Object>.get_Current()
    // Offset: 0x197E624
    ::Il2CppObject* System_Collections_Generic_IEnumerator$System_Object$_get_Current();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x197E68C
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x197DD30
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EnumerableTestMethodCommand::$ExecuteEnumerable$d__2* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::TestTools::EnumerableTestMethodCommand::$ExecuteEnumerable$d__2::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EnumerableTestMethodCommand::$ExecuteEnumerable$d__2*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x197DFC0
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x197DFC4
    bool MoveNext();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x197E62C
    void System_Collections_IEnumerator_Reset();
    // private System.Collections.Generic.IEnumerator`1<System.Object> System.Collections.Generic.IEnumerable<System.Object>.GetEnumerator()
    // Offset: 0x197E694
    ::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>* System_Collections_Generic_IEnumerable$System_Object$_GetEnumerator();
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0x197E748
    ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
  }; // UnityEngine.TestTools.EnumerableTestMethodCommand/UnityEngine.TestTools.<ExecuteEnumerable>d__2
  #pragma pack(pop)
  static check_size<sizeof(EnumerableTestMethodCommand::$ExecuteEnumerable$d__2), 72 + sizeof(::System::Collections::IEnumerator*)> __UnityEngine_TestTools_EnumerableTestMethodCommand_$ExecuteEnumerable$d__2SizeCheck;
  static_assert(sizeof(EnumerableTestMethodCommand::$ExecuteEnumerable$d__2) == 0x50);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::TestTools::EnumerableTestMethodCommand::$ExecuteEnumerable$d__2::System_Collections_Generic_IEnumerator$System_Object$_get_Current
// Il2CppName: System.Collections.Generic.IEnumerator<System.Object>.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (UnityEngine::TestTools::EnumerableTestMethodCommand::$ExecuteEnumerable$d__2::*)()>(&UnityEngine::TestTools::EnumerableTestMethodCommand::$ExecuteEnumerable$d__2::System_Collections_Generic_IEnumerator$System_Object$_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::EnumerableTestMethodCommand::$ExecuteEnumerable$d__2*), "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestTools::EnumerableTestMethodCommand::$ExecuteEnumerable$d__2::System_Collections_IEnumerator_get_Current
// Il2CppName: System.Collections.IEnumerator.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (UnityEngine::TestTools::EnumerableTestMethodCommand::$ExecuteEnumerable$d__2::*)()>(&UnityEngine::TestTools::EnumerableTestMethodCommand::$ExecuteEnumerable$d__2::System_Collections_IEnumerator_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::EnumerableTestMethodCommand::$ExecuteEnumerable$d__2*), "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestTools::EnumerableTestMethodCommand::$ExecuteEnumerable$d__2::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::TestTools::EnumerableTestMethodCommand::$ExecuteEnumerable$d__2::System_IDisposable_Dispose
// Il2CppName: System.IDisposable.Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TestTools::EnumerableTestMethodCommand::$ExecuteEnumerable$d__2::*)()>(&UnityEngine::TestTools::EnumerableTestMethodCommand::$ExecuteEnumerable$d__2::System_IDisposable_Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::EnumerableTestMethodCommand::$ExecuteEnumerable$d__2*), "System.IDisposable.Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestTools::EnumerableTestMethodCommand::$ExecuteEnumerable$d__2::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::TestTools::EnumerableTestMethodCommand::$ExecuteEnumerable$d__2::*)()>(&UnityEngine::TestTools::EnumerableTestMethodCommand::$ExecuteEnumerable$d__2::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::EnumerableTestMethodCommand::$ExecuteEnumerable$d__2*), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestTools::EnumerableTestMethodCommand::$ExecuteEnumerable$d__2::System_Collections_IEnumerator_Reset
// Il2CppName: System.Collections.IEnumerator.Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TestTools::EnumerableTestMethodCommand::$ExecuteEnumerable$d__2::*)()>(&UnityEngine::TestTools::EnumerableTestMethodCommand::$ExecuteEnumerable$d__2::System_Collections_IEnumerator_Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::EnumerableTestMethodCommand::$ExecuteEnumerable$d__2*), "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestTools::EnumerableTestMethodCommand::$ExecuteEnumerable$d__2::System_Collections_Generic_IEnumerable$System_Object$_GetEnumerator
// Il2CppName: System.Collections.Generic.IEnumerable<System.Object>.GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>* (UnityEngine::TestTools::EnumerableTestMethodCommand::$ExecuteEnumerable$d__2::*)()>(&UnityEngine::TestTools::EnumerableTestMethodCommand::$ExecuteEnumerable$d__2::System_Collections_Generic_IEnumerable$System_Object$_GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::EnumerableTestMethodCommand::$ExecuteEnumerable$d__2*), "System.Collections.Generic.IEnumerable<System.Object>.GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestTools::EnumerableTestMethodCommand::$ExecuteEnumerable$d__2::System_Collections_IEnumerable_GetEnumerator
// Il2CppName: System.Collections.IEnumerable.GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (UnityEngine::TestTools::EnumerableTestMethodCommand::$ExecuteEnumerable$d__2::*)()>(&UnityEngine::TestTools::EnumerableTestMethodCommand::$ExecuteEnumerable$d__2::System_Collections_IEnumerable_GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::EnumerableTestMethodCommand::$ExecuteEnumerable$d__2*), "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
