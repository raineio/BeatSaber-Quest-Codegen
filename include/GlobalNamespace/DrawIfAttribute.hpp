// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.PropertyAttribute
#include "UnityEngine/PropertyAttribute.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: DrawIfAttribute
  class DrawIfAttribute;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(GlobalNamespace::DrawIfAttribute);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::DrawIfAttribute*, "", "DrawIfAttribute");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x2C
  #pragma pack(push, 1)
  // Autogenerated type: DrawIfAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: F0874C
  class DrawIfAttribute : public UnityEngine::PropertyAttribute {
    public:
    // Nested type: GlobalNamespace::DrawIfAttribute::DisablingType
    struct DisablingType;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: DrawIfAttribute/DisablingType
    // [TokenAttribute] Offset: FFFFFFFF
    struct DisablingType/*, public System::Enum*/ {
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
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: DisablingType
      constexpr DisablingType(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator System::Enum
      operator System::Enum() noexcept {
        return *reinterpret_cast<System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public DrawIfAttribute/DisablingType ReadOnly
      static constexpr const int ReadOnly = 0;
      // Get static field: static public DrawIfAttribute/DisablingType ReadOnly
      static GlobalNamespace::DrawIfAttribute::DisablingType _get_ReadOnly();
      // Set static field: static public DrawIfAttribute/DisablingType ReadOnly
      static void _set_ReadOnly(GlobalNamespace::DrawIfAttribute::DisablingType value);
      // static field const value: static public DrawIfAttribute/DisablingType DontDraw
      static constexpr const int DontDraw = 1;
      // Get static field: static public DrawIfAttribute/DisablingType DontDraw
      static GlobalNamespace::DrawIfAttribute::DisablingType _get_DontDraw();
      // Set static field: static public DrawIfAttribute/DisablingType DontDraw
      static void _set_DontDraw(GlobalNamespace::DrawIfAttribute::DisablingType value);
      // Get instance field reference: public System.Int32 value__
      int& dyn_value__();
    }; // DrawIfAttribute/DisablingType
    #pragma pack(pop)
    static check_size<sizeof(DrawIfAttribute::DisablingType), 0 + sizeof(int)> __GlobalNamespace_DrawIfAttribute_DisablingTypeSizeCheck;
    static_assert(sizeof(DrawIfAttribute::DisablingType) == 0x4);
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // public readonly System.String propertyName
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* propertyName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public readonly System.Object value
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppObject* value;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // public readonly System.Object orValue
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppObject* orValue;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // public readonly DrawIfAttribute/DisablingType disablingType
    // Size: 0x4
    // Offset: 0x28
    GlobalNamespace::DrawIfAttribute::DisablingType disablingType;
    // Field size check
    static_assert(sizeof(GlobalNamespace::DrawIfAttribute::DisablingType) == 0x4);
    public:
    // Get instance field reference: public readonly System.String propertyName
    ::Il2CppString*& dyn_propertyName();
    // Get instance field reference: public readonly System.Object value
    ::Il2CppObject*& dyn_value();
    // Get instance field reference: public readonly System.Object orValue
    ::Il2CppObject*& dyn_orValue();
    // Get instance field reference: public readonly DrawIfAttribute/DisablingType disablingType
    GlobalNamespace::DrawIfAttribute::DisablingType& dyn_disablingType();
    // public System.Void .ctor(System.String propertyName, System.Object value, DrawIfAttribute/DisablingType disablingType)
    // Offset: 0x13928F8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DrawIfAttribute* New_ctor(::Il2CppString* propertyName, ::Il2CppObject* value, GlobalNamespace::DrawIfAttribute::DisablingType disablingType) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::DrawIfAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DrawIfAttribute*, creationType>(propertyName, value, disablingType)));
    }
    // public System.Void .ctor(System.String propertyName, System.Object value, System.Object orValue, DrawIfAttribute/DisablingType disablingType)
    // Offset: 0x1392938
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DrawIfAttribute* New_ctor(::Il2CppString* propertyName, ::Il2CppObject* value, ::Il2CppObject* orValue, GlobalNamespace::DrawIfAttribute::DisablingType disablingType) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::DrawIfAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DrawIfAttribute*, creationType>(propertyName, value, orValue, disablingType)));
    }
  }; // DrawIfAttribute
  #pragma pack(pop)
  static check_size<sizeof(DrawIfAttribute), 40 + sizeof(GlobalNamespace::DrawIfAttribute::DisablingType)> __GlobalNamespace_DrawIfAttributeSizeCheck;
  static_assert(sizeof(DrawIfAttribute) == 0x2C);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::DrawIfAttribute::DisablingType, "", "DrawIfAttribute/DisablingType");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::DrawIfAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::DrawIfAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
