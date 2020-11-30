// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: NoteJumpStartScaleUp
#include "GlobalNamespace/NoteJumpStartScaleUp.hpp"
// Including type: UnityEngine.Transform
#include "UnityEngine/Transform.hpp"
// Including type: NoteController
#include "GlobalNamespace/NoteController.hpp"
// Including type: NoteJump
#include "GlobalNamespace/NoteJump.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: NoteJumpStartScaleUp.Start
void GlobalNamespace::NoteJumpStartScaleUp::Start() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("NoteJumpStartScaleUp").WithContext("Start");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "Start", {}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: NoteJumpStartScaleUp.OnDestroy
void GlobalNamespace::NoteJumpStartScaleUp::OnDestroy() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("NoteJumpStartScaleUp").WithContext("OnDestroy");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "OnDestroy", {}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: NoteJumpStartScaleUp.UpdateScale
void GlobalNamespace::NoteJumpStartScaleUp::UpdateScale(float progress) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("NoteJumpStartScaleUp").WithContext("UpdateScale");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "UpdateScale", {}, ::il2cpp_utils::ExtractTypes(progress)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, progress);
}
// Autogenerated method: NoteJumpStartScaleUp.HandleNoteJumpDidUpdateProgress
void GlobalNamespace::NoteJumpStartScaleUp::HandleNoteJumpDidUpdateProgress(float progress) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("NoteJumpStartScaleUp").WithContext("HandleNoteJumpDidUpdateProgress");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "HandleNoteJumpDidUpdateProgress", {}, ::il2cpp_utils::ExtractTypes(progress)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, progress);
}
// Autogenerated method: NoteJumpStartScaleUp.HandleNoteControllerDidInit
void GlobalNamespace::NoteJumpStartScaleUp::HandleNoteControllerDidInit(GlobalNamespace::NoteController* noteController) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("NoteJumpStartScaleUp").WithContext("HandleNoteControllerDidInit");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "HandleNoteControllerDidInit", {}, ::il2cpp_utils::ExtractTypes(noteController)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, noteController);
}
// Autogenerated method: NoteJumpStartScaleUp..ctor
GlobalNamespace::NoteJumpStartScaleUp* GlobalNamespace::NoteJumpStartScaleUp::New_ctor() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("NoteJumpStartScaleUp").WithContext(".ctor");
  return THROW_UNLESS(::il2cpp_utils::New<NoteJumpStartScaleUp*>());
}