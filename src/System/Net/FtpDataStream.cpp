// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Net.FtpDataStream
#include "System/Net/FtpDataStream.hpp"
// Including type: System.Net.FtpDataStream/WriteDelegate
#include "System/Net/FtpDataStream_WriteDelegate.hpp"
// Including type: System.Net.FtpDataStream/ReadDelegate
#include "System/Net/FtpDataStream_ReadDelegate.hpp"
// Including type: System.Net.FtpWebRequest
#include "System/Net/FtpWebRequest.hpp"
// Including type: System.IO.SeekOrigin
#include "System/IO/SeekOrigin.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.Net.FtpDataStream..ctor
System::Net::FtpDataStream* System::Net::FtpDataStream::New_ctor(System::Net::FtpWebRequest* request, System::IO::Stream* stream, bool isRead) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Net").WithContext("FtpDataStream").WithContext(".ctor");
  return THROW_UNLESS(::il2cpp_utils::New<FtpDataStream*>(request, stream, isRead));
}
// Autogenerated method: System.Net.FtpDataStream.ReadInternal
int System::Net::FtpDataStream::ReadInternal(::Array<uint8_t>* buffer, int offset, int size) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Net").WithContext("FtpDataStream").WithContext("ReadInternal");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<int>(), "ReadInternal", {}, ::il2cpp_utils::ExtractTypes(buffer, offset, size)));
  return ::il2cpp_utils::RunMethodThrow<int, false>(this, ___internal__method, buffer, offset, size);
}
// Autogenerated method: System.Net.FtpDataStream.WriteInternal
void System::Net::FtpDataStream::WriteInternal(::Array<uint8_t>* buffer, int offset, int size) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Net").WithContext("FtpDataStream").WithContext("WriteInternal");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "WriteInternal", {}, ::il2cpp_utils::ExtractTypes(buffer, offset, size)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, buffer, offset, size);
}
// Autogenerated method: System.Net.FtpDataStream.CheckDisposed
void System::Net::FtpDataStream::CheckDisposed() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Net").WithContext("FtpDataStream").WithContext("CheckDisposed");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "CheckDisposed", {}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: System.Net.FtpDataStream.get_CanRead
bool System::Net::FtpDataStream::get_CanRead() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Net").WithContext("FtpDataStream").WithContext("get_CanRead");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<bool>(), "get_CanRead", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method);
}
// Autogenerated method: System.Net.FtpDataStream.get_CanWrite
bool System::Net::FtpDataStream::get_CanWrite() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Net").WithContext("FtpDataStream").WithContext("get_CanWrite");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<bool>(), "get_CanWrite", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method);
}
// Autogenerated method: System.Net.FtpDataStream.get_CanSeek
bool System::Net::FtpDataStream::get_CanSeek() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Net").WithContext("FtpDataStream").WithContext("get_CanSeek");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<bool>(), "get_CanSeek", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method);
}
// Autogenerated method: System.Net.FtpDataStream.get_Length
int64_t System::Net::FtpDataStream::get_Length() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Net").WithContext("FtpDataStream").WithContext("get_Length");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<int64_t>(), "get_Length", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<int64_t, false>(this, ___internal__method);
}
// Autogenerated method: System.Net.FtpDataStream.get_Position
int64_t System::Net::FtpDataStream::get_Position() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Net").WithContext("FtpDataStream").WithContext("get_Position");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<int64_t>(), "get_Position", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<int64_t, false>(this, ___internal__method);
}
// Autogenerated method: System.Net.FtpDataStream.set_Position
void System::Net::FtpDataStream::set_Position(int64_t value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Net").WithContext("FtpDataStream").WithContext("set_Position");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "set_Position", {}, ::il2cpp_utils::ExtractTypes(value)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, value);
}
// Autogenerated method: System.Net.FtpDataStream.Close
void System::Net::FtpDataStream::Close() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Net").WithContext("FtpDataStream").WithContext("Close");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "Close", {}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: System.Net.FtpDataStream.Flush
void System::Net::FtpDataStream::Flush() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Net").WithContext("FtpDataStream").WithContext("Flush");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "Flush", {}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: System.Net.FtpDataStream.Seek
int64_t System::Net::FtpDataStream::Seek(int64_t offset, System::IO::SeekOrigin origin) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Net").WithContext("FtpDataStream").WithContext("Seek");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<int64_t>(), "Seek", {}, ::il2cpp_utils::ExtractTypes(offset, origin)));
  return ::il2cpp_utils::RunMethodThrow<int64_t, false>(this, ___internal__method, offset, origin);
}
// Autogenerated method: System.Net.FtpDataStream.SetLength
void System::Net::FtpDataStream::SetLength(int64_t value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Net").WithContext("FtpDataStream").WithContext("SetLength");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "SetLength", {}, ::il2cpp_utils::ExtractTypes(value)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, value);
}
// Autogenerated method: System.Net.FtpDataStream.BeginRead
System::IAsyncResult* System::Net::FtpDataStream::BeginRead(::Array<uint8_t>* buffer, int offset, int size, System::AsyncCallback* cb, ::Il2CppObject* state) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Net").WithContext("FtpDataStream").WithContext("BeginRead");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<System::IAsyncResult*>(), "BeginRead", {}, ::il2cpp_utils::ExtractTypes(buffer, offset, size, cb, state)));
  return ::il2cpp_utils::RunMethodThrow<System::IAsyncResult*, false>(this, ___internal__method, buffer, offset, size, cb, state);
}
// Autogenerated method: System.Net.FtpDataStream.EndRead
int System::Net::FtpDataStream::EndRead(System::IAsyncResult* asyncResult) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Net").WithContext("FtpDataStream").WithContext("EndRead");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<int>(), "EndRead", {}, ::il2cpp_utils::ExtractTypes(asyncResult)));
  return ::il2cpp_utils::RunMethodThrow<int, false>(this, ___internal__method, asyncResult);
}
// Autogenerated method: System.Net.FtpDataStream.Read
int System::Net::FtpDataStream::Read(::Array<uint8_t>* buffer, int offset, int size) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Net").WithContext("FtpDataStream").WithContext("Read");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<int>(), "Read", {}, ::il2cpp_utils::ExtractTypes(buffer, offset, size)));
  return ::il2cpp_utils::RunMethodThrow<int, false>(this, ___internal__method, buffer, offset, size);
}
// Autogenerated method: System.Net.FtpDataStream.BeginWrite
System::IAsyncResult* System::Net::FtpDataStream::BeginWrite(::Array<uint8_t>* buffer, int offset, int size, System::AsyncCallback* cb, ::Il2CppObject* state) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Net").WithContext("FtpDataStream").WithContext("BeginWrite");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<System::IAsyncResult*>(), "BeginWrite", {}, ::il2cpp_utils::ExtractTypes(buffer, offset, size, cb, state)));
  return ::il2cpp_utils::RunMethodThrow<System::IAsyncResult*, false>(this, ___internal__method, buffer, offset, size, cb, state);
}
// Autogenerated method: System.Net.FtpDataStream.EndWrite
void System::Net::FtpDataStream::EndWrite(System::IAsyncResult* asyncResult) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Net").WithContext("FtpDataStream").WithContext("EndWrite");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "EndWrite", {}, ::il2cpp_utils::ExtractTypes(asyncResult)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, asyncResult);
}
// Autogenerated method: System.Net.FtpDataStream.Write
void System::Net::FtpDataStream::Write(::Array<uint8_t>* buffer, int offset, int size) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Net").WithContext("FtpDataStream").WithContext("Write");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "Write", {}, ::il2cpp_utils::ExtractTypes(buffer, offset, size)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, buffer, offset, size);
}
// Autogenerated method: System.Net.FtpDataStream.Finalize
void System::Net::FtpDataStream::Finalize() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Net").WithContext("FtpDataStream").WithContext("Finalize");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "Finalize", {}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: System.Net.FtpDataStream.System.IDisposable.Dispose
void System::Net::FtpDataStream::System_IDisposable_Dispose() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Net").WithContext("FtpDataStream").WithContext("System.IDisposable.Dispose");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "System.IDisposable.Dispose", {}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: System.Net.FtpDataStream.Dispose
void System::Net::FtpDataStream::Dispose(bool disposing) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Net").WithContext("FtpDataStream").WithContext("Dispose");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "Dispose", {}, ::il2cpp_utils::ExtractTypes(disposing)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, disposing);
}