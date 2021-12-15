// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Forward declaring type: VREvent_SeatedZeroPoseReset_t
  struct VREvent_SeatedZeroPoseReset_t;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::VREvent_SeatedZeroPoseReset_t, "OVR.OpenVR", "VREvent_SeatedZeroPoseReset_t");
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0x1
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: OVR.OpenVR.VREvent_SeatedZeroPoseReset_t
  // [TokenAttribute] Offset: FFFFFFFF
  struct VREvent_SeatedZeroPoseReset_t/*, public System::ValueType*/ {
    public:
    public:
    // public System.Boolean bResetBySystemMenu
    // Size: 0x1
    // Offset: 0x0
    bool bResetBySystemMenu;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating value type constructor for type: VREvent_SeatedZeroPoseReset_t
    constexpr VREvent_SeatedZeroPoseReset_t(bool bResetBySystemMenu_ = {}) noexcept : bResetBySystemMenu{bResetBySystemMenu_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating conversion operator: operator bool
    constexpr operator bool() const noexcept {
      return bResetBySystemMenu;
    }
    // Get instance field reference: public System.Boolean bResetBySystemMenu
    bool& dyn_bResetBySystemMenu();
  }; // OVR.OpenVR.VREvent_SeatedZeroPoseReset_t
  #pragma pack(pop)
  static check_size<sizeof(VREvent_SeatedZeroPoseReset_t), 0 + sizeof(bool)> __OVR_OpenVR_VREvent_SeatedZeroPoseReset_tSizeCheck;
  static_assert(sizeof(VREvent_SeatedZeroPoseReset_t) == 0x1);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
