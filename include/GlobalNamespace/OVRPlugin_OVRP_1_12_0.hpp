// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
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
  // Autogenerated type: OVRPlugin/OVRP_1_12_0
  class OVRPlugin::OVRP_1_12_0 : public ::Il2CppObject {
    public:
    // Get static field: static public readonly System.Version version
    static System::Version* _get_version();
    // Set static field: static public readonly System.Version version
    static void _set_version(System::Version* value);
    // static public System.Single ovrp_GetAppFramerate()
    // Offset: 0x1264318
    static float ovrp_GetAppFramerate();
    // static public OVRPlugin/PoseStatef ovrp_GetNodePoseState(OVRPlugin/Step stepId, OVRPlugin/Node nodeId)
    // Offset: 0x1264388
    static GlobalNamespace::OVRPlugin::PoseStatef ovrp_GetNodePoseState(GlobalNamespace::OVRPlugin::Step stepId, GlobalNamespace::OVRPlugin::Node nodeId);
    // static public OVRPlugin/ControllerState2 ovrp_GetControllerState2(System.UInt32 controllerMask)
    // Offset: 0x1264420
    static GlobalNamespace::OVRPlugin::ControllerState2 ovrp_GetControllerState2(uint controllerMask);
    // static private System.Void .cctor()
    // Offset: 0x12644B0
    static void _cctor();
  }; // OVRPlugin/OVRP_1_12_0
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRPlugin::OVRP_1_12_0*, "", "OVRPlugin/OVRP_1_12_0");
#pragma pack(pop)
