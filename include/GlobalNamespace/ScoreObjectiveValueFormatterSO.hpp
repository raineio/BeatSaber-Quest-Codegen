// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: ObjectiveValueFormatterSO
#include "GlobalNamespace/ObjectiveValueFormatterSO.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: ScoreObjectiveValueFormatterSO
  class ScoreObjectiveValueFormatterSO : public GlobalNamespace::ObjectiveValueFormatterSO {
    public:
    // public override System.String FormatValue(System.Int32 value)
    // Offset: 0x207EAA0
    // Implemented from: ObjectiveValueFormatterSO
    // Base method: System.String ObjectiveValueFormatterSO::FormatValue(System.Int32 value)
    ::Il2CppString* FormatValue(int value);
    // public System.Void .ctor()
    // Offset: 0x207EB04
    // Implemented from: ObjectiveValueFormatterSO
    // Base method: System.Void ObjectiveValueFormatterSO::.ctor()
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static ScoreObjectiveValueFormatterSO* New_ctor();
  }; // ScoreObjectiveValueFormatterSO
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ScoreObjectiveValueFormatterSO*, "", "ScoreObjectiveValueFormatterSO");
#pragma pack(pop)
