// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: MaterialPropertyValuesSetter
#include "GlobalNamespace/MaterialPropertyValuesSetter.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(GlobalNamespace::MaterialPropertyValuesSetter::PropertyValuePairBase);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MaterialPropertyValuesSetter::PropertyValuePairBase*, "", "MaterialPropertyValuesSetter/PropertyValuePairBase");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: MaterialPropertyValuesSetter/PropertyValuePairBase
  // [TokenAttribute] Offset: FFFFFFFF
  class MaterialPropertyValuesSetter::PropertyValuePairBase : public ::Il2CppObject {
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
    // private System.String _propertyName
    // Size: 0x8
    // Offset: 0x10
    ::StringW propertyName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Int32 <propertyId>k__BackingField
    // Size: 0x4
    // Offset: 0x18
    int propertyId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: private System.String _propertyName
    ::StringW& dyn__propertyName();
    // Get instance field reference: private System.Int32 <propertyId>k__BackingField
    int& dyn_$propertyId$k__BackingField();
    // public System.Int32 get_propertyId()
    // Offset: 0x1DBA484
    int get_propertyId();
    // private System.Void set_propertyId(System.Int32 value)
    // Offset: 0x1DBA48C
    void set_propertyId(int value);
    // public System.Void RefreshPropertyId()
    // Offset: 0x1DBA34C
    void RefreshPropertyId();
    // public System.Void .ctor()
    // Offset: 0x1DBA3B4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MaterialPropertyValuesSetter::PropertyValuePairBase* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MaterialPropertyValuesSetter::PropertyValuePairBase::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MaterialPropertyValuesSetter::PropertyValuePairBase*, creationType>()));
    }
  }; // MaterialPropertyValuesSetter/PropertyValuePairBase
  #pragma pack(pop)
  static check_size<sizeof(MaterialPropertyValuesSetter::PropertyValuePairBase), 24 + sizeof(int)> __GlobalNamespace_MaterialPropertyValuesSetter_PropertyValuePairBaseSizeCheck;
  static_assert(sizeof(MaterialPropertyValuesSetter::PropertyValuePairBase) == 0x1C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MaterialPropertyValuesSetter::PropertyValuePairBase::get_propertyId
// Il2CppName: get_propertyId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::MaterialPropertyValuesSetter::PropertyValuePairBase::*)()>(&GlobalNamespace::MaterialPropertyValuesSetter::PropertyValuePairBase::get_propertyId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MaterialPropertyValuesSetter::PropertyValuePairBase*), "get_propertyId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MaterialPropertyValuesSetter::PropertyValuePairBase::set_propertyId
// Il2CppName: set_propertyId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MaterialPropertyValuesSetter::PropertyValuePairBase::*)(int)>(&GlobalNamespace::MaterialPropertyValuesSetter::PropertyValuePairBase::set_propertyId)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MaterialPropertyValuesSetter::PropertyValuePairBase*), "set_propertyId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MaterialPropertyValuesSetter::PropertyValuePairBase::RefreshPropertyId
// Il2CppName: RefreshPropertyId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MaterialPropertyValuesSetter::PropertyValuePairBase::*)()>(&GlobalNamespace::MaterialPropertyValuesSetter::PropertyValuePairBase::RefreshPropertyId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MaterialPropertyValuesSetter::PropertyValuePairBase*), "RefreshPropertyId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MaterialPropertyValuesSetter::PropertyValuePairBase::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
