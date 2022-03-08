// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Xml::Linq
namespace System::Xml::Linq {
  // Skipping declaration: ExtractKeyDelegate because it is already included!
  // Skipping declaration: XHashtableState because it is already included!
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: System.Xml.Linq
namespace System::Xml::Linq {
  // Forward declaring type: XHashtable`1<TValue>
  template<typename TValue>
  class XHashtable_1;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Xml::Linq::XHashtable_1, "System.Xml.Linq", "XHashtable`1");
// Type namespace: System.Xml.Linq
namespace System::Xml::Linq {
  // WARNING Size may be invalid!
  // Autogenerated type: System.Xml.Linq.XHashtable`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename TValue>
  class XHashtable_1 : public ::Il2CppObject {
    public:
    // Nested type: ::System::Xml::Linq::XHashtable_1::ExtractKeyDelegate<TValue>
    class ExtractKeyDelegate;
    // Nested type: ::System::Xml::Linq::XHashtable_1::XHashtableState<TValue>
    class XHashtableState;
    // WARNING Size may be invalid!
    // Autogenerated type: System.Xml.Linq.XHashtable`1/System.Xml.Linq.ExtractKeyDelegate
    // [TokenAttribute] Offset: FFFFFFFF
    class ExtractKeyDelegate : public ::il2cpp_utils::il2cpp_type_check::NestedType, public ::System::MulticastDelegate {
      public:
      using declaring_type = XHashtable_1<TValue>*;
      static constexpr std::string_view NESTED_NAME = "ExtractKeyDelegate";
      static constexpr bool IS_VALUE_TYPE = false;
      // public System.Void .ctor(System.Object object, System.IntPtr method)
      // Offset: 0xFFFFFFFF
      template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
      static typename XHashtable_1<TValue>::ExtractKeyDelegate* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
        static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Linq::XHashtable_1::ExtractKeyDelegate::.ctor");
        return THROW_UNLESS((::il2cpp_utils::New<typename XHashtable_1<TValue>::ExtractKeyDelegate*, creationType>(object, method)));
      }
      // public System.String Invoke(TValue value)
      // Offset: 0xFFFFFFFF
      ::StringW Invoke(TValue value) {
        static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Linq::XHashtable_1::ExtractKeyDelegate::Invoke");
        auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Invoke", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(value)})));
        return ::il2cpp_utils::RunMethodRethrow<::StringW, false>(this, ___internal__method, value);
      }
      // public System.IAsyncResult BeginInvoke(TValue value, System.AsyncCallback callback, System.Object object)
      // Offset: 0xFFFFFFFF
      ::System::IAsyncResult* BeginInvoke(TValue value, ::System::AsyncCallback* callback, ::Il2CppObject* object) {
        static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Linq::XHashtable_1::ExtractKeyDelegate::BeginInvoke");
        auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "BeginInvoke", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(value), ::il2cpp_utils::ExtractType(callback), ::il2cpp_utils::ExtractType(object)})));
        return ::il2cpp_utils::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal__method, value, callback, object);
      }
      // public System.String EndInvoke(System.IAsyncResult result)
      // Offset: 0xFFFFFFFF
      ::StringW EndInvoke(::System::IAsyncResult* result) {
        static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Linq::XHashtable_1::ExtractKeyDelegate::EndInvoke");
        auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "EndInvoke", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(result)})));
        return ::il2cpp_utils::RunMethodRethrow<::StringW, false>(this, ___internal__method, result);
      }
    }; // System.Xml.Linq.XHashtable`1/System.Xml.Linq.ExtractKeyDelegate
    // Could not write size check! Type: System.Xml.Linq.XHashtable`1/System.Xml.Linq.ExtractKeyDelegate is generic, or has no fields that are valid for size checks!
    // WARNING Size may be invalid!
    // Autogenerated type: System.Xml.Linq.XHashtable`1/System.Xml.Linq.XHashtableState
    // [TokenAttribute] Offset: FFFFFFFF
    class XHashtableState : public ::il2cpp_utils::il2cpp_type_check::NestedType, public ::Il2CppObject {
      public:
      using declaring_type = XHashtable_1<TValue>*;
      static constexpr std::string_view NESTED_NAME = "XHashtableState";
      static constexpr bool IS_VALUE_TYPE = false;
      // Nested type: ::System::Xml::Linq::XHashtable_1::XHashtableState::Entry<TValue>
      struct Entry;
      // WARNING Size may be invalid!
      // WARNING Layout: Sequential may not be correctly taken into account!
      // Autogenerated type: System.Xml.Linq.XHashtable`1/System.Xml.Linq.XHashtableState/System.Xml.Linq.Entry
      // [TokenAttribute] Offset: FFFFFFFF
      struct Entry : public ::il2cpp_utils::il2cpp_type_check::NestedType/*, public ::System::ValueType*/ {
        public:
        using declaring_type = typename XHashtable_1<TValue>::XHashtableState*;
        static constexpr std::string_view NESTED_NAME = "Entry";
        static constexpr bool IS_VALUE_TYPE = true;
        public:
        // public TValue Value
        // Size: 0xFFFFFFFF
        // Offset: 0x0
        TValue Value;
        // public System.Int32 HashCode
        // Size: 0x4
        // Offset: 0x0
        int HashCode;
        // Field size check
        static_assert(sizeof(int) == 0x4);
        // public System.Int32 Next
        // Size: 0x4
        // Offset: 0x0
        int Next;
        // Field size check
        static_assert(sizeof(int) == 0x4);
        public:
        // Creating value type constructor for type: Entry
        constexpr Entry(TValue Value_ = {}, int HashCode_ = {}, int Next_ = {}) noexcept : Value{Value_}, HashCode{HashCode_}, Next{Next_} {}
        // Creating interface conversion operator: operator ::System::ValueType
        operator ::System::ValueType() noexcept {
          return *reinterpret_cast<::System::ValueType*>(this);
        }
        // Autogenerated instance field getter
        // Get instance field: public TValue Value
        TValue& dyn_Value() {
          static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Linq::XHashtable_1::XHashtableState::Entry::dyn_Value");
          auto ___internal__instance = *this;
          static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "Value"))->offset;
          return *reinterpret_cast<TValue*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
        }
        // Autogenerated instance field getter
        // Get instance field: public System.Int32 HashCode
        int& dyn_HashCode() {
          static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Linq::XHashtable_1::XHashtableState::Entry::dyn_HashCode");
          auto ___internal__instance = *this;
          static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "HashCode"))->offset;
          return *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
        }
        // Autogenerated instance field getter
        // Get instance field: public System.Int32 Next
        int& dyn_Next() {
          static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Linq::XHashtable_1::XHashtableState::Entry::dyn_Next");
          auto ___internal__instance = *this;
          static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "Next"))->offset;
          return *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
        }
      }; // System.Xml.Linq.XHashtable`1/System.Xml.Linq.XHashtableState/System.Xml.Linq.Entry
      // Could not write size check! Type: System.Xml.Linq.XHashtable`1/System.Xml.Linq.XHashtableState/System.Xml.Linq.Entry is generic, or has no fields that are valid for size checks!
      #ifdef USE_CODEGEN_FIELDS
      public:
      #else
      #ifdef CODEGEN_FIELD_ACCESSIBILITY
      CODEGEN_FIELD_ACCESSIBILITY:
      #else
      protected:
      #endif
      #endif
      // private System.Int32[] buckets
      // Size: 0x8
      // Offset: 0x0
      ::ArrayW<int> buckets;
      // Field size check
      static_assert(sizeof(::ArrayW<int>) == 0x8);
      // private System.Xml.Linq.XHashtable`1/System.Xml.Linq.XHashtableState/System.Xml.Linq.Entry<TValue>[] entries
      // Size: 0x8
      // Offset: 0x0
      ::ArrayW<typename ::System::Xml::Linq::XHashtable_1<TValue>::XHashtableState::Entry> entries;
      // Field size check
      static_assert(sizeof(::ArrayW<typename ::System::Xml::Linq::XHashtable_1<TValue>::XHashtableState::Entry>) == 0x8);
      // private System.Int32 numEntries
      // Size: 0x4
      // Offset: 0x0
      int numEntries;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // private System.Xml.Linq.XHashtable`1/System.Xml.Linq.ExtractKeyDelegate<TValue> extractKey
      // Size: 0x8
      // Offset: 0x0
      typename ::System::Xml::Linq::XHashtable_1<TValue>::ExtractKeyDelegate* extractKey;
      // Field size check
      static_assert(sizeof(typename ::System::Xml::Linq::XHashtable_1<TValue>::ExtractKeyDelegate*) == 0x8);
      public:
      // Autogenerated instance field getter
      // Get instance field: private System.Int32[] buckets
      ::ArrayW<int>& dyn_buckets() {
        static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Linq::XHashtable_1::XHashtableState::dyn_buckets");
        auto ___internal__instance = this;
        static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "buckets"))->offset;
        return *reinterpret_cast<::ArrayW<int>*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
      }
      // Autogenerated instance field getter
      // Get instance field: private System.Xml.Linq.XHashtable`1/System.Xml.Linq.XHashtableState/System.Xml.Linq.Entry<TValue>[] entries
      ::ArrayW<typename ::System::Xml::Linq::XHashtable_1<TValue>::XHashtableState::Entry>& dyn_entries() {
        static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Linq::XHashtable_1::XHashtableState::dyn_entries");
        auto ___internal__instance = this;
        static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "entries"))->offset;
        return *reinterpret_cast<::ArrayW<typename ::System::Xml::Linq::XHashtable_1<TValue>::XHashtableState::Entry>*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
      }
      // Autogenerated instance field getter
      // Get instance field: private System.Int32 numEntries
      int& dyn_numEntries() {
        static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Linq::XHashtable_1::XHashtableState::dyn_numEntries");
        auto ___internal__instance = this;
        static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "numEntries"))->offset;
        return *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
      }
      // Autogenerated instance field getter
      // Get instance field: private System.Xml.Linq.XHashtable`1/System.Xml.Linq.ExtractKeyDelegate<TValue> extractKey
      typename ::System::Xml::Linq::XHashtable_1<TValue>::ExtractKeyDelegate*& dyn_extractKey() {
        static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Linq::XHashtable_1::XHashtableState::dyn_extractKey");
        auto ___internal__instance = this;
        static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "extractKey"))->offset;
        return *reinterpret_cast<typename ::System::Xml::Linq::XHashtable_1<TValue>::ExtractKeyDelegate**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
      }
      // public System.Void .ctor(System.Xml.Linq.XHashtable`1/System.Xml.Linq.ExtractKeyDelegate<TValue> extractKey, System.Int32 capacity)
      // Offset: 0xFFFFFFFF
      template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
      static typename XHashtable_1<TValue>::XHashtableState* New_ctor(typename ::System::Xml::Linq::XHashtable_1<TValue>::ExtractKeyDelegate* extractKey, int capacity) {
        static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Linq::XHashtable_1::XHashtableState::.ctor");
        return THROW_UNLESS((::il2cpp_utils::New<typename XHashtable_1<TValue>::XHashtableState*, creationType>(extractKey, capacity)));
      }
      // public System.Xml.Linq.XHashtable`1/System.Xml.Linq.XHashtableState<TValue> Resize()
      // Offset: 0xFFFFFFFF
      typename ::System::Xml::Linq::XHashtable_1<TValue>::XHashtableState* Resize() {
        static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Linq::XHashtable_1::XHashtableState::Resize");
        static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Resize", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
        return ::il2cpp_utils::RunMethodRethrow<typename ::System::Xml::Linq::XHashtable_1<TValue>::XHashtableState*, false>(this, ___internal__method);
      }
      // public System.Boolean TryGetValue(System.String key, System.Int32 index, System.Int32 count, out TValue value)
      // Offset: 0xFFFFFFFF
      bool TryGetValue(::StringW key, int index, int count, ByRef<TValue> value) {
        static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Linq::XHashtable_1::XHashtableState::TryGetValue");
        static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "TryGetValue", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(key), ::il2cpp_utils::ExtractType(index), ::il2cpp_utils::ExtractType(count), ::il2cpp_utils::ExtractIndependentType<TValue&>()})));
        return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method, key, index, count, byref(value));
      }
      // public System.Boolean TryAdd(TValue value, out TValue newValue)
      // Offset: 0xFFFFFFFF
      bool TryAdd(TValue value, ByRef<TValue> newValue) {
        static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Linq::XHashtable_1::XHashtableState::TryAdd");
        static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "TryAdd", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(value), ::il2cpp_utils::ExtractIndependentType<TValue&>()})));
        return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method, value, byref(newValue));
      }
      // private System.Boolean FindEntry(System.Int32 hashCode, System.String key, System.Int32 index, System.Int32 count, ref System.Int32 entryIndex)
      // Offset: 0xFFFFFFFF
      bool FindEntry(int hashCode, ::StringW key, int index, int count, ByRef<int> entryIndex) {
        static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Linq::XHashtable_1::XHashtableState::FindEntry");
        static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "FindEntry", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(hashCode), ::il2cpp_utils::ExtractType(key), ::il2cpp_utils::ExtractType(index), ::il2cpp_utils::ExtractType(count), ::il2cpp_utils::ExtractType(entryIndex)})));
        return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method, hashCode, key, index, count, byref(entryIndex));
      }
      // static private System.Int32 ComputeHashCode(System.String key, System.Int32 index, System.Int32 count)
      // Offset: 0xFFFFFFFF
      static int ComputeHashCode(::StringW key, int index, int count) {
        static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Linq::XHashtable_1::XHashtableState::ComputeHashCode");
        static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename XHashtable_1<TValue>::XHashtableState*>::get(), "ComputeHashCode", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(key), ::il2cpp_utils::ExtractType(index), ::il2cpp_utils::ExtractType(count)})));
        return ::il2cpp_utils::RunMethodRethrow<int, false>(static_cast<Il2CppObject*>(nullptr), ___internal__method, key, index, count);
      }
    }; // System.Xml.Linq.XHashtable`1/System.Xml.Linq.XHashtableState
    // Could not write size check! Type: System.Xml.Linq.XHashtable`1/System.Xml.Linq.XHashtableState is generic, or has no fields that are valid for size checks!
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private System.Xml.Linq.XHashtable`1/System.Xml.Linq.XHashtableState<TValue> state
    // Size: 0x8
    // Offset: 0x0
    typename ::System::Xml::Linq::XHashtable_1<TValue>::XHashtableState* state;
    // Field size check
    static_assert(sizeof(typename ::System::Xml::Linq::XHashtable_1<TValue>::XHashtableState*) == 0x8);
    public:
    // Creating conversion operator: operator typename ::System::Xml::Linq::XHashtable_1<TValue>::XHashtableState*
    constexpr operator typename ::System::Xml::Linq::XHashtable_1<TValue>::XHashtableState*() const noexcept {
      return state;
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Xml.Linq.XHashtable`1/System.Xml.Linq.XHashtableState<TValue> state
    typename ::System::Xml::Linq::XHashtable_1<TValue>::XHashtableState*& dyn_state() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Linq::XHashtable_1::dyn_state");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "state"))->offset;
      return *reinterpret_cast<typename ::System::Xml::Linq::XHashtable_1<TValue>::XHashtableState**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // public System.Void .ctor(System.Xml.Linq.XHashtable`1/System.Xml.Linq.ExtractKeyDelegate<TValue> extractKey, System.Int32 capacity)
    // Offset: 0xFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XHashtable_1<TValue>* New_ctor(typename ::System::Xml::Linq::XHashtable_1<TValue>::ExtractKeyDelegate* extractKey, int capacity) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Linq::XHashtable_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XHashtable_1<TValue>*, creationType>(extractKey, capacity)));
    }
    // public System.Boolean TryGetValue(System.String key, System.Int32 index, System.Int32 count, out TValue value)
    // Offset: 0xFFFFFFFF
    bool TryGetValue(::StringW key, int index, int count, ByRef<TValue> value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Linq::XHashtable_1::TryGetValue");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "TryGetValue", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(key), ::il2cpp_utils::ExtractType(index), ::il2cpp_utils::ExtractType(count), ::il2cpp_utils::ExtractIndependentType<TValue&>()})));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method, key, index, count, byref(value));
    }
    // public TValue Add(TValue value)
    // Offset: 0xFFFFFFFF
    TValue Add(TValue value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Linq::XHashtable_1::Add");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Add", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(value)})));
      return ::il2cpp_utils::RunMethodRethrow<TValue, false>(this, ___internal__method, value);
    }
  }; // System.Xml.Linq.XHashtable`1
  // Could not write size check! Type: System.Xml.Linq.XHashtable`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"