// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: LiteNetLib.EventBasedNetListener/OnNetworkReceiveUnconnected
#include "LiteNetLib/EventBasedNetListener_OnNetworkReceiveUnconnected.hpp"
// Including type: System.Net.IPEndPoint
#include "System/Net/IPEndPoint.hpp"
// Including type: LiteNetLib.NetPacketReader
#include "LiteNetLib/NetPacketReader.hpp"
// Including type: LiteNetLib.UnconnectedMessageType
#include "LiteNetLib/UnconnectedMessageType.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: LiteNetLib.EventBasedNetListener/OnNetworkReceiveUnconnected..ctor
LiteNetLib::EventBasedNetListener::OnNetworkReceiveUnconnected* LiteNetLib::EventBasedNetListener::OnNetworkReceiveUnconnected::New_ctor(::Il2CppObject* object, System::IntPtr method) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("LiteNetLib").WithContext("OnNetworkReceiveUnconnected").WithContext(".ctor");
  return THROW_UNLESS(::il2cpp_utils::New<EventBasedNetListener::OnNetworkReceiveUnconnected*>(object, method));
}
// Autogenerated method: LiteNetLib.EventBasedNetListener/OnNetworkReceiveUnconnected.Invoke
void LiteNetLib::EventBasedNetListener::OnNetworkReceiveUnconnected::Invoke(System::Net::IPEndPoint* remoteEndPoint, LiteNetLib::NetPacketReader* reader, LiteNetLib::UnconnectedMessageType messageType) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("LiteNetLib").WithContext("OnNetworkReceiveUnconnected").WithContext("Invoke");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "Invoke", {}, ::il2cpp_utils::ExtractTypes(remoteEndPoint, reader, messageType)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, remoteEndPoint, reader, messageType);
}
// Autogenerated method: LiteNetLib.EventBasedNetListener/OnNetworkReceiveUnconnected.BeginInvoke
System::IAsyncResult* LiteNetLib::EventBasedNetListener::OnNetworkReceiveUnconnected::BeginInvoke(System::Net::IPEndPoint* remoteEndPoint, LiteNetLib::NetPacketReader* reader, LiteNetLib::UnconnectedMessageType messageType, System::AsyncCallback* callback, ::Il2CppObject* object) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("LiteNetLib").WithContext("OnNetworkReceiveUnconnected").WithContext("BeginInvoke");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<System::IAsyncResult*>(), "BeginInvoke", {}, ::il2cpp_utils::ExtractTypes(remoteEndPoint, reader, messageType, callback, object)));
  return ::il2cpp_utils::RunMethodThrow<System::IAsyncResult*, false>(this, ___internal__method, remoteEndPoint, reader, messageType, callback, object);
}
// Autogenerated method: LiteNetLib.EventBasedNetListener/OnNetworkReceiveUnconnected.EndInvoke
void LiteNetLib::EventBasedNetListener::OnNetworkReceiveUnconnected::EndInvoke(System::IAsyncResult* result) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("LiteNetLib").WithContext("OnNetworkReceiveUnconnected").WithContext("EndInvoke");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "EndInvoke", {}, ::il2cpp_utils::ExtractTypes(result)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, result);
}