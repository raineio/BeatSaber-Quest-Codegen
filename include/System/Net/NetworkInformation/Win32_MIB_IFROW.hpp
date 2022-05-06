// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Net.NetworkInformation.NetworkInterfaceType
#include "System/Net/NetworkInformation/NetworkInterfaceType.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Type namespace: System.Net.NetworkInformation
namespace System::Net::NetworkInformation {
  // Forward declaring type: Win32_MIB_IFROW
  struct Win32_MIB_IFROW;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Net::NetworkInformation::Win32_MIB_IFROW, "System.Net.NetworkInformation", "Win32_MIB_IFROW");
// Type namespace: System.Net.NetworkInformation
namespace System::Net::NetworkInformation {
  // Size: 0x70
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.Net.NetworkInformation.Win32_MIB_IFROW
  // [TokenAttribute] Offset: FFFFFFFF
  struct Win32_MIB_IFROW/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.Char[] Name
    // Size: 0x8
    // Offset: 0x0
    ::ArrayW<::Il2CppChar> Name;
    // Field size check
    static_assert(sizeof(::ArrayW<::Il2CppChar>) == 0x8);
    // public System.Int32 Index
    // Size: 0x4
    // Offset: 0x8
    int Index;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Net.NetworkInformation.NetworkInterfaceType Type
    // Size: 0x4
    // Offset: 0xC
    ::System::Net::NetworkInformation::NetworkInterfaceType Type;
    // Field size check
    static_assert(sizeof(::System::Net::NetworkInformation::NetworkInterfaceType) == 0x4);
    // public System.Int32 Mtu
    // Size: 0x4
    // Offset: 0x10
    int Mtu;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.UInt32 Speed
    // Size: 0x4
    // Offset: 0x14
    uint Speed;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // public System.Int32 PhysAddrLen
    // Size: 0x4
    // Offset: 0x18
    int PhysAddrLen;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: PhysAddrLen and: PhysAddr
    char __padding5[0x4] = {};
    // public System.Byte[] PhysAddr
    // Size: 0x8
    // Offset: 0x20
    ::ArrayW<uint8_t> PhysAddr;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // public System.UInt32 AdminStatus
    // Size: 0x4
    // Offset: 0x28
    uint AdminStatus;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // public System.UInt32 OperStatus
    // Size: 0x4
    // Offset: 0x2C
    uint OperStatus;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // public System.UInt32 LastChange
    // Size: 0x4
    // Offset: 0x30
    uint LastChange;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // public System.Int32 InOctets
    // Size: 0x4
    // Offset: 0x34
    int InOctets;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 InUcastPkts
    // Size: 0x4
    // Offset: 0x38
    int InUcastPkts;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 InNUcastPkts
    // Size: 0x4
    // Offset: 0x3C
    int InNUcastPkts;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 InDiscards
    // Size: 0x4
    // Offset: 0x40
    int InDiscards;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 InErrors
    // Size: 0x4
    // Offset: 0x44
    int InErrors;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 InUnknownProtos
    // Size: 0x4
    // Offset: 0x48
    int InUnknownProtos;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 OutOctets
    // Size: 0x4
    // Offset: 0x4C
    int OutOctets;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 OutUcastPkts
    // Size: 0x4
    // Offset: 0x50
    int OutUcastPkts;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 OutNUcastPkts
    // Size: 0x4
    // Offset: 0x54
    int OutNUcastPkts;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 OutDiscards
    // Size: 0x4
    // Offset: 0x58
    int OutDiscards;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 OutErrors
    // Size: 0x4
    // Offset: 0x5C
    int OutErrors;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 OutQLen
    // Size: 0x4
    // Offset: 0x60
    int OutQLen;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 DescrLen
    // Size: 0x4
    // Offset: 0x64
    int DescrLen;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Byte[] Descr
    // Size: 0x8
    // Offset: 0x68
    ::ArrayW<uint8_t> Descr;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    public:
    // Creating value type constructor for type: Win32_MIB_IFROW
    constexpr Win32_MIB_IFROW(::ArrayW<::Il2CppChar> Name_ = ::ArrayW<::Il2CppChar>(static_cast<void*>(nullptr)), int Index_ = {}, ::System::Net::NetworkInformation::NetworkInterfaceType Type_ = {}, int Mtu_ = {}, uint Speed_ = {}, int PhysAddrLen_ = {}, ::ArrayW<uint8_t> PhysAddr_ = ::ArrayW<uint8_t>(static_cast<void*>(nullptr)), uint AdminStatus_ = {}, uint OperStatus_ = {}, uint LastChange_ = {}, int InOctets_ = {}, int InUcastPkts_ = {}, int InNUcastPkts_ = {}, int InDiscards_ = {}, int InErrors_ = {}, int InUnknownProtos_ = {}, int OutOctets_ = {}, int OutUcastPkts_ = {}, int OutNUcastPkts_ = {}, int OutDiscards_ = {}, int OutErrors_ = {}, int OutQLen_ = {}, int DescrLen_ = {}, ::ArrayW<uint8_t> Descr_ = ::ArrayW<uint8_t>(static_cast<void*>(nullptr))) noexcept : Name{Name_}, Index{Index_}, Type{Type_}, Mtu{Mtu_}, Speed{Speed_}, PhysAddrLen{PhysAddrLen_}, PhysAddr{PhysAddr_}, AdminStatus{AdminStatus_}, OperStatus{OperStatus_}, LastChange{LastChange_}, InOctets{InOctets_}, InUcastPkts{InUcastPkts_}, InNUcastPkts{InNUcastPkts_}, InDiscards{InDiscards_}, InErrors{InErrors_}, InUnknownProtos{InUnknownProtos_}, OutOctets{OutOctets_}, OutUcastPkts{OutUcastPkts_}, OutNUcastPkts{OutNUcastPkts_}, OutDiscards{OutDiscards_}, OutErrors{OutErrors_}, OutQLen{OutQLen_}, DescrLen{DescrLen_}, Descr{Descr_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public System.Char[] Name
    [[deprecated("Use field access instead!")]] ::ArrayW<::Il2CppChar>& dyn_Name();
    // Get instance field reference: public System.Int32 Index
    [[deprecated("Use field access instead!")]] int& dyn_Index();
    // Get instance field reference: public System.Net.NetworkInformation.NetworkInterfaceType Type
    [[deprecated("Use field access instead!")]] ::System::Net::NetworkInformation::NetworkInterfaceType& dyn_Type();
    // Get instance field reference: public System.Int32 Mtu
    [[deprecated("Use field access instead!")]] int& dyn_Mtu();
    // Get instance field reference: public System.UInt32 Speed
    [[deprecated("Use field access instead!")]] uint& dyn_Speed();
    // Get instance field reference: public System.Int32 PhysAddrLen
    [[deprecated("Use field access instead!")]] int& dyn_PhysAddrLen();
    // Get instance field reference: public System.Byte[] PhysAddr
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn_PhysAddr();
    // Get instance field reference: public System.UInt32 AdminStatus
    [[deprecated("Use field access instead!")]] uint& dyn_AdminStatus();
    // Get instance field reference: public System.UInt32 OperStatus
    [[deprecated("Use field access instead!")]] uint& dyn_OperStatus();
    // Get instance field reference: public System.UInt32 LastChange
    [[deprecated("Use field access instead!")]] uint& dyn_LastChange();
    // Get instance field reference: public System.Int32 InOctets
    [[deprecated("Use field access instead!")]] int& dyn_InOctets();
    // Get instance field reference: public System.Int32 InUcastPkts
    [[deprecated("Use field access instead!")]] int& dyn_InUcastPkts();
    // Get instance field reference: public System.Int32 InNUcastPkts
    [[deprecated("Use field access instead!")]] int& dyn_InNUcastPkts();
    // Get instance field reference: public System.Int32 InDiscards
    [[deprecated("Use field access instead!")]] int& dyn_InDiscards();
    // Get instance field reference: public System.Int32 InErrors
    [[deprecated("Use field access instead!")]] int& dyn_InErrors();
    // Get instance field reference: public System.Int32 InUnknownProtos
    [[deprecated("Use field access instead!")]] int& dyn_InUnknownProtos();
    // Get instance field reference: public System.Int32 OutOctets
    [[deprecated("Use field access instead!")]] int& dyn_OutOctets();
    // Get instance field reference: public System.Int32 OutUcastPkts
    [[deprecated("Use field access instead!")]] int& dyn_OutUcastPkts();
    // Get instance field reference: public System.Int32 OutNUcastPkts
    [[deprecated("Use field access instead!")]] int& dyn_OutNUcastPkts();
    // Get instance field reference: public System.Int32 OutDiscards
    [[deprecated("Use field access instead!")]] int& dyn_OutDiscards();
    // Get instance field reference: public System.Int32 OutErrors
    [[deprecated("Use field access instead!")]] int& dyn_OutErrors();
    // Get instance field reference: public System.Int32 OutQLen
    [[deprecated("Use field access instead!")]] int& dyn_OutQLen();
    // Get instance field reference: public System.Int32 DescrLen
    [[deprecated("Use field access instead!")]] int& dyn_DescrLen();
    // Get instance field reference: public System.Byte[] Descr
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn_Descr();
  }; // System.Net.NetworkInformation.Win32_MIB_IFROW
  #pragma pack(pop)
  static check_size<sizeof(Win32_MIB_IFROW), 104 + sizeof(::ArrayW<uint8_t>)> __System_Net_NetworkInformation_Win32_MIB_IFROWSizeCheck;
  static_assert(sizeof(Win32_MIB_IFROW) == 0x70);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
