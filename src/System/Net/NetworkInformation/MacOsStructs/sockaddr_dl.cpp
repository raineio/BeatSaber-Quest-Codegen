// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Net.NetworkInformation.MacOsStructs.sockaddr_dl
#include "System/Net/NetworkInformation/MacOsStructs/sockaddr_dl.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.Net.NetworkInformation.MacOsStructs.sockaddr_dl.Read
void System::Net::NetworkInformation::MacOsStructs::sockaddr_dl::Read(System::IntPtr ptr) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Net::NetworkInformation::MacOsStructs").WithContext("sockaddr_dl").WithContext("Read");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(*this, il2cpp_utils::NoArgClass<void>(), "Read", {}, ::il2cpp_utils::ExtractTypes(ptr)));
  ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, ptr);
}