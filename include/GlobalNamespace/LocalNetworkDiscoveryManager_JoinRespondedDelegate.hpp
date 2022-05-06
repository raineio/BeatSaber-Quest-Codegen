// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: LocalNetworkDiscoveryManager
#include "GlobalNamespace/LocalNetworkDiscoveryManager.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BeatmapLevelSelectionMask
  struct BeatmapLevelSelectionMask;
  // Forward declaring type: GameplayServerConfiguration
  struct GameplayServerConfiguration;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::LocalNetworkDiscoveryManager::JoinRespondedDelegate);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LocalNetworkDiscoveryManager::JoinRespondedDelegate*, "", "LocalNetworkDiscoveryManager/JoinRespondedDelegate");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: LocalNetworkDiscoveryManager/JoinRespondedDelegate
  // [TokenAttribute] Offset: FFFFFFFF
  class LocalNetworkDiscoveryManager::JoinRespondedDelegate : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1562E80
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LocalNetworkDiscoveryManager::JoinRespondedDelegate* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::LocalNetworkDiscoveryManager::JoinRespondedDelegate::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LocalNetworkDiscoveryManager::JoinRespondedDelegate*, creationType>(object, method)));
    }
    // public System.Void Invoke(System.String userId, System.String secret, System.Int32 multiplayerPort, System.Boolean blocked, System.Boolean isPartyOwner, BeatmapLevelSelectionMask selectionMask, GameplayServerConfiguration configuration)
    // Offset: 0x15612D0
    void Invoke(::StringW userId, ::StringW secret, int multiplayerPort, bool blocked, bool isPartyOwner, ::GlobalNamespace::BeatmapLevelSelectionMask selectionMask, ::GlobalNamespace::GameplayServerConfiguration configuration);
    // public System.IAsyncResult BeginInvoke(System.String userId, System.String secret, System.Int32 multiplayerPort, System.Boolean blocked, System.Boolean isPartyOwner, BeatmapLevelSelectionMask selectionMask, GameplayServerConfiguration configuration, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1562E90
    ::System::IAsyncResult* BeginInvoke(::StringW userId, ::StringW secret, int multiplayerPort, bool blocked, bool isPartyOwner, ::GlobalNamespace::BeatmapLevelSelectionMask selectionMask, ::GlobalNamespace::GameplayServerConfiguration configuration, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x1562FB4
    void EndInvoke(::System::IAsyncResult* result);
  }; // LocalNetworkDiscoveryManager/JoinRespondedDelegate
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::LocalNetworkDiscoveryManager::JoinRespondedDelegate::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::LocalNetworkDiscoveryManager::JoinRespondedDelegate::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LocalNetworkDiscoveryManager::JoinRespondedDelegate::*)(::StringW, ::StringW, int, bool, bool, ::GlobalNamespace::BeatmapLevelSelectionMask, ::GlobalNamespace::GameplayServerConfiguration)>(&GlobalNamespace::LocalNetworkDiscoveryManager::JoinRespondedDelegate::Invoke)> {
  static const MethodInfo* get() {
    static auto* userId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* secret = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* multiplayerPort = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* blocked = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* isPartyOwner = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* selectionMask = &::il2cpp_utils::GetClassFromName("", "BeatmapLevelSelectionMask")->byval_arg;
    static auto* configuration = &::il2cpp_utils::GetClassFromName("", "GameplayServerConfiguration")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LocalNetworkDiscoveryManager::JoinRespondedDelegate*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{userId, secret, multiplayerPort, blocked, isPartyOwner, selectionMask, configuration});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LocalNetworkDiscoveryManager::JoinRespondedDelegate::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (GlobalNamespace::LocalNetworkDiscoveryManager::JoinRespondedDelegate::*)(::StringW, ::StringW, int, bool, bool, ::GlobalNamespace::BeatmapLevelSelectionMask, ::GlobalNamespace::GameplayServerConfiguration, ::System::AsyncCallback*, ::Il2CppObject*)>(&GlobalNamespace::LocalNetworkDiscoveryManager::JoinRespondedDelegate::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* userId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* secret = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* multiplayerPort = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* blocked = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* isPartyOwner = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* selectionMask = &::il2cpp_utils::GetClassFromName("", "BeatmapLevelSelectionMask")->byval_arg;
    static auto* configuration = &::il2cpp_utils::GetClassFromName("", "GameplayServerConfiguration")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LocalNetworkDiscoveryManager::JoinRespondedDelegate*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{userId, secret, multiplayerPort, blocked, isPartyOwner, selectionMask, configuration, callback, object});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LocalNetworkDiscoveryManager::JoinRespondedDelegate::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LocalNetworkDiscoveryManager::JoinRespondedDelegate::*)(::System::IAsyncResult*)>(&GlobalNamespace::LocalNetworkDiscoveryManager::JoinRespondedDelegate::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LocalNetworkDiscoveryManager::JoinRespondedDelegate*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
