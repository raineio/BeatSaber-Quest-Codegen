// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: OVR.OpenVR.EVRScreenshotType
  // [TokenAttribute] Offset: FFFFFFFF
  struct EVRScreenshotType/*, public System::Enum*/ {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    private:
    #endif
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: EVRScreenshotType
    constexpr EVRScreenshotType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public OVR.OpenVR.EVRScreenshotType None
    static constexpr const int None = 0;
    // Get static field: static public OVR.OpenVR.EVRScreenshotType None
    static OVR::OpenVR::EVRScreenshotType _get_None();
    // Set static field: static public OVR.OpenVR.EVRScreenshotType None
    static void _set_None(OVR::OpenVR::EVRScreenshotType value);
    // static field const value: static public OVR.OpenVR.EVRScreenshotType Mono
    static constexpr const int Mono = 1;
    // Get static field: static public OVR.OpenVR.EVRScreenshotType Mono
    static OVR::OpenVR::EVRScreenshotType _get_Mono();
    // Set static field: static public OVR.OpenVR.EVRScreenshotType Mono
    static void _set_Mono(OVR::OpenVR::EVRScreenshotType value);
    // static field const value: static public OVR.OpenVR.EVRScreenshotType Stereo
    static constexpr const int Stereo = 2;
    // Get static field: static public OVR.OpenVR.EVRScreenshotType Stereo
    static OVR::OpenVR::EVRScreenshotType _get_Stereo();
    // Set static field: static public OVR.OpenVR.EVRScreenshotType Stereo
    static void _set_Stereo(OVR::OpenVR::EVRScreenshotType value);
    // static field const value: static public OVR.OpenVR.EVRScreenshotType Cubemap
    static constexpr const int Cubemap = 3;
    // Get static field: static public OVR.OpenVR.EVRScreenshotType Cubemap
    static OVR::OpenVR::EVRScreenshotType _get_Cubemap();
    // Set static field: static public OVR.OpenVR.EVRScreenshotType Cubemap
    static void _set_Cubemap(OVR::OpenVR::EVRScreenshotType value);
    // static field const value: static public OVR.OpenVR.EVRScreenshotType MonoPanorama
    static constexpr const int MonoPanorama = 4;
    // Get static field: static public OVR.OpenVR.EVRScreenshotType MonoPanorama
    static OVR::OpenVR::EVRScreenshotType _get_MonoPanorama();
    // Set static field: static public OVR.OpenVR.EVRScreenshotType MonoPanorama
    static void _set_MonoPanorama(OVR::OpenVR::EVRScreenshotType value);
    // static field const value: static public OVR.OpenVR.EVRScreenshotType StereoPanorama
    static constexpr const int StereoPanorama = 5;
    // Get static field: static public OVR.OpenVR.EVRScreenshotType StereoPanorama
    static OVR::OpenVR::EVRScreenshotType _get_StereoPanorama();
    // Set static field: static public OVR.OpenVR.EVRScreenshotType StereoPanorama
    static void _set_StereoPanorama(OVR::OpenVR::EVRScreenshotType value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // OVR.OpenVR.EVRScreenshotType
  #pragma pack(pop)
  static check_size<sizeof(EVRScreenshotType), 0 + sizeof(int)> __OVR_OpenVR_EVRScreenshotTypeSizeCheck;
  static_assert(sizeof(EVRScreenshotType) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::EVRScreenshotType, "OVR.OpenVR", "EVRScreenshotType");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
