// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include <stdint.h>
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Type namespace: System.Net.NetworkInformation.MacOsStructs
namespace System::Net::NetworkInformation::MacOsStructs {
  // Forward declaring type: in6_addr
  struct in6_addr;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Net::NetworkInformation::MacOsStructs::in6_addr, "System.Net.NetworkInformation.MacOsStructs", "in6_addr");
// Type namespace: System.Net.NetworkInformation.MacOsStructs
namespace System::Net::NetworkInformation::MacOsStructs {
  // Size: 0x8
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.Net.NetworkInformation.MacOsStructs.in6_addr
  // [TokenAttribute] Offset: FFFFFFFF
  struct in6_addr/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.Byte[] u6_addr8
    // Size: 0x8
    // Offset: 0x0
    ::ArrayW<uint8_t> u6_addr8;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    public:
    // Creating value type constructor for type: in6_addr
    constexpr in6_addr(::ArrayW<uint8_t> u6_addr8_ = ::ArrayW<uint8_t>(static_cast<void*>(nullptr))) noexcept : u6_addr8{u6_addr8_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: i_ValueType
    inline ::System::ValueType* i_ValueType() noexcept {
      return reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating conversion operator: operator ::ArrayW<uint8_t>
    constexpr operator ::ArrayW<uint8_t>() const noexcept {
      return u6_addr8;
    }
    // Get instance field reference: public System.Byte[] u6_addr8
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn_u6_addr8();
  }; // System.Net.NetworkInformation.MacOsStructs.in6_addr
  #pragma pack(pop)
  static check_size<sizeof(in6_addr), 0 + sizeof(::ArrayW<uint8_t>)> __System_Net_NetworkInformation_MacOsStructs_in6_addrSizeCheck;
  static_assert(sizeof(in6_addr) == 0x8);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
