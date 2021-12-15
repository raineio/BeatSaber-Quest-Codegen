// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Attribute
#include "System/Attribute.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Diagnostics
namespace System::Diagnostics {
  // Forward declaring type: DebuggableAttribute
  class DebuggableAttribute;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(System::Diagnostics::DebuggableAttribute);
DEFINE_IL2CPP_ARG_TYPE(System::Diagnostics::DebuggableAttribute*, "System.Diagnostics", "DebuggableAttribute");
// Type namespace: System.Diagnostics
namespace System::Diagnostics {
  // Size: 0x14
  #pragma pack(push, 1)
  // Autogenerated type: System.Diagnostics.DebuggableAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: EA3BE4
  // [ComVisibleAttribute] Offset: EA3BE4
  class DebuggableAttribute : public System::Attribute {
    public:
    // Nested type: System::Diagnostics::DebuggableAttribute::DebuggingModes
    struct DebuggingModes;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: System.Diagnostics.DebuggableAttribute/System.Diagnostics.DebuggingModes
    // [TokenAttribute] Offset: FFFFFFFF
    // [ComVisibleAttribute] Offset: EA3C2C
    // [FlagsAttribute] Offset: FFFFFFFF
    struct DebuggingModes/*, public System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: DebuggingModes
      constexpr DebuggingModes(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator System::Enum
      operator System::Enum() noexcept {
        return *reinterpret_cast<System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public System.Diagnostics.DebuggableAttribute/System.Diagnostics.DebuggingModes None
      static constexpr const int None = 0;
      // Get static field: static public System.Diagnostics.DebuggableAttribute/System.Diagnostics.DebuggingModes None
      static System::Diagnostics::DebuggableAttribute::DebuggingModes _get_None();
      // Set static field: static public System.Diagnostics.DebuggableAttribute/System.Diagnostics.DebuggingModes None
      static void _set_None(System::Diagnostics::DebuggableAttribute::DebuggingModes value);
      // static field const value: static public System.Diagnostics.DebuggableAttribute/System.Diagnostics.DebuggingModes Default
      static constexpr const int Default = 1;
      // Get static field: static public System.Diagnostics.DebuggableAttribute/System.Diagnostics.DebuggingModes Default
      static System::Diagnostics::DebuggableAttribute::DebuggingModes _get_Default();
      // Set static field: static public System.Diagnostics.DebuggableAttribute/System.Diagnostics.DebuggingModes Default
      static void _set_Default(System::Diagnostics::DebuggableAttribute::DebuggingModes value);
      // static field const value: static public System.Diagnostics.DebuggableAttribute/System.Diagnostics.DebuggingModes DisableOptimizations
      static constexpr const int DisableOptimizations = 256;
      // Get static field: static public System.Diagnostics.DebuggableAttribute/System.Diagnostics.DebuggingModes DisableOptimizations
      static System::Diagnostics::DebuggableAttribute::DebuggingModes _get_DisableOptimizations();
      // Set static field: static public System.Diagnostics.DebuggableAttribute/System.Diagnostics.DebuggingModes DisableOptimizations
      static void _set_DisableOptimizations(System::Diagnostics::DebuggableAttribute::DebuggingModes value);
      // static field const value: static public System.Diagnostics.DebuggableAttribute/System.Diagnostics.DebuggingModes IgnoreSymbolStoreSequencePoints
      static constexpr const int IgnoreSymbolStoreSequencePoints = 2;
      // Get static field: static public System.Diagnostics.DebuggableAttribute/System.Diagnostics.DebuggingModes IgnoreSymbolStoreSequencePoints
      static System::Diagnostics::DebuggableAttribute::DebuggingModes _get_IgnoreSymbolStoreSequencePoints();
      // Set static field: static public System.Diagnostics.DebuggableAttribute/System.Diagnostics.DebuggingModes IgnoreSymbolStoreSequencePoints
      static void _set_IgnoreSymbolStoreSequencePoints(System::Diagnostics::DebuggableAttribute::DebuggingModes value);
      // static field const value: static public System.Diagnostics.DebuggableAttribute/System.Diagnostics.DebuggingModes EnableEditAndContinue
      static constexpr const int EnableEditAndContinue = 4;
      // Get static field: static public System.Diagnostics.DebuggableAttribute/System.Diagnostics.DebuggingModes EnableEditAndContinue
      static System::Diagnostics::DebuggableAttribute::DebuggingModes _get_EnableEditAndContinue();
      // Set static field: static public System.Diagnostics.DebuggableAttribute/System.Diagnostics.DebuggingModes EnableEditAndContinue
      static void _set_EnableEditAndContinue(System::Diagnostics::DebuggableAttribute::DebuggingModes value);
      // Get instance field reference: public System.Int32 value__
      int& dyn_value__();
    }; // System.Diagnostics.DebuggableAttribute/System.Diagnostics.DebuggingModes
    #pragma pack(pop)
    static check_size<sizeof(DebuggableAttribute::DebuggingModes), 0 + sizeof(int)> __System_Diagnostics_DebuggableAttribute_DebuggingModesSizeCheck;
    static_assert(sizeof(DebuggableAttribute::DebuggingModes) == 0x4);
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private System.Diagnostics.DebuggableAttribute/System.Diagnostics.DebuggingModes m_debuggingModes
    // Size: 0x4
    // Offset: 0x10
    System::Diagnostics::DebuggableAttribute::DebuggingModes m_debuggingModes;
    // Field size check
    static_assert(sizeof(System::Diagnostics::DebuggableAttribute::DebuggingModes) == 0x4);
    public:
    // Creating conversion operator: operator System::Diagnostics::DebuggableAttribute::DebuggingModes
    constexpr operator System::Diagnostics::DebuggableAttribute::DebuggingModes() const noexcept {
      return m_debuggingModes;
    }
    // Get instance field reference: private System.Diagnostics.DebuggableAttribute/System.Diagnostics.DebuggingModes m_debuggingModes
    System::Diagnostics::DebuggableAttribute::DebuggingModes& dyn_m_debuggingModes();
    // public System.Void .ctor(System.Diagnostics.DebuggableAttribute/System.Diagnostics.DebuggingModes modes)
    // Offset: 0x1D53900
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DebuggableAttribute* New_ctor(System::Diagnostics::DebuggableAttribute::DebuggingModes modes) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Diagnostics::DebuggableAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DebuggableAttribute*, creationType>(modes)));
    }
  }; // System.Diagnostics.DebuggableAttribute
  #pragma pack(pop)
  static check_size<sizeof(DebuggableAttribute), 16 + sizeof(System::Diagnostics::DebuggableAttribute::DebuggingModes)> __System_Diagnostics_DebuggableAttributeSizeCheck;
  static_assert(sizeof(DebuggableAttribute) == 0x14);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Diagnostics::DebuggableAttribute::DebuggingModes, "System.Diagnostics", "DebuggableAttribute/DebuggingModes");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Diagnostics::DebuggableAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
