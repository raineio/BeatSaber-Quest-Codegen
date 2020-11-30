// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: NodePoseSyncState
#include "GlobalNamespace/NodePoseSyncState.hpp"
// Including type: LiteNetLib.Utils.NetDataWriter
#include "LiteNetLib/Utils/NetDataWriter.hpp"
// Including type: LiteNetLib.Utils.NetDataReader
#include "LiteNetLib/Utils/NetDataReader.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static private System.Int32 kFloatSize
int GlobalNamespace::NodePoseSyncState::_get_kFloatSize() {
  static auto ___internal__logger = Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("NodePoseSyncState").WithContext("_get_kFloatSize");
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<int>("", "NodePoseSyncState", "kFloatSize"));
}
// Autogenerated static field setter
// Set static field: static private System.Int32 kFloatSize
void GlobalNamespace::NodePoseSyncState::_set_kFloatSize(int value) {
  static auto ___internal__logger = Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("NodePoseSyncState").WithContext("_set_kFloatSize");
  THROW_UNLESS(il2cpp_utils::SetFieldValue("", "NodePoseSyncState", "kFloatSize", value));
}
// Autogenerated static field getter
// Get static field: static private System.Int32 kPoseSize
int GlobalNamespace::NodePoseSyncState::_get_kPoseSize() {
  static auto ___internal__logger = Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("NodePoseSyncState").WithContext("_get_kPoseSize");
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<int>("", "NodePoseSyncState", "kPoseSize"));
}
// Autogenerated static field setter
// Set static field: static private System.Int32 kPoseSize
void GlobalNamespace::NodePoseSyncState::_set_kPoseSize(int value) {
  static auto ___internal__logger = Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("NodePoseSyncState").WithContext("_set_kPoseSize");
  THROW_UNLESS(il2cpp_utils::SetFieldValue("", "NodePoseSyncState", "kPoseSize", value));
}
// Autogenerated method: NodePoseSyncState.Equals
bool GlobalNamespace::NodePoseSyncState::Equals(GlobalNamespace::NodePoseSyncState& other) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("NodePoseSyncState").WithContext("Equals");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(*this, il2cpp_utils::NoArgClass<bool>(), "Equals", {}, ::il2cpp_utils::ExtractTypes(other)));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(*this, ___internal__method, other);
}
// Autogenerated method: NodePoseSyncState.Serialize
void GlobalNamespace::NodePoseSyncState::Serialize(LiteNetLib::Utils::NetDataWriter* writer) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("NodePoseSyncState").WithContext("Serialize");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(*this, il2cpp_utils::NoArgClass<void>(), "Serialize", {}, ::il2cpp_utils::ExtractTypes(writer)));
  ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, writer);
}
void GlobalNamespace::NodePoseSyncState::LiteNetLib_Utils_INetSerializable_Serialize(LiteNetLib::Utils::NetDataWriter* writer) {
  GlobalNamespace::NodePoseSyncState::Serialize(writer);
}
// Autogenerated method: NodePoseSyncState.Deserialize
void GlobalNamespace::NodePoseSyncState::Deserialize(LiteNetLib::Utils::NetDataReader* reader) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("NodePoseSyncState").WithContext("Deserialize");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(*this, il2cpp_utils::NoArgClass<void>(), "Deserialize", {}, ::il2cpp_utils::ExtractTypes(reader)));
  ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, reader);
}
void GlobalNamespace::NodePoseSyncState::LiteNetLib_Utils_INetSerializable_Deserialize(LiteNetLib::Utils::NetDataReader* reader) {
  GlobalNamespace::NodePoseSyncState::Deserialize(reader);
}
// Autogenerated method: NodePoseSyncState.SetState
void GlobalNamespace::NodePoseSyncState::SetState(GlobalNamespace::NodePoseSyncState_NodePose nodePose, GlobalNamespace::PoseSerializable pose) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("NodePoseSyncState").WithContext("SetState");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(*this, il2cpp_utils::NoArgClass<void>(), "SetState", {}, ::il2cpp_utils::ExtractTypes(nodePose, pose)));
  ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, nodePose, pose);
}
// Autogenerated method: NodePoseSyncState.GetState
GlobalNamespace::PoseSerializable GlobalNamespace::NodePoseSyncState::GetState(GlobalNamespace::NodePoseSyncState_NodePose nodePose) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("NodePoseSyncState").WithContext("GetState");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(*this, il2cpp_utils::NoArgClass<GlobalNamespace::PoseSerializable>(), "GetState", {}, ::il2cpp_utils::ExtractTypes(nodePose)));
  return ::il2cpp_utils::RunMethodThrow<GlobalNamespace::PoseSerializable, false>(*this, ___internal__method, nodePose);
}