// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: AvatarSpritePartSO
#include "GlobalNamespace/AvatarSpritePartSO.hpp"
// Including type: UnityEngine.Sprite
#include "UnityEngine/Sprite.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: AvatarSpritePartSO.get_sprite
UnityEngine::Sprite* GlobalNamespace::AvatarSpritePartSO::get_sprite() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("AvatarSpritePartSO").WithContext("get_sprite");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<UnityEngine::Sprite*>(), "get_sprite", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<UnityEngine::Sprite*, false>(this, ___internal__method);
}
// Autogenerated method: AvatarSpritePartSO..ctor
GlobalNamespace::AvatarSpritePartSO* GlobalNamespace::AvatarSpritePartSO::New_ctor() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("AvatarSpritePartSO").WithContext(".ctor");
  return THROW_UNLESS(::il2cpp_utils::New<AvatarSpritePartSO*>());
}