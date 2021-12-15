// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Including type: OVR.OpenVR.ETextureType
#include "OVR/OpenVR/ETextureType.hpp"
// Including type: OVR.OpenVR.EColorSpace
#include "OVR/OpenVR/EColorSpace.hpp"
// Completed includes
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Forward declaring type: Texture_t
  struct Texture_t;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::Texture_t, "OVR.OpenVR", "Texture_t");
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0x10
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: OVR.OpenVR.Texture_t
  // [TokenAttribute] Offset: FFFFFFFF
  struct Texture_t/*, public System::ValueType*/ {
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
    // public System.IntPtr handle
    // Size: 0x8
    // Offset: 0x0
    System::IntPtr handle;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    // public OVR.OpenVR.ETextureType eType
    // Size: 0x4
    // Offset: 0x8
    OVR::OpenVR::ETextureType eType;
    // Field size check
    static_assert(sizeof(OVR::OpenVR::ETextureType) == 0x4);
    // public OVR.OpenVR.EColorSpace eColorSpace
    // Size: 0x4
    // Offset: 0xC
    OVR::OpenVR::EColorSpace eColorSpace;
    // Field size check
    static_assert(sizeof(OVR::OpenVR::EColorSpace) == 0x4);
    public:
    // Creating value type constructor for type: Texture_t
    constexpr Texture_t(System::IntPtr handle_ = {}, OVR::OpenVR::ETextureType eType_ = {}, OVR::OpenVR::EColorSpace eColorSpace_ = {}) noexcept : handle{handle_}, eType{eType_}, eColorSpace{eColorSpace_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Get instance field reference: public System.IntPtr handle
    System::IntPtr& dyn_handle();
    // Get instance field reference: public OVR.OpenVR.ETextureType eType
    OVR::OpenVR::ETextureType& dyn_eType();
    // Get instance field reference: public OVR.OpenVR.EColorSpace eColorSpace
    OVR::OpenVR::EColorSpace& dyn_eColorSpace();
  }; // OVR.OpenVR.Texture_t
  #pragma pack(pop)
  static check_size<sizeof(Texture_t), 12 + sizeof(OVR::OpenVR::EColorSpace)> __OVR_OpenVR_Texture_tSizeCheck;
  static_assert(sizeof(Texture_t) == 0x10);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
