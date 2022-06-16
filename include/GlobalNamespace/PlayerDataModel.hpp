// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: PlayerDataFileManagerSO
  class PlayerDataFileManagerSO;
  // Forward declaring type: PlayerData
  class PlayerData;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: PlayerDataModel
  class PlayerDataModel;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::PlayerDataModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlayerDataModel*, "", "PlayerDataModel");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: PlayerDataModel
  // [TokenAttribute] Offset: FFFFFFFF
  class PlayerDataModel : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private PlayerDataFileManagerSO _playerDataFileManager
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::PlayerDataFileManagerSO* playerDataFileManager;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::PlayerDataFileManagerSO*) == 0x8);
    // private PlayerData _playerData
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::PlayerData* playerData;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::PlayerData*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private PlayerDataFileManagerSO _playerDataFileManager
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::PlayerDataFileManagerSO*& dyn__playerDataFileManager();
    // Get instance field reference: private PlayerData _playerData
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::PlayerData*& dyn__playerData();
    // public PlayerDataFileManagerSO get_playerDataFileManager()
    // Offset: 0x13DA3DC
    ::GlobalNamespace::PlayerDataFileManagerSO* get_playerDataFileManager();
    // public PlayerData get_playerData()
    // Offset: 0x13DA3E4
    ::GlobalNamespace::PlayerData* get_playerData();
    // public System.Void .ctor()
    // Offset: 0x13DA480
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlayerDataModel* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::PlayerDataModel::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlayerDataModel*, creationType>()));
    }
    // protected System.Void OnEnable()
    // Offset: 0x13DA3EC
    void OnEnable();
    // protected System.Void OnApplicationPause(System.Boolean pauseStatus)
    // Offset: 0x13DA420
    void OnApplicationPause(bool pauseStatus);
    // protected System.Void OnDisable()
    // Offset: 0x13DA44C
    void OnDisable();
    // public System.Void ResetData()
    // Offset: 0x13DA450
    void ResetData();
    // public System.Void Save()
    // Offset: 0x13DA42C
    void Save();
    // public System.Void Load()
    // Offset: 0x13DA3F0
    void Load();
  }; // PlayerDataModel
  #pragma pack(pop)
  static check_size<sizeof(PlayerDataModel), 32 + sizeof(::GlobalNamespace::PlayerData*)> __GlobalNamespace_PlayerDataModelSizeCheck;
  static_assert(sizeof(PlayerDataModel) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::PlayerDataModel::get_playerDataFileManager
// Il2CppName: get_playerDataFileManager
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::PlayerDataFileManagerSO* (GlobalNamespace::PlayerDataModel::*)()>(&GlobalNamespace::PlayerDataModel::get_playerDataFileManager)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerDataModel*), "get_playerDataFileManager", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerDataModel::get_playerData
// Il2CppName: get_playerData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::PlayerData* (GlobalNamespace::PlayerDataModel::*)()>(&GlobalNamespace::PlayerDataModel::get_playerData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerDataModel*), "get_playerData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerDataModel::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::PlayerDataModel::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayerDataModel::*)()>(&GlobalNamespace::PlayerDataModel::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerDataModel*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerDataModel::OnApplicationPause
// Il2CppName: OnApplicationPause
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayerDataModel::*)(bool)>(&GlobalNamespace::PlayerDataModel::OnApplicationPause)> {
  static const MethodInfo* get() {
    static auto* pauseStatus = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerDataModel*), "OnApplicationPause", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pauseStatus});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerDataModel::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayerDataModel::*)()>(&GlobalNamespace::PlayerDataModel::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerDataModel*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerDataModel::ResetData
// Il2CppName: ResetData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayerDataModel::*)()>(&GlobalNamespace::PlayerDataModel::ResetData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerDataModel*), "ResetData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerDataModel::Save
// Il2CppName: Save
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayerDataModel::*)()>(&GlobalNamespace::PlayerDataModel::Save)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerDataModel*), "Save", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerDataModel::Load
// Il2CppName: Load
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayerDataModel::*)()>(&GlobalNamespace::PlayerDataModel::Load)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerDataModel*), "Load", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
