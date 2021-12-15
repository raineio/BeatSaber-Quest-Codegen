// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Threading.ThreadPoolWorkQueue
#include "System/Threading/ThreadPoolWorkQueue.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Type namespace: System.Threading
namespace System::Threading {
  // Forward declaring type: SparseArray`1<T>
  template<typename T>
  class SparseArray_1;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::Threading::ThreadPoolWorkQueue::SparseArray_1, "System.Threading", "ThreadPoolWorkQueue/SparseArray`1");
// Type namespace: System.Threading
namespace System::Threading {
  // WARNING Size may be invalid!
  // Autogenerated type: System.Threading.ThreadPoolWorkQueue/System.Threading.SparseArray`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename T>
  class ThreadPoolWorkQueue::SparseArray_1 : public ::Il2CppObject {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private T[] m_array
    // Size: 0x8
    // Offset: 0x0
    ::ArrayW<T> m_array;
    // Field size check
    static_assert(sizeof(::ArrayW<T>) == 0x8);
    public:
    // Creating conversion operator: operator ::ArrayW<T>
    constexpr operator ::ArrayW<T>() const noexcept {
      return m_array;
    }
    // Autogenerated instance field getter
    // Get instance field: private T[] m_array
    ::ArrayW<T>& dyn_m_array() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Threading::ThreadPoolWorkQueue::SparseArray_1::dyn_m_array");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "m_array"))->offset;
      return *reinterpret_cast<::ArrayW<T>*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // T[] get_Current()
    // Offset: 0xFFFFFFFF
    ::ArrayW<T> get_Current() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Threading::ThreadPoolWorkQueue::SparseArray_1::get_Current");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_Current", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodThrow<::ArrayW<T>, false>(this, ___internal__method);
    }
    // System.Void .ctor(System.Int32 initialSize)
    // Offset: 0xFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ThreadPoolWorkQueue::SparseArray_1<T>* New_ctor(int initialSize) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Threading::ThreadPoolWorkQueue::SparseArray_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ThreadPoolWorkQueue::SparseArray_1<T>*, creationType>(initialSize)));
    }
    // System.Int32 Add(T e)
    // Offset: 0xFFFFFFFF
    int Add(T e) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Threading::ThreadPoolWorkQueue::SparseArray_1::Add");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Add", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(e)})));
      return ::il2cpp_utils::RunMethodThrow<int, false>(this, ___internal__method, e);
    }
    // System.Void Remove(T e)
    // Offset: 0xFFFFFFFF
    void Remove(T e) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Threading::ThreadPoolWorkQueue::SparseArray_1::Remove");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Remove", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(e)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, e);
    }
  }; // System.Threading.ThreadPoolWorkQueue/System.Threading.SparseArray`1
  // Could not write size check! Type: System.Threading.ThreadPoolWorkQueue/System.Threading.SparseArray`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
