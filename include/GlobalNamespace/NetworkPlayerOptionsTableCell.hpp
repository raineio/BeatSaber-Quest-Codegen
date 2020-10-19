// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: HMUI.TableCell
#include "HMUI/TableCell.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Button
  class Button;
}
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TextMeshProUGUI
  class TextMeshProUGUI;
}
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: ButtonBinder
  class ButtonBinder;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: INetworkPlayer
  class INetworkPlayer;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: NetworkPlayerOptionsTableCell
  class NetworkPlayerOptionsTableCell : public HMUI::TableCell {
    public:
    // private UnityEngine.UI.Button[] _buttons
    // Offset: 0x50
    ::Array<UnityEngine::UI::Button*>* buttons;
    // private TMPro.TextMeshProUGUI[] _buttonTexts
    // Offset: 0x58
    ::Array<TMPro::TextMeshProUGUI*>* buttonTexts;
    // private HMUI.ButtonBinder _buttonBinder
    // Offset: 0x60
    HMUI::ButtonBinder* buttonBinder;
    // private INetworkPlayer _player
    // Offset: 0x68
    GlobalNamespace::INetworkPlayer* player;
    // public INetworkPlayer get_player()
    // Offset: 0x1FE3D84
    GlobalNamespace::INetworkPlayer* get_player();
    // public System.Void set_player(INetworkPlayer value)
    // Offset: 0x1FE3D8C
    void set_player(GlobalNamespace::INetworkPlayer* value);
    // private System.Void Refresh()
    // Offset: 0x1FE3DB4
    void Refresh();
    // private System.Void Block()
    // Offset: 0x1FE48D4
    void Block();
    // private System.Void Unblock()
    // Offset: 0x1FE4990
    void Unblock();
    // private System.Void Join()
    // Offset: 0x1FE4A4C
    void Join();
    // private System.Void Invite()
    // Offset: 0x1FE4B08
    void Invite();
    // private System.Void Kick()
    // Offset: 0x1FE4BC4
    void Kick();
    // private System.Void Leave()
    // Offset: 0x1FE4C80
    void Leave();
    // public System.Void .ctor()
    // Offset: 0x1FE4D3C
    // Implemented from: HMUI.TableCell
    // Base method: System.Void TableCell::.ctor()
    // Base method: System.Void SelectableCell::.ctor()
    // Base method: System.Void Interactable::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static NetworkPlayerOptionsTableCell* New_ctor();
  }; // NetworkPlayerOptionsTableCell
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::NetworkPlayerOptionsTableCell*, "", "NetworkPlayerOptionsTableCell");
#pragma pack(pop)
