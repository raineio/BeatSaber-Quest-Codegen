// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: HoudiniEngineUnity.JSONArray
#include "HoudiniEngineUnity/JSONArray.hpp"
// Including type: System.Collections.Generic.IEnumerable`1
#include "System/Collections/Generic/IEnumerable_1.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
// Including type: System.Collections.Generic.List`1/System.Collections.Generic.Enumerator
#include "System/Collections/Generic/List_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Forward declaring type: JSONNode
  class JSONNode;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Skipping declaration: IEnumerator because it is already included!
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::HoudiniEngineUnity::JSONArray::$get_Children$d__22);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::JSONArray::$get_Children$d__22*, "HoudiniEngineUnity", "JSONArray/<get_Children>d__22");
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // WARNING Size may be invalid!
  // Autogenerated type: HoudiniEngineUnity.JSONArray/HoudiniEngineUnity.<get_Children>d__22
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class JSONArray::$get_Children$d__22 : public ::Il2CppObject/*, public ::System::Collections::Generic::IEnumerable_1<::HoudiniEngineUnity::JSONNode*>, public ::System::Collections::Generic::IEnumerator_1<::HoudiniEngineUnity::JSONNode*>*/ {
    public:
    public:
    // private System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x10
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private HoudiniEngineUnity.JSONNode <>2__current
    // Size: 0x8
    // Offset: 0x18
    ::HoudiniEngineUnity::JSONNode* $$2__current;
    // Field size check
    static_assert(sizeof(::HoudiniEngineUnity::JSONNode*) == 0x8);
    // private System.Int32 <>l__initialThreadId
    // Size: 0x4
    // Offset: 0x20
    int $$l__initialThreadId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public HoudiniEngineUnity.JSONArray <>4__this
    // Size: 0x8
    // Offset: 0x28
    ::HoudiniEngineUnity::JSONArray* $$4__this;
    // Field size check
    static_assert(sizeof(::HoudiniEngineUnity::JSONArray*) == 0x8);
    // private System.Collections.Generic.List`1/System.Collections.Generic.Enumerator<HoudiniEngineUnity.JSONNode> <>7__wrap1
    // Size: 0xFFFFFFFF
    // Offset: 0x30
    typename ::System::Collections::Generic::List_1<::HoudiniEngineUnity::JSONNode*>::Enumerator $$7__wrap1;
    public:
    // Creating interface conversion operator: operator ::System::Collections::Generic::IEnumerable_1<::HoudiniEngineUnity::JSONNode*>
    operator ::System::Collections::Generic::IEnumerable_1<::HoudiniEngineUnity::JSONNode*>() noexcept {
      return *reinterpret_cast<::System::Collections::Generic::IEnumerable_1<::HoudiniEngineUnity::JSONNode*>*>(this);
    }
    // Creating interface conversion operator: operator ::System::Collections::Generic::IEnumerator_1<::HoudiniEngineUnity::JSONNode*>
    operator ::System::Collections::Generic::IEnumerator_1<::HoudiniEngineUnity::JSONNode*>() noexcept {
      return *reinterpret_cast<::System::Collections::Generic::IEnumerator_1<::HoudiniEngineUnity::JSONNode*>*>(this);
    }
    // Get instance field reference: private System.Int32 <>1__state
    [[deprecated("Use field access instead!")]] int& dyn_$$1__state();
    // Get instance field reference: private HoudiniEngineUnity.JSONNode <>2__current
    [[deprecated("Use field access instead!")]] ::HoudiniEngineUnity::JSONNode*& dyn_$$2__current();
    // Get instance field reference: private System.Int32 <>l__initialThreadId
    [[deprecated("Use field access instead!")]] int& dyn_$$l__initialThreadId();
    // Get instance field reference: public HoudiniEngineUnity.JSONArray <>4__this
    [[deprecated("Use field access instead!")]] ::HoudiniEngineUnity::JSONArray*& dyn_$$4__this();
    // Get instance field reference: private System.Collections.Generic.List`1/System.Collections.Generic.Enumerator<HoudiniEngineUnity.JSONNode> <>7__wrap1
    [[deprecated("Use field access instead!")]] typename ::System::Collections::Generic::List_1<::HoudiniEngineUnity::JSONNode*>::Enumerator& dyn_$$7__wrap1();
    // private HoudiniEngineUnity.JSONNode System.Collections.Generic.IEnumerator<HoudiniEngineUnity.JSONNode>.get_Current()
    // Offset: 0x1A1445C
    ::HoudiniEngineUnity::JSONNode* System_Collections_Generic_IEnumerator$HoudiniEngineUnity_JSONNode$_get_Current();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x1A144C4
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x1A1404C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static JSONArray::$get_Children$d__22* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("::HoudiniEngineUnity::JSONArray::$get_Children$d__22::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<JSONArray::$get_Children$d__22*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x1A14294
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x1A14308
    bool MoveNext();
    // private System.Void <>m__Finally1()
    // Offset: 0x1A142B0
    void $$m__Finally1();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x1A14464
    void System_Collections_IEnumerator_Reset();
    // private System.Collections.Generic.IEnumerator`1<HoudiniEngineUnity.JSONNode> System.Collections.Generic.IEnumerable<HoudiniEngineUnity.JSONNode>.GetEnumerator()
    // Offset: 0x1A144CC
    ::System::Collections::Generic::IEnumerator_1<::HoudiniEngineUnity::JSONNode*>* System_Collections_Generic_IEnumerable$HoudiniEngineUnity_JSONNode$_GetEnumerator();
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0x1A14578
    ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
  }; // HoudiniEngineUnity.JSONArray/HoudiniEngineUnity.<get_Children>d__22
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HoudiniEngineUnity::JSONArray::$get_Children$d__22::System_Collections_Generic_IEnumerator$HoudiniEngineUnity_JSONNode$_get_Current
// Il2CppName: System.Collections.Generic.IEnumerator<HoudiniEngineUnity.JSONNode>.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::JSONNode* (HoudiniEngineUnity::JSONArray::$get_Children$d__22::*)()>(&HoudiniEngineUnity::JSONArray::$get_Children$d__22::System_Collections_Generic_IEnumerator$HoudiniEngineUnity_JSONNode$_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::JSONArray::$get_Children$d__22*), "System.Collections.Generic.IEnumerator<HoudiniEngineUnity.JSONNode>.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::JSONArray::$get_Children$d__22::System_Collections_IEnumerator_get_Current
// Il2CppName: System.Collections.IEnumerator.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (HoudiniEngineUnity::JSONArray::$get_Children$d__22::*)()>(&HoudiniEngineUnity::JSONArray::$get_Children$d__22::System_Collections_IEnumerator_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::JSONArray::$get_Children$d__22*), "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::JSONArray::$get_Children$d__22::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: HoudiniEngineUnity::JSONArray::$get_Children$d__22::System_IDisposable_Dispose
// Il2CppName: System.IDisposable.Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::JSONArray::$get_Children$d__22::*)()>(&HoudiniEngineUnity::JSONArray::$get_Children$d__22::System_IDisposable_Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::JSONArray::$get_Children$d__22*), "System.IDisposable.Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::JSONArray::$get_Children$d__22::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::JSONArray::$get_Children$d__22::*)()>(&HoudiniEngineUnity::JSONArray::$get_Children$d__22::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::JSONArray::$get_Children$d__22*), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::JSONArray::$get_Children$d__22::$$m__Finally1
// Il2CppName: <>m__Finally1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::JSONArray::$get_Children$d__22::*)()>(&HoudiniEngineUnity::JSONArray::$get_Children$d__22::$$m__Finally1)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::JSONArray::$get_Children$d__22*), "<>m__Finally1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::JSONArray::$get_Children$d__22::System_Collections_IEnumerator_Reset
// Il2CppName: System.Collections.IEnumerator.Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::JSONArray::$get_Children$d__22::*)()>(&HoudiniEngineUnity::JSONArray::$get_Children$d__22::System_Collections_IEnumerator_Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::JSONArray::$get_Children$d__22*), "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::JSONArray::$get_Children$d__22::System_Collections_Generic_IEnumerable$HoudiniEngineUnity_JSONNode$_GetEnumerator
// Il2CppName: System.Collections.Generic.IEnumerable<HoudiniEngineUnity.JSONNode>.GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerator_1<::HoudiniEngineUnity::JSONNode*>* (HoudiniEngineUnity::JSONArray::$get_Children$d__22::*)()>(&HoudiniEngineUnity::JSONArray::$get_Children$d__22::System_Collections_Generic_IEnumerable$HoudiniEngineUnity_JSONNode$_GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::JSONArray::$get_Children$d__22*), "System.Collections.Generic.IEnumerable<HoudiniEngineUnity.JSONNode>.GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::JSONArray::$get_Children$d__22::System_Collections_IEnumerable_GetEnumerator
// Il2CppName: System.Collections.IEnumerable.GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (HoudiniEngineUnity::JSONArray::$get_Children$d__22::*)()>(&HoudiniEngineUnity::JSONArray::$get_Children$d__22::System_Collections_IEnumerable_GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::JSONArray::$get_Children$d__22*), "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
