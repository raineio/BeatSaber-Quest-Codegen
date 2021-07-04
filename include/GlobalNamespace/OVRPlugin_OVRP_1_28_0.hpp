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
  // Forward declaring type: IntPtr
  struct IntPtr;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: OVRPlugin/OVRP_1_28_0
  class OVRPlugin::OVRP_1_28_0 : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: OVRP_1_28_0
    OVRP_1_28_0() noexcept {}
    // Get static field: static public readonly System.Version version
    static System::Version* _get_version();
    // Set static field: static public readonly System.Version version
    static void _set_version(System::Version* value);
    // static public OVRPlugin/Result ovrp_GetDominantHand(out OVRPlugin/Handedness dominantHand)
    // Offset: 0x1620ACC
    static GlobalNamespace::OVRPlugin::Result ovrp_GetDominantHand(GlobalNamespace::OVRPlugin::Handedness& dominantHand);
    // static public OVRPlugin/Result ovrp_SendEvent(System.String name, System.String param)
    // Offset: 0x1620B4C
    static GlobalNamespace::OVRPlugin::Result ovrp_SendEvent(::Il2CppString* name, ::Il2CppString* param);
    // static public OVRPlugin/Result ovrp_EnqueueSetupLayer2(ref OVRPlugin/LayerDesc desc, System.Int32 compositionDepth, System.IntPtr layerId)
    // Offset: 0x1620C0C
    static GlobalNamespace::OVRPlugin::Result ovrp_EnqueueSetupLayer2(GlobalNamespace::OVRPlugin::LayerDesc& desc, int compositionDepth, System::IntPtr layerId);
    // static private System.Void .cctor()
    // Offset: 0x1620CFC
    static void _cctor();
  }; // OVRPlugin/OVRP_1_28_0
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRPlugin::OVRP_1_28_0*, "", "OVRPlugin/OVRP_1_28_0");
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_28_0::ovrp_GetDominantHand
// Il2CppName: ovrp_GetDominantHand
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::OVRPlugin::Result (*)(GlobalNamespace::OVRPlugin::Handedness&)>(&GlobalNamespace::OVRPlugin::OVRP_1_28_0::ovrp_GetDominantHand)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_28_0*), "ovrp_GetDominantHand", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<GlobalNamespace::OVRPlugin::Handedness&>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_28_0::ovrp_SendEvent
// Il2CppName: ovrp_SendEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::OVRPlugin::Result (*)(::Il2CppString*, ::Il2CppString*)>(&GlobalNamespace::OVRPlugin::OVRP_1_28_0::ovrp_SendEvent)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_28_0*), "ovrp_SendEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_28_0::ovrp_EnqueueSetupLayer2
// Il2CppName: ovrp_EnqueueSetupLayer2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::OVRPlugin::Result (*)(GlobalNamespace::OVRPlugin::LayerDesc&, int, System::IntPtr)>(&GlobalNamespace::OVRPlugin::OVRP_1_28_0::ovrp_EnqueueSetupLayer2)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_28_0*), "ovrp_EnqueueSetupLayer2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<GlobalNamespace::OVRPlugin::LayerDesc&>(), ::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<System::IntPtr>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_28_0::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::OVRPlugin::OVRP_1_28_0::_cctor)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_28_0*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
