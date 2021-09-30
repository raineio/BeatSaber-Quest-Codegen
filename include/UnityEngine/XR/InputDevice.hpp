// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include <stdint.h>
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Completed includes
// Begin il2cpp-utils forward declares
struct Il2CppObject;
// Completed il2cpp-utils forward declares
// Type namespace: UnityEngine.XR
namespace UnityEngine::XR {
  // Size: 0x9
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.XR.InputDevice
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeConditionalAttribute] Offset: E98FC0
  // [UsedByNativeCodeAttribute] Offset: E98FC0
  struct InputDevice/*, public System::ValueType, public System::IEquatable_1<UnityEngine::XR::InputDevice>*/ {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    private:
    #endif
    // private System.UInt64 m_DeviceId
    // Size: 0x8
    // Offset: 0x0
    uint64_t m_DeviceId;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // private System.Boolean m_Initialized
    // Size: 0x1
    // Offset: 0x8
    bool m_Initialized;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating value type constructor for type: InputDevice
    constexpr InputDevice(uint64_t m_DeviceId_ = {}, bool m_Initialized_ = {}) noexcept : m_DeviceId{m_DeviceId_}, m_Initialized{m_Initialized_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator System::IEquatable_1<UnityEngine::XR::InputDevice>
    operator System::IEquatable_1<UnityEngine::XR::InputDevice>() noexcept {
      return *reinterpret_cast<System::IEquatable_1<UnityEngine::XR::InputDevice>*>(this);
    }
    // Get instance field reference: private System.UInt64 m_DeviceId
    uint64_t& dyn_m_DeviceId();
    // Get instance field reference: private System.Boolean m_Initialized
    bool& dyn_m_Initialized();
    // private System.UInt64 get_deviceId()
    // Offset: 0x2611F20
    uint64_t get_deviceId();
    // System.Void .ctor(System.UInt64 deviceId)
    // Offset: 0x2611F10
    InputDevice(uint64_t deviceId);
    // public System.Boolean Equals(UnityEngine.XR.InputDevice other)
    // Offset: 0x2611FDC
    bool Equals(UnityEngine::XR::InputDevice other);
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x2611F38
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x2612004
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
  }; // UnityEngine.XR.InputDevice
  #pragma pack(pop)
  static check_size<sizeof(InputDevice), 8 + sizeof(bool)> __UnityEngine_XR_InputDeviceSizeCheck;
  static_assert(sizeof(InputDevice) == 0x9);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::XR::InputDevice, "UnityEngine.XR", "InputDevice");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::XR::InputDevice::get_deviceId
// Il2CppName: get_deviceId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (UnityEngine::XR::InputDevice::*)()>(&UnityEngine::XR::InputDevice::get_deviceId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::InputDevice), "get_deviceId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::InputDevice::InputDevice
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::XR::InputDevice::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::XR::InputDevice::*)(UnityEngine::XR::InputDevice)>(&UnityEngine::XR::InputDevice::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("UnityEngine.XR", "InputDevice")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::InputDevice), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::InputDevice::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::XR::InputDevice::*)(::Il2CppObject*)>(&UnityEngine::XR::InputDevice::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::InputDevice), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::InputDevice::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::XR::InputDevice::*)()>(&UnityEngine::XR::InputDevice::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::InputDevice), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
