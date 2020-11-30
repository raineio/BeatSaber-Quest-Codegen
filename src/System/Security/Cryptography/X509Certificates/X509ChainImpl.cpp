// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Security.Cryptography.X509Certificates.X509ChainImpl
#include "System/Security/Cryptography/X509Certificates/X509ChainImpl.hpp"
// Including type: System.Security.Cryptography.X509Certificates.X509ChainElementCollection
#include "System/Security/Cryptography/X509Certificates/X509ChainElementCollection.hpp"
// Including type: System.Security.Cryptography.X509Certificates.X509ChainPolicy
#include "System/Security/Cryptography/X509Certificates/X509ChainPolicy.hpp"
// Including type: System.Security.Cryptography.X509Certificates.X509ChainStatus
#include "System/Security/Cryptography/X509Certificates/X509ChainStatus.hpp"
// Including type: System.Security.Cryptography.X509Certificates.X509Certificate2
#include "System/Security/Cryptography/X509Certificates/X509Certificate2.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.Security.Cryptography.X509Certificates.X509ChainImpl.get_IsValid
bool System::Security::Cryptography::X509Certificates::X509ChainImpl::get_IsValid() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Security::Cryptography::X509Certificates").WithContext("X509ChainImpl").WithContext("get_IsValid");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<bool>(), "get_IsValid", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method);
}
// Autogenerated method: System.Security.Cryptography.X509Certificates.X509ChainImpl.get_ChainElements
System::Security::Cryptography::X509Certificates::X509ChainElementCollection* System::Security::Cryptography::X509Certificates::X509ChainImpl::get_ChainElements() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Security::Cryptography::X509Certificates").WithContext("X509ChainImpl").WithContext("get_ChainElements");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<System::Security::Cryptography::X509Certificates::X509ChainElementCollection*>(), "get_ChainElements", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<System::Security::Cryptography::X509Certificates::X509ChainElementCollection*, false>(this, ___internal__method);
}
// Autogenerated method: System.Security.Cryptography.X509Certificates.X509ChainImpl.get_ChainPolicy
System::Security::Cryptography::X509Certificates::X509ChainPolicy* System::Security::Cryptography::X509Certificates::X509ChainImpl::get_ChainPolicy() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Security::Cryptography::X509Certificates").WithContext("X509ChainImpl").WithContext("get_ChainPolicy");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<System::Security::Cryptography::X509Certificates::X509ChainPolicy*>(), "get_ChainPolicy", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<System::Security::Cryptography::X509Certificates::X509ChainPolicy*, false>(this, ___internal__method);
}
// Autogenerated method: System.Security.Cryptography.X509Certificates.X509ChainImpl.set_ChainPolicy
void System::Security::Cryptography::X509Certificates::X509ChainImpl::set_ChainPolicy(System::Security::Cryptography::X509Certificates::X509ChainPolicy* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Security::Cryptography::X509Certificates").WithContext("X509ChainImpl").WithContext("set_ChainPolicy");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "set_ChainPolicy", {}, ::il2cpp_utils::ExtractTypes(value)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, value);
}
// Autogenerated method: System.Security.Cryptography.X509Certificates.X509ChainImpl.get_ChainStatus
::Array<System::Security::Cryptography::X509Certificates::X509ChainStatus>* System::Security::Cryptography::X509Certificates::X509ChainImpl::get_ChainStatus() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Security::Cryptography::X509Certificates").WithContext("X509ChainImpl").WithContext("get_ChainStatus");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<::Array<System::Security::Cryptography::X509Certificates::X509ChainStatus>*>(), "get_ChainStatus", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<::Array<System::Security::Cryptography::X509Certificates::X509ChainStatus>*, false>(this, ___internal__method);
}
// Autogenerated method: System.Security.Cryptography.X509Certificates.X509ChainImpl.Build
bool System::Security::Cryptography::X509Certificates::X509ChainImpl::Build(System::Security::Cryptography::X509Certificates::X509Certificate2* certificate) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Security::Cryptography::X509Certificates").WithContext("X509ChainImpl").WithContext("Build");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<bool>(), "Build", {}, ::il2cpp_utils::ExtractTypes(certificate)));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method, certificate);
}
// Autogenerated method: System.Security.Cryptography.X509Certificates.X509ChainImpl.Reset
void System::Security::Cryptography::X509Certificates::X509ChainImpl::Reset() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Security::Cryptography::X509Certificates").WithContext("X509ChainImpl").WithContext("Reset");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "Reset", {}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: System.Security.Cryptography.X509Certificates.X509ChainImpl.Dispose
void System::Security::Cryptography::X509Certificates::X509ChainImpl::Dispose(bool disposing) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Security::Cryptography::X509Certificates").WithContext("X509ChainImpl").WithContext("Dispose");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "Dispose", {}, ::il2cpp_utils::ExtractTypes(disposing)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, disposing);
}
// Autogenerated method: System.Security.Cryptography.X509Certificates.X509ChainImpl.Dispose
void System::Security::Cryptography::X509Certificates::X509ChainImpl::Dispose() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Security::Cryptography::X509Certificates").WithContext("X509ChainImpl").WithContext("Dispose");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "Dispose", {}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
void System::Security::Cryptography::X509Certificates::X509ChainImpl::System_IDisposable_Dispose() {
  System::Security::Cryptography::X509Certificates::X509ChainImpl::Dispose();
}
// Autogenerated method: System.Security.Cryptography.X509Certificates.X509ChainImpl.Finalize
void System::Security::Cryptography::X509Certificates::X509ChainImpl::Finalize() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Security::Cryptography::X509Certificates").WithContext("X509ChainImpl").WithContext("Finalize");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "Finalize", {}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: System.Security.Cryptography.X509Certificates.X509ChainImpl..ctor
System::Security::Cryptography::X509Certificates::X509ChainImpl* System::Security::Cryptography::X509Certificates::X509ChainImpl::New_ctor() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Security::Cryptography::X509Certificates").WithContext("X509ChainImpl").WithContext(".ctor");
  return THROW_UNLESS(::il2cpp_utils::New<X509ChainImpl*>());
}