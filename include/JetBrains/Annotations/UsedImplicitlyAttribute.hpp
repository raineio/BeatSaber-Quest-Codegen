// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Attribute
#include "System/Attribute.hpp"
// Including type: JetBrains.Annotations.ImplicitUseKindFlags
#include "JetBrains/Annotations/ImplicitUseKindFlags.hpp"
// Including type: JetBrains.Annotations.ImplicitUseTargetFlags
#include "JetBrains/Annotations/ImplicitUseTargetFlags.hpp"
// Completed includes
// Type namespace: JetBrains.Annotations
namespace JetBrains::Annotations {
  // Autogenerated type: JetBrains.Annotations.UsedImplicitlyAttribute
  class UsedImplicitlyAttribute : public System::Attribute {
    public:
    // private readonly JetBrains.Annotations.ImplicitUseKindFlags <UseKindFlags>k__BackingField
    // Offset: 0x10
    JetBrains::Annotations::ImplicitUseKindFlags UseKindFlags;
    // private readonly JetBrains.Annotations.ImplicitUseTargetFlags <TargetFlags>k__BackingField
    // Offset: 0x14
    JetBrains::Annotations::ImplicitUseTargetFlags TargetFlags;
    // public System.Void .ctor(JetBrains.Annotations.ImplicitUseKindFlags useKindFlags, JetBrains.Annotations.ImplicitUseTargetFlags targetFlags)
    // Offset: 0x1783F80
    static UsedImplicitlyAttribute* New_ctor(JetBrains::Annotations::ImplicitUseKindFlags useKindFlags, JetBrains::Annotations::ImplicitUseTargetFlags targetFlags);
    // public System.Void .ctor()
    // Offset: 0x1783F50
    // Implemented from: System.Attribute
    // Base method: System.Void Attribute::.ctor()
    // Base method: System.Void Object::.ctor()
    static UsedImplicitlyAttribute* New_ctor();
  }; // JetBrains.Annotations.UsedImplicitlyAttribute
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(JetBrains::Annotations::UsedImplicitlyAttribute*, "JetBrains.Annotations", "UsedImplicitlyAttribute");
#pragma pack(pop)
