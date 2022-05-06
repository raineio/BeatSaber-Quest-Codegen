// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Net.NetworkInformation.UnicastIPAddressInformation
#include "System/Net/NetworkInformation/UnicastIPAddressInformation.hpp"
// Including type: System.Net.NetworkInformation.Win32_IP_ADAPTER_UNICAST_ADDRESS
#include "System/Net/NetworkInformation/Win32_IP_ADAPTER_UNICAST_ADDRESS.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
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
  // Forward declaring type: Win32UnicastIPAddressInformation
  class Win32UnicastIPAddressInformation;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Net::NetworkInformation::Win32UnicastIPAddressInformation);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::NetworkInformation::Win32UnicastIPAddressInformation*, "System.Net.NetworkInformation", "Win32UnicastIPAddressInformation");
// Type namespace: System.Net.NetworkInformation
namespace System::Net::NetworkInformation {
  // Size: 0x58
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.NetworkInformation.Win32UnicastIPAddressInformation
  // [TokenAttribute] Offset: FFFFFFFF
  class Win32UnicastIPAddressInformation : public ::System::Net::NetworkInformation::UnicastIPAddressInformation {
    public:
    public:
    // private System.Net.NetworkInformation.Win32_IP_ADAPTER_UNICAST_ADDRESS info
    // Size: 0x39
    // Offset: 0x10
    ::System::Net::NetworkInformation::Win32_IP_ADAPTER_UNICAST_ADDRESS info;
    // Field size check
    static_assert(sizeof(::System::Net::NetworkInformation::Win32_IP_ADAPTER_UNICAST_ADDRESS) == 0x39);
    // Padding between fields: info and: ipv4Mask
    char __padding0[0x7] = {};
    // private System.Net.IPAddress ipv4Mask
    // Size: 0x8
    // Offset: 0x50
    ::System::Net::IPAddress* ipv4Mask;
    // Field size check
    static_assert(sizeof(::System::Net::IPAddress*) == 0x8);
    public:
    // Get instance field reference: private System.Net.NetworkInformation.Win32_IP_ADAPTER_UNICAST_ADDRESS info
    [[deprecated("Use field access instead!")]] ::System::Net::NetworkInformation::Win32_IP_ADAPTER_UNICAST_ADDRESS& dyn_info();
    // Get instance field reference: private System.Net.IPAddress ipv4Mask
    [[deprecated("Use field access instead!")]] ::System::Net::IPAddress*& dyn_ipv4Mask();
    // public System.Void .ctor(System.Net.NetworkInformation.Win32_IP_ADAPTER_UNICAST_ADDRESS info)
    // Offset: 0x1B67E74
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Win32UnicastIPAddressInformation* New_ctor(::System::Net::NetworkInformation::Win32_IP_ADAPTER_UNICAST_ADDRESS info) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::NetworkInformation::Win32UnicastIPAddressInformation::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Win32UnicastIPAddressInformation*, creationType>(info)));
    }
    // static private System.Net.IPAddress PrefixLengthToSubnetMask(System.Byte prefixLength, System.Net.Sockets.AddressFamily family)
    // Offset: 0x1B680A4
    static ::System::Net::IPAddress* PrefixLengthToSubnetMask(uint8_t prefixLength, ::System::Net::Sockets::AddressFamily family);
    // public override System.Net.IPAddress get_Address()
    // Offset: 0x1B68190
    // Implemented from: System.Net.NetworkInformation.IPAddressInformation
    // Base method: System.Net.IPAddress IPAddressInformation::get_Address()
    ::System::Net::IPAddress* get_Address();
  }; // System.Net.NetworkInformation.Win32UnicastIPAddressInformation
  #pragma pack(pop)
  static check_size<sizeof(Win32UnicastIPAddressInformation), 80 + sizeof(::System::Net::IPAddress*)> __System_Net_NetworkInformation_Win32UnicastIPAddressInformationSizeCheck;
  static_assert(sizeof(Win32UnicastIPAddressInformation) == 0x58);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::NetworkInformation::Win32UnicastIPAddressInformation::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::NetworkInformation::Win32UnicastIPAddressInformation::PrefixLengthToSubnetMask
// Il2CppName: PrefixLengthToSubnetMask
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::IPAddress* (*)(uint8_t, ::System::Net::Sockets::AddressFamily)>(&System::Net::NetworkInformation::Win32UnicastIPAddressInformation::PrefixLengthToSubnetMask)> {
  static const MethodInfo* get() {
    static auto* prefixLength = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    static auto* family = &::il2cpp_utils::GetClassFromName("System.Net.Sockets", "AddressFamily")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::NetworkInformation::Win32UnicastIPAddressInformation*), "PrefixLengthToSubnetMask", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{prefixLength, family});
  }
};
// Writing MetadataGetter for method: System::Net::NetworkInformation::Win32UnicastIPAddressInformation::get_Address
// Il2CppName: get_Address
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::IPAddress* (System::Net::NetworkInformation::Win32UnicastIPAddressInformation::*)()>(&System::Net::NetworkInformation::Win32UnicastIPAddressInformation::get_Address)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::NetworkInformation::Win32UnicastIPAddressInformation*), "get_Address", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
