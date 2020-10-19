// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Net.NetworkInformation.NetworkInterface
#include "System/Net/NetworkInformation/NetworkInterface.hpp"
// Including type: System.Net.NetworkInformation.NetworkInterfaceType
#include "System/Net/NetworkInformation/NetworkInterfaceType.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net::NetworkInformation
namespace System::Net::NetworkInformation {
  // Forward declaring type: IPInterfaceProperties
  class IPInterfaceProperties;
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
  // Autogenerated type: System.Net.NetworkInformation.UnixNetworkInterface
  class UnixNetworkInterface : public System::Net::NetworkInformation::NetworkInterface {
    public:
    // protected System.Net.NetworkInformation.IPInterfaceProperties ipproperties
    // Offset: 0x10
    System::Net::NetworkInformation::IPInterfaceProperties* ipproperties;
    // private System.String name
    // Offset: 0x18
    ::Il2CppString* name;
    // protected System.Collections.Generic.List`1<System.Net.IPAddress> addresses
    // Offset: 0x20
    System::Collections::Generic::List_1<System::Net::IPAddress*>* addresses;
    // private System.Byte[] macAddress
    // Offset: 0x28
    ::Array<uint8_t>* macAddress;
    // private System.Net.NetworkInformation.NetworkInterfaceType type
    // Offset: 0x30
    System::Net::NetworkInformation::NetworkInterfaceType type;
    // System.Void .ctor(System.String name)
    // Offset: 0x10C4DDC
    static UnixNetworkInterface* New_ctor(::Il2CppString* name);
    // System.Void AddAddress(System.Net.IPAddress address)
    // Offset: 0x10C69A4
    void AddAddress(System::Net::IPAddress* address);
    // System.Void SetLinkLayerInfo(System.Int32 index, System.Byte[] macAddress, System.Net.NetworkInformation.NetworkInterfaceType type)
    // Offset: 0x10C6A0C
    void SetLinkLayerInfo(int index, ::Array<uint8_t>* macAddress, System::Net::NetworkInformation::NetworkInterfaceType type);
    // public override System.String get_Name()
    // Offset: 0x10C80D0
    // Implemented from: System.Net.NetworkInformation.NetworkInterface
    // Base method: System.String NetworkInterface::get_Name()
    ::Il2CppString* get_Name();
    // public override System.Net.NetworkInformation.NetworkInterfaceType get_NetworkInterfaceType()
    // Offset: 0x10C80D8
    // Implemented from: System.Net.NetworkInformation.NetworkInterface
    // Base method: System.Net.NetworkInformation.NetworkInterfaceType NetworkInterface::get_NetworkInterfaceType()
    System::Net::NetworkInformation::NetworkInterfaceType get_NetworkInterfaceType();
  }; // System.Net.NetworkInformation.UnixNetworkInterface
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Net::NetworkInformation::UnixNetworkInterface*, "System.Net.NetworkInformation", "UnixNetworkInterface");
#pragma pack(pop)
