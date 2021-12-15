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
  // Forward declaring type: HAPI_NodeType
  struct HAPI_NodeType;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HAPI_NodeType, "HoudiniEngineUnity", "HAPI_NodeType");
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: HoudiniEngineUnity.HAPI_NodeType
  // [TokenAttribute] Offset: FFFFFFFF
  // [FlagsAttribute] Offset: FFFFFFFF
  struct HAPI_NodeType/*, public System::Enum*/ {
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
    // Creating value type constructor for type: HAPI_NodeType
    constexpr HAPI_NodeType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public HoudiniEngineUnity.HAPI_NodeType HAPI_NODETYPE_ANY
    static constexpr const int HAPI_NODETYPE_ANY = -1;
    // Get static field: static public HoudiniEngineUnity.HAPI_NodeType HAPI_NODETYPE_ANY
    static HoudiniEngineUnity::HAPI_NodeType _get_HAPI_NODETYPE_ANY();
    // Set static field: static public HoudiniEngineUnity.HAPI_NodeType HAPI_NODETYPE_ANY
    static void _set_HAPI_NODETYPE_ANY(HoudiniEngineUnity::HAPI_NodeType value);
    // static field const value: static public HoudiniEngineUnity.HAPI_NodeType HAPI_NODETYPE_NONE
    static constexpr const int HAPI_NODETYPE_NONE = 0;
    // Get static field: static public HoudiniEngineUnity.HAPI_NodeType HAPI_NODETYPE_NONE
    static HoudiniEngineUnity::HAPI_NodeType _get_HAPI_NODETYPE_NONE();
    // Set static field: static public HoudiniEngineUnity.HAPI_NodeType HAPI_NODETYPE_NONE
    static void _set_HAPI_NODETYPE_NONE(HoudiniEngineUnity::HAPI_NodeType value);
    // static field const value: static public HoudiniEngineUnity.HAPI_NodeType HAPI_NODETYPE_OBJ
    static constexpr const int HAPI_NODETYPE_OBJ = 1;
    // Get static field: static public HoudiniEngineUnity.HAPI_NodeType HAPI_NODETYPE_OBJ
    static HoudiniEngineUnity::HAPI_NodeType _get_HAPI_NODETYPE_OBJ();
    // Set static field: static public HoudiniEngineUnity.HAPI_NodeType HAPI_NODETYPE_OBJ
    static void _set_HAPI_NODETYPE_OBJ(HoudiniEngineUnity::HAPI_NodeType value);
    // static field const value: static public HoudiniEngineUnity.HAPI_NodeType HAPI_NODETYPE_SOP
    static constexpr const int HAPI_NODETYPE_SOP = 2;
    // Get static field: static public HoudiniEngineUnity.HAPI_NodeType HAPI_NODETYPE_SOP
    static HoudiniEngineUnity::HAPI_NodeType _get_HAPI_NODETYPE_SOP();
    // Set static field: static public HoudiniEngineUnity.HAPI_NodeType HAPI_NODETYPE_SOP
    static void _set_HAPI_NODETYPE_SOP(HoudiniEngineUnity::HAPI_NodeType value);
    // static field const value: static public HoudiniEngineUnity.HAPI_NodeType HAPI_NODETYPE_CHOP
    static constexpr const int HAPI_NODETYPE_CHOP = 4;
    // Get static field: static public HoudiniEngineUnity.HAPI_NodeType HAPI_NODETYPE_CHOP
    static HoudiniEngineUnity::HAPI_NodeType _get_HAPI_NODETYPE_CHOP();
    // Set static field: static public HoudiniEngineUnity.HAPI_NodeType HAPI_NODETYPE_CHOP
    static void _set_HAPI_NODETYPE_CHOP(HoudiniEngineUnity::HAPI_NodeType value);
    // static field const value: static public HoudiniEngineUnity.HAPI_NodeType HAPI_NODETYPE_ROP
    static constexpr const int HAPI_NODETYPE_ROP = 8;
    // Get static field: static public HoudiniEngineUnity.HAPI_NodeType HAPI_NODETYPE_ROP
    static HoudiniEngineUnity::HAPI_NodeType _get_HAPI_NODETYPE_ROP();
    // Set static field: static public HoudiniEngineUnity.HAPI_NodeType HAPI_NODETYPE_ROP
    static void _set_HAPI_NODETYPE_ROP(HoudiniEngineUnity::HAPI_NodeType value);
    // static field const value: static public HoudiniEngineUnity.HAPI_NodeType HAPI_NODETYPE_SHOP
    static constexpr const int HAPI_NODETYPE_SHOP = 16;
    // Get static field: static public HoudiniEngineUnity.HAPI_NodeType HAPI_NODETYPE_SHOP
    static HoudiniEngineUnity::HAPI_NodeType _get_HAPI_NODETYPE_SHOP();
    // Set static field: static public HoudiniEngineUnity.HAPI_NodeType HAPI_NODETYPE_SHOP
    static void _set_HAPI_NODETYPE_SHOP(HoudiniEngineUnity::HAPI_NodeType value);
    // static field const value: static public HoudiniEngineUnity.HAPI_NodeType HAPI_NODETYPE_COP
    static constexpr const int HAPI_NODETYPE_COP = 32;
    // Get static field: static public HoudiniEngineUnity.HAPI_NodeType HAPI_NODETYPE_COP
    static HoudiniEngineUnity::HAPI_NodeType _get_HAPI_NODETYPE_COP();
    // Set static field: static public HoudiniEngineUnity.HAPI_NodeType HAPI_NODETYPE_COP
    static void _set_HAPI_NODETYPE_COP(HoudiniEngineUnity::HAPI_NodeType value);
    // static field const value: static public HoudiniEngineUnity.HAPI_NodeType HAPI_NODETYPE_VOP
    static constexpr const int HAPI_NODETYPE_VOP = 64;
    // Get static field: static public HoudiniEngineUnity.HAPI_NodeType HAPI_NODETYPE_VOP
    static HoudiniEngineUnity::HAPI_NodeType _get_HAPI_NODETYPE_VOP();
    // Set static field: static public HoudiniEngineUnity.HAPI_NodeType HAPI_NODETYPE_VOP
    static void _set_HAPI_NODETYPE_VOP(HoudiniEngineUnity::HAPI_NodeType value);
    // static field const value: static public HoudiniEngineUnity.HAPI_NodeType HAPI_NODETYPE_DOP
    static constexpr const int HAPI_NODETYPE_DOP = 128;
    // Get static field: static public HoudiniEngineUnity.HAPI_NodeType HAPI_NODETYPE_DOP
    static HoudiniEngineUnity::HAPI_NodeType _get_HAPI_NODETYPE_DOP();
    // Set static field: static public HoudiniEngineUnity.HAPI_NodeType HAPI_NODETYPE_DOP
    static void _set_HAPI_NODETYPE_DOP(HoudiniEngineUnity::HAPI_NodeType value);
    // static field const value: static public HoudiniEngineUnity.HAPI_NodeType HAPI_NODETYPE_TOP
    static constexpr const int HAPI_NODETYPE_TOP = 256;
    // Get static field: static public HoudiniEngineUnity.HAPI_NodeType HAPI_NODETYPE_TOP
    static HoudiniEngineUnity::HAPI_NodeType _get_HAPI_NODETYPE_TOP();
    // Set static field: static public HoudiniEngineUnity.HAPI_NodeType HAPI_NODETYPE_TOP
    static void _set_HAPI_NODETYPE_TOP(HoudiniEngineUnity::HAPI_NodeType value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // HoudiniEngineUnity.HAPI_NodeType
  #pragma pack(pop)
  static check_size<sizeof(HAPI_NodeType), 0 + sizeof(int)> __HoudiniEngineUnity_HAPI_NodeTypeSizeCheck;
  static_assert(sizeof(HAPI_NodeType) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
