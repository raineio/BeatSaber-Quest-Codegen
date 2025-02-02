// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Image
  class Image;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Color
  struct Color;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: ColorSchemeView
  class ColorSchemeView;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::ColorSchemeView);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ColorSchemeView*, "", "ColorSchemeView");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: ColorSchemeView
  // [TokenAttribute] Offset: FFFFFFFF
  class ColorSchemeView : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private UnityEngine.UI.Image _saberAColorImage
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::UI::Image* saberAColorImage;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Image*) == 0x8);
    // private UnityEngine.UI.Image _saberBColorImage
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::UI::Image* saberBColorImage;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Image*) == 0x8);
    // private UnityEngine.UI.Image _environment0ColorImage
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::UI::Image* environment0ColorImage;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Image*) == 0x8);
    // private UnityEngine.UI.Image _environment1ColorImage
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::UI::Image* environment1ColorImage;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Image*) == 0x8);
    // private UnityEngine.UI.Image _environmentColor0BoostImage
    // Size: 0x8
    // Offset: 0x38
    ::UnityEngine::UI::Image* environmentColor0BoostImage;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Image*) == 0x8);
    // private UnityEngine.UI.Image _environmentColor1BoostImage
    // Size: 0x8
    // Offset: 0x40
    ::UnityEngine::UI::Image* environmentColor1BoostImage;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Image*) == 0x8);
    // private UnityEngine.UI.Image _obstacleColorImage
    // Size: 0x8
    // Offset: 0x48
    ::UnityEngine::UI::Image* obstacleColorImage;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Image*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private UnityEngine.UI.Image _saberAColorImage
    [[deprecated("Use field access instead!")]] ::UnityEngine::UI::Image*& dyn__saberAColorImage();
    // Get instance field reference: private UnityEngine.UI.Image _saberBColorImage
    [[deprecated("Use field access instead!")]] ::UnityEngine::UI::Image*& dyn__saberBColorImage();
    // Get instance field reference: private UnityEngine.UI.Image _environment0ColorImage
    [[deprecated("Use field access instead!")]] ::UnityEngine::UI::Image*& dyn__environment0ColorImage();
    // Get instance field reference: private UnityEngine.UI.Image _environment1ColorImage
    [[deprecated("Use field access instead!")]] ::UnityEngine::UI::Image*& dyn__environment1ColorImage();
    // Get instance field reference: private UnityEngine.UI.Image _environmentColor0BoostImage
    [[deprecated("Use field access instead!")]] ::UnityEngine::UI::Image*& dyn__environmentColor0BoostImage();
    // Get instance field reference: private UnityEngine.UI.Image _environmentColor1BoostImage
    [[deprecated("Use field access instead!")]] ::UnityEngine::UI::Image*& dyn__environmentColor1BoostImage();
    // Get instance field reference: private UnityEngine.UI.Image _obstacleColorImage
    [[deprecated("Use field access instead!")]] ::UnityEngine::UI::Image*& dyn__obstacleColorImage();
    // public System.Void .ctor()
    // Offset: 0x1439B40
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ColorSchemeView* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::ColorSchemeView::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ColorSchemeView*, creationType>()));
    }
    // public System.Void SetColors(UnityEngine.Color saberAColor, UnityEngine.Color saberBColor, UnityEngine.Color environment0Color, UnityEngine.Color environment1Color, UnityEngine.Color environmentColor0Boost, UnityEngine.Color environmentColor1Boost, UnityEngine.Color obstacleColor)
    // Offset: 0x14398F8
    void SetColors(::UnityEngine::Color saberAColor, ::UnityEngine::Color saberBColor, ::UnityEngine::Color environment0Color, ::UnityEngine::Color environment1Color, ::UnityEngine::Color environmentColor0Boost, ::UnityEngine::Color environmentColor1Boost, ::UnityEngine::Color obstacleColor);
  }; // ColorSchemeView
  #pragma pack(pop)
  static check_size<sizeof(ColorSchemeView), 72 + sizeof(::UnityEngine::UI::Image*)> __GlobalNamespace_ColorSchemeViewSizeCheck;
  static_assert(sizeof(ColorSchemeView) == 0x50);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ColorSchemeView::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::ColorSchemeView::SetColors
// Il2CppName: SetColors
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ColorSchemeView::*)(::UnityEngine::Color, ::UnityEngine::Color, ::UnityEngine::Color, ::UnityEngine::Color, ::UnityEngine::Color, ::UnityEngine::Color, ::UnityEngine::Color)>(&GlobalNamespace::ColorSchemeView::SetColors)> {
  static const MethodInfo* get() {
    static auto* saberAColor = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    static auto* saberBColor = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    static auto* environment0Color = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    static auto* environment1Color = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    static auto* environmentColor0Boost = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    static auto* environmentColor1Boost = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    static auto* obstacleColor = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ColorSchemeView*), "SetColors", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{saberAColor, saberBColor, environment0Color, environment1Color, environmentColor0Boost, environmentColor1Boost, obstacleColor});
  }
};
