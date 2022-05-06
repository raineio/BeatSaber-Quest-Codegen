// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.ResourceManagement.Util.ComponentSingleton`1
#include "UnityEngine/ResourceManagement/Util/ComponentSingleton_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: MonoBehaviourCallbackHooks
  class MonoBehaviourCallbackHooks;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::MonoBehaviourCallbackHooks);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MonoBehaviourCallbackHooks*, "", "MonoBehaviourCallbackHooks");
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: MonoBehaviourCallbackHooks
  // [TokenAttribute] Offset: FFFFFFFF
  class MonoBehaviourCallbackHooks : public ::UnityEngine::ResourceManagement::Util::ComponentSingleton_1<::GlobalNamespace::MonoBehaviourCallbackHooks*> {
    public:
    public:
    // System.Action`1<System.Single> m_OnUpdateDelegate
    // Size: 0x8
    // Offset: 0x18
    ::System::Action_1<float>* m_OnUpdateDelegate;
    // Field size check
    static_assert(sizeof(::System::Action_1<float>*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: System.Action`1<System.Single> m_OnUpdateDelegate
    [[deprecated("Use field access instead!")]] ::System::Action_1<float>*& dyn_m_OnUpdateDelegate();
    // public System.Void add_OnUpdateDelegate(System.Action`1<System.Single> value)
    // Offset: 0x1EE170C
    void add_OnUpdateDelegate(::System::Action_1<float>* value);
    // public System.Void remove_OnUpdateDelegate(System.Action`1<System.Single> value)
    // Offset: 0x1EE178C
    void remove_OnUpdateDelegate(::System::Action_1<float>* value);
    // System.Void Update()
    // Offset: 0x1EE1854
    void Update();
    // public System.Void .ctor()
    // Offset: 0x1EE18C0
    // Implemented from: UnityEngine.ResourceManagement.Util.ComponentSingleton`1
    // Base method: System.Void ComponentSingleton_1::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MonoBehaviourCallbackHooks* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MonoBehaviourCallbackHooks::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MonoBehaviourCallbackHooks*, creationType>()));
    }
    // protected override System.String GetGameObjectName()
    // Offset: 0x1EE180C
    // Implemented from: UnityEngine.ResourceManagement.Util.ComponentSingleton`1
    // Base method: System.String ComponentSingleton_1::GetGameObjectName()
    ::StringW GetGameObjectName();
  }; // MonoBehaviourCallbackHooks
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MonoBehaviourCallbackHooks::add_OnUpdateDelegate
// Il2CppName: add_OnUpdateDelegate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MonoBehaviourCallbackHooks::*)(::System::Action_1<float>*)>(&GlobalNamespace::MonoBehaviourCallbackHooks::add_OnUpdateDelegate)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Single")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MonoBehaviourCallbackHooks*), "add_OnUpdateDelegate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MonoBehaviourCallbackHooks::remove_OnUpdateDelegate
// Il2CppName: remove_OnUpdateDelegate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MonoBehaviourCallbackHooks::*)(::System::Action_1<float>*)>(&GlobalNamespace::MonoBehaviourCallbackHooks::remove_OnUpdateDelegate)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Single")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MonoBehaviourCallbackHooks*), "remove_OnUpdateDelegate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MonoBehaviourCallbackHooks::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MonoBehaviourCallbackHooks::*)()>(&GlobalNamespace::MonoBehaviourCallbackHooks::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MonoBehaviourCallbackHooks*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MonoBehaviourCallbackHooks::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::MonoBehaviourCallbackHooks::GetGameObjectName
// Il2CppName: GetGameObjectName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::MonoBehaviourCallbackHooks::*)()>(&GlobalNamespace::MonoBehaviourCallbackHooks::GetGameObjectName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MonoBehaviourCallbackHooks*), "GetGameObjectName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
