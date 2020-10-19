// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: TMPro.TextMeshProUGUI
#include "TMPro/TextMeshProUGUI.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: CurvedCanvasSettingsHelper
  class CurvedCanvasSettingsHelper;
}
// Completed forward declares
// Type namespace: HMUI
namespace HMUI {
  // Autogenerated type: HMUI.CurvedTextMeshPro
  class CurvedTextMeshPro : public TMPro::TextMeshProUGUI {
    public:
    // private readonly HMUI.CurvedCanvasSettingsHelper _curvedCanvasSettingsHelper
    // Offset: 0xBE0
    HMUI::CurvedCanvasSettingsHelper* curvedCanvasSettingsHelper;
    // protected override System.Void OnEnable()
    // Offset: 0x2183540
    // Implemented from: TMPro.TextMeshProUGUI
    // Base method: System.Void TextMeshProUGUI::OnEnable()
    void OnEnable();
    // protected override System.Void GenerateTextMesh()
    // Offset: 0x2183594
    // Implemented from: TMPro.TextMeshProUGUI
    // Base method: System.Void TextMeshProUGUI::GenerateTextMesh()
    void GenerateTextMesh();
    // public System.Void .ctor()
    // Offset: 0x218389C
    // Implemented from: TMPro.TextMeshProUGUI
    // Base method: System.Void TextMeshProUGUI::.ctor()
    // Base method: System.Void TMP_Text::.ctor()
    // Base method: System.Void MaskableGraphic::.ctor()
    // Base method: System.Void Graphic::.ctor()
    // Base method: System.Void UIBehaviour::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static CurvedTextMeshPro* New_ctor();
  }; // HMUI.CurvedTextMeshPro
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(HMUI::CurvedTextMeshPro*, "HMUI", "CurvedTextMeshPro");
#pragma pack(pop)
