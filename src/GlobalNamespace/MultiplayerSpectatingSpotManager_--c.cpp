// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: MultiplayerSpectatingSpotManager/<>c
#include "GlobalNamespace/MultiplayerSpectatingSpotManager_--c.hpp"
// Including type: System.Func`2
#include "System/Func_2.hpp"
// Including type: IMultiplayerSpectatingSpot
#include "GlobalNamespace/IMultiplayerSpectatingSpot.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static public readonly MultiplayerSpectatingSpotManager/<>c <>9
GlobalNamespace::MultiplayerSpectatingSpotManager::$$c* GlobalNamespace::MultiplayerSpectatingSpotManager::$$c::_get_$$9() {
  static auto ___internal__logger = Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("$$c").WithContext("_get_$$9");
  return THROW_UNLESS((il2cpp_utils::GetFieldValue<GlobalNamespace::MultiplayerSpectatingSpotManager::$$c*>("", "MultiplayerSpectatingSpotManager/<>c", "<>9")));
}
// Autogenerated static field setter
// Set static field: static public readonly MultiplayerSpectatingSpotManager/<>c <>9
void GlobalNamespace::MultiplayerSpectatingSpotManager::$$c::_set_$$9(GlobalNamespace::MultiplayerSpectatingSpotManager::$$c* value) {
  static auto ___internal__logger = Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("$$c").WithContext("_set_$$9");
  THROW_UNLESS((il2cpp_utils::SetFieldValue("", "MultiplayerSpectatingSpotManager/<>c", "<>9", value)));
}
// Autogenerated static field getter
// Get static field: static public System.Func`2<IMultiplayerSpectatingSpot,System.Boolean> <>9__3_0
System::Func_2<GlobalNamespace::IMultiplayerSpectatingSpot*, bool>* GlobalNamespace::MultiplayerSpectatingSpotManager::$$c::_get_$$9__3_0() {
  static auto ___internal__logger = Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("$$c").WithContext("_get_$$9__3_0");
  return THROW_UNLESS((il2cpp_utils::GetFieldValue<System::Func_2<GlobalNamespace::IMultiplayerSpectatingSpot*, bool>*>("", "MultiplayerSpectatingSpotManager/<>c", "<>9__3_0")));
}
// Autogenerated static field setter
// Set static field: static public System.Func`2<IMultiplayerSpectatingSpot,System.Boolean> <>9__3_0
void GlobalNamespace::MultiplayerSpectatingSpotManager::$$c::_set_$$9__3_0(System::Func_2<GlobalNamespace::IMultiplayerSpectatingSpot*, bool>* value) {
  static auto ___internal__logger = Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("$$c").WithContext("_set_$$9__3_0");
  THROW_UNLESS((il2cpp_utils::SetFieldValue("", "MultiplayerSpectatingSpotManager/<>c", "<>9__3_0", value)));
}
// Autogenerated method: MultiplayerSpectatingSpotManager/<>c..cctor
void GlobalNamespace::MultiplayerSpectatingSpotManager::$$c::_cctor() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("$$c").WithContext(".cctor");
  static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("", "MultiplayerSpectatingSpotManager/<>c", il2cpp_utils::NoArgClass<void>(), ".cctor", {}, ::il2cpp_utils::ExtractTypes())));
  ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method);
}
// Autogenerated method: MultiplayerSpectatingSpotManager/<>c.<get_defaultSpot>b__3_0
bool GlobalNamespace::MultiplayerSpectatingSpotManager::$$c::$get_defaultSpot$b__3_0(GlobalNamespace::IMultiplayerSpectatingSpot* s) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("$$c").WithContext("<get_defaultSpot>b__3_0");
  static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<bool>(), "<get_defaultSpot>b__3_0", {}, ::il2cpp_utils::ExtractTypes(s))));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method, s);
}
// Autogenerated method: MultiplayerSpectatingSpotManager/<>c..ctor
GlobalNamespace::MultiplayerSpectatingSpotManager::$$c* GlobalNamespace::MultiplayerSpectatingSpotManager::$$c::New_ctor() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("$$c").WithContext(".ctor");
  return THROW_UNLESS(::il2cpp_utils::New<MultiplayerSpectatingSpotManager::$$c*>());
}