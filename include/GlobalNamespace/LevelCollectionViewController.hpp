// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: HMUI.ViewController
#include "HMUI/ViewController.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: LevelCollectionTableView
  class LevelCollectionTableView;
  // Forward declaring type: PlayerDataModel
  class PlayerDataModel;
  // Forward declaring type: AdditionalContentModel
  class AdditionalContentModel;
  // Forward declaring type: SongPreviewPlayer
  class SongPreviewPlayer;
  // Forward declaring type: IPreviewBeatmapLevel
  class IPreviewBeatmapLevel;
  // Forward declaring type: IBeatmapLevelCollection
  class IBeatmapLevelCollection;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: RectTransform
  class RectTransform;
  // Forward declaring type: GameObject
  class GameObject;
  // Forward declaring type: Sprite
  class Sprite;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: DiContainer
  class DiContainer;
}
// Forward declaring namespace: DataModels::Levels
namespace DataModels::Levels {
  // Forward declaring type: PerceivedLoudnessPerLevelModel
  class PerceivedLoudnessPerLevelModel;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: CancellationTokenSource
  class CancellationTokenSource;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xE0
  #pragma pack(push, 1)
  // Autogenerated type: LevelCollectionViewController
  class LevelCollectionViewController : public HMUI::ViewController {
    public:
    // Nested type: GlobalNamespace::LevelCollectionViewController::$SongPlayerCrossfadeToLevelAsync$d__24
    struct $SongPlayerCrossfadeToLevelAsync$d__24;
    // private LevelCollectionTableView _levelCollectionTableView
    // Size: 0x8
    // Offset: 0x70
    GlobalNamespace::LevelCollectionTableView* levelCollectionTableView;
    // Field size check
    static_assert(sizeof(GlobalNamespace::LevelCollectionTableView*) == 0x8);
    // private UnityEngine.RectTransform _noDataInfoContainer
    // Size: 0x8
    // Offset: 0x78
    UnityEngine::RectTransform* noDataInfoContainer;
    // Field size check
    static_assert(sizeof(UnityEngine::RectTransform*) == 0x8);
    // [SpaceAttribute] Offset: 0xE24F2C
    // [InjectAttribute] Offset: 0xE24F2C
    // private PlayerDataModel _playerDataModel
    // Size: 0x8
    // Offset: 0x80
    GlobalNamespace::PlayerDataModel* playerDataModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PlayerDataModel*) == 0x8);
    // [InjectAttribute] Offset: 0xE24F64
    // private Zenject.DiContainer _container
    // Size: 0x8
    // Offset: 0x88
    Zenject::DiContainer* container;
    // Field size check
    static_assert(sizeof(Zenject::DiContainer*) == 0x8);
    // [InjectAttribute] Offset: 0xE24F74
    // private AdditionalContentModel _additionalContentModel
    // Size: 0x8
    // Offset: 0x90
    GlobalNamespace::AdditionalContentModel* additionalContentModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::AdditionalContentModel*) == 0x8);
    // [InjectAttribute] Offset: 0xE24F84
    // private SongPreviewPlayer _songPreviewPlayer
    // Size: 0x8
    // Offset: 0x98
    GlobalNamespace::SongPreviewPlayer* songPreviewPlayer;
    // Field size check
    static_assert(sizeof(GlobalNamespace::SongPreviewPlayer*) == 0x8);
    // [InjectAttribute] Offset: 0xE24F94
    // private DataModels.Levels.PerceivedLoudnessPerLevelModel _perceivedLoudnessPerLevelModel
    // Size: 0x8
    // Offset: 0xA0
    DataModels::Levels::PerceivedLoudnessPerLevelModel* perceivedLoudnessPerLevelModel;
    // Field size check
    static_assert(sizeof(DataModels::Levels::PerceivedLoudnessPerLevelModel*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xE24FA4
    // private System.Action`2<LevelCollectionViewController,IPreviewBeatmapLevel> didSelectLevelEvent
    // Size: 0x8
    // Offset: 0xA8
    System::Action_2<GlobalNamespace::LevelCollectionViewController*, GlobalNamespace::IPreviewBeatmapLevel*>* didSelectLevelEvent;
    // Field size check
    static_assert(sizeof(System::Action_2<GlobalNamespace::LevelCollectionViewController*, GlobalNamespace::IPreviewBeatmapLevel*>*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xE24FB4
    // private System.Action`1<LevelCollectionViewController> didSelectHeaderEvent
    // Size: 0x8
    // Offset: 0xB0
    System::Action_1<GlobalNamespace::LevelCollectionViewController*>* didSelectHeaderEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<GlobalNamespace::LevelCollectionViewController*>*) == 0x8);
    // private System.Boolean _showHeader
    // Size: 0x1
    // Offset: 0xB8
    bool showHeader;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: showHeader and: cancellationTokenSource
    char __padding9[0x7] = {};
    // private System.Threading.CancellationTokenSource _cancellationTokenSource
    // Size: 0x8
    // Offset: 0xC0
    System::Threading::CancellationTokenSource* cancellationTokenSource;
    // Field size check
    static_assert(sizeof(System::Threading::CancellationTokenSource*) == 0x8);
    // private System.String _songPlayerCrossfadignToLevelId
    // Size: 0x8
    // Offset: 0xC8
    ::Il2CppString* songPlayerCrossfadignToLevelId;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private UnityEngine.GameObject _noDataInfoGO
    // Size: 0x8
    // Offset: 0xD0
    UnityEngine::GameObject* noDataInfoGO;
    // Field size check
    static_assert(sizeof(UnityEngine::GameObject*) == 0x8);
    // private IPreviewBeatmapLevel _previewBeatmapLevelToBeSelected
    // Size: 0x8
    // Offset: 0xD8
    GlobalNamespace::IPreviewBeatmapLevel* previewBeatmapLevelToBeSelected;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IPreviewBeatmapLevel*) == 0x8);
    // Creating value type constructor for type: LevelCollectionViewController
    LevelCollectionViewController(GlobalNamespace::LevelCollectionTableView* levelCollectionTableView_ = {}, UnityEngine::RectTransform* noDataInfoContainer_ = {}, GlobalNamespace::PlayerDataModel* playerDataModel_ = {}, Zenject::DiContainer* container_ = {}, GlobalNamespace::AdditionalContentModel* additionalContentModel_ = {}, GlobalNamespace::SongPreviewPlayer* songPreviewPlayer_ = {}, DataModels::Levels::PerceivedLoudnessPerLevelModel* perceivedLoudnessPerLevelModel_ = {}, System::Action_2<GlobalNamespace::LevelCollectionViewController*, GlobalNamespace::IPreviewBeatmapLevel*>* didSelectLevelEvent_ = {}, System::Action_1<GlobalNamespace::LevelCollectionViewController*>* didSelectHeaderEvent_ = {}, bool showHeader_ = {}, System::Threading::CancellationTokenSource* cancellationTokenSource_ = {}, ::Il2CppString* songPlayerCrossfadignToLevelId_ = {}, UnityEngine::GameObject* noDataInfoGO_ = {}, GlobalNamespace::IPreviewBeatmapLevel* previewBeatmapLevelToBeSelected_ = {}) noexcept : levelCollectionTableView{levelCollectionTableView_}, noDataInfoContainer{noDataInfoContainer_}, playerDataModel{playerDataModel_}, container{container_}, additionalContentModel{additionalContentModel_}, songPreviewPlayer{songPreviewPlayer_}, perceivedLoudnessPerLevelModel{perceivedLoudnessPerLevelModel_}, didSelectLevelEvent{didSelectLevelEvent_}, didSelectHeaderEvent{didSelectHeaderEvent_}, showHeader{showHeader_}, cancellationTokenSource{cancellationTokenSource_}, songPlayerCrossfadignToLevelId{songPlayerCrossfadignToLevelId_}, noDataInfoGO{noDataInfoGO_}, previewBeatmapLevelToBeSelected{previewBeatmapLevelToBeSelected_} {}
    // public System.Void add_didSelectLevelEvent(System.Action`2<LevelCollectionViewController,IPreviewBeatmapLevel> value)
    // Offset: 0x10CA078
    void add_didSelectLevelEvent(System::Action_2<GlobalNamespace::LevelCollectionViewController*, GlobalNamespace::IPreviewBeatmapLevel*>* value);
    // public System.Void remove_didSelectLevelEvent(System.Action`2<LevelCollectionViewController,IPreviewBeatmapLevel> value)
    // Offset: 0x10CA484
    void remove_didSelectLevelEvent(System::Action_2<GlobalNamespace::LevelCollectionViewController*, GlobalNamespace::IPreviewBeatmapLevel*>* value);
    // public System.Void add_didSelectHeaderEvent(System.Action`1<LevelCollectionViewController> value)
    // Offset: 0x10CA11C
    void add_didSelectHeaderEvent(System::Action_1<GlobalNamespace::LevelCollectionViewController*>* value);
    // public System.Void remove_didSelectHeaderEvent(System.Action`1<LevelCollectionViewController> value)
    // Offset: 0x10CA528
    void remove_didSelectHeaderEvent(System::Action_1<GlobalNamespace::LevelCollectionViewController*>* value);
    // public System.Void SetData(IBeatmapLevelCollection beatmapLevelCollection, System.String headerText, UnityEngine.Sprite headerSprite, System.Boolean sortLevels, UnityEngine.GameObject noDataInfoPrefab)
    // Offset: 0x10CA5CC
    void SetData(GlobalNamespace::IBeatmapLevelCollection* beatmapLevelCollection, ::Il2CppString* headerText, UnityEngine::Sprite* headerSprite, bool sortLevels, UnityEngine::GameObject* noDataInfoPrefab);
    // public System.Void SelectLevel(IPreviewBeatmapLevel beatmapLevel)
    // Offset: 0x10C9BFC
    void SelectLevel(GlobalNamespace::IPreviewBeatmapLevel* beatmapLevel);
    // public System.Void RefreshFavorites()
    // Offset: 0x10CB0CC
    void RefreshFavorites();
    // private System.Void HandleLevelCollectionTableViewDidSelectLevel(LevelCollectionTableView tableView, IPreviewBeatmapLevel level)
    // Offset: 0x10CCAF4
    void HandleLevelCollectionTableViewDidSelectLevel(GlobalNamespace::LevelCollectionTableView* tableView, GlobalNamespace::IPreviewBeatmapLevel* level);
    // private System.Void SongPlayerCrossfadeToLevelAsync(IPreviewBeatmapLevel level)
    // Offset: 0x10CCB7C
    void SongPlayerCrossfadeToLevelAsync(GlobalNamespace::IPreviewBeatmapLevel* level);
    // private System.Void HandleLevelCollectionTableViewDidSelectPack(LevelCollectionTableView tableView)
    // Offset: 0x10CCC40
    void HandleLevelCollectionTableViewDidSelectPack(GlobalNamespace::LevelCollectionTableView* tableView);
    // private System.Void HandleAdditionalContentModelDidInvalidateData()
    // Offset: 0x10CCCB8
    void HandleAdditionalContentModelDidInvalidateData();
    // protected override System.Void DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    // Offset: 0x10CC834
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);
    // protected override System.Void DidDeactivate(System.Boolean removedFromHierarchy, System.Boolean screenSystemDisabling)
    // Offset: 0x10CC99C
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidDeactivate(System.Boolean removedFromHierarchy, System.Boolean screenSystemDisabling)
    void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling);
    // public System.Void .ctor()
    // Offset: 0x10CCCD0
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LevelCollectionViewController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::LevelCollectionViewController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LevelCollectionViewController*, creationType>()));
    }
  }; // LevelCollectionViewController
  #pragma pack(pop)
  static check_size<sizeof(LevelCollectionViewController), 216 + sizeof(GlobalNamespace::IPreviewBeatmapLevel*)> __GlobalNamespace_LevelCollectionViewControllerSizeCheck;
  static_assert(sizeof(LevelCollectionViewController) == 0xE0);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LevelCollectionViewController*, "", "LevelCollectionViewController");
// Writing MetadataGetter for method: GlobalNamespace::LevelCollectionViewController::add_didSelectLevelEvent
// Il2CppName: add_didSelectLevelEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LevelCollectionViewController::*)(System::Action_2<GlobalNamespace::LevelCollectionViewController*, GlobalNamespace::IPreviewBeatmapLevel*>*)>(&GlobalNamespace::LevelCollectionViewController::add_didSelectLevelEvent)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LevelCollectionViewController*), "add_didSelectLevelEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Action_2<GlobalNamespace::LevelCollectionViewController*, GlobalNamespace::IPreviewBeatmapLevel*>*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LevelCollectionViewController::remove_didSelectLevelEvent
// Il2CppName: remove_didSelectLevelEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LevelCollectionViewController::*)(System::Action_2<GlobalNamespace::LevelCollectionViewController*, GlobalNamespace::IPreviewBeatmapLevel*>*)>(&GlobalNamespace::LevelCollectionViewController::remove_didSelectLevelEvent)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LevelCollectionViewController*), "remove_didSelectLevelEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Action_2<GlobalNamespace::LevelCollectionViewController*, GlobalNamespace::IPreviewBeatmapLevel*>*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LevelCollectionViewController::add_didSelectHeaderEvent
// Il2CppName: add_didSelectHeaderEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LevelCollectionViewController::*)(System::Action_1<GlobalNamespace::LevelCollectionViewController*>*)>(&GlobalNamespace::LevelCollectionViewController::add_didSelectHeaderEvent)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LevelCollectionViewController*), "add_didSelectHeaderEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Action_1<GlobalNamespace::LevelCollectionViewController*>*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LevelCollectionViewController::remove_didSelectHeaderEvent
// Il2CppName: remove_didSelectHeaderEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LevelCollectionViewController::*)(System::Action_1<GlobalNamespace::LevelCollectionViewController*>*)>(&GlobalNamespace::LevelCollectionViewController::remove_didSelectHeaderEvent)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LevelCollectionViewController*), "remove_didSelectHeaderEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Action_1<GlobalNamespace::LevelCollectionViewController*>*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LevelCollectionViewController::SetData
// Il2CppName: SetData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LevelCollectionViewController::*)(GlobalNamespace::IBeatmapLevelCollection*, ::Il2CppString*, UnityEngine::Sprite*, bool, UnityEngine::GameObject*)>(&GlobalNamespace::LevelCollectionViewController::SetData)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LevelCollectionViewController*), "SetData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<GlobalNamespace::IBeatmapLevelCollection*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Sprite*>(), ::il2cpp_utils::ExtractIndependentType<bool>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::GameObject*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LevelCollectionViewController::SelectLevel
// Il2CppName: SelectLevel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LevelCollectionViewController::*)(GlobalNamespace::IPreviewBeatmapLevel*)>(&GlobalNamespace::LevelCollectionViewController::SelectLevel)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LevelCollectionViewController*), "SelectLevel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<GlobalNamespace::IPreviewBeatmapLevel*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LevelCollectionViewController::RefreshFavorites
// Il2CppName: RefreshFavorites
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LevelCollectionViewController::*)()>(&GlobalNamespace::LevelCollectionViewController::RefreshFavorites)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LevelCollectionViewController*), "RefreshFavorites", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LevelCollectionViewController::HandleLevelCollectionTableViewDidSelectLevel
// Il2CppName: HandleLevelCollectionTableViewDidSelectLevel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LevelCollectionViewController::*)(GlobalNamespace::LevelCollectionTableView*, GlobalNamespace::IPreviewBeatmapLevel*)>(&GlobalNamespace::LevelCollectionViewController::HandleLevelCollectionTableViewDidSelectLevel)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LevelCollectionViewController*), "HandleLevelCollectionTableViewDidSelectLevel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<GlobalNamespace::LevelCollectionTableView*>(), ::il2cpp_utils::ExtractIndependentType<GlobalNamespace::IPreviewBeatmapLevel*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LevelCollectionViewController::SongPlayerCrossfadeToLevelAsync
// Il2CppName: SongPlayerCrossfadeToLevelAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LevelCollectionViewController::*)(GlobalNamespace::IPreviewBeatmapLevel*)>(&GlobalNamespace::LevelCollectionViewController::SongPlayerCrossfadeToLevelAsync)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LevelCollectionViewController*), "SongPlayerCrossfadeToLevelAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<GlobalNamespace::IPreviewBeatmapLevel*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LevelCollectionViewController::HandleLevelCollectionTableViewDidSelectPack
// Il2CppName: HandleLevelCollectionTableViewDidSelectPack
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LevelCollectionViewController::*)(GlobalNamespace::LevelCollectionTableView*)>(&GlobalNamespace::LevelCollectionViewController::HandleLevelCollectionTableViewDidSelectPack)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LevelCollectionViewController*), "HandleLevelCollectionTableViewDidSelectPack", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<GlobalNamespace::LevelCollectionTableView*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LevelCollectionViewController::HandleAdditionalContentModelDidInvalidateData
// Il2CppName: HandleAdditionalContentModelDidInvalidateData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LevelCollectionViewController::*)()>(&GlobalNamespace::LevelCollectionViewController::HandleAdditionalContentModelDidInvalidateData)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LevelCollectionViewController*), "HandleAdditionalContentModelDidInvalidateData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LevelCollectionViewController::DidActivate
// Il2CppName: DidActivate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LevelCollectionViewController::*)(bool, bool, bool)>(&GlobalNamespace::LevelCollectionViewController::DidActivate)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LevelCollectionViewController*), "DidActivate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<bool>(), ::il2cpp_utils::ExtractIndependentType<bool>(), ::il2cpp_utils::ExtractIndependentType<bool>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LevelCollectionViewController::DidDeactivate
// Il2CppName: DidDeactivate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LevelCollectionViewController::*)(bool, bool)>(&GlobalNamespace::LevelCollectionViewController::DidDeactivate)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LevelCollectionViewController*), "DidDeactivate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<bool>(), ::il2cpp_utils::ExtractIndependentType<bool>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LevelCollectionViewController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
