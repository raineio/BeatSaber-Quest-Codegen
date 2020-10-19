// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Net.NetworkInformation.IPInterfaceProperties
#include "System/Net/NetworkInformation/IPInterfaceProperties.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net::NetworkInformation
namespace System::Net::NetworkInformation {
  // Forward declaring type: UnixNetworkInterface
  class UnixNetworkInterface;
  // Forward declaring type: UnicastIPAddressInformationCollection
  class UnicastIPAddressInformationCollection;
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
// Forward declaring namespace: System::Text::RegularExpressions
namespace System::Text::RegularExpressions {
  // Forward declaring type: Regex
  class Regex;
}
// Completed forward declares
// Type namespace: System.Net.NetworkInformation
namespace System::Net::NetworkInformation {
  // Autogenerated type: System.Net.NetworkInformation.UnixIPInterfaceProperties
  class UnixIPInterfaceProperties : public System::Net::NetworkInformation::IPInterfaceProperties {
    public:
    // protected System.Net.NetworkInformation.UnixNetworkInterface iface
    // Offset: 0x10
    System::Net::NetworkInformation::UnixNetworkInterface* iface;
    // private System.Collections.Generic.List`1<System.Net.IPAddress> addresses
    // Offset: 0x18
    System::Collections::Generic::List_1<System::Net::IPAddress*>* addresses;
    // Get static field: static private System.Text.RegularExpressions.Regex ns
    static System::Text::RegularExpressions::Regex* _get_ns();
    // Set static field: static private System.Text.RegularExpressions.Regex ns
    static void _set_ns(System::Text::RegularExpressions::Regex* value);
    // Get static field: static private System.Text.RegularExpressions.Regex search
    static System::Text::RegularExpressions::Regex* _get_search();
    // Set static field: static private System.Text.RegularExpressions.Regex search
    static void _set_search(System::Text::RegularExpressions::Regex* value);
    // public System.Void .ctor(System.Net.NetworkInformation.UnixNetworkInterface iface, System.Collections.Generic.List`1<System.Net.IPAddress> addresses)
    // Offset: 0x10C4530
    static UnixIPInterfaceProperties* New_ctor(System::Net::NetworkInformation::UnixNetworkInterface* iface, System::Collections::Generic::List_1<System::Net::IPAddress*>* addresses);
    // static private System.Void .cctor()
    // Offset: 0x10C8018
    static void _cctor();
    // public override System.Net.NetworkInformation.UnicastIPAddressInformationCollection get_UnicastAddresses()
    // Offset: 0x10C7DF8
    // Implemented from: System.Net.NetworkInformation.IPInterfaceProperties
    // Base method: System.Net.NetworkInformation.UnicastIPAddressInformationCollection IPInterfaceProperties::get_UnicastAddresses()
    System::Net::NetworkInformation::UnicastIPAddressInformationCollection* get_UnicastAddresses();
  }; // System.Net.NetworkInformation.UnixIPInterfaceProperties
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Net::NetworkInformation::UnixIPInterfaceProperties*, "System.Net.NetworkInformation", "UnixIPInterfaceProperties");
#pragma pack(pop)
