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
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Ray
  struct Ray;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Autogenerated type: UnityEngine.Bounds
  struct Bounds : public System::ValueType, public System::IEquatable_1<UnityEngine::Bounds> {
    public:
    // private UnityEngine.Vector3 m_Center
    // Offset: 0x0
    UnityEngine::Vector3 m_Center;
    // private UnityEngine.Vector3 m_Extents
    // Offset: 0xC
    UnityEngine::Vector3 m_Extents;
    // Creating value type constructor for type: Bounds
    Bounds(UnityEngine::Vector3 m_Center_ = {}, UnityEngine::Vector3 m_Extents_ = {}) : m_Center{m_Center_}, m_Extents{m_Extents_} {}
    // public System.Void .ctor(UnityEngine.Vector3 center, UnityEngine.Vector3 size)
    // Offset: 0xA4571C
    static Bounds* New_ctor(UnityEngine::Vector3 center, UnityEngine::Vector3 size);
    // public UnityEngine.Vector3 get_center()
    // Offset: 0xA4576C
    UnityEngine::Vector3 get_center();
    // public System.Void set_center(UnityEngine.Vector3 value)
    // Offset: 0xA45778
    void set_center(UnityEngine::Vector3 value);
    // public UnityEngine.Vector3 get_size()
    // Offset: 0xA45784
    UnityEngine::Vector3 get_size();
    // public System.Void set_size(UnityEngine.Vector3 value)
    // Offset: 0xA4578C
    void set_size(UnityEngine::Vector3 value);
    // public UnityEngine.Vector3 get_extents()
    // Offset: 0xA45794
    UnityEngine::Vector3 get_extents();
    // public System.Void set_extents(UnityEngine.Vector3 value)
    // Offset: 0xA457A0
    void set_extents(UnityEngine::Vector3 value);
    // public UnityEngine.Vector3 get_min()
    // Offset: 0xA457AC
    UnityEngine::Vector3 get_min();
    // public UnityEngine.Vector3 get_max()
    // Offset: 0xA457B4
    UnityEngine::Vector3 get_max();
    // public System.Void SetMinMax(UnityEngine.Vector3 min, UnityEngine.Vector3 max)
    // Offset: 0xA457BC
    void SetMinMax(UnityEngine::Vector3 min, UnityEngine::Vector3 max);
    // public System.Void Encapsulate(UnityEngine.Vector3 point)
    // Offset: 0xA457C4
    void Encapsulate(UnityEngine::Vector3 point);
    // public System.Boolean IntersectRay(UnityEngine.Ray ray, System.Single distance)
    // Offset: 0xA457CC
    bool IntersectRay(UnityEngine::Ray ray, float& distance);
    // public System.Boolean Contains(UnityEngine.Vector3 point)
    // Offset: 0xA4584C
    bool Contains(UnityEngine::Vector3 point);
    // static private System.Boolean IntersectRayAABB(UnityEngine.Ray ray, UnityEngine.Bounds bounds, System.Single dist)
    // Offset: 0x1307854
    static bool IntersectRayAABB(UnityEngine::Ray ray, UnityEngine::Bounds bounds, float& dist);
    // static private System.Boolean Contains_Injected(UnityEngine.Bounds _unity_self, UnityEngine.Vector3 point)
    // Offset: 0x1307A54
    static bool Contains_Injected(UnityEngine::Bounds& _unity_self, UnityEngine::Vector3& point);
    // static private System.Boolean IntersectRayAABB_Injected(UnityEngine.Ray ray, UnityEngine.Bounds bounds, System.Single dist)
    // Offset: 0x1307AA4
    static bool IntersectRayAABB_Injected(UnityEngine::Ray& ray, UnityEngine::Bounds& bounds, float& dist);
    // public override System.Int32 GetHashCode()
    // Offset: 0xA45724
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
    // public override System.Boolean Equals(System.Object other)
    // Offset: 0xA4572C
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object other)
    bool Equals(::Il2CppObject* other);
    // public System.Boolean Equals(UnityEngine.Bounds other)
    // Offset: 0xA45734
    // Implemented from: System.IEquatable`1
    // Base method: System.Boolean IEquatable`1::Equals(UnityEngine.Bounds other)
    bool Equals(UnityEngine::Bounds other);
    // public override System.String ToString()
    // Offset: 0xA45844
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::Il2CppString* ToString();
  }; // UnityEngine.Bounds
  // static public System.Boolean op_Equality(UnityEngine.Bounds lhs, UnityEngine.Bounds rhs)
  // Offset: 0x130748C
  inline bool operator ==(const UnityEngine::Bounds& lhs, const UnityEngine::Bounds& rhs) {
    return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("UnityEngine", "Bounds", "op_Equality", lhs, rhs));
  }
  // static public System.Boolean op_Inequality(UnityEngine.Bounds lhs, UnityEngine.Bounds rhs)
  // Offset: 0x13075A8
  inline bool operator !=(const UnityEngine::Bounds& lhs, const UnityEngine::Bounds& rhs) {
    return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("UnityEngine", "Bounds", "op_Inequality", lhs, rhs));
  }
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Bounds, "UnityEngine", "Bounds");
#pragma pack(pop)
