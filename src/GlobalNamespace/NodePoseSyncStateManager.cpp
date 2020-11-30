// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: NodePoseSyncStateManager
#include "GlobalNamespace/NodePoseSyncStateManager.hpp"
// Including type: NodePoseSyncStateNetSerializable
#include "GlobalNamespace/NodePoseSyncStateNetSerializable.hpp"
// Including type: IPacketPool`1
#include "GlobalNamespace/IPacketPool_1.hpp"
// Including type: MultiplayerSessionManager/MessageType
#include "GlobalNamespace/MultiplayerSessionManager_MessageType.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: NodePoseSyncStateManager.get_serializablePool
GlobalNamespace::IPacketPool_1<GlobalNamespace::NodePoseSyncStateNetSerializable*>* GlobalNamespace::NodePoseSyncStateManager::get_serializablePool() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("NodePoseSyncStateManager").WithContext("get_serializablePool");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<GlobalNamespace::IPacketPool_1<GlobalNamespace::NodePoseSyncStateNetSerializable*>*>(), "get_serializablePool", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<GlobalNamespace::IPacketPool_1<GlobalNamespace::NodePoseSyncStateNetSerializable*>*, false>(this, ___internal__method);
}
// Autogenerated method: NodePoseSyncStateManager.Interpolate
GlobalNamespace::PoseSerializable GlobalNamespace::NodePoseSyncStateManager::Interpolate(GlobalNamespace::PoseSerializable prev, float prevTime, GlobalNamespace::PoseSerializable curr, float currTime, float time) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("NodePoseSyncStateManager").WithContext("Interpolate");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<GlobalNamespace::PoseSerializable>(), "Interpolate", {}, ::il2cpp_utils::ExtractTypes(prev, prevTime, curr, currTime, time)));
  return ::il2cpp_utils::RunMethodThrow<GlobalNamespace::PoseSerializable, false>(this, ___internal__method, prev, prevTime, curr, currTime, time);
}
// Autogenerated method: NodePoseSyncStateManager.Smooth
GlobalNamespace::PoseSerializable GlobalNamespace::NodePoseSyncStateManager::Smooth(GlobalNamespace::PoseSerializable a, GlobalNamespace::PoseSerializable b, float smooth) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("NodePoseSyncStateManager").WithContext("Smooth");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<GlobalNamespace::PoseSerializable>(), "Smooth", {}, ::il2cpp_utils::ExtractTypes(a, b, smooth)));
  return ::il2cpp_utils::RunMethodThrow<GlobalNamespace::PoseSerializable, false>(this, ___internal__method, a, b, smooth);
}
// Autogenerated method: NodePoseSyncStateManager.get_unreliableUpdateFrequency
float GlobalNamespace::NodePoseSyncStateManager::get_unreliableUpdateFrequency() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("NodePoseSyncStateManager").WithContext("get_unreliableUpdateFrequency");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<float>(), "get_unreliableUpdateFrequency", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<float, false>(this, ___internal__method);
}
// Autogenerated method: NodePoseSyncStateManager.get_reliableUpdateFrequency
float GlobalNamespace::NodePoseSyncStateManager::get_reliableUpdateFrequency() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("NodePoseSyncStateManager").WithContext("get_reliableUpdateFrequency");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<float>(), "get_reliableUpdateFrequency", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<float, false>(this, ___internal__method);
}
// Autogenerated method: NodePoseSyncStateManager.get_localBufferSize
int GlobalNamespace::NodePoseSyncStateManager::get_localBufferSize() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("NodePoseSyncStateManager").WithContext("get_localBufferSize");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<int>(), "get_localBufferSize", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<int, false>(this, ___internal__method);
}
// Autogenerated method: NodePoseSyncStateManager.get_remoteBufferSize
int GlobalNamespace::NodePoseSyncStateManager::get_remoteBufferSize() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("NodePoseSyncStateManager").WithContext("get_remoteBufferSize");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<int>(), "get_remoteBufferSize", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<int, false>(this, ___internal__method);
}
// Autogenerated method: NodePoseSyncStateManager.get_messageType
GlobalNamespace::MultiplayerSessionManager_MessageType GlobalNamespace::NodePoseSyncStateManager::get_messageType() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("NodePoseSyncStateManager").WithContext("get_messageType");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<GlobalNamespace::MultiplayerSessionManager_MessageType>(), "get_messageType", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<GlobalNamespace::MultiplayerSessionManager_MessageType, false>(this, ___internal__method);
}
// Autogenerated method: NodePoseSyncStateManager..ctor
GlobalNamespace::NodePoseSyncStateManager* GlobalNamespace::NodePoseSyncStateManager::New_ctor() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("NodePoseSyncStateManager").WithContext(".ctor");
  return THROW_UNLESS(::il2cpp_utils::New<NodePoseSyncStateManager*>());
}