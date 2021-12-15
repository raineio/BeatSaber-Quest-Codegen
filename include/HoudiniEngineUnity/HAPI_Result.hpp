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
  // Forward declaring type: HAPI_Result
  struct HAPI_Result;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HAPI_Result, "HoudiniEngineUnity", "HAPI_Result");
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: HoudiniEngineUnity.HAPI_Result
  // [TokenAttribute] Offset: FFFFFFFF
  struct HAPI_Result/*, public System::Enum*/ {
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
    // Creating value type constructor for type: HAPI_Result
    constexpr HAPI_Result(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public HoudiniEngineUnity.HAPI_Result HAPI_RESULT_SUCCESS
    static constexpr const int HAPI_RESULT_SUCCESS = 0;
    // Get static field: static public HoudiniEngineUnity.HAPI_Result HAPI_RESULT_SUCCESS
    static HoudiniEngineUnity::HAPI_Result _get_HAPI_RESULT_SUCCESS();
    // Set static field: static public HoudiniEngineUnity.HAPI_Result HAPI_RESULT_SUCCESS
    static void _set_HAPI_RESULT_SUCCESS(HoudiniEngineUnity::HAPI_Result value);
    // static field const value: static public HoudiniEngineUnity.HAPI_Result HAPI_RESULT_FAILURE
    static constexpr const int HAPI_RESULT_FAILURE = 1;
    // Get static field: static public HoudiniEngineUnity.HAPI_Result HAPI_RESULT_FAILURE
    static HoudiniEngineUnity::HAPI_Result _get_HAPI_RESULT_FAILURE();
    // Set static field: static public HoudiniEngineUnity.HAPI_Result HAPI_RESULT_FAILURE
    static void _set_HAPI_RESULT_FAILURE(HoudiniEngineUnity::HAPI_Result value);
    // static field const value: static public HoudiniEngineUnity.HAPI_Result HAPI_RESULT_ALREADY_INITIALIZED
    static constexpr const int HAPI_RESULT_ALREADY_INITIALIZED = 2;
    // Get static field: static public HoudiniEngineUnity.HAPI_Result HAPI_RESULT_ALREADY_INITIALIZED
    static HoudiniEngineUnity::HAPI_Result _get_HAPI_RESULT_ALREADY_INITIALIZED();
    // Set static field: static public HoudiniEngineUnity.HAPI_Result HAPI_RESULT_ALREADY_INITIALIZED
    static void _set_HAPI_RESULT_ALREADY_INITIALIZED(HoudiniEngineUnity::HAPI_Result value);
    // static field const value: static public HoudiniEngineUnity.HAPI_Result HAPI_RESULT_NOT_INITIALIZED
    static constexpr const int HAPI_RESULT_NOT_INITIALIZED = 3;
    // Get static field: static public HoudiniEngineUnity.HAPI_Result HAPI_RESULT_NOT_INITIALIZED
    static HoudiniEngineUnity::HAPI_Result _get_HAPI_RESULT_NOT_INITIALIZED();
    // Set static field: static public HoudiniEngineUnity.HAPI_Result HAPI_RESULT_NOT_INITIALIZED
    static void _set_HAPI_RESULT_NOT_INITIALIZED(HoudiniEngineUnity::HAPI_Result value);
    // static field const value: static public HoudiniEngineUnity.HAPI_Result HAPI_RESULT_CANT_LOADFILE
    static constexpr const int HAPI_RESULT_CANT_LOADFILE = 4;
    // Get static field: static public HoudiniEngineUnity.HAPI_Result HAPI_RESULT_CANT_LOADFILE
    static HoudiniEngineUnity::HAPI_Result _get_HAPI_RESULT_CANT_LOADFILE();
    // Set static field: static public HoudiniEngineUnity.HAPI_Result HAPI_RESULT_CANT_LOADFILE
    static void _set_HAPI_RESULT_CANT_LOADFILE(HoudiniEngineUnity::HAPI_Result value);
    // static field const value: static public HoudiniEngineUnity.HAPI_Result HAPI_RESULT_PARM_SET_FAILED
    static constexpr const int HAPI_RESULT_PARM_SET_FAILED = 5;
    // Get static field: static public HoudiniEngineUnity.HAPI_Result HAPI_RESULT_PARM_SET_FAILED
    static HoudiniEngineUnity::HAPI_Result _get_HAPI_RESULT_PARM_SET_FAILED();
    // Set static field: static public HoudiniEngineUnity.HAPI_Result HAPI_RESULT_PARM_SET_FAILED
    static void _set_HAPI_RESULT_PARM_SET_FAILED(HoudiniEngineUnity::HAPI_Result value);
    // static field const value: static public HoudiniEngineUnity.HAPI_Result HAPI_RESULT_INVALID_ARGUMENT
    static constexpr const int HAPI_RESULT_INVALID_ARGUMENT = 6;
    // Get static field: static public HoudiniEngineUnity.HAPI_Result HAPI_RESULT_INVALID_ARGUMENT
    static HoudiniEngineUnity::HAPI_Result _get_HAPI_RESULT_INVALID_ARGUMENT();
    // Set static field: static public HoudiniEngineUnity.HAPI_Result HAPI_RESULT_INVALID_ARGUMENT
    static void _set_HAPI_RESULT_INVALID_ARGUMENT(HoudiniEngineUnity::HAPI_Result value);
    // static field const value: static public HoudiniEngineUnity.HAPI_Result HAPI_RESULT_CANT_LOAD_GEO
    static constexpr const int HAPI_RESULT_CANT_LOAD_GEO = 7;
    // Get static field: static public HoudiniEngineUnity.HAPI_Result HAPI_RESULT_CANT_LOAD_GEO
    static HoudiniEngineUnity::HAPI_Result _get_HAPI_RESULT_CANT_LOAD_GEO();
    // Set static field: static public HoudiniEngineUnity.HAPI_Result HAPI_RESULT_CANT_LOAD_GEO
    static void _set_HAPI_RESULT_CANT_LOAD_GEO(HoudiniEngineUnity::HAPI_Result value);
    // static field const value: static public HoudiniEngineUnity.HAPI_Result HAPI_RESULT_CANT_GENERATE_PRESET
    static constexpr const int HAPI_RESULT_CANT_GENERATE_PRESET = 8;
    // Get static field: static public HoudiniEngineUnity.HAPI_Result HAPI_RESULT_CANT_GENERATE_PRESET
    static HoudiniEngineUnity::HAPI_Result _get_HAPI_RESULT_CANT_GENERATE_PRESET();
    // Set static field: static public HoudiniEngineUnity.HAPI_Result HAPI_RESULT_CANT_GENERATE_PRESET
    static void _set_HAPI_RESULT_CANT_GENERATE_PRESET(HoudiniEngineUnity::HAPI_Result value);
    // static field const value: static public HoudiniEngineUnity.HAPI_Result HAPI_RESULT_CANT_LOAD_PRESET
    static constexpr const int HAPI_RESULT_CANT_LOAD_PRESET = 9;
    // Get static field: static public HoudiniEngineUnity.HAPI_Result HAPI_RESULT_CANT_LOAD_PRESET
    static HoudiniEngineUnity::HAPI_Result _get_HAPI_RESULT_CANT_LOAD_PRESET();
    // Set static field: static public HoudiniEngineUnity.HAPI_Result HAPI_RESULT_CANT_LOAD_PRESET
    static void _set_HAPI_RESULT_CANT_LOAD_PRESET(HoudiniEngineUnity::HAPI_Result value);
    // static field const value: static public HoudiniEngineUnity.HAPI_Result HAPI_RESULT_ASSET_DEF_ALREADY_LOADED
    static constexpr const int HAPI_RESULT_ASSET_DEF_ALREADY_LOADED = 10;
    // Get static field: static public HoudiniEngineUnity.HAPI_Result HAPI_RESULT_ASSET_DEF_ALREADY_LOADED
    static HoudiniEngineUnity::HAPI_Result _get_HAPI_RESULT_ASSET_DEF_ALREADY_LOADED();
    // Set static field: static public HoudiniEngineUnity.HAPI_Result HAPI_RESULT_ASSET_DEF_ALREADY_LOADED
    static void _set_HAPI_RESULT_ASSET_DEF_ALREADY_LOADED(HoudiniEngineUnity::HAPI_Result value);
    // static field const value: static public HoudiniEngineUnity.HAPI_Result HAPI_RESULT_NO_LICENSE_FOUND
    static constexpr const int HAPI_RESULT_NO_LICENSE_FOUND = 110;
    // Get static field: static public HoudiniEngineUnity.HAPI_Result HAPI_RESULT_NO_LICENSE_FOUND
    static HoudiniEngineUnity::HAPI_Result _get_HAPI_RESULT_NO_LICENSE_FOUND();
    // Set static field: static public HoudiniEngineUnity.HAPI_Result HAPI_RESULT_NO_LICENSE_FOUND
    static void _set_HAPI_RESULT_NO_LICENSE_FOUND(HoudiniEngineUnity::HAPI_Result value);
    // static field const value: static public HoudiniEngineUnity.HAPI_Result HAPI_RESULT_DISALLOWED_NC_LICENSE_FOUND
    static constexpr const int HAPI_RESULT_DISALLOWED_NC_LICENSE_FOUND = 120;
    // Get static field: static public HoudiniEngineUnity.HAPI_Result HAPI_RESULT_DISALLOWED_NC_LICENSE_FOUND
    static HoudiniEngineUnity::HAPI_Result _get_HAPI_RESULT_DISALLOWED_NC_LICENSE_FOUND();
    // Set static field: static public HoudiniEngineUnity.HAPI_Result HAPI_RESULT_DISALLOWED_NC_LICENSE_FOUND
    static void _set_HAPI_RESULT_DISALLOWED_NC_LICENSE_FOUND(HoudiniEngineUnity::HAPI_Result value);
    // static field const value: static public HoudiniEngineUnity.HAPI_Result HAPI_RESULT_DISALLOWED_NC_ASSET_WITH_C_LICENSE
    static constexpr const int HAPI_RESULT_DISALLOWED_NC_ASSET_WITH_C_LICENSE = 130;
    // Get static field: static public HoudiniEngineUnity.HAPI_Result HAPI_RESULT_DISALLOWED_NC_ASSET_WITH_C_LICENSE
    static HoudiniEngineUnity::HAPI_Result _get_HAPI_RESULT_DISALLOWED_NC_ASSET_WITH_C_LICENSE();
    // Set static field: static public HoudiniEngineUnity.HAPI_Result HAPI_RESULT_DISALLOWED_NC_ASSET_WITH_C_LICENSE
    static void _set_HAPI_RESULT_DISALLOWED_NC_ASSET_WITH_C_LICENSE(HoudiniEngineUnity::HAPI_Result value);
    // static field const value: static public HoudiniEngineUnity.HAPI_Result HAPI_RESULT_DISALLOWED_NC_ASSET_WITH_LC_LICENSE
    static constexpr const int HAPI_RESULT_DISALLOWED_NC_ASSET_WITH_LC_LICENSE = 140;
    // Get static field: static public HoudiniEngineUnity.HAPI_Result HAPI_RESULT_DISALLOWED_NC_ASSET_WITH_LC_LICENSE
    static HoudiniEngineUnity::HAPI_Result _get_HAPI_RESULT_DISALLOWED_NC_ASSET_WITH_LC_LICENSE();
    // Set static field: static public HoudiniEngineUnity.HAPI_Result HAPI_RESULT_DISALLOWED_NC_ASSET_WITH_LC_LICENSE
    static void _set_HAPI_RESULT_DISALLOWED_NC_ASSET_WITH_LC_LICENSE(HoudiniEngineUnity::HAPI_Result value);
    // static field const value: static public HoudiniEngineUnity.HAPI_Result HAPI_RESULT_DISALLOWED_LC_ASSET_WITH_C_LICENSE
    static constexpr const int HAPI_RESULT_DISALLOWED_LC_ASSET_WITH_C_LICENSE = 150;
    // Get static field: static public HoudiniEngineUnity.HAPI_Result HAPI_RESULT_DISALLOWED_LC_ASSET_WITH_C_LICENSE
    static HoudiniEngineUnity::HAPI_Result _get_HAPI_RESULT_DISALLOWED_LC_ASSET_WITH_C_LICENSE();
    // Set static field: static public HoudiniEngineUnity.HAPI_Result HAPI_RESULT_DISALLOWED_LC_ASSET_WITH_C_LICENSE
    static void _set_HAPI_RESULT_DISALLOWED_LC_ASSET_WITH_C_LICENSE(HoudiniEngineUnity::HAPI_Result value);
    // static field const value: static public HoudiniEngineUnity.HAPI_Result HAPI_RESULT_DISALLOWED_HENGINEINDIE_W_3PARTY_PLUGIN
    static constexpr const int HAPI_RESULT_DISALLOWED_HENGINEINDIE_W_3PARTY_PLUGIN = 160;
    // Get static field: static public HoudiniEngineUnity.HAPI_Result HAPI_RESULT_DISALLOWED_HENGINEINDIE_W_3PARTY_PLUGIN
    static HoudiniEngineUnity::HAPI_Result _get_HAPI_RESULT_DISALLOWED_HENGINEINDIE_W_3PARTY_PLUGIN();
    // Set static field: static public HoudiniEngineUnity.HAPI_Result HAPI_RESULT_DISALLOWED_HENGINEINDIE_W_3PARTY_PLUGIN
    static void _set_HAPI_RESULT_DISALLOWED_HENGINEINDIE_W_3PARTY_PLUGIN(HoudiniEngineUnity::HAPI_Result value);
    // static field const value: static public HoudiniEngineUnity.HAPI_Result HAPI_RESULT_ASSET_INVALID
    static constexpr const int HAPI_RESULT_ASSET_INVALID = 200;
    // Get static field: static public HoudiniEngineUnity.HAPI_Result HAPI_RESULT_ASSET_INVALID
    static HoudiniEngineUnity::HAPI_Result _get_HAPI_RESULT_ASSET_INVALID();
    // Set static field: static public HoudiniEngineUnity.HAPI_Result HAPI_RESULT_ASSET_INVALID
    static void _set_HAPI_RESULT_ASSET_INVALID(HoudiniEngineUnity::HAPI_Result value);
    // static field const value: static public HoudiniEngineUnity.HAPI_Result HAPI_RESULT_NODE_INVALID
    static constexpr const int HAPI_RESULT_NODE_INVALID = 210;
    // Get static field: static public HoudiniEngineUnity.HAPI_Result HAPI_RESULT_NODE_INVALID
    static HoudiniEngineUnity::HAPI_Result _get_HAPI_RESULT_NODE_INVALID();
    // Set static field: static public HoudiniEngineUnity.HAPI_Result HAPI_RESULT_NODE_INVALID
    static void _set_HAPI_RESULT_NODE_INVALID(HoudiniEngineUnity::HAPI_Result value);
    // static field const value: static public HoudiniEngineUnity.HAPI_Result HAPI_RESULT_USER_INTERRUPTED
    static constexpr const int HAPI_RESULT_USER_INTERRUPTED = 300;
    // Get static field: static public HoudiniEngineUnity.HAPI_Result HAPI_RESULT_USER_INTERRUPTED
    static HoudiniEngineUnity::HAPI_Result _get_HAPI_RESULT_USER_INTERRUPTED();
    // Set static field: static public HoudiniEngineUnity.HAPI_Result HAPI_RESULT_USER_INTERRUPTED
    static void _set_HAPI_RESULT_USER_INTERRUPTED(HoudiniEngineUnity::HAPI_Result value);
    // static field const value: static public HoudiniEngineUnity.HAPI_Result HAPI_RESULT_INVALID_SESSION
    static constexpr const int HAPI_RESULT_INVALID_SESSION = 400;
    // Get static field: static public HoudiniEngineUnity.HAPI_Result HAPI_RESULT_INVALID_SESSION
    static HoudiniEngineUnity::HAPI_Result _get_HAPI_RESULT_INVALID_SESSION();
    // Set static field: static public HoudiniEngineUnity.HAPI_Result HAPI_RESULT_INVALID_SESSION
    static void _set_HAPI_RESULT_INVALID_SESSION(HoudiniEngineUnity::HAPI_Result value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // HoudiniEngineUnity.HAPI_Result
  #pragma pack(pop)
  static check_size<sizeof(HAPI_Result), 0 + sizeof(int)> __HoudiniEngineUnity_HAPI_ResultSizeCheck;
  static_assert(sizeof(HAPI_Result) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
