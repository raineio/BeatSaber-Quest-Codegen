// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: ISortedList`1
#include "GlobalNamespace/ISortedList_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IComparable`1<T>
  template<typename T>
  class IComparable_1;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: LinkedList`1<T>
  template<typename T>
  class LinkedList_1;
  // Forward declaring type: LinkedListNode`1<T>
  template<typename T>
  class LinkedListNode_1;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: ISortedListItemProcessor`1<T>
  template<typename T>
  class ISortedListItemProcessor_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: SortedList`2<T, TBase>
  template<typename T, typename TBase>
  class SortedList_2;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::SortedList_2, "", "SortedList`2");
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: SortedList`2
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename T, typename TBase>
  class SortedList_2 : public ::Il2CppObject/*, public ::GlobalNamespace::ISortedList_1<TBase>*/ {
    public:
    public:
    // private readonly System.Collections.Generic.LinkedList`1<TBase> _items
    // Size: 0x8
    // Offset: 0x0
    ::System::Collections::Generic::LinkedList_1<TBase>* items;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::LinkedList_1<TBase>*) == 0x8);
    // private readonly ISortedListItemProcessor`1<TBase> _sortedListDataProcessor
    // Size: 0x8
    // Offset: 0x0
    ::GlobalNamespace::ISortedListItemProcessor_1<TBase>* sortedListDataProcessor;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::ISortedListItemProcessor_1<TBase>*) == 0x8);
    // private System.Collections.Generic.LinkedListNode`1<TBase> _lastUsedNode
    // Size: 0x8
    // Offset: 0x0
    ::System::Collections::Generic::LinkedListNode_1<TBase>* lastUsedNode;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::LinkedListNode_1<TBase>*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::GlobalNamespace::ISortedList_1<TBase>
    operator ::GlobalNamespace::ISortedList_1<TBase>() noexcept {
      return *reinterpret_cast<::GlobalNamespace::ISortedList_1<TBase>*>(this);
    }
    // Creating interface conversion operator: i_ISortedList_1_TBase
    inline ::GlobalNamespace::ISortedList_1<TBase>* i_ISortedList_1_TBase() noexcept {
      return reinterpret_cast<::GlobalNamespace::ISortedList_1<TBase>*>(this);
    }
    // Autogenerated instance field getter
    // Get instance field: private readonly System.Collections.Generic.LinkedList`1<TBase> _items
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::LinkedList_1<TBase>*& dyn__items() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::SortedList_2::dyn__items");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_items"))->offset;
      return *reinterpret_cast<::System::Collections::Generic::LinkedList_1<TBase>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private readonly ISortedListItemProcessor`1<TBase> _sortedListDataProcessor
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::ISortedListItemProcessor_1<TBase>*& dyn__sortedListDataProcessor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::SortedList_2::dyn__sortedListDataProcessor");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_sortedListDataProcessor"))->offset;
      return *reinterpret_cast<::GlobalNamespace::ISortedListItemProcessor_1<TBase>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Collections.Generic.LinkedListNode`1<TBase> _lastUsedNode
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::LinkedListNode_1<TBase>*& dyn__lastUsedNode() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::SortedList_2::dyn__lastUsedNode");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_lastUsedNode"))->offset;
      return *reinterpret_cast<::System::Collections::Generic::LinkedListNode_1<TBase>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // public System.Collections.Generic.LinkedList`1<TBase> get_items()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Collections::Generic::LinkedList_1<TBase>* get_items() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::SortedList_2::get_items");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_items", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<::System::Collections::Generic::LinkedList_1<TBase>*, false>(this, ___internal__method);
    }
    // public System.Void .ctor(ISortedListItemProcessor`1<TBase> sortedListDataProcessor)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SortedList_2<T, TBase>* New_ctor(::GlobalNamespace::ISortedListItemProcessor_1<TBase>* sortedListDataProcessor) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::SortedList_2::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SortedList_2<T, TBase>*, creationType>(sortedListDataProcessor)));
    }
    // public System.Collections.Generic.LinkedListNode`1<TBase> Insert(TBase newItem)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Collections::Generic::LinkedListNode_1<TBase>* Insert(TBase newItem) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::SortedList_2::Insert");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Insert", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(newItem)})));
      return ::il2cpp_utils::RunMethodRethrow<::System::Collections::Generic::LinkedListNode_1<TBase>*, false>(this, ___internal__method, newItem);
    }
    // public System.Void Remove(System.Collections.Generic.LinkedListNode`1<TBase> node)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Remove(::System::Collections::Generic::LinkedListNode_1<TBase>* node) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::SortedList_2::Remove");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Remove", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(node)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, node);
    }
    // private System.Collections.Generic.LinkedListNode`1<TBase> InsertInternal(TBase newItem)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Collections::Generic::LinkedListNode_1<TBase>* InsertInternal(TBase newItem) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::SortedList_2::InsertInternal");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "InsertInternal", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(newItem)})));
      return ::il2cpp_utils::RunMethodRethrow<::System::Collections::Generic::LinkedListNode_1<TBase>*, false>(this, ___internal__method, newItem);
    }
    // public System.Collections.Generic.LinkedListNode`1<TBase> NodeForItem(TBase item)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Collections::Generic::LinkedListNode_1<TBase>* NodeForItem(TBase item) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::SortedList_2::NodeForItem");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "NodeForItem", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(item)})));
      return ::il2cpp_utils::RunMethodRethrow<::System::Collections::Generic::LinkedListNode_1<TBase>*, false>(this, ___internal__method, item);
    }
  }; // SortedList`2
  // Could not write size check! Type: SortedList`2 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
