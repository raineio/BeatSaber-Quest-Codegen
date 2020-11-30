// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: EditAvatarFlowCoordinator
#include "GlobalNamespace/EditAvatarFlowCoordinator.hpp"
// Including type: System.Action`2
#include "System/Action_2.hpp"
// Including type: AvatarVisualController
#include "GlobalNamespace/AvatarVisualController.hpp"
// Including type: AvatarTweenController
#include "GlobalNamespace/AvatarTweenController.hpp"
// Including type: UnityEngine.GameObject
#include "UnityEngine/GameObject.hpp"
// Including type: EditColorController
#include "GlobalNamespace/EditColorController.hpp"
// Including type: AvatarDataModel
#include "GlobalNamespace/AvatarDataModel.hpp"
// Including type: System.Collections.Generic.Dictionary`2
#include "System/Collections/Generic/Dictionary_2.hpp"
// Including type: System.Action
#include "System/Action.hpp"
// Including type: System.Action`1
#include "System/Action_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: EditAvatarFlowCoordinator.add_didFinishEvent
void GlobalNamespace::EditAvatarFlowCoordinator::add_didFinishEvent(System::Action_2<GlobalNamespace::EditAvatarFlowCoordinator*, GlobalNamespace::EditAvatarFlowCoordinator::EditAvatarType>* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("EditAvatarFlowCoordinator").WithContext("add_didFinishEvent");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "add_didFinishEvent", {}, ::il2cpp_utils::ExtractTypes(value)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, value);
}
// Autogenerated method: EditAvatarFlowCoordinator.remove_didFinishEvent
void GlobalNamespace::EditAvatarFlowCoordinator::remove_didFinishEvent(System::Action_2<GlobalNamespace::EditAvatarFlowCoordinator*, GlobalNamespace::EditAvatarFlowCoordinator::EditAvatarType>* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("EditAvatarFlowCoordinator").WithContext("remove_didFinishEvent");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "remove_didFinishEvent", {}, ::il2cpp_utils::ExtractTypes(value)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, value);
}
// Autogenerated method: EditAvatarFlowCoordinator.Setup
void GlobalNamespace::EditAvatarFlowCoordinator::Setup(GlobalNamespace::EditAvatarFlowCoordinator::EditAvatarType editAvatarType) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("EditAvatarFlowCoordinator").WithContext("Setup");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "Setup", {}, ::il2cpp_utils::ExtractTypes(editAvatarType)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, editAvatarType);
}
// Autogenerated method: EditAvatarFlowCoordinator.HandleEditAvatarViewControllerDidRequestColorChange
void GlobalNamespace::EditAvatarFlowCoordinator::HandleEditAvatarViewControllerDidRequestColorChange(System::Action_1<UnityEngine::Color>* colorCallback, UnityEngine::Color currentColor, GlobalNamespace::EditAvatarViewController::AvatarEditPart editPart, int uvSegment) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("EditAvatarFlowCoordinator").WithContext("HandleEditAvatarViewControllerDidRequestColorChange");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "HandleEditAvatarViewControllerDidRequestColorChange", {}, ::il2cpp_utils::ExtractTypes(colorCallback, currentColor, editPart, uvSegment)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, colorCallback, currentColor, editPart, uvSegment);
}
// Autogenerated method: EditAvatarFlowCoordinator.HandleEditAvatarViewControllerChangedAvatarPart
void GlobalNamespace::EditAvatarFlowCoordinator::HandleEditAvatarViewControllerChangedAvatarPart(GlobalNamespace::EditAvatarViewController::AvatarEditPart avatarPart) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("EditAvatarFlowCoordinator").WithContext("HandleEditAvatarViewControllerChangedAvatarPart");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "HandleEditAvatarViewControllerChangedAvatarPart", {}, ::il2cpp_utils::ExtractTypes(avatarPart)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, avatarPart);
}
// Autogenerated method: EditAvatarFlowCoordinator.HandleEditAvatarViewControllerDidFinished
void GlobalNamespace::EditAvatarFlowCoordinator::HandleEditAvatarViewControllerDidFinished() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("EditAvatarFlowCoordinator").WithContext("HandleEditAvatarViewControllerDidFinished");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "HandleEditAvatarViewControllerDidFinished", {}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: EditAvatarFlowCoordinator.HandleEditColorViewControllerDidChangedColor
void GlobalNamespace::EditAvatarFlowCoordinator::HandleEditColorViewControllerDidChangedColor(UnityEngine::Color color) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("EditAvatarFlowCoordinator").WithContext("HandleEditColorViewControllerDidChangedColor");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "HandleEditColorViewControllerDidChangedColor", {}, ::il2cpp_utils::ExtractTypes(color)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, color);
}
// Autogenerated method: EditAvatarFlowCoordinator.HandleEditColorViewControllerDidFinish
void GlobalNamespace::EditAvatarFlowCoordinator::HandleEditColorViewControllerDidFinish(bool apply) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("EditAvatarFlowCoordinator").WithContext("HandleEditColorViewControllerDidFinish");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "HandleEditColorViewControllerDidFinish", {}, ::il2cpp_utils::ExtractTypes(apply)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, apply);
}
// Autogenerated method: EditAvatarFlowCoordinator.DidActivate
void GlobalNamespace::EditAvatarFlowCoordinator::DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("EditAvatarFlowCoordinator").WithContext("DidActivate");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "DidActivate", {}, ::il2cpp_utils::ExtractTypes(firstActivation, addedToHierarchy, screenSystemEnabling)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, firstActivation, addedToHierarchy, screenSystemEnabling);
}
// Autogenerated method: EditAvatarFlowCoordinator.DidDeactivate
void GlobalNamespace::EditAvatarFlowCoordinator::DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("EditAvatarFlowCoordinator").WithContext("DidDeactivate");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "DidDeactivate", {}, ::il2cpp_utils::ExtractTypes(removedFromHierarchy, screenSystemDisabling)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, removedFromHierarchy, screenSystemDisabling);
}
// Autogenerated method: EditAvatarFlowCoordinator..ctor
GlobalNamespace::EditAvatarFlowCoordinator* GlobalNamespace::EditAvatarFlowCoordinator::New_ctor() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("EditAvatarFlowCoordinator").WithContext(".ctor");
  return THROW_UNLESS(::il2cpp_utils::New<EditAvatarFlowCoordinator*>());
}