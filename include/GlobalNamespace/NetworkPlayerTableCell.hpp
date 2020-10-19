// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: HMUI.TableCell
#include "HMUI/TableCell.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TextMeshProUGUI
  class TextMeshProUGUI;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Image
  class Image;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: NetworkPlayerTableCell
  class NetworkPlayerTableCell : public HMUI::TableCell {
    public:
    // private TMPro.TextMeshProUGUI _playerNameText
    // Offset: 0x50
    TMPro::TextMeshProUGUI* playerNameText;
    // private UnityEngine.GameObject _separator
    // Offset: 0x58
    UnityEngine::GameObject* separator;
    // private UnityEngine.UI.Image _privateIcon
    // Offset: 0x60
    UnityEngine::UI::Image* privateIcon;
    // private UnityEngine.UI.Image _spectateIcon
    // Offset: 0x68
    UnityEngine::UI::Image* spectateIcon;
    // private UnityEngine.UI.Image _partyLeaderIcon
    // Offset: 0x70
    UnityEngine::UI::Image* partyLeaderIcon;
    // private UnityEngine.UI.Image _bgImage
    // Offset: 0x78
    UnityEngine::UI::Image* bgImage;
    // private UnityEngine.UI.Image _highlightImage
    // Offset: 0x80
    UnityEngine::UI::Image* highlightImage;
    // private UnityEngine.Color _textColorNormal
    // Offset: 0x88
    UnityEngine::Color textColorNormal;
    // private UnityEngine.Color _textColorMe
    // Offset: 0x98
    UnityEngine::Color textColorMe;
    // private UnityEngine.Color _textColorSelected
    // Offset: 0xA8
    UnityEngine::Color textColorSelected;
    // private System.Boolean _isMe
    // Offset: 0xB8
    bool isMe;
    // public System.Boolean get_showSeparator()
    // Offset: 0x1FE4D44
    bool get_showSeparator();
    // public System.Void set_showSeparator(System.Boolean value)
    // Offset: 0x1FE4D60
    void set_showSeparator(bool value);
    // public System.Void SetData(System.String userName, System.Boolean isOpenParty, System.Boolean wantsToPlayNextLevel, System.Boolean isMyPartyOwner, System.Boolean isMe)
    // Offset: 0x1FE4FB8
    void SetData(::Il2CppString* userName, bool isOpenParty, bool wantsToPlayNextLevel, bool isMyPartyOwner, bool isMe);
    // private System.Void RefreshVisuals()
    // Offset: 0x1FE4D98
    void RefreshVisuals();
    // private UnityEngine.Color get_activeColor()
    // Offset: 0x1FE5060
    UnityEngine::Color get_activeColor();
    // protected override System.Void SelectionDidChange(HMUI.SelectableCell/TransitionType transitionType)
    // Offset: 0x1FE5058
    // Implemented from: HMUI.SelectableCell
    // Base method: System.Void SelectableCell::SelectionDidChange(HMUI.SelectableCell/TransitionType transitionType)
    void SelectionDidChange(HMUI::SelectableCell::TransitionType transitionType);
    // protected override System.Void HighlightDidChange(HMUI.SelectableCell/TransitionType transitionType)
    // Offset: 0x1FE505C
    // Implemented from: HMUI.SelectableCell
    // Base method: System.Void SelectableCell::HighlightDidChange(HMUI.SelectableCell/TransitionType transitionType)
    void HighlightDidChange(HMUI::SelectableCell::TransitionType transitionType);
    // public System.Void .ctor()
    // Offset: 0x1FE50BC
    // Implemented from: HMUI.TableCell
    // Base method: System.Void TableCell::.ctor()
    // Base method: System.Void SelectableCell::.ctor()
    // Base method: System.Void Interactable::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static NetworkPlayerTableCell* New_ctor();
  }; // NetworkPlayerTableCell
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::NetworkPlayerTableCell*, "", "NetworkPlayerTableCell");
#pragma pack(pop)
