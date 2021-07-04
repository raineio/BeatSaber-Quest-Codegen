// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Attribute
#include "System/Attribute.hpp"
// Including type: System.AttributeTargets
#include "System/AttributeTargets.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System
namespace System {
  // Size: 0x16
  #pragma pack(push, 1)
  // Autogenerated type: System.AttributeUsageAttribute
  // [ComVisibleAttribute] Offset: D7A38C
  // [AttributeUsageAttribute] Offset: D7A38C
  class AttributeUsageAttribute : public System::Attribute {
    public:
    // System.AttributeTargets m_attributeTarget
    // Size: 0x4
    // Offset: 0x10
    System::AttributeTargets m_attributeTarget;
    // Field size check
    static_assert(sizeof(System::AttributeTargets) == 0x4);
    // System.Boolean m_allowMultiple
    // Size: 0x1
    // Offset: 0x14
    bool m_allowMultiple;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // System.Boolean m_inherited
    // Size: 0x1
    // Offset: 0x15
    bool m_inherited;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: AttributeUsageAttribute
    AttributeUsageAttribute(System::AttributeTargets m_attributeTarget_ = {}, bool m_allowMultiple_ = {}, bool m_inherited_ = {}) noexcept : m_attributeTarget{m_attributeTarget_}, m_allowMultiple{m_allowMultiple_}, m_inherited{m_inherited_} {}
    // Get static field: static System.AttributeUsageAttribute Default
    static System::AttributeUsageAttribute* _get_Default();
    // Set static field: static System.AttributeUsageAttribute Default
    static void _set_Default(System::AttributeUsageAttribute* value);
    // public System.Void .ctor(System.AttributeTargets validOn)
    // Offset: 0x177B2E8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AttributeUsageAttribute* New_ctor(System::AttributeTargets validOn) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::AttributeUsageAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AttributeUsageAttribute*, creationType>(validOn)));
    }
    // public System.Boolean get_AllowMultiple()
    // Offset: 0x177B324
    bool get_AllowMultiple();
    // public System.Void set_AllowMultiple(System.Boolean value)
    // Offset: 0x177B32C
    void set_AllowMultiple(bool value);
    // public System.Boolean get_Inherited()
    // Offset: 0x177B338
    bool get_Inherited();
    // public System.Void set_Inherited(System.Boolean value)
    // Offset: 0x177B340
    void set_Inherited(bool value);
    // static private System.Void .cctor()
    // Offset: 0x177B34C
    static void _cctor();
  }; // System.AttributeUsageAttribute
  #pragma pack(pop)
  static check_size<sizeof(AttributeUsageAttribute), 21 + sizeof(bool)> __System_AttributeUsageAttributeSizeCheck;
  static_assert(sizeof(AttributeUsageAttribute) == 0x16);
}
DEFINE_IL2CPP_ARG_TYPE(System::AttributeUsageAttribute*, "System", "AttributeUsageAttribute");
// Writing MetadataGetter for method: System::AttributeUsageAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::AttributeUsageAttribute::get_AllowMultiple
// Il2CppName: get_AllowMultiple
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::AttributeUsageAttribute::*)()>(&System::AttributeUsageAttribute::get_AllowMultiple)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::AttributeUsageAttribute*), "get_AllowMultiple", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::AttributeUsageAttribute::set_AllowMultiple
// Il2CppName: set_AllowMultiple
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::AttributeUsageAttribute::*)(bool)>(&System::AttributeUsageAttribute::set_AllowMultiple)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::AttributeUsageAttribute*), "set_AllowMultiple", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<bool>()});
  }
};
// Writing MetadataGetter for method: System::AttributeUsageAttribute::get_Inherited
// Il2CppName: get_Inherited
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::AttributeUsageAttribute::*)()>(&System::AttributeUsageAttribute::get_Inherited)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::AttributeUsageAttribute*), "get_Inherited", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::AttributeUsageAttribute::set_Inherited
// Il2CppName: set_Inherited
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::AttributeUsageAttribute::*)(bool)>(&System::AttributeUsageAttribute::set_Inherited)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::AttributeUsageAttribute*), "set_Inherited", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<bool>()});
  }
};
// Writing MetadataGetter for method: System::AttributeUsageAttribute::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::AttributeUsageAttribute::_cctor)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::AttributeUsageAttribute*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
