// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: IPacketPool
#include "GlobalNamespace/IPacketPool.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: IPacketPool`1<T>
  template<typename T>
  class IPacketPool_1;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::IPacketPool_1, "", "IPacketPool`1");
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: IPacketPool`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename T>
  class IPacketPool_1/*, public ::GlobalNamespace::IPacketPool*/ {
    public:
    // Creating interface conversion operator: operator ::GlobalNamespace::IPacketPool
    operator ::GlobalNamespace::IPacketPool() noexcept {
      return *reinterpret_cast<::GlobalNamespace::IPacketPool*>(this);
    }
    // Creating interface conversion operator: i_IPacketPool
    inline ::GlobalNamespace::IPacketPool* i_IPacketPool() noexcept {
      return reinterpret_cast<::GlobalNamespace::IPacketPool*>(this);
    }
    // public T Obtain()
    // Offset: 0xFFFFFFFFFFFFFFFF
    T Obtain() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::IPacketPool_1::Obtain");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Obtain", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<T, false>(this, ___internal__method);
    }
    // public System.Void Release(T t)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Release(T t) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::IPacketPool_1::Release");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Release", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(t)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, t);
    }
  }; // IPacketPool`1
  // Could not write size check! Type: IPacketPool`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
