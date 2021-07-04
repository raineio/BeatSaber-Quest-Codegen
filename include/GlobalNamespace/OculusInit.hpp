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
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: OculusDeeplinkManager
  class OculusDeeplinkManager;
  // Forward declaring type: DlcPromoExperimentModel
  class DlcPromoExperimentModel;
}
// Forward declaring namespace: Oculus::Platform
namespace Oculus::Platform {
  // Forward declaring type: Message`1<T>
  template<typename T>
  class Message_1;
}
// Forward declaring namespace: Oculus::Platform::Models
namespace Oculus::Platform::Models {
  // Forward declaring type: PlatformInitialize
  class PlatformInitialize;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: OculusInit
  class OculusInit : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::OculusInit::$$c
    class $$c;
    // [InjectOptionalAttribute] Offset: 0xE14988
    // private OculusDeeplinkManager _oculusDeeplinkManager
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::OculusDeeplinkManager* oculusDeeplinkManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::OculusDeeplinkManager*) == 0x8);
    // [InjectAttribute] Offset: 0xE14998
    // private DlcPromoExperimentModel _dlcPromoExperimentModel
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::DlcPromoExperimentModel* dlcPromoExperimentModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::DlcPromoExperimentModel*) == 0x8);
    // Creating value type constructor for type: OculusInit
    OculusInit(GlobalNamespace::OculusDeeplinkManager* oculusDeeplinkManager_ = {}, GlobalNamespace::DlcPromoExperimentModel* dlcPromoExperimentModel_ = {}) noexcept : oculusDeeplinkManager{oculusDeeplinkManager_}, dlcPromoExperimentModel{dlcPromoExperimentModel_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Void Init()
    // Offset: 0x11E5A84
    void Init();
    // private System.Void InitCallback(Oculus.Platform.Message`1<Oculus.Platform.Models.PlatformInitialize> msg)
    // Offset: 0x11E5C58
    void InitCallback(Oculus::Platform::Message_1<Oculus::Platform::Models::PlatformInitialize*>* msg);
    // public System.Void .ctor()
    // Offset: 0x11E5DFC
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OculusInit* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::OculusInit::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OculusInit*, creationType>()));
    }
  }; // OculusInit
  #pragma pack(pop)
  static check_size<sizeof(OculusInit), 32 + sizeof(GlobalNamespace::DlcPromoExperimentModel*)> __GlobalNamespace_OculusInitSizeCheck;
  static_assert(sizeof(OculusInit) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OculusInit*, "", "OculusInit");
// Writing MetadataGetter for method: GlobalNamespace::OculusInit::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OculusInit::*)()>(&GlobalNamespace::OculusInit::Init)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OculusInit*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OculusInit::InitCallback
// Il2CppName: InitCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OculusInit::*)(Oculus::Platform::Message_1<Oculus::Platform::Models::PlatformInitialize*>*)>(&GlobalNamespace::OculusInit::InitCallback)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OculusInit*), "InitCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<Oculus::Platform::Message_1<Oculus::Platform::Models::PlatformInitialize*>*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OculusInit::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
