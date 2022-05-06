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
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IComparable`1<T>
  template<typename T>
  class IComparable_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: BinaryHeap`1<T>
  template<typename T>
  class BinaryHeap_1;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::BinaryHeap_1, "", "BinaryHeap`1");
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: BinaryHeap`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename T>
  class BinaryHeap_1 : public ::Il2CppObject {
    public:
    public:
    // private T[] _data
    // Size: 0x8
    // Offset: 0x0
    ::ArrayW<T> data;
    // Field size check
    static_assert(sizeof(::ArrayW<T>) == 0x8);
    // private System.Int32 _tail
    // Size: 0x4
    // Offset: 0x0
    int tail;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Autogenerated instance field getter
    // Get instance field: private T[] _data
    [[deprecated("Use field access instead!")]] ::ArrayW<T>& dyn__data() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::BinaryHeap_1::dyn__data");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_data"))->offset;
      return *reinterpret_cast<::ArrayW<T>*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Int32 _tail
    [[deprecated("Use field access instead!")]] int& dyn__tail() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::BinaryHeap_1::dyn__tail");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_tail"))->offset;
      return *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BinaryHeap_1<T>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::BinaryHeap_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BinaryHeap_1<T>*, creationType>()));
    }
    // public System.Void .ctor(System.Int32 capacity)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BinaryHeap_1<T>* New_ctor(int capacity) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::BinaryHeap_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BinaryHeap_1<T>*, creationType>(capacity)));
    }
    // public System.Void Insert(T item)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Insert(T item) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::BinaryHeap_1::Insert");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Insert", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(item)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, item);
    }
    // public System.Boolean RemoveMin(out T output)
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool RemoveMin(ByRef<T> output) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::BinaryHeap_1::RemoveMin");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "RemoveMin", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<T&>()})));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method, byref(output));
    }
  }; // BinaryHeap`1
  // Could not write size check! Type: BinaryHeap`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
