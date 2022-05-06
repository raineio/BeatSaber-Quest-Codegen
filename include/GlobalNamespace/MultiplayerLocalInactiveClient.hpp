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
  // Forward declaring type: PlayerTransforms
  class PlayerTransforms;
  // Forward declaring type: INodePoseSyncStateManager
  class INodePoseSyncStateManager;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: MultiplayerLocalInactiveClient
  class MultiplayerLocalInactiveClient;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::MultiplayerLocalInactiveClient);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerLocalInactiveClient*, "", "MultiplayerLocalInactiveClient");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: MultiplayerLocalInactiveClient
  // [TokenAttribute] Offset: FFFFFFFF
  class MultiplayerLocalInactiveClient : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // [InjectAttribute] Offset: 0x10D8C18
    // private readonly PlayerTransforms _playerTransforms
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::PlayerTransforms* playerTransforms;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::PlayerTransforms*) == 0x8);
    // [InjectAttribute] Offset: 0x10D8C28
    // private readonly INodePoseSyncStateManager _nodePoseSyncStateManager
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::INodePoseSyncStateManager* nodePoseSyncStateManager;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::INodePoseSyncStateManager*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private readonly PlayerTransforms _playerTransforms
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::PlayerTransforms*& dyn__playerTransforms();
    // Get instance field reference: private readonly INodePoseSyncStateManager _nodePoseSyncStateManager
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::INodePoseSyncStateManager*& dyn__nodePoseSyncStateManager();
    // public System.Void .ctor()
    // Offset: 0x139414C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerLocalInactiveClient* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MultiplayerLocalInactiveClient::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerLocalInactiveClient*, creationType>()));
    }
    // protected System.Void LateUpdate()
    // Offset: 0x1393DC4
    void LateUpdate();
  }; // MultiplayerLocalInactiveClient
  #pragma pack(pop)
  static check_size<sizeof(MultiplayerLocalInactiveClient), 32 + sizeof(::GlobalNamespace::INodePoseSyncStateManager*)> __GlobalNamespace_MultiplayerLocalInactiveClientSizeCheck;
  static_assert(sizeof(MultiplayerLocalInactiveClient) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalInactiveClient::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalInactiveClient::LateUpdate
// Il2CppName: LateUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLocalInactiveClient::*)()>(&GlobalNamespace::MultiplayerLocalInactiveClient::LateUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLocalInactiveClient*), "LateUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
