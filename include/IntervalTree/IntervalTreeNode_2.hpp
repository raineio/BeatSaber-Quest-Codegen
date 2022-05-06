// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Collections.Generic.IComparer`1
#include "System/Collections/Generic/IComparer_1.hpp"
// Including type: IntervalTree.RangeValuePair`2
#include "IntervalTree/RangeValuePair_2.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: IntervalTree
namespace IntervalTree {
  // Skipping declaration: <>c because it is already included!
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IList`1<T>
  template<typename T>
  class IList_1;
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
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
  // Forward declaring type: IntervalTreeNode`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class IntervalTreeNode_2;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::IntervalTree::IntervalTreeNode_2, "IntervalTree", "IntervalTreeNode`2");
// Type namespace: IntervalTree
namespace IntervalTree {
  // WARNING Size may be invalid!
  // Autogenerated type: IntervalTree.IntervalTreeNode`2
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename TKey, typename TValue>
  class IntervalTreeNode_2 : public ::Il2CppObject/*, public ::System::Collections::Generic::IComparer_1<::IntervalTree::RangeValuePair_2<TKey, TValue>>*/ {
    public:
    // Nested type: ::IntervalTree::IntervalTreeNode_2::$$c<TKey, TValue>
    class $$c;
    // WARNING Size may be invalid!
    // Autogenerated type: IntervalTree.IntervalTreeNode`2/IntervalTree.<>c
    // [TokenAttribute] Offset: FFFFFFFF
    // [CompilerGeneratedAttribute] Offset: FFFFFFFF
    class $$c : public ::il2cpp_utils::il2cpp_type_check::NestedType, public ::Il2CppObject {
      public:
      using declaring_type = IntervalTreeNode_2<TKey, TValue>*;
      static constexpr std::string_view NESTED_NAME = "<>c";
      static constexpr bool IS_VALUE_TYPE = false;
      // Autogenerated static field getter
      // Get static field: static public readonly IntervalTree.IntervalTreeNode`2/IntervalTree.<>c<TKey,TValue> <>9
      static typename ::IntervalTree::IntervalTreeNode_2<TKey, TValue>::$$c* _get_$$9() {
        static auto ___internal__logger = ::Logger::get().WithContext("::IntervalTree::IntervalTreeNode_2::$$c::_get_$$9");
        return THROW_UNLESS((il2cpp_utils::GetFieldValue<typename ::IntervalTree::IntervalTreeNode_2<TKey, TValue>::$$c*>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename IntervalTreeNode_2<TKey, TValue>::$$c*>::get(), "<>9")));
      }
      // Autogenerated static field setter
      // Set static field: static public readonly IntervalTree.IntervalTreeNode`2/IntervalTree.<>c<TKey,TValue> <>9
      static void _set_$$9(typename ::IntervalTree::IntervalTreeNode_2<TKey, TValue>::$$c* value) {
        static auto ___internal__logger = ::Logger::get().WithContext("::IntervalTree::IntervalTreeNode_2::$$c::_set_$$9");
        THROW_UNLESS((il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename IntervalTreeNode_2<TKey, TValue>::$$c*>::get(), "<>9", value)));
      }
      // Autogenerated static field getter
      // Get static field: static public System.Func`2<IntervalTree.RangeValuePair`2<TKey,TValue>,TKey> <>9__13_0
      static ::System::Func_2<::IntervalTree::RangeValuePair_2<TKey, TValue>, TKey>* _get_$$9__13_0() {
        static auto ___internal__logger = ::Logger::get().WithContext("::IntervalTree::IntervalTreeNode_2::$$c::_get_$$9__13_0");
        return THROW_UNLESS((il2cpp_utils::GetFieldValue<::System::Func_2<::IntervalTree::RangeValuePair_2<TKey, TValue>, TKey>*>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename IntervalTreeNode_2<TKey, TValue>::$$c*>::get(), "<>9__13_0")));
      }
      // Autogenerated static field setter
      // Set static field: static public System.Func`2<IntervalTree.RangeValuePair`2<TKey,TValue>,TKey> <>9__13_0
      static void _set_$$9__13_0(::System::Func_2<::IntervalTree::RangeValuePair_2<TKey, TValue>, TKey>* value) {
        static auto ___internal__logger = ::Logger::get().WithContext("::IntervalTree::IntervalTreeNode_2::$$c::_set_$$9__13_0");
        THROW_UNLESS((il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename IntervalTreeNode_2<TKey, TValue>::$$c*>::get(), "<>9__13_0", value)));
      }
      // Autogenerated static field getter
      // Get static field: static public System.Func`2<IntervalTree.RangeValuePair`2<TKey,TValue>,TKey> <>9__15_0
      static ::System::Func_2<::IntervalTree::RangeValuePair_2<TKey, TValue>, TKey>* _get_$$9__15_0() {
        static auto ___internal__logger = ::Logger::get().WithContext("::IntervalTree::IntervalTreeNode_2::$$c::_get_$$9__15_0");
        return THROW_UNLESS((il2cpp_utils::GetFieldValue<::System::Func_2<::IntervalTree::RangeValuePair_2<TKey, TValue>, TKey>*>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename IntervalTreeNode_2<TKey, TValue>::$$c*>::get(), "<>9__15_0")));
      }
      // Autogenerated static field setter
      // Set static field: static public System.Func`2<IntervalTree.RangeValuePair`2<TKey,TValue>,TKey> <>9__15_0
      static void _set_$$9__15_0(::System::Func_2<::IntervalTree::RangeValuePair_2<TKey, TValue>, TKey>* value) {
        static auto ___internal__logger = ::Logger::get().WithContext("::IntervalTree::IntervalTreeNode_2::$$c::_set_$$9__15_0");
        THROW_UNLESS((il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename IntervalTreeNode_2<TKey, TValue>::$$c*>::get(), "<>9__15_0", value)));
      }
      // static private System.Void .cctor()
      // Offset: 0xFFFFFFFFFFFFFFFF
      static void _cctor() {
        static auto ___internal__logger = ::Logger::get().WithContext("::IntervalTree::IntervalTreeNode_2::$$c::.cctor");
        static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename IntervalTreeNode_2<TKey, TValue>::$$c*>::get(), ".cctor", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
        ::il2cpp_utils::RunMethodRethrow<void, false>(static_cast<Il2CppObject*>(nullptr), ___internal__method);
      }
      // public System.Void .ctor()
      // Offset: 0xFFFFFFFFFFFFFFFF
      template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
      static typename IntervalTreeNode_2<TKey, TValue>::$$c* New_ctor() {
        static auto ___internal__logger = ::Logger::get().WithContext("::IntervalTree::IntervalTreeNode_2::$$c::.ctor");
        return THROW_UNLESS((::il2cpp_utils::New<typename IntervalTreeNode_2<TKey, TValue>::$$c*, creationType>()));
      }
      // TKey <get_Max>b__13_0(IntervalTree.RangeValuePair`2<TKey,TValue> i)
      // Offset: 0xFFFFFFFFFFFFFFFF
      TKey $get_Max$b__13_0(::IntervalTree::RangeValuePair_2<TKey, TValue> i) {
        static auto ___internal__logger = ::Logger::get().WithContext("::IntervalTree::IntervalTreeNode_2::$$c::<get_Max>b__13_0");
        static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "<get_Max>b__13_0", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(i)})));
        return ::il2cpp_utils::RunMethodRethrow<TKey, false>(this, ___internal__method, i);
      }
      // TKey <get_Min>b__15_0(IntervalTree.RangeValuePair`2<TKey,TValue> i)
      // Offset: 0xFFFFFFFFFFFFFFFF
      TKey $get_Min$b__15_0(::IntervalTree::RangeValuePair_2<TKey, TValue> i) {
        static auto ___internal__logger = ::Logger::get().WithContext("::IntervalTree::IntervalTreeNode_2::$$c::<get_Min>b__15_0");
        static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "<get_Min>b__15_0", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(i)})));
        return ::il2cpp_utils::RunMethodRethrow<TKey, false>(this, ___internal__method, i);
      }
    }; // IntervalTree.IntervalTreeNode`2/IntervalTree.<>c
    // Could not write size check! Type: IntervalTree.IntervalTreeNode`2/IntervalTree.<>c is generic, or has no fields that are valid for size checks!
    public:
    // public readonly TKey center
    // Size: 0xFFFFFFFF
    // Offset: 0x0
    TKey center;
    // public readonly IntervalTree.IntervalTreeNode`2<TKey,TValue> leftNode
    // Size: 0x8
    // Offset: 0x0
    ::IntervalTree::IntervalTreeNode_2<TKey, TValue>* leftNode;
    // Field size check
    static_assert(sizeof(::IntervalTree::IntervalTreeNode_2<TKey, TValue>*) == 0x8);
    // public readonly IntervalTree.IntervalTreeNode`2<TKey,TValue> rightNode
    // Size: 0x8
    // Offset: 0x0
    ::IntervalTree::IntervalTreeNode_2<TKey, TValue>* rightNode;
    // Field size check
    static_assert(sizeof(::IntervalTree::IntervalTreeNode_2<TKey, TValue>*) == 0x8);
    // public readonly IntervalTree.RangeValuePair`2<TKey,TValue>[] items
    // Size: 0x8
    // Offset: 0x0
    ::ArrayW<::IntervalTree::RangeValuePair_2<TKey, TValue>> items;
    // Field size check
    static_assert(sizeof(::ArrayW<::IntervalTree::RangeValuePair_2<TKey, TValue>>) == 0x8);
    // public readonly System.Collections.Generic.IComparer`1<TKey> comparer
    // Size: 0x8
    // Offset: 0x0
    ::System::Collections::Generic::IComparer_1<TKey>* comparer;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::IComparer_1<TKey>*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::Collections::Generic::IComparer_1<::IntervalTree::RangeValuePair_2<TKey, TValue>>
    operator ::System::Collections::Generic::IComparer_1<::IntervalTree::RangeValuePair_2<TKey, TValue>>() noexcept {
      return *reinterpret_cast<::System::Collections::Generic::IComparer_1<::IntervalTree::RangeValuePair_2<TKey, TValue>>*>(this);
    }
    // Autogenerated instance field getter
    // Get instance field: public readonly TKey center
    [[deprecated("Use field access instead!")]] TKey& dyn_center() {
      static auto ___internal__logger = ::Logger::get().WithContext("::IntervalTree::IntervalTreeNode_2::dyn_center");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "center"))->offset;
      return *reinterpret_cast<TKey*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: public readonly IntervalTree.IntervalTreeNode`2<TKey,TValue> leftNode
    [[deprecated("Use field access instead!")]] ::IntervalTree::IntervalTreeNode_2<TKey, TValue>*& dyn_leftNode() {
      static auto ___internal__logger = ::Logger::get().WithContext("::IntervalTree::IntervalTreeNode_2::dyn_leftNode");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "leftNode"))->offset;
      return *reinterpret_cast<::IntervalTree::IntervalTreeNode_2<TKey, TValue>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: public readonly IntervalTree.IntervalTreeNode`2<TKey,TValue> rightNode
    [[deprecated("Use field access instead!")]] ::IntervalTree::IntervalTreeNode_2<TKey, TValue>*& dyn_rightNode() {
      static auto ___internal__logger = ::Logger::get().WithContext("::IntervalTree::IntervalTreeNode_2::dyn_rightNode");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "rightNode"))->offset;
      return *reinterpret_cast<::IntervalTree::IntervalTreeNode_2<TKey, TValue>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: public readonly IntervalTree.RangeValuePair`2<TKey,TValue>[] items
    [[deprecated("Use field access instead!")]] ::ArrayW<::IntervalTree::RangeValuePair_2<TKey, TValue>>& dyn_items() {
      static auto ___internal__logger = ::Logger::get().WithContext("::IntervalTree::IntervalTreeNode_2::dyn_items");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "items"))->offset;
      return *reinterpret_cast<::ArrayW<::IntervalTree::RangeValuePair_2<TKey, TValue>>*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: public readonly System.Collections.Generic.IComparer`1<TKey> comparer
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::IComparer_1<TKey>*& dyn_comparer() {
      static auto ___internal__logger = ::Logger::get().WithContext("::IntervalTree::IntervalTreeNode_2::dyn_comparer");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "comparer"))->offset;
      return *reinterpret_cast<::System::Collections::Generic::IComparer_1<TKey>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // public TKey get_Max()
    // Offset: 0xFFFFFFFFFFFFFFFF
    TKey get_Max() {
      static auto ___internal__logger = ::Logger::get().WithContext("::IntervalTree::IntervalTreeNode_2::get_Max");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_Max", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<TKey, false>(this, ___internal__method);
    }
    // public TKey get_Min()
    // Offset: 0xFFFFFFFFFFFFFFFF
    TKey get_Min() {
      static auto ___internal__logger = ::Logger::get().WithContext("::IntervalTree::IntervalTreeNode_2::get_Min");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_Min", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<TKey, false>(this, ___internal__method);
    }
    // public System.Void .ctor(System.Collections.Generic.IComparer`1<TKey> comparer)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IntervalTreeNode_2<TKey, TValue>* New_ctor(::System::Collections::Generic::IComparer_1<TKey>* comparer) {
      static auto ___internal__logger = ::Logger::get().WithContext("::IntervalTree::IntervalTreeNode_2::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IntervalTreeNode_2<TKey, TValue>*, creationType>(comparer)));
    }
    // public System.Void .ctor(System.Collections.Generic.IList`1<IntervalTree.RangeValuePair`2<TKey,TValue>> items, System.Collections.Generic.IComparer`1<TKey> comparer)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IntervalTreeNode_2<TKey, TValue>* New_ctor(::System::Collections::Generic::IList_1<::IntervalTree::RangeValuePair_2<TKey, TValue>>* items, ::System::Collections::Generic::IComparer_1<TKey>* comparer) {
      static auto ___internal__logger = ::Logger::get().WithContext("::IntervalTree::IntervalTreeNode_2::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IntervalTreeNode_2<TKey, TValue>*, creationType>(items, comparer)));
    }
    // public System.Collections.Generic.IEnumerable`1<TValue> Query(TKey value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Collections::Generic::IEnumerable_1<TValue>* Query(TKey value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::IntervalTree::IntervalTreeNode_2::Query");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Query", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(value)})));
      return ::il2cpp_utils::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<TValue>*, false>(this, ___internal__method, value);
    }
    // public System.Collections.Generic.List`1<TValue> Query(TKey from, TKey to)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Collections::Generic::List_1<TValue>* Query(TKey from, TKey to) {
      static auto ___internal__logger = ::Logger::get().WithContext("::IntervalTree::IntervalTreeNode_2::Query");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Query", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(from), ::il2cpp_utils::ExtractType(to)})));
      return ::il2cpp_utils::RunMethodRethrow<::System::Collections::Generic::List_1<TValue>*, false>(this, ___internal__method, from, to);
    }
    // public System.Collections.Generic.IEnumerable`1<TValue> QueryClosestPrev(TKey value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Collections::Generic::IEnumerable_1<TValue>* QueryClosestPrev(TKey value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::IntervalTree::IntervalTreeNode_2::QueryClosestPrev");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "QueryClosestPrev", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(value)})));
      return ::il2cpp_utils::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<TValue>*, false>(this, ___internal__method, value);
    }
    // public IntervalTree.IntervalTreeNode`2<TKey,TValue> GetClosestNodeTo(TKey key)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::IntervalTree::IntervalTreeNode_2<TKey, TValue>* GetClosestNodeTo(TKey key) {
      static auto ___internal__logger = ::Logger::get().WithContext("::IntervalTree::IntervalTreeNode_2::GetClosestNodeTo");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "GetClosestNodeTo", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(key)})));
      return ::il2cpp_utils::RunMethodRethrow<::IntervalTree::IntervalTreeNode_2<TKey, TValue>*, false>(this, ___internal__method, key);
    }
    // private System.Int32 System.Collections.Generic.IComparer<IntervalTree.RangeValuePair<TKey,TValue>>.Compare(IntervalTree.RangeValuePair`2<TKey,TValue> x, IntervalTree.RangeValuePair`2<TKey,TValue> y)
    // Offset: 0xFFFFFFFFFFFFFFFF
    int System_Collections_Generic_IComparer$IntervalTree_RangeValuePair$TKey_TValue$$_Compare(::IntervalTree::RangeValuePair_2<TKey, TValue> x, ::IntervalTree::RangeValuePair_2<TKey, TValue> y) {
      static auto ___internal__logger = ::Logger::get().WithContext("::IntervalTree::IntervalTreeNode_2::System.Collections.Generic.IComparer<IntervalTree.RangeValuePair<TKey,TValue>>.Compare");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "System.Collections.Generic.IComparer<IntervalTree.RangeValuePair<TKey,TValue>>.Compare", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(x), ::il2cpp_utils::ExtractType(y)})));
      return ::il2cpp_utils::RunMethodRethrow<int, false>(this, ___internal__method, x, y);
    }
  }; // IntervalTree.IntervalTreeNode`2
  // Could not write size check! Type: IntervalTree.IntervalTreeNode`2 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
