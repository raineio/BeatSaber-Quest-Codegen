// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Including type: System.Collections.Generic.IEnumerable`1
#include "System/Collections/Generic/IEnumerable_1.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Skipping declaration: Entry because it is already included!
  // Skipping declaration: <Enumerate>d__12 because it is already included!
  // Forward declaring type: OrderedSet`1<T>
  template<typename T>
  class OrderedSet_1;
}
// Forward declaring namespace: MasterServer
namespace MasterServer {
  // Forward declaring type: ITimeProvider
  class ITimeProvider;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Skipping declaration: IEnumerator because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: ExpiringDictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class ExpiringDictionary_2;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(GlobalNamespace::ExpiringDictionary_2, "", "ExpiringDictionary`2");
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: ExpiringDictionary`2
  // [TokenAttribute] Offset: FFFFFFFF
  // [DefaultMemberAttribute] Offset: ED9AC8
  template<typename TKey, typename TValue>
  class ExpiringDictionary_2 : public ::Il2CppObject/*, public System::IDisposable, public System::Collections::Generic::IEnumerable_1<TValue>*/ {
    public:
    // Nested type: GlobalNamespace::ExpiringDictionary_2::Entry<TKey, TValue>
    class Entry;
    // Nested type: GlobalNamespace::ExpiringDictionary_2::$Enumerate$d__12<TKey, TValue>
    class $Enumerate$d__12;
    // WARNING Size may be invalid!
    // Autogenerated type: ExpiringDictionary`2/Entry
    // [TokenAttribute] Offset: FFFFFFFF
    class Entry : public ::il2cpp_utils::il2cpp_type_check::NestedType, public ::Il2CppObject/*, public System::IDisposable*/ {
      public:
      using declaring_type = ExpiringDictionary_2<TKey, TValue>*;
      static constexpr std::string_view NESTED_NAME = "Entry";
      static constexpr bool IS_VALUE_TYPE = false;
      #ifdef USE_CODEGEN_FIELDS
      public:
      #else
      protected:
      #endif
      // public TKey key
      // Size: 0xFFFFFFFF
      // Offset: 0x0
      TKey key;
      // public TValue value
      // Size: 0xFFFFFFFF
      // Offset: 0x0
      TValue value;
      // public System.Int64 expireTime
      // Size: 0x8
      // Offset: 0x0
      int64_t expireTime;
      // Field size check
      static_assert(sizeof(int64_t) == 0x8);
      public:
      // Creating interface conversion operator: operator System::IDisposable
      operator System::IDisposable() noexcept {
        return *reinterpret_cast<System::IDisposable*>(this);
      }
      // Autogenerated instance field getter
      // Get instance field: public TKey key
      TKey& dyn_key() {
        static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ExpiringDictionary_2::Entry::dyn_key");
        auto ___internal__instance = this;
        static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "key"))->offset;
        return *reinterpret_cast<TKey*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
      }
      // Autogenerated instance field getter
      // Get instance field: public TValue value
      TValue& dyn_value() {
        static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ExpiringDictionary_2::Entry::dyn_value");
        auto ___internal__instance = this;
        static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "value"))->offset;
        return *reinterpret_cast<TValue*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
      }
      // Autogenerated instance field getter
      // Get instance field: public System.Int64 expireTime
      int64_t& dyn_expireTime() {
        static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ExpiringDictionary_2::Entry::dyn_expireTime");
        auto ___internal__instance = this;
        static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "expireTime"))->offset;
        return *reinterpret_cast<int64_t*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
      }
      // public System.Void Dispose()
      // Offset: 0xFFFFFFFF
      void Dispose() {
        static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ExpiringDictionary_2::Entry::Dispose");
        auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Dispose", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
        ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
      }
      // public System.Void .ctor()
      // Offset: 0xFFFFFFFF
      // Implemented from: System.Object
      // Base method: System.Void Object::.ctor()
      template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
      static typename ExpiringDictionary_2<TKey, TValue>::Entry* New_ctor() {
        static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ExpiringDictionary_2::Entry::.ctor");
        return THROW_UNLESS((::il2cpp_utils::New<typename ExpiringDictionary_2<TKey, TValue>::Entry*, creationType>()));
      }
    }; // ExpiringDictionary`2/Entry
    // Could not write size check! Type: ExpiringDictionary`2/Entry is generic, or has no fields that are valid for size checks!
    // WARNING Size may be invalid!
    // Autogenerated type: ExpiringDictionary`2/<Enumerate>d__12
    // [TokenAttribute] Offset: FFFFFFFF
    // [CompilerGeneratedAttribute] Offset: FFFFFFFF
    class $Enumerate$d__12 : public ::il2cpp_utils::il2cpp_type_check::NestedType, public ::Il2CppObject/*, public System::Collections::Generic::IEnumerator_1<TValue>*/ {
      public:
      using declaring_type = ExpiringDictionary_2<TKey, TValue>*;
      static constexpr std::string_view NESTED_NAME = "<Enumerate>d__12";
      static constexpr bool IS_VALUE_TYPE = false;
      #ifdef USE_CODEGEN_FIELDS
      public:
      #else
      protected:
      #endif
      // private System.Int32 <>1__state
      // Size: 0x4
      // Offset: 0x0
      int $$1__state;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // private TValue <>2__current
      // Size: 0xFFFFFFFF
      // Offset: 0x0
      TValue $$2__current;
      // public ExpiringDictionary`2<TKey,TValue> <>4__this
      // Size: 0x8
      // Offset: 0x0
      GlobalNamespace::ExpiringDictionary_2<TKey, TValue>* $$4__this;
      // Field size check
      static_assert(sizeof(GlobalNamespace::ExpiringDictionary_2<TKey, TValue>*) == 0x8);
      // private System.Collections.Generic.IEnumerator`1<ExpiringDictionary`2/Entry<TKey,TValue>> <>7__wrap1
      // Size: 0x8
      // Offset: 0x0
      System::Collections::Generic::IEnumerator_1<typename GlobalNamespace::ExpiringDictionary_2<TKey, TValue>::Entry*>* $$7__wrap1;
      // Field size check
      static_assert(sizeof(System::Collections::Generic::IEnumerator_1<typename GlobalNamespace::ExpiringDictionary_2<TKey, TValue>::Entry*>*) == 0x8);
      public:
      // Creating interface conversion operator: operator System::Collections::Generic::IEnumerator_1<TValue>
      operator System::Collections::Generic::IEnumerator_1<TValue>() noexcept {
        return *reinterpret_cast<System::Collections::Generic::IEnumerator_1<TValue>*>(this);
      }
      // Autogenerated instance field getter
      // Get instance field: private System.Int32 <>1__state
      int& dyn_$$1__state() {
        static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ExpiringDictionary_2::$Enumerate$d__12::dyn_$$1__state");
        auto ___internal__instance = this;
        static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "<>1__state"))->offset;
        return *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
      }
      // Autogenerated instance field getter
      // Get instance field: private TValue <>2__current
      TValue& dyn_$$2__current() {
        static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ExpiringDictionary_2::$Enumerate$d__12::dyn_$$2__current");
        auto ___internal__instance = this;
        static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "<>2__current"))->offset;
        return *reinterpret_cast<TValue*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
      }
      // Autogenerated instance field getter
      // Get instance field: public ExpiringDictionary`2<TKey,TValue> <>4__this
      GlobalNamespace::ExpiringDictionary_2<TKey, TValue>*& dyn_$$4__this() {
        static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ExpiringDictionary_2::$Enumerate$d__12::dyn_$$4__this");
        auto ___internal__instance = this;
        static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "<>4__this"))->offset;
        return *reinterpret_cast<GlobalNamespace::ExpiringDictionary_2<TKey, TValue>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
      }
      // Autogenerated instance field getter
      // Get instance field: private System.Collections.Generic.IEnumerator`1<ExpiringDictionary`2/Entry<TKey,TValue>> <>7__wrap1
      System::Collections::Generic::IEnumerator_1<typename GlobalNamespace::ExpiringDictionary_2<TKey, TValue>::Entry*>*& dyn_$$7__wrap1() {
        static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ExpiringDictionary_2::$Enumerate$d__12::dyn_$$7__wrap1");
        auto ___internal__instance = this;
        static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "<>7__wrap1"))->offset;
        return *reinterpret_cast<System::Collections::Generic::IEnumerator_1<typename GlobalNamespace::ExpiringDictionary_2<TKey, TValue>::Entry*>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
      }
      // private TValue System.Collections.Generic.IEnumerator<TValue>.get_Current()
      // Offset: 0xFFFFFFFF
      TValue System_Collections_Generic_IEnumerator$TValue$_get_Current() {
        static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ExpiringDictionary_2::$Enumerate$d__12::System.Collections.Generic.IEnumerator<TValue>.get_Current");
        auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "System.Collections.Generic.IEnumerator<TValue>.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
        return ::il2cpp_utils::RunMethodThrow<TValue, false>(this, ___internal__method);
      }
      // private System.Object System.Collections.IEnumerator.get_Current()
      // Offset: 0xFFFFFFFF
      ::Il2CppObject* System_Collections_IEnumerator_get_Current() {
        static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ExpiringDictionary_2::$Enumerate$d__12::System.Collections.IEnumerator.get_Current");
        auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
        return ::il2cpp_utils::RunMethodThrow<::Il2CppObject*, false>(this, ___internal__method);
      }
      // public System.Void .ctor(System.Int32 <>1__state)
      // Offset: 0xFFFFFFFF
      template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
      static typename ExpiringDictionary_2<TKey, TValue>::$Enumerate$d__12* New_ctor(int $$1__state) {
        static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ExpiringDictionary_2::$Enumerate$d__12::.ctor");
        return THROW_UNLESS((::il2cpp_utils::New<typename ExpiringDictionary_2<TKey, TValue>::$Enumerate$d__12*, creationType>($$1__state)));
      }
      // private System.Void System.IDisposable.Dispose()
      // Offset: 0xFFFFFFFF
      void System_IDisposable_Dispose() {
        static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ExpiringDictionary_2::$Enumerate$d__12::System.IDisposable.Dispose");
        auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "System.IDisposable.Dispose", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
        ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
      }
      // private System.Boolean MoveNext()
      // Offset: 0xFFFFFFFF
      bool MoveNext() {
        static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ExpiringDictionary_2::$Enumerate$d__12::MoveNext");
        auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
        return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method);
      }
      // private System.Void <>m__Finally1()
      // Offset: 0xFFFFFFFF
      void $$m__Finally1() {
        static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ExpiringDictionary_2::$Enumerate$d__12::<>m__Finally1");
        static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "<>m__Finally1", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
        ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
      }
      // private System.Void System.Collections.IEnumerator.Reset()
      // Offset: 0xFFFFFFFF
      void System_Collections_IEnumerator_Reset() {
        static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ExpiringDictionary_2::$Enumerate$d__12::System.Collections.IEnumerator.Reset");
        auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
        ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
      }
    }; // ExpiringDictionary`2/<Enumerate>d__12
    // Could not write size check! Type: ExpiringDictionary`2/<Enumerate>d__12 is generic, or has no fields that are valid for size checks!
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    protected:
    #endif
    // private readonly MasterServer.ITimeProvider _timeProvider
    // Size: 0x8
    // Offset: 0x0
    MasterServer::ITimeProvider* timeProvider;
    // Field size check
    static_assert(sizeof(MasterServer::ITimeProvider*) == 0x8);
    // private readonly System.Int64 _expirationLengthMs
    // Size: 0x8
    // Offset: 0x0
    int64_t expirationLengthMs;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // private readonly OrderedSet`1<ExpiringDictionary`2/Entry<TKey,TValue>> _expirationQueue
    // Size: 0x8
    // Offset: 0x0
    GlobalNamespace::OrderedSet_1<typename GlobalNamespace::ExpiringDictionary_2<TKey, TValue>::Entry*>* expirationQueue;
    // Field size check
    static_assert(sizeof(GlobalNamespace::OrderedSet_1<typename GlobalNamespace::ExpiringDictionary_2<TKey, TValue>::Entry*>*) == 0x8);
    // private readonly System.Collections.Generic.Dictionary`2<TKey,ExpiringDictionary`2/Entry<TKey,TValue>> _entryLookup
    // Size: 0x8
    // Offset: 0x0
    System::Collections::Generic::Dictionary_2<TKey, typename GlobalNamespace::ExpiringDictionary_2<TKey, TValue>::Entry*>* entryLookup;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::Dictionary_2<TKey, typename GlobalNamespace::ExpiringDictionary_2<TKey, TValue>::Entry*>*) == 0x8);
    // private readonly System.Collections.Generic.List`1<ExpiringDictionary`2/Entry<TKey,TValue>> _reusableEntries
    // Size: 0x8
    // Offset: 0x0
    System::Collections::Generic::List_1<typename GlobalNamespace::ExpiringDictionary_2<TKey, TValue>::Entry*>* reusableEntries;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<typename GlobalNamespace::ExpiringDictionary_2<TKey, TValue>::Entry*>*) == 0x8);
    public:
    // Creating interface conversion operator: operator System::IDisposable
    operator System::IDisposable() noexcept {
      return *reinterpret_cast<System::IDisposable*>(this);
    }
    // Creating interface conversion operator: operator System::Collections::Generic::IEnumerable_1<TValue>
    operator System::Collections::Generic::IEnumerable_1<TValue>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IEnumerable_1<TValue>*>(this);
    }
    // Autogenerated static field getter
    // Get static field: static private System.Int32 kMaxReusableEntries
    static int _get_kMaxReusableEntries() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ExpiringDictionary_2::_get_kMaxReusableEntries");
      return THROW_UNLESS((il2cpp_utils::GetFieldValue<int>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ExpiringDictionary_2<TKey, TValue>*>::get(), "kMaxReusableEntries")));
    }
    // Autogenerated static field setter
    // Set static field: static private System.Int32 kMaxReusableEntries
    static void _set_kMaxReusableEntries(int value) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ExpiringDictionary_2::_set_kMaxReusableEntries");
      THROW_UNLESS((il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ExpiringDictionary_2<TKey, TValue>*>::get(), "kMaxReusableEntries", value)));
    }
    // Autogenerated instance field getter
    // Get instance field: private readonly MasterServer.ITimeProvider _timeProvider
    MasterServer::ITimeProvider*& dyn__timeProvider() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ExpiringDictionary_2::dyn__timeProvider");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_timeProvider"))->offset;
      return *reinterpret_cast<MasterServer::ITimeProvider**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private readonly System.Int64 _expirationLengthMs
    int64_t& dyn__expirationLengthMs() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ExpiringDictionary_2::dyn__expirationLengthMs");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_expirationLengthMs"))->offset;
      return *reinterpret_cast<int64_t*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private readonly OrderedSet`1<ExpiringDictionary`2/Entry<TKey,TValue>> _expirationQueue
    GlobalNamespace::OrderedSet_1<typename GlobalNamespace::ExpiringDictionary_2<TKey, TValue>::Entry*>*& dyn__expirationQueue() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ExpiringDictionary_2::dyn__expirationQueue");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_expirationQueue"))->offset;
      return *reinterpret_cast<GlobalNamespace::OrderedSet_1<typename GlobalNamespace::ExpiringDictionary_2<TKey, TValue>::Entry*>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private readonly System.Collections.Generic.Dictionary`2<TKey,ExpiringDictionary`2/Entry<TKey,TValue>> _entryLookup
    System::Collections::Generic::Dictionary_2<TKey, typename GlobalNamespace::ExpiringDictionary_2<TKey, TValue>::Entry*>*& dyn__entryLookup() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ExpiringDictionary_2::dyn__entryLookup");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_entryLookup"))->offset;
      return *reinterpret_cast<System::Collections::Generic::Dictionary_2<TKey, typename GlobalNamespace::ExpiringDictionary_2<TKey, TValue>::Entry*>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private readonly System.Collections.Generic.List`1<ExpiringDictionary`2/Entry<TKey,TValue>> _reusableEntries
    System::Collections::Generic::List_1<typename GlobalNamespace::ExpiringDictionary_2<TKey, TValue>::Entry*>*& dyn__reusableEntries() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ExpiringDictionary_2::dyn__reusableEntries");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_reusableEntries"))->offset;
      return *reinterpret_cast<System::Collections::Generic::List_1<typename GlobalNamespace::ExpiringDictionary_2<TKey, TValue>::Entry*>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // public TValue get_Item(TKey key)
    // Offset: 0xFFFFFFFF
    TValue get_Item(TKey key) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ExpiringDictionary_2::get_Item");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_Item", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(key)})));
      return ::il2cpp_utils::RunMethodThrow<TValue, false>(this, ___internal__method, key);
    }
    // public System.Void set_Item(TKey key, TValue value)
    // Offset: 0xFFFFFFFF
    void set_Item(TKey key, TValue value) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ExpiringDictionary_2::set_Item");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "set_Item", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(key), ::il2cpp_utils::ExtractType(value)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, key, value);
    }
    // public System.Void .ctor(MasterServer.ITimeProvider timeProvider, System.Int64 expirationLengthMs)
    // Offset: 0xFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ExpiringDictionary_2<TKey, TValue>* New_ctor(MasterServer::ITimeProvider* timeProvider, int64_t expirationLengthMs) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ExpiringDictionary_2::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ExpiringDictionary_2<TKey, TValue>*, creationType>(timeProvider, expirationLengthMs)));
    }
    // static private System.Int32 CompareEntries(ExpiringDictionary`2/Entry<TKey,TValue> a, ExpiringDictionary`2/Entry<TKey,TValue> b)
    // Offset: 0xFFFFFFFF
    static int CompareEntries(typename GlobalNamespace::ExpiringDictionary_2<TKey, TValue>::Entry* a, typename GlobalNamespace::ExpiringDictionary_2<TKey, TValue>::Entry* b) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ExpiringDictionary_2::CompareEntries");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ExpiringDictionary_2<TKey, TValue>*>::get(), "CompareEntries", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(a), ::il2cpp_utils::ExtractType(b)})));
      return ::il2cpp_utils::RunMethodThrow<int, false>(static_cast<Il2CppObject*>(nullptr), ___internal__method, a, b);
    }
    // private System.Void RemoveExpiredEntries()
    // Offset: 0xFFFFFFFF
    void RemoveExpiredEntries() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ExpiringDictionary_2::RemoveExpiredEntries");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "RemoveExpiredEntries", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
    }
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0xFFFFFFFF
    System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ExpiringDictionary_2::System.Collections.IEnumerable.GetEnumerator");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodThrow<System::Collections::IEnumerator*, false>(this, ___internal__method);
    }
    // private System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
    // Offset: 0xFFFFFFFF
    System::Collections::Generic::IEnumerator_1<TValue>* System_Collections_Generic_IEnumerable$TValue$_GetEnumerator() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ExpiringDictionary_2::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "System.Collections.Generic.IEnumerable<TValue>.GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodThrow<System::Collections::Generic::IEnumerator_1<TValue>*, false>(this, ___internal__method);
    }
    // private System.Collections.Generic.IEnumerator`1<TValue> Enumerate()
    // Offset: 0xFFFFFFFF
    System::Collections::Generic::IEnumerator_1<TValue>* Enumerate() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ExpiringDictionary_2::Enumerate");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Enumerate", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodThrow<System::Collections::Generic::IEnumerator_1<TValue>*, false>(this, ___internal__method);
    }
    // public System.Boolean ContainsKey(TKey key)
    // Offset: 0xFFFFFFFF
    bool ContainsKey(TKey key) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ExpiringDictionary_2::ContainsKey");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "ContainsKey", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(key)})));
      return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method, key);
    }
    // public System.Boolean TryGetValue(TKey key, out TValue value)
    // Offset: 0xFFFFFFFF
    bool TryGetValue(TKey key, ByRef<TValue> value) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ExpiringDictionary_2::TryGetValue");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "TryGetValue", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(key), ::il2cpp_utils::ExtractIndependentType<TValue&>()})));
      return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method, key, byref(value));
    }
    // public System.Boolean TryGetValueAndResetExpiration(TKey key, out TValue value)
    // Offset: 0xFFFFFFFF
    bool TryGetValueAndResetExpiration(TKey key, ByRef<TValue> value) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ExpiringDictionary_2::TryGetValueAndResetExpiration");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "TryGetValueAndResetExpiration", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(key), ::il2cpp_utils::ExtractIndependentType<TValue&>()})));
      return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method, key, byref(value));
    }
    // public System.Boolean Remove(TKey key)
    // Offset: 0xFFFFFFFF
    bool Remove(TKey key) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ExpiringDictionary_2::Remove");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Remove", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(key)})));
      return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method, key);
    }
    // public System.Void ResetExpiration(TKey key)
    // Offset: 0xFFFFFFFF
    void ResetExpiration(TKey key) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ExpiringDictionary_2::ResetExpiration");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "ResetExpiration", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(key)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, key);
    }
    // public System.Boolean Add(TKey key, TValue value)
    // Offset: 0xFFFFFFFF
    bool Add(TKey key, TValue value) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ExpiringDictionary_2::Add");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Add", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(key), ::il2cpp_utils::ExtractType(value)})));
      return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method, key, value);
    }
    // private TValue Get(TKey key)
    // Offset: 0xFFFFFFFF
    TValue Get(TKey key) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ExpiringDictionary_2::Get");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Get", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(key)})));
      return ::il2cpp_utils::RunMethodThrow<TValue, false>(this, ___internal__method, key);
    }
    // private System.Void Set(TKey key, TValue value)
    // Offset: 0xFFFFFFFF
    void Set(TKey key, TValue value) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ExpiringDictionary_2::Set");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Set", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(key), ::il2cpp_utils::ExtractType(value)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, key, value);
    }
    // public System.Void PollUpdate()
    // Offset: 0xFFFFFFFF
    void PollUpdate() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ExpiringDictionary_2::PollUpdate");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "PollUpdate", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
    }
    // public System.Void Dispose()
    // Offset: 0xFFFFFFFF
    void Dispose() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ExpiringDictionary_2::Dispose");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Dispose", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
    }
    // private ExpiringDictionary`2/Entry<TKey,TValue> GetEntry(TKey key, TValue value)
    // Offset: 0xFFFFFFFF
    typename GlobalNamespace::ExpiringDictionary_2<TKey, TValue>::Entry* GetEntry(TKey key, TValue value) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ExpiringDictionary_2::GetEntry");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "GetEntry", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(key), ::il2cpp_utils::ExtractType(value)})));
      return ::il2cpp_utils::RunMethodThrow<typename GlobalNamespace::ExpiringDictionary_2<TKey, TValue>::Entry*, false>(this, ___internal__method, key, value);
    }
    // private System.Void ReleaseEntry(ExpiringDictionary`2/Entry<TKey,TValue> entry)
    // Offset: 0xFFFFFFFF
    void ReleaseEntry(typename GlobalNamespace::ExpiringDictionary_2<TKey, TValue>::Entry* entry) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ExpiringDictionary_2::ReleaseEntry");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "ReleaseEntry", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(entry)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, entry);
    }
  }; // ExpiringDictionary`2
  // Could not write size check! Type: ExpiringDictionary`2 is generic, or has no fields that are valid for size checks!
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
