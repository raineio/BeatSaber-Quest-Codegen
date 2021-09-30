// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include <stdint.h>
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Type namespace: System.Net.NetworkInformation.MacOsStructs
namespace System::Net::NetworkInformation::MacOsStructs {
  // Size: 0x2
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.Net.NetworkInformation.MacOsStructs.sockaddr
  // [TokenAttribute] Offset: FFFFFFFF
  struct sockaddr/*, public System::ValueType*/ {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    private:
    #endif
    // public System.Byte sa_len
    // Size: 0x1
    // Offset: 0x0
    uint8_t sa_len;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // public System.Byte sa_family
    // Size: 0x1
    // Offset: 0x1
    uint8_t sa_family;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    public:
    // Creating value type constructor for type: sockaddr
    constexpr sockaddr(uint8_t sa_len_ = {}, uint8_t sa_family_ = {}) noexcept : sa_len{sa_len_}, sa_family{sa_family_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Get instance field reference: public System.Byte sa_len
    uint8_t& dyn_sa_len();
    // Get instance field reference: public System.Byte sa_family
    uint8_t& dyn_sa_family();
  }; // System.Net.NetworkInformation.MacOsStructs.sockaddr
  #pragma pack(pop)
  static check_size<sizeof(sockaddr), 1 + sizeof(uint8_t)> __System_Net_NetworkInformation_MacOsStructs_sockaddrSizeCheck;
  static_assert(sizeof(sockaddr) == 0x2);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Net::NetworkInformation::MacOsStructs::sockaddr, "System.Net.NetworkInformation.MacOsStructs", "sockaddr");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
