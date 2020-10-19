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
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Image
  class Image;
}
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TextMeshProUGUI
  class TextMeshProUGUI;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Color
  struct Color;
  // Forward declaring type: Sprite
  class Sprite;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: ResultObjectiveListItem
  class ResultObjectiveListItem : public UnityEngine::MonoBehaviour {
    public:
    // private UnityEngine.UI.Image _icon
    // Offset: 0x18
    UnityEngine::UI::Image* icon;
    // private UnityEngine.UI.Image _iconGlow
    // Offset: 0x20
    UnityEngine::UI::Image* iconGlow;
    // private TMPro.TextMeshProUGUI _titleText
    // Offset: 0x28
    TMPro::TextMeshProUGUI* titleText;
    // private TMPro.TextMeshProUGUI _conditionText
    // Offset: 0x30
    TMPro::TextMeshProUGUI* conditionText;
    // private TMPro.TextMeshProUGUI _valueText
    // Offset: 0x38
    TMPro::TextMeshProUGUI* valueText;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Void set_iconColor(UnityEngine.Color value)
    // Offset: 0x206F354
    void set_iconColor(UnityEngine::Color value);
    // public System.Void set_icon(UnityEngine.Sprite value)
    // Offset: 0x206F378
    void set_icon(UnityEngine::Sprite* value);
    // public System.Void set_iconGlow(UnityEngine.Sprite value)
    // Offset: 0x206F394
    void set_iconGlow(UnityEngine::Sprite* value);
    // public System.Void set_title(System.String value)
    // Offset: 0x206F3B0
    void set_title(::Il2CppString* value);
    // public System.Void set_conditionText(System.String value)
    // Offset: 0x206F3CC
    void set_conditionText(::Il2CppString* value);
    // public System.Void set_hideConditionText(System.Boolean value)
    // Offset: 0x206F3E8
    void set_hideConditionText(bool value);
    // public System.Void set_valueText(System.String value)
    // Offset: 0x206F428
    void set_valueText(::Il2CppString* value);
    // public System.Void set_hideValueText(System.Boolean value)
    // Offset: 0x206F444
    void set_hideValueText(bool value);
    // public System.Void .ctor()
    // Offset: 0x206F484
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static ResultObjectiveListItem* New_ctor();
  }; // ResultObjectiveListItem
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ResultObjectiveListItem*, "", "ResultObjectiveListItem");
#pragma pack(pop)
