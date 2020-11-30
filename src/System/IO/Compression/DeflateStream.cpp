// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IO.Compression.DeflateStream
#include "System/IO/Compression/DeflateStream.hpp"
// Including type: System.IO.Compression.DeflateStream/ReadMethod
#include "System/IO/Compression/DeflateStream_ReadMethod.hpp"
// Including type: System.IO.Compression.DeflateStream/WriteMethod
#include "System/IO/Compression/DeflateStream_WriteMethod.hpp"
// Including type: System.IO.Compression.DeflateStreamNative
#include "System/IO/Compression/DeflateStreamNative.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
// Including type: System.IO.SeekOrigin
#include "System/IO/SeekOrigin.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.IO.Compression.DeflateStream..ctor
System::IO::Compression::DeflateStream* System::IO::Compression::DeflateStream::New_ctor(System::IO::Stream* stream, System::IO::Compression::CompressionMode mode) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::IO::Compression").WithContext("DeflateStream").WithContext(".ctor");
  return THROW_UNLESS(::il2cpp_utils::New<DeflateStream*>(stream, mode));
}
// Autogenerated method: System.IO.Compression.DeflateStream..ctor
System::IO::Compression::DeflateStream* System::IO::Compression::DeflateStream::New_ctor(System::IO::Stream* stream, System::IO::Compression::CompressionMode mode, bool leaveOpen, int windowsBits) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::IO::Compression").WithContext("DeflateStream").WithContext(".ctor");
  return THROW_UNLESS(::il2cpp_utils::New<DeflateStream*>(stream, mode, leaveOpen, windowsBits));
}
// Autogenerated method: System.IO.Compression.DeflateStream..ctor
System::IO::Compression::DeflateStream* System::IO::Compression::DeflateStream::New_ctor(System::IO::Stream* compressedStream, System::IO::Compression::CompressionMode mode, bool leaveOpen, bool gzip) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::IO::Compression").WithContext("DeflateStream").WithContext(".ctor");
  return THROW_UNLESS(::il2cpp_utils::New<DeflateStream*>(compressedStream, mode, leaveOpen, gzip));
}
// Autogenerated method: System.IO.Compression.DeflateStream.ReadInternal
int System::IO::Compression::DeflateStream::ReadInternal(::Array<uint8_t>* array, int offset, int count) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::IO::Compression").WithContext("DeflateStream").WithContext("ReadInternal");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<int>(), "ReadInternal", {}, ::il2cpp_utils::ExtractTypes(array, offset, count)));
  return ::il2cpp_utils::RunMethodThrow<int, false>(this, ___internal__method, array, offset, count);
}
// Autogenerated method: System.IO.Compression.DeflateStream.WriteInternal
void System::IO::Compression::DeflateStream::WriteInternal(::Array<uint8_t>* array, int offset, int count) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::IO::Compression").WithContext("DeflateStream").WithContext("WriteInternal");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "WriteInternal", {}, ::il2cpp_utils::ExtractTypes(array, offset, count)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, array, offset, count);
}
// Autogenerated method: System.IO.Compression.DeflateStream.Dispose
void System::IO::Compression::DeflateStream::Dispose(bool disposing) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::IO::Compression").WithContext("DeflateStream").WithContext("Dispose");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "Dispose", {}, ::il2cpp_utils::ExtractTypes(disposing)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, disposing);
}
// Autogenerated method: System.IO.Compression.DeflateStream.Read
int System::IO::Compression::DeflateStream::Read(::Array<uint8_t>* array, int offset, int count) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::IO::Compression").WithContext("DeflateStream").WithContext("Read");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<int>(), "Read", {}, ::il2cpp_utils::ExtractTypes(array, offset, count)));
  return ::il2cpp_utils::RunMethodThrow<int, false>(this, ___internal__method, array, offset, count);
}
// Autogenerated method: System.IO.Compression.DeflateStream.Write
void System::IO::Compression::DeflateStream::Write(::Array<uint8_t>* array, int offset, int count) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::IO::Compression").WithContext("DeflateStream").WithContext("Write");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "Write", {}, ::il2cpp_utils::ExtractTypes(array, offset, count)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, array, offset, count);
}
// Autogenerated method: System.IO.Compression.DeflateStream.Flush
void System::IO::Compression::DeflateStream::Flush() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::IO::Compression").WithContext("DeflateStream").WithContext("Flush");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "Flush", {}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: System.IO.Compression.DeflateStream.BeginRead
System::IAsyncResult* System::IO::Compression::DeflateStream::BeginRead(::Array<uint8_t>* array, int offset, int count, System::AsyncCallback* asyncCallback, ::Il2CppObject* asyncState) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::IO::Compression").WithContext("DeflateStream").WithContext("BeginRead");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<System::IAsyncResult*>(), "BeginRead", {}, ::il2cpp_utils::ExtractTypes(array, offset, count, asyncCallback, asyncState)));
  return ::il2cpp_utils::RunMethodThrow<System::IAsyncResult*, false>(this, ___internal__method, array, offset, count, asyncCallback, asyncState);
}
// Autogenerated method: System.IO.Compression.DeflateStream.BeginWrite
System::IAsyncResult* System::IO::Compression::DeflateStream::BeginWrite(::Array<uint8_t>* array, int offset, int count, System::AsyncCallback* asyncCallback, ::Il2CppObject* asyncState) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::IO::Compression").WithContext("DeflateStream").WithContext("BeginWrite");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<System::IAsyncResult*>(), "BeginWrite", {}, ::il2cpp_utils::ExtractTypes(array, offset, count, asyncCallback, asyncState)));
  return ::il2cpp_utils::RunMethodThrow<System::IAsyncResult*, false>(this, ___internal__method, array, offset, count, asyncCallback, asyncState);
}
// Autogenerated method: System.IO.Compression.DeflateStream.EndRead
int System::IO::Compression::DeflateStream::EndRead(System::IAsyncResult* asyncResult) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::IO::Compression").WithContext("DeflateStream").WithContext("EndRead");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<int>(), "EndRead", {}, ::il2cpp_utils::ExtractTypes(asyncResult)));
  return ::il2cpp_utils::RunMethodThrow<int, false>(this, ___internal__method, asyncResult);
}
// Autogenerated method: System.IO.Compression.DeflateStream.EndWrite
void System::IO::Compression::DeflateStream::EndWrite(System::IAsyncResult* asyncResult) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::IO::Compression").WithContext("DeflateStream").WithContext("EndWrite");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "EndWrite", {}, ::il2cpp_utils::ExtractTypes(asyncResult)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, asyncResult);
}
// Autogenerated method: System.IO.Compression.DeflateStream.Seek
int64_t System::IO::Compression::DeflateStream::Seek(int64_t offset, System::IO::SeekOrigin origin) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::IO::Compression").WithContext("DeflateStream").WithContext("Seek");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<int64_t>(), "Seek", {}, ::il2cpp_utils::ExtractTypes(offset, origin)));
  return ::il2cpp_utils::RunMethodThrow<int64_t, false>(this, ___internal__method, offset, origin);
}
// Autogenerated method: System.IO.Compression.DeflateStream.SetLength
void System::IO::Compression::DeflateStream::SetLength(int64_t value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::IO::Compression").WithContext("DeflateStream").WithContext("SetLength");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "SetLength", {}, ::il2cpp_utils::ExtractTypes(value)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, value);
}
// Autogenerated method: System.IO.Compression.DeflateStream.get_CanRead
bool System::IO::Compression::DeflateStream::get_CanRead() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::IO::Compression").WithContext("DeflateStream").WithContext("get_CanRead");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<bool>(), "get_CanRead", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method);
}
// Autogenerated method: System.IO.Compression.DeflateStream.get_CanSeek
bool System::IO::Compression::DeflateStream::get_CanSeek() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::IO::Compression").WithContext("DeflateStream").WithContext("get_CanSeek");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<bool>(), "get_CanSeek", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method);
}
// Autogenerated method: System.IO.Compression.DeflateStream.get_CanWrite
bool System::IO::Compression::DeflateStream::get_CanWrite() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::IO::Compression").WithContext("DeflateStream").WithContext("get_CanWrite");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<bool>(), "get_CanWrite", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method);
}
// Autogenerated method: System.IO.Compression.DeflateStream.get_Length
int64_t System::IO::Compression::DeflateStream::get_Length() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::IO::Compression").WithContext("DeflateStream").WithContext("get_Length");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<int64_t>(), "get_Length", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<int64_t, false>(this, ___internal__method);
}
// Autogenerated method: System.IO.Compression.DeflateStream.get_Position
int64_t System::IO::Compression::DeflateStream::get_Position() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::IO::Compression").WithContext("DeflateStream").WithContext("get_Position");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<int64_t>(), "get_Position", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<int64_t, false>(this, ___internal__method);
}
// Autogenerated method: System.IO.Compression.DeflateStream.set_Position
void System::IO::Compression::DeflateStream::set_Position(int64_t value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::IO::Compression").WithContext("DeflateStream").WithContext("set_Position");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "set_Position", {}, ::il2cpp_utils::ExtractTypes(value)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, value);
}