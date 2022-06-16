// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Collections.Generic.IDictionary`2
#include "System/Collections/Generic/IDictionary_2.hpp"
// Including type: Newtonsoft.Json.Utilities.IWrappedDictionary
#include "Newtonsoft/Json/Utilities/IWrappedDictionary.hpp"
// Including type: System.Collections.IDictionaryEnumerator
#include "System/Collections/IDictionaryEnumerator.hpp"
// Including type: System.Collections.DictionaryEntry
#include "System/Collections/DictionaryEntry.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Newtonsoft::Json::Utilities
namespace Newtonsoft::Json::Utilities {
  // Skipping declaration: DictionaryEnumerator`2 because it is already included!
  // Skipping declaration: <>c because it is already included!
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Skipping declaration: IDictionary because it is already included!
  // Skipping declaration: ICollection because it is already included!
  // Skipping declaration: IEnumerator because it is already included!
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Skipping declaration: ICollection`1 because it is already included!
  // Forward declaring type: IEnumerator`1<T>
  template<typename T>
  class IEnumerator_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
  // Forward declaring type: Array
  class Array;
}
// Completed forward declares
// Type namespace: Newtonsoft.Json.Utilities
namespace Newtonsoft::Json::Utilities {
  // Forward declaring type: DictionaryWrapper`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class DictionaryWrapper_2;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Newtonsoft::Json::Utilities::DictionaryWrapper_2, "Newtonsoft.Json.Utilities", "DictionaryWrapper`2");
// Type namespace: Newtonsoft.Json.Utilities
namespace Newtonsoft::Json::Utilities {
  // WARNING Size may be invalid!
  // Autogenerated type: Newtonsoft.Json.Utilities.DictionaryWrapper`2
  // [TokenAttribute] Offset: FFFFFFFF
  // [PreserveAttribute] Offset: 10B1A80
  // [DefaultMemberAttribute] Offset: 10B1A80
  template<typename TKey, typename TValue>
  class DictionaryWrapper_2 : public ::Il2CppObject/*, public ::System::Collections::Generic::IDictionary_2<TKey, TValue>, public ::Newtonsoft::Json::Utilities::IWrappedDictionary*/ {
    public:
    // Nested type: ::Newtonsoft::Json::Utilities::DictionaryWrapper_2::DictionaryEnumerator_2<TKey, TValue, TEnumeratorKey, TEnumeratorValue>
    template<typename TEnumeratorKey, typename TEnumeratorValue>
    struct DictionaryEnumerator_2;
    // Nested type: ::Newtonsoft::Json::Utilities::DictionaryWrapper_2::$$c<TKey, TValue>
    class $$c;
    // WARNING Size may be invalid!
    // WARNING Layout: Sequential may not be correctly taken into account!
    // Autogenerated type: Newtonsoft.Json.Utilities.DictionaryWrapper`2/Newtonsoft.Json.Utilities.DictionaryEnumerator`2
    // [TokenAttribute] Offset: FFFFFFFF
    template<typename TEnumeratorKey, typename TEnumeratorValue>
    struct DictionaryEnumerator_2 : public ::il2cpp_utils::il2cpp_type_check::NestedType/*, public ::System::ValueType, public ::System::Collections::IDictionaryEnumerator*/ {
      public:
      using declaring_type = DictionaryWrapper_2<TKey, TValue>*;
      static constexpr std::string_view NESTED_NAME = "DictionaryEnumerator`2";
      static constexpr bool IS_VALUE_TYPE = true;
      public:
      // private readonly System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TEnumeratorKey,TEnumeratorValue>> _e
      // Size: 0x8
      // Offset: 0x0
      ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TEnumeratorKey, TEnumeratorValue>>* e;
      // Field size check
      static_assert(sizeof(::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TEnumeratorKey, TEnumeratorValue>>*) == 0x8);
      public:
      // Creating value type constructor for type: DictionaryEnumerator_2
      constexpr DictionaryEnumerator_2(::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TEnumeratorKey, TEnumeratorValue>>* e_ = {}) noexcept : e{e_} {}
      // Creating interface conversion operator: operator ::System::ValueType
      operator ::System::ValueType() noexcept {
        return *reinterpret_cast<::System::ValueType*>(this);
      }
      // Creating interface conversion operator: i_ValueType
      inline ::System::ValueType* i_ValueType() noexcept {
        return reinterpret_cast<::System::ValueType*>(this);
      }
      // Creating interface conversion operator: operator ::System::Collections::IDictionaryEnumerator
      operator ::System::Collections::IDictionaryEnumerator() noexcept {
        return *reinterpret_cast<::System::Collections::IDictionaryEnumerator*>(this);
      }
      // Creating interface conversion operator: i_IDictionaryEnumerator
      inline ::System::Collections::IDictionaryEnumerator* i_IDictionaryEnumerator() noexcept {
        return reinterpret_cast<::System::Collections::IDictionaryEnumerator*>(this);
      }
      // Creating conversion operator: operator ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TEnumeratorKey, TEnumeratorValue>>*
      constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TEnumeratorKey, TEnumeratorValue>>*() const noexcept {
        return e;
      }
      // Autogenerated instance field getter
      // Get instance field: private readonly System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TEnumeratorKey,TEnumeratorValue>> _e
      [[deprecated("Use field access instead!")]] ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TEnumeratorKey, TEnumeratorValue>>*& dyn__e() {
        static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::Utilities::DictionaryWrapper_2::DictionaryEnumerator_2::dyn__e");
        auto ___internal__instance = *this;
        static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_e"))->offset;
        return *reinterpret_cast<::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TEnumeratorKey, TEnumeratorValue>>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
      }
      // public System.Collections.DictionaryEntry get_Entry()
      // Offset: 0xFFFFFFFFFFFFFFFF
      ::System::Collections::DictionaryEntry get_Entry() {
        static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::Utilities::DictionaryWrapper_2::DictionaryEnumerator_2::get_Entry");
        auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "get_Entry", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
        return ::il2cpp_utils::RunMethodRethrow<::System::Collections::DictionaryEntry, false>(this, ___internal__method);
      }
      // public System.Object get_Key()
      // Offset: 0xFFFFFFFFFFFFFFFF
      ::Il2CppObject* get_Key() {
        static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::Utilities::DictionaryWrapper_2::DictionaryEnumerator_2::get_Key");
        auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "get_Key", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
        return ::il2cpp_utils::RunMethodRethrow<::Il2CppObject*, false>(this, ___internal__method);
      }
      // public System.Object get_Value()
      // Offset: 0xFFFFFFFFFFFFFFFF
      ::Il2CppObject* get_Value() {
        static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::Utilities::DictionaryWrapper_2::DictionaryEnumerator_2::get_Value");
        auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "get_Value", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
        return ::il2cpp_utils::RunMethodRethrow<::Il2CppObject*, false>(this, ___internal__method);
      }
      // public System.Object get_Current()
      // Offset: 0xFFFFFFFFFFFFFFFF
      ::Il2CppObject* get_Current() {
        static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::Utilities::DictionaryWrapper_2::DictionaryEnumerator_2::get_Current");
        auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "get_Current", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
        return ::il2cpp_utils::RunMethodRethrow<::Il2CppObject*, false>(this, ___internal__method);
      }
      // public System.Void .ctor(System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TEnumeratorKey,TEnumeratorValue>> e)
      // Offset: 0xFFFFFFFFFFFFFFFF
      // ABORTED: conflicts with another method.  DictionaryEnumerator_2(::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TEnumeratorKey, TEnumeratorValue>>* e)
      // public System.Boolean MoveNext()
      // Offset: 0xFFFFFFFFFFFFFFFF
      bool MoveNext() {
        static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::Utilities::DictionaryWrapper_2::DictionaryEnumerator_2::MoveNext");
        auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
        return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method);
      }
      // public System.Void Reset()
      // Offset: 0xFFFFFFFFFFFFFFFF
      void Reset() {
        static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::Utilities::DictionaryWrapper_2::DictionaryEnumerator_2::Reset");
        auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "Reset", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
        ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method);
      }
    }; // Newtonsoft.Json.Utilities.DictionaryWrapper`2/Newtonsoft.Json.Utilities.DictionaryEnumerator`2
    // Could not write size check! Type: Newtonsoft.Json.Utilities.DictionaryWrapper`2/Newtonsoft.Json.Utilities.DictionaryEnumerator`2 is generic, or has no fields that are valid for size checks!
    // WARNING Size may be invalid!
    // Autogenerated type: Newtonsoft.Json.Utilities.DictionaryWrapper`2/Newtonsoft.Json.Utilities.<>c
    // [TokenAttribute] Offset: FFFFFFFF
    // [CompilerGeneratedAttribute] Offset: FFFFFFFF
    class $$c : public ::il2cpp_utils::il2cpp_type_check::NestedType, public ::Il2CppObject {
      public:
      using declaring_type = DictionaryWrapper_2<TKey, TValue>*;
      static constexpr std::string_view NESTED_NAME = "<>c";
      static constexpr bool IS_VALUE_TYPE = false;
      // Autogenerated static field getter
      // Get static field: static public readonly Newtonsoft.Json.Utilities.DictionaryWrapper`2/Newtonsoft.Json.Utilities.<>c<TKey,TValue> <>9
      static typename ::Newtonsoft::Json::Utilities::DictionaryWrapper_2<TKey, TValue>::$$c* _get_$$9() {
        static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::Utilities::DictionaryWrapper_2::$$c::_get_$$9");
        return THROW_UNLESS((il2cpp_utils::GetFieldValue<typename ::Newtonsoft::Json::Utilities::DictionaryWrapper_2<TKey, TValue>::$$c*>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename DictionaryWrapper_2<TKey, TValue>::$$c*>::get(), "<>9")));
      }
      // Autogenerated static field setter
      // Set static field: static public readonly Newtonsoft.Json.Utilities.DictionaryWrapper`2/Newtonsoft.Json.Utilities.<>c<TKey,TValue> <>9
      static void _set_$$9(typename ::Newtonsoft::Json::Utilities::DictionaryWrapper_2<TKey, TValue>::$$c* value) {
        static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::Utilities::DictionaryWrapper_2::$$c::_set_$$9");
        THROW_UNLESS((il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename DictionaryWrapper_2<TKey, TValue>::$$c*>::get(), "<>9", value)));
      }
      // Autogenerated static field getter
      // Get static field: static public System.Func`2<System.Collections.DictionaryEntry,System.Collections.Generic.KeyValuePair`2<TKey,TValue>> <>9__25_0
      static ::System::Func_2<::System::Collections::DictionaryEntry, ::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>* _get_$$9__25_0() {
        static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::Utilities::DictionaryWrapper_2::$$c::_get_$$9__25_0");
        return THROW_UNLESS((il2cpp_utils::GetFieldValue<::System::Func_2<::System::Collections::DictionaryEntry, ::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename DictionaryWrapper_2<TKey, TValue>::$$c*>::get(), "<>9__25_0")));
      }
      // Autogenerated static field setter
      // Set static field: static public System.Func`2<System.Collections.DictionaryEntry,System.Collections.Generic.KeyValuePair`2<TKey,TValue>> <>9__25_0
      static void _set_$$9__25_0(::System::Func_2<::System::Collections::DictionaryEntry, ::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>* value) {
        static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::Utilities::DictionaryWrapper_2::$$c::_set_$$9__25_0");
        THROW_UNLESS((il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename DictionaryWrapper_2<TKey, TValue>::$$c*>::get(), "<>9__25_0", value)));
      }
      // static private System.Void .cctor()
      // Offset: 0xFFFFFFFFFFFFFFFF
      static void _cctor() {
        static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::Utilities::DictionaryWrapper_2::$$c::.cctor");
        static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename DictionaryWrapper_2<TKey, TValue>::$$c*>::get(), ".cctor", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
        ::il2cpp_utils::RunMethodRethrow<void, false>(static_cast<Il2CppObject*>(nullptr), ___internal__method);
      }
      // public System.Void .ctor()
      // Offset: 0xFFFFFFFFFFFFFFFF
      template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
      static typename DictionaryWrapper_2<TKey, TValue>::$$c* New_ctor() {
        static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::Utilities::DictionaryWrapper_2::$$c::.ctor");
        return THROW_UNLESS((::il2cpp_utils::New<typename DictionaryWrapper_2<TKey, TValue>::$$c*, creationType>()));
      }
      // System.Collections.Generic.KeyValuePair`2<TKey,TValue> <GetEnumerator>b__25_0(System.Collections.DictionaryEntry de)
      // Offset: 0xFFFFFFFFFFFFFFFF
      ::System::Collections::Generic::KeyValuePair_2<TKey, TValue> $GetEnumerator$b__25_0(::System::Collections::DictionaryEntry de) {
        static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::Utilities::DictionaryWrapper_2::$$c::<GetEnumerator>b__25_0");
        static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "<GetEnumerator>b__25_0", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(de)})));
        return ::il2cpp_utils::RunMethodRethrow<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>, false>(this, ___internal__method, de);
      }
    }; // Newtonsoft.Json.Utilities.DictionaryWrapper`2/Newtonsoft.Json.Utilities.<>c
    // Could not write size check! Type: Newtonsoft.Json.Utilities.DictionaryWrapper`2/Newtonsoft.Json.Utilities.<>c is generic, or has no fields that are valid for size checks!
    public:
    // private readonly System.Collections.IDictionary _dictionary
    // Size: 0x8
    // Offset: 0x0
    ::System::Collections::IDictionary* dictionary;
    // Field size check
    static_assert(sizeof(::System::Collections::IDictionary*) == 0x8);
    // private readonly System.Collections.Generic.IDictionary`2<TKey,TValue> _genericDictionary
    // Size: 0x8
    // Offset: 0x0
    ::System::Collections::Generic::IDictionary_2<TKey, TValue>* genericDictionary;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::IDictionary_2<TKey, TValue>*) == 0x8);
    // private System.Object _syncRoot
    // Size: 0x8
    // Offset: 0x0
    ::Il2CppObject* syncRoot;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::Collections::Generic::IDictionary_2<TKey, TValue>
    operator ::System::Collections::Generic::IDictionary_2<TKey, TValue>() noexcept {
      return *reinterpret_cast<::System::Collections::Generic::IDictionary_2<TKey, TValue>*>(this);
    }
    // Creating interface conversion operator: i_IDictionary_2_TKey_TValue
    inline ::System::Collections::Generic::IDictionary_2<TKey, TValue>* i_IDictionary_2_TKey_TValue() noexcept {
      return reinterpret_cast<::System::Collections::Generic::IDictionary_2<TKey, TValue>*>(this);
    }
    // Creating interface conversion operator: operator ::Newtonsoft::Json::Utilities::IWrappedDictionary
    operator ::Newtonsoft::Json::Utilities::IWrappedDictionary() noexcept {
      return *reinterpret_cast<::Newtonsoft::Json::Utilities::IWrappedDictionary*>(this);
    }
    // Creating interface conversion operator: i_IWrappedDictionary
    inline ::Newtonsoft::Json::Utilities::IWrappedDictionary* i_IWrappedDictionary() noexcept {
      return reinterpret_cast<::Newtonsoft::Json::Utilities::IWrappedDictionary*>(this);
    }
    // Autogenerated instance field getter
    // Get instance field: private readonly System.Collections.IDictionary _dictionary
    [[deprecated("Use field access instead!")]] ::System::Collections::IDictionary*& dyn__dictionary() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::Utilities::DictionaryWrapper_2::dyn__dictionary");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_dictionary"))->offset;
      return *reinterpret_cast<::System::Collections::IDictionary**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private readonly System.Collections.Generic.IDictionary`2<TKey,TValue> _genericDictionary
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::IDictionary_2<TKey, TValue>*& dyn__genericDictionary() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::Utilities::DictionaryWrapper_2::dyn__genericDictionary");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_genericDictionary"))->offset;
      return *reinterpret_cast<::System::Collections::Generic::IDictionary_2<TKey, TValue>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Object _syncRoot
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn__syncRoot() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::Utilities::DictionaryWrapper_2::dyn__syncRoot");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_syncRoot"))->offset;
      return *reinterpret_cast<::Il2CppObject**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // public System.Collections.Generic.ICollection`1<TKey> get_Keys()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Collections::Generic::ICollection_1<TKey>* get_Keys() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::Utilities::DictionaryWrapper_2::get_Keys");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_Keys", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<::System::Collections::Generic::ICollection_1<TKey>*, false>(this, ___internal__method);
    }
    // public TValue get_Item(TKey key)
    // Offset: 0xFFFFFFFFFFFFFFFF
    TValue get_Item(TKey key) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::Utilities::DictionaryWrapper_2::get_Item");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_Item", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(key)})));
      return ::il2cpp_utils::RunMethodRethrow<TValue, false>(this, ___internal__method, key);
    }
    // public System.Void set_Item(TKey key, TValue value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void set_Item(TKey key, TValue value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::Utilities::DictionaryWrapper_2::set_Item");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "set_Item", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(key), ::il2cpp_utils::ExtractType(value)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, key, value);
    }
    // public System.Int32 get_Count()
    // Offset: 0xFFFFFFFFFFFFFFFF
    int get_Count() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::Utilities::DictionaryWrapper_2::get_Count");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_Count", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<int, false>(this, ___internal__method);
    }
    // public System.Boolean get_IsReadOnly()
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool get_IsReadOnly() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::Utilities::DictionaryWrapper_2::get_IsReadOnly");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_IsReadOnly", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method);
    }
    // private System.Object System.Collections.IDictionary.get_Item(System.Object key)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::Il2CppObject* System_Collections_IDictionary_get_Item(::Il2CppObject* key) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::Utilities::DictionaryWrapper_2::System.Collections.IDictionary.get_Item");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "System.Collections.IDictionary.get_Item", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(key)})));
      return ::il2cpp_utils::RunMethodRethrow<::Il2CppObject*, false>(this, ___internal__method, key);
    }
    // private System.Void System.Collections.IDictionary.set_Item(System.Object key, System.Object value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void System_Collections_IDictionary_set_Item(::Il2CppObject* key, ::Il2CppObject* value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::Utilities::DictionaryWrapper_2::System.Collections.IDictionary.set_Item");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "System.Collections.IDictionary.set_Item", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(key), ::il2cpp_utils::ExtractType(value)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, key, value);
    }
    // private System.Collections.ICollection System.Collections.IDictionary.get_Keys()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Collections::ICollection* System_Collections_IDictionary_get_Keys() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::Utilities::DictionaryWrapper_2::System.Collections.IDictionary.get_Keys");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "System.Collections.IDictionary.get_Keys", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<::System::Collections::ICollection*, false>(this, ___internal__method);
    }
    // private System.Object System.Collections.ICollection.get_SyncRoot()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::Il2CppObject* System_Collections_ICollection_get_SyncRoot() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::Utilities::DictionaryWrapper_2::System.Collections.ICollection.get_SyncRoot");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "System.Collections.ICollection.get_SyncRoot", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<::Il2CppObject*, false>(this, ___internal__method);
    }
    // public System.Object get_UnderlyingDictionary()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::Il2CppObject* get_UnderlyingDictionary() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::Utilities::DictionaryWrapper_2::get_UnderlyingDictionary");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_UnderlyingDictionary", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<::Il2CppObject*, false>(this, ___internal__method);
    }
    // public System.Void .ctor(System.Collections.IDictionary dictionary)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DictionaryWrapper_2<TKey, TValue>* New_ctor(::System::Collections::IDictionary* dictionary) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::Utilities::DictionaryWrapper_2::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DictionaryWrapper_2<TKey, TValue>*, creationType>(dictionary)));
    }
    // public System.Void .ctor(System.Collections.Generic.IDictionary`2<TKey,TValue> dictionary)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DictionaryWrapper_2<TKey, TValue>* New_ctor(::System::Collections::Generic::IDictionary_2<TKey, TValue>* dictionary) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::Utilities::DictionaryWrapper_2::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DictionaryWrapper_2<TKey, TValue>*, creationType>(dictionary)));
    }
    // public System.Void Add(TKey key, TValue value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Add(TKey key, TValue value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::Utilities::DictionaryWrapper_2::Add");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Add", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(key), ::il2cpp_utils::ExtractType(value)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, key, value);
    }
    // public System.Boolean ContainsKey(TKey key)
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool ContainsKey(TKey key) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::Utilities::DictionaryWrapper_2::ContainsKey");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "ContainsKey", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(key)})));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method, key);
    }
    // public System.Boolean Remove(TKey key)
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool Remove(TKey key) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::Utilities::DictionaryWrapper_2::Remove");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Remove", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(key)})));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method, key);
    }
    // public System.Boolean TryGetValue(TKey key, out TValue value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool TryGetValue(TKey key, ByRef<TValue> value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::Utilities::DictionaryWrapper_2::TryGetValue");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "TryGetValue", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(key), ::il2cpp_utils::ExtractIndependentType<TValue&>()})));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method, key, byref(value));
    }
    // public System.Void Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue> item)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Add(::System::Collections::Generic::KeyValuePair_2<TKey, TValue> item) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::Utilities::DictionaryWrapper_2::Add");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Add", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(item)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, item);
    }
    // public System.Void Clear()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Clear() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::Utilities::DictionaryWrapper_2::Clear");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Clear", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method);
    }
    // public System.Boolean Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue> item)
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool Contains(::System::Collections::Generic::KeyValuePair_2<TKey, TValue> item) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::Utilities::DictionaryWrapper_2::Contains");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Contains", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(item)})));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method, item);
    }
    // public System.Void CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] array, System.Int32 arrayIndex)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void CopyTo(::ArrayW<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>> array, int arrayIndex) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::Utilities::DictionaryWrapper_2::CopyTo");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "CopyTo", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(array), ::il2cpp_utils::ExtractType(arrayIndex)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, array, arrayIndex);
    }
    // public System.Boolean Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue> item)
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool Remove(::System::Collections::Generic::KeyValuePair_2<TKey, TValue> item) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::Utilities::DictionaryWrapper_2::Remove");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Remove", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(item)})));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method, item);
    }
    // public System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> GetEnumerator()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>* GetEnumerator() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::Utilities::DictionaryWrapper_2::GetEnumerator");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*, false>(this, ___internal__method);
    }
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::Utilities::DictionaryWrapper_2::System.Collections.IEnumerable.GetEnumerator");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal__method);
    }
    // private System.Void System.Collections.IDictionary.Add(System.Object key, System.Object value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void System_Collections_IDictionary_Add(::Il2CppObject* key, ::Il2CppObject* value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::Utilities::DictionaryWrapper_2::System.Collections.IDictionary.Add");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "System.Collections.IDictionary.Add", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(key), ::il2cpp_utils::ExtractType(value)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, key, value);
    }
    // private System.Collections.IDictionaryEnumerator System.Collections.IDictionary.GetEnumerator()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Collections::IDictionaryEnumerator* System_Collections_IDictionary_GetEnumerator() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::Utilities::DictionaryWrapper_2::System.Collections.IDictionary.GetEnumerator");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "System.Collections.IDictionary.GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<::System::Collections::IDictionaryEnumerator*, false>(this, ___internal__method);
    }
    // private System.Boolean System.Collections.IDictionary.Contains(System.Object key)
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool System_Collections_IDictionary_Contains(::Il2CppObject* key) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::Utilities::DictionaryWrapper_2::System.Collections.IDictionary.Contains");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "System.Collections.IDictionary.Contains", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(key)})));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method, key);
    }
    // public System.Void Remove(System.Object key)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Remove(::Il2CppObject* key) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::Utilities::DictionaryWrapper_2::Remove");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Remove", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(key)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, key);
    }
    // private System.Void System.Collections.ICollection.CopyTo(System.Array array, System.Int32 index)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void System_Collections_ICollection_CopyTo(::System::Array* array, int index) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::Utilities::DictionaryWrapper_2::System.Collections.ICollection.CopyTo");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "System.Collections.ICollection.CopyTo", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(array), ::il2cpp_utils::ExtractType(index)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, array, index);
    }
  }; // Newtonsoft.Json.Utilities.DictionaryWrapper`2
  // Could not write size check! Type: Newtonsoft.Json.Utilities.DictionaryWrapper`2 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
