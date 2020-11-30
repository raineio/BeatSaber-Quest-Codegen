// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: LiteNetLib.EventBasedNetListener/OnDeliveryEvent
#include "LiteNetLib/EventBasedNetListener_OnDeliveryEvent.hpp"
// Including type: LiteNetLib.NetPeer
#include "LiteNetLib/NetPeer.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: LiteNetLib.EventBasedNetListener/OnDeliveryEvent..ctor
LiteNetLib::EventBasedNetListener::OnDeliveryEvent* LiteNetLib::EventBasedNetListener::OnDeliveryEvent::New_ctor(::Il2CppObject* object, System::IntPtr method) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("LiteNetLib").WithContext("OnDeliveryEvent").WithContext(".ctor");
  return THROW_UNLESS(::il2cpp_utils::New<EventBasedNetListener::OnDeliveryEvent*>(object, method));
}
// Autogenerated method: LiteNetLib.EventBasedNetListener/OnDeliveryEvent.Invoke
void LiteNetLib::EventBasedNetListener::OnDeliveryEvent::Invoke(LiteNetLib::NetPeer* peer, ::Il2CppObject* userData) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("LiteNetLib").WithContext("OnDeliveryEvent").WithContext("Invoke");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "Invoke", {}, ::il2cpp_utils::ExtractTypes(peer, userData)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, peer, userData);
}
// Autogenerated method: LiteNetLib.EventBasedNetListener/OnDeliveryEvent.BeginInvoke
System::IAsyncResult* LiteNetLib::EventBasedNetListener::OnDeliveryEvent::BeginInvoke(LiteNetLib::NetPeer* peer, ::Il2CppObject* userData, System::AsyncCallback* callback, ::Il2CppObject* object) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("LiteNetLib").WithContext("OnDeliveryEvent").WithContext("BeginInvoke");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<System::IAsyncResult*>(), "BeginInvoke", {}, ::il2cpp_utils::ExtractTypes(peer, userData, callback, object)));
  return ::il2cpp_utils::RunMethodThrow<System::IAsyncResult*, false>(this, ___internal__method, peer, userData, callback, object);
}
// Autogenerated method: LiteNetLib.EventBasedNetListener/OnDeliveryEvent.EndInvoke
void LiteNetLib::EventBasedNetListener::OnDeliveryEvent::EndInvoke(System::IAsyncResult* result) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("LiteNetLib").WithContext("OnDeliveryEvent").WithContext("EndInvoke");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "EndInvoke", {}, ::il2cpp_utils::ExtractTypes(result)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, result);
}