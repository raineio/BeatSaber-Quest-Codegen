// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Net.NetworkInformation.UnicastIPAddressInformation
#include "System/Net/NetworkInformation/UnicastIPAddressInformation.hpp"
// Including type: System.Net.NetworkInformation.Win32_IP_ADAPTER_UNICAST_ADDRESS
#include "System/Net/NetworkInformation/Win32_IP_ADAPTER_UNICAST_ADDRESS.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: IPAddress
  class IPAddress;
}
// Forward declaring namespace: System::Net::Sockets
namespace System::Net::Sockets {
  // Forward declaring type: AddressFamily
  struct AddressFamily;
}
// Completed forward declares
// Type namespace: System.Net.NetworkInformation
namespace System::Net::NetworkInformation {
  // Autogenerated type: System.Net.NetworkInformation.Win32UnicastIPAddressInformation
  class Win32UnicastIPAddressInformation : public System::Net::NetworkInformation::UnicastIPAddressInformation {
    public:
    // private System.Net.NetworkInformation.Win32_IP_ADAPTER_UNICAST_ADDRESS info
    // Offset: 0x10
    System::Net::NetworkInformation::Win32_IP_ADAPTER_UNICAST_ADDRESS info;
    // private System.Net.IPAddress ipv4Mask
    // Offset: 0x50
    System::Net::IPAddress* ipv4Mask;
    // public System.Void .ctor(System.Net.NetworkInformation.Win32_IP_ADAPTER_UNICAST_ADDRESS info)
    // Offset: 0x10C890C
    static Win32UnicastIPAddressInformation* New_ctor(System::Net::NetworkInformation::Win32_IP_ADAPTER_UNICAST_ADDRESS info);
    // static private System.Net.IPAddress PrefixLengthToSubnetMask(System.Byte prefixLength, System.Net.Sockets.AddressFamily family)
    // Offset: 0x10C8B68
    static System::Net::IPAddress* PrefixLengthToSubnetMask(uint8_t prefixLength, System::Net::Sockets::AddressFamily family);
    // public override System.Net.IPAddress get_Address()
    // Offset: 0x10C8C54
    // Implemented from: System.Net.NetworkInformation.IPAddressInformation
    // Base method: System.Net.IPAddress IPAddressInformation::get_Address()
    System::Net::IPAddress* get_Address();
  }; // System.Net.NetworkInformation.Win32UnicastIPAddressInformation
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Net::NetworkInformation::Win32UnicastIPAddressInformation*, "System.Net.NetworkInformation", "Win32UnicastIPAddressInformation");
#pragma pack(pop)
