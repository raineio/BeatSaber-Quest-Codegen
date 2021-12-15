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
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Forward declaring type: TypeConverterAttribute
  class TypeConverterAttribute;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(System::ComponentModel::TypeConverterAttribute);
DEFINE_IL2CPP_ARG_TYPE(System::ComponentModel::TypeConverterAttribute*, "System.ComponentModel", "TypeConverterAttribute");
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.ComponentModel.TypeConverterAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: EAACE8
  class TypeConverterAttribute : public System::Attribute {
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
    // private System.String typeName
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* typeName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    public:
    // Creating conversion operator: operator ::Il2CppString*
    constexpr operator ::Il2CppString*() const noexcept {
      return typeName;
    }
    // Get static field: static public readonly System.ComponentModel.TypeConverterAttribute Default
    static System::ComponentModel::TypeConverterAttribute* _get_Default();
    // Set static field: static public readonly System.ComponentModel.TypeConverterAttribute Default
    static void _set_Default(System::ComponentModel::TypeConverterAttribute* value);
    // Get instance field reference: private System.String typeName
    ::Il2CppString*& dyn_typeName();
    // public System.String get_ConverterTypeName()
    // Offset: 0x1A276B8
    ::Il2CppString* get_ConverterTypeName();
    // public System.Void .ctor(System.Type type)
    // Offset: 0x1A275D4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TypeConverterAttribute* New_ctor(System::Type* type) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::ComponentModel::TypeConverterAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TypeConverterAttribute*, creationType>(type)));
    }
    // public System.Void .ctor(System.String typeName)
    // Offset: 0x1A2761C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TypeConverterAttribute* New_ctor(::Il2CppString* typeName) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::ComponentModel::TypeConverterAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TypeConverterAttribute*, creationType>(typeName)));
    }
    // static private System.Void .cctor()
    // Offset: 0x1A27774
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x1A27570
    // Implemented from: System.Attribute
    // Base method: System.Void Attribute::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TypeConverterAttribute* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::ComponentModel::TypeConverterAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TypeConverterAttribute*, creationType>()));
    }
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x1A276C0
    // Implemented from: System.Attribute
    // Base method: System.Boolean Attribute::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x1A27754
    // Implemented from: System.Attribute
    // Base method: System.Int32 Attribute::GetHashCode()
    int GetHashCode();
  }; // System.ComponentModel.TypeConverterAttribute
  #pragma pack(pop)
  static check_size<sizeof(TypeConverterAttribute), 16 + sizeof(::Il2CppString*)> __System_ComponentModel_TypeConverterAttributeSizeCheck;
  static_assert(sizeof(TypeConverterAttribute) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::ComponentModel::TypeConverterAttribute::get_ConverterTypeName
// Il2CppName: get_ConverterTypeName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::ComponentModel::TypeConverterAttribute::*)()>(&System::ComponentModel::TypeConverterAttribute::get_ConverterTypeName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::TypeConverterAttribute*), "get_ConverterTypeName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::TypeConverterAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::ComponentModel::TypeConverterAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::ComponentModel::TypeConverterAttribute::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::ComponentModel::TypeConverterAttribute::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::TypeConverterAttribute*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::TypeConverterAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::ComponentModel::TypeConverterAttribute::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::ComponentModel::TypeConverterAttribute::*)(::Il2CppObject*)>(&System::ComponentModel::TypeConverterAttribute::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::TypeConverterAttribute*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::TypeConverterAttribute::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::ComponentModel::TypeConverterAttribute::*)()>(&System::ComponentModel::TypeConverterAttribute::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::TypeConverterAttribute*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
