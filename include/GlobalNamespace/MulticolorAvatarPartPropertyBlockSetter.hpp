// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include <initializer_list>
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.Vector4
#include "UnityEngine/Vector4.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Renderer
  class Renderer;
  // Forward declaring type: MaterialPropertyBlock
  class MaterialPropertyBlock;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: MulticolorAvatarPartPropertyBlockSetter
  class MulticolorAvatarPartPropertyBlockSetter;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::MulticolorAvatarPartPropertyBlockSetter);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MulticolorAvatarPartPropertyBlockSetter*, "", "MulticolorAvatarPartPropertyBlockSetter");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: MulticolorAvatarPartPropertyBlockSetter
  // [TokenAttribute] Offset: FFFFFFFF
  class MulticolorAvatarPartPropertyBlockSetter : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::GlobalNamespace::MulticolorAvatarPartPropertyBlockSetter::ColorData
    class ColorData;
    // Nested type: ::GlobalNamespace::MulticolorAvatarPartPropertyBlockSetter::$$c
    class $$c;
    public:
    // private MulticolorAvatarPartPropertyBlockSetter/ColorData[] _colorDataList
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<::GlobalNamespace::MulticolorAvatarPartPropertyBlockSetter::ColorData*> colorDataList;
    // Field size check
    static_assert(sizeof(::ArrayW<::GlobalNamespace::MulticolorAvatarPartPropertyBlockSetter::ColorData*>) == 0x8);
    // [SpaceAttribute] Offset: 0x111972C
    // private UnityEngine.Renderer _renderer
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::Renderer* renderer;
    // Field size check
    static_assert(sizeof(::UnityEngine::Renderer*) == 0x8);
    // [SpaceAttribute] Offset: 0x1119764
    // private System.Boolean _editInPlayMode
    // Size: 0x1
    // Offset: 0x28
    bool editInPlayMode;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: editInPlayMode and: colors
    char __padding2[0x7] = {};
    // private readonly UnityEngine.Vector4[] _colors
    // Size: 0x8
    // Offset: 0x30
    ::ArrayW<::UnityEngine::Vector4> colors;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Vector4>) == 0x8);
    // private readonly UnityEngine.Vector4[] _rimLightColors
    // Size: 0x8
    // Offset: 0x38
    ::ArrayW<::UnityEngine::Vector4> rimLightColors;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Vector4>) == 0x8);
    // private UnityEngine.Color[] _boostColors
    // Size: 0x8
    // Offset: 0x40
    ::ArrayW<::UnityEngine::Color> boostColors;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Color>) == 0x8);
    // private System.Boolean _highlighted
    // Size: 0x1
    // Offset: 0x48
    bool highlighted;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: highlighted and: uvSegment
    char __padding6[0x3] = {};
    // private System.Int32 _uvSegment
    // Size: 0x4
    // Offset: 0x4C
    int uvSegment;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0x111979C
    // Get static field: static private UnityEngine.MaterialPropertyBlock _materialPropertyBlock
    static ::UnityEngine::MaterialPropertyBlock* _get__materialPropertyBlock();
    // Set static field: static private UnityEngine.MaterialPropertyBlock _materialPropertyBlock
    static void _set__materialPropertyBlock(::UnityEngine::MaterialPropertyBlock* value);
    // Get instance field reference: private MulticolorAvatarPartPropertyBlockSetter/ColorData[] _colorDataList
    [[deprecated("Use field access instead!")]] ::ArrayW<::GlobalNamespace::MulticolorAvatarPartPropertyBlockSetter::ColorData*>& dyn__colorDataList();
    // Get instance field reference: private UnityEngine.Renderer _renderer
    [[deprecated("Use field access instead!")]] ::UnityEngine::Renderer*& dyn__renderer();
    // Get instance field reference: private System.Boolean _editInPlayMode
    [[deprecated("Use field access instead!")]] bool& dyn__editInPlayMode();
    // Get instance field reference: private readonly UnityEngine.Vector4[] _colors
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::Vector4>& dyn__colors();
    // Get instance field reference: private readonly UnityEngine.Vector4[] _rimLightColors
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::Vector4>& dyn__rimLightColors();
    // Get instance field reference: private UnityEngine.Color[] _boostColors
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::Color>& dyn__boostColors();
    // Get instance field reference: private System.Boolean _highlighted
    [[deprecated("Use field access instead!")]] bool& dyn__highlighted();
    // Get instance field reference: private System.Int32 _uvSegment
    [[deprecated("Use field access instead!")]] int& dyn__uvSegment();
    // public System.Void .ctor()
    // Offset: 0x14A0408
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MulticolorAvatarPartPropertyBlockSetter* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MulticolorAvatarPartPropertyBlockSetter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MulticolorAvatarPartPropertyBlockSetter*, creationType>()));
    }
    // protected System.Void OnValidate()
    // Offset: 0x149FEF4
    void OnValidate();
    // public System.Void SetColors(params UnityEngine.Color[] colors)
    // Offset: 0x14A006C
    void SetColors(::ArrayW<::UnityEngine::Color> colors);
    // public System.Void SetHighlight(System.Boolean highlighted, System.Int32 uvSegment)
    // Offset: 0x14A03F8
    void SetHighlight(bool highlighted, int uvSegment);
    // private System.Void UpdateRenderer()
    // Offset: 0x14A028C
    void UpdateRenderer();
  }; // MulticolorAvatarPartPropertyBlockSetter
  #pragma pack(pop)
  static check_size<sizeof(MulticolorAvatarPartPropertyBlockSetter), 76 + sizeof(int)> __GlobalNamespace_MulticolorAvatarPartPropertyBlockSetterSizeCheck;
  static_assert(sizeof(MulticolorAvatarPartPropertyBlockSetter) == 0x50);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MulticolorAvatarPartPropertyBlockSetter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::MulticolorAvatarPartPropertyBlockSetter::OnValidate
// Il2CppName: OnValidate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MulticolorAvatarPartPropertyBlockSetter::*)()>(&GlobalNamespace::MulticolorAvatarPartPropertyBlockSetter::OnValidate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MulticolorAvatarPartPropertyBlockSetter*), "OnValidate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MulticolorAvatarPartPropertyBlockSetter::SetColors
// Il2CppName: SetColors
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MulticolorAvatarPartPropertyBlockSetter::*)(::ArrayW<::UnityEngine::Color>)>(&GlobalNamespace::MulticolorAvatarPartPropertyBlockSetter::SetColors)> {
  static const MethodInfo* get() {
    static auto* colors = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Color"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MulticolorAvatarPartPropertyBlockSetter*), "SetColors", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{colors});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MulticolorAvatarPartPropertyBlockSetter::SetHighlight
// Il2CppName: SetHighlight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MulticolorAvatarPartPropertyBlockSetter::*)(bool, int)>(&GlobalNamespace::MulticolorAvatarPartPropertyBlockSetter::SetHighlight)> {
  static const MethodInfo* get() {
    static auto* highlighted = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* uvSegment = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MulticolorAvatarPartPropertyBlockSetter*), "SetHighlight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{highlighted, uvSegment});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MulticolorAvatarPartPropertyBlockSetter::UpdateRenderer
// Il2CppName: UpdateRenderer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MulticolorAvatarPartPropertyBlockSetter::*)()>(&GlobalNamespace::MulticolorAvatarPartPropertyBlockSetter::UpdateRenderer)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MulticolorAvatarPartPropertyBlockSetter*), "UpdateRenderer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
