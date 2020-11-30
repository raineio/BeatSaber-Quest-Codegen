// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Net.NetworkInformation.UnixIPInterfaceProperties
#include "System/Net/NetworkInformation/UnixIPInterfaceProperties.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net::NetworkInformation
namespace System::Net::NetworkInformation {
  // Forward declaring type: MacOsNetworkInterface
  class MacOsNetworkInterface;
  // Forward declaring type: GatewayIPAddressInformationCollection
  class GatewayIPAddressInformationCollection;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: IPAddress
  class IPAddress;
}
// Completed forward declares
// Type namespace: System.Net.NetworkInformation
namespace System::Net::NetworkInformation {
  // Autogenerated type: System.Net.NetworkInformation.MacOsIPInterfaceProperties
  class MacOsIPInterfaceProperties : public System::Net::NetworkInformation::UnixIPInterfaceProperties {
    public:
    // public System.Void .ctor(System.Net.NetworkInformation.MacOsNetworkInterface iface, System.Collections.Generic.List`1<System.Net.IPAddress> addresses)
    // Offset: 0x119AD04
    static MacOsIPInterfaceProperties* New_ctor(System::Net::NetworkInformation::MacOsNetworkInterface* iface, System::Collections::Generic::List_1<System::Net::IPAddress*>* addresses);
    // static private System.Boolean ParseRouteInfo_internal(System.String iface, out System.String[] gw_addr_list)
    // Offset: 0x119AD80
    static bool ParseRouteInfo_internal(::Il2CppString* iface, ::Array<::Il2CppString*>*& gw_addr_list);
    // public override System.Net.NetworkInformation.GatewayIPAddressInformationCollection get_GatewayAddresses()
    // Offset: 0x119AD84
    // Implemented from: System.Net.NetworkInformation.IPInterfaceProperties
    // Base method: System.Net.NetworkInformation.GatewayIPAddressInformationCollection IPInterfaceProperties::get_GatewayAddresses()
    System::Net::NetworkInformation::GatewayIPAddressInformationCollection* get_GatewayAddresses();
  }; // System.Net.NetworkInformation.MacOsIPInterfaceProperties
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Net::NetworkInformation::MacOsIPInterfaceProperties*, "System.Net.NetworkInformation", "MacOsIPInterfaceProperties");
#pragma pack(pop)