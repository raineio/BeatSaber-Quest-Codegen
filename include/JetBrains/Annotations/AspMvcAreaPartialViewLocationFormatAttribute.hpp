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
  // Autogenerated type: JetBrains.Annotations.AspMvcAreaPartialViewLocationFormatAttribute
  class AspMvcAreaPartialViewLocationFormatAttribute : public System::Attribute {
    public:
    // private System.String <Format>k__BackingField
    // Offset: 0x10
    ::Il2CppString* Format;
    // Creating conversion operator: operator ::Il2CppString*
    constexpr operator ::Il2CppString*() const noexcept {
      return Format;
    }
    // public System.Void .ctor(System.String format)
    // Offset: 0x1F5C718
    static AspMvcAreaPartialViewLocationFormatAttribute* New_ctor(::Il2CppString* format);
    // public System.String get_Format()
    // Offset: 0x1F5C74C
    ::Il2CppString* get_Format();
    // private System.Void set_Format(System.String value)
    // Offset: 0x1F5C754
    void set_Format(::Il2CppString* value);
  }; // JetBrains.Annotations.AspMvcAreaPartialViewLocationFormatAttribute
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(JetBrains::Annotations::AspMvcAreaPartialViewLocationFormatAttribute*, "JetBrains.Annotations", "AspMvcAreaPartialViewLocationFormatAttribute");
#pragma pack(pop)
