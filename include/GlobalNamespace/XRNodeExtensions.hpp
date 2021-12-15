// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
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
  // Forward declaring type: XRNodeExtensions
  class XRNodeExtensions;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(GlobalNamespace::XRNodeExtensions);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::XRNodeExtensions*, "", "XRNodeExtensions");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: XRNodeExtensions
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExtensionAttribute] Offset: FFFFFFFF
  class XRNodeExtensions : public ::Il2CppObject {
    public:
    // static public OVRPlugin/Node OculusNode(UnityEngine.XR.XRNode node)
    // Offset: 0x2644D08
    static GlobalNamespace::OVRPlugin::Node OculusNode(UnityEngine::XR::XRNode node);
    // static public System.Int32 PSMoveDeviceIndex(UnityEngine.XR.XRNode node)
    // Offset: 0x2644DD8
    static int PSMoveDeviceIndex(UnityEngine::XR::XRNode node);
  }; // XRNodeExtensions
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::XRNodeExtensions::OculusNode
// Il2CppName: OculusNode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::OVRPlugin::Node (*)(UnityEngine::XR::XRNode)>(&GlobalNamespace::XRNodeExtensions::OculusNode)> {
  static const MethodInfo* get() {
    static auto* node = &::il2cpp_utils::GetClassFromName("UnityEngine.XR", "XRNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::XRNodeExtensions*), "OculusNode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{node});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::XRNodeExtensions::PSMoveDeviceIndex
// Il2CppName: PSMoveDeviceIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(UnityEngine::XR::XRNode)>(&GlobalNamespace::XRNodeExtensions::PSMoveDeviceIndex)> {
  static const MethodInfo* get() {
    static auto* node = &::il2cpp_utils::GetClassFromName("UnityEngine.XR", "XRNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::XRNodeExtensions*), "PSMoveDeviceIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{node});
  }
};
