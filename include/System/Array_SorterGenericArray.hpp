// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Array
#include "System/Array.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IComparer
  class IComparer;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Array::SorterGenericArray, "System", "Array/SorterGenericArray");
// Type namespace: System
namespace System {
  // Size: 0x18
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.Array/System.SorterGenericArray
  // [TokenAttribute] Offset: FFFFFFFF
  struct Array::SorterGenericArray/*, public ::System::ValueType*/ {
    public:
    public:
    // private System.Array keys
    // Size: 0x8
    // Offset: 0x0
    ::System::Array* keys;
    // Field size check
    static_assert(sizeof(::System::Array*) == 0x8);
    // private System.Array items
    // Size: 0x8
    // Offset: 0x8
    ::System::Array* items;
    // Field size check
    static_assert(sizeof(::System::Array*) == 0x8);
    // private System.Collections.IComparer comparer
    // Size: 0x8
    // Offset: 0x10
    ::System::Collections::IComparer* comparer;
    // Field size check
    static_assert(sizeof(::System::Collections::IComparer*) == 0x8);
    public:
    // Creating value type constructor for type: SorterGenericArray
    constexpr SorterGenericArray(::System::Array* keys_ = {}, ::System::Array* items_ = {}, ::System::Collections::IComparer* comparer_ = {}) noexcept : keys{keys_}, items{items_}, comparer{comparer_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: private System.Array keys
    [[deprecated("Use field access instead!")]] ::System::Array*& dyn_keys();
    // Get instance field reference: private System.Array items
    [[deprecated("Use field access instead!")]] ::System::Array*& dyn_items();
    // Get instance field reference: private System.Collections.IComparer comparer
    [[deprecated("Use field access instead!")]] ::System::Collections::IComparer*& dyn_comparer();
    // System.Void .ctor(System.Array keys, System.Array items, System.Collections.IComparer comparer)
    // Offset: 0x1EB76AC
    // ABORTED: conflicts with another method.  SorterGenericArray(::System::Array* keys, ::System::Array* items, ::System::Collections::IComparer* comparer);
    // System.Void SwapIfGreaterWithItems(System.Int32 a, System.Int32 b)
    // Offset: 0x1EB78A0
    void SwapIfGreaterWithItems(int a, int b);
    // private System.Void Swap(System.Int32 i, System.Int32 j)
    // Offset: 0x1EB7A58
    void Swap(int i, int j);
    // System.Void Sort(System.Int32 left, System.Int32 length)
    // Offset: 0x1EB7740
    void Sort(int left, int length);
    // private System.Void IntrospectiveSort(System.Int32 left, System.Int32 length)
    // Offset: 0x1EB7B34
    void IntrospectiveSort(int left, int length);
    // private System.Void IntroSort(System.Int32 lo, System.Int32 hi, System.Int32 depthLimit)
    // Offset: 0x1EB7CA8
    void IntroSort(int lo, int hi, int depthLimit);
    // private System.Int32 PickPivotAndPartition(System.Int32 lo, System.Int32 hi)
    // Offset: 0x1EB805C
    int PickPivotAndPartition(int lo, int hi);
    // private System.Void Heapsort(System.Int32 lo, System.Int32 hi)
    // Offset: 0x1EB7FA8
    void Heapsort(int lo, int hi);
    // private System.Void DownHeap(System.Int32 i, System.Int32 n, System.Int32 lo)
    // Offset: 0x1EB8284
    void DownHeap(int i, int n, int lo);
    // private System.Void InsertionSort(System.Int32 lo, System.Int32 hi)
    // Offset: 0x1EB7DD4
    void InsertionSort(int lo, int hi);
  }; // System.Array/System.SorterGenericArray
  #pragma pack(pop)
  static check_size<sizeof(Array::SorterGenericArray), 16 + sizeof(::System::Collections::IComparer*)> __System_Array_SorterGenericArraySizeCheck;
  static_assert(sizeof(Array::SorterGenericArray) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Array::SorterGenericArray::SorterGenericArray
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Array::SorterGenericArray::SwapIfGreaterWithItems
// Il2CppName: SwapIfGreaterWithItems
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Array::SorterGenericArray::*)(int, int)>(&System::Array::SorterGenericArray::SwapIfGreaterWithItems)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Array::SorterGenericArray), "SwapIfGreaterWithItems", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, b});
  }
};
// Writing MetadataGetter for method: System::Array::SorterGenericArray::Swap
// Il2CppName: Swap
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Array::SorterGenericArray::*)(int, int)>(&System::Array::SorterGenericArray::Swap)> {
  static const MethodInfo* get() {
    static auto* i = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* j = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Array::SorterGenericArray), "Swap", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{i, j});
  }
};
// Writing MetadataGetter for method: System::Array::SorterGenericArray::Sort
// Il2CppName: Sort
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Array::SorterGenericArray::*)(int, int)>(&System::Array::SorterGenericArray::Sort)> {
  static const MethodInfo* get() {
    static auto* left = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Array::SorterGenericArray), "Sort", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{left, length});
  }
};
// Writing MetadataGetter for method: System::Array::SorterGenericArray::IntrospectiveSort
// Il2CppName: IntrospectiveSort
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Array::SorterGenericArray::*)(int, int)>(&System::Array::SorterGenericArray::IntrospectiveSort)> {
  static const MethodInfo* get() {
    static auto* left = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Array::SorterGenericArray), "IntrospectiveSort", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{left, length});
  }
};
// Writing MetadataGetter for method: System::Array::SorterGenericArray::IntroSort
// Il2CppName: IntroSort
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Array::SorterGenericArray::*)(int, int, int)>(&System::Array::SorterGenericArray::IntroSort)> {
  static const MethodInfo* get() {
    static auto* lo = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* hi = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* depthLimit = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Array::SorterGenericArray), "IntroSort", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{lo, hi, depthLimit});
  }
};
// Writing MetadataGetter for method: System::Array::SorterGenericArray::PickPivotAndPartition
// Il2CppName: PickPivotAndPartition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Array::SorterGenericArray::*)(int, int)>(&System::Array::SorterGenericArray::PickPivotAndPartition)> {
  static const MethodInfo* get() {
    static auto* lo = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* hi = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Array::SorterGenericArray), "PickPivotAndPartition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{lo, hi});
  }
};
// Writing MetadataGetter for method: System::Array::SorterGenericArray::Heapsort
// Il2CppName: Heapsort
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Array::SorterGenericArray::*)(int, int)>(&System::Array::SorterGenericArray::Heapsort)> {
  static const MethodInfo* get() {
    static auto* lo = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* hi = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Array::SorterGenericArray), "Heapsort", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{lo, hi});
  }
};
// Writing MetadataGetter for method: System::Array::SorterGenericArray::DownHeap
// Il2CppName: DownHeap
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Array::SorterGenericArray::*)(int, int, int)>(&System::Array::SorterGenericArray::DownHeap)> {
  static const MethodInfo* get() {
    static auto* i = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* n = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* lo = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Array::SorterGenericArray), "DownHeap", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{i, n, lo});
  }
};
// Writing MetadataGetter for method: System::Array::SorterGenericArray::InsertionSort
// Il2CppName: InsertionSort
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Array::SorterGenericArray::*)(int, int)>(&System::Array::SorterGenericArray::InsertionSort)> {
  static const MethodInfo* get() {
    static auto* lo = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* hi = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Array::SorterGenericArray), "InsertionSort", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{lo, hi});
  }
};
