// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: MultiplayerPlayerPlacement/<>c
#include "GlobalNamespace/MultiplayerPlayerPlacement_--c.hpp"
// Including type: System.Comparison`1
#include "System/Comparison_1.hpp"
// Including type: IConnectedPlayer
#include "GlobalNamespace/IConnectedPlayer.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static public readonly MultiplayerPlayerPlacement/<>c <>9
GlobalNamespace::MultiplayerPlayerPlacement::$$c* GlobalNamespace::MultiplayerPlayerPlacement::$$c::_get_$$9() {
  static auto ___internal__logger = Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("$$c").WithContext("_get_$$9");
  return THROW_UNLESS((il2cpp_utils::GetFieldValue<GlobalNamespace::MultiplayerPlayerPlacement::$$c*>("", "MultiplayerPlayerPlacement/<>c", "<>9")));
}
// Autogenerated static field setter
// Set static field: static public readonly MultiplayerPlayerPlacement/<>c <>9
void GlobalNamespace::MultiplayerPlayerPlacement::$$c::_set_$$9(GlobalNamespace::MultiplayerPlayerPlacement::$$c* value) {
  static auto ___internal__logger = Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("$$c").WithContext("_set_$$9");
  THROW_UNLESS((il2cpp_utils::SetFieldValue("", "MultiplayerPlayerPlacement/<>c", "<>9", value)));
}
// Autogenerated static field getter
// Get static field: static public System.Comparison`1<IConnectedPlayer> <>9__4_0
System::Comparison_1<GlobalNamespace::IConnectedPlayer*>* GlobalNamespace::MultiplayerPlayerPlacement::$$c::_get_$$9__4_0() {
  static auto ___internal__logger = Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("$$c").WithContext("_get_$$9__4_0");
  return THROW_UNLESS((il2cpp_utils::GetFieldValue<System::Comparison_1<GlobalNamespace::IConnectedPlayer*>*>("", "MultiplayerPlayerPlacement/<>c", "<>9__4_0")));
}
// Autogenerated static field setter
// Set static field: static public System.Comparison`1<IConnectedPlayer> <>9__4_0
void GlobalNamespace::MultiplayerPlayerPlacement::$$c::_set_$$9__4_0(System::Comparison_1<GlobalNamespace::IConnectedPlayer*>* value) {
  static auto ___internal__logger = Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("$$c").WithContext("_set_$$9__4_0");
  THROW_UNLESS((il2cpp_utils::SetFieldValue("", "MultiplayerPlayerPlacement/<>c", "<>9__4_0", value)));
}
// Autogenerated method: MultiplayerPlayerPlacement/<>c..cctor
void GlobalNamespace::MultiplayerPlayerPlacement::$$c::_cctor() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("$$c").WithContext(".cctor");
  static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("", "MultiplayerPlayerPlacement/<>c", il2cpp_utils::NoArgClass<void>(), ".cctor", {}, ::il2cpp_utils::ExtractTypes())));
  ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method);
}
// Autogenerated method: MultiplayerPlayerPlacement/<>c.<SortPlayers>b__4_0
int GlobalNamespace::MultiplayerPlayerPlacement::$$c::$SortPlayers$b__4_0(GlobalNamespace::IConnectedPlayer* p1, GlobalNamespace::IConnectedPlayer* p2) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("$$c").WithContext("<SortPlayers>b__4_0");
  static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<int>(), "<SortPlayers>b__4_0", {}, ::il2cpp_utils::ExtractTypes(p1, p2))));
  return ::il2cpp_utils::RunMethodThrow<int, false>(this, ___internal__method, p1, p2);
}
// Autogenerated method: MultiplayerPlayerPlacement/<>c..ctor
GlobalNamespace::MultiplayerPlayerPlacement::$$c* GlobalNamespace::MultiplayerPlayerPlacement::$$c::New_ctor() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("$$c").WithContext(".ctor");
  return THROW_UNLESS(::il2cpp_utils::New<MultiplayerPlayerPlacement::$$c*>());
}