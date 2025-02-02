// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: MenuRpcManager
#include "GlobalNamespace/MenuRpcManager.hpp"
// Including type: RemoteProcedureCall`1
#include "GlobalNamespace/RemoteProcedureCall_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: GameplayModifiers
  class GameplayModifiers;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::MenuRpcManager::RecommendGameplayModifiersRpc);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MenuRpcManager::RecommendGameplayModifiersRpc*, "", "MenuRpcManager/RecommendGameplayModifiersRpc");
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: MenuRpcManager/RecommendGameplayModifiersRpc
  // [TokenAttribute] Offset: FFFFFFFF
  class MenuRpcManager::RecommendGameplayModifiersRpc : public ::GlobalNamespace::RemoteProcedureCall_1<::GlobalNamespace::GameplayModifiers*> {
    public:
    // public System.Void .ctor()
    // Offset: 0x1752FEC
    // Implemented from: RemoteProcedureCall`1
    // Base method: System.Void RemoteProcedureCall_1::.ctor()
    // Base method: System.Void RemoteProcedureCall::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MenuRpcManager::RecommendGameplayModifiersRpc* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MenuRpcManager::RecommendGameplayModifiersRpc::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MenuRpcManager::RecommendGameplayModifiersRpc*, creationType>()));
    }
  }; // MenuRpcManager/RecommendGameplayModifiersRpc
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MenuRpcManager::RecommendGameplayModifiersRpc::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
