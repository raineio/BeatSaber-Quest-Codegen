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
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: ColorSpace
  struct OVRManager_ColorSpace;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRManager_ColorSpace, "", "OVRManager/ColorSpace");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: OVRManager/ColorSpace
  // [TokenAttribute] Offset: FFFFFFFF
  struct OVRManager_ColorSpace/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: OVRManager_ColorSpace
    constexpr OVRManager_ColorSpace(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public OVRManager/ColorSpace Unknown
    static constexpr const int Unknown = 0;
    // Get static field: static public OVRManager/ColorSpace Unknown
    static ::GlobalNamespace::OVRManager_ColorSpace _get_Unknown();
    // Set static field: static public OVRManager/ColorSpace Unknown
    static void _set_Unknown(::GlobalNamespace::OVRManager_ColorSpace value);
    // static field const value: static public OVRManager/ColorSpace Unmanaged
    static constexpr const int Unmanaged = 1;
    // Get static field: static public OVRManager/ColorSpace Unmanaged
    static ::GlobalNamespace::OVRManager_ColorSpace _get_Unmanaged();
    // Set static field: static public OVRManager/ColorSpace Unmanaged
    static void _set_Unmanaged(::GlobalNamespace::OVRManager_ColorSpace value);
    // static field const value: static public OVRManager/ColorSpace Rec_2020
    static constexpr const int Rec_2020 = 2;
    // Get static field: static public OVRManager/ColorSpace Rec_2020
    static ::GlobalNamespace::OVRManager_ColorSpace _get_Rec_2020();
    // Set static field: static public OVRManager/ColorSpace Rec_2020
    static void _set_Rec_2020(::GlobalNamespace::OVRManager_ColorSpace value);
    // static field const value: static public OVRManager/ColorSpace Rec_709
    static constexpr const int Rec_709 = 3;
    // Get static field: static public OVRManager/ColorSpace Rec_709
    static ::GlobalNamespace::OVRManager_ColorSpace _get_Rec_709();
    // Set static field: static public OVRManager/ColorSpace Rec_709
    static void _set_Rec_709(::GlobalNamespace::OVRManager_ColorSpace value);
    // static field const value: static public OVRManager/ColorSpace Rift_CV1
    static constexpr const int Rift_CV1 = 4;
    // Get static field: static public OVRManager/ColorSpace Rift_CV1
    static ::GlobalNamespace::OVRManager_ColorSpace _get_Rift_CV1();
    // Set static field: static public OVRManager/ColorSpace Rift_CV1
    static void _set_Rift_CV1(::GlobalNamespace::OVRManager_ColorSpace value);
    // static field const value: static public OVRManager/ColorSpace Rift_S
    static constexpr const int Rift_S = 5;
    // Get static field: static public OVRManager/ColorSpace Rift_S
    static ::GlobalNamespace::OVRManager_ColorSpace _get_Rift_S();
    // Set static field: static public OVRManager/ColorSpace Rift_S
    static void _set_Rift_S(::GlobalNamespace::OVRManager_ColorSpace value);
    // static field const value: static public OVRManager/ColorSpace Quest
    static constexpr const int Quest = 6;
    // Get static field: static public OVRManager/ColorSpace Quest
    static ::GlobalNamespace::OVRManager_ColorSpace _get_Quest();
    // Set static field: static public OVRManager/ColorSpace Quest
    static void _set_Quest(::GlobalNamespace::OVRManager_ColorSpace value);
    // static field const value: static public OVRManager/ColorSpace P3
    static constexpr const int P3 = 7;
    // Get static field: static public OVRManager/ColorSpace P3
    static ::GlobalNamespace::OVRManager_ColorSpace _get_P3();
    // Set static field: static public OVRManager/ColorSpace P3
    static void _set_P3(::GlobalNamespace::OVRManager_ColorSpace value);
    // static field const value: static public OVRManager/ColorSpace Adobe_RGB
    static constexpr const int Adobe_RGB = 8;
    // Get static field: static public OVRManager/ColorSpace Adobe_RGB
    static ::GlobalNamespace::OVRManager_ColorSpace _get_Adobe_RGB();
    // Set static field: static public OVRManager/ColorSpace Adobe_RGB
    static void _set_Adobe_RGB(::GlobalNamespace::OVRManager_ColorSpace value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // OVRManager/ColorSpace
  #pragma pack(pop)
  static check_size<sizeof(OVRManager_ColorSpace), 0 + sizeof(int)> __GlobalNamespace_OVRManager_ColorSpaceSizeCheck;
  static_assert(sizeof(OVRManager_ColorSpace) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
