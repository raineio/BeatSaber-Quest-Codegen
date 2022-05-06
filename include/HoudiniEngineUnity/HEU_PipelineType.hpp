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
  // Forward declaring type: HEU_PipelineType
  struct HEU_PipelineType;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_PipelineType, "HoudiniEngineUnity", "HEU_PipelineType");
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: HoudiniEngineUnity.HEU_PipelineType
  // [TokenAttribute] Offset: FFFFFFFF
  struct HEU_PipelineType/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: HEU_PipelineType
    constexpr HEU_PipelineType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public HoudiniEngineUnity.HEU_PipelineType Unsupported
    static constexpr const int Unsupported = 0;
    // Get static field: static public HoudiniEngineUnity.HEU_PipelineType Unsupported
    static ::HoudiniEngineUnity::HEU_PipelineType _get_Unsupported();
    // Set static field: static public HoudiniEngineUnity.HEU_PipelineType Unsupported
    static void _set_Unsupported(::HoudiniEngineUnity::HEU_PipelineType value);
    // static field const value: static public HoudiniEngineUnity.HEU_PipelineType BiRP
    static constexpr const int BiRP = 1;
    // Get static field: static public HoudiniEngineUnity.HEU_PipelineType BiRP
    static ::HoudiniEngineUnity::HEU_PipelineType _get_BiRP();
    // Set static field: static public HoudiniEngineUnity.HEU_PipelineType BiRP
    static void _set_BiRP(::HoudiniEngineUnity::HEU_PipelineType value);
    // static field const value: static public HoudiniEngineUnity.HEU_PipelineType URP
    static constexpr const int URP = 2;
    // Get static field: static public HoudiniEngineUnity.HEU_PipelineType URP
    static ::HoudiniEngineUnity::HEU_PipelineType _get_URP();
    // Set static field: static public HoudiniEngineUnity.HEU_PipelineType URP
    static void _set_URP(::HoudiniEngineUnity::HEU_PipelineType value);
    // static field const value: static public HoudiniEngineUnity.HEU_PipelineType HDRP
    static constexpr const int HDRP = 3;
    // Get static field: static public HoudiniEngineUnity.HEU_PipelineType HDRP
    static ::HoudiniEngineUnity::HEU_PipelineType _get_HDRP();
    // Set static field: static public HoudiniEngineUnity.HEU_PipelineType HDRP
    static void _set_HDRP(::HoudiniEngineUnity::HEU_PipelineType value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // HoudiniEngineUnity.HEU_PipelineType
  #pragma pack(pop)
  static check_size<sizeof(HEU_PipelineType), 0 + sizeof(int)> __HoudiniEngineUnity_HEU_PipelineTypeSizeCheck;
  static_assert(sizeof(HEU_PipelineType) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
