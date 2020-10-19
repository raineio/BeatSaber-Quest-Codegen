// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: Mono.RuntimeStructs
#include "Mono/RuntimeStructs.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Mono
namespace Mono {
  // Forward declaring type: RuntimeClassHandle
  struct RuntimeClassHandle;
}
// Completed forward declares
// Type namespace: Mono
namespace Mono {
  // Autogenerated type: Mono.RuntimeRemoteClassHandle
  struct RuntimeRemoteClassHandle : public System::ValueType {
    public:
    // private Mono.RuntimeStructs/RemoteClass* value
    // Offset: 0x0
    Mono::RuntimeStructs::RemoteClass* value;
    // Creating value type constructor for type: RuntimeRemoteClassHandle
    constexpr RuntimeRemoteClassHandle(Mono::RuntimeStructs::RemoteClass* value_ = {}) noexcept : value{value_} {}
    // Creating conversion operator: operator Mono::RuntimeStructs::RemoteClass*
    constexpr operator Mono::RuntimeStructs::RemoteClass*() const noexcept {
      return value;
    }
    // Mono.RuntimeClassHandle get_ProxyClass()
    // Offset: 0xC71B14
    Mono::RuntimeClassHandle get_ProxyClass();
  }; // Mono.RuntimeRemoteClassHandle
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Mono::RuntimeRemoteClassHandle, "Mono", "RuntimeRemoteClassHandle");
#pragma pack(pop)
