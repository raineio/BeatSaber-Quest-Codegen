// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: MockNodePoseSyncStateManager
#include "GlobalNamespace/MockNodePoseSyncStateManager.hpp"
// Including type: MultiplayerMockSettings
#include "GlobalNamespace/MultiplayerMockSettings.hpp"
// Including type: IMultiplayerSessionManager
#include "GlobalNamespace/IMultiplayerSessionManager.hpp"
// Including type: LocalMultiplayerSyncState`3
#include "GlobalNamespace/LocalMultiplayerSyncState_3.hpp"
// Including type: MultiplayerSyncState`3
#include "GlobalNamespace/MultiplayerSyncState_3.hpp"
// Including type: IConnectedPlayer
#include "GlobalNamespace/IConnectedPlayer.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: MockNodePoseSyncStateManager.get_localState
GlobalNamespace::LocalMultiplayerSyncState_3<GlobalNamespace::NodePoseSyncState, GlobalNamespace::NodePoseSyncState_NodePose, GlobalNamespace::PoseSerializable>* GlobalNamespace::MockNodePoseSyncStateManager::get_localState() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("MockNodePoseSyncStateManager").WithContext("get_localState");
  static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<GlobalNamespace::LocalMultiplayerSyncState_3<GlobalNamespace::NodePoseSyncState, GlobalNamespace::NodePoseSyncState_NodePose, GlobalNamespace::PoseSerializable>*>(), "get_localState", {}, ::il2cpp_utils::ExtractTypes())));
  return ::il2cpp_utils::RunMethodThrow<GlobalNamespace::LocalMultiplayerSyncState_3<GlobalNamespace::NodePoseSyncState, GlobalNamespace::NodePoseSyncState_NodePose, GlobalNamespace::PoseSerializable>*, false>(this, ___internal__method);
}
// Autogenerated method: MockNodePoseSyncStateManager.Init
void GlobalNamespace::MockNodePoseSyncStateManager::Init() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("MockNodePoseSyncStateManager").WithContext("Init");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "Init", {}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: MockNodePoseSyncStateManager.GetSyncStateForPlayer
GlobalNamespace::MultiplayerSyncState_3<GlobalNamespace::NodePoseSyncState, GlobalNamespace::NodePoseSyncState_NodePose, GlobalNamespace::PoseSerializable>* GlobalNamespace::MockNodePoseSyncStateManager::GetSyncStateForPlayer(GlobalNamespace::IConnectedPlayer* player) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("MockNodePoseSyncStateManager").WithContext("GetSyncStateForPlayer");
  static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<GlobalNamespace::MultiplayerSyncState_3<GlobalNamespace::NodePoseSyncState, GlobalNamespace::NodePoseSyncState_NodePose, GlobalNamespace::PoseSerializable>*>(), "GetSyncStateForPlayer", {}, ::il2cpp_utils::ExtractTypes(player))));
  return ::il2cpp_utils::RunMethodThrow<GlobalNamespace::MultiplayerSyncState_3<GlobalNamespace::NodePoseSyncState, GlobalNamespace::NodePoseSyncState_NodePose, GlobalNamespace::PoseSerializable>*, false>(this, ___internal__method, player);
}
// Autogenerated method: MockNodePoseSyncStateManager.GetSyncState
GlobalNamespace::MultiplayerSyncState_3<GlobalNamespace::NodePoseSyncState, GlobalNamespace::NodePoseSyncState_NodePose, GlobalNamespace::PoseSerializable>* GlobalNamespace::MockNodePoseSyncStateManager::GetSyncState(int i) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("MockNodePoseSyncStateManager").WithContext("GetSyncState");
  static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<GlobalNamespace::MultiplayerSyncState_3<GlobalNamespace::NodePoseSyncState, GlobalNamespace::NodePoseSyncState_NodePose, GlobalNamespace::PoseSerializable>*>(), "GetSyncState", {}, ::il2cpp_utils::ExtractTypes(i))));
  return ::il2cpp_utils::RunMethodThrow<GlobalNamespace::MultiplayerSyncState_3<GlobalNamespace::NodePoseSyncState, GlobalNamespace::NodePoseSyncState_NodePose, GlobalNamespace::PoseSerializable>*, false>(this, ___internal__method, i);
}
// Autogenerated method: MockNodePoseSyncStateManager.Interpolate
GlobalNamespace::PoseSerializable GlobalNamespace::MockNodePoseSyncStateManager::Interpolate(GlobalNamespace::PoseSerializable prev, float prevTime, GlobalNamespace::PoseSerializable curr, float currTime, float time) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("MockNodePoseSyncStateManager").WithContext("Interpolate");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<GlobalNamespace::PoseSerializable>(), "Interpolate", {}, ::il2cpp_utils::ExtractTypes(prev, prevTime, curr, currTime, time)));
  return ::il2cpp_utils::RunMethodThrow<GlobalNamespace::PoseSerializable, false>(this, ___internal__method, prev, prevTime, curr, currTime, time);
}
// Autogenerated method: MockNodePoseSyncStateManager.Smooth
GlobalNamespace::PoseSerializable GlobalNamespace::MockNodePoseSyncStateManager::Smooth(GlobalNamespace::PoseSerializable a, GlobalNamespace::PoseSerializable b, float smooth) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("MockNodePoseSyncStateManager").WithContext("Smooth");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<GlobalNamespace::PoseSerializable>(), "Smooth", {}, ::il2cpp_utils::ExtractTypes(a, b, smooth)));
  return ::il2cpp_utils::RunMethodThrow<GlobalNamespace::PoseSerializable, false>(this, ___internal__method, a, b, smooth);
}
// Autogenerated method: MockNodePoseSyncStateManager.get_syncTime
float GlobalNamespace::MockNodePoseSyncStateManager::get_syncTime() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("MockNodePoseSyncStateManager").WithContext("get_syncTime");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<float>(), "get_syncTime", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<float, false>(this, ___internal__method);
}
// Autogenerated method: MockNodePoseSyncStateManager.get_connectedPlayerCount
int GlobalNamespace::MockNodePoseSyncStateManager::get_connectedPlayerCount() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("MockNodePoseSyncStateManager").WithContext("get_connectedPlayerCount");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<int>(), "get_connectedPlayerCount", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<int, false>(this, ___internal__method);
}
// Autogenerated method: MockNodePoseSyncStateManager.ClearBufferedStates
void GlobalNamespace::MockNodePoseSyncStateManager::ClearBufferedStates() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("MockNodePoseSyncStateManager").WithContext("ClearBufferedStates");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "ClearBufferedStates", {}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: MockNodePoseSyncStateManager..ctor
GlobalNamespace::MockNodePoseSyncStateManager* GlobalNamespace::MockNodePoseSyncStateManager::New_ctor() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("MockNodePoseSyncStateManager").WithContext(".ctor");
  return THROW_UNLESS(::il2cpp_utils::New<MockNodePoseSyncStateManager*>());
}