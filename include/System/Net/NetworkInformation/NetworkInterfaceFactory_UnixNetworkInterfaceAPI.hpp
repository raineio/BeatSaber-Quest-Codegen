// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Net.NetworkInformation.NetworkInterfaceFactory
#include "System/Net/NetworkInformation/NetworkInterfaceFactory.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IntPtr
  struct IntPtr;
}
// Completed forward declares
// Type namespace: System.Net.NetworkInformation
namespace System::Net::NetworkInformation {
  // Autogenerated type: System.Net.NetworkInformation.NetworkInterfaceFactory/UnixNetworkInterfaceAPI
  class NetworkInterfaceFactory::UnixNetworkInterfaceAPI : public System::Net::NetworkInformation::NetworkInterfaceFactory {
    public:
    // static protected System.Int32 getifaddrs(out System.IntPtr ifap)
    // Offset: 0x10C5FD4
    static int getifaddrs(System::IntPtr& ifap);
    // static protected System.Void freeifaddrs(System.IntPtr ifap)
    // Offset: 0x10C5F50
    static void freeifaddrs(System::IntPtr ifap);
    // protected System.Void .ctor()
    // Offset: 0x10C6A40
    // Implemented from: System.Net.NetworkInformation.NetworkInterfaceFactory
    // Base method: System.Void NetworkInterfaceFactory::.ctor()
    // Base method: System.Void Object::.ctor()
    static NetworkInterfaceFactory::UnixNetworkInterfaceAPI* New_ctor();
  }; // System.Net.NetworkInformation.NetworkInterfaceFactory/UnixNetworkInterfaceAPI
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Net::NetworkInformation::NetworkInterfaceFactory::UnixNetworkInterfaceAPI*, "System.Net.NetworkInformation", "NetworkInterfaceFactory/UnixNetworkInterfaceAPI");
#pragma pack(pop)
