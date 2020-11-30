// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MultiplayerResultsTableCell
#include "GlobalNamespace/MultiplayerResultsTableCell.hpp"
// Including type: TMPro.TextMeshProUGUI
#include "TMPro/TextMeshProUGUI.hpp"
// Including type: TubeBloomPrePassLight
#include "GlobalNamespace/TubeBloomPrePassLight.hpp"
// Including type: UnityEngine.UI.Image
#include "UnityEngine/UI/Image.hpp"
// Including type: UnityEngine.CanvasGroup
#include "UnityEngine/CanvasGroup.hpp"
// Including type: MultiplayerResultsAvatarController
#include "GlobalNamespace/MultiplayerResultsAvatarController.hpp"
// Including type: IConnectedPlayer
#include "GlobalNamespace/IConnectedPlayer.hpp"
// Including type: LevelCompletionResults
#include "GlobalNamespace/LevelCompletionResults.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: MultiplayerResultsTableCell.set_alpha
void GlobalNamespace::MultiplayerResultsTableCell::set_alpha(float value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("MultiplayerResultsTableCell").WithContext("set_alpha");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "set_alpha", {}, ::il2cpp_utils::ExtractTypes(value)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, value);
}
// Autogenerated method: MultiplayerResultsTableCell.SetData
void GlobalNamespace::MultiplayerResultsTableCell::SetData(GlobalNamespace::IConnectedPlayer* connectedPlayer, int position, ::Il2CppString* playerName, GlobalNamespace::LevelCompletionResults* levelCompletionResults, bool isLocalPlayer, int numberOfPlayers) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("MultiplayerResultsTableCell").WithContext("SetData");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "SetData", {}, ::il2cpp_utils::ExtractTypes(connectedPlayer, position, playerName, levelCompletionResults, isLocalPlayer, numberOfPlayers)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, connectedPlayer, position, playerName, levelCompletionResults, isLocalPlayer, numberOfPlayers);
}
// Autogenerated method: MultiplayerResultsTableCell..ctor
GlobalNamespace::MultiplayerResultsTableCell* GlobalNamespace::MultiplayerResultsTableCell::New_ctor() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("MultiplayerResultsTableCell").WithContext(".ctor");
  return THROW_UNLESS(::il2cpp_utils::New<MultiplayerResultsTableCell*>());
}