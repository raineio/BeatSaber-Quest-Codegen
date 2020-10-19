// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Autogenerated type: UnityEngine.Ray
  struct Ray : public System::ValueType {
    public:
    // private UnityEngine.Vector3 m_Origin
    // Offset: 0x0
    UnityEngine::Vector3 m_Origin;
    // private UnityEngine.Vector3 m_Direction
    // Offset: 0xC
    UnityEngine::Vector3 m_Direction;
    // Creating value type constructor for type: Ray
    constexpr Ray(UnityEngine::Vector3 m_Origin_ = {}, UnityEngine::Vector3 m_Direction_ = {}) noexcept : m_Origin{m_Origin_}, m_Direction{m_Direction_} {}
    // public System.Void .ctor(UnityEngine.Vector3 origin, UnityEngine.Vector3 direction)
    // Offset: 0xC7BE38
    // ABORTED: conflicts with another method.  Ray(UnityEngine::Vector3 origin, UnityEngine::Vector3 direction);
    // public UnityEngine.Vector3 get_origin()
    // Offset: 0xC7BE40
    UnityEngine::Vector3 get_origin();
    // public System.Void set_origin(UnityEngine.Vector3 value)
    // Offset: 0xC7BE4C
    void set_origin(UnityEngine::Vector3 value);
    // public UnityEngine.Vector3 get_direction()
    // Offset: 0xC7BE58
    UnityEngine::Vector3 get_direction();
    // public System.Void set_direction(UnityEngine.Vector3 value)
    // Offset: 0xC7BE64
    void set_direction(UnityEngine::Vector3 value);
    // public UnityEngine.Vector3 GetPoint(System.Single distance)
    // Offset: 0xC7BEA4
    UnityEngine::Vector3 GetPoint(float distance);
    // public override System.String ToString()
    // Offset: 0xC7BEAC
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::Il2CppString* ToString();
  }; // UnityEngine.Ray
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Ray, "UnityEngine", "Ray");
#pragma pack(pop)
