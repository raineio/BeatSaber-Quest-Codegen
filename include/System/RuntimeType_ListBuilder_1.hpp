// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.RuntimeType
#include "System/RuntimeType.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin il2cpp-utils forward declares
struct Il2CppObject;
// Completed il2cpp-utils forward declares
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(System::RuntimeType::ListBuilder_1, "System", "RuntimeType/ListBuilder`1");
// Type namespace: System
namespace System {
  // WARNING Size may be invalid!
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.RuntimeType/System.ListBuilder`1
  // [TokenAttribute] Offset: FFFFFFFF
  // [DefaultMemberAttribute] Offset: E9DBF8
  template<typename T>
  struct RuntimeType::ListBuilder_1/*, public System::ValueType*/ {
    public:
    public:
    // private T[] _items
    // Size: 0x8
    // Offset: 0x0
    ::ArrayW<T> items;
    // Field size check
    static_assert(sizeof(::ArrayW<T>) == 0x8);
    // private T _item
    // Size: 0xFFFFFFFF
    // Offset: 0x0
    T item;
    // private System.Int32 _count
    // Size: 0x4
    // Offset: 0x0
    int count;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _capacity
    // Size: 0x4
    // Offset: 0x0
    int capacity;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: ListBuilder_1
    constexpr ListBuilder_1(::ArrayW<T> items_ = ::ArrayW<T>(nullptr), T item_ = {}, int count_ = {}, int capacity_ = {}) noexcept : items{items_}, item{item_}, count{count_}, capacity{capacity_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Autogenerated instance field getter
    // Get instance field: private T[] _items
    ::ArrayW<T>& dyn__items() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::RuntimeType::ListBuilder_1::dyn__items");
      auto ___internal__instance = *this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_items"))->offset;
      return *reinterpret_cast<::ArrayW<T>*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private T _item
    T& dyn__item() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::RuntimeType::ListBuilder_1::dyn__item");
      auto ___internal__instance = *this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_item"))->offset;
      return *reinterpret_cast<T*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Int32 _count
    int& dyn__count() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::RuntimeType::ListBuilder_1::dyn__count");
      auto ___internal__instance = *this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_count"))->offset;
      return *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Int32 _capacity
    int& dyn__capacity() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::RuntimeType::ListBuilder_1::dyn__capacity");
      auto ___internal__instance = *this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_capacity"))->offset;
      return *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // public T get_Item(System.Int32 index)
    // Offset: 0xFFFFFFFF
    T get_Item(int index) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::RuntimeType::ListBuilder_1::get_Item");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "get_Item", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(index)})));
      return ::il2cpp_utils::RunMethodThrow<T, false>(this, ___internal__method, index);
    }
    // public System.Int32 get_Count()
    // Offset: 0xFFFFFFFF
    int get_Count() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::RuntimeType::ListBuilder_1::get_Count");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "get_Count", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodThrow<int, false>(this, ___internal__method);
    }
    // public System.Void .ctor(System.Int32 capacity)
    // Offset: 0xFFFFFFFF
    ListBuilder_1(int capacity) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::RuntimeType::ListBuilder_1::.ctor");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(capacity)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, capacity);
    }
    // public T[] ToArray()
    // Offset: 0xFFFFFFFF
    ::ArrayW<T> ToArray() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::RuntimeType::ListBuilder_1::ToArray");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "ToArray", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodThrow<::ArrayW<T>, false>(this, ___internal__method);
    }
    // public System.Void CopyTo(System.Object[] array, System.Int32 index)
    // Offset: 0xFFFFFFFF
    void CopyTo(::ArrayW<::Il2CppObject*> array, int index) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::RuntimeType::ListBuilder_1::CopyTo");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "CopyTo", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(array), ::il2cpp_utils::ExtractType(index)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, array, index);
    }
    // public System.Void Add(T item)
    // Offset: 0xFFFFFFFF
    void Add(T item) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::RuntimeType::ListBuilder_1::Add");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "Add", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(item)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, item);
    }
  }; // System.RuntimeType/System.ListBuilder`1
  // Could not write size check! Type: System.RuntimeType/System.ListBuilder`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
