// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: GameplayModifiersPanelController
#include "GlobalNamespace/GameplayModifiersPanelController.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: GameplayModifierToggle
  class GameplayModifierToggle;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::GameplayModifiersPanelController::$$c__DisplayClass16_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameplayModifiersPanelController::$$c__DisplayClass16_0*, "", "GameplayModifiersPanelController/<>c__DisplayClass16_0");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: GameplayModifiersPanelController/<>c__DisplayClass16_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class GameplayModifiersPanelController::$$c__DisplayClass16_0 : public ::Il2CppObject {
    public:
    public:
    // public GameplayModifierToggle gameplayModifierToggle
    // Size: 0x8
    // Offset: 0x10
    ::GlobalNamespace::GameplayModifierToggle* gameplayModifierToggle;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::GameplayModifierToggle*) == 0x8);
    // public GameplayModifiersPanelController <>4__this
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::GameplayModifiersPanelController* $$4__this;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::GameplayModifiersPanelController*) == 0x8);
    public:
    // Get instance field reference: public GameplayModifierToggle gameplayModifierToggle
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::GameplayModifierToggle*& dyn_gameplayModifierToggle();
    // Get instance field reference: public GameplayModifiersPanelController <>4__this
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::GameplayModifiersPanelController*& dyn_$$4__this();
    // public System.Void .ctor()
    // Offset: 0x14623E8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GameplayModifiersPanelController::$$c__DisplayClass16_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::GameplayModifiersPanelController::$$c__DisplayClass16_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GameplayModifiersPanelController::$$c__DisplayClass16_0*, creationType>()));
    }
    // System.Void <Awake>b__0(System.Boolean on)
    // Offset: 0x1462864
    void $Awake$b__0(bool on);
  }; // GameplayModifiersPanelController/<>c__DisplayClass16_0
  #pragma pack(pop)
  static check_size<sizeof(GameplayModifiersPanelController::$$c__DisplayClass16_0), 24 + sizeof(::GlobalNamespace::GameplayModifiersPanelController*)> __GlobalNamespace_GameplayModifiersPanelController_$$c__DisplayClass16_0SizeCheck;
  static_assert(sizeof(GameplayModifiersPanelController::$$c__DisplayClass16_0) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::GameplayModifiersPanelController::$$c__DisplayClass16_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::GameplayModifiersPanelController::$$c__DisplayClass16_0::$Awake$b__0
// Il2CppName: <Awake>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameplayModifiersPanelController::$$c__DisplayClass16_0::*)(bool)>(&GlobalNamespace::GameplayModifiersPanelController::$$c__DisplayClass16_0::$Awake$b__0)> {
  static const MethodInfo* get() {
    static auto* on = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameplayModifiersPanelController::$$c__DisplayClass16_0*), "<Awake>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{on});
  }
};
