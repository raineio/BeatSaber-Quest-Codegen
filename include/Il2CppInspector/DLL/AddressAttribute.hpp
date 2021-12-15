// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Attribute
#include "System/Attribute.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Il2CppInspector.DLL
namespace Il2CppInspector::DLL {
  // Forward declaring type: AddressAttribute
  class AddressAttribute;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(Il2CppInspector::DLL::AddressAttribute);
DEFINE_IL2CPP_ARG_TYPE(Il2CppInspector::DLL::AddressAttribute*, "Il2CppInspector.DLL", "AddressAttribute");
// Type namespace: Il2CppInspector.DLL
namespace Il2CppInspector::DLL {
  // WARNING Size may be invalid!
  // Autogenerated type: Il2CppInspector.DLL.AddressAttribute
  class AddressAttribute : public System::Attribute {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // public System.String RVA
    // Size: 0x8
    // Offset: 0xFFFFFFFF
    ::Il2CppString* RVA;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.String Offset
    // Size: 0x8
    // Offset: 0xFFFFFFFF
    ::Il2CppString* Offset;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.String VA
    // Size: 0x8
    // Offset: 0xFFFFFFFF
    ::Il2CppString* VA;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.String Slot
    // Size: 0x8
    // Offset: 0xFFFFFFFF
    ::Il2CppString* Slot;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    public:
    // Get instance field reference: public System.String RVA
    ::Il2CppString*& dyn_RVA();
    // Get instance field reference: public System.String Offset
    ::Il2CppString*& dyn_Offset();
    // Get instance field reference: public System.String VA
    ::Il2CppString*& dyn_VA();
    // Get instance field reference: public System.String Slot
    ::Il2CppString*& dyn_Slot();
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Attribute
    // Base method: System.Void Attribute::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AddressAttribute* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Il2CppInspector::DLL::AddressAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AddressAttribute*, creationType>()));
    }
  }; // Il2CppInspector.DLL.AddressAttribute
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Il2CppInspector::DLL::AddressAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
