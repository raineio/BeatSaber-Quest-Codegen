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
  // Forward declaring type: MissionNode
  class MissionNode;
  // Forward declaring type: GameplayModifiersModelSO
  class GameplayModifiersModelSO;
  // Forward declaring type: CampaignProgressModel
  class CampaignProgressModel;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: MissionNodeGizmos
  class MissionNodeGizmos;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::MissionNodeGizmos);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MissionNodeGizmos*, "", "MissionNodeGizmos");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: MissionNodeGizmos
  // [TokenAttribute] Offset: FFFFFFFF
  class MissionNodeGizmos : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private MissionNode _missionNode
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::MissionNode* missionNode;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::MissionNode*) == 0x8);
    // private GameplayModifiersModelSO _gameplayModifiersModel
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::GameplayModifiersModelSO* gameplayModifiersModel;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::GameplayModifiersModelSO*) == 0x8);
    // [InjectAttribute] Offset: 0x10E1654
    // private CampaignProgressModel _missionProgressModel
    // Size: 0x8
    // Offset: 0x28
    ::GlobalNamespace::CampaignProgressModel* missionProgressModel;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::CampaignProgressModel*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private MissionNode _missionNode
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::MissionNode*& dyn__missionNode();
    // Get instance field reference: private GameplayModifiersModelSO _gameplayModifiersModel
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::GameplayModifiersModelSO*& dyn__gameplayModifiersModel();
    // Get instance field reference: private CampaignProgressModel _missionProgressModel
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::CampaignProgressModel*& dyn__missionProgressModel();
    // public System.Void .ctor()
    // Offset: 0x1307AD0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MissionNodeGizmos* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MissionNodeGizmos::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MissionNodeGizmos*, creationType>()));
    }
  }; // MissionNodeGizmos
  #pragma pack(pop)
  static check_size<sizeof(MissionNodeGizmos), 40 + sizeof(::GlobalNamespace::CampaignProgressModel*)> __GlobalNamespace_MissionNodeGizmosSizeCheck;
  static_assert(sizeof(MissionNodeGizmos) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MissionNodeGizmos::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
