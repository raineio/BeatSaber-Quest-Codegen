// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: System.Net.NetworkInformation.LinuxUnicastIPAddressInformation
#include "System/Net/NetworkInformation/LinuxUnicastIPAddressInformation.hpp"
// Including type: System.Net.IPAddress
#include "System/Net/IPAddress.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.Net.NetworkInformation.LinuxUnicastIPAddressInformation..ctor
System::Net::NetworkInformation::LinuxUnicastIPAddressInformation* System::Net::NetworkInformation::LinuxUnicastIPAddressInformation::New_ctor(System::Net::IPAddress* address) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Net::NetworkInformation").WithContext("LinuxUnicastIPAddressInformation").WithContext(".ctor");
  return THROW_UNLESS(::il2cpp_utils::New<LinuxUnicastIPAddressInformation*>(address));
}
// Autogenerated method: System.Net.NetworkInformation.LinuxUnicastIPAddressInformation.get_Address
System::Net::IPAddress* System::Net::NetworkInformation::LinuxUnicastIPAddressInformation::get_Address() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Net::NetworkInformation").WithContext("LinuxUnicastIPAddressInformation").WithContext("get_Address");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<System::Net::IPAddress*>(), "get_Address", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<System::Net::IPAddress*, false>(this, ___internal__method);
}