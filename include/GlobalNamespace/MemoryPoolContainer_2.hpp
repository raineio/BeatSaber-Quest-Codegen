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
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: LazyCopyHashSet`1<T>
  template<typename T>
  class LazyCopyHashSet_1;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: IMemoryPool`1<TValue>
  template<typename TValue>
  class IMemoryPool_1;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: MemoryPoolContainer`2<T0, T1>
  template<typename T0, typename T1>
  class MemoryPoolContainer_2;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::MemoryPoolContainer_2, "", "MemoryPoolContainer`2");
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: MemoryPoolContainer`2
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename T0, typename T1>
  class MemoryPoolContainer_2 : public ::Il2CppObject {
    public:
    public:
    // private readonly LazyCopyHashSet`1<T1> _activeItems
    // Size: 0x8
    // Offset: 0x0
    ::GlobalNamespace::LazyCopyHashSet_1<T1>* activeItems;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::LazyCopyHashSet_1<T1>*) == 0x8);
    // private readonly Zenject.IMemoryPool`1<T0> _memoryPool
    // Size: 0x8
    // Offset: 0x0
    ::Zenject::IMemoryPool_1<T0>* memoryPool;
    // Field size check
    static_assert(sizeof(::Zenject::IMemoryPool_1<T0>*) == 0x8);
    public:
    // Autogenerated instance field getter
    // Get instance field: private readonly LazyCopyHashSet`1<T1> _activeItems
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::LazyCopyHashSet_1<T1>*& dyn__activeItems() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MemoryPoolContainer_2::dyn__activeItems");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_activeItems"))->offset;
      return *reinterpret_cast<::GlobalNamespace::LazyCopyHashSet_1<T1>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private readonly Zenject.IMemoryPool`1<T0> _memoryPool
    [[deprecated("Use field access instead!")]] ::Zenject::IMemoryPool_1<T0>*& dyn__memoryPool() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MemoryPoolContainer_2::dyn__memoryPool");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_memoryPool"))->offset;
      return *reinterpret_cast<::Zenject::IMemoryPool_1<T0>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // public System.Collections.Generic.List`1<T1> get_activeItems()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Collections::Generic::List_1<T1>* get_activeItems() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MemoryPoolContainer_2::get_activeItems");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_activeItems", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<::System::Collections::Generic::List_1<T1>*, false>(this, ___internal__method);
    }
    // public System.Void .ctor(Zenject.IMemoryPool`1<T0> memoryPool)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MemoryPoolContainer_2<T0, T1>* New_ctor(::Zenject::IMemoryPool_1<T0>* memoryPool) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MemoryPoolContainer_2::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MemoryPoolContainer_2<T0, T1>*, creationType>(memoryPool)));
    }
    // public T0 Spawn()
    // Offset: 0xFFFFFFFFFFFFFFFF
    T0 Spawn() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MemoryPoolContainer_2::Spawn");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Spawn", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<T0, false>(this, ___internal__method);
    }
    // public System.Void Despawn(T0 item)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Despawn(T0 item) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MemoryPoolContainer_2::Despawn");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Despawn", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(item)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, item);
    }
  }; // MemoryPoolContainer`2
  // Could not write size check! Type: MemoryPoolContainer`2 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
