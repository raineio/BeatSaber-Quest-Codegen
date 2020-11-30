// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Net.NetworkInformation.AlignmentUnion
#include "System/Net/NetworkInformation/AlignmentUnion.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Including type: System.Net.NetworkInformation.NetworkInterfaceType
#include "System/Net/NetworkInformation/NetworkInterfaceType.hpp"
// Including type: System.Net.NetworkInformation.OperationalStatus
#include "System/Net/NetworkInformation/OperationalStatus.hpp"
// Including type: System.Net.NetworkInformation.Win32_SOCKET_ADDRESS
#include "System/Net/NetworkInformation/Win32_SOCKET_ADDRESS.hpp"
// Completed includes
// Type namespace: System.Net.NetworkInformation
namespace System::Net::NetworkInformation {
  // Autogenerated type: System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES
  struct Win32_IP_ADAPTER_ADDRESSES : public System::ValueType {
    public:
    // public System.Net.NetworkInformation.AlignmentUnion Alignment
    // Offset: 0x0
    System::Net::NetworkInformation::AlignmentUnion Alignment;
    // public System.IntPtr Next
    // Offset: 0x8
    System::IntPtr Next;
    // public System.String AdapterName
    // Offset: 0x10
    ::Il2CppString* AdapterName;
    // public System.IntPtr FirstUnicastAddress
    // Offset: 0x18
    System::IntPtr FirstUnicastAddress;
    // public System.IntPtr FirstAnycastAddress
    // Offset: 0x20
    System::IntPtr FirstAnycastAddress;
    // public System.IntPtr FirstMulticastAddress
    // Offset: 0x28
    System::IntPtr FirstMulticastAddress;
    // public System.IntPtr FirstDnsServerAddress
    // Offset: 0x30
    System::IntPtr FirstDnsServerAddress;
    // public System.String DnsSuffix
    // Offset: 0x38
    ::Il2CppString* DnsSuffix;
    // public System.String Description
    // Offset: 0x40
    ::Il2CppString* Description;
    // public System.String FriendlyName
    // Offset: 0x48
    ::Il2CppString* FriendlyName;
    // public System.Byte[] PhysicalAddress
    // Offset: 0x50
    ::Array<uint8_t>* PhysicalAddress;
    // public System.UInt32 PhysicalAddressLength
    // Offset: 0x58
    uint PhysicalAddressLength;
    // public System.UInt32 Flags
    // Offset: 0x5C
    uint Flags;
    // public System.UInt32 Mtu
    // Offset: 0x60
    uint Mtu;
    // public System.Net.NetworkInformation.NetworkInterfaceType IfType
    // Offset: 0x64
    System::Net::NetworkInformation::NetworkInterfaceType IfType;
    // public System.Net.NetworkInformation.OperationalStatus OperStatus
    // Offset: 0x68
    System::Net::NetworkInformation::OperationalStatus OperStatus;
    // public System.Int32 Ipv6IfIndex
    // Offset: 0x6C
    int Ipv6IfIndex;
    // public System.UInt32[] ZoneIndices
    // Offset: 0x70
    ::Array<uint>* ZoneIndices;
    // public System.IntPtr FirstPrefix
    // Offset: 0x78
    System::IntPtr FirstPrefix;
    // public System.UInt64 TransmitLinkSpeed
    // Offset: 0x80
    uint64_t TransmitLinkSpeed;
    // public System.UInt64 ReceiveLinkSpeed
    // Offset: 0x88
    uint64_t ReceiveLinkSpeed;
    // public System.IntPtr FirstWinsServerAddress
    // Offset: 0x90
    System::IntPtr FirstWinsServerAddress;
    // public System.IntPtr FirstGatewayAddress
    // Offset: 0x98
    System::IntPtr FirstGatewayAddress;
    // public System.UInt32 Ipv4Metric
    // Offset: 0xA0
    uint Ipv4Metric;
    // public System.UInt32 Ipv6Metric
    // Offset: 0xA4
    uint Ipv6Metric;
    // public System.UInt64 Luid
    // Offset: 0xA8
    uint64_t Luid;
    // public System.Net.NetworkInformation.Win32_SOCKET_ADDRESS Dhcpv4Server
    // Offset: 0xB0
    System::Net::NetworkInformation::Win32_SOCKET_ADDRESS Dhcpv4Server;
    // public System.UInt32 CompartmentId
    // Offset: 0xC0
    uint CompartmentId;
    // public System.UInt64 NetworkGuid
    // Offset: 0xC8
    uint64_t NetworkGuid;
    // public System.Int32 ConnectionType
    // Offset: 0xD0
    int ConnectionType;
    // public System.Int32 TunnelType
    // Offset: 0xD4
    int TunnelType;
    // public System.Net.NetworkInformation.Win32_SOCKET_ADDRESS Dhcpv6Server
    // Offset: 0xD8
    System::Net::NetworkInformation::Win32_SOCKET_ADDRESS Dhcpv6Server;
    // public System.Byte[] Dhcpv6ClientDuid
    // Offset: 0xE8
    ::Array<uint8_t>* Dhcpv6ClientDuid;
    // public System.UInt64 Dhcpv6ClientDuidLength
    // Offset: 0xF0
    uint64_t Dhcpv6ClientDuidLength;
    // public System.UInt64 Dhcpv6Iaid
    // Offset: 0xF8
    uint64_t Dhcpv6Iaid;
    // public System.IntPtr FirstDnsSuffix
    // Offset: 0x100
    System::IntPtr FirstDnsSuffix;
    // Creating value type constructor for type: Win32_IP_ADAPTER_ADDRESSES
    constexpr Win32_IP_ADAPTER_ADDRESSES(System::Net::NetworkInformation::AlignmentUnion Alignment_ = {}, System::IntPtr Next_ = {}, ::Il2CppString* AdapterName_ = {}, System::IntPtr FirstUnicastAddress_ = {}, System::IntPtr FirstAnycastAddress_ = {}, System::IntPtr FirstMulticastAddress_ = {}, System::IntPtr FirstDnsServerAddress_ = {}, ::Il2CppString* DnsSuffix_ = {}, ::Il2CppString* Description_ = {}, ::Il2CppString* FriendlyName_ = {}, ::Array<uint8_t>* PhysicalAddress_ = {}, uint PhysicalAddressLength_ = {}, uint Flags_ = {}, uint Mtu_ = {}, System::Net::NetworkInformation::NetworkInterfaceType IfType_ = {}, System::Net::NetworkInformation::OperationalStatus OperStatus_ = {}, int Ipv6IfIndex_ = {}, ::Array<uint>* ZoneIndices_ = {}, System::IntPtr FirstPrefix_ = {}, uint64_t TransmitLinkSpeed_ = {}, uint64_t ReceiveLinkSpeed_ = {}, System::IntPtr FirstWinsServerAddress_ = {}, System::IntPtr FirstGatewayAddress_ = {}, uint Ipv4Metric_ = {}, uint Ipv6Metric_ = {}, uint64_t Luid_ = {}, System::Net::NetworkInformation::Win32_SOCKET_ADDRESS Dhcpv4Server_ = {}, uint CompartmentId_ = {}, uint64_t NetworkGuid_ = {}, int ConnectionType_ = {}, int TunnelType_ = {}, System::Net::NetworkInformation::Win32_SOCKET_ADDRESS Dhcpv6Server_ = {}, ::Array<uint8_t>* Dhcpv6ClientDuid_ = {}, uint64_t Dhcpv6ClientDuidLength_ = {}, uint64_t Dhcpv6Iaid_ = {}, System::IntPtr FirstDnsSuffix_ = {}) noexcept : Alignment{Alignment_}, Next{Next_}, AdapterName{AdapterName_}, FirstUnicastAddress{FirstUnicastAddress_}, FirstAnycastAddress{FirstAnycastAddress_}, FirstMulticastAddress{FirstMulticastAddress_}, FirstDnsServerAddress{FirstDnsServerAddress_}, DnsSuffix{DnsSuffix_}, Description{Description_}, FriendlyName{FriendlyName_}, PhysicalAddress{PhysicalAddress_}, PhysicalAddressLength{PhysicalAddressLength_}, Flags{Flags_}, Mtu{Mtu_}, IfType{IfType_}, OperStatus{OperStatus_}, Ipv6IfIndex{Ipv6IfIndex_}, ZoneIndices{ZoneIndices_}, FirstPrefix{FirstPrefix_}, TransmitLinkSpeed{TransmitLinkSpeed_}, ReceiveLinkSpeed{ReceiveLinkSpeed_}, FirstWinsServerAddress{FirstWinsServerAddress_}, FirstGatewayAddress{FirstGatewayAddress_}, Ipv4Metric{Ipv4Metric_}, Ipv6Metric{Ipv6Metric_}, Luid{Luid_}, Dhcpv4Server{Dhcpv4Server_}, CompartmentId{CompartmentId_}, NetworkGuid{NetworkGuid_}, ConnectionType{ConnectionType_}, TunnelType{TunnelType_}, Dhcpv6Server{Dhcpv6Server_}, Dhcpv6ClientDuid{Dhcpv6ClientDuid_}, Dhcpv6ClientDuidLength{Dhcpv6ClientDuidLength_}, Dhcpv6Iaid{Dhcpv6Iaid_}, FirstDnsSuffix{FirstDnsSuffix_} {}
  }; // System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES
  check_size<sizeof(Win32_IP_ADAPTER_ADDRESSES), 256 + sizeof(System::IntPtr) + 8 - (256 + sizeof(System::IntPtr)) % 8> __System_Net_NetworkInformation_Win32_IP_ADAPTER_ADDRESSESSizeCheck;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Net::NetworkInformation::Win32_IP_ADAPTER_ADDRESSES, "System.Net.NetworkInformation", "Win32_IP_ADAPTER_ADDRESSES");
#pragma pack(pop)