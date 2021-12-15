// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: RankModel
#include "GlobalNamespace/RankModel.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: GameplayModifiers
  class GameplayModifiers;
  // Forward declaring type: GameplayModifiersModelSO
  class GameplayModifiersModelSO;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: RankModelHelper
  class RankModelHelper;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(GlobalNamespace::RankModelHelper);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::RankModelHelper*, "", "RankModelHelper");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: RankModelHelper
  // [TokenAttribute] Offset: FFFFFFFF
  class RankModelHelper : public ::Il2CppObject {
    public:
    // static public RankModel/Rank MaxRankForGameplayModifiers(GameplayModifiers gameplayModifiers, GameplayModifiersModelSO gameplayModifiersModel, System.Single energy)
    // Offset: 0x11B3C64
    static GlobalNamespace::RankModel::Rank MaxRankForGameplayModifiers(GlobalNamespace::GameplayModifiers* gameplayModifiers, GlobalNamespace::GameplayModifiersModelSO* gameplayModifiersModel, float energy);
  }; // RankModelHelper
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::RankModelHelper::MaxRankForGameplayModifiers
// Il2CppName: MaxRankForGameplayModifiers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::RankModel::Rank (*)(GlobalNamespace::GameplayModifiers*, GlobalNamespace::GameplayModifiersModelSO*, float)>(&GlobalNamespace::RankModelHelper::MaxRankForGameplayModifiers)> {
  static const MethodInfo* get() {
    static auto* gameplayModifiers = &::il2cpp_utils::GetClassFromName("", "GameplayModifiers")->byval_arg;
    static auto* gameplayModifiersModel = &::il2cpp_utils::GetClassFromName("", "GameplayModifiersModelSO")->byval_arg;
    static auto* energy = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RankModelHelper*), "MaxRankForGameplayModifiers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{gameplayModifiers, gameplayModifiersModel, energy});
  }
};
