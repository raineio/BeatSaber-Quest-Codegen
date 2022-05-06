// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Threading.SparselyPopulatedArrayAddInfo`1
#include "System/Threading/SparselyPopulatedArrayAddInfo_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: SparselyPopulatedArrayFragment`1<T>
  template<typename T>
  class SparselyPopulatedArrayFragment_1;
}
// Completed forward declares
// Type namespace: System.Threading
namespace System::Threading {
  // Forward declaring type: SparselyPopulatedArray`1<T>
  template<typename T>
  class SparselyPopulatedArray_1;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Threading::SparselyPopulatedArray_1, "System.Threading", "SparselyPopulatedArray`1");
// Type namespace: System.Threading
namespace System::Threading {
  // WARNING Size may be invalid!
  // Autogenerated type: System.Threading.SparselyPopulatedArray`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename T>
  class SparselyPopulatedArray_1 : public ::Il2CppObject {
    public:
    public:
    // private System.Threading.SparselyPopulatedArrayFragment`1<T> m_tail
    // Size: 0x8
    // Offset: 0x0
    ::System::Threading::SparselyPopulatedArrayFragment_1<T>* m_tail;
    // Field size check
    static_assert(sizeof(::System::Threading::SparselyPopulatedArrayFragment_1<T>*) == 0x8);
    public:
    // Creating conversion operator: operator ::System::Threading::SparselyPopulatedArrayFragment_1<T>*
    constexpr operator ::System::Threading::SparselyPopulatedArrayFragment_1<T>*() const noexcept {
      return m_tail;
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Threading.SparselyPopulatedArrayFragment`1<T> m_tail
    [[deprecated("Use field access instead!")]] ::System::Threading::SparselyPopulatedArrayFragment_1<T>*& dyn_m_tail() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Threading::SparselyPopulatedArray_1::dyn_m_tail");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "m_tail"))->offset;
      return *reinterpret_cast<::System::Threading::SparselyPopulatedArrayFragment_1<T>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // System.Threading.SparselyPopulatedArrayFragment`1<T> get_Tail()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Threading::SparselyPopulatedArrayFragment_1<T>* get_Tail() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Threading::SparselyPopulatedArray_1::get_Tail");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_Tail", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<::System::Threading::SparselyPopulatedArrayFragment_1<T>*, false>(this, ___internal__method);
    }
    // System.Void .ctor(System.Int32 initialSize)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SparselyPopulatedArray_1<T>* New_ctor(int initialSize) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Threading::SparselyPopulatedArray_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SparselyPopulatedArray_1<T>*, creationType>(initialSize)));
    }
    // System.Threading.SparselyPopulatedArrayAddInfo`1<T> Add(T element)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Threading::SparselyPopulatedArrayAddInfo_1<T> Add(T element) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Threading::SparselyPopulatedArray_1::Add");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Add", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(element)})));
      return ::il2cpp_utils::RunMethodRethrow<::System::Threading::SparselyPopulatedArrayAddInfo_1<T>, false>(this, ___internal__method, element);
    }
  }; // System.Threading.SparselyPopulatedArray`1
  // Could not write size check! Type: System.Threading.SparselyPopulatedArray`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
