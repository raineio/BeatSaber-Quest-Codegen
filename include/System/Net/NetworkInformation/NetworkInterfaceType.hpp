// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: System.Net.NetworkInformation
namespace System::Net::NetworkInformation {
  // Forward declaring type: NetworkInterfaceType
  struct NetworkInterfaceType;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Net::NetworkInformation::NetworkInterfaceType, "System.Net.NetworkInformation", "NetworkInterfaceType");
// Type namespace: System.Net.NetworkInformation
namespace System::Net::NetworkInformation {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.NetworkInformation.NetworkInterfaceType
  // [TokenAttribute] Offset: FFFFFFFF
  struct NetworkInterfaceType/*, public System::Enum*/ {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: NetworkInterfaceType
    constexpr NetworkInterfaceType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Net.NetworkInformation.NetworkInterfaceType Unknown
    static constexpr const int Unknown = 1;
    // Get static field: static public System.Net.NetworkInformation.NetworkInterfaceType Unknown
    static System::Net::NetworkInformation::NetworkInterfaceType _get_Unknown();
    // Set static field: static public System.Net.NetworkInformation.NetworkInterfaceType Unknown
    static void _set_Unknown(System::Net::NetworkInformation::NetworkInterfaceType value);
    // static field const value: static public System.Net.NetworkInformation.NetworkInterfaceType Ethernet
    static constexpr const int Ethernet = 6;
    // Get static field: static public System.Net.NetworkInformation.NetworkInterfaceType Ethernet
    static System::Net::NetworkInformation::NetworkInterfaceType _get_Ethernet();
    // Set static field: static public System.Net.NetworkInformation.NetworkInterfaceType Ethernet
    static void _set_Ethernet(System::Net::NetworkInformation::NetworkInterfaceType value);
    // static field const value: static public System.Net.NetworkInformation.NetworkInterfaceType TokenRing
    static constexpr const int TokenRing = 9;
    // Get static field: static public System.Net.NetworkInformation.NetworkInterfaceType TokenRing
    static System::Net::NetworkInformation::NetworkInterfaceType _get_TokenRing();
    // Set static field: static public System.Net.NetworkInformation.NetworkInterfaceType TokenRing
    static void _set_TokenRing(System::Net::NetworkInformation::NetworkInterfaceType value);
    // static field const value: static public System.Net.NetworkInformation.NetworkInterfaceType Fddi
    static constexpr const int Fddi = 15;
    // Get static field: static public System.Net.NetworkInformation.NetworkInterfaceType Fddi
    static System::Net::NetworkInformation::NetworkInterfaceType _get_Fddi();
    // Set static field: static public System.Net.NetworkInformation.NetworkInterfaceType Fddi
    static void _set_Fddi(System::Net::NetworkInformation::NetworkInterfaceType value);
    // static field const value: static public System.Net.NetworkInformation.NetworkInterfaceType BasicIsdn
    static constexpr const int BasicIsdn = 20;
    // Get static field: static public System.Net.NetworkInformation.NetworkInterfaceType BasicIsdn
    static System::Net::NetworkInformation::NetworkInterfaceType _get_BasicIsdn();
    // Set static field: static public System.Net.NetworkInformation.NetworkInterfaceType BasicIsdn
    static void _set_BasicIsdn(System::Net::NetworkInformation::NetworkInterfaceType value);
    // static field const value: static public System.Net.NetworkInformation.NetworkInterfaceType PrimaryIsdn
    static constexpr const int PrimaryIsdn = 21;
    // Get static field: static public System.Net.NetworkInformation.NetworkInterfaceType PrimaryIsdn
    static System::Net::NetworkInformation::NetworkInterfaceType _get_PrimaryIsdn();
    // Set static field: static public System.Net.NetworkInformation.NetworkInterfaceType PrimaryIsdn
    static void _set_PrimaryIsdn(System::Net::NetworkInformation::NetworkInterfaceType value);
    // static field const value: static public System.Net.NetworkInformation.NetworkInterfaceType Ppp
    static constexpr const int Ppp = 23;
    // Get static field: static public System.Net.NetworkInformation.NetworkInterfaceType Ppp
    static System::Net::NetworkInformation::NetworkInterfaceType _get_Ppp();
    // Set static field: static public System.Net.NetworkInformation.NetworkInterfaceType Ppp
    static void _set_Ppp(System::Net::NetworkInformation::NetworkInterfaceType value);
    // static field const value: static public System.Net.NetworkInformation.NetworkInterfaceType Loopback
    static constexpr const int Loopback = 24;
    // Get static field: static public System.Net.NetworkInformation.NetworkInterfaceType Loopback
    static System::Net::NetworkInformation::NetworkInterfaceType _get_Loopback();
    // Set static field: static public System.Net.NetworkInformation.NetworkInterfaceType Loopback
    static void _set_Loopback(System::Net::NetworkInformation::NetworkInterfaceType value);
    // static field const value: static public System.Net.NetworkInformation.NetworkInterfaceType Ethernet3Megabit
    static constexpr const int Ethernet3Megabit = 26;
    // Get static field: static public System.Net.NetworkInformation.NetworkInterfaceType Ethernet3Megabit
    static System::Net::NetworkInformation::NetworkInterfaceType _get_Ethernet3Megabit();
    // Set static field: static public System.Net.NetworkInformation.NetworkInterfaceType Ethernet3Megabit
    static void _set_Ethernet3Megabit(System::Net::NetworkInformation::NetworkInterfaceType value);
    // static field const value: static public System.Net.NetworkInformation.NetworkInterfaceType Slip
    static constexpr const int Slip = 28;
    // Get static field: static public System.Net.NetworkInformation.NetworkInterfaceType Slip
    static System::Net::NetworkInformation::NetworkInterfaceType _get_Slip();
    // Set static field: static public System.Net.NetworkInformation.NetworkInterfaceType Slip
    static void _set_Slip(System::Net::NetworkInformation::NetworkInterfaceType value);
    // static field const value: static public System.Net.NetworkInformation.NetworkInterfaceType Atm
    static constexpr const int Atm = 37;
    // Get static field: static public System.Net.NetworkInformation.NetworkInterfaceType Atm
    static System::Net::NetworkInformation::NetworkInterfaceType _get_Atm();
    // Set static field: static public System.Net.NetworkInformation.NetworkInterfaceType Atm
    static void _set_Atm(System::Net::NetworkInformation::NetworkInterfaceType value);
    // static field const value: static public System.Net.NetworkInformation.NetworkInterfaceType GenericModem
    static constexpr const int GenericModem = 48;
    // Get static field: static public System.Net.NetworkInformation.NetworkInterfaceType GenericModem
    static System::Net::NetworkInformation::NetworkInterfaceType _get_GenericModem();
    // Set static field: static public System.Net.NetworkInformation.NetworkInterfaceType GenericModem
    static void _set_GenericModem(System::Net::NetworkInformation::NetworkInterfaceType value);
    // static field const value: static public System.Net.NetworkInformation.NetworkInterfaceType FastEthernetT
    static constexpr const int FastEthernetT = 62;
    // Get static field: static public System.Net.NetworkInformation.NetworkInterfaceType FastEthernetT
    static System::Net::NetworkInformation::NetworkInterfaceType _get_FastEthernetT();
    // Set static field: static public System.Net.NetworkInformation.NetworkInterfaceType FastEthernetT
    static void _set_FastEthernetT(System::Net::NetworkInformation::NetworkInterfaceType value);
    // static field const value: static public System.Net.NetworkInformation.NetworkInterfaceType Isdn
    static constexpr const int Isdn = 63;
    // Get static field: static public System.Net.NetworkInformation.NetworkInterfaceType Isdn
    static System::Net::NetworkInformation::NetworkInterfaceType _get_Isdn();
    // Set static field: static public System.Net.NetworkInformation.NetworkInterfaceType Isdn
    static void _set_Isdn(System::Net::NetworkInformation::NetworkInterfaceType value);
    // static field const value: static public System.Net.NetworkInformation.NetworkInterfaceType FastEthernetFx
    static constexpr const int FastEthernetFx = 69;
    // Get static field: static public System.Net.NetworkInformation.NetworkInterfaceType FastEthernetFx
    static System::Net::NetworkInformation::NetworkInterfaceType _get_FastEthernetFx();
    // Set static field: static public System.Net.NetworkInformation.NetworkInterfaceType FastEthernetFx
    static void _set_FastEthernetFx(System::Net::NetworkInformation::NetworkInterfaceType value);
    // static field const value: static public System.Net.NetworkInformation.NetworkInterfaceType Wireless80211
    static constexpr const int Wireless80211 = 71;
    // Get static field: static public System.Net.NetworkInformation.NetworkInterfaceType Wireless80211
    static System::Net::NetworkInformation::NetworkInterfaceType _get_Wireless80211();
    // Set static field: static public System.Net.NetworkInformation.NetworkInterfaceType Wireless80211
    static void _set_Wireless80211(System::Net::NetworkInformation::NetworkInterfaceType value);
    // static field const value: static public System.Net.NetworkInformation.NetworkInterfaceType AsymmetricDsl
    static constexpr const int AsymmetricDsl = 94;
    // Get static field: static public System.Net.NetworkInformation.NetworkInterfaceType AsymmetricDsl
    static System::Net::NetworkInformation::NetworkInterfaceType _get_AsymmetricDsl();
    // Set static field: static public System.Net.NetworkInformation.NetworkInterfaceType AsymmetricDsl
    static void _set_AsymmetricDsl(System::Net::NetworkInformation::NetworkInterfaceType value);
    // static field const value: static public System.Net.NetworkInformation.NetworkInterfaceType RateAdaptDsl
    static constexpr const int RateAdaptDsl = 95;
    // Get static field: static public System.Net.NetworkInformation.NetworkInterfaceType RateAdaptDsl
    static System::Net::NetworkInformation::NetworkInterfaceType _get_RateAdaptDsl();
    // Set static field: static public System.Net.NetworkInformation.NetworkInterfaceType RateAdaptDsl
    static void _set_RateAdaptDsl(System::Net::NetworkInformation::NetworkInterfaceType value);
    // static field const value: static public System.Net.NetworkInformation.NetworkInterfaceType SymmetricDsl
    static constexpr const int SymmetricDsl = 96;
    // Get static field: static public System.Net.NetworkInformation.NetworkInterfaceType SymmetricDsl
    static System::Net::NetworkInformation::NetworkInterfaceType _get_SymmetricDsl();
    // Set static field: static public System.Net.NetworkInformation.NetworkInterfaceType SymmetricDsl
    static void _set_SymmetricDsl(System::Net::NetworkInformation::NetworkInterfaceType value);
    // static field const value: static public System.Net.NetworkInformation.NetworkInterfaceType VeryHighSpeedDsl
    static constexpr const int VeryHighSpeedDsl = 97;
    // Get static field: static public System.Net.NetworkInformation.NetworkInterfaceType VeryHighSpeedDsl
    static System::Net::NetworkInformation::NetworkInterfaceType _get_VeryHighSpeedDsl();
    // Set static field: static public System.Net.NetworkInformation.NetworkInterfaceType VeryHighSpeedDsl
    static void _set_VeryHighSpeedDsl(System::Net::NetworkInformation::NetworkInterfaceType value);
    // static field const value: static public System.Net.NetworkInformation.NetworkInterfaceType IPOverAtm
    static constexpr const int IPOverAtm = 114;
    // Get static field: static public System.Net.NetworkInformation.NetworkInterfaceType IPOverAtm
    static System::Net::NetworkInformation::NetworkInterfaceType _get_IPOverAtm();
    // Set static field: static public System.Net.NetworkInformation.NetworkInterfaceType IPOverAtm
    static void _set_IPOverAtm(System::Net::NetworkInformation::NetworkInterfaceType value);
    // static field const value: static public System.Net.NetworkInformation.NetworkInterfaceType GigabitEthernet
    static constexpr const int GigabitEthernet = 117;
    // Get static field: static public System.Net.NetworkInformation.NetworkInterfaceType GigabitEthernet
    static System::Net::NetworkInformation::NetworkInterfaceType _get_GigabitEthernet();
    // Set static field: static public System.Net.NetworkInformation.NetworkInterfaceType GigabitEthernet
    static void _set_GigabitEthernet(System::Net::NetworkInformation::NetworkInterfaceType value);
    // static field const value: static public System.Net.NetworkInformation.NetworkInterfaceType Tunnel
    static constexpr const int Tunnel = 131;
    // Get static field: static public System.Net.NetworkInformation.NetworkInterfaceType Tunnel
    static System::Net::NetworkInformation::NetworkInterfaceType _get_Tunnel();
    // Set static field: static public System.Net.NetworkInformation.NetworkInterfaceType Tunnel
    static void _set_Tunnel(System::Net::NetworkInformation::NetworkInterfaceType value);
    // static field const value: static public System.Net.NetworkInformation.NetworkInterfaceType MultiRateSymmetricDsl
    static constexpr const int MultiRateSymmetricDsl = 143;
    // Get static field: static public System.Net.NetworkInformation.NetworkInterfaceType MultiRateSymmetricDsl
    static System::Net::NetworkInformation::NetworkInterfaceType _get_MultiRateSymmetricDsl();
    // Set static field: static public System.Net.NetworkInformation.NetworkInterfaceType MultiRateSymmetricDsl
    static void _set_MultiRateSymmetricDsl(System::Net::NetworkInformation::NetworkInterfaceType value);
    // static field const value: static public System.Net.NetworkInformation.NetworkInterfaceType HighPerformanceSerialBus
    static constexpr const int HighPerformanceSerialBus = 144;
    // Get static field: static public System.Net.NetworkInformation.NetworkInterfaceType HighPerformanceSerialBus
    static System::Net::NetworkInformation::NetworkInterfaceType _get_HighPerformanceSerialBus();
    // Set static field: static public System.Net.NetworkInformation.NetworkInterfaceType HighPerformanceSerialBus
    static void _set_HighPerformanceSerialBus(System::Net::NetworkInformation::NetworkInterfaceType value);
    // static field const value: static public System.Net.NetworkInformation.NetworkInterfaceType Wman
    static constexpr const int Wman = 237;
    // Get static field: static public System.Net.NetworkInformation.NetworkInterfaceType Wman
    static System::Net::NetworkInformation::NetworkInterfaceType _get_Wman();
    // Set static field: static public System.Net.NetworkInformation.NetworkInterfaceType Wman
    static void _set_Wman(System::Net::NetworkInformation::NetworkInterfaceType value);
    // static field const value: static public System.Net.NetworkInformation.NetworkInterfaceType Wwanpp
    static constexpr const int Wwanpp = 243;
    // Get static field: static public System.Net.NetworkInformation.NetworkInterfaceType Wwanpp
    static System::Net::NetworkInformation::NetworkInterfaceType _get_Wwanpp();
    // Set static field: static public System.Net.NetworkInformation.NetworkInterfaceType Wwanpp
    static void _set_Wwanpp(System::Net::NetworkInformation::NetworkInterfaceType value);
    // static field const value: static public System.Net.NetworkInformation.NetworkInterfaceType Wwanpp2
    static constexpr const int Wwanpp2 = 244;
    // Get static field: static public System.Net.NetworkInformation.NetworkInterfaceType Wwanpp2
    static System::Net::NetworkInformation::NetworkInterfaceType _get_Wwanpp2();
    // Set static field: static public System.Net.NetworkInformation.NetworkInterfaceType Wwanpp2
    static void _set_Wwanpp2(System::Net::NetworkInformation::NetworkInterfaceType value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // System.Net.NetworkInformation.NetworkInterfaceType
  #pragma pack(pop)
  static check_size<sizeof(NetworkInterfaceType), 0 + sizeof(int)> __System_Net_NetworkInformation_NetworkInterfaceTypeSizeCheck;
  static_assert(sizeof(NetworkInterfaceType) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
