// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.PoolableManager
#include "Zenject/PoolableManager.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: IPoolable
  class IPoolable;
}
// Completed forward declares
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Zenject::PoolableManager::PoolableInfo, "Zenject", "PoolableManager/PoolableInfo");
// Type namespace: Zenject
namespace Zenject {
  // Size: 0xC
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Zenject.PoolableManager/Zenject.PoolableInfo
  // [TokenAttribute] Offset: FFFFFFFF
  struct PoolableManager::PoolableInfo/*, public System::ValueType*/ {
    public:
    public:
    // public Zenject.IPoolable Poolable
    // Size: 0x8
    // Offset: 0x0
    Zenject::IPoolable* Poolable;
    // Field size check
    static_assert(sizeof(Zenject::IPoolable*) == 0x8);
    // public System.Int32 Priority
    // Size: 0x4
    // Offset: 0x8
    int Priority;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: PoolableInfo
    constexpr PoolableInfo(Zenject::IPoolable* Poolable_ = {}, int Priority_ = {}) noexcept : Poolable{Poolable_}, Priority{Priority_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Get instance field reference: public Zenject.IPoolable Poolable
    Zenject::IPoolable*& dyn_Poolable();
    // Get instance field reference: public System.Int32 Priority
    int& dyn_Priority();
    // public System.Void .ctor(Zenject.IPoolable poolable, System.Int32 priority)
    // Offset: 0x18DD00C
    // ABORTED: conflicts with another method.  PoolableInfo(Zenject::IPoolable* poolable, int priority);
  }; // Zenject.PoolableManager/Zenject.PoolableInfo
  #pragma pack(pop)
  static check_size<sizeof(PoolableManager::PoolableInfo), 8 + sizeof(int)> __Zenject_PoolableManager_PoolableInfoSizeCheck;
  static_assert(sizeof(PoolableManager::PoolableInfo) == 0xC);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::PoolableManager::PoolableInfo::PoolableInfo
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
