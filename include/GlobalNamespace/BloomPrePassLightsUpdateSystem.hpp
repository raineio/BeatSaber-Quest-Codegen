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
  // Forward declaring type: BloomPrePassLightsUpdateSystem
  class BloomPrePassLightsUpdateSystem;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::BloomPrePassLightsUpdateSystem);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BloomPrePassLightsUpdateSystem*, "", "BloomPrePassLightsUpdateSystem");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: BloomPrePassLightsUpdateSystem
  // [TokenAttribute] Offset: FFFFFFFF
  class BloomPrePassLightsUpdateSystem : public ::UnityEngine::MonoBehaviour {
    public:
    // public System.Void .ctor()
    // Offset: 0x1CD2E2C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BloomPrePassLightsUpdateSystem* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::BloomPrePassLightsUpdateSystem::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BloomPrePassLightsUpdateSystem*, creationType>()));
    }
    // protected System.Void LateUpdate()
    // Offset: 0x1CD2B80
    void LateUpdate();
  }; // BloomPrePassLightsUpdateSystem
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BloomPrePassLightsUpdateSystem::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::BloomPrePassLightsUpdateSystem::LateUpdate
// Il2CppName: LateUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BloomPrePassLightsUpdateSystem::*)()>(&GlobalNamespace::BloomPrePassLightsUpdateSystem::LateUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BloomPrePassLightsUpdateSystem*), "LateUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
