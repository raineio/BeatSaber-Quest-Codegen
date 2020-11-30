// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Utilities.IO.FilterStream
#include "Org/BouncyCastle/Utilities/IO/FilterStream.hpp"
// Including type: System.IO.SeekOrigin
#include "System/IO/SeekOrigin.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Org.BouncyCastle.Utilities.IO.FilterStream..ctor
Org::BouncyCastle::Utilities::IO::FilterStream* Org::BouncyCastle::Utilities::IO::FilterStream::New_ctor(System::IO::Stream* s) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Utilities::IO").WithContext("FilterStream").WithContext(".ctor");
  return THROW_UNLESS(::il2cpp_utils::New<FilterStream*>(s));
}
// Autogenerated method: Org.BouncyCastle.Utilities.IO.FilterStream.get_CanRead
bool Org::BouncyCastle::Utilities::IO::FilterStream::get_CanRead() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Utilities::IO").WithContext("FilterStream").WithContext("get_CanRead");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<bool>(), "get_CanRead", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method);
}
// Autogenerated method: Org.BouncyCastle.Utilities.IO.FilterStream.get_CanSeek
bool Org::BouncyCastle::Utilities::IO::FilterStream::get_CanSeek() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Utilities::IO").WithContext("FilterStream").WithContext("get_CanSeek");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<bool>(), "get_CanSeek", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method);
}
// Autogenerated method: Org.BouncyCastle.Utilities.IO.FilterStream.get_CanWrite
bool Org::BouncyCastle::Utilities::IO::FilterStream::get_CanWrite() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Utilities::IO").WithContext("FilterStream").WithContext("get_CanWrite");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<bool>(), "get_CanWrite", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method);
}
// Autogenerated method: Org.BouncyCastle.Utilities.IO.FilterStream.get_Length
int64_t Org::BouncyCastle::Utilities::IO::FilterStream::get_Length() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Utilities::IO").WithContext("FilterStream").WithContext("get_Length");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<int64_t>(), "get_Length", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<int64_t, false>(this, ___internal__method);
}
// Autogenerated method: Org.BouncyCastle.Utilities.IO.FilterStream.get_Position
int64_t Org::BouncyCastle::Utilities::IO::FilterStream::get_Position() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Utilities::IO").WithContext("FilterStream").WithContext("get_Position");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<int64_t>(), "get_Position", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<int64_t, false>(this, ___internal__method);
}
// Autogenerated method: Org.BouncyCastle.Utilities.IO.FilterStream.set_Position
void Org::BouncyCastle::Utilities::IO::FilterStream::set_Position(int64_t value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Utilities::IO").WithContext("FilterStream").WithContext("set_Position");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "set_Position", {}, ::il2cpp_utils::ExtractTypes(value)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, value);
}
// Autogenerated method: Org.BouncyCastle.Utilities.IO.FilterStream.Close
void Org::BouncyCastle::Utilities::IO::FilterStream::Close() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Utilities::IO").WithContext("FilterStream").WithContext("Close");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "Close", {}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: Org.BouncyCastle.Utilities.IO.FilterStream.Flush
void Org::BouncyCastle::Utilities::IO::FilterStream::Flush() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Utilities::IO").WithContext("FilterStream").WithContext("Flush");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "Flush", {}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: Org.BouncyCastle.Utilities.IO.FilterStream.Seek
int64_t Org::BouncyCastle::Utilities::IO::FilterStream::Seek(int64_t offset, System::IO::SeekOrigin origin) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Utilities::IO").WithContext("FilterStream").WithContext("Seek");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<int64_t>(), "Seek", {}, ::il2cpp_utils::ExtractTypes(offset, origin)));
  return ::il2cpp_utils::RunMethodThrow<int64_t, false>(this, ___internal__method, offset, origin);
}
// Autogenerated method: Org.BouncyCastle.Utilities.IO.FilterStream.SetLength
void Org::BouncyCastle::Utilities::IO::FilterStream::SetLength(int64_t value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Utilities::IO").WithContext("FilterStream").WithContext("SetLength");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "SetLength", {}, ::il2cpp_utils::ExtractTypes(value)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, value);
}
// Autogenerated method: Org.BouncyCastle.Utilities.IO.FilterStream.Read
int Org::BouncyCastle::Utilities::IO::FilterStream::Read(::Array<uint8_t>* buffer, int offset, int count) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Utilities::IO").WithContext("FilterStream").WithContext("Read");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<int>(), "Read", {}, ::il2cpp_utils::ExtractTypes(buffer, offset, count)));
  return ::il2cpp_utils::RunMethodThrow<int, false>(this, ___internal__method, buffer, offset, count);
}
// Autogenerated method: Org.BouncyCastle.Utilities.IO.FilterStream.ReadByte
int Org::BouncyCastle::Utilities::IO::FilterStream::ReadByte() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Utilities::IO").WithContext("FilterStream").WithContext("ReadByte");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<int>(), "ReadByte", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<int, false>(this, ___internal__method);
}
// Autogenerated method: Org.BouncyCastle.Utilities.IO.FilterStream.Write
void Org::BouncyCastle::Utilities::IO::FilterStream::Write(::Array<uint8_t>* buffer, int offset, int count) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Utilities::IO").WithContext("FilterStream").WithContext("Write");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "Write", {}, ::il2cpp_utils::ExtractTypes(buffer, offset, count)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, buffer, offset, count);
}
// Autogenerated method: Org.BouncyCastle.Utilities.IO.FilterStream.WriteByte
void Org::BouncyCastle::Utilities::IO::FilterStream::WriteByte(uint8_t value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Utilities::IO").WithContext("FilterStream").WithContext("WriteByte");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "WriteByte", {}, ::il2cpp_utils::ExtractTypes(value)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, value);
}