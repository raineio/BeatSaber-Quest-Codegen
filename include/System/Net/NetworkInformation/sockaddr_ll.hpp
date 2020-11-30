// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include <stdint.h>
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Begin il2cpp-utils forward declares
template<class T>
struct Array;
// Completed il2cpp-utils forward declares
// Type namespace: System.Net.NetworkInformation
namespace System::Net::NetworkInformation {
  // Autogenerated type: System.Net.NetworkInformation.sockaddr_ll
  struct sockaddr_ll : public System::ValueType {
    public:
    // public System.UInt16 sll_family
    // Offset: 0x0
    uint16_t sll_family;
    // public System.UInt16 sll_protocol
    // Offset: 0x2
    uint16_t sll_protocol;
    // public System.Int32 sll_ifindex
    // Offset: 0x4
    int sll_ifindex;
    // public System.UInt16 sll_hatype
    // Offset: 0x8
    uint16_t sll_hatype;
    // public System.Byte sll_pkttype
    // Offset: 0xA
    uint8_t sll_pkttype;
    // public System.Byte sll_halen
    // Offset: 0xB
    uint8_t sll_halen;
    // public System.Byte[] sll_addr
    // Offset: 0x10
    ::Array<uint8_t>* sll_addr;
    // Creating value type constructor for type: sockaddr_ll
    constexpr sockaddr_ll(uint16_t sll_family_ = {}, uint16_t sll_protocol_ = {}, int sll_ifindex_ = {}, uint16_t sll_hatype_ = {}, uint8_t sll_pkttype_ = {}, uint8_t sll_halen_ = {}, ::Array<uint8_t>* sll_addr_ = {}) noexcept : sll_family{sll_family_}, sll_protocol{sll_protocol_}, sll_ifindex{sll_ifindex_}, sll_hatype{sll_hatype_}, sll_pkttype{sll_pkttype_}, sll_halen{sll_halen_}, sll_addr{sll_addr_} {}
  }; // System.Net.NetworkInformation.sockaddr_ll
  check_size<sizeof(sockaddr_ll), 16 + sizeof(void*) + 8 - (16 + sizeof(void*)) % 8> __System_Net_NetworkInformation_sockaddr_llSizeCheck;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Net::NetworkInformation::sockaddr_ll, "System.Net.NetworkInformation", "sockaddr_ll");
#pragma pack(pop)