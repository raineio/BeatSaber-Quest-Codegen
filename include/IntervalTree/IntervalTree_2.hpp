// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: IntervalTree.IIntervalTree`2
#include "IntervalTree/IIntervalTree_2.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: IntervalTree
namespace IntervalTree {
  // Skipping declaration: <>c because it is already included!
  // Skipping declaration: <>c__DisplayClass19_0 because it is already included!
  // Skipping declaration: <>c__DisplayClass20_0 because it is already included!
  // Skipping declaration: <>c__DisplayClass23_0 because it is already included!
  // Skipping declaration: <>c__DisplayClass24_0 because it is already included!
  // Forward declaring type: IntervalTreeNode`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class IntervalTreeNode_2;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: IComparer`1<T>
  template<typename T>
  class IComparer_1;
  // Skipping declaration: IEnumerable`1 because it is already included!
  // Forward declaring type: IEnumerator`1<T>
  template<typename T>
  class IEnumerator_1;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Completed forward declares
// Type namespace: IntervalTree
namespace IntervalTree {
  // Forward declaring type: IntervalTree`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class IntervalTree_2;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::IntervalTree::IntervalTree_2, "IntervalTree", "IntervalTree`2");
// Type namespace: IntervalTree
namespace IntervalTree {
  // WARNING Size may be invalid!
  // Autogenerated type: IntervalTree.IntervalTree`2
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename TKey, typename TValue>
  class IntervalTree_2 : public ::Il2CppObject/*, public ::IntervalTree::IIntervalTree_2<TKey, TValue>*/ {
    public:
    // Nested type: ::IntervalTree::IntervalTree_2::$$c<TKey, TValue>
    class $$c;
    // Nested type: ::IntervalTree::IntervalTree_2::$$c__DisplayClass19_0<TKey, TValue>
    class $$c__DisplayClass19_0;
    // Nested type: ::IntervalTree::IntervalTree_2::$$c__DisplayClass20_0<TKey, TValue>
    class $$c__DisplayClass20_0;
    // Nested type: ::IntervalTree::IntervalTree_2::$$c__DisplayClass23_0<TKey, TValue>
    class $$c__DisplayClass23_0;
    // Nested type: ::IntervalTree::IntervalTree_2::$$c__DisplayClass24_0<TKey, TValue>
    class $$c__DisplayClass24_0;
    // WARNING Size may be invalid!
    // Autogenerated type: IntervalTree.IntervalTree`2/IntervalTree.<>c
    // [TokenAttribute] Offset: FFFFFFFF
    // [CompilerGeneratedAttribute] Offset: FFFFFFFF
    class $$c : public ::il2cpp_utils::il2cpp_type_check::NestedType, public ::Il2CppObject {
      public:
      using declaring_type = IntervalTree_2<TKey, TValue>*;
      static constexpr std::string_view NESTED_NAME = "<>c";
      static constexpr bool IS_VALUE_TYPE = false;
      // Autogenerated static field getter
      // Get static field: static public readonly IntervalTree.IntervalTree`2/IntervalTree.<>c<TKey,TValue> <>9
      static typename ::IntervalTree::IntervalTree_2<TKey, TValue>::$$c* _get_$$9() {
        static auto ___internal__logger = ::Logger::get().WithContext("::IntervalTree::IntervalTree_2::$$c::_get_$$9");
        return THROW_UNLESS((il2cpp_utils::GetFieldValue<typename ::IntervalTree::IntervalTree_2<TKey, TValue>::$$c*>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename IntervalTree_2<TKey, TValue>::$$c*>::get(), "<>9")));
      }
      // Autogenerated static field setter
      // Set static field: static public readonly IntervalTree.IntervalTree`2/IntervalTree.<>c<TKey,TValue> <>9
      static void _set_$$9(typename ::IntervalTree::IntervalTree_2<TKey, TValue>::$$c* value) {
        static auto ___internal__logger = ::Logger::get().WithContext("::IntervalTree::IntervalTree_2::$$c::_set_$$9");
        THROW_UNLESS((il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename IntervalTree_2<TKey, TValue>::$$c*>::get(), "<>9", value)));
      }
      // Autogenerated static field getter
      // Get static field: static public System.Func`2<IntervalTree.RangeValuePair`2<TKey,TValue>,TValue> <>9__10_0
      static ::System::Func_2<::IntervalTree::RangeValuePair_2<TKey, TValue>, TValue>* _get_$$9__10_0() {
        static auto ___internal__logger = ::Logger::get().WithContext("::IntervalTree::IntervalTree_2::$$c::_get_$$9__10_0");
        return THROW_UNLESS((il2cpp_utils::GetFieldValue<::System::Func_2<::IntervalTree::RangeValuePair_2<TKey, TValue>, TValue>*>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename IntervalTree_2<TKey, TValue>::$$c*>::get(), "<>9__10_0")));
      }
      // Autogenerated static field setter
      // Set static field: static public System.Func`2<IntervalTree.RangeValuePair`2<TKey,TValue>,TValue> <>9__10_0
      static void _set_$$9__10_0(::System::Func_2<::IntervalTree::RangeValuePair_2<TKey, TValue>, TValue>* value) {
        static auto ___internal__logger = ::Logger::get().WithContext("::IntervalTree::IntervalTree_2::$$c::_set_$$9__10_0");
        THROW_UNLESS((il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename IntervalTree_2<TKey, TValue>::$$c*>::get(), "<>9__10_0", value)));
      }
      // static private System.Void .cctor()
      // Offset: 0xFFFFFFFFFFFFFFFF
      static void _cctor() {
        static auto ___internal__logger = ::Logger::get().WithContext("::IntervalTree::IntervalTree_2::$$c::.cctor");
        static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename IntervalTree_2<TKey, TValue>::$$c*>::get(), ".cctor", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
        ::il2cpp_utils::RunMethodRethrow<void, false>(static_cast<Il2CppObject*>(nullptr), ___internal__method);
      }
      // public System.Void .ctor()
      // Offset: 0xFFFFFFFFFFFFFFFF
      template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
      static typename IntervalTree_2<TKey, TValue>::$$c* New_ctor() {
        static auto ___internal__logger = ::Logger::get().WithContext("::IntervalTree::IntervalTree_2::$$c::.ctor");
        return THROW_UNLESS((::il2cpp_utils::New<typename IntervalTree_2<TKey, TValue>::$$c*, creationType>()));
      }
      // TValue <get_Values>b__10_0(IntervalTree.RangeValuePair`2<TKey,TValue> i)
      // Offset: 0xFFFFFFFFFFFFFFFF
      TValue $get_Values$b__10_0(::IntervalTree::RangeValuePair_2<TKey, TValue> i) {
        static auto ___internal__logger = ::Logger::get().WithContext("::IntervalTree::IntervalTree_2::$$c::<get_Values>b__10_0");
        static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "<get_Values>b__10_0", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(i)})));
        return ::il2cpp_utils::RunMethodRethrow<TValue, false>(this, ___internal__method, i);
      }
    }; // IntervalTree.IntervalTree`2/IntervalTree.<>c
    // Could not write size check! Type: IntervalTree.IntervalTree`2/IntervalTree.<>c is generic, or has no fields that are valid for size checks!
    // WARNING Size may be invalid!
    // Autogenerated type: IntervalTree.IntervalTree`2/IntervalTree.<>c__DisplayClass19_0
    // [TokenAttribute] Offset: FFFFFFFF
    // [CompilerGeneratedAttribute] Offset: FFFFFFFF
    class $$c__DisplayClass19_0 : public ::il2cpp_utils::il2cpp_type_check::NestedType, public ::Il2CppObject {
      public:
      using declaring_type = IntervalTree_2<TKey, TValue>*;
      static constexpr std::string_view NESTED_NAME = "<>c__DisplayClass19_0";
      static constexpr bool IS_VALUE_TYPE = false;
      public:
      // public TValue value
      // Size: 0xFFFFFFFF
      // Offset: 0x0
      TValue value;
      public:
      // Autogenerated instance field getter
      // Get instance field: public TValue value
      [[deprecated("Use field access instead!")]] TValue& dyn_value() {
        static auto ___internal__logger = ::Logger::get().WithContext("::IntervalTree::IntervalTree_2::$$c__DisplayClass19_0::dyn_value");
        auto ___internal__instance = this;
        static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "value"))->offset;
        return *reinterpret_cast<TValue*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
      }
      // public System.Void .ctor()
      // Offset: 0xFFFFFFFFFFFFFFFF
      template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
      static typename IntervalTree_2<TKey, TValue>::$$c__DisplayClass19_0* New_ctor() {
        static auto ___internal__logger = ::Logger::get().WithContext("::IntervalTree::IntervalTree_2::$$c__DisplayClass19_0::.ctor");
        return THROW_UNLESS((::il2cpp_utils::New<typename IntervalTree_2<TKey, TValue>::$$c__DisplayClass19_0*, creationType>()));
      }
      // System.Boolean <Remove>b__0(IntervalTree.RangeValuePair`2<TKey,TValue> l)
      // Offset: 0xFFFFFFFFFFFFFFFF
      bool $Remove$b__0(::IntervalTree::RangeValuePair_2<TKey, TValue> l) {
        static auto ___internal__logger = ::Logger::get().WithContext("::IntervalTree::IntervalTree_2::$$c__DisplayClass19_0::<Remove>b__0");
        static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "<Remove>b__0", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(l)})));
        return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method, l);
      }
    }; // IntervalTree.IntervalTree`2/IntervalTree.<>c__DisplayClass19_0
    // Could not write size check! Type: IntervalTree.IntervalTree`2/IntervalTree.<>c__DisplayClass19_0 is generic, or has no fields that are valid for size checks!
    // WARNING Size may be invalid!
    // Autogenerated type: IntervalTree.IntervalTree`2/IntervalTree.<>c__DisplayClass20_0
    // [TokenAttribute] Offset: FFFFFFFF
    // [CompilerGeneratedAttribute] Offset: FFFFFFFF
    class $$c__DisplayClass20_0 : public ::il2cpp_utils::il2cpp_type_check::NestedType, public ::Il2CppObject {
      public:
      using declaring_type = IntervalTree_2<TKey, TValue>*;
      static constexpr std::string_view NESTED_NAME = "<>c__DisplayClass20_0";
      static constexpr bool IS_VALUE_TYPE = false;
      public:
      // public System.Collections.Generic.IEnumerable`1<TValue> items
      // Size: 0x8
      // Offset: 0x0
      ::System::Collections::Generic::IEnumerable_1<TValue>* items;
      // Field size check
      static_assert(sizeof(::System::Collections::Generic::IEnumerable_1<TValue>*) == 0x8);
      public:
      // Creating conversion operator: operator ::System::Collections::Generic::IEnumerable_1<TValue>*
      constexpr operator ::System::Collections::Generic::IEnumerable_1<TValue>*() const noexcept {
        return items;
      }
      // Autogenerated instance field getter
      // Get instance field: public System.Collections.Generic.IEnumerable`1<TValue> items
      [[deprecated("Use field access instead!")]] ::System::Collections::Generic::IEnumerable_1<TValue>*& dyn_items() {
        static auto ___internal__logger = ::Logger::get().WithContext("::IntervalTree::IntervalTree_2::$$c__DisplayClass20_0::dyn_items");
        auto ___internal__instance = this;
        static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "items"))->offset;
        return *reinterpret_cast<::System::Collections::Generic::IEnumerable_1<TValue>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
      }
      // public System.Void .ctor()
      // Offset: 0xFFFFFFFFFFFFFFFF
      template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
      static typename IntervalTree_2<TKey, TValue>::$$c__DisplayClass20_0* New_ctor() {
        static auto ___internal__logger = ::Logger::get().WithContext("::IntervalTree::IntervalTree_2::$$c__DisplayClass20_0::.ctor");
        return THROW_UNLESS((::il2cpp_utils::New<typename IntervalTree_2<TKey, TValue>::$$c__DisplayClass20_0*, creationType>()));
      }
      // System.Boolean <Remove>b__0(IntervalTree.RangeValuePair`2<TKey,TValue> l)
      // Offset: 0xFFFFFFFFFFFFFFFF
      bool $Remove$b__0(::IntervalTree::RangeValuePair_2<TKey, TValue> l) {
        static auto ___internal__logger = ::Logger::get().WithContext("::IntervalTree::IntervalTree_2::$$c__DisplayClass20_0::<Remove>b__0");
        static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "<Remove>b__0", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(l)})));
        return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method, l);
      }
    }; // IntervalTree.IntervalTree`2/IntervalTree.<>c__DisplayClass20_0
    // Could not write size check! Type: IntervalTree.IntervalTree`2/IntervalTree.<>c__DisplayClass20_0 is generic, or has no fields that are valid for size checks!
    // WARNING Size may be invalid!
    // Autogenerated type: IntervalTree.IntervalTree`2/IntervalTree.<>c__DisplayClass23_0
    // [TokenAttribute] Offset: FFFFFFFF
    // [CompilerGeneratedAttribute] Offset: FFFFFFFF
    class $$c__DisplayClass23_0 : public ::il2cpp_utils::il2cpp_type_check::NestedType, public ::Il2CppObject {
      public:
      using declaring_type = IntervalTree_2<TKey, TValue>*;
      static constexpr std::string_view NESTED_NAME = "<>c__DisplayClass23_0";
      static constexpr bool IS_VALUE_TYPE = false;
      public:
      // public IntervalTree.IntervalTree`2<TKey,TValue> <>4__this
      // Size: 0x8
      // Offset: 0x0
      ::IntervalTree::IntervalTree_2<TKey, TValue>* $$4__this;
      // Field size check
      static_assert(sizeof(::IntervalTree::IntervalTree_2<TKey, TValue>*) == 0x8);
      // public TKey key
      // Size: 0xFFFFFFFF
      // Offset: 0x0
      TKey key;
      public:
      // Autogenerated instance field getter
      // Get instance field: public IntervalTree.IntervalTree`2<TKey,TValue> <>4__this
      [[deprecated("Use field access instead!")]] ::IntervalTree::IntervalTree_2<TKey, TValue>*& dyn_$$4__this() {
        static auto ___internal__logger = ::Logger::get().WithContext("::IntervalTree::IntervalTree_2::$$c__DisplayClass23_0::dyn_$$4__this");
        auto ___internal__instance = this;
        static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "<>4__this"))->offset;
        return *reinterpret_cast<::IntervalTree::IntervalTree_2<TKey, TValue>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
      }
      // Autogenerated instance field getter
      // Get instance field: public TKey key
      [[deprecated("Use field access instead!")]] TKey& dyn_key() {
        static auto ___internal__logger = ::Logger::get().WithContext("::IntervalTree::IntervalTree_2::$$c__DisplayClass23_0::dyn_key");
        auto ___internal__instance = this;
        static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "key"))->offset;
        return *reinterpret_cast<TKey*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
      }
      // public System.Void .ctor()
      // Offset: 0xFFFFFFFFFFFFFFFF
      template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
      static typename IntervalTree_2<TKey, TValue>::$$c__DisplayClass23_0* New_ctor() {
        static auto ___internal__logger = ::Logger::get().WithContext("::IntervalTree::IntervalTree_2::$$c__DisplayClass23_0::.ctor");
        return THROW_UNLESS((::il2cpp_utils::New<typename IntervalTree_2<TKey, TValue>::$$c__DisplayClass23_0*, creationType>()));
      }
      // System.Boolean <GetClosestPrevValueTo>b__0(IntervalTree.RangeValuePair`2<TKey,TValue> pair)
      // Offset: 0xFFFFFFFFFFFFFFFF
      bool $GetClosestPrevValueTo$b__0(::IntervalTree::RangeValuePair_2<TKey, TValue> pair) {
        static auto ___internal__logger = ::Logger::get().WithContext("::IntervalTree::IntervalTree_2::$$c__DisplayClass23_0::<GetClosestPrevValueTo>b__0");
        static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "<GetClosestPrevValueTo>b__0", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(pair)})));
        return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method, pair);
      }
    }; // IntervalTree.IntervalTree`2/IntervalTree.<>c__DisplayClass23_0
    // Could not write size check! Type: IntervalTree.IntervalTree`2/IntervalTree.<>c__DisplayClass23_0 is generic, or has no fields that are valid for size checks!
    // WARNING Size may be invalid!
    // Autogenerated type: IntervalTree.IntervalTree`2/IntervalTree.<>c__DisplayClass24_0
    // [TokenAttribute] Offset: FFFFFFFF
    // [CompilerGeneratedAttribute] Offset: FFFFFFFF
    class $$c__DisplayClass24_0 : public ::il2cpp_utils::il2cpp_type_check::NestedType, public ::Il2CppObject {
      public:
      using declaring_type = IntervalTree_2<TKey, TValue>*;
      static constexpr std::string_view NESTED_NAME = "<>c__DisplayClass24_0";
      static constexpr bool IS_VALUE_TYPE = false;
      public:
      // public IntervalTree.IntervalTree`2<TKey,TValue> <>4__this
      // Size: 0x8
      // Offset: 0x0
      ::IntervalTree::IntervalTree_2<TKey, TValue>* $$4__this;
      // Field size check
      static_assert(sizeof(::IntervalTree::IntervalTree_2<TKey, TValue>*) == 0x8);
      // public TKey key
      // Size: 0xFFFFFFFF
      // Offset: 0x0
      TKey key;
      public:
      // Autogenerated instance field getter
      // Get instance field: public IntervalTree.IntervalTree`2<TKey,TValue> <>4__this
      [[deprecated("Use field access instead!")]] ::IntervalTree::IntervalTree_2<TKey, TValue>*& dyn_$$4__this() {
        static auto ___internal__logger = ::Logger::get().WithContext("::IntervalTree::IntervalTree_2::$$c__DisplayClass24_0::dyn_$$4__this");
        auto ___internal__instance = this;
        static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "<>4__this"))->offset;
        return *reinterpret_cast<::IntervalTree::IntervalTree_2<TKey, TValue>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
      }
      // Autogenerated instance field getter
      // Get instance field: public TKey key
      [[deprecated("Use field access instead!")]] TKey& dyn_key() {
        static auto ___internal__logger = ::Logger::get().WithContext("::IntervalTree::IntervalTree_2::$$c__DisplayClass24_0::dyn_key");
        auto ___internal__instance = this;
        static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "key"))->offset;
        return *reinterpret_cast<TKey*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
      }
      // public System.Void .ctor()
      // Offset: 0xFFFFFFFFFFFFFFFF
      template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
      static typename IntervalTree_2<TKey, TValue>::$$c__DisplayClass24_0* New_ctor() {
        static auto ___internal__logger = ::Logger::get().WithContext("::IntervalTree::IntervalTree_2::$$c__DisplayClass24_0::.ctor");
        return THROW_UNLESS((::il2cpp_utils::New<typename IntervalTree_2<TKey, TValue>::$$c__DisplayClass24_0*, creationType>()));
      }
      // System.Boolean <GetClosestNextValueTo>b__0(IntervalTree.RangeValuePair`2<TKey,TValue> pair)
      // Offset: 0xFFFFFFFFFFFFFFFF
      bool $GetClosestNextValueTo$b__0(::IntervalTree::RangeValuePair_2<TKey, TValue> pair) {
        static auto ___internal__logger = ::Logger::get().WithContext("::IntervalTree::IntervalTree_2::$$c__DisplayClass24_0::<GetClosestNextValueTo>b__0");
        static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "<GetClosestNextValueTo>b__0", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(pair)})));
        return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method, pair);
      }
    }; // IntervalTree.IntervalTree`2/IntervalTree.<>c__DisplayClass24_0
    // Could not write size check! Type: IntervalTree.IntervalTree`2/IntervalTree.<>c__DisplayClass24_0 is generic, or has no fields that are valid for size checks!
    public:
    // public IntervalTree.IntervalTreeNode`2<TKey,TValue> root
    // Size: 0x8
    // Offset: 0x0
    ::IntervalTree::IntervalTreeNode_2<TKey, TValue>* root;
    // Field size check
    static_assert(sizeof(::IntervalTree::IntervalTreeNode_2<TKey, TValue>*) == 0x8);
    // public System.Collections.Generic.List`1<IntervalTree.RangeValuePair`2<TKey,TValue>> items
    // Size: 0x8
    // Offset: 0x0
    ::System::Collections::Generic::List_1<::IntervalTree::RangeValuePair_2<TKey, TValue>>* items;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::IntervalTree::RangeValuePair_2<TKey, TValue>>*) == 0x8);
    // private readonly System.Collections.Generic.IComparer`1<TKey> comparer
    // Size: 0x8
    // Offset: 0x0
    ::System::Collections::Generic::IComparer_1<TKey>* comparer;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::IComparer_1<TKey>*) == 0x8);
    // private System.Boolean isInSync
    // Size: 0x1
    // Offset: 0x0
    bool isInSync;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating interface conversion operator: operator ::IntervalTree::IIntervalTree_2<TKey, TValue>
    operator ::IntervalTree::IIntervalTree_2<TKey, TValue>() noexcept {
      return *reinterpret_cast<::IntervalTree::IIntervalTree_2<TKey, TValue>*>(this);
    }
    // Autogenerated instance field getter
    // Get instance field: public IntervalTree.IntervalTreeNode`2<TKey,TValue> root
    [[deprecated("Use field access instead!")]] ::IntervalTree::IntervalTreeNode_2<TKey, TValue>*& dyn_root() {
      static auto ___internal__logger = ::Logger::get().WithContext("::IntervalTree::IntervalTree_2::dyn_root");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "root"))->offset;
      return *reinterpret_cast<::IntervalTree::IntervalTreeNode_2<TKey, TValue>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: public System.Collections.Generic.List`1<IntervalTree.RangeValuePair`2<TKey,TValue>> items
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::IntervalTree::RangeValuePair_2<TKey, TValue>>*& dyn_items() {
      static auto ___internal__logger = ::Logger::get().WithContext("::IntervalTree::IntervalTree_2::dyn_items");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "items"))->offset;
      return *reinterpret_cast<::System::Collections::Generic::List_1<::IntervalTree::RangeValuePair_2<TKey, TValue>>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private readonly System.Collections.Generic.IComparer`1<TKey> comparer
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::IComparer_1<TKey>*& dyn_comparer() {
      static auto ___internal__logger = ::Logger::get().WithContext("::IntervalTree::IntervalTree_2::dyn_comparer");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "comparer"))->offset;
      return *reinterpret_cast<::System::Collections::Generic::IComparer_1<TKey>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Boolean isInSync
    [[deprecated("Use field access instead!")]] bool& dyn_isInSync() {
      static auto ___internal__logger = ::Logger::get().WithContext("::IntervalTree::IntervalTree_2::dyn_isInSync");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "isInSync"))->offset;
      return *reinterpret_cast<bool*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // public TKey get_Max()
    // Offset: 0xFFFFFFFFFFFFFFFF
    TKey get_Max() {
      static auto ___internal__logger = ::Logger::get().WithContext("::IntervalTree::IntervalTree_2::get_Max");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_Max", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<TKey, false>(this, ___internal__method);
    }
    // public TKey get_Min()
    // Offset: 0xFFFFFFFFFFFFFFFF
    TKey get_Min() {
      static auto ___internal__logger = ::Logger::get().WithContext("::IntervalTree::IntervalTree_2::get_Min");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_Min", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<TKey, false>(this, ___internal__method);
    }
    // public System.Collections.Generic.IEnumerable`1<TValue> get_Values()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Collections::Generic::IEnumerable_1<TValue>* get_Values() {
      static auto ___internal__logger = ::Logger::get().WithContext("::IntervalTree::IntervalTree_2::get_Values");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_Values", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<TValue>*, false>(this, ___internal__method);
    }
    // public System.Int32 get_Count()
    // Offset: 0xFFFFFFFFFFFFFFFF
    int get_Count() {
      static auto ___internal__logger = ::Logger::get().WithContext("::IntervalTree::IntervalTree_2::get_Count");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_Count", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<int, false>(this, ___internal__method);
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IntervalTree_2<TKey, TValue>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::IntervalTree::IntervalTree_2::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IntervalTree_2<TKey, TValue>*, creationType>()));
    }
    // public System.Void .ctor(System.Collections.Generic.IComparer`1<TKey> comparer)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IntervalTree_2<TKey, TValue>* New_ctor(::System::Collections::Generic::IComparer_1<TKey>* comparer) {
      static auto ___internal__logger = ::Logger::get().WithContext("::IntervalTree::IntervalTree_2::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IntervalTree_2<TKey, TValue>*, creationType>(comparer)));
    }
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() {
      static auto ___internal__logger = ::Logger::get().WithContext("::IntervalTree::IntervalTree_2::System.Collections.IEnumerable.GetEnumerator");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal__method);
    }
    // public System.Collections.Generic.IEnumerable`1<TValue> Query(TKey value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Collections::Generic::IEnumerable_1<TValue>* Query(TKey value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::IntervalTree::IntervalTree_2::Query");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Query", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(value)})));
      return ::il2cpp_utils::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<TValue>*, false>(this, ___internal__method, value);
    }
    // public System.Collections.Generic.IEnumerable`1<TValue> Query(TKey from, TKey to)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Collections::Generic::IEnumerable_1<TValue>* Query(TKey from, TKey to) {
      static auto ___internal__logger = ::Logger::get().WithContext("::IntervalTree::IntervalTree_2::Query");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Query", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(from), ::il2cpp_utils::ExtractType(to)})));
      return ::il2cpp_utils::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<TValue>*, false>(this, ___internal__method, from, to);
    }
    // public System.Collections.Generic.List`1<TValue> QueryWithCount(TKey from, TKey to)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Collections::Generic::List_1<TValue>* QueryWithCount(TKey from, TKey to) {
      static auto ___internal__logger = ::Logger::get().WithContext("::IntervalTree::IntervalTree_2::QueryWithCount");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "QueryWithCount", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(from), ::il2cpp_utils::ExtractType(to)})));
      return ::il2cpp_utils::RunMethodRethrow<::System::Collections::Generic::List_1<TValue>*, false>(this, ___internal__method, from, to);
    }
    // public System.Void Add(TKey from, TKey to, TValue value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Add(TKey from, TKey to, TValue value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::IntervalTree::IntervalTree_2::Add");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Add", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(from), ::il2cpp_utils::ExtractType(to), ::il2cpp_utils::ExtractType(value)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, from, to, value);
    }
    // public System.Void Remove(TValue value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Remove(TValue value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::IntervalTree::IntervalTree_2::Remove");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Remove", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(value)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, value);
    }
    // public System.Void Remove(System.Collections.Generic.IEnumerable`1<TValue> items)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Remove(::System::Collections::Generic::IEnumerable_1<TValue>* items) {
      static auto ___internal__logger = ::Logger::get().WithContext("::IntervalTree::IntervalTree_2::Remove");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Remove", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(items)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, items);
    }
    // public System.Void Clear()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Clear() {
      static auto ___internal__logger = ::Logger::get().WithContext("::IntervalTree::IntervalTree_2::Clear");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Clear", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method);
    }
    // public System.Collections.Generic.IEnumerator`1<IntervalTree.RangeValuePair`2<TKey,TValue>> GetEnumerator()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Collections::Generic::IEnumerator_1<::IntervalTree::RangeValuePair_2<TKey, TValue>>* GetEnumerator() {
      static auto ___internal__logger = ::Logger::get().WithContext("::IntervalTree::IntervalTree_2::GetEnumerator");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::IntervalTree::RangeValuePair_2<TKey, TValue>>*, false>(this, ___internal__method);
    }
    // public TValue GetClosestPrevValueTo(TKey key)
    // Offset: 0xFFFFFFFFFFFFFFFF
    TValue GetClosestPrevValueTo(TKey key) {
      static auto ___internal__logger = ::Logger::get().WithContext("::IntervalTree::IntervalTree_2::GetClosestPrevValueTo");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "GetClosestPrevValueTo", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(key)})));
      return ::il2cpp_utils::RunMethodRethrow<TValue, false>(this, ___internal__method, key);
    }
    // public TValue GetClosestNextValueTo(TKey key)
    // Offset: 0xFFFFFFFFFFFFFFFF
    TValue GetClosestNextValueTo(TKey key) {
      static auto ___internal__logger = ::Logger::get().WithContext("::IntervalTree::IntervalTree_2::GetClosestNextValueTo");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "GetClosestNextValueTo", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(key)})));
      return ::il2cpp_utils::RunMethodRethrow<TValue, false>(this, ___internal__method, key);
    }
    // private System.Void Rebuild()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Rebuild() {
      static auto ___internal__logger = ::Logger::get().WithContext("::IntervalTree::IntervalTree_2::Rebuild");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Rebuild", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method);
    }
  }; // IntervalTree.IntervalTree`2
  // Could not write size check! Type: IntervalTree.IntervalTree`2 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
