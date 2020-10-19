// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: DynamicBoneColliderBase
  class DynamicBoneColliderBase : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::DynamicBoneColliderBase::Direction
    struct Direction;
    // Nested type: GlobalNamespace::DynamicBoneColliderBase::Bound
    struct Bound;
    // Autogenerated type: DynamicBoneColliderBase/Direction
    struct Direction : public System::Enum {
      public:
      // public System.Int32 value__
      // Offset: 0x0
      int value;
      // Creating value type constructor for type: Direction
      constexpr Direction(int value_ = {}) noexcept : value{value_} {}
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public DynamicBoneColliderBase/Direction X
      static constexpr const int X = 0;
      // Get static field: static public DynamicBoneColliderBase/Direction X
      static GlobalNamespace::DynamicBoneColliderBase::Direction _get_X();
      // Set static field: static public DynamicBoneColliderBase/Direction X
      static void _set_X(GlobalNamespace::DynamicBoneColliderBase::Direction value);
      // static field const value: static public DynamicBoneColliderBase/Direction Y
      static constexpr const int Y = 1;
      // Get static field: static public DynamicBoneColliderBase/Direction Y
      static GlobalNamespace::DynamicBoneColliderBase::Direction _get_Y();
      // Set static field: static public DynamicBoneColliderBase/Direction Y
      static void _set_Y(GlobalNamespace::DynamicBoneColliderBase::Direction value);
      // static field const value: static public DynamicBoneColliderBase/Direction Z
      static constexpr const int Z = 2;
      // Get static field: static public DynamicBoneColliderBase/Direction Z
      static GlobalNamespace::DynamicBoneColliderBase::Direction _get_Z();
      // Set static field: static public DynamicBoneColliderBase/Direction Z
      static void _set_Z(GlobalNamespace::DynamicBoneColliderBase::Direction value);
    }; // DynamicBoneColliderBase/Direction
    // Autogenerated type: DynamicBoneColliderBase/Bound
    struct Bound : public System::Enum {
      public:
      // public System.Int32 value__
      // Offset: 0x0
      int value;
      // Creating value type constructor for type: Bound
      constexpr Bound(int value_ = {}) noexcept : value{value_} {}
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public DynamicBoneColliderBase/Bound Outside
      static constexpr const int Outside = 0;
      // Get static field: static public DynamicBoneColliderBase/Bound Outside
      static GlobalNamespace::DynamicBoneColliderBase::Bound _get_Outside();
      // Set static field: static public DynamicBoneColliderBase/Bound Outside
      static void _set_Outside(GlobalNamespace::DynamicBoneColliderBase::Bound value);
      // static field const value: static public DynamicBoneColliderBase/Bound Inside
      static constexpr const int Inside = 1;
      // Get static field: static public DynamicBoneColliderBase/Bound Inside
      static GlobalNamespace::DynamicBoneColliderBase::Bound _get_Inside();
      // Set static field: static public DynamicBoneColliderBase/Bound Inside
      static void _set_Inside(GlobalNamespace::DynamicBoneColliderBase::Bound value);
    }; // DynamicBoneColliderBase/Bound
    // public DynamicBoneColliderBase/Direction m_Direction
    // Offset: 0x18
    GlobalNamespace::DynamicBoneColliderBase::Direction m_Direction;
    // public UnityEngine.Vector3 m_Center
    // Offset: 0x1C
    UnityEngine::Vector3 m_Center;
    // public DynamicBoneColliderBase/Bound m_Bound
    // Offset: 0x28
    GlobalNamespace::DynamicBoneColliderBase::Bound m_Bound;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Void Collide(ref UnityEngine.Vector3 particlePosition, System.Single particleRadius)
    // Offset: 0x1F55870
    void Collide(UnityEngine::Vector3& particlePosition, float particleRadius);
    // public System.Void .ctor()
    // Offset: 0x1F557F0
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static DynamicBoneColliderBase* New_ctor();
  }; // DynamicBoneColliderBase
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::DynamicBoneColliderBase*, "", "DynamicBoneColliderBase");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::DynamicBoneColliderBase::Direction, "", "DynamicBoneColliderBase/Direction");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::DynamicBoneColliderBase::Bound, "", "DynamicBoneColliderBase/Bound");
#pragma pack(pop)
