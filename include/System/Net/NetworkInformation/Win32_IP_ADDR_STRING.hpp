// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Completed includes
// Begin il2cpp-utils forward declares
struct Il2CppString;
// Completed il2cpp-utils forward declares
// Type namespace: System.Net.NetworkInformation
namespace System::Net::NetworkInformation {
  // Forward declaring type: Win32_IP_ADDR_STRING
  struct Win32_IP_ADDR_STRING;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Net::NetworkInformation::Win32_IP_ADDR_STRING, "System.Net.NetworkInformation", "Win32_IP_ADDR_STRING");
// Type namespace: System.Net.NetworkInformation
namespace System::Net::NetworkInformation {
  // Size: 0x1C
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.Net.NetworkInformation.Win32_IP_ADDR_STRING
  // [TokenAttribute] Offset: FFFFFFFF
  struct Win32_IP_ADDR_STRING/*, public System::ValueType*/ {
    public:
    public:
    // public System.IntPtr Next
    // Size: 0x8
    // Offset: 0x0
    System::IntPtr Next;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    // public System.String IpAddress
    // Size: 0x8
    // Offset: 0x8
    ::Il2CppString* IpAddress;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.String IpMask
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* IpMask;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.UInt32 Context
    // Size: 0x4
    // Offset: 0x18
    uint Context;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    public:
    // Creating value type constructor for type: Win32_IP_ADDR_STRING
    constexpr Win32_IP_ADDR_STRING(System::IntPtr Next_ = {}, ::Il2CppString* IpAddress_ = {}, ::Il2CppString* IpMask_ = {}, uint Context_ = {}) noexcept : Next{Next_}, IpAddress{IpAddress_}, IpMask{IpMask_}, Context{Context_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Get instance field reference: public System.IntPtr Next
    System::IntPtr& dyn_Next();
    // Get instance field reference: public System.String IpAddress
    ::Il2CppString*& dyn_IpAddress();
    // Get instance field reference: public System.String IpMask
    ::Il2CppString*& dyn_IpMask();
    // Get instance field reference: public System.UInt32 Context
    uint& dyn_Context();
  }; // System.Net.NetworkInformation.Win32_IP_ADDR_STRING
  #pragma pack(pop)
  static check_size<sizeof(Win32_IP_ADDR_STRING), 24 + sizeof(uint)> __System_Net_NetworkInformation_Win32_IP_ADDR_STRINGSizeCheck;
  static_assert(sizeof(Win32_IP_ADDR_STRING) == 0x1C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
