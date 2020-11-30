// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Net.NetworkInformation.UnixNetworkInterface
#include "System/Net/NetworkInformation/UnixNetworkInterface.hpp"
// Including type: System.Net.NetworkInformation.IPInterfaceProperties
#include "System/Net/NetworkInformation/IPInterfaceProperties.hpp"
// Including type: System.Collections.Generic.List`1
#include "System/Collections/Generic/List_1.hpp"
// Including type: System.Net.IPAddress
#include "System/Net/IPAddress.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.Net.NetworkInformation.UnixNetworkInterface..ctor
System::Net::NetworkInformation::UnixNetworkInterface* System::Net::NetworkInformation::UnixNetworkInterface::New_ctor(::Il2CppString* name) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Net::NetworkInformation").WithContext("UnixNetworkInterface").WithContext(".ctor");
  return THROW_UNLESS(::il2cpp_utils::New<UnixNetworkInterface*>(name));
}
// Autogenerated method: System.Net.NetworkInformation.UnixNetworkInterface.AddAddress
void System::Net::NetworkInformation::UnixNetworkInterface::AddAddress(System::Net::IPAddress* address) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Net::NetworkInformation").WithContext("UnixNetworkInterface").WithContext("AddAddress");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "AddAddress", {}, ::il2cpp_utils::ExtractTypes(address)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, address);
}
// Autogenerated method: System.Net.NetworkInformation.UnixNetworkInterface.SetLinkLayerInfo
void System::Net::NetworkInformation::UnixNetworkInterface::SetLinkLayerInfo(int index, ::Array<uint8_t>* macAddress, System::Net::NetworkInformation::NetworkInterfaceType type) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Net::NetworkInformation").WithContext("UnixNetworkInterface").WithContext("SetLinkLayerInfo");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "SetLinkLayerInfo", {}, ::il2cpp_utils::ExtractTypes(index, macAddress, type)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, index, macAddress, type);
}
// Autogenerated method: System.Net.NetworkInformation.UnixNetworkInterface.get_Name
::Il2CppString* System::Net::NetworkInformation::UnixNetworkInterface::get_Name() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Net::NetworkInformation").WithContext("UnixNetworkInterface").WithContext("get_Name");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<::Il2CppString*>(), "get_Name", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<::Il2CppString*, false>(this, ___internal__method);
}
// Autogenerated method: System.Net.NetworkInformation.UnixNetworkInterface.get_NetworkInterfaceType
System::Net::NetworkInformation::NetworkInterfaceType System::Net::NetworkInformation::UnixNetworkInterface::get_NetworkInterfaceType() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Net::NetworkInformation").WithContext("UnixNetworkInterface").WithContext("get_NetworkInterfaceType");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<System::Net::NetworkInformation::NetworkInterfaceType>(), "get_NetworkInterfaceType", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<System::Net::NetworkInformation::NetworkInterfaceType, false>(this, ___internal__method);
}