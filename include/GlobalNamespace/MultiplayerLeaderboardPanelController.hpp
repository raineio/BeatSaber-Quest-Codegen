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
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MultiplayerLeaderboardPanelItem
  class MultiplayerLeaderboardPanelItem;
  // Forward declaring type: MultiplayerScoreProvider
  class MultiplayerScoreProvider;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: MultiplayerLeaderboardPanelController
  class MultiplayerLeaderboardPanelController;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::MultiplayerLeaderboardPanelController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerLeaderboardPanelController*, "", "MultiplayerLeaderboardPanelController");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: MultiplayerLeaderboardPanelController
  // [TokenAttribute] Offset: FFFFFFFF
  class MultiplayerLeaderboardPanelController : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private MultiplayerLeaderboardPanelItem[] _items
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<::GlobalNamespace::MultiplayerLeaderboardPanelItem*> items;
    // Field size check
    static_assert(sizeof(::ArrayW<::GlobalNamespace::MultiplayerLeaderboardPanelItem*>) == 0x8);
    // [InjectAttribute] Offset: 0x1121458
    // private readonly MultiplayerScoreProvider _scoreProvider
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::MultiplayerScoreProvider* scoreProvider;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::MultiplayerScoreProvider*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private MultiplayerLeaderboardPanelItem[] _items
    [[deprecated("Use field access instead!")]] ::ArrayW<::GlobalNamespace::MultiplayerLeaderboardPanelItem*>& dyn__items();
    // Get instance field reference: private readonly MultiplayerScoreProvider _scoreProvider
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::MultiplayerScoreProvider*& dyn__scoreProvider();
    // public System.Void .ctor()
    // Offset: 0x1474F28
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerLeaderboardPanelController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MultiplayerLeaderboardPanelController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerLeaderboardPanelController*, creationType>()));
    }
    // protected System.Void Start()
    // Offset: 0x14748F0
    void Start();
    // protected System.Void Update()
    // Offset: 0x1474994
    void Update();
  }; // MultiplayerLeaderboardPanelController
  #pragma pack(pop)
  static check_size<sizeof(MultiplayerLeaderboardPanelController), 32 + sizeof(::GlobalNamespace::MultiplayerScoreProvider*)> __GlobalNamespace_MultiplayerLeaderboardPanelControllerSizeCheck;
  static_assert(sizeof(MultiplayerLeaderboardPanelController) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLeaderboardPanelController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLeaderboardPanelController::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLeaderboardPanelController::*)()>(&GlobalNamespace::MultiplayerLeaderboardPanelController::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLeaderboardPanelController*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLeaderboardPanelController::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLeaderboardPanelController::*)()>(&GlobalNamespace::MultiplayerLeaderboardPanelController::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLeaderboardPanelController*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
