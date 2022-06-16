// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.ScriptableObject
#include "UnityEngine/ScriptableObject.hpp"
// Including type: TMPro.ColorMode
#include "TMPro/ColorMode.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: TMPro
namespace TMPro {
  // Forward declaring type: TMP_ColorGradient
  class TMP_ColorGradient;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::TMPro::TMP_ColorGradient);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TMP_ColorGradient*, "TMPro", "TMP_ColorGradient");
// Type namespace: TMPro
namespace TMPro {
  // Size: 0x5C
  #pragma pack(push, 1)
  // Autogenerated type: TMPro.TMP_ColorGradient
  // [TokenAttribute] Offset: FFFFFFFF
  class TMP_ColorGradient : public ::UnityEngine::ScriptableObject {
    public:
    public:
    // public TMPro.ColorMode colorMode
    // Size: 0x4
    // Offset: 0x18
    ::TMPro::ColorMode colorMode;
    // Field size check
    static_assert(sizeof(::TMPro::ColorMode) == 0x4);
    // public UnityEngine.Color topLeft
    // Size: 0x10
    // Offset: 0x1C
    ::UnityEngine::Color topLeft;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // public UnityEngine.Color topRight
    // Size: 0x10
    // Offset: 0x2C
    ::UnityEngine::Color topRight;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // public UnityEngine.Color bottomLeft
    // Size: 0x10
    // Offset: 0x3C
    ::UnityEngine::Color bottomLeft;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // public UnityEngine.Color bottomRight
    // Size: 0x10
    // Offset: 0x4C
    ::UnityEngine::Color bottomRight;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // static field const value: static private TMPro.ColorMode k_DefaultColorMode
    static constexpr const int k_DefaultColorMode = 3;
    // Get static field: static private TMPro.ColorMode k_DefaultColorMode
    static ::TMPro::ColorMode _get_k_DefaultColorMode();
    // Set static field: static private TMPro.ColorMode k_DefaultColorMode
    static void _set_k_DefaultColorMode(::TMPro::ColorMode value);
    // Get static field: static private readonly UnityEngine.Color k_DefaultColor
    static ::UnityEngine::Color _get_k_DefaultColor();
    // Set static field: static private readonly UnityEngine.Color k_DefaultColor
    static void _set_k_DefaultColor(::UnityEngine::Color value);
    // Get instance field reference: public TMPro.ColorMode colorMode
    [[deprecated("Use field access instead!")]] ::TMPro::ColorMode& dyn_colorMode();
    // Get instance field reference: public UnityEngine.Color topLeft
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color& dyn_topLeft();
    // Get instance field reference: public UnityEngine.Color topRight
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color& dyn_topRight();
    // Get instance field reference: public UnityEngine.Color bottomLeft
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color& dyn_bottomLeft();
    // Get instance field reference: public UnityEngine.Color bottomRight
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color& dyn_bottomRight();
    // public System.Void .ctor()
    // Offset: 0x142E408
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TMP_ColorGradient* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::TMPro::TMP_ColorGradient::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TMP_ColorGradient*, creationType>()));
    }
    // public System.Void .ctor(UnityEngine.Color color)
    // Offset: 0x142E4B4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TMP_ColorGradient* New_ctor(::UnityEngine::Color color) {
      static auto ___internal__logger = ::Logger::get().WithContext("::TMPro::TMP_ColorGradient::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TMP_ColorGradient*, creationType>(color)));
    }
    // public System.Void .ctor(UnityEngine.Color color0, UnityEngine.Color color1, UnityEngine.Color color2, UnityEngine.Color color3)
    // Offset: 0x142E524
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TMP_ColorGradient* New_ctor(::UnityEngine::Color color0, ::UnityEngine::Color color1, ::UnityEngine::Color color2, ::UnityEngine::Color color3) {
      static auto ___internal__logger = ::Logger::get().WithContext("::TMPro::TMP_ColorGradient::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TMP_ColorGradient*, creationType>(color0, color1, color2, color3)));
    }
    // static private System.Void .cctor()
    // Offset: 0x142E5CC
    static void _cctor();
  }; // TMPro.TMP_ColorGradient
  #pragma pack(pop)
  static check_size<sizeof(TMP_ColorGradient), 76 + sizeof(::UnityEngine::Color)> __TMPro_TMP_ColorGradientSizeCheck;
  static_assert(sizeof(TMP_ColorGradient) == 0x5C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: TMPro::TMP_ColorGradient::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: TMPro::TMP_ColorGradient::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: TMPro::TMP_ColorGradient::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: TMPro::TMP_ColorGradient::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&TMPro::TMP_ColorGradient::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_ColorGradient*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
