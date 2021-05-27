// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: String
  class String;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: BakedLightUtils
  class BakedLightUtils : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: BakedLightUtils
    BakedLightUtils() noexcept {}
    // static field const value: static public System.String kMirrorParentNameToIgnore
    static constexpr const char* kMirrorParentNameToIgnore = "PlayersPlace";
    // Get static field: static public System.String kMirrorParentNameToIgnore
    static ::Il2CppString* _get_kMirrorParentNameToIgnore();
    // Set static field: static public System.String kMirrorParentNameToIgnore
    static void _set_kMirrorParentNameToIgnore(::Il2CppString* value);
    // static field const value: static private System.String kDepthOnlyShaderName
    static constexpr const char* kDepthOnlyShaderName = "Custom/SetDepthOnly";
    // Get static field: static private System.String kDepthOnlyShaderName
    static ::Il2CppString* _get_kDepthOnlyShaderName();
    // Set static field: static private System.String kDepthOnlyShaderName
    static void _set_kDepthOnlyShaderName(::Il2CppString* value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xE27D0C
    // Get static field: static private readonly System.Int32 _zWritePropertyId
    static int _get__zWritePropertyId();
    // Set static field: static private readonly System.Int32 _zWritePropertyId
    static void _set__zWritePropertyId(int value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xE27D1C
    // Get static field: static private readonly System.Int32 _stencilRefValuePropertyId
    static int _get__stencilRefValuePropertyId();
    // Set static field: static private readonly System.Int32 _stencilRefValuePropertyId
    static void _set__stencilRefValuePropertyId(int value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xE27D2C
    // Get static field: static private readonly System.Int32 _stencilCompPropertyId
    static int _get__stencilCompPropertyId();
    // Set static field: static private readonly System.Int32 _stencilCompPropertyId
    static void _set__stencilCompPropertyId(int value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xE27D3C
    // Get static field: static private readonly System.Int32 _stencilPassOpPropertyId
    static int _get__stencilPassOpPropertyId();
    // Set static field: static private readonly System.Int32 _stencilPassOpPropertyId
    static void _set__stencilPassOpPropertyId(int value);
    // static public System.Void ValidateLoadedEnvironmentScene()
    // Offset: 0x119CF10
    static void ValidateLoadedEnvironmentScene();
    // static private System.Void .cctor()
    // Offset: 0x119D3A0
    static void _cctor();
  }; // BakedLightUtils
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BakedLightUtils*, "", "BakedLightUtils");