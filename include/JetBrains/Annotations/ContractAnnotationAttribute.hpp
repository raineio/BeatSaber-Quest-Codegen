// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Attribute
#include "System/Attribute.hpp"
// Completed includes
// Type namespace: JetBrains.Annotations
namespace JetBrains::Annotations {
  // Autogenerated type: JetBrains.Annotations.ContractAnnotationAttribute
  class ContractAnnotationAttribute : public System::Attribute {
    public:
    // private System.String <Contract>k__BackingField
    // Offset: 0x10
    ::Il2CppString* Contract;
    // private System.Boolean <ForceFullStates>k__BackingField
    // Offset: 0x18
    bool ForceFullStates;
    // public System.Void .ctor(System.String contract)
    // Offset: 0x1F5CA64
    static ContractAnnotationAttribute* New_ctor(::Il2CppString* contract);
    // public System.Void .ctor(System.String contract, System.Boolean forceFullStates)
    // Offset: 0x1F5CAA0
    static ContractAnnotationAttribute* New_ctor(::Il2CppString* contract, bool forceFullStates);
    // public System.String get_Contract()
    // Offset: 0x1F5CAEC
    ::Il2CppString* get_Contract();
    // private System.Void set_Contract(System.String value)
    // Offset: 0x1F5CAF4
    void set_Contract(::Il2CppString* value);
    // public System.Boolean get_ForceFullStates()
    // Offset: 0x1F5CAFC
    bool get_ForceFullStates();
    // private System.Void set_ForceFullStates(System.Boolean value)
    // Offset: 0x1F5CB04
    void set_ForceFullStates(bool value);
  }; // JetBrains.Annotations.ContractAnnotationAttribute
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(JetBrains::Annotations::ContractAnnotationAttribute*, "JetBrains.Annotations", "ContractAnnotationAttribute");
#pragma pack(pop)
