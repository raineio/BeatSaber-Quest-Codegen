// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: LinkedList`1<T>
  template<typename T>
  class LinkedList_1;
}
// Completed forward declares
// Type namespace: System.Collections.Generic
namespace System::Collections::Generic {
  // Forward declaring type: LinkedListNode`1<T>
  template<typename T>
  class LinkedListNode_1;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Collections::Generic::LinkedListNode_1, "System.Collections.Generic", "LinkedListNode`1");
// Type namespace: System.Collections.Generic
namespace System::Collections::Generic {
  // WARNING Size may be invalid!
  // Autogenerated type: System.Collections.Generic.LinkedListNode`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename T>
  class LinkedListNode_1 : public ::Il2CppObject {
    public:
    public:
    // System.Collections.Generic.LinkedList`1<T> list
    // Size: 0x8
    // Offset: 0x0
    ::System::Collections::Generic::LinkedList_1<T>* list;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::LinkedList_1<T>*) == 0x8);
    // System.Collections.Generic.LinkedListNode`1<T> next
    // Size: 0x8
    // Offset: 0x0
    ::System::Collections::Generic::LinkedListNode_1<T>* next;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::LinkedListNode_1<T>*) == 0x8);
    // System.Collections.Generic.LinkedListNode`1<T> prev
    // Size: 0x8
    // Offset: 0x0
    ::System::Collections::Generic::LinkedListNode_1<T>* prev;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::LinkedListNode_1<T>*) == 0x8);
    // T item
    // Size: 0xFFFFFFFF
    // Offset: 0x0
    T item;
    public:
    // Autogenerated instance field getter
    // Get instance field: System.Collections.Generic.LinkedList`1<T> list
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::LinkedList_1<T>*& dyn_list() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::Generic::LinkedListNode_1::dyn_list");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "list"))->offset;
      return *reinterpret_cast<::System::Collections::Generic::LinkedList_1<T>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: System.Collections.Generic.LinkedListNode`1<T> next
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::LinkedListNode_1<T>*& dyn_next() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::Generic::LinkedListNode_1::dyn_next");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "next"))->offset;
      return *reinterpret_cast<::System::Collections::Generic::LinkedListNode_1<T>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: System.Collections.Generic.LinkedListNode`1<T> prev
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::LinkedListNode_1<T>*& dyn_prev() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::Generic::LinkedListNode_1::dyn_prev");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "prev"))->offset;
      return *reinterpret_cast<::System::Collections::Generic::LinkedListNode_1<T>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: T item
    [[deprecated("Use field access instead!")]] T& dyn_item() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::Generic::LinkedListNode_1::dyn_item");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "item"))->offset;
      return *reinterpret_cast<T*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // public System.Collections.Generic.LinkedList`1<T> get_List()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Collections::Generic::LinkedList_1<T>* get_List() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::Generic::LinkedListNode_1::get_List");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_List", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<::System::Collections::Generic::LinkedList_1<T>*, false>(this, ___internal__method);
    }
    // public System.Collections.Generic.LinkedListNode`1<T> get_Next()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Collections::Generic::LinkedListNode_1<T>* get_Next() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::Generic::LinkedListNode_1::get_Next");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_Next", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<::System::Collections::Generic::LinkedListNode_1<T>*, false>(this, ___internal__method);
    }
    // public System.Collections.Generic.LinkedListNode`1<T> get_Previous()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Collections::Generic::LinkedListNode_1<T>* get_Previous() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::Generic::LinkedListNode_1::get_Previous");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_Previous", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<::System::Collections::Generic::LinkedListNode_1<T>*, false>(this, ___internal__method);
    }
    // public T get_Value()
    // Offset: 0xFFFFFFFFFFFFFFFF
    T get_Value() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::Generic::LinkedListNode_1::get_Value");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_Value", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<T, false>(this, ___internal__method);
    }
    // public System.Void set_Value(T value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void set_Value(T value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::Generic::LinkedListNode_1::set_Value");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "set_Value", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(value)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, value);
    }
    // public System.Void .ctor(T value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LinkedListNode_1<T>* New_ctor(T value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::Generic::LinkedListNode_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LinkedListNode_1<T>*, creationType>(value)));
    }
    // System.Void .ctor(System.Collections.Generic.LinkedList`1<T> list, T value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LinkedListNode_1<T>* New_ctor(::System::Collections::Generic::LinkedList_1<T>* list, T value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::Generic::LinkedListNode_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LinkedListNode_1<T>*, creationType>(list, value)));
    }
    // System.Void Invalidate()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Invalidate() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::Generic::LinkedListNode_1::Invalidate");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Invalidate", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method);
    }
  }; // System.Collections.Generic.LinkedListNode`1
  // Could not write size check! Type: System.Collections.Generic.LinkedListNode`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
