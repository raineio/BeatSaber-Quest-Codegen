// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Newtonsoft.Json.Linq.JProperty/Newtonsoft.Json.Linq.JPropertyList
#include "Newtonsoft/Json/Linq/JProperty_JPropertyList.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Newtonsoft::Json::Linq
namespace Newtonsoft::Json::Linq {
  // Forward declaring type: JToken
  class JToken;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Newtonsoft::Json::Linq::JProperty::JPropertyList::$GetEnumerator$d__1);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Linq::JProperty::JPropertyList::$GetEnumerator$d__1*, "Newtonsoft.Json.Linq", "JProperty/JPropertyList/<GetEnumerator>d__1");
// Type namespace: Newtonsoft.Json.Linq
namespace Newtonsoft::Json::Linq {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: Newtonsoft.Json.Linq.JProperty/Newtonsoft.Json.Linq.JPropertyList/Newtonsoft.Json.Linq.<GetEnumerator>d__1
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class JProperty::JPropertyList::$GetEnumerator$d__1 : public ::Il2CppObject/*, public ::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>*/ {
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
    // private Newtonsoft.Json.Linq.JToken <>2__current
    // Size: 0x8
    // Offset: 0x18
    ::Newtonsoft::Json::Linq::JToken* $$2__current;
    // Field size check
    static_assert(sizeof(::Newtonsoft::Json::Linq::JToken*) == 0x8);
    // public Newtonsoft.Json.Linq.JProperty/Newtonsoft.Json.Linq.JPropertyList <>4__this
    // Size: 0x8
    // Offset: 0x20
    ::Newtonsoft::Json::Linq::JProperty::JPropertyList* $$4__this;
    // Field size check
    static_assert(sizeof(::Newtonsoft::Json::Linq::JProperty::JPropertyList*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>
    operator ::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>() noexcept {
      return *reinterpret_cast<::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>*>(this);
    }
    // Creating interface conversion operator: i_JToken
    inline ::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>* i_JToken() noexcept {
      return reinterpret_cast<::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>*>(this);
    }
    // Get instance field reference: private System.Int32 <>1__state
    [[deprecated("Use field access instead!")]] int& dyn_$$1__state();
    // Get instance field reference: private Newtonsoft.Json.Linq.JToken <>2__current
    [[deprecated("Use field access instead!")]] ::Newtonsoft::Json::Linq::JToken*& dyn_$$2__current();
    // Get instance field reference: public Newtonsoft.Json.Linq.JProperty/Newtonsoft.Json.Linq.JPropertyList <>4__this
    [[deprecated("Use field access instead!")]] ::Newtonsoft::Json::Linq::JProperty::JPropertyList*& dyn_$$4__this();
    // private Newtonsoft.Json.Linq.JToken System.Collections.Generic.IEnumerator<Newtonsoft.Json.Linq.JToken>.get_Current()
    // Offset: 0x174C4E0
    ::Newtonsoft::Json::Linq::JToken* System_Collections_Generic_IEnumerator$Newtonsoft_Json_Linq_JToken$_get_Current();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x174C548
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x174C338
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static JProperty::JPropertyList::$GetEnumerator$d__1* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::Linq::JProperty::JPropertyList::$GetEnumerator$d__1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<JProperty::JPropertyList::$GetEnumerator$d__1*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x174C47C
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x174C480
    bool MoveNext();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x174C4E8
    void System_Collections_IEnumerator_Reset();
  }; // Newtonsoft.Json.Linq.JProperty/Newtonsoft.Json.Linq.JPropertyList/Newtonsoft.Json.Linq.<GetEnumerator>d__1
  #pragma pack(pop)
  static check_size<sizeof(JProperty::JPropertyList::$GetEnumerator$d__1), 32 + sizeof(::Newtonsoft::Json::Linq::JProperty::JPropertyList*)> __Newtonsoft_Json_Linq_JProperty_JPropertyList_$GetEnumerator$d__1SizeCheck;
  static_assert(sizeof(JProperty::JPropertyList::$GetEnumerator$d__1) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Newtonsoft::Json::Linq::JProperty::JPropertyList::$GetEnumerator$d__1::System_Collections_Generic_IEnumerator$Newtonsoft_Json_Linq_JToken$_get_Current
// Il2CppName: System.Collections.Generic.IEnumerator<Newtonsoft.Json.Linq.JToken>.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Linq::JToken* (Newtonsoft::Json::Linq::JProperty::JPropertyList::$GetEnumerator$d__1::*)()>(&Newtonsoft::Json::Linq::JProperty::JPropertyList::$GetEnumerator$d__1::System_Collections_Generic_IEnumerator$Newtonsoft_Json_Linq_JToken$_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Linq::JProperty::JPropertyList::$GetEnumerator$d__1*), "System.Collections.Generic.IEnumerator<Newtonsoft.Json.Linq.JToken>.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Linq::JProperty::JPropertyList::$GetEnumerator$d__1::System_Collections_IEnumerator_get_Current
// Il2CppName: System.Collections.IEnumerator.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (Newtonsoft::Json::Linq::JProperty::JPropertyList::$GetEnumerator$d__1::*)()>(&Newtonsoft::Json::Linq::JProperty::JPropertyList::$GetEnumerator$d__1::System_Collections_IEnumerator_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Linq::JProperty::JPropertyList::$GetEnumerator$d__1*), "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Linq::JProperty::JPropertyList::$GetEnumerator$d__1::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Newtonsoft::Json::Linq::JProperty::JPropertyList::$GetEnumerator$d__1::System_IDisposable_Dispose
// Il2CppName: System.IDisposable.Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Linq::JProperty::JPropertyList::$GetEnumerator$d__1::*)()>(&Newtonsoft::Json::Linq::JProperty::JPropertyList::$GetEnumerator$d__1::System_IDisposable_Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Linq::JProperty::JPropertyList::$GetEnumerator$d__1*), "System.IDisposable.Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Linq::JProperty::JPropertyList::$GetEnumerator$d__1::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Newtonsoft::Json::Linq::JProperty::JPropertyList::$GetEnumerator$d__1::*)()>(&Newtonsoft::Json::Linq::JProperty::JPropertyList::$GetEnumerator$d__1::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Linq::JProperty::JPropertyList::$GetEnumerator$d__1*), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Linq::JProperty::JPropertyList::$GetEnumerator$d__1::System_Collections_IEnumerator_Reset
// Il2CppName: System.Collections.IEnumerator.Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Linq::JProperty::JPropertyList::$GetEnumerator$d__1::*)()>(&Newtonsoft::Json::Linq::JProperty::JPropertyList::$GetEnumerator$d__1::System_Collections_IEnumerator_Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Linq::JProperty::JPropertyList::$GetEnumerator$d__1*), "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
