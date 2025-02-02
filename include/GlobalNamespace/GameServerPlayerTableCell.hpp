// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: TableCellWithSeparator
#include "GlobalNamespace/TableCellWithSeparator.hpp"
// Including type: AdditionalContentModel/EntitlementStatus
#include "GlobalNamespace/AdditionalContentModel.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: GameplayModifierInfoListItemsList
  class GameplayModifierInfoListItemsList;
  // Forward declaring type: GameplayModifiersModelSO
  class GameplayModifiersModelSO;
  // Forward declaring type: IConnectedPlayer
  class IConnectedPlayer;
  // Forward declaring type: ILobbyPlayerData
  class ILobbyPlayerData;
}
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: CurvedTextMeshPro
  class CurvedTextMeshPro;
  // Forward declaring type: ImageView
  class ImageView;
  // Forward declaring type: HoverHint
  class HoverHint;
  // Forward declaring type: ButtonSpriteSwapToggle
  class ButtonSpriteSwapToggle;
  // Forward declaring type: ButtonBinder
  class ButtonBinder;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Image
  class Image;
  // Forward declaring type: Button
  class Button;
}
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TextMeshProUGUI
  class TextMeshProUGUI;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Sprite
  class Sprite;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: CancellationTokenSource
  class CancellationTokenSource;
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: GameServerPlayerTableCell
  class GameServerPlayerTableCell;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::GameServerPlayerTableCell);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameServerPlayerTableCell*, "", "GameServerPlayerTableCell");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x120
  #pragma pack(push, 1)
  // Autogenerated type: GameServerPlayerTableCell
  // [TokenAttribute] Offset: FFFFFFFF
  class GameServerPlayerTableCell : public ::GlobalNamespace::TableCellWithSeparator {
    public:
    // Nested type: ::GlobalNamespace::GameServerPlayerTableCell::$$c__DisplayClass29_0
    class $$c__DisplayClass29_0;
    // Nested type: ::GlobalNamespace::GameServerPlayerTableCell::$SetBeatmapUseButtonEnabledAsync$d__35
    struct $SetBeatmapUseButtonEnabledAsync$d__35;
    public:
    // private HMUI.CurvedTextMeshPro _playerNameText
    // Size: 0x8
    // Offset: 0x60
    ::HMUI::CurvedTextMeshPro* playerNameText;
    // Field size check
    static_assert(sizeof(::HMUI::CurvedTextMeshPro*) == 0x8);
    // private UnityEngine.UI.Image _localPlayerBackgroundImage
    // Size: 0x8
    // Offset: 0x68
    ::UnityEngine::UI::Image* localPlayerBackgroundImage;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Image*) == 0x8);
    // [HeaderAttribute] Offset: 0x1126D9C
    // private HMUI.CurvedTextMeshPro _suggestedLevelText
    // Size: 0x8
    // Offset: 0x70
    ::HMUI::CurvedTextMeshPro* suggestedLevelText;
    // Field size check
    static_assert(sizeof(::HMUI::CurvedTextMeshPro*) == 0x8);
    // private HMUI.ImageView _suggestedCharacteristicIcon
    // Size: 0x8
    // Offset: 0x78
    ::HMUI::ImageView* suggestedCharacteristicIcon;
    // Field size check
    static_assert(sizeof(::HMUI::ImageView*) == 0x8);
    // private TMPro.TextMeshProUGUI _suggestedDifficultyText
    // Size: 0x8
    // Offset: 0x80
    ::TMPro::TextMeshProUGUI* suggestedDifficultyText;
    // Field size check
    static_assert(sizeof(::TMPro::TextMeshProUGUI*) == 0x8);
    // private HMUI.CurvedTextMeshPro _emptySuggestedLevelText
    // Size: 0x8
    // Offset: 0x88
    ::HMUI::CurvedTextMeshPro* emptySuggestedLevelText;
    // Field size check
    static_assert(sizeof(::HMUI::CurvedTextMeshPro*) == 0x8);
    // [HeaderAttribute] Offset: 0x1126E18
    // private GameplayModifierInfoListItemsList _suggestedModifiersList
    // Size: 0x8
    // Offset: 0x90
    ::GlobalNamespace::GameplayModifierInfoListItemsList* suggestedModifiersList;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::GameplayModifierInfoListItemsList*) == 0x8);
    // private HMUI.CurvedTextMeshPro _emptySuggestedModifiersText
    // Size: 0x8
    // Offset: 0x98
    ::HMUI::CurvedTextMeshPro* emptySuggestedModifiersText;
    // Field size check
    static_assert(sizeof(::HMUI::CurvedTextMeshPro*) == 0x8);
    // [HeaderAttribute] Offset: 0x1126E74
    // private UnityEngine.UI.Button _mutePlayerButton
    // Size: 0x8
    // Offset: 0xA0
    ::UnityEngine::UI::Button* mutePlayerButton;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Button*) == 0x8);
    // private UnityEngine.UI.Button _kickPlayerButton
    // Size: 0x8
    // Offset: 0xA8
    ::UnityEngine::UI::Button* kickPlayerButton;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Button*) == 0x8);
    // private UnityEngine.UI.Button _useBeatmapButton
    // Size: 0x8
    // Offset: 0xB0
    ::UnityEngine::UI::Button* useBeatmapButton;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Button*) == 0x8);
    // private UnityEngine.UI.Button _useModifiersButton
    // Size: 0x8
    // Offset: 0xB8
    ::UnityEngine::UI::Button* useModifiersButton;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Button*) == 0x8);
    // private HMUI.HoverHint _useBeatmapButtonHoverHint
    // Size: 0x8
    // Offset: 0xC0
    ::HMUI::HoverHint* useBeatmapButtonHoverHint;
    // Field size check
    static_assert(sizeof(::HMUI::HoverHint*) == 0x8);
    // [HeaderAttribute] Offset: 0x1126F00
    // private HMUI.ButtonSpriteSwapToggle _muteToggle
    // Size: 0x8
    // Offset: 0xC8
    ::HMUI::ButtonSpriteSwapToggle* muteToggle;
    // Field size check
    static_assert(sizeof(::HMUI::ButtonSpriteSwapToggle*) == 0x8);
    // private HMUI.ImageView _statusImageView
    // Size: 0x8
    // Offset: 0xD0
    ::HMUI::ImageView* statusImageView;
    // Field size check
    static_assert(sizeof(::HMUI::ImageView*) == 0x8);
    // private UnityEngine.Sprite _readyIcon
    // Size: 0x8
    // Offset: 0xD8
    ::UnityEngine::Sprite* readyIcon;
    // Field size check
    static_assert(sizeof(::UnityEngine::Sprite*) == 0x8);
    // private UnityEngine.Sprite _spectatingIcon
    // Size: 0x8
    // Offset: 0xE0
    ::UnityEngine::Sprite* spectatingIcon;
    // Field size check
    static_assert(sizeof(::UnityEngine::Sprite*) == 0x8);
    // private UnityEngine.Sprite _hostIcon
    // Size: 0x8
    // Offset: 0xE8
    ::UnityEngine::Sprite* hostIcon;
    // Field size check
    static_assert(sizeof(::UnityEngine::Sprite*) == 0x8);
    // [HeaderAttribute] Offset: 0x1126F8C
    // private GameplayModifiersModelSO _gameplayModifiers
    // Size: 0x8
    // Offset: 0xF0
    ::GlobalNamespace::GameplayModifiersModelSO* gameplayModifiers;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::GameplayModifiersModelSO*) == 0x8);
    // private System.Action`1<System.Int32> kickPlayerEvent
    // Size: 0x8
    // Offset: 0xF8
    ::System::Action_1<int>* kickPlayerEvent;
    // Field size check
    static_assert(sizeof(::System::Action_1<int>*) == 0x8);
    // private System.Action`1<System.Int32> useBeatmapEvent
    // Size: 0x8
    // Offset: 0x100
    ::System::Action_1<int>* useBeatmapEvent;
    // Field size check
    static_assert(sizeof(::System::Action_1<int>*) == 0x8);
    // private System.Action`1<System.Int32> useModifiersEvent
    // Size: 0x8
    // Offset: 0x108
    ::System::Action_1<int>* useModifiersEvent;
    // Field size check
    static_assert(sizeof(::System::Action_1<int>*) == 0x8);
    // private readonly HMUI.ButtonBinder _buttonBinder
    // Size: 0x8
    // Offset: 0x110
    ::HMUI::ButtonBinder* buttonBinder;
    // Field size check
    static_assert(sizeof(::HMUI::ButtonBinder*) == 0x8);
    // private System.Threading.CancellationTokenSource _getLevelEntitlementCancellationTokenSource
    // Size: 0x8
    // Offset: 0x118
    ::System::Threading::CancellationTokenSource* getLevelEntitlementCancellationTokenSource;
    // Field size check
    static_assert(sizeof(::System::Threading::CancellationTokenSource*) == 0x8);
    public:
    // Get instance field reference: private HMUI.CurvedTextMeshPro _playerNameText
    [[deprecated("Use field access instead!")]] ::HMUI::CurvedTextMeshPro*& dyn__playerNameText();
    // Get instance field reference: private UnityEngine.UI.Image _localPlayerBackgroundImage
    [[deprecated("Use field access instead!")]] ::UnityEngine::UI::Image*& dyn__localPlayerBackgroundImage();
    // Get instance field reference: private HMUI.CurvedTextMeshPro _suggestedLevelText
    [[deprecated("Use field access instead!")]] ::HMUI::CurvedTextMeshPro*& dyn__suggestedLevelText();
    // Get instance field reference: private HMUI.ImageView _suggestedCharacteristicIcon
    [[deprecated("Use field access instead!")]] ::HMUI::ImageView*& dyn__suggestedCharacteristicIcon();
    // Get instance field reference: private TMPro.TextMeshProUGUI _suggestedDifficultyText
    [[deprecated("Use field access instead!")]] ::TMPro::TextMeshProUGUI*& dyn__suggestedDifficultyText();
    // Get instance field reference: private HMUI.CurvedTextMeshPro _emptySuggestedLevelText
    [[deprecated("Use field access instead!")]] ::HMUI::CurvedTextMeshPro*& dyn__emptySuggestedLevelText();
    // Get instance field reference: private GameplayModifierInfoListItemsList _suggestedModifiersList
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::GameplayModifierInfoListItemsList*& dyn__suggestedModifiersList();
    // Get instance field reference: private HMUI.CurvedTextMeshPro _emptySuggestedModifiersText
    [[deprecated("Use field access instead!")]] ::HMUI::CurvedTextMeshPro*& dyn__emptySuggestedModifiersText();
    // Get instance field reference: private UnityEngine.UI.Button _mutePlayerButton
    [[deprecated("Use field access instead!")]] ::UnityEngine::UI::Button*& dyn__mutePlayerButton();
    // Get instance field reference: private UnityEngine.UI.Button _kickPlayerButton
    [[deprecated("Use field access instead!")]] ::UnityEngine::UI::Button*& dyn__kickPlayerButton();
    // Get instance field reference: private UnityEngine.UI.Button _useBeatmapButton
    [[deprecated("Use field access instead!")]] ::UnityEngine::UI::Button*& dyn__useBeatmapButton();
    // Get instance field reference: private UnityEngine.UI.Button _useModifiersButton
    [[deprecated("Use field access instead!")]] ::UnityEngine::UI::Button*& dyn__useModifiersButton();
    // Get instance field reference: private HMUI.HoverHint _useBeatmapButtonHoverHint
    [[deprecated("Use field access instead!")]] ::HMUI::HoverHint*& dyn__useBeatmapButtonHoverHint();
    // Get instance field reference: private HMUI.ButtonSpriteSwapToggle _muteToggle
    [[deprecated("Use field access instead!")]] ::HMUI::ButtonSpriteSwapToggle*& dyn__muteToggle();
    // Get instance field reference: private HMUI.ImageView _statusImageView
    [[deprecated("Use field access instead!")]] ::HMUI::ImageView*& dyn__statusImageView();
    // Get instance field reference: private UnityEngine.Sprite _readyIcon
    [[deprecated("Use field access instead!")]] ::UnityEngine::Sprite*& dyn__readyIcon();
    // Get instance field reference: private UnityEngine.Sprite _spectatingIcon
    [[deprecated("Use field access instead!")]] ::UnityEngine::Sprite*& dyn__spectatingIcon();
    // Get instance field reference: private UnityEngine.Sprite _hostIcon
    [[deprecated("Use field access instead!")]] ::UnityEngine::Sprite*& dyn__hostIcon();
    // Get instance field reference: private GameplayModifiersModelSO _gameplayModifiers
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::GameplayModifiersModelSO*& dyn__gameplayModifiers();
    // Get instance field reference: private System.Action`1<System.Int32> kickPlayerEvent
    [[deprecated("Use field access instead!")]] ::System::Action_1<int>*& dyn_kickPlayerEvent();
    // Get instance field reference: private System.Action`1<System.Int32> useBeatmapEvent
    [[deprecated("Use field access instead!")]] ::System::Action_1<int>*& dyn_useBeatmapEvent();
    // Get instance field reference: private System.Action`1<System.Int32> useModifiersEvent
    [[deprecated("Use field access instead!")]] ::System::Action_1<int>*& dyn_useModifiersEvent();
    // Get instance field reference: private readonly HMUI.ButtonBinder _buttonBinder
    [[deprecated("Use field access instead!")]] ::HMUI::ButtonBinder*& dyn__buttonBinder();
    // Get instance field reference: private System.Threading.CancellationTokenSource _getLevelEntitlementCancellationTokenSource
    [[deprecated("Use field access instead!")]] ::System::Threading::CancellationTokenSource*& dyn__getLevelEntitlementCancellationTokenSource();
    // public System.Void add_kickPlayerEvent(System.Action`1<System.Int32> value)
    // Offset: 0x14590CC
    void add_kickPlayerEvent(::System::Action_1<int>* value);
    // public System.Void remove_kickPlayerEvent(System.Action`1<System.Int32> value)
    // Offset: 0x1459170
    void remove_kickPlayerEvent(::System::Action_1<int>* value);
    // public System.Void add_useBeatmapEvent(System.Action`1<System.Int32> value)
    // Offset: 0x1459214
    void add_useBeatmapEvent(::System::Action_1<int>* value);
    // public System.Void remove_useBeatmapEvent(System.Action`1<System.Int32> value)
    // Offset: 0x14592BC
    void remove_useBeatmapEvent(::System::Action_1<int>* value);
    // public System.Void add_useModifiersEvent(System.Action`1<System.Int32> value)
    // Offset: 0x1459364
    void add_useModifiersEvent(::System::Action_1<int>* value);
    // public System.Void remove_useModifiersEvent(System.Action`1<System.Int32> value)
    // Offset: 0x145940C
    void remove_useModifiersEvent(::System::Action_1<int>* value);
    // public System.Void .ctor()
    // Offset: 0x145A4D0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GameServerPlayerTableCell* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::GameServerPlayerTableCell::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GameServerPlayerTableCell*, creationType>()));
    }
    // public System.Void SetData(IConnectedPlayer connectedPlayer, ILobbyPlayerData playerData, System.Boolean hasKickPermissions, System.Boolean allowSelection, System.Threading.Tasks.Task`1<AdditionalContentModel/EntitlementStatus> getLevelEntitlementTask)
    // Offset: 0x14594B4
    void SetData(::GlobalNamespace::IConnectedPlayer* connectedPlayer, ::GlobalNamespace::ILobbyPlayerData* playerData, bool hasKickPermissions, bool allowSelection, ::System::Threading::Tasks::Task_1<::GlobalNamespace::AdditionalContentModel::EntitlementStatus>* getLevelEntitlementTask);
    // protected System.Void Awake()
    // Offset: 0x145A280
    void Awake();
    // private System.Void HandleKickPlayerButtonPressed()
    // Offset: 0x145A3A4
    void HandleKickPlayerButtonPressed();
    // private System.Void HandleUseBeatmapButtonPressed()
    // Offset: 0x145A408
    void HandleUseBeatmapButtonPressed();
    // private System.Void HandleUseModifiersButtonPressed()
    // Offset: 0x145A46C
    void HandleUseModifiersButtonPressed();
    // private System.Void SetBeatmapUseButtonEnabledAsync(System.Threading.Tasks.Task`1<AdditionalContentModel/EntitlementStatus> getLevelEntitlementTask)
    // Offset: 0x145A1BC
    void SetBeatmapUseButtonEnabledAsync(::System::Threading::Tasks::Task_1<::GlobalNamespace::AdditionalContentModel::EntitlementStatus>* getLevelEntitlementTask);
  }; // GameServerPlayerTableCell
  #pragma pack(pop)
  static check_size<sizeof(GameServerPlayerTableCell), 280 + sizeof(::System::Threading::CancellationTokenSource*)> __GlobalNamespace_GameServerPlayerTableCellSizeCheck;
  static_assert(sizeof(GameServerPlayerTableCell) == 0x120);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::GameServerPlayerTableCell::add_kickPlayerEvent
// Il2CppName: add_kickPlayerEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameServerPlayerTableCell::*)(::System::Action_1<int>*)>(&GlobalNamespace::GameServerPlayerTableCell::add_kickPlayerEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int32")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameServerPlayerTableCell*), "add_kickPlayerEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameServerPlayerTableCell::remove_kickPlayerEvent
// Il2CppName: remove_kickPlayerEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameServerPlayerTableCell::*)(::System::Action_1<int>*)>(&GlobalNamespace::GameServerPlayerTableCell::remove_kickPlayerEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int32")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameServerPlayerTableCell*), "remove_kickPlayerEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameServerPlayerTableCell::add_useBeatmapEvent
// Il2CppName: add_useBeatmapEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameServerPlayerTableCell::*)(::System::Action_1<int>*)>(&GlobalNamespace::GameServerPlayerTableCell::add_useBeatmapEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int32")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameServerPlayerTableCell*), "add_useBeatmapEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameServerPlayerTableCell::remove_useBeatmapEvent
// Il2CppName: remove_useBeatmapEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameServerPlayerTableCell::*)(::System::Action_1<int>*)>(&GlobalNamespace::GameServerPlayerTableCell::remove_useBeatmapEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int32")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameServerPlayerTableCell*), "remove_useBeatmapEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameServerPlayerTableCell::add_useModifiersEvent
// Il2CppName: add_useModifiersEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameServerPlayerTableCell::*)(::System::Action_1<int>*)>(&GlobalNamespace::GameServerPlayerTableCell::add_useModifiersEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int32")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameServerPlayerTableCell*), "add_useModifiersEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameServerPlayerTableCell::remove_useModifiersEvent
// Il2CppName: remove_useModifiersEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameServerPlayerTableCell::*)(::System::Action_1<int>*)>(&GlobalNamespace::GameServerPlayerTableCell::remove_useModifiersEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int32")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameServerPlayerTableCell*), "remove_useModifiersEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameServerPlayerTableCell::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::GameServerPlayerTableCell::SetData
// Il2CppName: SetData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameServerPlayerTableCell::*)(::GlobalNamespace::IConnectedPlayer*, ::GlobalNamespace::ILobbyPlayerData*, bool, bool, ::System::Threading::Tasks::Task_1<::GlobalNamespace::AdditionalContentModel::EntitlementStatus>*)>(&GlobalNamespace::GameServerPlayerTableCell::SetData)> {
  static const MethodInfo* get() {
    static auto* connectedPlayer = &::il2cpp_utils::GetClassFromName("", "IConnectedPlayer")->byval_arg;
    static auto* playerData = &::il2cpp_utils::GetClassFromName("", "ILobbyPlayerData")->byval_arg;
    static auto* hasKickPermissions = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* allowSelection = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* getLevelEntitlementTask = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Threading.Tasks", "Task`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "AdditionalContentModel/EntitlementStatus")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameServerPlayerTableCell*), "SetData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{connectedPlayer, playerData, hasKickPermissions, allowSelection, getLevelEntitlementTask});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameServerPlayerTableCell::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameServerPlayerTableCell::*)()>(&GlobalNamespace::GameServerPlayerTableCell::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameServerPlayerTableCell*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameServerPlayerTableCell::HandleKickPlayerButtonPressed
// Il2CppName: HandleKickPlayerButtonPressed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameServerPlayerTableCell::*)()>(&GlobalNamespace::GameServerPlayerTableCell::HandleKickPlayerButtonPressed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameServerPlayerTableCell*), "HandleKickPlayerButtonPressed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameServerPlayerTableCell::HandleUseBeatmapButtonPressed
// Il2CppName: HandleUseBeatmapButtonPressed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameServerPlayerTableCell::*)()>(&GlobalNamespace::GameServerPlayerTableCell::HandleUseBeatmapButtonPressed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameServerPlayerTableCell*), "HandleUseBeatmapButtonPressed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameServerPlayerTableCell::HandleUseModifiersButtonPressed
// Il2CppName: HandleUseModifiersButtonPressed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameServerPlayerTableCell::*)()>(&GlobalNamespace::GameServerPlayerTableCell::HandleUseModifiersButtonPressed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameServerPlayerTableCell*), "HandleUseModifiersButtonPressed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameServerPlayerTableCell::SetBeatmapUseButtonEnabledAsync
// Il2CppName: SetBeatmapUseButtonEnabledAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameServerPlayerTableCell::*)(::System::Threading::Tasks::Task_1<::GlobalNamespace::AdditionalContentModel::EntitlementStatus>*)>(&GlobalNamespace::GameServerPlayerTableCell::SetBeatmapUseButtonEnabledAsync)> {
  static const MethodInfo* get() {
    static auto* getLevelEntitlementTask = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Threading.Tasks", "Task`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "AdditionalContentModel/EntitlementStatus")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameServerPlayerTableCell*), "SetBeatmapUseButtonEnabledAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{getLevelEntitlementTask});
  }
};
