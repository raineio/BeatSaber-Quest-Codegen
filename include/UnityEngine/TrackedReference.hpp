// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Autogenerated type: UnityEngine.TrackedReference
  class TrackedReference : public ::Il2CppObject {
    public:
    // System.IntPtr m_Ptr
    // Offset: 0x10
    System::IntPtr m_Ptr;
    // Creating conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept {
      return m_Ptr;
    }
    // protected System.Void .ctor()
    // Offset: 0x173BAFC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static TrackedReference* New_ctor();
    // public override System.Boolean Equals(System.Object o)
    // Offset: 0x173BB9C
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object o)
    bool Equals(::Il2CppObject* o);
    // public override System.Int32 GetHashCode()
    // Offset: 0x173BC2C
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
  }; // UnityEngine.TrackedReference
  // static public System.Boolean op_Equality(UnityEngine.TrackedReference x, UnityEngine.TrackedReference y)
  // Offset: 0x173BB04
  bool operator ==(UnityEngine::TrackedReference* x, UnityEngine::TrackedReference& y);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TrackedReference*, "UnityEngine", "TrackedReference");
#pragma pack(pop)
