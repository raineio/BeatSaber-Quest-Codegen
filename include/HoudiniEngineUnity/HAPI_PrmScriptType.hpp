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
  // Forward declaring type: HAPI_PrmScriptType
  struct HAPI_PrmScriptType;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HAPI_PrmScriptType, "HoudiniEngineUnity", "HAPI_PrmScriptType");
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: HoudiniEngineUnity.HAPI_PrmScriptType
  // [TokenAttribute] Offset: FFFFFFFF
  struct HAPI_PrmScriptType/*, public System::Enum*/ {
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
    // Creating value type constructor for type: HAPI_PrmScriptType
    constexpr HAPI_PrmScriptType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public HoudiniEngineUnity.HAPI_PrmScriptType HAPI_PRM_SCRIPT_TYPE_INT
    static constexpr const int HAPI_PRM_SCRIPT_TYPE_INT = 0;
    // Get static field: static public HoudiniEngineUnity.HAPI_PrmScriptType HAPI_PRM_SCRIPT_TYPE_INT
    static HoudiniEngineUnity::HAPI_PrmScriptType _get_HAPI_PRM_SCRIPT_TYPE_INT();
    // Set static field: static public HoudiniEngineUnity.HAPI_PrmScriptType HAPI_PRM_SCRIPT_TYPE_INT
    static void _set_HAPI_PRM_SCRIPT_TYPE_INT(HoudiniEngineUnity::HAPI_PrmScriptType value);
    // static field const value: static public HoudiniEngineUnity.HAPI_PrmScriptType HAPI_PRM_SCRIPT_TYPE_FLOAT
    static constexpr const int HAPI_PRM_SCRIPT_TYPE_FLOAT = 1;
    // Get static field: static public HoudiniEngineUnity.HAPI_PrmScriptType HAPI_PRM_SCRIPT_TYPE_FLOAT
    static HoudiniEngineUnity::HAPI_PrmScriptType _get_HAPI_PRM_SCRIPT_TYPE_FLOAT();
    // Set static field: static public HoudiniEngineUnity.HAPI_PrmScriptType HAPI_PRM_SCRIPT_TYPE_FLOAT
    static void _set_HAPI_PRM_SCRIPT_TYPE_FLOAT(HoudiniEngineUnity::HAPI_PrmScriptType value);
    // static field const value: static public HoudiniEngineUnity.HAPI_PrmScriptType HAPI_PRM_SCRIPT_TYPE_ANGLE
    static constexpr const int HAPI_PRM_SCRIPT_TYPE_ANGLE = 2;
    // Get static field: static public HoudiniEngineUnity.HAPI_PrmScriptType HAPI_PRM_SCRIPT_TYPE_ANGLE
    static HoudiniEngineUnity::HAPI_PrmScriptType _get_HAPI_PRM_SCRIPT_TYPE_ANGLE();
    // Set static field: static public HoudiniEngineUnity.HAPI_PrmScriptType HAPI_PRM_SCRIPT_TYPE_ANGLE
    static void _set_HAPI_PRM_SCRIPT_TYPE_ANGLE(HoudiniEngineUnity::HAPI_PrmScriptType value);
    // static field const value: static public HoudiniEngineUnity.HAPI_PrmScriptType HAPI_PRM_SCRIPT_TYPE_STRING
    static constexpr const int HAPI_PRM_SCRIPT_TYPE_STRING = 3;
    // Get static field: static public HoudiniEngineUnity.HAPI_PrmScriptType HAPI_PRM_SCRIPT_TYPE_STRING
    static HoudiniEngineUnity::HAPI_PrmScriptType _get_HAPI_PRM_SCRIPT_TYPE_STRING();
    // Set static field: static public HoudiniEngineUnity.HAPI_PrmScriptType HAPI_PRM_SCRIPT_TYPE_STRING
    static void _set_HAPI_PRM_SCRIPT_TYPE_STRING(HoudiniEngineUnity::HAPI_PrmScriptType value);
    // static field const value: static public HoudiniEngineUnity.HAPI_PrmScriptType HAPI_PRM_SCRIPT_TYPE_FILE
    static constexpr const int HAPI_PRM_SCRIPT_TYPE_FILE = 4;
    // Get static field: static public HoudiniEngineUnity.HAPI_PrmScriptType HAPI_PRM_SCRIPT_TYPE_FILE
    static HoudiniEngineUnity::HAPI_PrmScriptType _get_HAPI_PRM_SCRIPT_TYPE_FILE();
    // Set static field: static public HoudiniEngineUnity.HAPI_PrmScriptType HAPI_PRM_SCRIPT_TYPE_FILE
    static void _set_HAPI_PRM_SCRIPT_TYPE_FILE(HoudiniEngineUnity::HAPI_PrmScriptType value);
    // static field const value: static public HoudiniEngineUnity.HAPI_PrmScriptType HAPI_PRM_SCRIPT_TYPE_DIRECTORY
    static constexpr const int HAPI_PRM_SCRIPT_TYPE_DIRECTORY = 5;
    // Get static field: static public HoudiniEngineUnity.HAPI_PrmScriptType HAPI_PRM_SCRIPT_TYPE_DIRECTORY
    static HoudiniEngineUnity::HAPI_PrmScriptType _get_HAPI_PRM_SCRIPT_TYPE_DIRECTORY();
    // Set static field: static public HoudiniEngineUnity.HAPI_PrmScriptType HAPI_PRM_SCRIPT_TYPE_DIRECTORY
    static void _set_HAPI_PRM_SCRIPT_TYPE_DIRECTORY(HoudiniEngineUnity::HAPI_PrmScriptType value);
    // static field const value: static public HoudiniEngineUnity.HAPI_PrmScriptType HAPI_PRM_SCRIPT_TYPE_IMAGE
    static constexpr const int HAPI_PRM_SCRIPT_TYPE_IMAGE = 6;
    // Get static field: static public HoudiniEngineUnity.HAPI_PrmScriptType HAPI_PRM_SCRIPT_TYPE_IMAGE
    static HoudiniEngineUnity::HAPI_PrmScriptType _get_HAPI_PRM_SCRIPT_TYPE_IMAGE();
    // Set static field: static public HoudiniEngineUnity.HAPI_PrmScriptType HAPI_PRM_SCRIPT_TYPE_IMAGE
    static void _set_HAPI_PRM_SCRIPT_TYPE_IMAGE(HoudiniEngineUnity::HAPI_PrmScriptType value);
    // static field const value: static public HoudiniEngineUnity.HAPI_PrmScriptType HAPI_PRM_SCRIPT_TYPE_GEOMETRY
    static constexpr const int HAPI_PRM_SCRIPT_TYPE_GEOMETRY = 7;
    // Get static field: static public HoudiniEngineUnity.HAPI_PrmScriptType HAPI_PRM_SCRIPT_TYPE_GEOMETRY
    static HoudiniEngineUnity::HAPI_PrmScriptType _get_HAPI_PRM_SCRIPT_TYPE_GEOMETRY();
    // Set static field: static public HoudiniEngineUnity.HAPI_PrmScriptType HAPI_PRM_SCRIPT_TYPE_GEOMETRY
    static void _set_HAPI_PRM_SCRIPT_TYPE_GEOMETRY(HoudiniEngineUnity::HAPI_PrmScriptType value);
    // static field const value: static public HoudiniEngineUnity.HAPI_PrmScriptType HAPI_PRM_SCRIPT_TYPE_TOGGLE
    static constexpr const int HAPI_PRM_SCRIPT_TYPE_TOGGLE = 8;
    // Get static field: static public HoudiniEngineUnity.HAPI_PrmScriptType HAPI_PRM_SCRIPT_TYPE_TOGGLE
    static HoudiniEngineUnity::HAPI_PrmScriptType _get_HAPI_PRM_SCRIPT_TYPE_TOGGLE();
    // Set static field: static public HoudiniEngineUnity.HAPI_PrmScriptType HAPI_PRM_SCRIPT_TYPE_TOGGLE
    static void _set_HAPI_PRM_SCRIPT_TYPE_TOGGLE(HoudiniEngineUnity::HAPI_PrmScriptType value);
    // static field const value: static public HoudiniEngineUnity.HAPI_PrmScriptType HAPI_PRM_SCRIPT_TYPE_BUTTON
    static constexpr const int HAPI_PRM_SCRIPT_TYPE_BUTTON = 9;
    // Get static field: static public HoudiniEngineUnity.HAPI_PrmScriptType HAPI_PRM_SCRIPT_TYPE_BUTTON
    static HoudiniEngineUnity::HAPI_PrmScriptType _get_HAPI_PRM_SCRIPT_TYPE_BUTTON();
    // Set static field: static public HoudiniEngineUnity.HAPI_PrmScriptType HAPI_PRM_SCRIPT_TYPE_BUTTON
    static void _set_HAPI_PRM_SCRIPT_TYPE_BUTTON(HoudiniEngineUnity::HAPI_PrmScriptType value);
    // static field const value: static public HoudiniEngineUnity.HAPI_PrmScriptType HAPI_PRM_SCRIPT_TYPE_VECTOR2
    static constexpr const int HAPI_PRM_SCRIPT_TYPE_VECTOR2 = 10;
    // Get static field: static public HoudiniEngineUnity.HAPI_PrmScriptType HAPI_PRM_SCRIPT_TYPE_VECTOR2
    static HoudiniEngineUnity::HAPI_PrmScriptType _get_HAPI_PRM_SCRIPT_TYPE_VECTOR2();
    // Set static field: static public HoudiniEngineUnity.HAPI_PrmScriptType HAPI_PRM_SCRIPT_TYPE_VECTOR2
    static void _set_HAPI_PRM_SCRIPT_TYPE_VECTOR2(HoudiniEngineUnity::HAPI_PrmScriptType value);
    // static field const value: static public HoudiniEngineUnity.HAPI_PrmScriptType HAPI_PRM_SCRIPT_TYPE_VECTOR3
    static constexpr const int HAPI_PRM_SCRIPT_TYPE_VECTOR3 = 11;
    // Get static field: static public HoudiniEngineUnity.HAPI_PrmScriptType HAPI_PRM_SCRIPT_TYPE_VECTOR3
    static HoudiniEngineUnity::HAPI_PrmScriptType _get_HAPI_PRM_SCRIPT_TYPE_VECTOR3();
    // Set static field: static public HoudiniEngineUnity.HAPI_PrmScriptType HAPI_PRM_SCRIPT_TYPE_VECTOR3
    static void _set_HAPI_PRM_SCRIPT_TYPE_VECTOR3(HoudiniEngineUnity::HAPI_PrmScriptType value);
    // static field const value: static public HoudiniEngineUnity.HAPI_PrmScriptType HAPI_PRM_SCRIPT_TYPE_VECTOR4
    static constexpr const int HAPI_PRM_SCRIPT_TYPE_VECTOR4 = 12;
    // Get static field: static public HoudiniEngineUnity.HAPI_PrmScriptType HAPI_PRM_SCRIPT_TYPE_VECTOR4
    static HoudiniEngineUnity::HAPI_PrmScriptType _get_HAPI_PRM_SCRIPT_TYPE_VECTOR4();
    // Set static field: static public HoudiniEngineUnity.HAPI_PrmScriptType HAPI_PRM_SCRIPT_TYPE_VECTOR4
    static void _set_HAPI_PRM_SCRIPT_TYPE_VECTOR4(HoudiniEngineUnity::HAPI_PrmScriptType value);
    // static field const value: static public HoudiniEngineUnity.HAPI_PrmScriptType HAPI_PRM_SCRIPT_TYPE_INTVECTOR2
    static constexpr const int HAPI_PRM_SCRIPT_TYPE_INTVECTOR2 = 13;
    // Get static field: static public HoudiniEngineUnity.HAPI_PrmScriptType HAPI_PRM_SCRIPT_TYPE_INTVECTOR2
    static HoudiniEngineUnity::HAPI_PrmScriptType _get_HAPI_PRM_SCRIPT_TYPE_INTVECTOR2();
    // Set static field: static public HoudiniEngineUnity.HAPI_PrmScriptType HAPI_PRM_SCRIPT_TYPE_INTVECTOR2
    static void _set_HAPI_PRM_SCRIPT_TYPE_INTVECTOR2(HoudiniEngineUnity::HAPI_PrmScriptType value);
    // static field const value: static public HoudiniEngineUnity.HAPI_PrmScriptType HAPI_PRM_SCRIPT_TYPE_INTVECTOR3
    static constexpr const int HAPI_PRM_SCRIPT_TYPE_INTVECTOR3 = 14;
    // Get static field: static public HoudiniEngineUnity.HAPI_PrmScriptType HAPI_PRM_SCRIPT_TYPE_INTVECTOR3
    static HoudiniEngineUnity::HAPI_PrmScriptType _get_HAPI_PRM_SCRIPT_TYPE_INTVECTOR3();
    // Set static field: static public HoudiniEngineUnity.HAPI_PrmScriptType HAPI_PRM_SCRIPT_TYPE_INTVECTOR3
    static void _set_HAPI_PRM_SCRIPT_TYPE_INTVECTOR3(HoudiniEngineUnity::HAPI_PrmScriptType value);
    // static field const value: static public HoudiniEngineUnity.HAPI_PrmScriptType HAPI_PRM_SCRIPT_TYPE_INTVECTOR4
    static constexpr const int HAPI_PRM_SCRIPT_TYPE_INTVECTOR4 = 15;
    // Get static field: static public HoudiniEngineUnity.HAPI_PrmScriptType HAPI_PRM_SCRIPT_TYPE_INTVECTOR4
    static HoudiniEngineUnity::HAPI_PrmScriptType _get_HAPI_PRM_SCRIPT_TYPE_INTVECTOR4();
    // Set static field: static public HoudiniEngineUnity.HAPI_PrmScriptType HAPI_PRM_SCRIPT_TYPE_INTVECTOR4
    static void _set_HAPI_PRM_SCRIPT_TYPE_INTVECTOR4(HoudiniEngineUnity::HAPI_PrmScriptType value);
    // static field const value: static public HoudiniEngineUnity.HAPI_PrmScriptType HAPI_PRM_SCRIPT_TYPE_UV
    static constexpr const int HAPI_PRM_SCRIPT_TYPE_UV = 16;
    // Get static field: static public HoudiniEngineUnity.HAPI_PrmScriptType HAPI_PRM_SCRIPT_TYPE_UV
    static HoudiniEngineUnity::HAPI_PrmScriptType _get_HAPI_PRM_SCRIPT_TYPE_UV();
    // Set static field: static public HoudiniEngineUnity.HAPI_PrmScriptType HAPI_PRM_SCRIPT_TYPE_UV
    static void _set_HAPI_PRM_SCRIPT_TYPE_UV(HoudiniEngineUnity::HAPI_PrmScriptType value);
    // static field const value: static public HoudiniEngineUnity.HAPI_PrmScriptType HAPI_PRM_SCRIPT_TYPE_UVW
    static constexpr const int HAPI_PRM_SCRIPT_TYPE_UVW = 17;
    // Get static field: static public HoudiniEngineUnity.HAPI_PrmScriptType HAPI_PRM_SCRIPT_TYPE_UVW
    static HoudiniEngineUnity::HAPI_PrmScriptType _get_HAPI_PRM_SCRIPT_TYPE_UVW();
    // Set static field: static public HoudiniEngineUnity.HAPI_PrmScriptType HAPI_PRM_SCRIPT_TYPE_UVW
    static void _set_HAPI_PRM_SCRIPT_TYPE_UVW(HoudiniEngineUnity::HAPI_PrmScriptType value);
    // static field const value: static public HoudiniEngineUnity.HAPI_PrmScriptType HAPI_PRM_SCRIPT_TYPE_DIR
    static constexpr const int HAPI_PRM_SCRIPT_TYPE_DIR = 18;
    // Get static field: static public HoudiniEngineUnity.HAPI_PrmScriptType HAPI_PRM_SCRIPT_TYPE_DIR
    static HoudiniEngineUnity::HAPI_PrmScriptType _get_HAPI_PRM_SCRIPT_TYPE_DIR();
    // Set static field: static public HoudiniEngineUnity.HAPI_PrmScriptType HAPI_PRM_SCRIPT_TYPE_DIR
    static void _set_HAPI_PRM_SCRIPT_TYPE_DIR(HoudiniEngineUnity::HAPI_PrmScriptType value);
    // static field const value: static public HoudiniEngineUnity.HAPI_PrmScriptType HAPI_PRM_SCRIPT_TYPE_COLOR
    static constexpr const int HAPI_PRM_SCRIPT_TYPE_COLOR = 19;
    // Get static field: static public HoudiniEngineUnity.HAPI_PrmScriptType HAPI_PRM_SCRIPT_TYPE_COLOR
    static HoudiniEngineUnity::HAPI_PrmScriptType _get_HAPI_PRM_SCRIPT_TYPE_COLOR();
    // Set static field: static public HoudiniEngineUnity.HAPI_PrmScriptType HAPI_PRM_SCRIPT_TYPE_COLOR
    static void _set_HAPI_PRM_SCRIPT_TYPE_COLOR(HoudiniEngineUnity::HAPI_PrmScriptType value);
    // static field const value: static public HoudiniEngineUnity.HAPI_PrmScriptType HAPI_PRM_SCRIPT_TYPE_COLOR4
    static constexpr const int HAPI_PRM_SCRIPT_TYPE_COLOR4 = 20;
    // Get static field: static public HoudiniEngineUnity.HAPI_PrmScriptType HAPI_PRM_SCRIPT_TYPE_COLOR4
    static HoudiniEngineUnity::HAPI_PrmScriptType _get_HAPI_PRM_SCRIPT_TYPE_COLOR4();
    // Set static field: static public HoudiniEngineUnity.HAPI_PrmScriptType HAPI_PRM_SCRIPT_TYPE_COLOR4
    static void _set_HAPI_PRM_SCRIPT_TYPE_COLOR4(HoudiniEngineUnity::HAPI_PrmScriptType value);
    // static field const value: static public HoudiniEngineUnity.HAPI_PrmScriptType HAPI_PRM_SCRIPT_TYPE_OPPATH
    static constexpr const int HAPI_PRM_SCRIPT_TYPE_OPPATH = 21;
    // Get static field: static public HoudiniEngineUnity.HAPI_PrmScriptType HAPI_PRM_SCRIPT_TYPE_OPPATH
    static HoudiniEngineUnity::HAPI_PrmScriptType _get_HAPI_PRM_SCRIPT_TYPE_OPPATH();
    // Set static field: static public HoudiniEngineUnity.HAPI_PrmScriptType HAPI_PRM_SCRIPT_TYPE_OPPATH
    static void _set_HAPI_PRM_SCRIPT_TYPE_OPPATH(HoudiniEngineUnity::HAPI_PrmScriptType value);
    // static field const value: static public HoudiniEngineUnity.HAPI_PrmScriptType HAPI_PRM_SCRIPT_TYPE_OPLIST
    static constexpr const int HAPI_PRM_SCRIPT_TYPE_OPLIST = 22;
    // Get static field: static public HoudiniEngineUnity.HAPI_PrmScriptType HAPI_PRM_SCRIPT_TYPE_OPLIST
    static HoudiniEngineUnity::HAPI_PrmScriptType _get_HAPI_PRM_SCRIPT_TYPE_OPLIST();
    // Set static field: static public HoudiniEngineUnity.HAPI_PrmScriptType HAPI_PRM_SCRIPT_TYPE_OPLIST
    static void _set_HAPI_PRM_SCRIPT_TYPE_OPLIST(HoudiniEngineUnity::HAPI_PrmScriptType value);
    // static field const value: static public HoudiniEngineUnity.HAPI_PrmScriptType HAPI_PRM_SCRIPT_TYPE_OBJECT
    static constexpr const int HAPI_PRM_SCRIPT_TYPE_OBJECT = 23;
    // Get static field: static public HoudiniEngineUnity.HAPI_PrmScriptType HAPI_PRM_SCRIPT_TYPE_OBJECT
    static HoudiniEngineUnity::HAPI_PrmScriptType _get_HAPI_PRM_SCRIPT_TYPE_OBJECT();
    // Set static field: static public HoudiniEngineUnity.HAPI_PrmScriptType HAPI_PRM_SCRIPT_TYPE_OBJECT
    static void _set_HAPI_PRM_SCRIPT_TYPE_OBJECT(HoudiniEngineUnity::HAPI_PrmScriptType value);
    // static field const value: static public HoudiniEngineUnity.HAPI_PrmScriptType HAPI_PRM_SCRIPT_TYPE_OBJECTLIST
    static constexpr const int HAPI_PRM_SCRIPT_TYPE_OBJECTLIST = 24;
    // Get static field: static public HoudiniEngineUnity.HAPI_PrmScriptType HAPI_PRM_SCRIPT_TYPE_OBJECTLIST
    static HoudiniEngineUnity::HAPI_PrmScriptType _get_HAPI_PRM_SCRIPT_TYPE_OBJECTLIST();
    // Set static field: static public HoudiniEngineUnity.HAPI_PrmScriptType HAPI_PRM_SCRIPT_TYPE_OBJECTLIST
    static void _set_HAPI_PRM_SCRIPT_TYPE_OBJECTLIST(HoudiniEngineUnity::HAPI_PrmScriptType value);
    // static field const value: static public HoudiniEngineUnity.HAPI_PrmScriptType HAPI_PRM_SCRIPT_TYPE_RENDER
    static constexpr const int HAPI_PRM_SCRIPT_TYPE_RENDER = 25;
    // Get static field: static public HoudiniEngineUnity.HAPI_PrmScriptType HAPI_PRM_SCRIPT_TYPE_RENDER
    static HoudiniEngineUnity::HAPI_PrmScriptType _get_HAPI_PRM_SCRIPT_TYPE_RENDER();
    // Set static field: static public HoudiniEngineUnity.HAPI_PrmScriptType HAPI_PRM_SCRIPT_TYPE_RENDER
    static void _set_HAPI_PRM_SCRIPT_TYPE_RENDER(HoudiniEngineUnity::HAPI_PrmScriptType value);
    // static field const value: static public HoudiniEngineUnity.HAPI_PrmScriptType HAPI_PRM_SCRIPT_TYPE_SEPARATOR
    static constexpr const int HAPI_PRM_SCRIPT_TYPE_SEPARATOR = 26;
    // Get static field: static public HoudiniEngineUnity.HAPI_PrmScriptType HAPI_PRM_SCRIPT_TYPE_SEPARATOR
    static HoudiniEngineUnity::HAPI_PrmScriptType _get_HAPI_PRM_SCRIPT_TYPE_SEPARATOR();
    // Set static field: static public HoudiniEngineUnity.HAPI_PrmScriptType HAPI_PRM_SCRIPT_TYPE_SEPARATOR
    static void _set_HAPI_PRM_SCRIPT_TYPE_SEPARATOR(HoudiniEngineUnity::HAPI_PrmScriptType value);
    // static field const value: static public HoudiniEngineUnity.HAPI_PrmScriptType HAPI_PRM_SCRIPT_TYPE_GEOMETRY_DATA
    static constexpr const int HAPI_PRM_SCRIPT_TYPE_GEOMETRY_DATA = 27;
    // Get static field: static public HoudiniEngineUnity.HAPI_PrmScriptType HAPI_PRM_SCRIPT_TYPE_GEOMETRY_DATA
    static HoudiniEngineUnity::HAPI_PrmScriptType _get_HAPI_PRM_SCRIPT_TYPE_GEOMETRY_DATA();
    // Set static field: static public HoudiniEngineUnity.HAPI_PrmScriptType HAPI_PRM_SCRIPT_TYPE_GEOMETRY_DATA
    static void _set_HAPI_PRM_SCRIPT_TYPE_GEOMETRY_DATA(HoudiniEngineUnity::HAPI_PrmScriptType value);
    // static field const value: static public HoudiniEngineUnity.HAPI_PrmScriptType HAPI_PRM_SCRIPT_TYPE_KEY_VALUE_DICT
    static constexpr const int HAPI_PRM_SCRIPT_TYPE_KEY_VALUE_DICT = 28;
    // Get static field: static public HoudiniEngineUnity.HAPI_PrmScriptType HAPI_PRM_SCRIPT_TYPE_KEY_VALUE_DICT
    static HoudiniEngineUnity::HAPI_PrmScriptType _get_HAPI_PRM_SCRIPT_TYPE_KEY_VALUE_DICT();
    // Set static field: static public HoudiniEngineUnity.HAPI_PrmScriptType HAPI_PRM_SCRIPT_TYPE_KEY_VALUE_DICT
    static void _set_HAPI_PRM_SCRIPT_TYPE_KEY_VALUE_DICT(HoudiniEngineUnity::HAPI_PrmScriptType value);
    // static field const value: static public HoudiniEngineUnity.HAPI_PrmScriptType HAPI_PRM_SCRIPT_TYPE_LABEL
    static constexpr const int HAPI_PRM_SCRIPT_TYPE_LABEL = 29;
    // Get static field: static public HoudiniEngineUnity.HAPI_PrmScriptType HAPI_PRM_SCRIPT_TYPE_LABEL
    static HoudiniEngineUnity::HAPI_PrmScriptType _get_HAPI_PRM_SCRIPT_TYPE_LABEL();
    // Set static field: static public HoudiniEngineUnity.HAPI_PrmScriptType HAPI_PRM_SCRIPT_TYPE_LABEL
    static void _set_HAPI_PRM_SCRIPT_TYPE_LABEL(HoudiniEngineUnity::HAPI_PrmScriptType value);
    // static field const value: static public HoudiniEngineUnity.HAPI_PrmScriptType HAPI_PRM_SCRIPT_TYPE_RGBAMASK
    static constexpr const int HAPI_PRM_SCRIPT_TYPE_RGBAMASK = 30;
    // Get static field: static public HoudiniEngineUnity.HAPI_PrmScriptType HAPI_PRM_SCRIPT_TYPE_RGBAMASK
    static HoudiniEngineUnity::HAPI_PrmScriptType _get_HAPI_PRM_SCRIPT_TYPE_RGBAMASK();
    // Set static field: static public HoudiniEngineUnity.HAPI_PrmScriptType HAPI_PRM_SCRIPT_TYPE_RGBAMASK
    static void _set_HAPI_PRM_SCRIPT_TYPE_RGBAMASK(HoudiniEngineUnity::HAPI_PrmScriptType value);
    // static field const value: static public HoudiniEngineUnity.HAPI_PrmScriptType HAPI_PRM_SCRIPT_TYPE_ORDINAL
    static constexpr const int HAPI_PRM_SCRIPT_TYPE_ORDINAL = 31;
    // Get static field: static public HoudiniEngineUnity.HAPI_PrmScriptType HAPI_PRM_SCRIPT_TYPE_ORDINAL
    static HoudiniEngineUnity::HAPI_PrmScriptType _get_HAPI_PRM_SCRIPT_TYPE_ORDINAL();
    // Set static field: static public HoudiniEngineUnity.HAPI_PrmScriptType HAPI_PRM_SCRIPT_TYPE_ORDINAL
    static void _set_HAPI_PRM_SCRIPT_TYPE_ORDINAL(HoudiniEngineUnity::HAPI_PrmScriptType value);
    // static field const value: static public HoudiniEngineUnity.HAPI_PrmScriptType HAPI_PRM_SCRIPT_TYPE_RAMP_FLT
    static constexpr const int HAPI_PRM_SCRIPT_TYPE_RAMP_FLT = 32;
    // Get static field: static public HoudiniEngineUnity.HAPI_PrmScriptType HAPI_PRM_SCRIPT_TYPE_RAMP_FLT
    static HoudiniEngineUnity::HAPI_PrmScriptType _get_HAPI_PRM_SCRIPT_TYPE_RAMP_FLT();
    // Set static field: static public HoudiniEngineUnity.HAPI_PrmScriptType HAPI_PRM_SCRIPT_TYPE_RAMP_FLT
    static void _set_HAPI_PRM_SCRIPT_TYPE_RAMP_FLT(HoudiniEngineUnity::HAPI_PrmScriptType value);
    // static field const value: static public HoudiniEngineUnity.HAPI_PrmScriptType HAPI_PRM_SCRIPT_TYPE_RAMP_RGB
    static constexpr const int HAPI_PRM_SCRIPT_TYPE_RAMP_RGB = 33;
    // Get static field: static public HoudiniEngineUnity.HAPI_PrmScriptType HAPI_PRM_SCRIPT_TYPE_RAMP_RGB
    static HoudiniEngineUnity::HAPI_PrmScriptType _get_HAPI_PRM_SCRIPT_TYPE_RAMP_RGB();
    // Set static field: static public HoudiniEngineUnity.HAPI_PrmScriptType HAPI_PRM_SCRIPT_TYPE_RAMP_RGB
    static void _set_HAPI_PRM_SCRIPT_TYPE_RAMP_RGB(HoudiniEngineUnity::HAPI_PrmScriptType value);
    // static field const value: static public HoudiniEngineUnity.HAPI_PrmScriptType HAPI_PRM_SCRIPT_TYPE_FLOAT_LOG
    static constexpr const int HAPI_PRM_SCRIPT_TYPE_FLOAT_LOG = 34;
    // Get static field: static public HoudiniEngineUnity.HAPI_PrmScriptType HAPI_PRM_SCRIPT_TYPE_FLOAT_LOG
    static HoudiniEngineUnity::HAPI_PrmScriptType _get_HAPI_PRM_SCRIPT_TYPE_FLOAT_LOG();
    // Set static field: static public HoudiniEngineUnity.HAPI_PrmScriptType HAPI_PRM_SCRIPT_TYPE_FLOAT_LOG
    static void _set_HAPI_PRM_SCRIPT_TYPE_FLOAT_LOG(HoudiniEngineUnity::HAPI_PrmScriptType value);
    // static field const value: static public HoudiniEngineUnity.HAPI_PrmScriptType HAPI_PRM_SCRIPT_TYPE_INT_LOG
    static constexpr const int HAPI_PRM_SCRIPT_TYPE_INT_LOG = 35;
    // Get static field: static public HoudiniEngineUnity.HAPI_PrmScriptType HAPI_PRM_SCRIPT_TYPE_INT_LOG
    static HoudiniEngineUnity::HAPI_PrmScriptType _get_HAPI_PRM_SCRIPT_TYPE_INT_LOG();
    // Set static field: static public HoudiniEngineUnity.HAPI_PrmScriptType HAPI_PRM_SCRIPT_TYPE_INT_LOG
    static void _set_HAPI_PRM_SCRIPT_TYPE_INT_LOG(HoudiniEngineUnity::HAPI_PrmScriptType value);
    // static field const value: static public HoudiniEngineUnity.HAPI_PrmScriptType HAPI_PRM_SCRIPT_TYPE_DATA
    static constexpr const int HAPI_PRM_SCRIPT_TYPE_DATA = 36;
    // Get static field: static public HoudiniEngineUnity.HAPI_PrmScriptType HAPI_PRM_SCRIPT_TYPE_DATA
    static HoudiniEngineUnity::HAPI_PrmScriptType _get_HAPI_PRM_SCRIPT_TYPE_DATA();
    // Set static field: static public HoudiniEngineUnity.HAPI_PrmScriptType HAPI_PRM_SCRIPT_TYPE_DATA
    static void _set_HAPI_PRM_SCRIPT_TYPE_DATA(HoudiniEngineUnity::HAPI_PrmScriptType value);
    // static field const value: static public HoudiniEngineUnity.HAPI_PrmScriptType HAPI_PRM_SCRIPT_TYPE_FLOAT_MINMAX
    static constexpr const int HAPI_PRM_SCRIPT_TYPE_FLOAT_MINMAX = 37;
    // Get static field: static public HoudiniEngineUnity.HAPI_PrmScriptType HAPI_PRM_SCRIPT_TYPE_FLOAT_MINMAX
    static HoudiniEngineUnity::HAPI_PrmScriptType _get_HAPI_PRM_SCRIPT_TYPE_FLOAT_MINMAX();
    // Set static field: static public HoudiniEngineUnity.HAPI_PrmScriptType HAPI_PRM_SCRIPT_TYPE_FLOAT_MINMAX
    static void _set_HAPI_PRM_SCRIPT_TYPE_FLOAT_MINMAX(HoudiniEngineUnity::HAPI_PrmScriptType value);
    // static field const value: static public HoudiniEngineUnity.HAPI_PrmScriptType HAPI_PRM_SCRIPT_TYPE_INT_MINMAX
    static constexpr const int HAPI_PRM_SCRIPT_TYPE_INT_MINMAX = 38;
    // Get static field: static public HoudiniEngineUnity.HAPI_PrmScriptType HAPI_PRM_SCRIPT_TYPE_INT_MINMAX
    static HoudiniEngineUnity::HAPI_PrmScriptType _get_HAPI_PRM_SCRIPT_TYPE_INT_MINMAX();
    // Set static field: static public HoudiniEngineUnity.HAPI_PrmScriptType HAPI_PRM_SCRIPT_TYPE_INT_MINMAX
    static void _set_HAPI_PRM_SCRIPT_TYPE_INT_MINMAX(HoudiniEngineUnity::HAPI_PrmScriptType value);
    // static field const value: static public HoudiniEngineUnity.HAPI_PrmScriptType HAPI_PRM_SCRIPT_TYPE_INT_STARTEND
    static constexpr const int HAPI_PRM_SCRIPT_TYPE_INT_STARTEND = 39;
    // Get static field: static public HoudiniEngineUnity.HAPI_PrmScriptType HAPI_PRM_SCRIPT_TYPE_INT_STARTEND
    static HoudiniEngineUnity::HAPI_PrmScriptType _get_HAPI_PRM_SCRIPT_TYPE_INT_STARTEND();
    // Set static field: static public HoudiniEngineUnity.HAPI_PrmScriptType HAPI_PRM_SCRIPT_TYPE_INT_STARTEND
    static void _set_HAPI_PRM_SCRIPT_TYPE_INT_STARTEND(HoudiniEngineUnity::HAPI_PrmScriptType value);
    // static field const value: static public HoudiniEngineUnity.HAPI_PrmScriptType HAPI_PRM_SCRIPT_TYPE_BUTTONSTRIP
    static constexpr const int HAPI_PRM_SCRIPT_TYPE_BUTTONSTRIP = 40;
    // Get static field: static public HoudiniEngineUnity.HAPI_PrmScriptType HAPI_PRM_SCRIPT_TYPE_BUTTONSTRIP
    static HoudiniEngineUnity::HAPI_PrmScriptType _get_HAPI_PRM_SCRIPT_TYPE_BUTTONSTRIP();
    // Set static field: static public HoudiniEngineUnity.HAPI_PrmScriptType HAPI_PRM_SCRIPT_TYPE_BUTTONSTRIP
    static void _set_HAPI_PRM_SCRIPT_TYPE_BUTTONSTRIP(HoudiniEngineUnity::HAPI_PrmScriptType value);
    // static field const value: static public HoudiniEngineUnity.HAPI_PrmScriptType HAPI_PRM_SCRIPT_TYPE_ICONSTRIP
    static constexpr const int HAPI_PRM_SCRIPT_TYPE_ICONSTRIP = 41;
    // Get static field: static public HoudiniEngineUnity.HAPI_PrmScriptType HAPI_PRM_SCRIPT_TYPE_ICONSTRIP
    static HoudiniEngineUnity::HAPI_PrmScriptType _get_HAPI_PRM_SCRIPT_TYPE_ICONSTRIP();
    // Set static field: static public HoudiniEngineUnity.HAPI_PrmScriptType HAPI_PRM_SCRIPT_TYPE_ICONSTRIP
    static void _set_HAPI_PRM_SCRIPT_TYPE_ICONSTRIP(HoudiniEngineUnity::HAPI_PrmScriptType value);
    // static field const value: static public HoudiniEngineUnity.HAPI_PrmScriptType HAPI_PRM_SCRIPT_TYPE_GROUPRADIO
    static constexpr const int HAPI_PRM_SCRIPT_TYPE_GROUPRADIO = 1000;
    // Get static field: static public HoudiniEngineUnity.HAPI_PrmScriptType HAPI_PRM_SCRIPT_TYPE_GROUPRADIO
    static HoudiniEngineUnity::HAPI_PrmScriptType _get_HAPI_PRM_SCRIPT_TYPE_GROUPRADIO();
    // Set static field: static public HoudiniEngineUnity.HAPI_PrmScriptType HAPI_PRM_SCRIPT_TYPE_GROUPRADIO
    static void _set_HAPI_PRM_SCRIPT_TYPE_GROUPRADIO(HoudiniEngineUnity::HAPI_PrmScriptType value);
    // static field const value: static public HoudiniEngineUnity.HAPI_PrmScriptType HAPI_PRM_SCRIPT_TYPE_GROUPCOLLAPSIBLE
    static constexpr const int HAPI_PRM_SCRIPT_TYPE_GROUPCOLLAPSIBLE = 1001;
    // Get static field: static public HoudiniEngineUnity.HAPI_PrmScriptType HAPI_PRM_SCRIPT_TYPE_GROUPCOLLAPSIBLE
    static HoudiniEngineUnity::HAPI_PrmScriptType _get_HAPI_PRM_SCRIPT_TYPE_GROUPCOLLAPSIBLE();
    // Set static field: static public HoudiniEngineUnity.HAPI_PrmScriptType HAPI_PRM_SCRIPT_TYPE_GROUPCOLLAPSIBLE
    static void _set_HAPI_PRM_SCRIPT_TYPE_GROUPCOLLAPSIBLE(HoudiniEngineUnity::HAPI_PrmScriptType value);
    // static field const value: static public HoudiniEngineUnity.HAPI_PrmScriptType HAPI_PRM_SCRIPT_TYPE_GROUPSIMPLE
    static constexpr const int HAPI_PRM_SCRIPT_TYPE_GROUPSIMPLE = 1002;
    // Get static field: static public HoudiniEngineUnity.HAPI_PrmScriptType HAPI_PRM_SCRIPT_TYPE_GROUPSIMPLE
    static HoudiniEngineUnity::HAPI_PrmScriptType _get_HAPI_PRM_SCRIPT_TYPE_GROUPSIMPLE();
    // Set static field: static public HoudiniEngineUnity.HAPI_PrmScriptType HAPI_PRM_SCRIPT_TYPE_GROUPSIMPLE
    static void _set_HAPI_PRM_SCRIPT_TYPE_GROUPSIMPLE(HoudiniEngineUnity::HAPI_PrmScriptType value);
    // static field const value: static public HoudiniEngineUnity.HAPI_PrmScriptType HAPI_PRM_SCRIPT_TYPE_GROUP
    static constexpr const int HAPI_PRM_SCRIPT_TYPE_GROUP = 1003;
    // Get static field: static public HoudiniEngineUnity.HAPI_PrmScriptType HAPI_PRM_SCRIPT_TYPE_GROUP
    static HoudiniEngineUnity::HAPI_PrmScriptType _get_HAPI_PRM_SCRIPT_TYPE_GROUP();
    // Set static field: static public HoudiniEngineUnity.HAPI_PrmScriptType HAPI_PRM_SCRIPT_TYPE_GROUP
    static void _set_HAPI_PRM_SCRIPT_TYPE_GROUP(HoudiniEngineUnity::HAPI_PrmScriptType value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // HoudiniEngineUnity.HAPI_PrmScriptType
  #pragma pack(pop)
  static check_size<sizeof(HAPI_PrmScriptType), 0 + sizeof(int)> __HoudiniEngineUnity_HAPI_PrmScriptTypeSizeCheck;
  static_assert(sizeof(HAPI_PrmScriptType) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
