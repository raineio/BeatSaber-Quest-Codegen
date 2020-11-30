// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: PlayerTransforms
#include "GlobalNamespace/PlayerTransforms.hpp"
// Including type: UnityEngine.Transform
#include "UnityEngine/Transform.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: PlayerTransforms.get_headPos
UnityEngine::Vector3 GlobalNamespace::PlayerTransforms::get_headPos() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("PlayerTransforms").WithContext("get_headPos");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<UnityEngine::Vector3>(), "get_headPos", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<UnityEngine::Vector3, false>(this, ___internal__method);
}
// Autogenerated method: PlayerTransforms.get_headRot
UnityEngine::Quaternion GlobalNamespace::PlayerTransforms::get_headRot() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("PlayerTransforms").WithContext("get_headRot");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<UnityEngine::Quaternion>(), "get_headRot", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<UnityEngine::Quaternion, false>(this, ___internal__method);
}
// Autogenerated method: PlayerTransforms.get_headLocalPos
UnityEngine::Vector3 GlobalNamespace::PlayerTransforms::get_headLocalPos() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("PlayerTransforms").WithContext("get_headLocalPos");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<UnityEngine::Vector3>(), "get_headLocalPos", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<UnityEngine::Vector3, false>(this, ___internal__method);
}
// Autogenerated method: PlayerTransforms.get_headLocalRot
UnityEngine::Quaternion GlobalNamespace::PlayerTransforms::get_headLocalRot() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("PlayerTransforms").WithContext("get_headLocalRot");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<UnityEngine::Quaternion>(), "get_headLocalRot", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<UnityEngine::Quaternion, false>(this, ___internal__method);
}
// Autogenerated method: PlayerTransforms.OverrideHeadPos
void GlobalNamespace::PlayerTransforms::OverrideHeadPos(UnityEngine::Vector3 pos) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("PlayerTransforms").WithContext("OverrideHeadPos");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "OverrideHeadPos", {}, ::il2cpp_utils::ExtractTypes(pos)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, pos);
}
// Autogenerated method: PlayerTransforms.Update
void GlobalNamespace::PlayerTransforms::Update() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("PlayerTransforms").WithContext("Update");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "Update", {}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: PlayerTransforms.MoveTowardsHead
float GlobalNamespace::PlayerTransforms::MoveTowardsHead(float start, float end, UnityEngine::Quaternion noteInverseWorldRotation, float t) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("PlayerTransforms").WithContext("MoveTowardsHead");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<float>(), "MoveTowardsHead", {}, ::il2cpp_utils::ExtractTypes(start, end, noteInverseWorldRotation, t)));
  return ::il2cpp_utils::RunMethodThrow<float, false>(this, ___internal__method, start, end, noteInverseWorldRotation, t);
}
// Autogenerated method: PlayerTransforms.GetZPosOffsetByHeadPosAtTime
float GlobalNamespace::PlayerTransforms::GetZPosOffsetByHeadPosAtTime(float start, float end, float t) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("PlayerTransforms").WithContext("GetZPosOffsetByHeadPosAtTime");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<float>(), "GetZPosOffsetByHeadPosAtTime", {}, ::il2cpp_utils::ExtractTypes(start, end, t)));
  return ::il2cpp_utils::RunMethodThrow<float, false>(this, ___internal__method, start, end, t);
}
// Autogenerated method: PlayerTransforms.GetZPos
float GlobalNamespace::PlayerTransforms::GetZPos(float start, float end, float headOffsetZ, float t) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("PlayerTransforms").WithContext("GetZPos");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<float>(), "GetZPos", {}, ::il2cpp_utils::ExtractTypes(start, end, headOffsetZ, t)));
  return ::il2cpp_utils::RunMethodThrow<float, false>(this, ___internal__method, start, end, headOffsetZ, t);
}
// Autogenerated method: PlayerTransforms.HeadOffsetZ
float GlobalNamespace::PlayerTransforms::HeadOffsetZ(UnityEngine::Quaternion noteInverseWorldRotation) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("PlayerTransforms").WithContext("HeadOffsetZ");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<float>(), "HeadOffsetZ", {}, ::il2cpp_utils::ExtractTypes(noteInverseWorldRotation)));
  return ::il2cpp_utils::RunMethodThrow<float, false>(this, ___internal__method, noteInverseWorldRotation);
}
// Autogenerated method: PlayerTransforms..ctor
GlobalNamespace::PlayerTransforms* GlobalNamespace::PlayerTransforms::New_ctor() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("PlayerTransforms").WithContext(".ctor");
  return THROW_UNLESS(::il2cpp_utils::New<PlayerTransforms*>());
}