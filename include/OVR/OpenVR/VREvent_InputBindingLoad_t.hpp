// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include <stdint.h>
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Forward declaring type: VREvent_InputBindingLoad_t
  struct VREvent_InputBindingLoad_t;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::VREvent_InputBindingLoad_t, "OVR.OpenVR", "VREvent_InputBindingLoad_t");
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0x20
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: OVR.OpenVR.VREvent_InputBindingLoad_t
  // [TokenAttribute] Offset: FFFFFFFF
  struct VREvent_InputBindingLoad_t/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.UInt64 ulAppContainer
    // Size: 0x8
    // Offset: 0x0
    uint64_t ulAppContainer;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // public System.UInt64 pathMessage
    // Size: 0x8
    // Offset: 0x8
    uint64_t pathMessage;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // public System.UInt64 pathUrl
    // Size: 0x8
    // Offset: 0x10
    uint64_t pathUrl;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // public System.UInt64 pathControllerType
    // Size: 0x8
    // Offset: 0x18
    uint64_t pathControllerType;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    public:
    // Creating value type constructor for type: VREvent_InputBindingLoad_t
    constexpr VREvent_InputBindingLoad_t(uint64_t ulAppContainer_ = {}, uint64_t pathMessage_ = {}, uint64_t pathUrl_ = {}, uint64_t pathControllerType_ = {}) noexcept : ulAppContainer{ulAppContainer_}, pathMessage{pathMessage_}, pathUrl{pathUrl_}, pathControllerType{pathControllerType_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public System.UInt64 ulAppContainer
    [[deprecated("Use field access instead!")]] uint64_t& dyn_ulAppContainer();
    // Get instance field reference: public System.UInt64 pathMessage
    [[deprecated("Use field access instead!")]] uint64_t& dyn_pathMessage();
    // Get instance field reference: public System.UInt64 pathUrl
    [[deprecated("Use field access instead!")]] uint64_t& dyn_pathUrl();
    // Get instance field reference: public System.UInt64 pathControllerType
    [[deprecated("Use field access instead!")]] uint64_t& dyn_pathControllerType();
  }; // OVR.OpenVR.VREvent_InputBindingLoad_t
  #pragma pack(pop)
  static check_size<sizeof(VREvent_InputBindingLoad_t), 24 + sizeof(uint64_t)> __OVR_OpenVR_VREvent_InputBindingLoad_tSizeCheck;
  static_assert(sizeof(VREvent_InputBindingLoad_t) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
