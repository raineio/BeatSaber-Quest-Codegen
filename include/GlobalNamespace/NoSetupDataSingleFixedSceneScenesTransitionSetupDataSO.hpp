// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: SingleFixedSceneScenesTransitionSetupDataSO
#include "GlobalNamespace/SingleFixedSceneScenesTransitionSetupDataSO.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: NoSetupDataSingleFixedSceneScenesTransitionSetupDataSO
  class NoSetupDataSingleFixedSceneScenesTransitionSetupDataSO;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(GlobalNamespace::NoSetupDataSingleFixedSceneScenesTransitionSetupDataSO);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::NoSetupDataSingleFixedSceneScenesTransitionSetupDataSO*, "", "NoSetupDataSingleFixedSceneScenesTransitionSetupDataSO");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: NoSetupDataSingleFixedSceneScenesTransitionSetupDataSO
  // [TokenAttribute] Offset: FFFFFFFF
  class NoSetupDataSingleFixedSceneScenesTransitionSetupDataSO : public GlobalNamespace::SingleFixedSceneScenesTransitionSetupDataSO {
    public:
    // public System.Void Init()
    // Offset: 0x139CDF8
    void Init();
    // public System.Void .ctor()
    // Offset: 0x139CE04
    // Implemented from: SingleFixedSceneScenesTransitionSetupDataSO
    // Base method: System.Void SingleFixedSceneScenesTransitionSetupDataSO::.ctor()
    // Base method: System.Void ScenesTransitionSetupDataSO::.ctor()
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NoSetupDataSingleFixedSceneScenesTransitionSetupDataSO* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::NoSetupDataSingleFixedSceneScenesTransitionSetupDataSO::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NoSetupDataSingleFixedSceneScenesTransitionSetupDataSO*, creationType>()));
    }
  }; // NoSetupDataSingleFixedSceneScenesTransitionSetupDataSO
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::NoSetupDataSingleFixedSceneScenesTransitionSetupDataSO::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoSetupDataSingleFixedSceneScenesTransitionSetupDataSO::*)()>(&GlobalNamespace::NoSetupDataSingleFixedSceneScenesTransitionSetupDataSO::Init)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoSetupDataSingleFixedSceneScenesTransitionSetupDataSO*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoSetupDataSingleFixedSceneScenesTransitionSetupDataSO::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
