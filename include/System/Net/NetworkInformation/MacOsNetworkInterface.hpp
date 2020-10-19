// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Net.NetworkInformation.UnixNetworkInterface
#include "System/Net/NetworkInformation/UnixNetworkInterface.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net::NetworkInformation
namespace System::Net::NetworkInformation {
  // Forward declaring type: IPInterfaceProperties
  class IPInterfaceProperties;
  // Forward declaring type: OperationalStatus
  struct OperationalStatus;
}
// Completed forward declares
// Type namespace: System.Net.NetworkInformation
namespace System::Net::NetworkInformation {
  // Autogenerated type: System.Net.NetworkInformation.MacOsNetworkInterface
  class MacOsNetworkInterface : public System::Net::NetworkInformation::UnixNetworkInterface {
    public:
    // private System.UInt32 _ifa_flags
    // Offset: 0x34
    uint ifa_flags;
    // Creating conversion operator: operator uint
    constexpr operator uint() const noexcept {
      return ifa_flags;
    }
    // System.Void .ctor(System.String name, System.UInt32 ifa_flags)
    // Offset: 0x10C5684
    static MacOsNetworkInterface* New_ctor(::Il2CppString* name, uint ifa_flags);
    // public override System.Net.NetworkInformation.IPInterfaceProperties GetIPProperties()
    // Offset: 0x10C56AC
    // Implemented from: System.Net.NetworkInformation.NetworkInterface
    // Base method: System.Net.NetworkInformation.IPInterfaceProperties NetworkInterface::GetIPProperties()
    System::Net::NetworkInformation::IPInterfaceProperties* GetIPProperties();
    // public override System.Net.NetworkInformation.OperationalStatus get_OperationalStatus()
    // Offset: 0x10C5738
    // Implemented from: System.Net.NetworkInformation.NetworkInterface
    // Base method: System.Net.NetworkInformation.OperationalStatus NetworkInterface::get_OperationalStatus()
    System::Net::NetworkInformation::OperationalStatus get_OperationalStatus();
  }; // System.Net.NetworkInformation.MacOsNetworkInterface
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Net::NetworkInformation::MacOsNetworkInterface*, "System.Net.NetworkInformation", "MacOsNetworkInterface");
#pragma pack(pop)
