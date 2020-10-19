// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MenuLightsPresetSO
  class MenuLightsPresetSO;
  // Forward declaring type: LightWithIdManager
  class LightWithIdManager;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Color
  struct Color;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: MenuLightsManager
  class MenuLightsManager : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::MenuLightsManager::$Start$d__4
    class $Start$d__4;
    // private MenuLightsPresetSO _defaultPreset
    // Offset: 0x18
    GlobalNamespace::MenuLightsPresetSO* defaultPreset;
    // private System.Single _smooth
    // Offset: 0x20
    float smooth;
    // private LightWithIdManager _lightManager
    // Offset: 0x28
    GlobalNamespace::LightWithIdManager* lightManager;
    // private MenuLightsPresetSO _preset
    // Offset: 0x30
    GlobalNamespace::MenuLightsPresetSO* preset;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Collections.IEnumerator Start()
    // Offset: 0x1FC29B0
    System::Collections::IEnumerator* Start();
    // protected System.Void Update()
    // Offset: 0x1FC2A58
    void Update();
    // private System.Boolean IsColorVeryCloseToColor(UnityEngine.Color color0, UnityEngine.Color color1)
    // Offset: 0x1FC2C0C
    bool IsColorVeryCloseToColor(UnityEngine::Color color0, UnityEngine::Color color1);
    // private System.Void SetColor(System.Int32 lightId, UnityEngine.Color color)
    // Offset: 0x1FC2D34
    void SetColor(int lightId, UnityEngine::Color color);
    // private UnityEngine.Color CurrentColorForID(System.Int32 lightId)
    // Offset: 0x1FC2D50
    UnityEngine::Color CurrentColorForID(int lightId);
    // private System.Boolean SetColorsFromPreset(MenuLightsPresetSO preset, System.Single interpolationFactor)
    // Offset: 0x1FC2AA8
    bool SetColorsFromPreset(GlobalNamespace::MenuLightsPresetSO* preset, float interpolationFactor);
    // private System.Void RefreshLightsDictForPreset(MenuLightsPresetSO preset)
    // Offset: 0x1FC2DA8
    void RefreshLightsDictForPreset(GlobalNamespace::MenuLightsPresetSO* preset);
    // public System.Void SetColorPreset(MenuLightsPresetSO preset, System.Boolean animated)
    // Offset: 0x1FC2E80
    void SetColorPreset(GlobalNamespace::MenuLightsPresetSO* preset, bool animated);
    // public System.Void RefreshColors()
    // Offset: 0x1FC2F6C
    void RefreshColors();
    // public System.Void .ctor()
    // Offset: 0x1FC3014
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static MenuLightsManager* New_ctor();
  }; // MenuLightsManager
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MenuLightsManager*, "", "MenuLightsManager");
#pragma pack(pop)
