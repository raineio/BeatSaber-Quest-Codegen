// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Forward declaring type: IHasDefault
  class IHasDefault;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(UnityEngine::ProBuilder::IHasDefault);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::IHasDefault*, "UnityEngine.ProBuilder", "IHasDefault");
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ProBuilder.IHasDefault
  // [TokenAttribute] Offset: FFFFFFFF
  class IHasDefault {
    public:
    // public System.Void SetDefaultValues()
    // Offset: 0xFFFFFFFF
    void SetDefaultValues();
  }; // UnityEngine.ProBuilder.IHasDefault
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ProBuilder::IHasDefault::SetDefaultValues
// Il2CppName: SetDefaultValues
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::IHasDefault::*)()>(&UnityEngine::ProBuilder::IHasDefault::SetDefaultValues)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::IHasDefault*), "SetDefaultValues", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
