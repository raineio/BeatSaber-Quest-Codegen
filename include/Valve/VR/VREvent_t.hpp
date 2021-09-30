// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: Valve.VR.VREvent_Data_t
#include "Valve/VR/VREvent_Data_t.hpp"
// Completed includes
// Type namespace: Valve.VR
namespace Valve::VR {
  // WARNING Size may be invalid!
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Valve.VR.VREvent_t
  // [TokenAttribute] Offset: FFFFFFFF
  struct VREvent_t/*, public System::ValueType*/ {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    private:
    #endif
    // public System.UInt32 eventType
    // Size: 0x4
    // Offset: 0x0
    uint eventType;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // public System.UInt32 trackedDeviceIndex
    // Size: 0x4
    // Offset: 0x4
    uint trackedDeviceIndex;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // public System.Single eventAgeSeconds
    // Size: 0x4
    // Offset: 0x8
    float eventAgeSeconds;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public Valve.VR.VREvent_Data_t data
    // Size: 0xFFFFFFFF
    // Offset: 0x10
    Valve::VR::VREvent_Data_t data;
    public:
    // Creating value type constructor for type: VREvent_t
    constexpr VREvent_t(uint eventType_ = {}, uint trackedDeviceIndex_ = {}, float eventAgeSeconds_ = {}, Valve::VR::VREvent_Data_t data_ = {}) noexcept : eventType{eventType_}, trackedDeviceIndex{trackedDeviceIndex_}, eventAgeSeconds{eventAgeSeconds_}, data{data_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Get instance field reference: public System.UInt32 eventType
    uint& dyn_eventType();
    // Get instance field reference: public System.UInt32 trackedDeviceIndex
    uint& dyn_trackedDeviceIndex();
    // Get instance field reference: public System.Single eventAgeSeconds
    float& dyn_eventAgeSeconds();
    // Get instance field reference: public Valve.VR.VREvent_Data_t data
    Valve::VR::VREvent_Data_t& dyn_data();
  }; // Valve.VR.VREvent_t
  // WARNING Not writing size check since size may be invalid!
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::VREvent_t, "Valve.VR", "VREvent_t");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
