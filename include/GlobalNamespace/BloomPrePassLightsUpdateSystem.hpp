// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: BloomPrePassLightsUpdateSystem
  class BloomPrePassLightsUpdateSystem : public UnityEngine::MonoBehaviour {
    public:
    // Creating value type constructor for type: BloomPrePassLightsUpdateSystem
    BloomPrePassLightsUpdateSystem() noexcept {}
    // protected System.Void LateUpdate()
    // Offset: 0x1D8710C
    void LateUpdate();
    // public System.Void .ctor()
    // Offset: 0x1D873B8
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BloomPrePassLightsUpdateSystem* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BloomPrePassLightsUpdateSystem::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BloomPrePassLightsUpdateSystem*, creationType>()));
    }
  }; // BloomPrePassLightsUpdateSystem
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BloomPrePassLightsUpdateSystem*, "", "BloomPrePassLightsUpdateSystem");
// Writing MetadataGetter for method: GlobalNamespace::BloomPrePassLightsUpdateSystem::LateUpdate
// Il2CppName: LateUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BloomPrePassLightsUpdateSystem::*)()>(&GlobalNamespace::BloomPrePassLightsUpdateSystem::LateUpdate)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BloomPrePassLightsUpdateSystem*), "LateUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BloomPrePassLightsUpdateSystem::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
