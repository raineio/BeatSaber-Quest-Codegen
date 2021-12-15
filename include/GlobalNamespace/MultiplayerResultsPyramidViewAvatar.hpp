// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
// Including type: GhostDuplicationEffect/GhostEffectParams
#include "GlobalNamespace/GhostDuplicationEffect_GhostEffectParams.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Skipping declaration: GhostDuplicationEffect because it is already included!
  // Forward declaring type: PlayerDataModel
  class PlayerDataModel;
  // Forward declaring type: IDifficultyBeatmap
  class IDifficultyBeatmap;
  // Forward declaring type: IConnectedPlayer
  class IConnectedPlayer;
  // Forward declaring type: MultiplayerPlayerResultsData
  class MultiplayerPlayerResultsData;
}
// Forward declaring namespace: UnityEngine::Playables
namespace UnityEngine::Playables {
  // Forward declaring type: PlayableDirector
  class PlayableDirector;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: CanvasGroup
  class CanvasGroup;
  // Forward declaring type: Sprite
  class Sprite;
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TextMeshProUGUI
  class TextMeshProUGUI;
}
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: ImageView
  class ImageView;
}
// Forward declaring namespace: Tweening
namespace Tweening {
  // Forward declaring type: Vector3Tween
  class Vector3Tween;
  // Forward declaring type: FloatTween
  class FloatTween;
  // Forward declaring type: ColorTween
  class ColorTween;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: MultiplayerResultsPyramidViewAvatar
  class MultiplayerResultsPyramidViewAvatar;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(GlobalNamespace::MultiplayerResultsPyramidViewAvatar);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerResultsPyramidViewAvatar*, "", "MultiplayerResultsPyramidViewAvatar");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x1C8
  #pragma pack(push, 1)
  // Autogenerated type: MultiplayerResultsPyramidViewAvatar
  // [TokenAttribute] Offset: FFFFFFFF
  class MultiplayerResultsPyramidViewAvatar : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::MultiplayerResultsPyramidViewAvatar::Factory
    class Factory;
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // [HeaderAttribute] Offset: 0xF3EFCC
    // private UnityEngine.Playables.PlayableDirector _badgeDirector
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::Playables::PlayableDirector* badgeDirector;
    // Field size check
    static_assert(sizeof(UnityEngine::Playables::PlayableDirector*) == 0x8);
    // private System.String _ghostFirstTrackName
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppString* ghostFirstTrackName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String _ghostSecondTrackName
    // Size: 0x8
    // Offset: 0x28
    ::Il2CppString* ghostSecondTrackName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // [HeaderAttribute] Offset: 0xF3F038
    // private UnityEngine.Transform _standWithAvatarTransform
    // Size: 0x8
    // Offset: 0x30
    UnityEngine::Transform* standWithAvatarTransform;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // private System.Single _perPositionRotation
    // Size: 0x4
    // Offset: 0x38
    float perPositionRotation;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.Color _localPlayerColor
    // Size: 0x10
    // Offset: 0x3C
    UnityEngine::Color localPlayerColor;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // Padding between fields: localPlayerColor and: positionText
    char __padding5[0x4] = {};
    // [HeaderAttribute] Offset: 0xF3F0A4
    // private TMPro.TextMeshProUGUI _positionText
    // Size: 0x8
    // Offset: 0x50
    TMPro::TextMeshProUGUI* positionText;
    // Field size check
    static_assert(sizeof(TMPro::TextMeshProUGUI*) == 0x8);
    // private TMPro.TextMeshProUGUI _nameText
    // Size: 0x8
    // Offset: 0x58
    TMPro::TextMeshProUGUI* nameText;
    // Field size check
    static_assert(sizeof(TMPro::TextMeshProUGUI*) == 0x8);
    // private HMUI.ImageView _nameBackground
    // Size: 0x8
    // Offset: 0x60
    HMUI::ImageView* nameBackground;
    // Field size check
    static_assert(sizeof(HMUI::ImageView*) == 0x8);
    // [HeaderAttribute] Offset: 0xF3F110
    // private UnityEngine.CanvasGroup _badgeCanvas
    // Size: 0x8
    // Offset: 0x68
    UnityEngine::CanvasGroup* badgeCanvas;
    // Field size check
    static_assert(sizeof(UnityEngine::CanvasGroup*) == 0x8);
    // private TMPro.TextMeshProUGUI[] _badgeTitles
    // Size: 0x8
    // Offset: 0x70
    ::ArrayW<TMPro::TextMeshProUGUI*> badgeTitles;
    // Field size check
    static_assert(sizeof(::ArrayW<TMPro::TextMeshProUGUI*>) == 0x8);
    // private HMUI.ImageView[] _badgeImages
    // Size: 0x8
    // Offset: 0x78
    ::ArrayW<HMUI::ImageView*> badgeImages;
    // Field size check
    static_assert(sizeof(::ArrayW<HMUI::ImageView*>) == 0x8);
    // [HeaderAttribute] Offset: 0xF3F17C
    // private TMPro.TextMeshProUGUI _badgeSubtitleText
    // Size: 0x8
    // Offset: 0x80
    TMPro::TextMeshProUGUI* badgeSubtitleText;
    // Field size check
    static_assert(sizeof(TMPro::TextMeshProUGUI*) == 0x8);
    // private UnityEngine.CanvasGroup _badgeSubtitleCanvas
    // Size: 0x8
    // Offset: 0x88
    UnityEngine::CanvasGroup* badgeSubtitleCanvas;
    // Field size check
    static_assert(sizeof(UnityEngine::CanvasGroup*) == 0x8);
    // [HeaderAttribute] Offset: 0xF3F1D8
    // private GhostDuplicationEffect _ghostDuplicationEffect
    // Size: 0x8
    // Offset: 0x90
    GlobalNamespace::GhostDuplicationEffect* ghostDuplicationEffect;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GhostDuplicationEffect*) == 0x8);
    // private GhostDuplicationEffect/GhostEffectParams _ghostAppear
    // Size: 0x45
    // Offset: 0x98
    GlobalNamespace::GhostDuplicationEffect::GhostEffectParams ghostAppear;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GhostDuplicationEffect::GhostEffectParams) == 0x45);
    // Padding between fields: ghostAppear and: ghostReceive
    char __padding15[0x3] = {};
    // private GhostDuplicationEffect/GhostEffectParams _ghostReceive
    // Size: 0x45
    // Offset: 0xE0
    GlobalNamespace::GhostDuplicationEffect::GhostEffectParams ghostReceive;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GhostDuplicationEffect::GhostEffectParams) == 0x45);
    // Padding between fields: ghostReceive and: trophyImage
    char __padding16[0x3] = {};
    // [HeaderAttribute] Offset: 0xF3F244
    // private HMUI.ImageView _trophyImage
    // Size: 0x8
    // Offset: 0x128
    HMUI::ImageView* trophyImage;
    // Field size check
    static_assert(sizeof(HMUI::ImageView*) == 0x8);
    // private UnityEngine.Sprite _firstPlaceTrophy
    // Size: 0x8
    // Offset: 0x130
    UnityEngine::Sprite* firstPlaceTrophy;
    // Field size check
    static_assert(sizeof(UnityEngine::Sprite*) == 0x8);
    // private UnityEngine.Sprite _secondPlaceTrophy
    // Size: 0x8
    // Offset: 0x138
    UnityEngine::Sprite* secondPlaceTrophy;
    // Field size check
    static_assert(sizeof(UnityEngine::Sprite*) == 0x8);
    // private UnityEngine.Sprite _thirdPlaceTrophy
    // Size: 0x8
    // Offset: 0x140
    UnityEngine::Sprite* thirdPlaceTrophy;
    // Field size check
    static_assert(sizeof(UnityEngine::Sprite*) == 0x8);
    // private UnityEngine.Color _firstPlaceColor
    // Size: 0x10
    // Offset: 0x148
    UnityEngine::Color firstPlaceColor;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // private UnityEngine.GameObject _personalBestVisual
    // Size: 0x8
    // Offset: 0x158
    UnityEngine::GameObject* personalBestVisual;
    // Field size check
    static_assert(sizeof(UnityEngine::GameObject*) == 0x8);
    // [InjectAttribute] Offset: 0xF3F2E0
    // private readonly PlayerDataModel _playerDataModel
    // Size: 0x8
    // Offset: 0x160
    GlobalNamespace::PlayerDataModel* playerDataModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PlayerDataModel*) == 0x8);
    // [InjectAttribute] Offset: 0xF3F2F0
    // private readonly IDifficultyBeatmap _difficultyBeatmap
    // Size: 0x8
    // Offset: 0x168
    GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IDifficultyBeatmap*) == 0x8);
    // private Tweening.Vector3Tween _riseTween
    // Size: 0x8
    // Offset: 0x170
    Tweening::Vector3Tween* riseTween;
    // Field size check
    static_assert(sizeof(Tweening::Vector3Tween*) == 0x8);
    // private Tweening.Vector3Tween _avatarRiseTween
    // Size: 0x8
    // Offset: 0x178
    Tweening::Vector3Tween* avatarRiseTween;
    // Field size check
    static_assert(sizeof(Tweening::Vector3Tween*) == 0x8);
    // private Tweening.Vector3Tween _badgePositionTween
    // Size: 0x8
    // Offset: 0x180
    Tweening::Vector3Tween* badgePositionTween;
    // Field size check
    static_assert(sizeof(Tweening::Vector3Tween*) == 0x8);
    // private Tweening.FloatTween _badgeOpacityTween
    // Size: 0x8
    // Offset: 0x188
    Tweening::FloatTween* badgeOpacityTween;
    // Field size check
    static_assert(sizeof(Tweening::FloatTween*) == 0x8);
    // private Tweening.FloatTween _nameOpacityTween
    // Size: 0x8
    // Offset: 0x190
    Tweening::FloatTween* nameOpacityTween;
    // Field size check
    static_assert(sizeof(Tweening::FloatTween*) == 0x8);
    // private Tweening.Vector3Tween _namePositionTween
    // Size: 0x8
    // Offset: 0x198
    Tweening::Vector3Tween* namePositionTween;
    // Field size check
    static_assert(sizeof(Tweening::Vector3Tween*) == 0x8);
    // private Tweening.ColorTween _localGlowTween
    // Size: 0x8
    // Offset: 0x1A0
    Tweening::ColorTween* localGlowTween;
    // Field size check
    static_assert(sizeof(Tweening::ColorTween*) == 0x8);
    // private Tweening.Vector3Tween _titleMakingSpaceForBadgeTween
    // Size: 0x8
    // Offset: 0x1A8
    Tweening::Vector3Tween* titleMakingSpaceForBadgeTween;
    // Field size check
    static_assert(sizeof(Tweening::Vector3Tween*) == 0x8);
    // private UnityEngine.Vector3 _originalBadgeLocalPos
    // Size: 0xC
    // Offset: 0x1B0
    UnityEngine::Vector3 originalBadgeLocalPos;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // Padding between fields: originalBadgeLocalPos and: connectedPlayer
    char __padding33[0x4] = {};
    // [InjectAttribute] Offset: 0xF3F300
    // private readonly IConnectedPlayer _connectedPlayer
    // Size: 0x8
    // Offset: 0x1C0
    GlobalNamespace::IConnectedPlayer* connectedPlayer;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IConnectedPlayer*) == 0x8);
    public:
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field reference: private UnityEngine.Playables.PlayableDirector _badgeDirector
    UnityEngine::Playables::PlayableDirector*& dyn__badgeDirector();
    // Get instance field reference: private System.String _ghostFirstTrackName
    ::Il2CppString*& dyn__ghostFirstTrackName();
    // Get instance field reference: private System.String _ghostSecondTrackName
    ::Il2CppString*& dyn__ghostSecondTrackName();
    // Get instance field reference: private UnityEngine.Transform _standWithAvatarTransform
    UnityEngine::Transform*& dyn__standWithAvatarTransform();
    // Get instance field reference: private System.Single _perPositionRotation
    float& dyn__perPositionRotation();
    // Get instance field reference: private UnityEngine.Color _localPlayerColor
    UnityEngine::Color& dyn__localPlayerColor();
    // Get instance field reference: private TMPro.TextMeshProUGUI _positionText
    TMPro::TextMeshProUGUI*& dyn__positionText();
    // Get instance field reference: private TMPro.TextMeshProUGUI _nameText
    TMPro::TextMeshProUGUI*& dyn__nameText();
    // Get instance field reference: private HMUI.ImageView _nameBackground
    HMUI::ImageView*& dyn__nameBackground();
    // Get instance field reference: private UnityEngine.CanvasGroup _badgeCanvas
    UnityEngine::CanvasGroup*& dyn__badgeCanvas();
    // Get instance field reference: private TMPro.TextMeshProUGUI[] _badgeTitles
    ::ArrayW<TMPro::TextMeshProUGUI*>& dyn__badgeTitles();
    // Get instance field reference: private HMUI.ImageView[] _badgeImages
    ::ArrayW<HMUI::ImageView*>& dyn__badgeImages();
    // Get instance field reference: private TMPro.TextMeshProUGUI _badgeSubtitleText
    TMPro::TextMeshProUGUI*& dyn__badgeSubtitleText();
    // Get instance field reference: private UnityEngine.CanvasGroup _badgeSubtitleCanvas
    UnityEngine::CanvasGroup*& dyn__badgeSubtitleCanvas();
    // Get instance field reference: private GhostDuplicationEffect _ghostDuplicationEffect
    GlobalNamespace::GhostDuplicationEffect*& dyn__ghostDuplicationEffect();
    // Get instance field reference: private GhostDuplicationEffect/GhostEffectParams _ghostAppear
    GlobalNamespace::GhostDuplicationEffect::GhostEffectParams& dyn__ghostAppear();
    // Get instance field reference: private GhostDuplicationEffect/GhostEffectParams _ghostReceive
    GlobalNamespace::GhostDuplicationEffect::GhostEffectParams& dyn__ghostReceive();
    // Get instance field reference: private HMUI.ImageView _trophyImage
    HMUI::ImageView*& dyn__trophyImage();
    // Get instance field reference: private UnityEngine.Sprite _firstPlaceTrophy
    UnityEngine::Sprite*& dyn__firstPlaceTrophy();
    // Get instance field reference: private UnityEngine.Sprite _secondPlaceTrophy
    UnityEngine::Sprite*& dyn__secondPlaceTrophy();
    // Get instance field reference: private UnityEngine.Sprite _thirdPlaceTrophy
    UnityEngine::Sprite*& dyn__thirdPlaceTrophy();
    // Get instance field reference: private UnityEngine.Color _firstPlaceColor
    UnityEngine::Color& dyn__firstPlaceColor();
    // Get instance field reference: private UnityEngine.GameObject _personalBestVisual
    UnityEngine::GameObject*& dyn__personalBestVisual();
    // Get instance field reference: private readonly PlayerDataModel _playerDataModel
    GlobalNamespace::PlayerDataModel*& dyn__playerDataModel();
    // Get instance field reference: private readonly IDifficultyBeatmap _difficultyBeatmap
    GlobalNamespace::IDifficultyBeatmap*& dyn__difficultyBeatmap();
    // Get instance field reference: private Tweening.Vector3Tween _riseTween
    Tweening::Vector3Tween*& dyn__riseTween();
    // Get instance field reference: private Tweening.Vector3Tween _avatarRiseTween
    Tweening::Vector3Tween*& dyn__avatarRiseTween();
    // Get instance field reference: private Tweening.Vector3Tween _badgePositionTween
    Tweening::Vector3Tween*& dyn__badgePositionTween();
    // Get instance field reference: private Tweening.FloatTween _badgeOpacityTween
    Tweening::FloatTween*& dyn__badgeOpacityTween();
    // Get instance field reference: private Tweening.FloatTween _nameOpacityTween
    Tweening::FloatTween*& dyn__nameOpacityTween();
    // Get instance field reference: private Tweening.Vector3Tween _namePositionTween
    Tweening::Vector3Tween*& dyn__namePositionTween();
    // Get instance field reference: private Tweening.ColorTween _localGlowTween
    Tweening::ColorTween*& dyn__localGlowTween();
    // Get instance field reference: private Tweening.Vector3Tween _titleMakingSpaceForBadgeTween
    Tweening::Vector3Tween*& dyn__titleMakingSpaceForBadgeTween();
    // Get instance field reference: private UnityEngine.Vector3 _originalBadgeLocalPos
    UnityEngine::Vector3& dyn__originalBadgeLocalPos();
    // Get instance field reference: private readonly IConnectedPlayer _connectedPlayer
    GlobalNamespace::IConnectedPlayer*& dyn__connectedPlayer();
    // public UnityEngine.Playables.PlayableDirector get_badgeDirector()
    // Offset: 0x11757DC
    UnityEngine::Playables::PlayableDirector* get_badgeDirector();
    // protected System.Void Awake()
    // Offset: 0x11757E4
    void Awake();
    // public System.Void Setup(MultiplayerPlayerResultsData resultData, System.Int32 position, System.Int32 playerCount)
    // Offset: 0x1175288
    void Setup(GlobalNamespace::MultiplayerPlayerResultsData* resultData, int position, int playerCount);
    // public System.Void SetupBadgeTimeline(UnityEngine.Transform startTransform, UnityEngine.Transform midTransform)
    // Offset: 0x1171808
    void SetupBadgeTimeline(UnityEngine::Transform* startTransform, UnityEngine::Transform* midTransform);
    // public System.Void .ctor()
    // Offset: 0x1175804
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerResultsPyramidViewAvatar* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MultiplayerResultsPyramidViewAvatar::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerResultsPyramidViewAvatar*, creationType>()));
    }
  }; // MultiplayerResultsPyramidViewAvatar
  #pragma pack(pop)
  static check_size<sizeof(MultiplayerResultsPyramidViewAvatar), 448 + sizeof(GlobalNamespace::IConnectedPlayer*)> __GlobalNamespace_MultiplayerResultsPyramidViewAvatarSizeCheck;
  static_assert(sizeof(MultiplayerResultsPyramidViewAvatar) == 0x1C8);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerResultsPyramidViewAvatar::get_badgeDirector
// Il2CppName: get_badgeDirector
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Playables::PlayableDirector* (GlobalNamespace::MultiplayerResultsPyramidViewAvatar::*)()>(&GlobalNamespace::MultiplayerResultsPyramidViewAvatar::get_badgeDirector)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerResultsPyramidViewAvatar*), "get_badgeDirector", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerResultsPyramidViewAvatar::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerResultsPyramidViewAvatar::*)()>(&GlobalNamespace::MultiplayerResultsPyramidViewAvatar::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerResultsPyramidViewAvatar*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerResultsPyramidViewAvatar::Setup
// Il2CppName: Setup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerResultsPyramidViewAvatar::*)(GlobalNamespace::MultiplayerPlayerResultsData*, int, int)>(&GlobalNamespace::MultiplayerResultsPyramidViewAvatar::Setup)> {
  static const MethodInfo* get() {
    static auto* resultData = &::il2cpp_utils::GetClassFromName("", "MultiplayerPlayerResultsData")->byval_arg;
    static auto* position = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* playerCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerResultsPyramidViewAvatar*), "Setup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{resultData, position, playerCount});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerResultsPyramidViewAvatar::SetupBadgeTimeline
// Il2CppName: SetupBadgeTimeline
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerResultsPyramidViewAvatar::*)(UnityEngine::Transform*, UnityEngine::Transform*)>(&GlobalNamespace::MultiplayerResultsPyramidViewAvatar::SetupBadgeTimeline)> {
  static const MethodInfo* get() {
    static auto* startTransform = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    static auto* midTransform = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerResultsPyramidViewAvatar*), "SetupBadgeTimeline", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{startTransform, midTransform});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerResultsPyramidViewAvatar::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
