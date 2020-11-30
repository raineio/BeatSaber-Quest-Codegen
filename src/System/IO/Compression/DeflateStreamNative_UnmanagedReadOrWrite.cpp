// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IO.Compression.DeflateStreamNative/UnmanagedReadOrWrite
#include "System/IO/Compression/DeflateStreamNative_UnmanagedReadOrWrite.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.IO.Compression.DeflateStreamNative/UnmanagedReadOrWrite..ctor
System::IO::Compression::DeflateStreamNative::UnmanagedReadOrWrite* System::IO::Compression::DeflateStreamNative::UnmanagedReadOrWrite::New_ctor(::Il2CppObject* object, System::IntPtr method) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::IO::Compression").WithContext("UnmanagedReadOrWrite").WithContext(".ctor");
  return THROW_UNLESS(::il2cpp_utils::New<DeflateStreamNative::UnmanagedReadOrWrite*>(object, method));
}
// Autogenerated method: System.IO.Compression.DeflateStreamNative/UnmanagedReadOrWrite.Invoke
int System::IO::Compression::DeflateStreamNative::UnmanagedReadOrWrite::Invoke(System::IntPtr buffer, int length, System::IntPtr data) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::IO::Compression").WithContext("UnmanagedReadOrWrite").WithContext("Invoke");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<int>(), "Invoke", {}, ::il2cpp_utils::ExtractTypes(buffer, length, data)));
  return ::il2cpp_utils::RunMethodThrow<int, false>(this, ___internal__method, buffer, length, data);
}
// Autogenerated method: System.IO.Compression.DeflateStreamNative/UnmanagedReadOrWrite.BeginInvoke
System::IAsyncResult* System::IO::Compression::DeflateStreamNative::UnmanagedReadOrWrite::BeginInvoke(System::IntPtr buffer, int length, System::IntPtr data, System::AsyncCallback* callback, ::Il2CppObject* object) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::IO::Compression").WithContext("UnmanagedReadOrWrite").WithContext("BeginInvoke");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<System::IAsyncResult*>(), "BeginInvoke", {}, ::il2cpp_utils::ExtractTypes(buffer, length, data, callback, object)));
  return ::il2cpp_utils::RunMethodThrow<System::IAsyncResult*, false>(this, ___internal__method, buffer, length, data, callback, object);
}
// Autogenerated method: System.IO.Compression.DeflateStreamNative/UnmanagedReadOrWrite.EndInvoke
int System::IO::Compression::DeflateStreamNative::UnmanagedReadOrWrite::EndInvoke(System::IAsyncResult* result) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::IO::Compression").WithContext("UnmanagedReadOrWrite").WithContext("EndInvoke");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<int>(), "EndInvoke", {}, ::il2cpp_utils::ExtractTypes(result)));
  return ::il2cpp_utils::RunMethodThrow<int, false>(this, ___internal__method, result);
}