// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Completed includes
// Type namespace: UnityEngine.Rendering
namespace UnityEngine::Rendering {
  // Autogenerated type: UnityEngine.Rendering.LODParameters
  struct LODParameters : public System::ValueType, public System::IEquatable_1<UnityEngine::Rendering::LODParameters> {
    public:
    // private System.Int32 m_IsOrthographic
    // Offset: 0x0
    int m_IsOrthographic;
    // private UnityEngine.Vector3 m_CameraPosition
    // Offset: 0x4
    UnityEngine::Vector3 m_CameraPosition;
    // private System.Single m_FieldOfView
    // Offset: 0x10
    float m_FieldOfView;
    // private System.Single m_OrthoSize
    // Offset: 0x14
    float m_OrthoSize;
    // private System.Int32 m_CameraPixelHeight
    // Offset: 0x18
    int m_CameraPixelHeight;
    // Creating value type constructor for type: LODParameters
    constexpr LODParameters(int m_IsOrthographic_ = {}, UnityEngine::Vector3 m_CameraPosition_ = {}, float m_FieldOfView_ = {}, float m_OrthoSize_ = {}, int m_CameraPixelHeight_ = {}) noexcept : m_IsOrthographic{m_IsOrthographic_}, m_CameraPosition{m_CameraPosition_}, m_FieldOfView{m_FieldOfView_}, m_OrthoSize{m_OrthoSize_}, m_CameraPixelHeight{m_CameraPixelHeight_} {}
    // public System.Boolean Equals(UnityEngine.Rendering.LODParameters other)
    // Offset: 0xC74FA8
    // Implemented from: System.IEquatable`1
    // Base method: System.Boolean IEquatable_1::Equals(UnityEngine.Rendering.LODParameters other)
    bool Equals(UnityEngine::Rendering::LODParameters other);
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0xC74FE0
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0xC74FE8
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
  }; // UnityEngine.Rendering.LODParameters
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Rendering::LODParameters, "UnityEngine.Rendering", "LODParameters");
#pragma pack(pop)
