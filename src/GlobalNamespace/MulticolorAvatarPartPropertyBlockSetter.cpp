// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MulticolorAvatarPartPropertyBlockSetter
#include "GlobalNamespace/MulticolorAvatarPartPropertyBlockSetter.hpp"
// Including type: MulticolorAvatarPartPropertyBlockSetter/ColorData
#include "GlobalNamespace/MulticolorAvatarPartPropertyBlockSetter_ColorData.hpp"
// Including type: MulticolorAvatarPartPropertyBlockSetter/<>c
#include "GlobalNamespace/MulticolorAvatarPartPropertyBlockSetter_--c.hpp"
// Including type: UnityEngine.Renderer
#include "UnityEngine/Renderer.hpp"
// Including type: UnityEngine.Vector4
#include "UnityEngine/Vector4.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
// Including type: UnityEngine.MaterialPropertyBlock
#include "UnityEngine/MaterialPropertyBlock.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static private UnityEngine.MaterialPropertyBlock _materialPropertyBlock
UnityEngine::MaterialPropertyBlock* GlobalNamespace::MulticolorAvatarPartPropertyBlockSetter::_get__materialPropertyBlock() {
  static auto ___internal__logger = Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("MulticolorAvatarPartPropertyBlockSetter").WithContext("_get__materialPropertyBlock");
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<UnityEngine::MaterialPropertyBlock*>("", "MulticolorAvatarPartPropertyBlockSetter", "_materialPropertyBlock"));
}
// Autogenerated static field setter
// Set static field: static private UnityEngine.MaterialPropertyBlock _materialPropertyBlock
void GlobalNamespace::MulticolorAvatarPartPropertyBlockSetter::_set__materialPropertyBlock(UnityEngine::MaterialPropertyBlock* value) {
  static auto ___internal__logger = Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("MulticolorAvatarPartPropertyBlockSetter").WithContext("_set__materialPropertyBlock");
  THROW_UNLESS(il2cpp_utils::SetFieldValue("", "MulticolorAvatarPartPropertyBlockSetter", "_materialPropertyBlock", value));
}
// Autogenerated method: MulticolorAvatarPartPropertyBlockSetter.OnValidate
void GlobalNamespace::MulticolorAvatarPartPropertyBlockSetter::OnValidate() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("MulticolorAvatarPartPropertyBlockSetter").WithContext("OnValidate");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "OnValidate", {}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: MulticolorAvatarPartPropertyBlockSetter.SetColors
void GlobalNamespace::MulticolorAvatarPartPropertyBlockSetter::SetColors(::Array<UnityEngine::Color>* colors) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("MulticolorAvatarPartPropertyBlockSetter").WithContext("SetColors");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "SetColors", {}, ::il2cpp_utils::ExtractTypes(colors)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, colors);
}
// Creating initializer_list -> params proxy for: System.Void SetColors(params UnityEngine.Color[] colors)
void GlobalNamespace::MulticolorAvatarPartPropertyBlockSetter::SetColors(std::initializer_list<UnityEngine::Color> colors) {
  GlobalNamespace::MulticolorAvatarPartPropertyBlockSetter::SetColors(::Array<UnityEngine::Color>::New(colors));
}
// Autogenerated method: MulticolorAvatarPartPropertyBlockSetter.SetHighlight
void GlobalNamespace::MulticolorAvatarPartPropertyBlockSetter::SetHighlight(bool highlighted, int uvSegment) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("MulticolorAvatarPartPropertyBlockSetter").WithContext("SetHighlight");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "SetHighlight", {}, ::il2cpp_utils::ExtractTypes(highlighted, uvSegment)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, highlighted, uvSegment);
}
// Autogenerated method: MulticolorAvatarPartPropertyBlockSetter.UpdateRenderer
void GlobalNamespace::MulticolorAvatarPartPropertyBlockSetter::UpdateRenderer() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("MulticolorAvatarPartPropertyBlockSetter").WithContext("UpdateRenderer");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "UpdateRenderer", {}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: MulticolorAvatarPartPropertyBlockSetter..ctor
GlobalNamespace::MulticolorAvatarPartPropertyBlockSetter* GlobalNamespace::MulticolorAvatarPartPropertyBlockSetter::New_ctor() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("MulticolorAvatarPartPropertyBlockSetter").WithContext(".ctor");
  return THROW_UNLESS(::il2cpp_utils::New<MulticolorAvatarPartPropertyBlockSetter*>());
}