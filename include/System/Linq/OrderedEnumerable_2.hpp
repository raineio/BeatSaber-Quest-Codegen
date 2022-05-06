// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Linq.OrderedEnumerable`1
#include "System/Linq/OrderedEnumerable_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IComparer`1<T>
  template<typename T>
  class IComparer_1;
  // Skipping declaration: IEnumerable`1 because it is already included!
}
// Forward declaring namespace: System::Linq
namespace System::Linq {
  // Forward declaring type: EnumerableSorter`1<TElement>
  template<typename TElement>
  class EnumerableSorter_1;
}
// Completed forward declares
// Type namespace: System.Linq
namespace System::Linq {
  // Forward declaring type: OrderedEnumerable`2<TElement, TKey>
  template<typename TElement, typename TKey>
  class OrderedEnumerable_2;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Linq::OrderedEnumerable_2, "System.Linq", "OrderedEnumerable`2");
// Type namespace: System.Linq
namespace System::Linq {
  // WARNING Size may be invalid!
  // Autogenerated type: System.Linq.OrderedEnumerable`2
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename TElement, typename TKey>
  class OrderedEnumerable_2 : public ::System::Linq::OrderedEnumerable_1<TElement> {
    public:
    public:
    // System.Linq.OrderedEnumerable`1<TElement> parent
    // Size: 0x8
    // Offset: 0x0
    ::System::Linq::OrderedEnumerable_1<TElement>* parent;
    // Field size check
    static_assert(sizeof(::System::Linq::OrderedEnumerable_1<TElement>*) == 0x8);
    // System.Func`2<TElement,TKey> keySelector
    // Size: 0x8
    // Offset: 0x0
    ::System::Func_2<TElement, TKey>* keySelector;
    // Field size check
    static_assert(sizeof(::System::Func_2<TElement, TKey>*) == 0x8);
    // System.Collections.Generic.IComparer`1<TKey> comparer
    // Size: 0x8
    // Offset: 0x0
    ::System::Collections::Generic::IComparer_1<TKey>* comparer;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::IComparer_1<TKey>*) == 0x8);
    // System.Boolean descending
    // Size: 0x1
    // Offset: 0x0
    bool descending;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Deleting conversion operator: operator ::System::Collections::Generic::IEnumerable_1<TElement>*
    // Cannot delete conversion operator because it seems to have a generic type in the definition! This may not be defined!
    // Autogenerated instance field getter
    // Get instance field: System.Linq.OrderedEnumerable`1<TElement> parent
    [[deprecated("Use field access instead!")]] ::System::Linq::OrderedEnumerable_1<TElement>*& dyn_parent() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Linq::OrderedEnumerable_2::dyn_parent");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "parent"))->offset;
      return *reinterpret_cast<::System::Linq::OrderedEnumerable_1<TElement>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: System.Func`2<TElement,TKey> keySelector
    [[deprecated("Use field access instead!")]] ::System::Func_2<TElement, TKey>*& dyn_keySelector() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Linq::OrderedEnumerable_2::dyn_keySelector");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "keySelector"))->offset;
      return *reinterpret_cast<::System::Func_2<TElement, TKey>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: System.Collections.Generic.IComparer`1<TKey> comparer
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::IComparer_1<TKey>*& dyn_comparer() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Linq::OrderedEnumerable_2::dyn_comparer");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "comparer"))->offset;
      return *reinterpret_cast<::System::Collections::Generic::IComparer_1<TKey>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: System.Boolean descending
    [[deprecated("Use field access instead!")]] bool& dyn_descending() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Linq::OrderedEnumerable_2::dyn_descending");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "descending"))->offset;
      return *reinterpret_cast<bool*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // System.Void .ctor(System.Collections.Generic.IEnumerable`1<TElement> source, System.Func`2<TElement,TKey> keySelector, System.Collections.Generic.IComparer`1<TKey> comparer, System.Boolean descending)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OrderedEnumerable_2<TElement, TKey>* New_ctor(::System::Collections::Generic::IEnumerable_1<TElement>* source, ::System::Func_2<TElement, TKey>* keySelector, ::System::Collections::Generic::IComparer_1<TKey>* comparer, bool descending) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Linq::OrderedEnumerable_2::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OrderedEnumerable_2<TElement, TKey>*, creationType>(source, keySelector, comparer, descending)));
    }
    // override System.Linq.EnumerableSorter`1<TElement> GetEnumerableSorter(System.Linq.EnumerableSorter`1<TElement> next)
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: System.Linq.OrderedEnumerable`1
    // Base method: System.Linq.EnumerableSorter`1<TElement> OrderedEnumerable_1::GetEnumerableSorter(System.Linq.EnumerableSorter`1<TElement> next)
    ::System::Linq::EnumerableSorter_1<TElement>* GetEnumerableSorter(::System::Linq::EnumerableSorter_1<TElement>* next) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Linq::OrderedEnumerable_2::GetEnumerableSorter");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "GetEnumerableSorter", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(next)})));
      return ::il2cpp_utils::RunMethodRethrow<::System::Linq::EnumerableSorter_1<TElement>*, false>(this, ___internal__method, next);
    }
  }; // System.Linq.OrderedEnumerable`2
  // Could not write size check! Type: System.Linq.OrderedEnumerable`2 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
