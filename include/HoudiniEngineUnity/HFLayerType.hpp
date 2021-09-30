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
  // Autogenerated type: HoudiniEngineUnity.HFLayerType
  // [TokenAttribute] Offset: FFFFFFFF
  struct HFLayerType/*, public System::Enum*/ {
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
    // Creating value type constructor for type: HFLayerType
    constexpr HFLayerType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public HoudiniEngineUnity.HFLayerType DEFAULT
    static constexpr const int DEFAULT = 0;
    // Get static field: static public HoudiniEngineUnity.HFLayerType DEFAULT
    static HoudiniEngineUnity::HFLayerType _get_DEFAULT();
    // Set static field: static public HoudiniEngineUnity.HFLayerType DEFAULT
    static void _set_DEFAULT(HoudiniEngineUnity::HFLayerType value);
    // static field const value: static public HoudiniEngineUnity.HFLayerType HEIGHT
    static constexpr const int HEIGHT = 1;
    // Get static field: static public HoudiniEngineUnity.HFLayerType HEIGHT
    static HoudiniEngineUnity::HFLayerType _get_HEIGHT();
    // Set static field: static public HoudiniEngineUnity.HFLayerType HEIGHT
    static void _set_HEIGHT(HoudiniEngineUnity::HFLayerType value);
    // static field const value: static public HoudiniEngineUnity.HFLayerType MASK
    static constexpr const int MASK = 2;
    // Get static field: static public HoudiniEngineUnity.HFLayerType MASK
    static HoudiniEngineUnity::HFLayerType _get_MASK();
    // Set static field: static public HoudiniEngineUnity.HFLayerType MASK
    static void _set_MASK(HoudiniEngineUnity::HFLayerType value);
    // static field const value: static public HoudiniEngineUnity.HFLayerType DETAIL
    static constexpr const int DETAIL = 3;
    // Get static field: static public HoudiniEngineUnity.HFLayerType DETAIL
    static HoudiniEngineUnity::HFLayerType _get_DETAIL();
    // Set static field: static public HoudiniEngineUnity.HFLayerType DETAIL
    static void _set_DETAIL(HoudiniEngineUnity::HFLayerType value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // HoudiniEngineUnity.HFLayerType
  #pragma pack(pop)
  static check_size<sizeof(HFLayerType), 0 + sizeof(int)> __HoudiniEngineUnity_HFLayerTypeSizeCheck;
  static_assert(sizeof(HFLayerType) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HFLayerType, "HoudiniEngineUnity", "HFLayerType");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
