// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: EffectPoolsManualInstaller
#include "GlobalNamespace/EffectPoolsManualInstaller.hpp"
// Including type: FlyingTextEffect
#include "GlobalNamespace/FlyingTextEffect.hpp"
// Including type: FlyingScoreEffect
#include "GlobalNamespace/FlyingScoreEffect.hpp"
// Including type: BeatEffect
#include "GlobalNamespace/BeatEffect.hpp"
// Including type: NoteCutSoundEffect
#include "GlobalNamespace/NoteCutSoundEffect.hpp"
// Including type: BombCutSoundEffect
#include "GlobalNamespace/BombCutSoundEffect.hpp"
// Including type: FlyingSpriteEffect
#include "GlobalNamespace/FlyingSpriteEffect.hpp"
// Including type: BoolSO
#include "GlobalNamespace/BoolSO.hpp"
// Including type: NoteDebris
#include "GlobalNamespace/NoteDebris.hpp"
// Including type: Zenject.DiContainer
#include "Zenject/DiContainer.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: EffectPoolsManualInstaller.ManualInstallBindings
void GlobalNamespace::EffectPoolsManualInstaller::ManualInstallBindings(Zenject::DiContainer* container, bool shortBeatEffect) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("EffectPoolsManualInstaller").WithContext("ManualInstallBindings");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "ManualInstallBindings", {}, ::il2cpp_utils::ExtractTypes(container, shortBeatEffect)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, container, shortBeatEffect);
}
// Autogenerated method: EffectPoolsManualInstaller..ctor
GlobalNamespace::EffectPoolsManualInstaller* GlobalNamespace::EffectPoolsManualInstaller::New_ctor() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("EffectPoolsManualInstaller").WithContext(".ctor");
  return THROW_UNLESS(::il2cpp_utils::New<EffectPoolsManualInstaller*>());
}