// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::ComponentModel
namespace System::ComponentModel {
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: String
  class String;
}
// Completed forward declares
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Forward declaring type: TypeConverter
  class TypeConverter;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(System::ComponentModel::TypeConverter);
DEFINE_IL2CPP_ARG_TYPE(System::ComponentModel::TypeConverter*, "System.ComponentModel", "TypeConverter");
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.ComponentModel.TypeConverter
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: EAAC9C
  class TypeConverter : public ::Il2CppObject {
    public:
    // Nested type: System::ComponentModel::TypeConverter::StandardValuesCollection
    class StandardValuesCollection;
    // static field const value: static private System.String s_UseCompatibleTypeConverterBehavior
    static constexpr const char* s_UseCompatibleTypeConverterBehavior = "UseCompatibleTypeConverterBehavior";
    // Get static field: static private System.String s_UseCompatibleTypeConverterBehavior
    static ::StringW _get_s_UseCompatibleTypeConverterBehavior();
    // Set static field: static private System.String s_UseCompatibleTypeConverterBehavior
    static void _set_s_UseCompatibleTypeConverterBehavior(::StringW value);
    // Get static field: static private System.Boolean useCompatibleTypeConversion
    static bool _get_useCompatibleTypeConversion();
    // Set static field: static private System.Boolean useCompatibleTypeConversion
    static void _set_useCompatibleTypeConversion(bool value);
    // public System.Void .ctor()
    // Offset: 0x1A25734
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TypeConverter* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::ComponentModel::TypeConverter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TypeConverter*, creationType>()));
    }
  }; // System.ComponentModel.TypeConverter
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::ComponentModel::TypeConverter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
