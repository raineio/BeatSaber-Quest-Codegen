// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include <stdint.h>
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
  // Autogenerated type: UnityEngine.XR.Bone
  struct Bone : public System::ValueType, public System::IEquatable_1<UnityEngine::XR::Bone> {
    public:
    // private System.UInt64 m_DeviceId
    // Offset: 0x0
    uint64_t m_DeviceId;
    // private System.UInt32 m_FeatureIndex
    // Offset: 0x8
    uint m_FeatureIndex;
    // Creating value type constructor for type: Bone
    constexpr Bone(uint64_t m_DeviceId_ = {}, uint m_FeatureIndex_ = {}) noexcept : m_DeviceId{m_DeviceId_}, m_FeatureIndex{m_FeatureIndex_} {}
    // System.UInt64 get_deviceId()
    // Offset: 0xC8B3CC
    uint64_t get_deviceId();
    // System.UInt32 get_featureIndex()
    // Offset: 0xC8B3D4
    uint get_featureIndex();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0xC8B3DC
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public System.Boolean Equals(UnityEngine.XR.Bone other)
    // Offset: 0xC8B3E4
    // Implemented from: System.IEquatable`1
    // Base method: System.Boolean IEquatable_1::Equals(UnityEngine.XR.Bone other)
    bool Equals(UnityEngine::XR::Bone other);
    // public override System.Int32 GetHashCode()
    // Offset: 0xC8B408
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
  }; // UnityEngine.XR.Bone
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::XR::Bone, "UnityEngine.XR", "Bone");
#pragma pack(pop)
