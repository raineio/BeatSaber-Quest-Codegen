// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
// Including type: System.Single
#include "System/Single.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: PlayerDataModel
  class PlayerDataModel;
  // Forward declaring type: IDifficultyBeatmap
  class IDifficultyBeatmap;
  // Forward declaring type: MultiplayerBadgesModelSO
  class MultiplayerBadgesModelSO;
  // Forward declaring type: MultiplayerPlayerResultsData
  class MultiplayerPlayerResultsData;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IReadOnlyList`1<T>
  template<typename T>
  class IReadOnlyList_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: MultiplayerBadgesProvider
  // [TokenAttribute] Offset: FFFFFFFF
  class MultiplayerBadgesProvider : public ::Il2CppObject {
    public:
    // Nested type: GlobalNamespace::MultiplayerBadgesProvider::$$c
    class $$c;
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    private:
    #endif
    // [InjectAttribute] Offset: 0xF08308
    // private readonly PlayerDataModel _playerDataModel
    // Size: 0x8
    // Offset: 0x10
    GlobalNamespace::PlayerDataModel* playerDataModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PlayerDataModel*) == 0x8);
    // [InjectAttribute] Offset: 0xF08318
    // private readonly IDifficultyBeatmap _difficultyBeatmap
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IDifficultyBeatmap*) == 0x8);
    // [InjectAttribute] Offset: 0xF08328
    // private readonly MultiplayerBadgesModelSO _multiplayerBadgesModel
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::MultiplayerBadgesModelSO* multiplayerBadgesModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerBadgesModelSO*) == 0x8);
    public:
    // static field const value: static private System.Int32 kTargetPositiveBadgesCount
    static constexpr const int kTargetPositiveBadgesCount = 2;
    // Get static field: static private System.Int32 kTargetPositiveBadgesCount
    static int _get_kTargetPositiveBadgesCount();
    // Set static field: static private System.Int32 kTargetPositiveBadgesCount
    static void _set_kTargetPositiveBadgesCount(int value);
    // static field const value: static private System.Int32 kTargetNegativeBadgesCount
    static constexpr const int kTargetNegativeBadgesCount = 1;
    // Get static field: static private System.Int32 kTargetNegativeBadgesCount
    static int _get_kTargetNegativeBadgesCount();
    // Set static field: static private System.Int32 kTargetNegativeBadgesCount
    static void _set_kTargetNegativeBadgesCount(int value);
    // static field const value: static private System.Single kMinRandomMultiplierAmount
    static constexpr const float kMinRandomMultiplierAmount = 0.8;
    // Get static field: static private System.Single kMinRandomMultiplierAmount
    static float _get_kMinRandomMultiplierAmount();
    // Set static field: static private System.Single kMinRandomMultiplierAmount
    static void _set_kMinRandomMultiplierAmount(float value);
    // static field const value: static private System.Single kMaxRandomMultiplierAmount
    static constexpr const float kMaxRandomMultiplierAmount = 1.2;
    // Get static field: static private System.Single kMaxRandomMultiplierAmount
    static float _get_kMaxRandomMultiplierAmount();
    // Set static field: static private System.Single kMaxRandomMultiplierAmount
    static void _set_kMaxRandomMultiplierAmount(float value);
    // Get instance field reference: private readonly PlayerDataModel _playerDataModel
    GlobalNamespace::PlayerDataModel*& dyn__playerDataModel();
    // Get instance field reference: private readonly IDifficultyBeatmap _difficultyBeatmap
    GlobalNamespace::IDifficultyBeatmap*& dyn__difficultyBeatmap();
    // Get instance field reference: private readonly MultiplayerBadgesModelSO _multiplayerBadgesModel
    GlobalNamespace::MultiplayerBadgesModelSO*& dyn__multiplayerBadgesModel();
    // public System.Void SelectBadgesAndPutThemIntoResults(System.Collections.Generic.IReadOnlyList`1<MultiplayerPlayerResultsData> playerResults)
    // Offset: 0x120BC28
    void SelectBadgesAndPutThemIntoResults(System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::MultiplayerPlayerResultsData*>* playerResults);
    // public System.Void .ctor()
    // Offset: 0x120CDBC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerBadgesProvider* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MultiplayerBadgesProvider::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerBadgesProvider*, creationType>()));
    }
  }; // MultiplayerBadgesProvider
  #pragma pack(pop)
  static check_size<sizeof(MultiplayerBadgesProvider), 32 + sizeof(GlobalNamespace::MultiplayerBadgesModelSO*)> __GlobalNamespace_MultiplayerBadgesProviderSizeCheck;
  static_assert(sizeof(MultiplayerBadgesProvider) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerBadgesProvider*, "", "MultiplayerBadgesProvider");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerBadgesProvider::SelectBadgesAndPutThemIntoResults
// Il2CppName: SelectBadgesAndPutThemIntoResults
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerBadgesProvider::*)(System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::MultiplayerPlayerResultsData*>*)>(&GlobalNamespace::MultiplayerBadgesProvider::SelectBadgesAndPutThemIntoResults)> {
  static const MethodInfo* get() {
    static auto* playerResults = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IReadOnlyList`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "MultiplayerPlayerResultsData")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerBadgesProvider*), "SelectBadgesAndPutThemIntoResults", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{playerResults});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerBadgesProvider::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
