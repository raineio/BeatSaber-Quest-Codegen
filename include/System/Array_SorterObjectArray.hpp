// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Array
#include "System/Array.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IComparer
  class IComparer;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Size: 0x18
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.Array/System.SorterObjectArray
  // [TokenAttribute] Offset: FFFFFFFF
  struct Array::SorterObjectArray/*, public System::ValueType*/ {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    private:
    #endif
    // private System.Object[] keys
    // Size: 0x8
    // Offset: 0x0
    ::ArrayW<::Il2CppObject*> keys;
    // Field size check
    static_assert(sizeof(::ArrayW<::Il2CppObject*>) == 0x8);
    // private System.Object[] items
    // Size: 0x8
    // Offset: 0x8
    ::ArrayW<::Il2CppObject*> items;
    // Field size check
    static_assert(sizeof(::ArrayW<::Il2CppObject*>) == 0x8);
    // private System.Collections.IComparer comparer
    // Size: 0x8
    // Offset: 0x10
    System::Collections::IComparer* comparer;
    // Field size check
    static_assert(sizeof(System::Collections::IComparer*) == 0x8);
    public:
    // Creating value type constructor for type: SorterObjectArray
    constexpr SorterObjectArray(::ArrayW<::Il2CppObject*> keys_ = ::ArrayW<::Il2CppObject*>(nullptr), ::ArrayW<::Il2CppObject*> items_ = ::ArrayW<::Il2CppObject*>(nullptr), System::Collections::IComparer* comparer_ = {}) noexcept : keys{keys_}, items{items_}, comparer{comparer_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Get instance field reference: private System.Object[] keys
    ::ArrayW<::Il2CppObject*>& dyn_keys();
    // Get instance field reference: private System.Object[] items
    ::ArrayW<::Il2CppObject*>& dyn_items();
    // Get instance field reference: private System.Collections.IComparer comparer
    System::Collections::IComparer*& dyn_comparer();
    // System.Void .ctor(System.Object[] keys, System.Object[] items, System.Collections.IComparer comparer)
    // Offset: 0x198BA28
    // ABORTED: conflicts with another method.  SorterObjectArray(::ArrayW<::Il2CppObject*> keys, ::ArrayW<::Il2CppObject*> items, System::Collections::IComparer* comparer);
    // System.Void SwapIfGreaterWithItems(System.Int32 a, System.Int32 b)
    // Offset: 0x198CA24
    void SwapIfGreaterWithItems(int a, int b);
    // private System.Void Swap(System.Int32 i, System.Int32 j)
    // Offset: 0x198CC74
    void Swap(int i, int j);
    // System.Void Sort(System.Int32 left, System.Int32 length)
    // Offset: 0x198BABC
    void Sort(int left, int length);
    // private System.Void IntrospectiveSort(System.Int32 left, System.Int32 length)
    // Offset: 0x198CDEC
    void IntrospectiveSort(int left, int length);
    // private System.Void IntroSort(System.Int32 lo, System.Int32 hi, System.Int32 depthLimit)
    // Offset: 0x198CF6C
    void IntroSort(int lo, int hi, int depthLimit);
    // private System.Int32 PickPivotAndPartition(System.Int32 lo, System.Int32 hi)
    // Offset: 0x198D40C
    int PickPivotAndPartition(int lo, int hi);
    // private System.Void Heapsort(System.Int32 lo, System.Int32 hi)
    // Offset: 0x198D358
    void Heapsort(int lo, int hi);
    // private System.Void DownHeap(System.Int32 i, System.Int32 n, System.Int32 lo)
    // Offset: 0x198D658
    void DownHeap(int i, int n, int lo);
    // private System.Void InsertionSort(System.Int32 lo, System.Int32 hi)
    // Offset: 0x198D098
    void InsertionSort(int lo, int hi);
  }; // System.Array/System.SorterObjectArray
  #pragma pack(pop)
  static check_size<sizeof(Array::SorterObjectArray), 16 + sizeof(System::Collections::IComparer*)> __System_Array_SorterObjectArraySizeCheck;
  static_assert(sizeof(Array::SorterObjectArray) == 0x18);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Array::SorterObjectArray, "System", "Array/SorterObjectArray");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Array::SorterObjectArray::SorterObjectArray
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Array::SorterObjectArray::SwapIfGreaterWithItems
// Il2CppName: SwapIfGreaterWithItems
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Array::SorterObjectArray::*)(int, int)>(&System::Array::SorterObjectArray::SwapIfGreaterWithItems)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Array::SorterObjectArray), "SwapIfGreaterWithItems", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, b});
  }
};
// Writing MetadataGetter for method: System::Array::SorterObjectArray::Swap
// Il2CppName: Swap
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Array::SorterObjectArray::*)(int, int)>(&System::Array::SorterObjectArray::Swap)> {
  static const MethodInfo* get() {
    static auto* i = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* j = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Array::SorterObjectArray), "Swap", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{i, j});
  }
};
// Writing MetadataGetter for method: System::Array::SorterObjectArray::Sort
// Il2CppName: Sort
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Array::SorterObjectArray::*)(int, int)>(&System::Array::SorterObjectArray::Sort)> {
  static const MethodInfo* get() {
    static auto* left = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Array::SorterObjectArray), "Sort", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{left, length});
  }
};
// Writing MetadataGetter for method: System::Array::SorterObjectArray::IntrospectiveSort
// Il2CppName: IntrospectiveSort
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Array::SorterObjectArray::*)(int, int)>(&System::Array::SorterObjectArray::IntrospectiveSort)> {
  static const MethodInfo* get() {
    static auto* left = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Array::SorterObjectArray), "IntrospectiveSort", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{left, length});
  }
};
// Writing MetadataGetter for method: System::Array::SorterObjectArray::IntroSort
// Il2CppName: IntroSort
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Array::SorterObjectArray::*)(int, int, int)>(&System::Array::SorterObjectArray::IntroSort)> {
  static const MethodInfo* get() {
    static auto* lo = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* hi = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* depthLimit = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Array::SorterObjectArray), "IntroSort", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{lo, hi, depthLimit});
  }
};
// Writing MetadataGetter for method: System::Array::SorterObjectArray::PickPivotAndPartition
// Il2CppName: PickPivotAndPartition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Array::SorterObjectArray::*)(int, int)>(&System::Array::SorterObjectArray::PickPivotAndPartition)> {
  static const MethodInfo* get() {
    static auto* lo = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* hi = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Array::SorterObjectArray), "PickPivotAndPartition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{lo, hi});
  }
};
// Writing MetadataGetter for method: System::Array::SorterObjectArray::Heapsort
// Il2CppName: Heapsort
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Array::SorterObjectArray::*)(int, int)>(&System::Array::SorterObjectArray::Heapsort)> {
  static const MethodInfo* get() {
    static auto* lo = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* hi = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Array::SorterObjectArray), "Heapsort", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{lo, hi});
  }
};
// Writing MetadataGetter for method: System::Array::SorterObjectArray::DownHeap
// Il2CppName: DownHeap
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Array::SorterObjectArray::*)(int, int, int)>(&System::Array::SorterObjectArray::DownHeap)> {
  static const MethodInfo* get() {
    static auto* i = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* n = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* lo = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Array::SorterObjectArray), "DownHeap", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{i, n, lo});
  }
};
// Writing MetadataGetter for method: System::Array::SorterObjectArray::InsertionSort
// Il2CppName: InsertionSort
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Array::SorterObjectArray::*)(int, int)>(&System::Array::SorterObjectArray::InsertionSort)> {
  static const MethodInfo* get() {
    static auto* lo = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* hi = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Array::SorterObjectArray), "InsertionSort", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{lo, hi});
  }
};
