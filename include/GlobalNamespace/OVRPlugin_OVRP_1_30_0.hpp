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
}
// Completed forward declares
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(GlobalNamespace::OVRPlugin::OVRP_1_30_0);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRPlugin::OVRP_1_30_0*, "", "OVRPlugin/OVRP_1_30_0");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: OVRPlugin/OVRP_1_30_0
  // [TokenAttribute] Offset: FFFFFFFF
  class OVRPlugin::OVRP_1_30_0 : public ::Il2CppObject {
    public:
    // Get static field: static public readonly System.Version version
    static System::Version* _get_version();
    // Set static field: static public readonly System.Version version
    static void _set_version(System::Version* value);
    // static private System.Void .cctor()
    // Offset: 0x1876F90
    static void _cctor();
    // static public OVRPlugin/Result ovrp_GetCurrentTrackingTransformPose(out OVRPlugin/Posef trackingTransformPose)
    // Offset: 0x1876C04
    static GlobalNamespace::OVRPlugin::Result ovrp_GetCurrentTrackingTransformPose(ByRef<GlobalNamespace::OVRPlugin::Posef> trackingTransformPose);
    // static public OVRPlugin/Result ovrp_GetTrackingTransformRawPose(out OVRPlugin/Posef trackingTransformRawPose)
    // Offset: 0x1876C84
    static GlobalNamespace::OVRPlugin::Result ovrp_GetTrackingTransformRawPose(ByRef<GlobalNamespace::OVRPlugin::Posef> trackingTransformRawPose);
    // static public OVRPlugin/Result ovrp_SendEvent2(System.String name, System.String param, System.String source)
    // Offset: 0x1876D04
    static GlobalNamespace::OVRPlugin::Result ovrp_SendEvent2(::Il2CppString* name, ::Il2CppString* param, ::Il2CppString* source);
    // static public OVRPlugin/Result ovrp_IsPerfMetricsSupported(OVRPlugin/PerfMetrics perfMetrics, out OVRPlugin/Bool isSupported)
    // Offset: 0x1876DE0
    static GlobalNamespace::OVRPlugin::Result ovrp_IsPerfMetricsSupported(GlobalNamespace::OVRPlugin::PerfMetrics perfMetrics, ByRef<GlobalNamespace::OVRPlugin::Bool> isSupported);
    // static public OVRPlugin/Result ovrp_GetPerfMetricsFloat(OVRPlugin/PerfMetrics perfMetrics, out System.Single value)
    // Offset: 0x1876E70
    static GlobalNamespace::OVRPlugin::Result ovrp_GetPerfMetricsFloat(GlobalNamespace::OVRPlugin::PerfMetrics perfMetrics, ByRef<float> value);
    // static public OVRPlugin/Result ovrp_GetPerfMetricsInt(OVRPlugin/PerfMetrics perfMetrics, out System.Int32 value)
    // Offset: 0x1876F00
    static GlobalNamespace::OVRPlugin::Result ovrp_GetPerfMetricsInt(GlobalNamespace::OVRPlugin::PerfMetrics perfMetrics, ByRef<int> value);
  }; // OVRPlugin/OVRP_1_30_0
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_30_0::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::OVRPlugin::OVRP_1_30_0::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_30_0*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_30_0::ovrp_GetCurrentTrackingTransformPose
// Il2CppName: ovrp_GetCurrentTrackingTransformPose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::OVRPlugin::Result (*)(ByRef<GlobalNamespace::OVRPlugin::Posef>)>(&GlobalNamespace::OVRPlugin::OVRP_1_30_0::ovrp_GetCurrentTrackingTransformPose)> {
  static const MethodInfo* get() {
    static auto* trackingTransformPose = &::il2cpp_utils::GetClassFromName("", "OVRPlugin/Posef")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_30_0*), "ovrp_GetCurrentTrackingTransformPose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{trackingTransformPose});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_30_0::ovrp_GetTrackingTransformRawPose
// Il2CppName: ovrp_GetTrackingTransformRawPose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::OVRPlugin::Result (*)(ByRef<GlobalNamespace::OVRPlugin::Posef>)>(&GlobalNamespace::OVRPlugin::OVRP_1_30_0::ovrp_GetTrackingTransformRawPose)> {
  static const MethodInfo* get() {
    static auto* trackingTransformRawPose = &::il2cpp_utils::GetClassFromName("", "OVRPlugin/Posef")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_30_0*), "ovrp_GetTrackingTransformRawPose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{trackingTransformRawPose});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_30_0::ovrp_SendEvent2
// Il2CppName: ovrp_SendEvent2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::OVRPlugin::Result (*)(::Il2CppString*, ::Il2CppString*, ::Il2CppString*)>(&GlobalNamespace::OVRPlugin::OVRP_1_30_0::ovrp_SendEvent2)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* param = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* source = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_30_0*), "ovrp_SendEvent2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, param, source});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_30_0::ovrp_IsPerfMetricsSupported
// Il2CppName: ovrp_IsPerfMetricsSupported
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::OVRPlugin::Result (*)(GlobalNamespace::OVRPlugin::PerfMetrics, ByRef<GlobalNamespace::OVRPlugin::Bool>)>(&GlobalNamespace::OVRPlugin::OVRP_1_30_0::ovrp_IsPerfMetricsSupported)> {
  static const MethodInfo* get() {
    static auto* perfMetrics = &::il2cpp_utils::GetClassFromName("", "OVRPlugin/PerfMetrics")->byval_arg;
    static auto* isSupported = &::il2cpp_utils::GetClassFromName("", "OVRPlugin/Bool")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_30_0*), "ovrp_IsPerfMetricsSupported", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{perfMetrics, isSupported});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_30_0::ovrp_GetPerfMetricsFloat
// Il2CppName: ovrp_GetPerfMetricsFloat
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::OVRPlugin::Result (*)(GlobalNamespace::OVRPlugin::PerfMetrics, ByRef<float>)>(&GlobalNamespace::OVRPlugin::OVRP_1_30_0::ovrp_GetPerfMetricsFloat)> {
  static const MethodInfo* get() {
    static auto* perfMetrics = &::il2cpp_utils::GetClassFromName("", "OVRPlugin/PerfMetrics")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_30_0*), "ovrp_GetPerfMetricsFloat", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{perfMetrics, value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_30_0::ovrp_GetPerfMetricsInt
// Il2CppName: ovrp_GetPerfMetricsInt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::OVRPlugin::Result (*)(GlobalNamespace::OVRPlugin::PerfMetrics, ByRef<int>)>(&GlobalNamespace::OVRPlugin::OVRP_1_30_0::ovrp_GetPerfMetricsInt)> {
  static const MethodInfo* get() {
    static auto* perfMetrics = &::il2cpp_utils::GetClassFromName("", "OVRPlugin/PerfMetrics")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_30_0*), "ovrp_GetPerfMetricsInt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{perfMetrics, value});
  }
};
