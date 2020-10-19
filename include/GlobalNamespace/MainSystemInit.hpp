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
  // Forward declaring type: MainSettingsModelSO
  class MainSettingsModelSO;
  // Forward declaring type: AudioManagerSO
  class AudioManagerSO;
  // Forward declaring type: AvatarDataModel
  class AvatarDataModel;
  // Forward declaring type: AvatarPartsModelSO
  class AvatarPartsModelSO;
  // Forward declaring type: SkinColorSetSO
  class SkinColorSetSO;
  // Forward declaring type: MirrorRendererGraphicsSettingsPresets
  class MirrorRendererGraphicsSettingsPresets;
  // Forward declaring type: MainEffectGraphicsSettingsPresetsSO
  class MainEffectGraphicsSettingsPresetsSO;
  // Forward declaring type: BloomPrePassGraphicsSettingsPresetsSO
  class BloomPrePassGraphicsSettingsPresetsSO;
  // Forward declaring type: MirrorRendererSO
  class MirrorRendererSO;
  // Forward declaring type: MainEffectContainerSO
  class MainEffectContainerSO;
  // Forward declaring type: BloomPrePassEffectContainerSO
  class BloomPrePassEffectContainerSO;
  // Forward declaring type: LanguageSettingsPresetsSO
  class LanguageSettingsPresetsSO;
  // Forward declaring type: AppStaticSettingsSO
  class AppStaticSettingsSO;
  // Forward declaring type: TimeHelper
  class TimeHelper;
  // Forward declaring type: PlayerDataModel
  class PlayerDataModel;
  // Forward declaring type: CampaignProgressModel
  class CampaignProgressModel;
  // Forward declaring type: BeatmapLevelsModel
  class BeatmapLevelsModel;
  // Forward declaring type: CustomLevelLoader
  class CustomLevelLoader;
  // Forward declaring type: CachedMediaAsyncLoader
  class CachedMediaAsyncLoader;
  // Forward declaring type: ExternalCamerasManager
  class ExternalCamerasManager;
  // Forward declaring type: MultiplayerSessionManager
  class MultiplayerSessionManager;
  // Forward declaring type: LocalNetworkPlayerModel
  class LocalNetworkPlayerModel;
  // Forward declaring type: UnifiedNetworkPlayerModel
  class UnifiedNetworkPlayerModel;
  // Forward declaring type: NetworkPlayerEntitlementChecker
  class NetworkPlayerEntitlementChecker;
  // Forward declaring type: HapticFeedbackController
  class HapticFeedbackController;
  // Forward declaring type: NodePoseSyncStateManager
  class NodePoseSyncStateManager;
  // Forward declaring type: AlwaysOwnedContentContainerSO
  class AlwaysOwnedContentContainerSO;
  // Forward declaring type: PSVRHelper
  class PSVRHelper;
  // Forward declaring type: OculusVRHelper
  class OculusVRHelper;
  // Forward declaring type: OpenVRHelper
  class OpenVRHelper;
  // Forward declaring type: DevicelessVRHelper
  class DevicelessVRHelper;
  // Forward declaring type: TestPlatformAdditionalContentModel
  class TestPlatformAdditionalContentModel;
  // Forward declaring type: PS4PlatformAdditionalContentModel
  class PS4PlatformAdditionalContentModel;
  // Forward declaring type: OculusPlatformAdditionalContentModel
  class OculusPlatformAdditionalContentModel;
  // Forward declaring type: SteamPlatformAdditionalContentModel
  class SteamPlatformAdditionalContentModel;
  // Forward declaring type: SteamLevelProductsModelSO
  class SteamLevelProductsModelSO;
  // Forward declaring type: OculusLevelProductsModelSO
  class OculusLevelProductsModelSO;
  // Forward declaring type: PS4LevelProductsModelSO
  class PS4LevelProductsModelSO;
  // Forward declaring type: PS4LeaderboardIdsModelSO
  class PS4LeaderboardIdsModelSO;
  // Forward declaring type: RichPresenceManager
  class RichPresenceManager;
  // Forward declaring type: NetworkConfigSO
  class NetworkConfigSO;
  // Forward declaring type: MultiplayerMockSettings
  class MultiplayerMockSettings;
  // Forward declaring type: SteamNetworkPlayerModel
  class SteamNetworkPlayerModel;
  // Forward declaring type: OculusNetworkPlayerModel
  class OculusNetworkPlayerModel;
  // Forward declaring type: PS4NetworkPlayerModel
  class PS4NetworkPlayerModel;
  // Forward declaring type: BeatmapCharacteristicCollectionSO
  class BeatmapCharacteristicCollectionSO;
  // Forward declaring type: LeaderboardScoreUploader
  class LeaderboardScoreUploader;
  // Forward declaring type: PlatformLeaderboardsModel
  class PlatformLeaderboardsModel;
  // Forward declaring type: BeatmapLevelSO
  class BeatmapLevelSO;
}
// Forward declaring namespace: Tweening
namespace Tweening {
  // Forward declaring type: TweeningManager
  class TweeningManager;
}
// Forward declaring namespace: OnlineServices
namespace OnlineServices {
  // Forward declaring type: ServerManager
  class ServerManager;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: DiContainer
  class DiContainer;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: MainSystemInit
  class MainSystemInit : public UnityEngine::MonoBehaviour {
    public:
    // private MainSettingsModelSO _mainSettingsModel
    // Offset: 0x18
    GlobalNamespace::MainSettingsModelSO* mainSettingsModel;
    // private AudioManagerSO _audioManager
    // Offset: 0x20
    GlobalNamespace::AudioManagerSO* audioManager;
    // private AvatarDataModel _avatarDataModel
    // Offset: 0x28
    GlobalNamespace::AvatarDataModel* avatarDataModel;
    // private AvatarPartsModelSO _avatarPartsModel
    // Offset: 0x30
    GlobalNamespace::AvatarPartsModelSO* avatarPartsModel;
    // private SkinColorSetSO _skinColorSet
    // Offset: 0x38
    GlobalNamespace::SkinColorSetSO* skinColorSet;
    // private MirrorRendererGraphicsSettingsPresets _mirrorRendererGraphicsSettingsPresets
    // Offset: 0x40
    GlobalNamespace::MirrorRendererGraphicsSettingsPresets* mirrorRendererGraphicsSettingsPresets;
    // private MainEffectGraphicsSettingsPresetsSO _mainEffectGraphicsSettingsPresets
    // Offset: 0x48
    GlobalNamespace::MainEffectGraphicsSettingsPresetsSO* mainEffectGraphicsSettingsPresets;
    // private BloomPrePassGraphicsSettingsPresetsSO _bloomPrePassGraphicsSettingsPresets
    // Offset: 0x50
    GlobalNamespace::BloomPrePassGraphicsSettingsPresetsSO* bloomPrePassGraphicsSettingsPresets;
    // private MirrorRendererSO _mirrorRenderer
    // Offset: 0x58
    GlobalNamespace::MirrorRendererSO* mirrorRenderer;
    // private MainEffectContainerSO _mainEffectContainer
    // Offset: 0x60
    GlobalNamespace::MainEffectContainerSO* mainEffectContainer;
    // private BloomPrePassEffectContainerSO _bloomPrePassEffectContainer
    // Offset: 0x68
    GlobalNamespace::BloomPrePassEffectContainerSO* bloomPrePassEffectContainer;
    // private LanguageSettingsPresetsSO _languageSettingsPresets
    // Offset: 0x70
    GlobalNamespace::LanguageSettingsPresetsSO* languageSettingsPresets;
    // private AppStaticSettingsSO _appStaticSettings
    // Offset: 0x78
    GlobalNamespace::AppStaticSettingsSO* appStaticSettings;
    // private TimeHelper _timeHelperPrefab
    // Offset: 0x80
    GlobalNamespace::TimeHelper* timeHelperPrefab;
    // private PlayerDataModel _playerDataModelPrefab
    // Offset: 0x88
    GlobalNamespace::PlayerDataModel* playerDataModelPrefab;
    // private CampaignProgressModel _campaignProgressModelPrefab
    // Offset: 0x90
    GlobalNamespace::CampaignProgressModel* campaignProgressModelPrefab;
    // private BeatmapLevelsModel _beatmapLevelsModelPrefab
    // Offset: 0x98
    GlobalNamespace::BeatmapLevelsModel* beatmapLevelsModelPrefab;
    // private CustomLevelLoader _customLevelLoaderPrefab
    // Offset: 0xA0
    GlobalNamespace::CustomLevelLoader* customLevelLoaderPrefab;
    // private CachedMediaAsyncLoader _cachedMediaAsyncLoaderPrefab
    // Offset: 0xA8
    GlobalNamespace::CachedMediaAsyncLoader* cachedMediaAsyncLoaderPrefab;
    // private ExternalCamerasManager _externalCamerasManagerPrefab
    // Offset: 0xB0
    GlobalNamespace::ExternalCamerasManager* externalCamerasManagerPrefab;
    // private MultiplayerSessionManager _multiplayerSessionManagerPrefab
    // Offset: 0xB8
    GlobalNamespace::MultiplayerSessionManager* multiplayerSessionManagerPrefab;
    // private LocalNetworkPlayerModel _localNetworkPlayerModelPrefab
    // Offset: 0xC0
    GlobalNamespace::LocalNetworkPlayerModel* localNetworkPlayerModelPrefab;
    // private UnifiedNetworkPlayerModel _unifiedNetworkModelPrefab
    // Offset: 0xC8
    GlobalNamespace::UnifiedNetworkPlayerModel* unifiedNetworkModelPrefab;
    // private NetworkPlayerEntitlementChecker _networkPlayerEntitlementCheckerPrefab
    // Offset: 0xD0
    GlobalNamespace::NetworkPlayerEntitlementChecker* networkPlayerEntitlementCheckerPrefab;
    // private HapticFeedbackController _hapticFeedbackControllerPrefab
    // Offset: 0xD8
    GlobalNamespace::HapticFeedbackController* hapticFeedbackControllerPrefab;
    // private Tweening.TweeningManager _tweeningManagerPrefab
    // Offset: 0xE0
    Tweening::TweeningManager* tweeningManagerPrefab;
    // private NodePoseSyncStateManager _nodePoseSyncStateManagerPrefab
    // Offset: 0xE8
    GlobalNamespace::NodePoseSyncStateManager* nodePoseSyncStateManagerPrefab;
    // private AlwaysOwnedContentContainerSO _alwaysOwnedContentContainer
    // Offset: 0xF0
    GlobalNamespace::AlwaysOwnedContentContainerSO* alwaysOwnedContentContainer;
    // private PSVRHelper _psVRHelperPrefab
    // Offset: 0xF8
    GlobalNamespace::PSVRHelper* psVRHelperPrefab;
    // private OculusVRHelper _oculusVRHelperPrefab
    // Offset: 0x100
    GlobalNamespace::OculusVRHelper* oculusVRHelperPrefab;
    // private OpenVRHelper _openVRHelperPrefab
    // Offset: 0x108
    GlobalNamespace::OpenVRHelper* openVRHelperPrefab;
    // private DevicelessVRHelper _devicelessVRHelperPrefab
    // Offset: 0x110
    GlobalNamespace::DevicelessVRHelper* devicelessVRHelperPrefab;
    // private TestPlatformAdditionalContentModel _testPlatformAdditionalContentModelPrefab
    // Offset: 0x118
    GlobalNamespace::TestPlatformAdditionalContentModel* testPlatformAdditionalContentModelPrefab;
    // private PS4PlatformAdditionalContentModel _ps4PlatformAdditionalContentModelPrefab
    // Offset: 0x120
    GlobalNamespace::PS4PlatformAdditionalContentModel* ps4PlatformAdditionalContentModelPrefab;
    // private OculusPlatformAdditionalContentModel _oculusPlatformAdditionalContentModelPrefab
    // Offset: 0x128
    GlobalNamespace::OculusPlatformAdditionalContentModel* oculusPlatformAdditionalContentModelPrefab;
    // private SteamPlatformAdditionalContentModel _steamPlatformAdditionalContentModelPrefab
    // Offset: 0x130
    GlobalNamespace::SteamPlatformAdditionalContentModel* steamPlatformAdditionalContentModelPrefab;
    // private SteamLevelProductsModelSO _steamLevelProductsModel
    // Offset: 0x138
    GlobalNamespace::SteamLevelProductsModelSO* steamLevelProductsModel;
    // private OculusLevelProductsModelSO _oculusLevelProducsModel
    // Offset: 0x140
    GlobalNamespace::OculusLevelProductsModelSO* oculusLevelProducsModel;
    // private PS4LevelProductsModelSO _ps4LevelProductsModel
    // Offset: 0x148
    GlobalNamespace::PS4LevelProductsModelSO* ps4LevelProductsModel;
    // private PS4LeaderboardIdsModelSO _ps4LeaderboardIdsModel
    // Offset: 0x150
    GlobalNamespace::PS4LeaderboardIdsModelSO* ps4LeaderboardIdsModel;
    // private OnlineServices.ServerManager _onlineServicesServerManagerPrefab
    // Offset: 0x158
    OnlineServices::ServerManager* onlineServicesServerManagerPrefab;
    // private RichPresenceManager _richPresenceManagerPrefab
    // Offset: 0x160
    GlobalNamespace::RichPresenceManager* richPresenceManagerPrefab;
    // private NetworkConfigSO _networkConfig
    // Offset: 0x168
    GlobalNamespace::NetworkConfigSO* networkConfig;
    // private MultiplayerMockSettings _mockSettings
    // Offset: 0x170
    GlobalNamespace::MultiplayerMockSettings* mockSettings;
    // private SteamNetworkPlayerModel _steamNetworkPlayerModelPrefab
    // Offset: 0x178
    GlobalNamespace::SteamNetworkPlayerModel* steamNetworkPlayerModelPrefab;
    // private OculusNetworkPlayerModel _oculusNetworkPlayerModelPrefab
    // Offset: 0x180
    GlobalNamespace::OculusNetworkPlayerModel* oculusNetworkPlayerModelPrefab;
    // private PS4NetworkPlayerModel _ps4NetworkPlayerModelPrefab
    // Offset: 0x188
    GlobalNamespace::PS4NetworkPlayerModel* ps4NetworkPlayerModelPrefab;
    // private BeatmapCharacteristicCollectionSO _beatmapCharacteristicCollection
    // Offset: 0x190
    GlobalNamespace::BeatmapCharacteristicCollectionSO* beatmapCharacteristicCollection;
    // private LeaderboardScoreUploader _leaderboardScoreUploader
    // Offset: 0x198
    GlobalNamespace::LeaderboardScoreUploader* leaderboardScoreUploader;
    // private PlatformLeaderboardsModel _platformLeaderboardsModel
    // Offset: 0x1A0
    GlobalNamespace::PlatformLeaderboardsModel* platformLeaderboardsModel;
    // private BeatmapLevelSO _anyBeatmapLevelSO
    // Offset: 0x1A8
    GlobalNamespace::BeatmapLevelSO* anyBeatmapLevelSO;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Void Init()
    // Offset: 0x1FC0E20
    void Init();
    // public System.Void InstallBindings(Zenject.DiContainer container)
    // Offset: 0x1FC1204
    void InstallBindings(Zenject::DiContainer* container);
    // private System.Void InstallRichPresence(Zenject.DiContainer container)
    // Offset: 0x1FC1E9C
    void InstallRichPresence(Zenject::DiContainer* container);
    // private System.Void InstallOculusDestinationBindings(Zenject.DiContainer container)
    // Offset: 0x1FC1DC0
    void InstallOculusDestinationBindings(Zenject::DiContainer* container);
    // private System.Void InstallPlatformLeaderboardsModel(Zenject.DiContainer container)
    // Offset: 0x1FC1F5C
    void InstallPlatformLeaderboardsModel(Zenject::DiContainer* container);
    // public System.Void .ctor()
    // Offset: 0x1FC20A0
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static MainSystemInit* New_ctor();
  }; // MainSystemInit
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MainSystemInit*, "", "MainSystemInit");
#pragma pack(pop)
