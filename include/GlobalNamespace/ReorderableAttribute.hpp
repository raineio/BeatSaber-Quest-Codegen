// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.PropertyAttribute
#include "UnityEngine/PropertyAttribute.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: ReorderableAttribute
  class ReorderableAttribute;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(GlobalNamespace::ReorderableAttribute);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ReorderableAttribute*, "", "ReorderableAttribute");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x1A
  #pragma pack(push, 1)
  // Autogenerated type: ReorderableAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  class ReorderableAttribute : public UnityEngine::PropertyAttribute {
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
    // private System.String <ElementHeader>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* ElementHeader;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Boolean <HeaderZeroIndex>k__BackingField
    // Size: 0x1
    // Offset: 0x18
    bool HeaderZeroIndex;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean <ElementSingleLine>k__BackingField
    // Size: 0x1
    // Offset: 0x19
    bool ElementSingleLine;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: private System.String <ElementHeader>k__BackingField
    ::Il2CppString*& dyn_$ElementHeader$k__BackingField();
    // Get instance field reference: private System.Boolean <HeaderZeroIndex>k__BackingField
    bool& dyn_$HeaderZeroIndex$k__BackingField();
    // Get instance field reference: private System.Boolean <ElementSingleLine>k__BackingField
    bool& dyn_$ElementSingleLine$k__BackingField();
    // public System.String get_ElementHeader()
    // Offset: 0x263E770
    ::Il2CppString* get_ElementHeader();
    // protected System.Void set_ElementHeader(System.String value)
    // Offset: 0x263E778
    void set_ElementHeader(::Il2CppString* value);
    // public System.Boolean get_HeaderZeroIndex()
    // Offset: 0x263E780
    bool get_HeaderZeroIndex();
    // protected System.Void set_HeaderZeroIndex(System.Boolean value)
    // Offset: 0x263E788
    void set_HeaderZeroIndex(bool value);
    // public System.Boolean get_ElementSingleLine()
    // Offset: 0x263E794
    bool get_ElementSingleLine();
    // protected System.Void set_ElementSingleLine(System.Boolean value)
    // Offset: 0x263E79C
    void set_ElementSingleLine(bool value);
    // public System.Void .ctor(System.String headerString, System.Boolean isZeroIndex, System.Boolean isSingleLine)
    // Offset: 0x263E810
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ReorderableAttribute* New_ctor(::Il2CppString* headerString, bool isZeroIndex, bool isSingleLine) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ReorderableAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ReorderableAttribute*, creationType>(headerString, isZeroIndex, isSingleLine)));
    }
    // public System.Void .ctor()
    // Offset: 0x263E7A8
    // Implemented from: UnityEngine.PropertyAttribute
    // Base method: System.Void PropertyAttribute::.ctor()
    // Base method: System.Void Attribute::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ReorderableAttribute* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ReorderableAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ReorderableAttribute*, creationType>()));
    }
  }; // ReorderableAttribute
  #pragma pack(pop)
  static check_size<sizeof(ReorderableAttribute), 25 + sizeof(bool)> __GlobalNamespace_ReorderableAttributeSizeCheck;
  static_assert(sizeof(ReorderableAttribute) == 0x1A);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ReorderableAttribute::get_ElementHeader
// Il2CppName: get_ElementHeader
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (GlobalNamespace::ReorderableAttribute::*)()>(&GlobalNamespace::ReorderableAttribute::get_ElementHeader)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ReorderableAttribute*), "get_ElementHeader", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ReorderableAttribute::set_ElementHeader
// Il2CppName: set_ElementHeader
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ReorderableAttribute::*)(::Il2CppString*)>(&GlobalNamespace::ReorderableAttribute::set_ElementHeader)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ReorderableAttribute*), "set_ElementHeader", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ReorderableAttribute::get_HeaderZeroIndex
// Il2CppName: get_HeaderZeroIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::ReorderableAttribute::*)()>(&GlobalNamespace::ReorderableAttribute::get_HeaderZeroIndex)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ReorderableAttribute*), "get_HeaderZeroIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ReorderableAttribute::set_HeaderZeroIndex
// Il2CppName: set_HeaderZeroIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ReorderableAttribute::*)(bool)>(&GlobalNamespace::ReorderableAttribute::set_HeaderZeroIndex)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ReorderableAttribute*), "set_HeaderZeroIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ReorderableAttribute::get_ElementSingleLine
// Il2CppName: get_ElementSingleLine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::ReorderableAttribute::*)()>(&GlobalNamespace::ReorderableAttribute::get_ElementSingleLine)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ReorderableAttribute*), "get_ElementSingleLine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ReorderableAttribute::set_ElementSingleLine
// Il2CppName: set_ElementSingleLine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ReorderableAttribute::*)(bool)>(&GlobalNamespace::ReorderableAttribute::set_ElementSingleLine)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ReorderableAttribute*), "set_ElementSingleLine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ReorderableAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::ReorderableAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
