// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: BloomPrePassBackgroundColorsGradientFromColorSchemeColors
#include "GlobalNamespace/BloomPrePassBackgroundColorsGradientFromColorSchemeColors.hpp"
// Including type: BloomPrePassBackgroundColorsGradientFromColorSchemeColors/EnvironmentColor
#include "GlobalNamespace/BloomPrePassBackgroundColorsGradientFromColorSchemeColors_EnvironmentColor.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::BloomPrePassBackgroundColorsGradientFromColorSchemeColors::Element);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BloomPrePassBackgroundColorsGradientFromColorSchemeColors::Element*, "", "BloomPrePassBackgroundColorsGradientFromColorSchemeColors/Element");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x2C
  #pragma pack(push, 1)
  // Autogenerated type: BloomPrePassBackgroundColorsGradientFromColorSchemeColors/Element
  // [TokenAttribute] Offset: FFFFFFFF
  class BloomPrePassBackgroundColorsGradientFromColorSchemeColors::Element : public ::Il2CppObject {
    public:
    public:
    // public System.Boolean loadFromColorScheme
    // Size: 0x1
    // Offset: 0x10
    bool loadFromColorScheme;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: loadFromColorScheme and: environmentColor
    char __padding0[0x3] = {};
    // [DrawIfAttribute] Offset: 0x10E6644
    // public BloomPrePassBackgroundColorsGradientFromColorSchemeColors/EnvironmentColor environmentColor
    // Size: 0x4
    // Offset: 0x14
    ::GlobalNamespace::BloomPrePassBackgroundColorsGradientFromColorSchemeColors::EnvironmentColor environmentColor;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BloomPrePassBackgroundColorsGradientFromColorSchemeColors::EnvironmentColor) == 0x4);
    // [DrawIfAttribute] Offset: 0x10E66DC
    // public System.Single intensity
    // Size: 0x4
    // Offset: 0x18
    float intensity;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [DrawIfAttribute] Offset: 0x10E6774
    // public UnityEngine.Color color
    // Size: 0x10
    // Offset: 0x1C
    ::UnityEngine::Color color;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    public:
    // Get instance field reference: public System.Boolean loadFromColorScheme
    [[deprecated("Use field access instead!")]] bool& dyn_loadFromColorScheme();
    // Get instance field reference: public BloomPrePassBackgroundColorsGradientFromColorSchemeColors/EnvironmentColor environmentColor
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::BloomPrePassBackgroundColorsGradientFromColorSchemeColors::EnvironmentColor& dyn_environmentColor();
    // Get instance field reference: public System.Single intensity
    [[deprecated("Use field access instead!")]] float& dyn_intensity();
    // Get instance field reference: public UnityEngine.Color color
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color& dyn_color();
    // public System.Void .ctor()
    // Offset: 0x1334800
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BloomPrePassBackgroundColorsGradientFromColorSchemeColors::Element* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::BloomPrePassBackgroundColorsGradientFromColorSchemeColors::Element::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BloomPrePassBackgroundColorsGradientFromColorSchemeColors::Element*, creationType>()));
    }
  }; // BloomPrePassBackgroundColorsGradientFromColorSchemeColors/Element
  #pragma pack(pop)
  static check_size<sizeof(BloomPrePassBackgroundColorsGradientFromColorSchemeColors::Element), 28 + sizeof(::UnityEngine::Color)> __GlobalNamespace_BloomPrePassBackgroundColorsGradientFromColorSchemeColors_ElementSizeCheck;
  static_assert(sizeof(BloomPrePassBackgroundColorsGradientFromColorSchemeColors::Element) == 0x2C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BloomPrePassBackgroundColorsGradientFromColorSchemeColors::Element::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
