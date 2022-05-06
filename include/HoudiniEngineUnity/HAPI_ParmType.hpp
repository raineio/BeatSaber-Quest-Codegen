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
  // Forward declaring type: HAPI_ParmType
  struct HAPI_ParmType;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HAPI_ParmType, "HoudiniEngineUnity", "HAPI_ParmType");
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: HoudiniEngineUnity.HAPI_ParmType
  // [TokenAttribute] Offset: FFFFFFFF
  struct HAPI_ParmType/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: HAPI_ParmType
    constexpr HAPI_ParmType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public HoudiniEngineUnity.HAPI_ParmType HAPI_PARMTYPE_INT
    static constexpr const int HAPI_PARMTYPE_INT = 0;
    // Get static field: static public HoudiniEngineUnity.HAPI_ParmType HAPI_PARMTYPE_INT
    static ::HoudiniEngineUnity::HAPI_ParmType _get_HAPI_PARMTYPE_INT();
    // Set static field: static public HoudiniEngineUnity.HAPI_ParmType HAPI_PARMTYPE_INT
    static void _set_HAPI_PARMTYPE_INT(::HoudiniEngineUnity::HAPI_ParmType value);
    // static field const value: static public HoudiniEngineUnity.HAPI_ParmType HAPI_PARMTYPE_MULTIPARMLIST
    static constexpr const int HAPI_PARMTYPE_MULTIPARMLIST = 1;
    // Get static field: static public HoudiniEngineUnity.HAPI_ParmType HAPI_PARMTYPE_MULTIPARMLIST
    static ::HoudiniEngineUnity::HAPI_ParmType _get_HAPI_PARMTYPE_MULTIPARMLIST();
    // Set static field: static public HoudiniEngineUnity.HAPI_ParmType HAPI_PARMTYPE_MULTIPARMLIST
    static void _set_HAPI_PARMTYPE_MULTIPARMLIST(::HoudiniEngineUnity::HAPI_ParmType value);
    // static field const value: static public HoudiniEngineUnity.HAPI_ParmType HAPI_PARMTYPE_TOGGLE
    static constexpr const int HAPI_PARMTYPE_TOGGLE = 2;
    // Get static field: static public HoudiniEngineUnity.HAPI_ParmType HAPI_PARMTYPE_TOGGLE
    static ::HoudiniEngineUnity::HAPI_ParmType _get_HAPI_PARMTYPE_TOGGLE();
    // Set static field: static public HoudiniEngineUnity.HAPI_ParmType HAPI_PARMTYPE_TOGGLE
    static void _set_HAPI_PARMTYPE_TOGGLE(::HoudiniEngineUnity::HAPI_ParmType value);
    // static field const value: static public HoudiniEngineUnity.HAPI_ParmType HAPI_PARMTYPE_BUTTON
    static constexpr const int HAPI_PARMTYPE_BUTTON = 3;
    // Get static field: static public HoudiniEngineUnity.HAPI_ParmType HAPI_PARMTYPE_BUTTON
    static ::HoudiniEngineUnity::HAPI_ParmType _get_HAPI_PARMTYPE_BUTTON();
    // Set static field: static public HoudiniEngineUnity.HAPI_ParmType HAPI_PARMTYPE_BUTTON
    static void _set_HAPI_PARMTYPE_BUTTON(::HoudiniEngineUnity::HAPI_ParmType value);
    // static field const value: static public HoudiniEngineUnity.HAPI_ParmType HAPI_PARMTYPE_FLOAT
    static constexpr const int HAPI_PARMTYPE_FLOAT = 4;
    // Get static field: static public HoudiniEngineUnity.HAPI_ParmType HAPI_PARMTYPE_FLOAT
    static ::HoudiniEngineUnity::HAPI_ParmType _get_HAPI_PARMTYPE_FLOAT();
    // Set static field: static public HoudiniEngineUnity.HAPI_ParmType HAPI_PARMTYPE_FLOAT
    static void _set_HAPI_PARMTYPE_FLOAT(::HoudiniEngineUnity::HAPI_ParmType value);
    // static field const value: static public HoudiniEngineUnity.HAPI_ParmType HAPI_PARMTYPE_COLOR
    static constexpr const int HAPI_PARMTYPE_COLOR = 5;
    // Get static field: static public HoudiniEngineUnity.HAPI_ParmType HAPI_PARMTYPE_COLOR
    static ::HoudiniEngineUnity::HAPI_ParmType _get_HAPI_PARMTYPE_COLOR();
    // Set static field: static public HoudiniEngineUnity.HAPI_ParmType HAPI_PARMTYPE_COLOR
    static void _set_HAPI_PARMTYPE_COLOR(::HoudiniEngineUnity::HAPI_ParmType value);
    // static field const value: static public HoudiniEngineUnity.HAPI_ParmType HAPI_PARMTYPE_STRING
    static constexpr const int HAPI_PARMTYPE_STRING = 6;
    // Get static field: static public HoudiniEngineUnity.HAPI_ParmType HAPI_PARMTYPE_STRING
    static ::HoudiniEngineUnity::HAPI_ParmType _get_HAPI_PARMTYPE_STRING();
    // Set static field: static public HoudiniEngineUnity.HAPI_ParmType HAPI_PARMTYPE_STRING
    static void _set_HAPI_PARMTYPE_STRING(::HoudiniEngineUnity::HAPI_ParmType value);
    // static field const value: static public HoudiniEngineUnity.HAPI_ParmType HAPI_PARMTYPE_PATH_FILE
    static constexpr const int HAPI_PARMTYPE_PATH_FILE = 7;
    // Get static field: static public HoudiniEngineUnity.HAPI_ParmType HAPI_PARMTYPE_PATH_FILE
    static ::HoudiniEngineUnity::HAPI_ParmType _get_HAPI_PARMTYPE_PATH_FILE();
    // Set static field: static public HoudiniEngineUnity.HAPI_ParmType HAPI_PARMTYPE_PATH_FILE
    static void _set_HAPI_PARMTYPE_PATH_FILE(::HoudiniEngineUnity::HAPI_ParmType value);
    // static field const value: static public HoudiniEngineUnity.HAPI_ParmType HAPI_PARMTYPE_PATH_FILE_GEO
    static constexpr const int HAPI_PARMTYPE_PATH_FILE_GEO = 8;
    // Get static field: static public HoudiniEngineUnity.HAPI_ParmType HAPI_PARMTYPE_PATH_FILE_GEO
    static ::HoudiniEngineUnity::HAPI_ParmType _get_HAPI_PARMTYPE_PATH_FILE_GEO();
    // Set static field: static public HoudiniEngineUnity.HAPI_ParmType HAPI_PARMTYPE_PATH_FILE_GEO
    static void _set_HAPI_PARMTYPE_PATH_FILE_GEO(::HoudiniEngineUnity::HAPI_ParmType value);
    // static field const value: static public HoudiniEngineUnity.HAPI_ParmType HAPI_PARMTYPE_PATH_FILE_IMAGE
    static constexpr const int HAPI_PARMTYPE_PATH_FILE_IMAGE = 9;
    // Get static field: static public HoudiniEngineUnity.HAPI_ParmType HAPI_PARMTYPE_PATH_FILE_IMAGE
    static ::HoudiniEngineUnity::HAPI_ParmType _get_HAPI_PARMTYPE_PATH_FILE_IMAGE();
    // Set static field: static public HoudiniEngineUnity.HAPI_ParmType HAPI_PARMTYPE_PATH_FILE_IMAGE
    static void _set_HAPI_PARMTYPE_PATH_FILE_IMAGE(::HoudiniEngineUnity::HAPI_ParmType value);
    // static field const value: static public HoudiniEngineUnity.HAPI_ParmType HAPI_PARMTYPE_NODE
    static constexpr const int HAPI_PARMTYPE_NODE = 10;
    // Get static field: static public HoudiniEngineUnity.HAPI_ParmType HAPI_PARMTYPE_NODE
    static ::HoudiniEngineUnity::HAPI_ParmType _get_HAPI_PARMTYPE_NODE();
    // Set static field: static public HoudiniEngineUnity.HAPI_ParmType HAPI_PARMTYPE_NODE
    static void _set_HAPI_PARMTYPE_NODE(::HoudiniEngineUnity::HAPI_ParmType value);
    // static field const value: static public HoudiniEngineUnity.HAPI_ParmType HAPI_PARMTYPE_FOLDERLIST
    static constexpr const int HAPI_PARMTYPE_FOLDERLIST = 11;
    // Get static field: static public HoudiniEngineUnity.HAPI_ParmType HAPI_PARMTYPE_FOLDERLIST
    static ::HoudiniEngineUnity::HAPI_ParmType _get_HAPI_PARMTYPE_FOLDERLIST();
    // Set static field: static public HoudiniEngineUnity.HAPI_ParmType HAPI_PARMTYPE_FOLDERLIST
    static void _set_HAPI_PARMTYPE_FOLDERLIST(::HoudiniEngineUnity::HAPI_ParmType value);
    // static field const value: static public HoudiniEngineUnity.HAPI_ParmType HAPI_PARMTYPE_FOLDERLIST_RADIO
    static constexpr const int HAPI_PARMTYPE_FOLDERLIST_RADIO = 12;
    // Get static field: static public HoudiniEngineUnity.HAPI_ParmType HAPI_PARMTYPE_FOLDERLIST_RADIO
    static ::HoudiniEngineUnity::HAPI_ParmType _get_HAPI_PARMTYPE_FOLDERLIST_RADIO();
    // Set static field: static public HoudiniEngineUnity.HAPI_ParmType HAPI_PARMTYPE_FOLDERLIST_RADIO
    static void _set_HAPI_PARMTYPE_FOLDERLIST_RADIO(::HoudiniEngineUnity::HAPI_ParmType value);
    // static field const value: static public HoudiniEngineUnity.HAPI_ParmType HAPI_PARMTYPE_FOLDER
    static constexpr const int HAPI_PARMTYPE_FOLDER = 13;
    // Get static field: static public HoudiniEngineUnity.HAPI_ParmType HAPI_PARMTYPE_FOLDER
    static ::HoudiniEngineUnity::HAPI_ParmType _get_HAPI_PARMTYPE_FOLDER();
    // Set static field: static public HoudiniEngineUnity.HAPI_ParmType HAPI_PARMTYPE_FOLDER
    static void _set_HAPI_PARMTYPE_FOLDER(::HoudiniEngineUnity::HAPI_ParmType value);
    // static field const value: static public HoudiniEngineUnity.HAPI_ParmType HAPI_PARMTYPE_LABEL
    static constexpr const int HAPI_PARMTYPE_LABEL = 14;
    // Get static field: static public HoudiniEngineUnity.HAPI_ParmType HAPI_PARMTYPE_LABEL
    static ::HoudiniEngineUnity::HAPI_ParmType _get_HAPI_PARMTYPE_LABEL();
    // Set static field: static public HoudiniEngineUnity.HAPI_ParmType HAPI_PARMTYPE_LABEL
    static void _set_HAPI_PARMTYPE_LABEL(::HoudiniEngineUnity::HAPI_ParmType value);
    // static field const value: static public HoudiniEngineUnity.HAPI_ParmType HAPI_PARMTYPE_SEPARATOR
    static constexpr const int HAPI_PARMTYPE_SEPARATOR = 15;
    // Get static field: static public HoudiniEngineUnity.HAPI_ParmType HAPI_PARMTYPE_SEPARATOR
    static ::HoudiniEngineUnity::HAPI_ParmType _get_HAPI_PARMTYPE_SEPARATOR();
    // Set static field: static public HoudiniEngineUnity.HAPI_ParmType HAPI_PARMTYPE_SEPARATOR
    static void _set_HAPI_PARMTYPE_SEPARATOR(::HoudiniEngineUnity::HAPI_ParmType value);
    // static field const value: static public HoudiniEngineUnity.HAPI_ParmType HAPI_PARMTYPE_PATH_FILE_DIR
    static constexpr const int HAPI_PARMTYPE_PATH_FILE_DIR = 16;
    // Get static field: static public HoudiniEngineUnity.HAPI_ParmType HAPI_PARMTYPE_PATH_FILE_DIR
    static ::HoudiniEngineUnity::HAPI_ParmType _get_HAPI_PARMTYPE_PATH_FILE_DIR();
    // Set static field: static public HoudiniEngineUnity.HAPI_ParmType HAPI_PARMTYPE_PATH_FILE_DIR
    static void _set_HAPI_PARMTYPE_PATH_FILE_DIR(::HoudiniEngineUnity::HAPI_ParmType value);
    // static field const value: static public HoudiniEngineUnity.HAPI_ParmType HAPI_PARMTYPE_MAX
    static constexpr const int HAPI_PARMTYPE_MAX = 17;
    // Get static field: static public HoudiniEngineUnity.HAPI_ParmType HAPI_PARMTYPE_MAX
    static ::HoudiniEngineUnity::HAPI_ParmType _get_HAPI_PARMTYPE_MAX();
    // Set static field: static public HoudiniEngineUnity.HAPI_ParmType HAPI_PARMTYPE_MAX
    static void _set_HAPI_PARMTYPE_MAX(::HoudiniEngineUnity::HAPI_ParmType value);
    // static field const value: static public HoudiniEngineUnity.HAPI_ParmType HAPI_PARMTYPE_INT_START
    static constexpr const int HAPI_PARMTYPE_INT_START = 0;
    // Get static field: static public HoudiniEngineUnity.HAPI_ParmType HAPI_PARMTYPE_INT_START
    static ::HoudiniEngineUnity::HAPI_ParmType _get_HAPI_PARMTYPE_INT_START();
    // Set static field: static public HoudiniEngineUnity.HAPI_ParmType HAPI_PARMTYPE_INT_START
    static void _set_HAPI_PARMTYPE_INT_START(::HoudiniEngineUnity::HAPI_ParmType value);
    // static field const value: static public HoudiniEngineUnity.HAPI_ParmType HAPI_PARMTYPE_INT_END
    static constexpr const int HAPI_PARMTYPE_INT_END = 3;
    // Get static field: static public HoudiniEngineUnity.HAPI_ParmType HAPI_PARMTYPE_INT_END
    static ::HoudiniEngineUnity::HAPI_ParmType _get_HAPI_PARMTYPE_INT_END();
    // Set static field: static public HoudiniEngineUnity.HAPI_ParmType HAPI_PARMTYPE_INT_END
    static void _set_HAPI_PARMTYPE_INT_END(::HoudiniEngineUnity::HAPI_ParmType value);
    // static field const value: static public HoudiniEngineUnity.HAPI_ParmType HAPI_PARMTYPE_FLOAT_START
    static constexpr const int HAPI_PARMTYPE_FLOAT_START = 4;
    // Get static field: static public HoudiniEngineUnity.HAPI_ParmType HAPI_PARMTYPE_FLOAT_START
    static ::HoudiniEngineUnity::HAPI_ParmType _get_HAPI_PARMTYPE_FLOAT_START();
    // Set static field: static public HoudiniEngineUnity.HAPI_ParmType HAPI_PARMTYPE_FLOAT_START
    static void _set_HAPI_PARMTYPE_FLOAT_START(::HoudiniEngineUnity::HAPI_ParmType value);
    // static field const value: static public HoudiniEngineUnity.HAPI_ParmType HAPI_PARMTYPE_FLOAT_END
    static constexpr const int HAPI_PARMTYPE_FLOAT_END = 5;
    // Get static field: static public HoudiniEngineUnity.HAPI_ParmType HAPI_PARMTYPE_FLOAT_END
    static ::HoudiniEngineUnity::HAPI_ParmType _get_HAPI_PARMTYPE_FLOAT_END();
    // Set static field: static public HoudiniEngineUnity.HAPI_ParmType HAPI_PARMTYPE_FLOAT_END
    static void _set_HAPI_PARMTYPE_FLOAT_END(::HoudiniEngineUnity::HAPI_ParmType value);
    // static field const value: static public HoudiniEngineUnity.HAPI_ParmType HAPI_PARMTYPE_STRING_START
    static constexpr const int HAPI_PARMTYPE_STRING_START = 6;
    // Get static field: static public HoudiniEngineUnity.HAPI_ParmType HAPI_PARMTYPE_STRING_START
    static ::HoudiniEngineUnity::HAPI_ParmType _get_HAPI_PARMTYPE_STRING_START();
    // Set static field: static public HoudiniEngineUnity.HAPI_ParmType HAPI_PARMTYPE_STRING_START
    static void _set_HAPI_PARMTYPE_STRING_START(::HoudiniEngineUnity::HAPI_ParmType value);
    // static field const value: static public HoudiniEngineUnity.HAPI_ParmType HAPI_PARMTYPE_STRING_END
    static constexpr const int HAPI_PARMTYPE_STRING_END = 10;
    // Get static field: static public HoudiniEngineUnity.HAPI_ParmType HAPI_PARMTYPE_STRING_END
    static ::HoudiniEngineUnity::HAPI_ParmType _get_HAPI_PARMTYPE_STRING_END();
    // Set static field: static public HoudiniEngineUnity.HAPI_ParmType HAPI_PARMTYPE_STRING_END
    static void _set_HAPI_PARMTYPE_STRING_END(::HoudiniEngineUnity::HAPI_ParmType value);
    // static field const value: static public HoudiniEngineUnity.HAPI_ParmType HAPI_PARMTYPE_PATH_START
    static constexpr const int HAPI_PARMTYPE_PATH_START = 7;
    // Get static field: static public HoudiniEngineUnity.HAPI_ParmType HAPI_PARMTYPE_PATH_START
    static ::HoudiniEngineUnity::HAPI_ParmType _get_HAPI_PARMTYPE_PATH_START();
    // Set static field: static public HoudiniEngineUnity.HAPI_ParmType HAPI_PARMTYPE_PATH_START
    static void _set_HAPI_PARMTYPE_PATH_START(::HoudiniEngineUnity::HAPI_ParmType value);
    // static field const value: static public HoudiniEngineUnity.HAPI_ParmType HAPI_PARMTYPE_PATH_END
    static constexpr const int HAPI_PARMTYPE_PATH_END = 9;
    // Get static field: static public HoudiniEngineUnity.HAPI_ParmType HAPI_PARMTYPE_PATH_END
    static ::HoudiniEngineUnity::HAPI_ParmType _get_HAPI_PARMTYPE_PATH_END();
    // Set static field: static public HoudiniEngineUnity.HAPI_ParmType HAPI_PARMTYPE_PATH_END
    static void _set_HAPI_PARMTYPE_PATH_END(::HoudiniEngineUnity::HAPI_ParmType value);
    // static field const value: static public HoudiniEngineUnity.HAPI_ParmType HAPI_PARMTYPE_NODE_START
    static constexpr const int HAPI_PARMTYPE_NODE_START = 10;
    // Get static field: static public HoudiniEngineUnity.HAPI_ParmType HAPI_PARMTYPE_NODE_START
    static ::HoudiniEngineUnity::HAPI_ParmType _get_HAPI_PARMTYPE_NODE_START();
    // Set static field: static public HoudiniEngineUnity.HAPI_ParmType HAPI_PARMTYPE_NODE_START
    static void _set_HAPI_PARMTYPE_NODE_START(::HoudiniEngineUnity::HAPI_ParmType value);
    // static field const value: static public HoudiniEngineUnity.HAPI_ParmType HAPI_PARMTYPE_NODE_END
    static constexpr const int HAPI_PARMTYPE_NODE_END = 10;
    // Get static field: static public HoudiniEngineUnity.HAPI_ParmType HAPI_PARMTYPE_NODE_END
    static ::HoudiniEngineUnity::HAPI_ParmType _get_HAPI_PARMTYPE_NODE_END();
    // Set static field: static public HoudiniEngineUnity.HAPI_ParmType HAPI_PARMTYPE_NODE_END
    static void _set_HAPI_PARMTYPE_NODE_END(::HoudiniEngineUnity::HAPI_ParmType value);
    // static field const value: static public HoudiniEngineUnity.HAPI_ParmType HAPI_PARMTYPE_CONTAINER_START
    static constexpr const int HAPI_PARMTYPE_CONTAINER_START = 11;
    // Get static field: static public HoudiniEngineUnity.HAPI_ParmType HAPI_PARMTYPE_CONTAINER_START
    static ::HoudiniEngineUnity::HAPI_ParmType _get_HAPI_PARMTYPE_CONTAINER_START();
    // Set static field: static public HoudiniEngineUnity.HAPI_ParmType HAPI_PARMTYPE_CONTAINER_START
    static void _set_HAPI_PARMTYPE_CONTAINER_START(::HoudiniEngineUnity::HAPI_ParmType value);
    // static field const value: static public HoudiniEngineUnity.HAPI_ParmType HAPI_PARMTYPE_CONTAINER_END
    static constexpr const int HAPI_PARMTYPE_CONTAINER_END = 12;
    // Get static field: static public HoudiniEngineUnity.HAPI_ParmType HAPI_PARMTYPE_CONTAINER_END
    static ::HoudiniEngineUnity::HAPI_ParmType _get_HAPI_PARMTYPE_CONTAINER_END();
    // Set static field: static public HoudiniEngineUnity.HAPI_ParmType HAPI_PARMTYPE_CONTAINER_END
    static void _set_HAPI_PARMTYPE_CONTAINER_END(::HoudiniEngineUnity::HAPI_ParmType value);
    // static field const value: static public HoudiniEngineUnity.HAPI_ParmType HAPI_PARMTYPE_NONVALUE_START
    static constexpr const int HAPI_PARMTYPE_NONVALUE_START = 13;
    // Get static field: static public HoudiniEngineUnity.HAPI_ParmType HAPI_PARMTYPE_NONVALUE_START
    static ::HoudiniEngineUnity::HAPI_ParmType _get_HAPI_PARMTYPE_NONVALUE_START();
    // Set static field: static public HoudiniEngineUnity.HAPI_ParmType HAPI_PARMTYPE_NONVALUE_START
    static void _set_HAPI_PARMTYPE_NONVALUE_START(::HoudiniEngineUnity::HAPI_ParmType value);
    // static field const value: static public HoudiniEngineUnity.HAPI_ParmType HAPI_PARMTYPE_NONVALUE_END
    static constexpr const int HAPI_PARMTYPE_NONVALUE_END = 15;
    // Get static field: static public HoudiniEngineUnity.HAPI_ParmType HAPI_PARMTYPE_NONVALUE_END
    static ::HoudiniEngineUnity::HAPI_ParmType _get_HAPI_PARMTYPE_NONVALUE_END();
    // Set static field: static public HoudiniEngineUnity.HAPI_ParmType HAPI_PARMTYPE_NONVALUE_END
    static void _set_HAPI_PARMTYPE_NONVALUE_END(::HoudiniEngineUnity::HAPI_ParmType value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // HoudiniEngineUnity.HAPI_ParmType
  #pragma pack(pop)
  static check_size<sizeof(HAPI_ParmType), 0 + sizeof(int)> __HoudiniEngineUnity_HAPI_ParmTypeSizeCheck;
  static_assert(sizeof(HAPI_ParmType) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
