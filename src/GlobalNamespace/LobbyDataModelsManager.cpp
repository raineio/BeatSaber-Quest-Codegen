// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: LobbyDataModelsManager
#include "GlobalNamespace/LobbyDataModelsManager.hpp"
// Including type: ILobbyStateDataModel
#include "GlobalNamespace/ILobbyStateDataModel.hpp"
// Including type: ILobbyPlayersDataModel
#include "GlobalNamespace/ILobbyPlayersDataModel.hpp"
// Including type: ILobbyGameStateController
#include "GlobalNamespace/ILobbyGameStateController.hpp"
// Including type: INodePoseSyncStateManager
#include "GlobalNamespace/INodePoseSyncStateManager.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: LobbyDataModelsManager.Activate
void GlobalNamespace::LobbyDataModelsManager::Activate() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("LobbyDataModelsManager").WithContext("Activate");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "Activate", {}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: LobbyDataModelsManager.Deactivate
void GlobalNamespace::LobbyDataModelsManager::Deactivate() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("LobbyDataModelsManager").WithContext("Deactivate");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "Deactivate", {}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: LobbyDataModelsManager..ctor
GlobalNamespace::LobbyDataModelsManager* GlobalNamespace::LobbyDataModelsManager::New_ctor() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("LobbyDataModelsManager").WithContext(".ctor");
  return THROW_UNLESS(::il2cpp_utils::New<LobbyDataModelsManager*>());
}