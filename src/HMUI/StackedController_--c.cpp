// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: HMUI.StackedController/<>c
#include "HMUI/StackedController_--c.hpp"
// Including type: HMUI.ViewController
#include "HMUI/ViewController.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static public readonly HMUI.StackedController/<>c <>9
HMUI::StackedController::$$c* HMUI::StackedController::$$c::_get_$$9() {
  static auto ___internal__logger = Logger::get().WithContext("codegen").WithContext("HMUI").WithContext("$$c").WithContext("_get_$$9");
  return THROW_UNLESS((il2cpp_utils::GetFieldValue<HMUI::StackedController::$$c*>("HMUI", "StackedController/<>c", "<>9")));
}
// Autogenerated static field setter
// Set static field: static public readonly HMUI.StackedController/<>c <>9
void HMUI::StackedController::$$c::_set_$$9(HMUI::StackedController::$$c* value) {
  static auto ___internal__logger = Logger::get().WithContext("codegen").WithContext("HMUI").WithContext("$$c").WithContext("_set_$$9");
  THROW_UNLESS((il2cpp_utils::SetFieldValue("HMUI", "StackedController/<>c", "<>9", value)));
}
// Autogenerated method: HMUI.StackedController/<>c..cctor
void HMUI::StackedController::$$c::_cctor() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("HMUI").WithContext("$$c").WithContext(".cctor");
  static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("HMUI", "StackedController/<>c", il2cpp_utils::NoArgClass<void>(), ".cctor", {}, ::il2cpp_utils::ExtractTypes())));
  ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method);
}
// Autogenerated method: HMUI.StackedController/<>c.<PushViewController>g__AnimationLayouter|3_0
void HMUI::StackedController::$$c::$PushViewController$g__AnimationLayouter_3_0(float t, ::Array<HMUI::ViewController*>* viewControllers) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("HMUI").WithContext("$$c").WithContext("<PushViewController>g__AnimationLayouter|3_0");
  static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "<PushViewController>g__AnimationLayouter|3_0", {}, ::il2cpp_utils::ExtractTypes(t, viewControllers))));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, t, viewControllers);
}
// Autogenerated method: HMUI.StackedController/<>c..ctor
HMUI::StackedController::$$c* HMUI::StackedController::$$c::New_ctor() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("HMUI").WithContext("$$c").WithContext(".ctor");
  return THROW_UNLESS(::il2cpp_utils::New<StackedController::$$c*>());
}