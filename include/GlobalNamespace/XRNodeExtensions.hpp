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
// Forward declaring namespace: UnityEngine::XR
namespace UnityEngine::XR {
  // Forward declaring type: XRNode
  struct XRNode;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: XRNodeExtensions
  // [ExtensionAttribute] Offset: FFFFFFFF
  class XRNodeExtensions : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: XRNodeExtensions
    XRNodeExtensions() noexcept {}
    // static public OVRPlugin/Node OculusNode(UnityEngine.XR.XRNode node)
    // Offset: 0x238E490
    static GlobalNamespace::OVRPlugin::Node OculusNode(UnityEngine::XR::XRNode node);
    // static public System.Int32 PSMoveDeviceIndex(UnityEngine.XR.XRNode node)
    // Offset: 0x238E560
    static int PSMoveDeviceIndex(UnityEngine::XR::XRNode node);
  }; // XRNodeExtensions
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::XRNodeExtensions*, "", "XRNodeExtensions");
// Writing MetadataGetter for method: GlobalNamespace::XRNodeExtensions::OculusNode
// Il2CppName: OculusNode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::OVRPlugin::Node (*)(UnityEngine::XR::XRNode)>(&GlobalNamespace::XRNodeExtensions::OculusNode)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::XRNodeExtensions*), "OculusNode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::XR::XRNode>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::XRNodeExtensions::PSMoveDeviceIndex
// Il2CppName: PSMoveDeviceIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(UnityEngine::XR::XRNode)>(&GlobalNamespace::XRNodeExtensions::PSMoveDeviceIndex)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::XRNodeExtensions*), "PSMoveDeviceIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::XR::XRNode>()});
  }
};
