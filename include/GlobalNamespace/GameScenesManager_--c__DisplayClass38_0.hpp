// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: GameScenesManager
#include "GlobalNamespace/GameScenesManager.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: ScenesTransitionSetupDataSO
  class ScenesTransitionSetupDataSO;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::GameScenesManager::$$c__DisplayClass38_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameScenesManager::$$c__DisplayClass38_0*, "", "GameScenesManager/<>c__DisplayClass38_0");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: GameScenesManager/<>c__DisplayClass38_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class GameScenesManager::$$c__DisplayClass38_0 : public ::Il2CppObject {
    public:
    public:
    // public ScenesTransitionSetupDataSO newScenesTransitionSetupData
    // Size: 0x8
    // Offset: 0x10
    ::GlobalNamespace::ScenesTransitionSetupDataSO* newScenesTransitionSetupData;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::ScenesTransitionSetupDataSO*) == 0x8);
    public:
    // Creating conversion operator: operator ::GlobalNamespace::ScenesTransitionSetupDataSO*
    constexpr operator ::GlobalNamespace::ScenesTransitionSetupDataSO*() const noexcept {
      return newScenesTransitionSetupData;
    }
    // Get instance field reference: public ScenesTransitionSetupDataSO newScenesTransitionSetupData
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::ScenesTransitionSetupDataSO*& dyn_newScenesTransitionSetupData();
    // public System.Void .ctor()
    // Offset: 0x16256FC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GameScenesManager::$$c__DisplayClass38_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::GameScenesManager::$$c__DisplayClass38_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GameScenesManager::$$c__DisplayClass38_0*, creationType>()));
    }
    // System.Boolean <ScenesTransitionCoroutine>b__0()
    // Offset: 0x1625704
    bool $ScenesTransitionCoroutine$b__0();
    // System.Boolean <ScenesTransitionCoroutine>b__1()
    // Offset: 0x1625728
    bool $ScenesTransitionCoroutine$b__1();
  }; // GameScenesManager/<>c__DisplayClass38_0
  #pragma pack(pop)
  static check_size<sizeof(GameScenesManager::$$c__DisplayClass38_0), 16 + sizeof(::GlobalNamespace::ScenesTransitionSetupDataSO*)> __GlobalNamespace_GameScenesManager_$$c__DisplayClass38_0SizeCheck;
  static_assert(sizeof(GameScenesManager::$$c__DisplayClass38_0) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::GameScenesManager::$$c__DisplayClass38_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::GameScenesManager::$$c__DisplayClass38_0::$ScenesTransitionCoroutine$b__0
// Il2CppName: <ScenesTransitionCoroutine>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::GameScenesManager::$$c__DisplayClass38_0::*)()>(&GlobalNamespace::GameScenesManager::$$c__DisplayClass38_0::$ScenesTransitionCoroutine$b__0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameScenesManager::$$c__DisplayClass38_0*), "<ScenesTransitionCoroutine>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameScenesManager::$$c__DisplayClass38_0::$ScenesTransitionCoroutine$b__1
// Il2CppName: <ScenesTransitionCoroutine>b__1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::GameScenesManager::$$c__DisplayClass38_0::*)()>(&GlobalNamespace::GameScenesManager::$$c__DisplayClass38_0::$ScenesTransitionCoroutine$b__1)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameScenesManager::$$c__DisplayClass38_0*), "<ScenesTransitionCoroutine>b__1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
