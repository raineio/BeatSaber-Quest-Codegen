// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Forward declaring type: HAPI_License
  struct HAPI_License;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HAPI_License, "HoudiniEngineUnity", "HAPI_License");
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: HoudiniEngineUnity.HAPI_License
  // [TokenAttribute] Offset: FFFFFFFF
  struct HAPI_License/*, public System::Enum*/ {
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
    // Creating value type constructor for type: HAPI_License
    constexpr HAPI_License(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public HoudiniEngineUnity.HAPI_License HAPI_LICENSE_NONE
    static constexpr const int HAPI_LICENSE_NONE = 0;
    // Get static field: static public HoudiniEngineUnity.HAPI_License HAPI_LICENSE_NONE
    static HoudiniEngineUnity::HAPI_License _get_HAPI_LICENSE_NONE();
    // Set static field: static public HoudiniEngineUnity.HAPI_License HAPI_LICENSE_NONE
    static void _set_HAPI_LICENSE_NONE(HoudiniEngineUnity::HAPI_License value);
    // static field const value: static public HoudiniEngineUnity.HAPI_License HAPI_LICENSE_HOUDINI_ENGINE
    static constexpr const int HAPI_LICENSE_HOUDINI_ENGINE = 1;
    // Get static field: static public HoudiniEngineUnity.HAPI_License HAPI_LICENSE_HOUDINI_ENGINE
    static HoudiniEngineUnity::HAPI_License _get_HAPI_LICENSE_HOUDINI_ENGINE();
    // Set static field: static public HoudiniEngineUnity.HAPI_License HAPI_LICENSE_HOUDINI_ENGINE
    static void _set_HAPI_LICENSE_HOUDINI_ENGINE(HoudiniEngineUnity::HAPI_License value);
    // static field const value: static public HoudiniEngineUnity.HAPI_License HAPI_LICENSE_HOUDINI
    static constexpr const int HAPI_LICENSE_HOUDINI = 2;
    // Get static field: static public HoudiniEngineUnity.HAPI_License HAPI_LICENSE_HOUDINI
    static HoudiniEngineUnity::HAPI_License _get_HAPI_LICENSE_HOUDINI();
    // Set static field: static public HoudiniEngineUnity.HAPI_License HAPI_LICENSE_HOUDINI
    static void _set_HAPI_LICENSE_HOUDINI(HoudiniEngineUnity::HAPI_License value);
    // static field const value: static public HoudiniEngineUnity.HAPI_License HAPI_LICENSE_HOUDINI_FX
    static constexpr const int HAPI_LICENSE_HOUDINI_FX = 3;
    // Get static field: static public HoudiniEngineUnity.HAPI_License HAPI_LICENSE_HOUDINI_FX
    static HoudiniEngineUnity::HAPI_License _get_HAPI_LICENSE_HOUDINI_FX();
    // Set static field: static public HoudiniEngineUnity.HAPI_License HAPI_LICENSE_HOUDINI_FX
    static void _set_HAPI_LICENSE_HOUDINI_FX(HoudiniEngineUnity::HAPI_License value);
    // static field const value: static public HoudiniEngineUnity.HAPI_License HAPI_LICENSE_HOUDINI_ENGINE_INDIE
    static constexpr const int HAPI_LICENSE_HOUDINI_ENGINE_INDIE = 4;
    // Get static field: static public HoudiniEngineUnity.HAPI_License HAPI_LICENSE_HOUDINI_ENGINE_INDIE
    static HoudiniEngineUnity::HAPI_License _get_HAPI_LICENSE_HOUDINI_ENGINE_INDIE();
    // Set static field: static public HoudiniEngineUnity.HAPI_License HAPI_LICENSE_HOUDINI_ENGINE_INDIE
    static void _set_HAPI_LICENSE_HOUDINI_ENGINE_INDIE(HoudiniEngineUnity::HAPI_License value);
    // static field const value: static public HoudiniEngineUnity.HAPI_License HAPI_LICENSE_HOUDINI_INDIE
    static constexpr const int HAPI_LICENSE_HOUDINI_INDIE = 5;
    // Get static field: static public HoudiniEngineUnity.HAPI_License HAPI_LICENSE_HOUDINI_INDIE
    static HoudiniEngineUnity::HAPI_License _get_HAPI_LICENSE_HOUDINI_INDIE();
    // Set static field: static public HoudiniEngineUnity.HAPI_License HAPI_LICENSE_HOUDINI_INDIE
    static void _set_HAPI_LICENSE_HOUDINI_INDIE(HoudiniEngineUnity::HAPI_License value);
    // static field const value: static public HoudiniEngineUnity.HAPI_License HAPI_LICENSE_MAX
    static constexpr const int HAPI_LICENSE_MAX = 6;
    // Get static field: static public HoudiniEngineUnity.HAPI_License HAPI_LICENSE_MAX
    static HoudiniEngineUnity::HAPI_License _get_HAPI_LICENSE_MAX();
    // Set static field: static public HoudiniEngineUnity.HAPI_License HAPI_LICENSE_MAX
    static void _set_HAPI_LICENSE_MAX(HoudiniEngineUnity::HAPI_License value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // HoudiniEngineUnity.HAPI_License
  #pragma pack(pop)
  static check_size<sizeof(HAPI_License), 0 + sizeof(int)> __HoudiniEngineUnity_HAPI_LicenseSizeCheck;
  static_assert(sizeof(HAPI_License) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
