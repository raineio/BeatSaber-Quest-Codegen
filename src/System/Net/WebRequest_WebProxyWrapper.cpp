// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: System.Net.WebRequest/WebProxyWrapper
#include "System/Net/WebRequest_WebProxyWrapper.hpp"
// Including type: System.Net.WebProxy
#include "System/Net/WebProxy.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.Net.WebRequest/WebProxyWrapper.get_WebProxy
System::Net::WebProxy* System::Net::WebRequest::WebProxyWrapper::get_WebProxy() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Net").WithContext("WebProxyWrapper").WithContext("get_WebProxy");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<System::Net::WebProxy*>(), "get_WebProxy", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<System::Net::WebProxy*, false>(this, ___internal__method);
}