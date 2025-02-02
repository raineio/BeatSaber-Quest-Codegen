// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: ColorScheme
  class ColorScheme;
  // Forward declaring type: EnvironmentColorType
  struct EnvironmentColorType;
  // Forward declaring type: ColorType
  struct ColorType;
  // Forward declaring type: SaberType
  struct SaberType;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Color
  struct Color;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: ColorManager
  class ColorManager;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::ColorManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ColorManager*, "", "ColorManager");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: ColorManager
  // [TokenAttribute] Offset: FFFFFFFF
  class ColorManager : public ::Il2CppObject {
    public:
    public:
    // [InjectAttribute] Offset: 0x112DD6C
    // private readonly ColorScheme _colorScheme
    // Size: 0x8
    // Offset: 0x10
    ::GlobalNamespace::ColorScheme* colorScheme;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::ColorScheme*) == 0x8);
    public:
    // Creating conversion operator: operator ::GlobalNamespace::ColorScheme*
    constexpr operator ::GlobalNamespace::ColorScheme*() const noexcept {
      return colorScheme;
    }
    // Get instance field reference: private readonly ColorScheme _colorScheme
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::ColorScheme*& dyn__colorScheme();
    // public UnityEngine.Color get_obstaclesColor()
    // Offset: 0x140A880
    ::UnityEngine::Color get_obstaclesColor();
    // public System.Void .ctor()
    // Offset: 0x140AB00
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ColorManager* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::ColorManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ColorManager*, creationType>()));
    }
    // public UnityEngine.Color ColorForType(EnvironmentColorType type, System.Boolean boost)
    // Offset: 0x140A8A0
    ::UnityEngine::Color ColorForType(::GlobalNamespace::EnvironmentColorType type, bool boost);
    // public UnityEngine.Color ColorForType(ColorType type)
    // Offset: 0x140A960
    ::UnityEngine::Color ColorForType(::GlobalNamespace::ColorType type);
    // public UnityEngine.Color ColorForSaberType(SaberType type)
    // Offset: 0x140A9B0
    ::UnityEngine::Color ColorForSaberType(::GlobalNamespace::SaberType type);
    // public UnityEngine.Color EffectsColorForSaberType(SaberType type)
    // Offset: 0x140AA04
    ::UnityEngine::Color EffectsColorForSaberType(::GlobalNamespace::SaberType type);
    // public UnityEngine.Color GetObstacleEffectColor()
    // Offset: 0x140AA9C
    ::UnityEngine::Color GetObstacleEffectColor();
  }; // ColorManager
  #pragma pack(pop)
  static check_size<sizeof(ColorManager), 16 + sizeof(::GlobalNamespace::ColorScheme*)> __GlobalNamespace_ColorManagerSizeCheck;
  static_assert(sizeof(ColorManager) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ColorManager::get_obstaclesColor
// Il2CppName: get_obstaclesColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (GlobalNamespace::ColorManager::*)()>(&GlobalNamespace::ColorManager::get_obstaclesColor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ColorManager*), "get_obstaclesColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ColorManager::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::ColorManager::ColorForType
// Il2CppName: ColorForType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (GlobalNamespace::ColorManager::*)(::GlobalNamespace::EnvironmentColorType, bool)>(&GlobalNamespace::ColorManager::ColorForType)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("", "EnvironmentColorType")->byval_arg;
    static auto* boost = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ColorManager*), "ColorForType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type, boost});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ColorManager::ColorForType
// Il2CppName: ColorForType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (GlobalNamespace::ColorManager::*)(::GlobalNamespace::ColorType)>(&GlobalNamespace::ColorManager::ColorForType)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("", "ColorType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ColorManager*), "ColorForType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ColorManager::ColorForSaberType
// Il2CppName: ColorForSaberType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (GlobalNamespace::ColorManager::*)(::GlobalNamespace::SaberType)>(&GlobalNamespace::ColorManager::ColorForSaberType)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("", "SaberType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ColorManager*), "ColorForSaberType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ColorManager::EffectsColorForSaberType
// Il2CppName: EffectsColorForSaberType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (GlobalNamespace::ColorManager::*)(::GlobalNamespace::SaberType)>(&GlobalNamespace::ColorManager::EffectsColorForSaberType)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("", "SaberType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ColorManager*), "EffectsColorForSaberType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ColorManager::GetObstacleEffectColor
// Il2CppName: GetObstacleEffectColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (GlobalNamespace::ColorManager::*)()>(&GlobalNamespace::ColorManager::GetObstacleEffectColor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ColorManager*), "GetObstacleEffectColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
