// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: PersistentScriptableObject
#include "GlobalNamespace/PersistentScriptableObject.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: BloomFogEnvironmentParams
  class BloomFogEnvironmentParams : public GlobalNamespace::PersistentScriptableObject {
    public:
    // public System.Single attenuation
    // Offset: 0x18
    float attenuation;
    // public System.Single offset
    // Offset: 0x1C
    float offset;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Void .ctor()
    // Offset: 0x1CF7854
    // Implemented from: PersistentScriptableObject
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static BloomFogEnvironmentParams* New_ctor();
  }; // BloomFogEnvironmentParams
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BloomFogEnvironmentParams*, "", "BloomFogEnvironmentParams");
#pragma pack(pop)
