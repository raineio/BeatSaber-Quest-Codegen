// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OnlineServicesInfoViewController
#include "GlobalNamespace/OnlineServicesInfoViewController.hpp"
// Including type: OnlineServicesInfoViewController/<GetServerStatus>d__8
#include "GlobalNamespace/OnlineServicesInfoViewController_-GetServerStatus-d__8.hpp"
// Including type: HMUI.TextPageScrollView
#include "HMUI/TextPageScrollView.hpp"
// Including type: BeatmapLevelSO
#include "GlobalNamespace/BeatmapLevelSO.hpp"
// Including type: BeatmapCharacteristicSO
#include "GlobalNamespace/BeatmapCharacteristicSO.hpp"
// Including type: UnityEngine.UI.Button
#include "UnityEngine/UI/Button.hpp"
// Including type: OnlineServices.ServerManager
#include "OnlineServices/ServerManager.hpp"
// Including type: IPlatformUserModel
#include "GlobalNamespace/IPlatformUserModel.hpp"
// Including type: System.Text.StringBuilder
#include "System/Text/StringBuilder.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: OnlineServicesInfoViewController.GetServerStatus
void GlobalNamespace::OnlineServicesInfoViewController::GetServerStatus() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("OnlineServicesInfoViewController").WithContext("GetServerStatus");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "GetServerStatus", {}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: OnlineServicesInfoViewController.AppendLine
void GlobalNamespace::OnlineServicesInfoViewController::AppendLine(::Il2CppString* line) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("OnlineServicesInfoViewController").WithContext("AppendLine");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "AppendLine", {}, ::il2cpp_utils::ExtractTypes(line)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, line);
}
// Autogenerated method: OnlineServicesInfoViewController.DidActivate
void GlobalNamespace::OnlineServicesInfoViewController::DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("OnlineServicesInfoViewController").WithContext("DidActivate");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "DidActivate", {}, ::il2cpp_utils::ExtractTypes(firstActivation, addedToHierarchy, screenSystemEnabling)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, firstActivation, addedToHierarchy, screenSystemEnabling);
}
// Autogenerated method: OnlineServicesInfoViewController..ctor
GlobalNamespace::OnlineServicesInfoViewController* GlobalNamespace::OnlineServicesInfoViewController::New_ctor() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("OnlineServicesInfoViewController").WithContext(".ctor");
  return THROW_UNLESS(::il2cpp_utils::New<OnlineServicesInfoViewController*>());
}