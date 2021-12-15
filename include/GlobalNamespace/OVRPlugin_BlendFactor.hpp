// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVRPlugin
#include "GlobalNamespace/OVRPlugin.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: BlendFactor
  struct BlendFactor;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRPlugin::BlendFactor, "", "OVRPlugin/BlendFactor");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: OVRPlugin/BlendFactor
  // [TokenAttribute] Offset: FFFFFFFF
  struct OVRPlugin::BlendFactor/*, public System::Enum*/ {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: BlendFactor
    constexpr BlendFactor(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public OVRPlugin/BlendFactor Zero
    static constexpr const int Zero = 0;
    // Get static field: static public OVRPlugin/BlendFactor Zero
    static GlobalNamespace::OVRPlugin::BlendFactor _get_Zero();
    // Set static field: static public OVRPlugin/BlendFactor Zero
    static void _set_Zero(GlobalNamespace::OVRPlugin::BlendFactor value);
    // static field const value: static public OVRPlugin/BlendFactor One
    static constexpr const int One = 1;
    // Get static field: static public OVRPlugin/BlendFactor One
    static GlobalNamespace::OVRPlugin::BlendFactor _get_One();
    // Set static field: static public OVRPlugin/BlendFactor One
    static void _set_One(GlobalNamespace::OVRPlugin::BlendFactor value);
    // static field const value: static public OVRPlugin/BlendFactor SrcAlpha
    static constexpr const int SrcAlpha = 2;
    // Get static field: static public OVRPlugin/BlendFactor SrcAlpha
    static GlobalNamespace::OVRPlugin::BlendFactor _get_SrcAlpha();
    // Set static field: static public OVRPlugin/BlendFactor SrcAlpha
    static void _set_SrcAlpha(GlobalNamespace::OVRPlugin::BlendFactor value);
    // static field const value: static public OVRPlugin/BlendFactor OneMinusSrcAlpha
    static constexpr const int OneMinusSrcAlpha = 3;
    // Get static field: static public OVRPlugin/BlendFactor OneMinusSrcAlpha
    static GlobalNamespace::OVRPlugin::BlendFactor _get_OneMinusSrcAlpha();
    // Set static field: static public OVRPlugin/BlendFactor OneMinusSrcAlpha
    static void _set_OneMinusSrcAlpha(GlobalNamespace::OVRPlugin::BlendFactor value);
    // static field const value: static public OVRPlugin/BlendFactor DstAlpha
    static constexpr const int DstAlpha = 4;
    // Get static field: static public OVRPlugin/BlendFactor DstAlpha
    static GlobalNamespace::OVRPlugin::BlendFactor _get_DstAlpha();
    // Set static field: static public OVRPlugin/BlendFactor DstAlpha
    static void _set_DstAlpha(GlobalNamespace::OVRPlugin::BlendFactor value);
    // static field const value: static public OVRPlugin/BlendFactor OneMinusDstAlpha
    static constexpr const int OneMinusDstAlpha = 5;
    // Get static field: static public OVRPlugin/BlendFactor OneMinusDstAlpha
    static GlobalNamespace::OVRPlugin::BlendFactor _get_OneMinusDstAlpha();
    // Set static field: static public OVRPlugin/BlendFactor OneMinusDstAlpha
    static void _set_OneMinusDstAlpha(GlobalNamespace::OVRPlugin::BlendFactor value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // OVRPlugin/BlendFactor
  #pragma pack(pop)
  static check_size<sizeof(OVRPlugin::BlendFactor), 0 + sizeof(int)> __GlobalNamespace_OVRPlugin_BlendFactorSizeCheck;
  static_assert(sizeof(OVRPlugin::BlendFactor) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
