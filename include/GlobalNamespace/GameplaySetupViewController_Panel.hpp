// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: GameplaySetupViewController
#include "GlobalNamespace/GameplaySetupViewController.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IRefreshable
  class IRefreshable;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::GameplaySetupViewController::Panel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameplaySetupViewController::Panel*, "", "GameplaySetupViewController/Panel");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: GameplaySetupViewController/Panel
  // [TokenAttribute] Offset: FFFFFFFF
  class GameplaySetupViewController::Panel : public ::Il2CppObject {
    public:
    public:
    // public readonly System.String title
    // Size: 0x8
    // Offset: 0x10
    ::StringW title;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public readonly IRefreshable refreshable
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::IRefreshable* refreshable;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::IRefreshable*) == 0x8);
    // public readonly UnityEngine.GameObject gameObject
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::GameObject* gameObject;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    public:
    // Get instance field reference: public readonly System.String title
    [[deprecated("Use field access instead!")]] ::StringW& dyn_title();
    // Get instance field reference: public readonly IRefreshable refreshable
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::IRefreshable*& dyn_refreshable();
    // Get instance field reference: public readonly UnityEngine.GameObject gameObject
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn_gameObject();
    // public System.Void .ctor(System.String title, IRefreshable refreshable, UnityEngine.GameObject gameObject)
    // Offset: 0x13FAE3C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GameplaySetupViewController::Panel* New_ctor(::StringW title, ::GlobalNamespace::IRefreshable* refreshable, ::UnityEngine::GameObject* gameObject) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::GameplaySetupViewController::Panel::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GameplaySetupViewController::Panel*, creationType>(title, refreshable, gameObject)));
    }
  }; // GameplaySetupViewController/Panel
  #pragma pack(pop)
  static check_size<sizeof(GameplaySetupViewController::Panel), 32 + sizeof(::UnityEngine::GameObject*)> __GlobalNamespace_GameplaySetupViewController_PanelSizeCheck;
  static_assert(sizeof(GameplaySetupViewController::Panel) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::GameplaySetupViewController::Panel::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
