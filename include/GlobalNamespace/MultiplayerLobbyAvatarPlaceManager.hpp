// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: MultiplayerLobbyAvatarPlace
#include "GlobalNamespace/MultiplayerLobbyAvatarPlace.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: ILobbyStateDataModel
  class ILobbyStateDataModel;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: MultiplayerLobbyAvatarPlaceManager
  class MultiplayerLobbyAvatarPlaceManager;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::MultiplayerLobbyAvatarPlaceManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerLobbyAvatarPlaceManager*, "", "MultiplayerLobbyAvatarPlaceManager");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: MultiplayerLobbyAvatarPlaceManager
  // [TokenAttribute] Offset: FFFFFFFF
  class MultiplayerLobbyAvatarPlaceManager : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // [InjectAttribute] Offset: 0x111989C
    // private readonly ILobbyStateDataModel _lobbyStateDataModel
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::ILobbyStateDataModel* lobbyStateDataModel;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::ILobbyStateDataModel*) == 0x8);
    // [InjectAttribute] Offset: 0x11198AC
    // private readonly MultiplayerLobbyAvatarPlace/Pool _avatarPlacesPool
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::MultiplayerLobbyAvatarPlace::Pool* avatarPlacesPool;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::MultiplayerLobbyAvatarPlace::Pool*) == 0x8);
    // private readonly System.Collections.Generic.List`1<MultiplayerLobbyAvatarPlace> _allPlaces
    // Size: 0x8
    // Offset: 0x28
    ::System::Collections::Generic::List_1<::GlobalNamespace::MultiplayerLobbyAvatarPlace*>* allPlaces;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::GlobalNamespace::MultiplayerLobbyAvatarPlace*>*) == 0x8);
    // private System.Single _innerCircleRadius
    // Size: 0x4
    // Offset: 0x30
    float innerCircleRadius;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _minOuterCircleRadius
    // Size: 0x4
    // Offset: 0x34
    float minOuterCircleRadius;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private readonly ILobbyStateDataModel _lobbyStateDataModel
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::ILobbyStateDataModel*& dyn__lobbyStateDataModel();
    // Get instance field reference: private readonly MultiplayerLobbyAvatarPlace/Pool _avatarPlacesPool
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::MultiplayerLobbyAvatarPlace::Pool*& dyn__avatarPlacesPool();
    // Get instance field reference: private readonly System.Collections.Generic.List`1<MultiplayerLobbyAvatarPlace> _allPlaces
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::GlobalNamespace::MultiplayerLobbyAvatarPlace*>*& dyn__allPlaces();
    // Get instance field reference: private System.Single _innerCircleRadius
    [[deprecated("Use field access instead!")]] float& dyn__innerCircleRadius();
    // Get instance field reference: private System.Single _minOuterCircleRadius
    [[deprecated("Use field access instead!")]] float& dyn__minOuterCircleRadius();
    // public System.Void .ctor()
    // Offset: 0x1479E90
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerLobbyAvatarPlaceManager* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MultiplayerLobbyAvatarPlaceManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerLobbyAvatarPlaceManager*, creationType>()));
    }
    // public System.Void Activate(System.Single innerCircleRadius, System.Single minOuterCircleRadius)
    // Offset: 0x14798C8
    void Activate(float innerCircleRadius, float minOuterCircleRadius);
    // public System.Void Deactivate()
    // Offset: 0x1479D60
    void Deactivate();
    // private System.Void OnDestroy()
    // Offset: 0x1479E8C
    void OnDestroy();
    // private System.Void SpawnAllPlaces()
    // Offset: 0x14798D0
    void SpawnAllPlaces();
    // private System.Void DespawnAllPlaces()
    // Offset: 0x1479D64
    void DespawnAllPlaces();
  }; // MultiplayerLobbyAvatarPlaceManager
  #pragma pack(pop)
  static check_size<sizeof(MultiplayerLobbyAvatarPlaceManager), 52 + sizeof(float)> __GlobalNamespace_MultiplayerLobbyAvatarPlaceManagerSizeCheck;
  static_assert(sizeof(MultiplayerLobbyAvatarPlaceManager) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLobbyAvatarPlaceManager::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLobbyAvatarPlaceManager::Activate
// Il2CppName: Activate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLobbyAvatarPlaceManager::*)(float, float)>(&GlobalNamespace::MultiplayerLobbyAvatarPlaceManager::Activate)> {
  static const MethodInfo* get() {
    static auto* innerCircleRadius = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* minOuterCircleRadius = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLobbyAvatarPlaceManager*), "Activate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{innerCircleRadius, minOuterCircleRadius});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLobbyAvatarPlaceManager::Deactivate
// Il2CppName: Deactivate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLobbyAvatarPlaceManager::*)()>(&GlobalNamespace::MultiplayerLobbyAvatarPlaceManager::Deactivate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLobbyAvatarPlaceManager*), "Deactivate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLobbyAvatarPlaceManager::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLobbyAvatarPlaceManager::*)()>(&GlobalNamespace::MultiplayerLobbyAvatarPlaceManager::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLobbyAvatarPlaceManager*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLobbyAvatarPlaceManager::SpawnAllPlaces
// Il2CppName: SpawnAllPlaces
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLobbyAvatarPlaceManager::*)()>(&GlobalNamespace::MultiplayerLobbyAvatarPlaceManager::SpawnAllPlaces)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLobbyAvatarPlaceManager*), "SpawnAllPlaces", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLobbyAvatarPlaceManager::DespawnAllPlaces
// Il2CppName: DespawnAllPlaces
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLobbyAvatarPlaceManager::*)()>(&GlobalNamespace::MultiplayerLobbyAvatarPlaceManager::DespawnAllPlaces)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLobbyAvatarPlaceManager*), "DespawnAllPlaces", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
