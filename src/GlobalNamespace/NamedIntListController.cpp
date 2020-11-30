// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: NamedIntListController
#include "GlobalNamespace/NamedIntListController.hpp"
// Including type: NamedIntListController/TextValuePair
#include "GlobalNamespace/NamedIntListController_TextValuePair.hpp"
// Including type: System.Action`1
#include "System/Action_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: NamedIntListController.add_valueChangedEvent
void GlobalNamespace::NamedIntListController::add_valueChangedEvent(System::Action_1<int>* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("NamedIntListController").WithContext("add_valueChangedEvent");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "add_valueChangedEvent", {}, ::il2cpp_utils::ExtractTypes(value)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, value);
}
// Autogenerated method: NamedIntListController.remove_valueChangedEvent
void GlobalNamespace::NamedIntListController::remove_valueChangedEvent(System::Action_1<int>* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("NamedIntListController").WithContext("remove_valueChangedEvent");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "remove_valueChangedEvent", {}, ::il2cpp_utils::ExtractTypes(value)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, value);
}
// Autogenerated method: NamedIntListController.InitValues
void GlobalNamespace::NamedIntListController::InitValues(::Array<GlobalNamespace::NamedIntListController::TextValuePair*>* values) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("NamedIntListController").WithContext("InitValues");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "InitValues", {}, ::il2cpp_utils::ExtractTypes(values)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, values);
}
// Autogenerated method: NamedIntListController.SetValue
void GlobalNamespace::NamedIntListController::SetValue(int value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("NamedIntListController").WithContext("SetValue");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "SetValue", {}, ::il2cpp_utils::ExtractTypes(value)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, value);
}
// Autogenerated method: NamedIntListController.GetInitValues
bool GlobalNamespace::NamedIntListController::GetInitValues(int& idx, int& numberOfElements) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("NamedIntListController").WithContext("GetInitValues");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<bool>(), "GetInitValues", {}, ::il2cpp_utils::ExtractTypes(idx, numberOfElements)));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method, idx, numberOfElements);
}
// Autogenerated method: NamedIntListController.ApplyValue
void GlobalNamespace::NamedIntListController::ApplyValue(int idx) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("NamedIntListController").WithContext("ApplyValue");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "ApplyValue", {}, ::il2cpp_utils::ExtractTypes(idx)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, idx);
}
// Autogenerated method: NamedIntListController.TextForValue
::Il2CppString* GlobalNamespace::NamedIntListController::TextForValue(int idx) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("NamedIntListController").WithContext("TextForValue");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<::Il2CppString*>(), "TextForValue", {}, ::il2cpp_utils::ExtractTypes(idx)));
  return ::il2cpp_utils::RunMethodThrow<::Il2CppString*, false>(this, ___internal__method, idx);
}
// Autogenerated method: NamedIntListController..ctor
GlobalNamespace::NamedIntListController* GlobalNamespace::NamedIntListController::New_ctor() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("NamedIntListController").WithContext(".ctor");
  return THROW_UNLESS(::il2cpp_utils::New<NamedIntListController*>());
}