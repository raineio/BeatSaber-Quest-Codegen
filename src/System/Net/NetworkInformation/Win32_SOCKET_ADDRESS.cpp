// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: System.Net.NetworkInformation.Win32_SOCKET_ADDRESS
#include "System/Net/NetworkInformation/Win32_SOCKET_ADDRESS.hpp"
// Including type: System.Net.IPAddress
#include "System/Net/IPAddress.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.Net.NetworkInformation.Win32_SOCKET_ADDRESS.GetIPAddress
System::Net::IPAddress* System::Net::NetworkInformation::Win32_SOCKET_ADDRESS::GetIPAddress() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Net::NetworkInformation").WithContext("Win32_SOCKET_ADDRESS").WithContext("GetIPAddress");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(*this, il2cpp_utils::NoArgClass<System::Net::IPAddress*>(), "GetIPAddress", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<System::Net::IPAddress*, false>(*this, ___internal__method);
}