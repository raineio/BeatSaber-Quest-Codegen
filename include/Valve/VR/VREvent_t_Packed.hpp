// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: Valve.VR.VREvent_Data_t
#include "Valve/VR/VREvent_Data_t.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Valve::VR
namespace Valve::VR {
  // Forward declaring type: VREvent_t
  struct VREvent_t;
}
// Completed forward declares
// Type namespace: Valve.VR
namespace Valve::VR {
  // Forward declaring type: VREvent_t_Packed
  struct VREvent_t_Packed;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Valve::VR::VREvent_t_Packed, "Valve.VR", "VREvent_t_Packed");
// Type namespace: Valve.VR
namespace Valve::VR {
  // WARNING Size may be invalid!
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Valve.VR.VREvent_t_Packed
  // [TokenAttribute] Offset: FFFFFFFF
  struct VREvent_t_Packed/*, public ::System::ValueType*/ {
    public:
    public:
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
    // Offset: 0xC
    ::Valve::VR::VREvent_Data_t data;
    public:
    // Creating value type constructor for type: VREvent_t_Packed
    constexpr VREvent_t_Packed(uint eventType_ = {}, uint trackedDeviceIndex_ = {}, float eventAgeSeconds_ = {}, ::Valve::VR::VREvent_Data_t data_ = {}) noexcept : eventType{eventType_}, trackedDeviceIndex{trackedDeviceIndex_}, eventAgeSeconds{eventAgeSeconds_}, data{data_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: i_ValueType
    inline ::System::ValueType* i_ValueType() noexcept {
      return reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public System.UInt32 eventType
    [[deprecated("Use field access instead!")]] uint& dyn_eventType();
    // Get instance field reference: public System.UInt32 trackedDeviceIndex
    [[deprecated("Use field access instead!")]] uint& dyn_trackedDeviceIndex();
    // Get instance field reference: public System.Single eventAgeSeconds
    [[deprecated("Use field access instead!")]] float& dyn_eventAgeSeconds();
    // Get instance field reference: public Valve.VR.VREvent_Data_t data
    [[deprecated("Use field access instead!")]] ::Valve::VR::VREvent_Data_t& dyn_data();
    // public System.Void .ctor(Valve.VR.VREvent_t unpacked)
    // Offset: 0x2A9DF3C
    VREvent_t_Packed(::Valve::VR::VREvent_t unpacked);
    // public System.Void Unpack(ref Valve.VR.VREvent_t unpacked)
    // Offset: 0x2A9DF7C
    void Unpack(ByRef<::Valve::VR::VREvent_t> unpacked);
  }; // Valve.VR.VREvent_t_Packed
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Valve::VR::VREvent_t_Packed::VREvent_t_Packed
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Valve::VR::VREvent_t_Packed::Unpack
// Il2CppName: Unpack
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Valve::VR::VREvent_t_Packed::*)(ByRef<::Valve::VR::VREvent_t>)>(&Valve::VR::VREvent_t_Packed::Unpack)> {
  static const MethodInfo* get() {
    static auto* unpacked = &::il2cpp_utils::GetClassFromName("Valve.VR", "VREvent_t")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::VREvent_t_Packed), "Unpack", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{unpacked});
  }
};
