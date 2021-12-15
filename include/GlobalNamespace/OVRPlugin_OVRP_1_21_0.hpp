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
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Version
  class Version;
  // Forward declaring type: IntPtr
  struct IntPtr;
}
// Completed forward declares
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(GlobalNamespace::OVRPlugin::OVRP_1_21_0);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRPlugin::OVRP_1_21_0*, "", "OVRPlugin/OVRP_1_21_0");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: OVRPlugin/OVRP_1_21_0
  // [TokenAttribute] Offset: FFFFFFFF
  class OVRPlugin::OVRP_1_21_0 : public ::Il2CppObject {
    public:
    // Get static field: static public readonly System.Version version
    static System::Version* _get_version();
    // Set static field: static public readonly System.Version version
    static void _set_version(System::Version* value);
    // static private System.Void .cctor()
    // Offset: 0x18764A8
    static void _cctor();
    // static public OVRPlugin/Result ovrp_GetTiledMultiResSupported(out OVRPlugin/Bool foveationSupported)
    // Offset: 0x1876010
    static GlobalNamespace::OVRPlugin::Result ovrp_GetTiledMultiResSupported(ByRef<GlobalNamespace::OVRPlugin::Bool> foveationSupported);
    // static public OVRPlugin/Result ovrp_GetTiledMultiResLevel(out OVRPlugin/FixedFoveatedRenderingLevel level)
    // Offset: 0x1876090
    static GlobalNamespace::OVRPlugin::Result ovrp_GetTiledMultiResLevel(ByRef<GlobalNamespace::OVRPlugin::FixedFoveatedRenderingLevel> level);
    // static public OVRPlugin/Result ovrp_SetTiledMultiResLevel(OVRPlugin/FixedFoveatedRenderingLevel level)
    // Offset: 0x1876110
    static GlobalNamespace::OVRPlugin::Result ovrp_SetTiledMultiResLevel(GlobalNamespace::OVRPlugin::FixedFoveatedRenderingLevel level);
    // static public OVRPlugin/Result ovrp_GetGPUUtilSupported(out OVRPlugin/Bool gpuUtilSupported)
    // Offset: 0x1876190
    static GlobalNamespace::OVRPlugin::Result ovrp_GetGPUUtilSupported(ByRef<GlobalNamespace::OVRPlugin::Bool> gpuUtilSupported);
    // static public OVRPlugin/Result ovrp_GetGPUUtilLevel(out System.Single gpuUtil)
    // Offset: 0x1876210
    static GlobalNamespace::OVRPlugin::Result ovrp_GetGPUUtilLevel(ByRef<float> gpuUtil);
    // static public OVRPlugin/Result ovrp_GetSystemDisplayFrequency2(out System.Single systemDisplayFrequency)
    // Offset: 0x1876290
    static GlobalNamespace::OVRPlugin::Result ovrp_GetSystemDisplayFrequency2(ByRef<float> systemDisplayFrequency);
    // static public OVRPlugin/Result ovrp_GetSystemDisplayAvailableFrequencies(System.IntPtr systemDisplayAvailableFrequencies, ref System.Int32 numFrequencies)
    // Offset: 0x1876310
    static GlobalNamespace::OVRPlugin::Result ovrp_GetSystemDisplayAvailableFrequencies(System::IntPtr systemDisplayAvailableFrequencies, ByRef<int> numFrequencies);
    // static public OVRPlugin/Result ovrp_SetSystemDisplayFrequency(System.Single requestedFrequency)
    // Offset: 0x18763A0
    static GlobalNamespace::OVRPlugin::Result ovrp_SetSystemDisplayFrequency(float requestedFrequency);
    // static public OVRPlugin/Result ovrp_GetAppAsymmetricFov(out OVRPlugin/Bool useAsymmetricFov)
    // Offset: 0x1876428
    static GlobalNamespace::OVRPlugin::Result ovrp_GetAppAsymmetricFov(ByRef<GlobalNamespace::OVRPlugin::Bool> useAsymmetricFov);
  }; // OVRPlugin/OVRP_1_21_0
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_21_0::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::OVRPlugin::OVRP_1_21_0::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_21_0*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_21_0::ovrp_GetTiledMultiResSupported
// Il2CppName: ovrp_GetTiledMultiResSupported
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::OVRPlugin::Result (*)(ByRef<GlobalNamespace::OVRPlugin::Bool>)>(&GlobalNamespace::OVRPlugin::OVRP_1_21_0::ovrp_GetTiledMultiResSupported)> {
  static const MethodInfo* get() {
    static auto* foveationSupported = &::il2cpp_utils::GetClassFromName("", "OVRPlugin/Bool")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_21_0*), "ovrp_GetTiledMultiResSupported", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{foveationSupported});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_21_0::ovrp_GetTiledMultiResLevel
// Il2CppName: ovrp_GetTiledMultiResLevel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::OVRPlugin::Result (*)(ByRef<GlobalNamespace::OVRPlugin::FixedFoveatedRenderingLevel>)>(&GlobalNamespace::OVRPlugin::OVRP_1_21_0::ovrp_GetTiledMultiResLevel)> {
  static const MethodInfo* get() {
    static auto* level = &::il2cpp_utils::GetClassFromName("", "OVRPlugin/FixedFoveatedRenderingLevel")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_21_0*), "ovrp_GetTiledMultiResLevel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{level});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_21_0::ovrp_SetTiledMultiResLevel
// Il2CppName: ovrp_SetTiledMultiResLevel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::OVRPlugin::Result (*)(GlobalNamespace::OVRPlugin::FixedFoveatedRenderingLevel)>(&GlobalNamespace::OVRPlugin::OVRP_1_21_0::ovrp_SetTiledMultiResLevel)> {
  static const MethodInfo* get() {
    static auto* level = &::il2cpp_utils::GetClassFromName("", "OVRPlugin/FixedFoveatedRenderingLevel")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_21_0*), "ovrp_SetTiledMultiResLevel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{level});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_21_0::ovrp_GetGPUUtilSupported
// Il2CppName: ovrp_GetGPUUtilSupported
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::OVRPlugin::Result (*)(ByRef<GlobalNamespace::OVRPlugin::Bool>)>(&GlobalNamespace::OVRPlugin::OVRP_1_21_0::ovrp_GetGPUUtilSupported)> {
  static const MethodInfo* get() {
    static auto* gpuUtilSupported = &::il2cpp_utils::GetClassFromName("", "OVRPlugin/Bool")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_21_0*), "ovrp_GetGPUUtilSupported", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{gpuUtilSupported});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_21_0::ovrp_GetGPUUtilLevel
// Il2CppName: ovrp_GetGPUUtilLevel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::OVRPlugin::Result (*)(ByRef<float>)>(&GlobalNamespace::OVRPlugin::OVRP_1_21_0::ovrp_GetGPUUtilLevel)> {
  static const MethodInfo* get() {
    static auto* gpuUtil = &::il2cpp_utils::GetClassFromName("System", "Single")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_21_0*), "ovrp_GetGPUUtilLevel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{gpuUtil});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_21_0::ovrp_GetSystemDisplayFrequency2
// Il2CppName: ovrp_GetSystemDisplayFrequency2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::OVRPlugin::Result (*)(ByRef<float>)>(&GlobalNamespace::OVRPlugin::OVRP_1_21_0::ovrp_GetSystemDisplayFrequency2)> {
  static const MethodInfo* get() {
    static auto* systemDisplayFrequency = &::il2cpp_utils::GetClassFromName("System", "Single")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_21_0*), "ovrp_GetSystemDisplayFrequency2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{systemDisplayFrequency});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_21_0::ovrp_GetSystemDisplayAvailableFrequencies
// Il2CppName: ovrp_GetSystemDisplayAvailableFrequencies
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::OVRPlugin::Result (*)(System::IntPtr, ByRef<int>)>(&GlobalNamespace::OVRPlugin::OVRP_1_21_0::ovrp_GetSystemDisplayAvailableFrequencies)> {
  static const MethodInfo* get() {
    static auto* systemDisplayAvailableFrequencies = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* numFrequencies = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_21_0*), "ovrp_GetSystemDisplayAvailableFrequencies", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{systemDisplayAvailableFrequencies, numFrequencies});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_21_0::ovrp_SetSystemDisplayFrequency
// Il2CppName: ovrp_SetSystemDisplayFrequency
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::OVRPlugin::Result (*)(float)>(&GlobalNamespace::OVRPlugin::OVRP_1_21_0::ovrp_SetSystemDisplayFrequency)> {
  static const MethodInfo* get() {
    static auto* requestedFrequency = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_21_0*), "ovrp_SetSystemDisplayFrequency", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{requestedFrequency});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_21_0::ovrp_GetAppAsymmetricFov
// Il2CppName: ovrp_GetAppAsymmetricFov
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::OVRPlugin::Result (*)(ByRef<GlobalNamespace::OVRPlugin::Bool>)>(&GlobalNamespace::OVRPlugin::OVRP_1_21_0::ovrp_GetAppAsymmetricFov)> {
  static const MethodInfo* get() {
    static auto* useAsymmetricFov = &::il2cpp_utils::GetClassFromName("", "OVRPlugin/Bool")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_21_0*), "ovrp_GetAppAsymmetricFov", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{useAsymmetricFov});
  }
};
