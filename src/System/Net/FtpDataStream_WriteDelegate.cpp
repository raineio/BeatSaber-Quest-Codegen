// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Net.FtpDataStream/WriteDelegate
#include "System/Net/FtpDataStream_WriteDelegate.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.Net.FtpDataStream/WriteDelegate..ctor
System::Net::FtpDataStream::WriteDelegate* System::Net::FtpDataStream::WriteDelegate::New_ctor(::Il2CppObject* object, System::IntPtr method) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Net").WithContext("WriteDelegate").WithContext(".ctor");
  return THROW_UNLESS(::il2cpp_utils::New<FtpDataStream::WriteDelegate*>(object, method));
}
// Autogenerated method: System.Net.FtpDataStream/WriteDelegate.Invoke
void System::Net::FtpDataStream::WriteDelegate::Invoke(::Array<uint8_t>* buffer, int offset, int size) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Net").WithContext("WriteDelegate").WithContext("Invoke");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "Invoke", {}, ::il2cpp_utils::ExtractTypes(buffer, offset, size)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, buffer, offset, size);
}
// Autogenerated method: System.Net.FtpDataStream/WriteDelegate.BeginInvoke
System::IAsyncResult* System::Net::FtpDataStream::WriteDelegate::BeginInvoke(::Array<uint8_t>* buffer, int offset, int size, System::AsyncCallback* callback, ::Il2CppObject* object) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Net").WithContext("WriteDelegate").WithContext("BeginInvoke");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<System::IAsyncResult*>(), "BeginInvoke", {}, ::il2cpp_utils::ExtractTypes(buffer, offset, size, callback, object)));
  return ::il2cpp_utils::RunMethodThrow<System::IAsyncResult*, false>(this, ___internal__method, buffer, offset, size, callback, object);
}
// Autogenerated method: System.Net.FtpDataStream/WriteDelegate.EndInvoke
void System::Net::FtpDataStream::WriteDelegate::EndInvoke(System::IAsyncResult* result) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Net").WithContext("WriteDelegate").WithContext("EndInvoke");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "EndInvoke", {}, ::il2cpp_utils::ExtractTypes(result)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, result);
}