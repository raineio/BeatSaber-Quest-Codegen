// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: BeatSaberAPI.DataTransferObjects.LevelScoreResult/GameplayModifiers
#include "BeatSaberAPI/DataTransferObjects/LevelScoreResult.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: GameplayModifiers
  class GameplayModifiers;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: GameplayModifiersHelper
  class GameplayModifiersHelper : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: GameplayModifiersHelper
    GameplayModifiersHelper() noexcept {}
    // static public BeatSaberAPI.DataTransferObjects.LevelScoreResult/GameplayModifiers[] ToDTO(GameplayModifiers gameplayModifiers)
    // Offset: 0x108A40C
    static ::Array<BeatSaberAPI::DataTransferObjects::LevelScoreResult::GameplayModifiers>* ToDTO(GlobalNamespace::GameplayModifiers* gameplayModifiers);
    // static public GameplayModifiers FromDTO(BeatSaberAPI.DataTransferObjects.LevelScoreResult/GameplayModifiers[] gameplayModifiersDTOs)
    // Offset: 0x108A718
    static GlobalNamespace::GameplayModifiers* FromDTO(::Array<BeatSaberAPI::DataTransferObjects::LevelScoreResult::GameplayModifiers>* gameplayModifiersDTOs);
  }; // GameplayModifiersHelper
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GameplayModifiersHelper*, "", "GameplayModifiersHelper");
// Writing MetadataGetter for method: GlobalNamespace::GameplayModifiersHelper::ToDTO
// Il2CppName: ToDTO
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<BeatSaberAPI::DataTransferObjects::LevelScoreResult::GameplayModifiers>* (*)(GlobalNamespace::GameplayModifiers*)>(&GlobalNamespace::GameplayModifiersHelper::ToDTO)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameplayModifiersHelper*), "ToDTO", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<GlobalNamespace::GameplayModifiers*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameplayModifiersHelper::FromDTO
// Il2CppName: FromDTO
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::GameplayModifiers* (*)(::Array<BeatSaberAPI::DataTransferObjects::LevelScoreResult::GameplayModifiers>*)>(&GlobalNamespace::GameplayModifiersHelper::FromDTO)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameplayModifiersHelper*), "FromDTO", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<BeatSaberAPI::DataTransferObjects::LevelScoreResult::GameplayModifiers>*>()});
  }
};
