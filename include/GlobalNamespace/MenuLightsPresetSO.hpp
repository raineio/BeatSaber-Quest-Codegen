// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: PersistentScriptableObject
#include "GlobalNamespace/PersistentScriptableObject.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: ColorSO
  class ColorSO;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: MenuLightsPresetSO
  class MenuLightsPresetSO : public GlobalNamespace::PersistentScriptableObject {
    public:
    // Nested type: GlobalNamespace::MenuLightsPresetSO::LightIdColorPair
    class LightIdColorPair;
    // private ColorSO _playersPlaceNeonsColor
    // Offset: 0x18
    GlobalNamespace::ColorSO* playersPlaceNeonsColor;
    // private System.Single _playersPlaceNeonsIntensity
    // Offset: 0x20
    float playersPlaceNeonsIntensity;
    // private MenuLightsPresetSO/LightIdColorPair[] _lightIdColorPairs
    // Offset: 0x28
    ::Array<GlobalNamespace::MenuLightsPresetSO::LightIdColorPair*>* lightIdColorPairs;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public ColorSO get_playersPlaceNeonsColor()
    // Offset: 0x1FC3180
    GlobalNamespace::ColorSO* get_playersPlaceNeonsColor();
    // public System.Single get_playersPlaceNeonsIntensity()
    // Offset: 0x1FC3188
    float get_playersPlaceNeonsIntensity();
    // public MenuLightsPresetSO/LightIdColorPair[] get_lightIdColorPairs()
    // Offset: 0x1FC3190
    ::Array<GlobalNamespace::MenuLightsPresetSO::LightIdColorPair*>* get_lightIdColorPairs();
    // public System.Void .ctor()
    // Offset: 0x1FC3198
    // Implemented from: PersistentScriptableObject
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static MenuLightsPresetSO* New_ctor();
  }; // MenuLightsPresetSO
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MenuLightsPresetSO*, "", "MenuLightsPresetSO");
#pragma pack(pop)
