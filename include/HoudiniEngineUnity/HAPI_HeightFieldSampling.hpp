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
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: HoudiniEngineUnity.HAPI_HeightFieldSampling
  // [TokenAttribute] Offset: FFFFFFFF
  struct HAPI_HeightFieldSampling/*, public System::Enum*/ {
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
    // Creating value type constructor for type: HAPI_HeightFieldSampling
    constexpr HAPI_HeightFieldSampling(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public HoudiniEngineUnity.HAPI_HeightFieldSampling HAPI_HEIGHTFIELD_SAMPLING_CENTER
    static constexpr const int HAPI_HEIGHTFIELD_SAMPLING_CENTER = 0;
    // Get static field: static public HoudiniEngineUnity.HAPI_HeightFieldSampling HAPI_HEIGHTFIELD_SAMPLING_CENTER
    static HoudiniEngineUnity::HAPI_HeightFieldSampling _get_HAPI_HEIGHTFIELD_SAMPLING_CENTER();
    // Set static field: static public HoudiniEngineUnity.HAPI_HeightFieldSampling HAPI_HEIGHTFIELD_SAMPLING_CENTER
    static void _set_HAPI_HEIGHTFIELD_SAMPLING_CENTER(HoudiniEngineUnity::HAPI_HeightFieldSampling value);
    // static field const value: static public HoudiniEngineUnity.HAPI_HeightFieldSampling HAPI_HEIGHTFIELD_SAMPLING_CORNER
    static constexpr const int HAPI_HEIGHTFIELD_SAMPLING_CORNER = 1;
    // Get static field: static public HoudiniEngineUnity.HAPI_HeightFieldSampling HAPI_HEIGHTFIELD_SAMPLING_CORNER
    static HoudiniEngineUnity::HAPI_HeightFieldSampling _get_HAPI_HEIGHTFIELD_SAMPLING_CORNER();
    // Set static field: static public HoudiniEngineUnity.HAPI_HeightFieldSampling HAPI_HEIGHTFIELD_SAMPLING_CORNER
    static void _set_HAPI_HEIGHTFIELD_SAMPLING_CORNER(HoudiniEngineUnity::HAPI_HeightFieldSampling value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // HoudiniEngineUnity.HAPI_HeightFieldSampling
  #pragma pack(pop)
  static check_size<sizeof(HAPI_HeightFieldSampling), 0 + sizeof(int)> __HoudiniEngineUnity_HAPI_HeightFieldSamplingSizeCheck;
  static_assert(sizeof(HAPI_HeightFieldSampling) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HAPI_HeightFieldSampling, "HoudiniEngineUnity", "HAPI_HeightFieldSampling");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
