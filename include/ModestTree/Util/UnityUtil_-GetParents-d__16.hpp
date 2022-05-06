// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: ModestTree.Util.UnityUtil
#include "ModestTree/Util/UnityUtil.hpp"
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
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Skipping declaration: IEnumerator because it is already included!
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::ModestTree::Util::UnityUtil::$GetParents$d__16);
DEFINE_IL2CPP_ARG_TYPE(::ModestTree::Util::UnityUtil::$GetParents$d__16*, "ModestTree.Util", "UnityUtil/<GetParents>d__16");
// Type namespace: ModestTree.Util
namespace ModestTree::Util {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: ModestTree.Util.UnityUtil/ModestTree.Util.<GetParents>d__16
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class UnityUtil::$GetParents$d__16 : public ::Il2CppObject/*, public ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Transform*>, public ::System::Collections::Generic::IEnumerator_1<::UnityEngine::Transform*>*/ {
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
    // private UnityEngine.Transform <>2__current
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::Transform* $$2__current;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // private System.Int32 <>l__initialThreadId
    // Size: 0x4
    // Offset: 0x20
    int $$l__initialThreadId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: $$l__initialThreadId and: transform
    char __padding2[0x4] = {};
    // private UnityEngine.Transform transform
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::Transform* transform;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // public UnityEngine.Transform <>3__transform
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::Transform* $$3__transform;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // private System.Collections.Generic.IEnumerator`1<UnityEngine.Transform> <>7__wrap1
    // Size: 0x8
    // Offset: 0x38
    ::System::Collections::Generic::IEnumerator_1<::UnityEngine::Transform*>* $$7__wrap1;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::IEnumerator_1<::UnityEngine::Transform*>*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Transform*>
    operator ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Transform*>() noexcept {
      return *reinterpret_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Transform*>*>(this);
    }
    // Creating interface conversion operator: operator ::System::Collections::Generic::IEnumerator_1<::UnityEngine::Transform*>
    operator ::System::Collections::Generic::IEnumerator_1<::UnityEngine::Transform*>() noexcept {
      return *reinterpret_cast<::System::Collections::Generic::IEnumerator_1<::UnityEngine::Transform*>*>(this);
    }
    // Get instance field reference: private System.Int32 <>1__state
    [[deprecated("Use field access instead!")]] int& dyn_$$1__state();
    // Get instance field reference: private UnityEngine.Transform <>2__current
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_$$2__current();
    // Get instance field reference: private System.Int32 <>l__initialThreadId
    [[deprecated("Use field access instead!")]] int& dyn_$$l__initialThreadId();
    // Get instance field reference: private UnityEngine.Transform transform
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_transform();
    // Get instance field reference: public UnityEngine.Transform <>3__transform
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_$$3__transform();
    // Get instance field reference: private System.Collections.Generic.IEnumerator`1<UnityEngine.Transform> <>7__wrap1
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::IEnumerator_1<::UnityEngine::Transform*>*& dyn_$$7__wrap1();
    // private UnityEngine.Transform System.Collections.Generic.IEnumerator<UnityEngine.Transform>.get_Current()
    // Offset: 0x1767F4C
    ::UnityEngine::Transform* System_Collections_Generic_IEnumerator$UnityEngine_Transform$_get_Current();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x1767FB4
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x17669E4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UnityUtil::$GetParents$d__16* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("::ModestTree::Util::UnityUtil::$GetParents$d__16::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UnityUtil::$GetParents$d__16*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x1767BB0
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x1767C8C
    bool MoveNext();
    // private System.Void <>m__Finally1()
    // Offset: 0x1767BCC
    void $$m__Finally1();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x1767F54
    void System_Collections_IEnumerator_Reset();
    // private System.Collections.Generic.IEnumerator`1<UnityEngine.Transform> System.Collections.Generic.IEnumerable<UnityEngine.Transform>.GetEnumerator()
    // Offset: 0x1767FBC
    ::System::Collections::Generic::IEnumerator_1<::UnityEngine::Transform*>* System_Collections_Generic_IEnumerable$UnityEngine_Transform$_GetEnumerator();
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0x1768068
    ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
  }; // ModestTree.Util.UnityUtil/ModestTree.Util.<GetParents>d__16
  #pragma pack(pop)
  static check_size<sizeof(UnityUtil::$GetParents$d__16), 56 + sizeof(::System::Collections::Generic::IEnumerator_1<::UnityEngine::Transform*>*)> __ModestTree_Util_UnityUtil_$GetParents$d__16SizeCheck;
  static_assert(sizeof(UnityUtil::$GetParents$d__16) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: ModestTree::Util::UnityUtil::$GetParents$d__16::System_Collections_Generic_IEnumerator$UnityEngine_Transform$_get_Current
// Il2CppName: System.Collections.Generic.IEnumerator<UnityEngine.Transform>.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Transform* (ModestTree::Util::UnityUtil::$GetParents$d__16::*)()>(&ModestTree::Util::UnityUtil::$GetParents$d__16::System_Collections_Generic_IEnumerator$UnityEngine_Transform$_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ModestTree::Util::UnityUtil::$GetParents$d__16*), "System.Collections.Generic.IEnumerator<UnityEngine.Transform>.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: ModestTree::Util::UnityUtil::$GetParents$d__16::System_Collections_IEnumerator_get_Current
// Il2CppName: System.Collections.IEnumerator.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (ModestTree::Util::UnityUtil::$GetParents$d__16::*)()>(&ModestTree::Util::UnityUtil::$GetParents$d__16::System_Collections_IEnumerator_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ModestTree::Util::UnityUtil::$GetParents$d__16*), "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: ModestTree::Util::UnityUtil::$GetParents$d__16::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: ModestTree::Util::UnityUtil::$GetParents$d__16::System_IDisposable_Dispose
// Il2CppName: System.IDisposable.Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (ModestTree::Util::UnityUtil::$GetParents$d__16::*)()>(&ModestTree::Util::UnityUtil::$GetParents$d__16::System_IDisposable_Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ModestTree::Util::UnityUtil::$GetParents$d__16*), "System.IDisposable.Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: ModestTree::Util::UnityUtil::$GetParents$d__16::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (ModestTree::Util::UnityUtil::$GetParents$d__16::*)()>(&ModestTree::Util::UnityUtil::$GetParents$d__16::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ModestTree::Util::UnityUtil::$GetParents$d__16*), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: ModestTree::Util::UnityUtil::$GetParents$d__16::$$m__Finally1
// Il2CppName: <>m__Finally1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (ModestTree::Util::UnityUtil::$GetParents$d__16::*)()>(&ModestTree::Util::UnityUtil::$GetParents$d__16::$$m__Finally1)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ModestTree::Util::UnityUtil::$GetParents$d__16*), "<>m__Finally1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: ModestTree::Util::UnityUtil::$GetParents$d__16::System_Collections_IEnumerator_Reset
// Il2CppName: System.Collections.IEnumerator.Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (ModestTree::Util::UnityUtil::$GetParents$d__16::*)()>(&ModestTree::Util::UnityUtil::$GetParents$d__16::System_Collections_IEnumerator_Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ModestTree::Util::UnityUtil::$GetParents$d__16*), "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: ModestTree::Util::UnityUtil::$GetParents$d__16::System_Collections_Generic_IEnumerable$UnityEngine_Transform$_GetEnumerator
// Il2CppName: System.Collections.Generic.IEnumerable<UnityEngine.Transform>.GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerator_1<::UnityEngine::Transform*>* (ModestTree::Util::UnityUtil::$GetParents$d__16::*)()>(&ModestTree::Util::UnityUtil::$GetParents$d__16::System_Collections_Generic_IEnumerable$UnityEngine_Transform$_GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ModestTree::Util::UnityUtil::$GetParents$d__16*), "System.Collections.Generic.IEnumerable<UnityEngine.Transform>.GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: ModestTree::Util::UnityUtil::$GetParents$d__16::System_Collections_IEnumerable_GetEnumerator
// Il2CppName: System.Collections.IEnumerable.GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (ModestTree::Util::UnityUtil::$GetParents$d__16::*)()>(&ModestTree::Util::UnityUtil::$GetParents$d__16::System_Collections_IEnumerable_GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ModestTree::Util::UnityUtil::$GetParents$d__16*), "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
