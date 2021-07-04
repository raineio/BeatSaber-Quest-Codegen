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
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: OVRPlugin/OVRP_1_12_0
  class OVRPlugin::OVRP_1_12_0 : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: OVRP_1_12_0
    OVRP_1_12_0() noexcept {}
    // Get static field: static public readonly System.Version version
    static System::Version* _get_version();
    // Set static field: static public readonly System.Version version
    static void _set_version(System::Version* value);
    // static public System.Single ovrp_GetAppFramerate()
    // Offset: 0x161D8FC
    static float ovrp_GetAppFramerate();
    // static public OVRPlugin/PoseStatef ovrp_GetNodePoseState(OVRPlugin/Step stepId, OVRPlugin/Node nodeId)
    // Offset: 0x161D96C
    static GlobalNamespace::OVRPlugin::PoseStatef ovrp_GetNodePoseState(GlobalNamespace::OVRPlugin::Step stepId, GlobalNamespace::OVRPlugin::Node nodeId);
    // static public OVRPlugin/ControllerState2 ovrp_GetControllerState2(System.UInt32 controllerMask)
    // Offset: 0x161DA04
    static GlobalNamespace::OVRPlugin::ControllerState2 ovrp_GetControllerState2(uint controllerMask);
    // static private System.Void .cctor()
    // Offset: 0x161DA94
    static void _cctor();
  }; // OVRPlugin/OVRP_1_12_0
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRPlugin::OVRP_1_12_0*, "", "OVRPlugin/OVRP_1_12_0");
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_12_0::ovrp_GetAppFramerate
// Il2CppName: ovrp_GetAppFramerate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)()>(&GlobalNamespace::OVRPlugin::OVRP_1_12_0::ovrp_GetAppFramerate)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_12_0*), "ovrp_GetAppFramerate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_12_0::ovrp_GetNodePoseState
// Il2CppName: ovrp_GetNodePoseState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::OVRPlugin::PoseStatef (*)(GlobalNamespace::OVRPlugin::Step, GlobalNamespace::OVRPlugin::Node)>(&GlobalNamespace::OVRPlugin::OVRP_1_12_0::ovrp_GetNodePoseState)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_12_0*), "ovrp_GetNodePoseState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<GlobalNamespace::OVRPlugin::Step>(), ::il2cpp_utils::ExtractIndependentType<GlobalNamespace::OVRPlugin::Node>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_12_0::ovrp_GetControllerState2
// Il2CppName: ovrp_GetControllerState2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::OVRPlugin::ControllerState2 (*)(uint)>(&GlobalNamespace::OVRPlugin::OVRP_1_12_0::ovrp_GetControllerState2)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_12_0*), "ovrp_GetControllerState2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<uint>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_12_0::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::OVRPlugin::OVRP_1_12_0::_cctor)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_12_0*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
