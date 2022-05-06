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
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Vector4
  struct Vector4;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::OVRPlugin::OVRP_1_34_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRPlugin::OVRP_1_34_0*, "", "OVRPlugin/OVRP_1_34_0");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: OVRPlugin/OVRP_1_34_0
  // [TokenAttribute] Offset: FFFFFFFF
  class OVRPlugin::OVRP_1_34_0 : public ::Il2CppObject {
    public:
    // Get static field: static public readonly System.Version version
    static ::System::Version* _get_version();
    // Set static field: static public readonly System.Version version
    static void _set_version(::System::Version* value);
    // static private System.Void .cctor()
    // Offset: 0x1B1A058
    static void _cctor();
    // static public OVRPlugin/Result ovrp_EnqueueSubmitLayer2(System.UInt32 flags, System.IntPtr textureLeft, System.IntPtr textureRight, System.Int32 layerId, System.Int32 frameIndex, ref OVRPlugin/Posef pose, ref OVRPlugin/Vector3f scale, System.Int32 layerIndex, OVRPlugin/Bool overrideTextureRectMatrix, ref OVRPlugin/TextureRectMatrixf textureRectMatrix, OVRPlugin/Bool overridePerLayerColorScaleAndOffset, ref UnityEngine.Vector4 colorScale, ref UnityEngine.Vector4 colorOffset)
    // Offset: 0x1B19F58
    static ::GlobalNamespace::OVRPlugin::Result ovrp_EnqueueSubmitLayer2(uint flags, ::System::IntPtr textureLeft, ::System::IntPtr textureRight, int layerId, int frameIndex, ByRef<::GlobalNamespace::OVRPlugin::Posef> pose, ByRef<::GlobalNamespace::OVRPlugin::Vector3f> scale, int layerIndex, ::GlobalNamespace::OVRPlugin::Bool overrideTextureRectMatrix, ByRef<::GlobalNamespace::OVRPlugin::TextureRectMatrixf> textureRectMatrix, ::GlobalNamespace::OVRPlugin::Bool overridePerLayerColorScaleAndOffset, ByRef<::UnityEngine::Vector4> colorScale, ByRef<::UnityEngine::Vector4> colorOffset);
  }; // OVRPlugin/OVRP_1_34_0
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_34_0::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::OVRPlugin::OVRP_1_34_0::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_34_0*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_34_0::ovrp_EnqueueSubmitLayer2
// Il2CppName: ovrp_EnqueueSubmitLayer2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRPlugin::Result (*)(uint, ::System::IntPtr, ::System::IntPtr, int, int, ByRef<::GlobalNamespace::OVRPlugin::Posef>, ByRef<::GlobalNamespace::OVRPlugin::Vector3f>, int, ::GlobalNamespace::OVRPlugin::Bool, ByRef<::GlobalNamespace::OVRPlugin::TextureRectMatrixf>, ::GlobalNamespace::OVRPlugin::Bool, ByRef<::UnityEngine::Vector4>, ByRef<::UnityEngine::Vector4>)>(&GlobalNamespace::OVRPlugin::OVRP_1_34_0::ovrp_EnqueueSubmitLayer2)> {
  static const MethodInfo* get() {
    static auto* flags = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* textureLeft = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* textureRight = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* layerId = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* frameIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* pose = &::il2cpp_utils::GetClassFromName("", "OVRPlugin/Posef")->this_arg;
    static auto* scale = &::il2cpp_utils::GetClassFromName("", "OVRPlugin/Vector3f")->this_arg;
    static auto* layerIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* overrideTextureRectMatrix = &::il2cpp_utils::GetClassFromName("", "OVRPlugin/Bool")->byval_arg;
    static auto* textureRectMatrix = &::il2cpp_utils::GetClassFromName("", "OVRPlugin/TextureRectMatrixf")->this_arg;
    static auto* overridePerLayerColorScaleAndOffset = &::il2cpp_utils::GetClassFromName("", "OVRPlugin/Bool")->byval_arg;
    static auto* colorScale = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector4")->this_arg;
    static auto* colorOffset = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector4")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_34_0*), "ovrp_EnqueueSubmitLayer2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{flags, textureLeft, textureRight, layerId, frameIndex, pose, scale, layerIndex, overrideTextureRectMatrix, textureRectMatrix, overridePerLayerColorScaleAndOffset, colorScale, colorOffset});
  }
};
