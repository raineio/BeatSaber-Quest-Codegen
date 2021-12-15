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
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Skipping declaration: IEnumerator because it is already included!
}
// Completed forward declares
// Type namespace: ModestTree.Util
namespace ModestTree::Util {
  // Forward declaring type: <GetDirectChildrenAndSelf>d__20
  class $GetDirectChildrenAndSelf$d__20;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(ModestTree::Util::UnityUtil::$GetDirectChildrenAndSelf$d__20);
DEFINE_IL2CPP_ARG_TYPE(ModestTree::Util::UnityUtil::$GetDirectChildrenAndSelf$d__20*, "ModestTree.Util", "UnityUtil/<GetDirectChildrenAndSelf>d__20");
// Type namespace: ModestTree.Util
namespace ModestTree::Util {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: ModestTree.Util.UnityUtil/ModestTree.Util.<GetDirectChildrenAndSelf>d__20
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class UnityUtil::$GetDirectChildrenAndSelf$d__20 : public ::Il2CppObject/*, public System::Collections::Generic::IEnumerable_1<UnityEngine::GameObject*>, public System::Collections::Generic::IEnumerator_1<UnityEngine::GameObject*>*/ {
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
    // private UnityEngine.GameObject <>2__current
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::GameObject* $$2__current;
    // Field size check
    static_assert(sizeof(UnityEngine::GameObject*) == 0x8);
    // private System.Int32 <>l__initialThreadId
    // Size: 0x4
    // Offset: 0x20
    int $$l__initialThreadId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: $$l__initialThreadId and: obj
    char __padding2[0x4] = {};
    // private UnityEngine.GameObject obj
    // Size: 0x8
    // Offset: 0x28
    UnityEngine::GameObject* obj;
    // Field size check
    static_assert(sizeof(UnityEngine::GameObject*) == 0x8);
    // public UnityEngine.GameObject <>3__obj
    // Size: 0x8
    // Offset: 0x30
    UnityEngine::GameObject* $$3__obj;
    // Field size check
    static_assert(sizeof(UnityEngine::GameObject*) == 0x8);
    // private System.Collections.IEnumerator <>7__wrap1
    // Size: 0x8
    // Offset: 0x38
    System::Collections::IEnumerator* $$7__wrap1;
    // Field size check
    static_assert(sizeof(System::Collections::IEnumerator*) == 0x8);
    public:
    // Creating interface conversion operator: operator System::Collections::Generic::IEnumerable_1<UnityEngine::GameObject*>
    operator System::Collections::Generic::IEnumerable_1<UnityEngine::GameObject*>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IEnumerable_1<UnityEngine::GameObject*>*>(this);
    }
    // Creating interface conversion operator: operator System::Collections::Generic::IEnumerator_1<UnityEngine::GameObject*>
    operator System::Collections::Generic::IEnumerator_1<UnityEngine::GameObject*>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IEnumerator_1<UnityEngine::GameObject*>*>(this);
    }
    // Get instance field reference: private System.Int32 <>1__state
    int& dyn_$$1__state();
    // Get instance field reference: private UnityEngine.GameObject <>2__current
    UnityEngine::GameObject*& dyn_$$2__current();
    // Get instance field reference: private System.Int32 <>l__initialThreadId
    int& dyn_$$l__initialThreadId();
    // Get instance field reference: private UnityEngine.GameObject obj
    UnityEngine::GameObject*& dyn_obj();
    // Get instance field reference: public UnityEngine.GameObject <>3__obj
    UnityEngine::GameObject*& dyn_$$3__obj();
    // Get instance field reference: private System.Collections.IEnumerator <>7__wrap1
    System::Collections::IEnumerator*& dyn_$$7__wrap1();
    // private UnityEngine.GameObject System.Collections.Generic.IEnumerator<UnityEngine.GameObject>.get_Current()
    // Offset: 0x14F2DA0
    UnityEngine::GameObject* System_Collections_Generic_IEnumerator$UnityEngine_GameObject$_get_Current();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x14F2E08
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x14F201C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UnityUtil::$GetDirectChildrenAndSelf$d__20* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("ModestTree::Util::UnityUtil::$GetDirectChildrenAndSelf$d__20::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UnityUtil::$GetDirectChildrenAndSelf$d__20*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x14F2A34
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x14F2B1C
    bool MoveNext();
    // private System.Void <>m__Finally1()
    // Offset: 0x14F2A50
    void $$m__Finally1();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x14F2DA8
    void System_Collections_IEnumerator_Reset();
    // private System.Collections.Generic.IEnumerator`1<UnityEngine.GameObject> System.Collections.Generic.IEnumerable<UnityEngine.GameObject>.GetEnumerator()
    // Offset: 0x14F2E10
    System::Collections::Generic::IEnumerator_1<UnityEngine::GameObject*>* System_Collections_Generic_IEnumerable$UnityEngine_GameObject$_GetEnumerator();
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0x14F2EBC
    System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
  }; // ModestTree.Util.UnityUtil/ModestTree.Util.<GetDirectChildrenAndSelf>d__20
  #pragma pack(pop)
  static check_size<sizeof(UnityUtil::$GetDirectChildrenAndSelf$d__20), 56 + sizeof(System::Collections::IEnumerator*)> __ModestTree_Util_UnityUtil_$GetDirectChildrenAndSelf$d__20SizeCheck;
  static_assert(sizeof(UnityUtil::$GetDirectChildrenAndSelf$d__20) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: ModestTree::Util::UnityUtil::$GetDirectChildrenAndSelf$d__20::System_Collections_Generic_IEnumerator$UnityEngine_GameObject$_get_Current
// Il2CppName: System.Collections.Generic.IEnumerator<UnityEngine.GameObject>.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::GameObject* (ModestTree::Util::UnityUtil::$GetDirectChildrenAndSelf$d__20::*)()>(&ModestTree::Util::UnityUtil::$GetDirectChildrenAndSelf$d__20::System_Collections_Generic_IEnumerator$UnityEngine_GameObject$_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ModestTree::Util::UnityUtil::$GetDirectChildrenAndSelf$d__20*), "System.Collections.Generic.IEnumerator<UnityEngine.GameObject>.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: ModestTree::Util::UnityUtil::$GetDirectChildrenAndSelf$d__20::System_Collections_IEnumerator_get_Current
// Il2CppName: System.Collections.IEnumerator.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (ModestTree::Util::UnityUtil::$GetDirectChildrenAndSelf$d__20::*)()>(&ModestTree::Util::UnityUtil::$GetDirectChildrenAndSelf$d__20::System_Collections_IEnumerator_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ModestTree::Util::UnityUtil::$GetDirectChildrenAndSelf$d__20*), "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: ModestTree::Util::UnityUtil::$GetDirectChildrenAndSelf$d__20::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: ModestTree::Util::UnityUtil::$GetDirectChildrenAndSelf$d__20::System_IDisposable_Dispose
// Il2CppName: System.IDisposable.Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (ModestTree::Util::UnityUtil::$GetDirectChildrenAndSelf$d__20::*)()>(&ModestTree::Util::UnityUtil::$GetDirectChildrenAndSelf$d__20::System_IDisposable_Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ModestTree::Util::UnityUtil::$GetDirectChildrenAndSelf$d__20*), "System.IDisposable.Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: ModestTree::Util::UnityUtil::$GetDirectChildrenAndSelf$d__20::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (ModestTree::Util::UnityUtil::$GetDirectChildrenAndSelf$d__20::*)()>(&ModestTree::Util::UnityUtil::$GetDirectChildrenAndSelf$d__20::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ModestTree::Util::UnityUtil::$GetDirectChildrenAndSelf$d__20*), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: ModestTree::Util::UnityUtil::$GetDirectChildrenAndSelf$d__20::$$m__Finally1
// Il2CppName: <>m__Finally1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (ModestTree::Util::UnityUtil::$GetDirectChildrenAndSelf$d__20::*)()>(&ModestTree::Util::UnityUtil::$GetDirectChildrenAndSelf$d__20::$$m__Finally1)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ModestTree::Util::UnityUtil::$GetDirectChildrenAndSelf$d__20*), "<>m__Finally1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: ModestTree::Util::UnityUtil::$GetDirectChildrenAndSelf$d__20::System_Collections_IEnumerator_Reset
// Il2CppName: System.Collections.IEnumerator.Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (ModestTree::Util::UnityUtil::$GetDirectChildrenAndSelf$d__20::*)()>(&ModestTree::Util::UnityUtil::$GetDirectChildrenAndSelf$d__20::System_Collections_IEnumerator_Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ModestTree::Util::UnityUtil::$GetDirectChildrenAndSelf$d__20*), "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: ModestTree::Util::UnityUtil::$GetDirectChildrenAndSelf$d__20::System_Collections_Generic_IEnumerable$UnityEngine_GameObject$_GetEnumerator
// Il2CppName: System.Collections.Generic.IEnumerable<UnityEngine.GameObject>.GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IEnumerator_1<UnityEngine::GameObject*>* (ModestTree::Util::UnityUtil::$GetDirectChildrenAndSelf$d__20::*)()>(&ModestTree::Util::UnityUtil::$GetDirectChildrenAndSelf$d__20::System_Collections_Generic_IEnumerable$UnityEngine_GameObject$_GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ModestTree::Util::UnityUtil::$GetDirectChildrenAndSelf$d__20*), "System.Collections.Generic.IEnumerable<UnityEngine.GameObject>.GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: ModestTree::Util::UnityUtil::$GetDirectChildrenAndSelf$d__20::System_Collections_IEnumerable_GetEnumerator
// Il2CppName: System.Collections.IEnumerable.GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerator* (ModestTree::Util::UnityUtil::$GetDirectChildrenAndSelf$d__20::*)()>(&ModestTree::Util::UnityUtil::$GetDirectChildrenAndSelf$d__20::System_Collections_IEnumerable_GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ModestTree::Util::UnityUtil::$GetDirectChildrenAndSelf$d__20*), "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
