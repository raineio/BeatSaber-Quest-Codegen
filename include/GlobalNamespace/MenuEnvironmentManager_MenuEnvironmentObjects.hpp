// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: MenuEnvironmentManager
#include "GlobalNamespace/MenuEnvironmentManager.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Completed forward declares
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(GlobalNamespace::MenuEnvironmentManager::MenuEnvironmentObjects);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MenuEnvironmentManager::MenuEnvironmentObjects*, "", "MenuEnvironmentManager/MenuEnvironmentObjects");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: MenuEnvironmentManager/MenuEnvironmentObjects
  // [TokenAttribute] Offset: FFFFFFFF
  class MenuEnvironmentManager::MenuEnvironmentObjects : public ::Il2CppObject {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private MenuEnvironmentManager/MenuEnvironmentType _menuEnvironmentType
    // Size: 0x4
    // Offset: 0x10
    GlobalNamespace::MenuEnvironmentManager::MenuEnvironmentType menuEnvironmentType;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MenuEnvironmentManager::MenuEnvironmentType) == 0x4);
    // Padding between fields: menuEnvironmentType and: wrapper
    char __padding0[0x4] = {};
    // private UnityEngine.GameObject _wrapper
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::GameObject* wrapper;
    // Field size check
    static_assert(sizeof(UnityEngine::GameObject*) == 0x8);
    public:
    // Get instance field reference: private MenuEnvironmentManager/MenuEnvironmentType _menuEnvironmentType
    GlobalNamespace::MenuEnvironmentManager::MenuEnvironmentType& dyn__menuEnvironmentType();
    // Get instance field reference: private UnityEngine.GameObject _wrapper
    UnityEngine::GameObject*& dyn__wrapper();
    // public MenuEnvironmentManager/MenuEnvironmentType get_menuEnvironmentType()
    // Offset: 0x115ACAC
    GlobalNamespace::MenuEnvironmentManager::MenuEnvironmentType get_menuEnvironmentType();
    // public UnityEngine.GameObject get_wrapper()
    // Offset: 0x115ACB4
    UnityEngine::GameObject* get_wrapper();
    // public System.Void .ctor()
    // Offset: 0x115ACBC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MenuEnvironmentManager::MenuEnvironmentObjects* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MenuEnvironmentManager::MenuEnvironmentObjects::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MenuEnvironmentManager::MenuEnvironmentObjects*, creationType>()));
    }
  }; // MenuEnvironmentManager/MenuEnvironmentObjects
  #pragma pack(pop)
  static check_size<sizeof(MenuEnvironmentManager::MenuEnvironmentObjects), 24 + sizeof(UnityEngine::GameObject*)> __GlobalNamespace_MenuEnvironmentManager_MenuEnvironmentObjectsSizeCheck;
  static_assert(sizeof(MenuEnvironmentManager::MenuEnvironmentObjects) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MenuEnvironmentManager::MenuEnvironmentObjects::get_menuEnvironmentType
// Il2CppName: get_menuEnvironmentType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::MenuEnvironmentManager::MenuEnvironmentType (GlobalNamespace::MenuEnvironmentManager::MenuEnvironmentObjects::*)()>(&GlobalNamespace::MenuEnvironmentManager::MenuEnvironmentObjects::get_menuEnvironmentType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MenuEnvironmentManager::MenuEnvironmentObjects*), "get_menuEnvironmentType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MenuEnvironmentManager::MenuEnvironmentObjects::get_wrapper
// Il2CppName: get_wrapper
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::GameObject* (GlobalNamespace::MenuEnvironmentManager::MenuEnvironmentObjects::*)()>(&GlobalNamespace::MenuEnvironmentManager::MenuEnvironmentObjects::get_wrapper)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MenuEnvironmentManager::MenuEnvironmentObjects*), "get_wrapper", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MenuEnvironmentManager::MenuEnvironmentObjects::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
