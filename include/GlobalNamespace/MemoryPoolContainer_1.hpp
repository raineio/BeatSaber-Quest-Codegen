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
  // Forward declaring type: MemoryPoolContainer`1<T>
  template<typename T>
  class MemoryPoolContainer_1;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(GlobalNamespace::MemoryPoolContainer_1, "", "MemoryPoolContainer`1");
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: MemoryPoolContainer`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename T>
  class MemoryPoolContainer_1 : public ::Il2CppObject {
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
    // private readonly LazyCopyHashSet`1<T> _activeItems
    // Size: 0x8
    // Offset: 0x0
    GlobalNamespace::LazyCopyHashSet_1<T>* activeItems;
    // Field size check
    static_assert(sizeof(GlobalNamespace::LazyCopyHashSet_1<T>*) == 0x8);
    // private readonly Zenject.IMemoryPool`1<T> _memoryPool
    // Size: 0x8
    // Offset: 0x0
    Zenject::IMemoryPool_1<T>* memoryPool;
    // Field size check
    static_assert(sizeof(Zenject::IMemoryPool_1<T>*) == 0x8);
    public:
    // Autogenerated instance field getter
    // Get instance field: private readonly LazyCopyHashSet`1<T> _activeItems
    GlobalNamespace::LazyCopyHashSet_1<T>*& dyn__activeItems() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MemoryPoolContainer_1::dyn__activeItems");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_activeItems"))->offset;
      return *reinterpret_cast<GlobalNamespace::LazyCopyHashSet_1<T>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private readonly Zenject.IMemoryPool`1<T> _memoryPool
    Zenject::IMemoryPool_1<T>*& dyn__memoryPool() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MemoryPoolContainer_1::dyn__memoryPool");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_memoryPool"))->offset;
      return *reinterpret_cast<Zenject::IMemoryPool_1<T>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // public System.Collections.Generic.List`1<T> get_activeItems()
    // Offset: 0xFFFFFFFF
    System::Collections::Generic::List_1<T>* get_activeItems() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MemoryPoolContainer_1::get_activeItems");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_activeItems", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodThrow<System::Collections::Generic::List_1<T>*, false>(this, ___internal__method);
    }
    // public System.Void .ctor(Zenject.IMemoryPool`1<T> memoryPool)
    // Offset: 0xFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MemoryPoolContainer_1<T>* New_ctor(Zenject::IMemoryPool_1<T>* memoryPool) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MemoryPoolContainer_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MemoryPoolContainer_1<T>*, creationType>(memoryPool)));
    }
    // public T Spawn()
    // Offset: 0xFFFFFFFF
    T Spawn() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MemoryPoolContainer_1::Spawn");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Spawn", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodThrow<T, false>(this, ___internal__method);
    }
    // public System.Void Despawn(T item)
    // Offset: 0xFFFFFFFF
    void Despawn(T item) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MemoryPoolContainer_1::Despawn");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Despawn", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(item)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, item);
    }
  }; // MemoryPoolContainer`1
  // Could not write size check! Type: MemoryPoolContainer`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
