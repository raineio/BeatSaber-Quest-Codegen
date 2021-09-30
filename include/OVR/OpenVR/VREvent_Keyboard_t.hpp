// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include <stdint.h>
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Begin il2cpp-utils forward declares
struct Il2CppString;
// Completed il2cpp-utils forward declares
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0x10
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: OVR.OpenVR.VREvent_Keyboard_t
  // [TokenAttribute] Offset: FFFFFFFF
  struct VREvent_Keyboard_t/*, public System::ValueType*/ {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    private:
    #endif
    // public System.Byte cNewInput0
    // Size: 0x1
    // Offset: 0x0
    uint8_t cNewInput0;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // public System.Byte cNewInput1
    // Size: 0x1
    // Offset: 0x1
    uint8_t cNewInput1;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // public System.Byte cNewInput2
    // Size: 0x1
    // Offset: 0x2
    uint8_t cNewInput2;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // public System.Byte cNewInput3
    // Size: 0x1
    // Offset: 0x3
    uint8_t cNewInput3;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // public System.Byte cNewInput4
    // Size: 0x1
    // Offset: 0x4
    uint8_t cNewInput4;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // public System.Byte cNewInput5
    // Size: 0x1
    // Offset: 0x5
    uint8_t cNewInput5;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // public System.Byte cNewInput6
    // Size: 0x1
    // Offset: 0x6
    uint8_t cNewInput6;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // public System.Byte cNewInput7
    // Size: 0x1
    // Offset: 0x7
    uint8_t cNewInput7;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // public System.UInt64 uUserValue
    // Size: 0x8
    // Offset: 0x8
    uint64_t uUserValue;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    public:
    // Creating value type constructor for type: VREvent_Keyboard_t
    constexpr VREvent_Keyboard_t(uint8_t cNewInput0_ = {}, uint8_t cNewInput1_ = {}, uint8_t cNewInput2_ = {}, uint8_t cNewInput3_ = {}, uint8_t cNewInput4_ = {}, uint8_t cNewInput5_ = {}, uint8_t cNewInput6_ = {}, uint8_t cNewInput7_ = {}, uint64_t uUserValue_ = {}) noexcept : cNewInput0{cNewInput0_}, cNewInput1{cNewInput1_}, cNewInput2{cNewInput2_}, cNewInput3{cNewInput3_}, cNewInput4{cNewInput4_}, cNewInput5{cNewInput5_}, cNewInput6{cNewInput6_}, cNewInput7{cNewInput7_}, uUserValue{uUserValue_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Get instance field reference: public System.Byte cNewInput0
    uint8_t& dyn_cNewInput0();
    // Get instance field reference: public System.Byte cNewInput1
    uint8_t& dyn_cNewInput1();
    // Get instance field reference: public System.Byte cNewInput2
    uint8_t& dyn_cNewInput2();
    // Get instance field reference: public System.Byte cNewInput3
    uint8_t& dyn_cNewInput3();
    // Get instance field reference: public System.Byte cNewInput4
    uint8_t& dyn_cNewInput4();
    // Get instance field reference: public System.Byte cNewInput5
    uint8_t& dyn_cNewInput5();
    // Get instance field reference: public System.Byte cNewInput6
    uint8_t& dyn_cNewInput6();
    // Get instance field reference: public System.Byte cNewInput7
    uint8_t& dyn_cNewInput7();
    // Get instance field reference: public System.UInt64 uUserValue
    uint64_t& dyn_uUserValue();
    // public System.String get_cNewInput()
    // Offset: 0x13B4A80
    ::Il2CppString* get_cNewInput();
  }; // OVR.OpenVR.VREvent_Keyboard_t
  #pragma pack(pop)
  static check_size<sizeof(VREvent_Keyboard_t), 8 + sizeof(uint64_t)> __OVR_OpenVR_VREvent_Keyboard_tSizeCheck;
  static_assert(sizeof(VREvent_Keyboard_t) == 0x10);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::VREvent_Keyboard_t, "OVR.OpenVR", "VREvent_Keyboard_t");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: OVR::OpenVR::VREvent_Keyboard_t::get_cNewInput
// Il2CppName: get_cNewInput
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (OVR::OpenVR::VREvent_Keyboard_t::*)()>(&OVR::OpenVR::VREvent_Keyboard_t::get_cNewInput)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::VREvent_Keyboard_t), "get_cNewInput", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
