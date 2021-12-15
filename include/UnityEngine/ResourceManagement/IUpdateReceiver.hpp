// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Type namespace: UnityEngine.ResourceManagement
namespace UnityEngine::ResourceManagement {
  // Forward declaring type: IUpdateReceiver
  class IUpdateReceiver;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(UnityEngine::ResourceManagement::IUpdateReceiver);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ResourceManagement::IUpdateReceiver*, "UnityEngine.ResourceManagement", "IUpdateReceiver");
// Type namespace: UnityEngine.ResourceManagement
namespace UnityEngine::ResourceManagement {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ResourceManagement.IUpdateReceiver
  // [TokenAttribute] Offset: FFFFFFFF
  class IUpdateReceiver {
    public:
    // public System.Void Update(System.Single unscaledDeltaTime)
    // Offset: 0xFFFFFFFF
    void Update(float unscaledDeltaTime);
  }; // UnityEngine.ResourceManagement.IUpdateReceiver
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::IUpdateReceiver::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::IUpdateReceiver::*)(float)>(&UnityEngine::ResourceManagement::IUpdateReceiver::Update)> {
  static const MethodInfo* get() {
    static auto* unscaledDeltaTime = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::IUpdateReceiver*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{unscaledDeltaTime});
  }
};
