// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: SortedList`2
#include "GlobalNamespace/SortedList_2.hpp"
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
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: ISortedListItemProcessor`1<T>
  template<typename T>
  class ISortedListItemProcessor_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: SortedList`1<TBase>
  template<typename TBase>
  class SortedList_1;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::SortedList_1, "", "SortedList`1");
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: SortedList`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename TBase>
  class SortedList_1 : public ::GlobalNamespace::SortedList_2<TBase, TBase> {
    public:
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SortedList_1<TBase>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::SortedList_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SortedList_1<TBase>*, creationType>()));
    }
    // public System.Void .ctor(ISortedListItemProcessor`1<TBase> sortedListDataProcessor)
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: SortedList`2
    // Base method: System.Void SortedList_2::.ctor(ISortedListItemProcessor`1<TBase> sortedListDataProcessor)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SortedList_1<TBase>* New_ctor(::GlobalNamespace::ISortedListItemProcessor_1<TBase>* sortedListDataProcessor) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::SortedList_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SortedList_1<TBase>*, creationType>(sortedListDataProcessor)));
    }
  }; // SortedList`1
  // Could not write size check! Type: SortedList`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
