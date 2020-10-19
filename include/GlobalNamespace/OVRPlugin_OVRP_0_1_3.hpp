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
  // Autogenerated type: OVRPlugin/OVRP_0_1_3
  class OVRPlugin::OVRP_0_1_3 : public ::Il2CppObject {
    public:
    // Get static field: static public readonly System.Version version
    static System::Version* _get_version();
    // Set static field: static public readonly System.Version version
    static void _set_version(System::Version* value);
    // static public OVRPlugin/Posef ovrp_GetNodeVelocity(OVRPlugin/Node nodeId)
    // Offset: 0x1263CAC
    static GlobalNamespace::OVRPlugin::Posef ovrp_GetNodeVelocity(GlobalNamespace::OVRPlugin::Node nodeId);
    // static public OVRPlugin/Posef ovrp_GetNodeAcceleration(OVRPlugin/Node nodeId)
    // Offset: 0x1263D3C
    static GlobalNamespace::OVRPlugin::Posef ovrp_GetNodeAcceleration(GlobalNamespace::OVRPlugin::Node nodeId);
    // static private System.Void .cctor()
    // Offset: 0x1263DCC
    static void _cctor();
  }; // OVRPlugin/OVRP_0_1_3
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRPlugin::OVRP_0_1_3*, "", "OVRPlugin/OVRP_0_1_3");
#pragma pack(pop)
