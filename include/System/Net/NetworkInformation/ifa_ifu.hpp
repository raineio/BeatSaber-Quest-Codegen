// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Completed includes
// Type namespace: System.Net.NetworkInformation
namespace System::Net::NetworkInformation {
  // WARNING Size may be invalid!
  // WARNING Layout: Explicit may not be correctly taken into account!
  // Autogenerated type: System.Net.NetworkInformation.ifa_ifu
  // [TokenAttribute] Offset: FFFFFFFF
  struct ifa_ifu/*, public System::ValueType*/ {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    private:
    #endif
    // public System.IntPtr ifu_broadaddr
    // Size: 0x8
    // Offset: 0x0
    System::IntPtr ifu_broadaddr;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    // public System.IntPtr ifu_dstaddr
    // Size: 0x8
    // Offset: 0x0
    System::IntPtr ifu_dstaddr;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    public:
    // Creating value type constructor for type: ifa_ifu
    constexpr ifa_ifu(System::IntPtr ifu_broadaddr_ = {}, System::IntPtr ifu_dstaddr_ = {}) noexcept : ifu_broadaddr{ifu_broadaddr_}, ifu_dstaddr{ifu_dstaddr_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Get instance field reference: public System.IntPtr ifu_broadaddr
    System::IntPtr& dyn_ifu_broadaddr();
    // Get instance field reference: public System.IntPtr ifu_dstaddr
    System::IntPtr& dyn_ifu_dstaddr();
  }; // System.Net.NetworkInformation.ifa_ifu
  // WARNING Not writing size check since size may be invalid!
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Net::NetworkInformation::ifa_ifu, "System.Net.NetworkInformation", "ifa_ifu");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
