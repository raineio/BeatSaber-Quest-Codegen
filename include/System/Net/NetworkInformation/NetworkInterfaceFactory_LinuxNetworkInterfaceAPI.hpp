// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Net.NetworkInformation.NetworkInterfaceFactory
#include "System/Net/NetworkInformation/NetworkInterfaceFactory.hpp"
// Including type: System.Net.NetworkInformation.NetworkInterfaceFactory/UnixNetworkInterfaceAPI
#include "System/Net/NetworkInformation/NetworkInterfaceFactory_UnixNetworkInterfaceAPI.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IntPtr
  struct IntPtr;
}
// Forward declaring namespace: System::Net::NetworkInformation
namespace System::Net::NetworkInformation {
  // Forward declaring type: NetworkInterface
  class NetworkInterface;
}
// Completed forward declares
// Type namespace: System.Net.NetworkInformation
namespace System::Net::NetworkInformation {
  // Autogenerated type: System.Net.NetworkInformation.NetworkInterfaceFactory/LinuxNetworkInterfaceAPI
  class NetworkInterfaceFactory::LinuxNetworkInterfaceAPI : public System::Net::NetworkInformation::NetworkInterfaceFactory::UnixNetworkInterfaceAPI {
    public:
    // static private System.Void FreeInterfaceAddresses(System.IntPtr ifap)
    // Offset: 0x10C5F4C
    static void FreeInterfaceAddresses(System::IntPtr ifap);
    // static private System.Int32 GetInterfaceAddresses(out System.IntPtr ifap)
    // Offset: 0x10C5FD0
    static int GetInterfaceAddresses(System::IntPtr& ifap);
    // public override System.Net.NetworkInformation.NetworkInterface[] GetAllNetworkInterfaces()
    // Offset: 0x10C6054
    // Implemented from: System.Net.NetworkInformation.NetworkInterfaceFactory
    // Base method: System.Net.NetworkInformation.NetworkInterface[] NetworkInterfaceFactory::GetAllNetworkInterfaces()
    ::Array<System::Net::NetworkInformation::NetworkInterface*>* GetAllNetworkInterfaces();
    // public System.Void .ctor()
    // Offset: 0x10C5F34
    // Implemented from: System.Net.NetworkInformation.NetworkInterfaceFactory/UnixNetworkInterfaceAPI
    // Base method: System.Void UnixNetworkInterfaceAPI::.ctor()
    // Base method: System.Void NetworkInterfaceFactory::.ctor()
    // Base method: System.Void Object::.ctor()
    static NetworkInterfaceFactory::LinuxNetworkInterfaceAPI* New_ctor();
  }; // System.Net.NetworkInformation.NetworkInterfaceFactory/LinuxNetworkInterfaceAPI
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Net::NetworkInformation::NetworkInterfaceFactory::LinuxNetworkInterfaceAPI*, "System.Net.NetworkInformation", "NetworkInterfaceFactory/LinuxNetworkInterfaceAPI");
#pragma pack(pop)
