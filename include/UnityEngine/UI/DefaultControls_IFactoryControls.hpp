// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include <initializer_list>
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.UI.DefaultControls
#include "UnityEngine/UI/DefaultControls.hpp"
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(UnityEngine::UI::DefaultControls::IFactoryControls);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::DefaultControls::IFactoryControls*, "UnityEngine.UI", "DefaultControls/IFactoryControls");
// Type namespace: UnityEngine.UI
namespace UnityEngine::UI {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UI.DefaultControls/UnityEngine.UI.IFactoryControls
  // [TokenAttribute] Offset: FFFFFFFF
  class DefaultControls::IFactoryControls {
    public:
    // public UnityEngine.GameObject CreateGameObject(System.String name, params System.Type[] components)
    // Offset: 0xFFFFFFFF
    UnityEngine::GameObject* CreateGameObject(::Il2CppString* name, ::ArrayW<System::Type*> components);
  }; // UnityEngine.UI.DefaultControls/UnityEngine.UI.IFactoryControls
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UI::DefaultControls::IFactoryControls::CreateGameObject
// Il2CppName: CreateGameObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::GameObject* (UnityEngine::UI::DefaultControls::IFactoryControls::*)(::Il2CppString*, ::ArrayW<System::Type*>)>(&UnityEngine::UI::DefaultControls::IFactoryControls::CreateGameObject)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* components = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Type"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::DefaultControls::IFactoryControls*), "CreateGameObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, components});
  }
};
