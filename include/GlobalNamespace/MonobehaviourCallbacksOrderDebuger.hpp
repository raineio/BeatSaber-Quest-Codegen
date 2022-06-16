// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: MonobehaviourCallbacksOrderDebuger
  class MonobehaviourCallbacksOrderDebuger;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::MonobehaviourCallbacksOrderDebuger);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MonobehaviourCallbacksOrderDebuger*, "", "MonobehaviourCallbacksOrderDebuger");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: MonobehaviourCallbacksOrderDebuger
  // [TokenAttribute] Offset: FFFFFFFF
  class MonobehaviourCallbacksOrderDebuger : public ::UnityEngine::MonoBehaviour {
    public:
    // public System.Void .ctor()
    // Offset: 0x15AC20C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MonobehaviourCallbacksOrderDebuger* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MonobehaviourCallbacksOrderDebuger::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MonobehaviourCallbacksOrderDebuger*, creationType>()));
    }
    // protected System.Void Awake()
    // Offset: 0x15AC014
    void Awake();
    // protected System.Void OnEnable()
    // Offset: 0x15AC0BC
    void OnEnable();
    // protected System.Void Start()
    // Offset: 0x15AC164
    void Start();
  }; // MonobehaviourCallbacksOrderDebuger
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MonobehaviourCallbacksOrderDebuger::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::MonobehaviourCallbacksOrderDebuger::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MonobehaviourCallbacksOrderDebuger::*)()>(&GlobalNamespace::MonobehaviourCallbacksOrderDebuger::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MonobehaviourCallbacksOrderDebuger*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MonobehaviourCallbacksOrderDebuger::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MonobehaviourCallbacksOrderDebuger::*)()>(&GlobalNamespace::MonobehaviourCallbacksOrderDebuger::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MonobehaviourCallbacksOrderDebuger*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MonobehaviourCallbacksOrderDebuger::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MonobehaviourCallbacksOrderDebuger::*)()>(&GlobalNamespace::MonobehaviourCallbacksOrderDebuger::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MonobehaviourCallbacksOrderDebuger*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
