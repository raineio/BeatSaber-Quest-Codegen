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
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: System.Runtime.InteropServices
namespace System::Runtime::InteropServices {
  // Autogenerated type: System.Runtime.InteropServices.ComDefaultInterfaceAttribute
  class ComDefaultInterfaceAttribute : public System::Attribute {
    public:
    // System.Type _val
    // Offset: 0x10
    System::Type* val;
    // Creating conversion operator: operator System::Type*
    constexpr operator System::Type*() const noexcept {
      return val;
    }
    // public System.Void .ctor(System.Type defaultInterface)
    // Offset: 0x108DB58
    static ComDefaultInterfaceAttribute* New_ctor(System::Type* defaultInterface);
  }; // System.Runtime.InteropServices.ComDefaultInterfaceAttribute
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::InteropServices::ComDefaultInterfaceAttribute*, "System.Runtime.InteropServices", "ComDefaultInterfaceAttribute");
#pragma pack(pop)
