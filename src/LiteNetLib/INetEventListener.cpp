// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: LiteNetLib.INetEventListener
#include "LiteNetLib/INetEventListener.hpp"
// Including type: LiteNetLib.NetPeer
#include "LiteNetLib/NetPeer.hpp"
// Including type: LiteNetLib.DisconnectInfo
#include "LiteNetLib/DisconnectInfo.hpp"
// Including type: System.Net.IPEndPoint
#include "System/Net/IPEndPoint.hpp"
// Including type: System.Net.Sockets.SocketError
#include "System/Net/Sockets/SocketError.hpp"
// Including type: LiteNetLib.NetPacketReader
#include "LiteNetLib/NetPacketReader.hpp"
// Including type: LiteNetLib.DeliveryMethod
#include "LiteNetLib/DeliveryMethod.hpp"
// Including type: LiteNetLib.UnconnectedMessageType
#include "LiteNetLib/UnconnectedMessageType.hpp"
// Including type: LiteNetLib.ConnectionRequest
#include "LiteNetLib/ConnectionRequest.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: LiteNetLib.INetEventListener.OnPeerConnected
void LiteNetLib::INetEventListener::LiteNetLib_INetEventListener_OnPeerConnected(LiteNetLib::NetPeer* peer) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("LiteNetLib").WithContext("INetEventListener").WithContext("OnPeerConnected");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "OnPeerConnected", {}, ::il2cpp_utils::ExtractTypes(peer)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, peer);
}
// Autogenerated method: LiteNetLib.INetEventListener.OnPeerDisconnected
void LiteNetLib::INetEventListener::LiteNetLib_INetEventListener_OnPeerDisconnected(LiteNetLib::NetPeer* peer, LiteNetLib::DisconnectInfo disconnectInfo) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("LiteNetLib").WithContext("INetEventListener").WithContext("OnPeerDisconnected");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "OnPeerDisconnected", {}, ::il2cpp_utils::ExtractTypes(peer, disconnectInfo)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, peer, disconnectInfo);
}
// Autogenerated method: LiteNetLib.INetEventListener.OnNetworkError
void LiteNetLib::INetEventListener::LiteNetLib_INetEventListener_OnNetworkError(System::Net::IPEndPoint* endPoint, System::Net::Sockets::SocketError socketError) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("LiteNetLib").WithContext("INetEventListener").WithContext("OnNetworkError");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "OnNetworkError", {}, ::il2cpp_utils::ExtractTypes(endPoint, socketError)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, endPoint, socketError);
}
// Autogenerated method: LiteNetLib.INetEventListener.OnNetworkReceive
void LiteNetLib::INetEventListener::LiteNetLib_INetEventListener_OnNetworkReceive(LiteNetLib::NetPeer* peer, LiteNetLib::NetPacketReader* reader, LiteNetLib::DeliveryMethod deliveryMethod) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("LiteNetLib").WithContext("INetEventListener").WithContext("OnNetworkReceive");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "OnNetworkReceive", {}, ::il2cpp_utils::ExtractTypes(peer, reader, deliveryMethod)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, peer, reader, deliveryMethod);
}
// Autogenerated method: LiteNetLib.INetEventListener.OnNetworkReceiveUnconnected
void LiteNetLib::INetEventListener::LiteNetLib_INetEventListener_OnNetworkReceiveUnconnected(System::Net::IPEndPoint* remoteEndPoint, LiteNetLib::NetPacketReader* reader, LiteNetLib::UnconnectedMessageType messageType) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("LiteNetLib").WithContext("INetEventListener").WithContext("OnNetworkReceiveUnconnected");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "OnNetworkReceiveUnconnected", {}, ::il2cpp_utils::ExtractTypes(remoteEndPoint, reader, messageType)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, remoteEndPoint, reader, messageType);
}
// Autogenerated method: LiteNetLib.INetEventListener.OnNetworkLatencyUpdate
void LiteNetLib::INetEventListener::LiteNetLib_INetEventListener_OnNetworkLatencyUpdate(LiteNetLib::NetPeer* peer, int latency) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("LiteNetLib").WithContext("INetEventListener").WithContext("OnNetworkLatencyUpdate");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "OnNetworkLatencyUpdate", {}, ::il2cpp_utils::ExtractTypes(peer, latency)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, peer, latency);
}
// Autogenerated method: LiteNetLib.INetEventListener.OnConnectionRequest
void LiteNetLib::INetEventListener::LiteNetLib_INetEventListener_OnConnectionRequest(LiteNetLib::ConnectionRequest* request) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("LiteNetLib").WithContext("INetEventListener").WithContext("OnConnectionRequest");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "OnConnectionRequest", {}, ::il2cpp_utils::ExtractTypes(request)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, request);
}