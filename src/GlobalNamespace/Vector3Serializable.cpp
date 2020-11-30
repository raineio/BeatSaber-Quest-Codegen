// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Vector3Serializable
#include "GlobalNamespace/Vector3Serializable.hpp"
// Including type: LiteNetLib.Utils.NetDataReader
#include "LiteNetLib/Utils/NetDataReader.hpp"
// Including type: LiteNetLib.Utils.NetDataWriter
#include "LiteNetLib/Utils/NetDataWriter.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Vector3Serializable..ctor
// ABORTED elsewhere.  GlobalNamespace::Vector3Serializable::Vector3Serializable(UnityEngine::Vector3 v)
// Autogenerated method: Vector3Serializable..ctor
GlobalNamespace::Vector3Serializable::Vector3Serializable(LiteNetLib::Utils::NetDataReader* reader) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("Vector3Serializable").WithContext(".ctor");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(*this, il2cpp_utils::NoArgClass<Vector3Serializable>(), ".ctor", {}, ::il2cpp_utils::ExtractTypes(reader)));
  ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, reader);
}
// Autogenerated method: Vector3Serializable.Serialize
void GlobalNamespace::Vector3Serializable::Serialize(LiteNetLib::Utils::NetDataWriter* writer) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("Vector3Serializable").WithContext("Serialize");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(*this, il2cpp_utils::NoArgClass<void>(), "Serialize", {}, ::il2cpp_utils::ExtractTypes(writer)));
  ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, writer);
}
void GlobalNamespace::Vector3Serializable::LiteNetLib_Utils_INetSerializable_Serialize(LiteNetLib::Utils::NetDataWriter* writer) {
  GlobalNamespace::Vector3Serializable::Serialize(writer);
}
// Autogenerated method: Vector3Serializable.Deserialize
void GlobalNamespace::Vector3Serializable::Deserialize(LiteNetLib::Utils::NetDataReader* reader) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("Vector3Serializable").WithContext("Deserialize");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(*this, il2cpp_utils::NoArgClass<void>(), "Deserialize", {}, ::il2cpp_utils::ExtractTypes(reader)));
  ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, reader);
}
void GlobalNamespace::Vector3Serializable::LiteNetLib_Utils_INetSerializable_Deserialize(LiteNetLib::Utils::NetDataReader* reader) {
  GlobalNamespace::Vector3Serializable::Deserialize(reader);
}
// Autogenerated method: Vector3Serializable.Equals
bool GlobalNamespace::Vector3Serializable::Equals(GlobalNamespace::Vector3Serializable other) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("Vector3Serializable").WithContext("Equals");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(*this, il2cpp_utils::NoArgClass<bool>(), "Equals", {}, ::il2cpp_utils::ExtractTypes(other)));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(*this, ___internal__method, other);
}
// Autogenerated method: Vector3Serializable.Equals
bool GlobalNamespace::Vector3Serializable::Equals(::Il2CppObject* obj) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("Vector3Serializable").WithContext("Equals");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(*this, il2cpp_utils::NoArgClass<bool>(), "Equals", {}, ::il2cpp_utils::ExtractTypes(obj)));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(*this, ___internal__method, obj);
}
// Autogenerated method: Vector3Serializable.GetHashCode
int GlobalNamespace::Vector3Serializable::GetHashCode() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("Vector3Serializable").WithContext("GetHashCode");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(*this, il2cpp_utils::NoArgClass<int>(), "GetHashCode", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<int, false>(*this, ___internal__method);
}
// Autogenerated method: Vector3Serializable.ToString
::Il2CppString* GlobalNamespace::Vector3Serializable::ToString() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("Vector3Serializable").WithContext("ToString");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(*this, il2cpp_utils::NoArgClass<::Il2CppString*>(), "ToString", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<::Il2CppString*, false>(*this, ___internal__method);
}