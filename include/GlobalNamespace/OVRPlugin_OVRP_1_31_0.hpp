// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVRPlugin
#include "GlobalNamespace/OVRPlugin.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Version
  class Version;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Vector4
  struct Vector4;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: OVRPlugin/OVRP_1_31_0
  class OVRPlugin::OVRP_1_31_0 : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: OVRP_1_31_0
    OVRP_1_31_0() noexcept {}
    // Get static field: static public readonly System.Version version
    static System::Version* _get_version();
    // Set static field: static public readonly System.Version version
    static void _set_version(System::Version* value);
    // static public OVRPlugin/Result ovrp_GetTimeInSeconds(out System.Double value)
    // Offset: 0x16215B4
    static GlobalNamespace::OVRPlugin::Result ovrp_GetTimeInSeconds(double& value);
    // static public OVRPlugin/Result ovrp_SetColorScaleAndOffset(UnityEngine.Vector4 colorScale, UnityEngine.Vector4 colorOffset, OVRPlugin/Bool applyToAllLayers)
    // Offset: 0x1621634
    static GlobalNamespace::OVRPlugin::Result ovrp_SetColorScaleAndOffset(UnityEngine::Vector4 colorScale, UnityEngine::Vector4 colorOffset, GlobalNamespace::OVRPlugin::Bool applyToAllLayers);
    // static private System.Void .cctor()
    // Offset: 0x1621714
    static void _cctor();
  }; // OVRPlugin/OVRP_1_31_0
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRPlugin::OVRP_1_31_0*, "", "OVRPlugin/OVRP_1_31_0");
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_31_0::ovrp_GetTimeInSeconds
// Il2CppName: ovrp_GetTimeInSeconds
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::OVRPlugin::Result (*)(double&)>(&GlobalNamespace::OVRPlugin::OVRP_1_31_0::ovrp_GetTimeInSeconds)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_31_0*), "ovrp_GetTimeInSeconds", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<double&>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_31_0::ovrp_SetColorScaleAndOffset
// Il2CppName: ovrp_SetColorScaleAndOffset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::OVRPlugin::Result (*)(UnityEngine::Vector4, UnityEngine::Vector4, GlobalNamespace::OVRPlugin::Bool)>(&GlobalNamespace::OVRPlugin::OVRP_1_31_0::ovrp_SetColorScaleAndOffset)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_31_0*), "ovrp_SetColorScaleAndOffset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector4>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector4>(), ::il2cpp_utils::ExtractIndependentType<GlobalNamespace::OVRPlugin::Bool>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_31_0::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::OVRPlugin::OVRP_1_31_0::_cctor)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_31_0*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
