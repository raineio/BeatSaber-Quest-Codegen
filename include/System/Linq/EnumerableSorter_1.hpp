// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Type namespace: System.Linq
namespace System::Linq {
  // WARNING Size may be invalid!
  // Autogenerated type: System.Linq.EnumerableSorter`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename TElement>
  class EnumerableSorter_1 : public ::Il2CppObject {
    public:
    // System.Void ComputeKeys(TElement[] elements, System.Int32 count)
    // Offset: 0xFFFFFFFF
    void ComputeKeys(::ArrayW<TElement> elements, int count) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Linq::EnumerableSorter_1::ComputeKeys");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "ComputeKeys", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(elements), ::il2cpp_utils::ExtractType(count)})));
      auto ___instance_arg = this;
      ::il2cpp_utils::RunMethodThrow<void, false>(___instance_arg, ___internal__method, elements, count);
    }
    // System.Int32 CompareKeys(System.Int32 index1, System.Int32 index2)
    // Offset: 0xFFFFFFFF
    int CompareKeys(int index1, int index2) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Linq::EnumerableSorter_1::CompareKeys");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "CompareKeys", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(index1), ::il2cpp_utils::ExtractType(index2)})));
      auto ___instance_arg = this;
      return ::il2cpp_utils::RunMethodThrow<int, false>(___instance_arg, ___internal__method, index1, index2);
    }
    // System.Int32[] Sort(TElement[] elements, System.Int32 count)
    // Offset: 0xFFFFFFFF
    ::ArrayW<int> Sort(::ArrayW<TElement> elements, int count) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Linq::EnumerableSorter_1::Sort");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Sort", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(elements), ::il2cpp_utils::ExtractType(count)})));
      auto ___instance_arg = this;
      return ::il2cpp_utils::RunMethodThrow<::ArrayW<int>, false>(___instance_arg, ___internal__method, elements, count);
    }
    // private System.Void QuickSort(System.Int32[] map, System.Int32 left, System.Int32 right)
    // Offset: 0xFFFFFFFF
    void QuickSort(::ArrayW<int> map, int left, int right) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Linq::EnumerableSorter_1::QuickSort");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "QuickSort", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(map), ::il2cpp_utils::ExtractType(left), ::il2cpp_utils::ExtractType(right)})));
      auto ___instance_arg = this;
      ::il2cpp_utils::RunMethodThrow<void, false>(___instance_arg, ___internal__method, map, left, right);
    }
    // protected System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EnumerableSorter_1<TElement>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Linq::EnumerableSorter_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EnumerableSorter_1<TElement>*, creationType>()));
    }
  }; // System.Linq.EnumerableSorter`1
  // Could not write size check! Type: System.Linq.EnumerableSorter`1 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::Linq::EnumerableSorter_1, "System.Linq", "EnumerableSorter`1");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
