// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Net.SimpleAsyncCallback
#include "System/Net/SimpleAsyncCallback.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Including type: System.Net.SimpleAsyncResult
#include "System/Net/SimpleAsyncResult.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.Net.SimpleAsyncCallback..ctor
System::Net::SimpleAsyncCallback* System::Net::SimpleAsyncCallback::New_ctor(::Il2CppObject* object, System::IntPtr method) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Net").WithContext("SimpleAsyncCallback").WithContext(".ctor");
  return THROW_UNLESS(::il2cpp_utils::New<SimpleAsyncCallback*>(object, method));
}
// Autogenerated method: System.Net.SimpleAsyncCallback.Invoke
void System::Net::SimpleAsyncCallback::Invoke(System::Net::SimpleAsyncResult* result) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Net").WithContext("SimpleAsyncCallback").WithContext("Invoke");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "Invoke", {}, ::il2cpp_utils::ExtractTypes(result)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, result);
}
// Autogenerated method: System.Net.SimpleAsyncCallback.BeginInvoke
System::IAsyncResult* System::Net::SimpleAsyncCallback::BeginInvoke(System::Net::SimpleAsyncResult* result, System::AsyncCallback* callback, ::Il2CppObject* object) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Net").WithContext("SimpleAsyncCallback").WithContext("BeginInvoke");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<System::IAsyncResult*>(), "BeginInvoke", {}, ::il2cpp_utils::ExtractTypes(result, callback, object)));
  return ::il2cpp_utils::RunMethodThrow<System::IAsyncResult*, false>(this, ___internal__method, result, callback, object);
}
// Autogenerated method: System.Net.SimpleAsyncCallback.EndInvoke
void System::Net::SimpleAsyncCallback::EndInvoke(System::IAsyncResult* result) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Net").WithContext("SimpleAsyncCallback").WithContext("EndInvoke");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "EndInvoke", {}, ::il2cpp_utils::ExtractTypes(result)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, result);
}