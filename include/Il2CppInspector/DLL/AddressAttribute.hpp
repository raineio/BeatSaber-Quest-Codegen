// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Attribute
#include "System/Attribute.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Il2CppInspector.DLL
namespace Il2CppInspector::DLL {
  // WARNING Size may be invalid!
  // Autogenerated type: Il2CppInspector.DLL.AddressAttribute
  class AddressAttribute : public System::Attribute {
    public:
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
    // Creating value type constructor for type: AddressAttribute
    AddressAttribute(::Il2CppString* RVA_ = {}, ::Il2CppString* Offset_ = {}, ::Il2CppString* VA_ = {}, ::Il2CppString* Slot_ = {}) noexcept : RVA{RVA_}, Offset{Offset_}, VA{VA_}, Slot{Slot_} {}
    // Get instance field: public System.String RVA
    ::Il2CppString* _get_RVA();
    // Set instance field: public System.String RVA
    void _set_RVA(::Il2CppString* value);
    // Get instance field: public System.String Offset
    ::Il2CppString* _get_Offset();
    // Set instance field: public System.String Offset
    void _set_Offset(::Il2CppString* value);
    // Get instance field: public System.String VA
    ::Il2CppString* _get_VA();
    // Set instance field: public System.String VA
    void _set_VA(::Il2CppString* value);
    // Get instance field: public System.String Slot
    ::Il2CppString* _get_Slot();
    // Set instance field: public System.String Slot
    void _set_Slot(::Il2CppString* value);
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
DEFINE_IL2CPP_ARG_TYPE(Il2CppInspector::DLL::AddressAttribute*, "Il2CppInspector.DLL", "AddressAttribute");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Il2CppInspector::DLL::AddressAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!