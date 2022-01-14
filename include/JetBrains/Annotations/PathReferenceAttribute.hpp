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
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: JetBrains.Annotations
namespace JetBrains::Annotations {
  // Forward declaring type: PathReferenceAttribute
  class PathReferenceAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(JetBrains::Annotations::PathReferenceAttribute);
DEFINE_IL2CPP_ARG_TYPE(JetBrains::Annotations::PathReferenceAttribute*, "JetBrains.Annotations", "PathReferenceAttribute");
// Type namespace: JetBrains.Annotations
namespace JetBrains::Annotations {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: JetBrains.Annotations.PathReferenceAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: EEFEC8
  class PathReferenceAttribute : public System::Attribute {
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
    // private System.String <BasePath>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::StringW BasePath;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Creating conversion operator: operator ::StringW
    constexpr operator ::StringW() const noexcept {
      return BasePath;
    }
    // Get instance field reference: private System.String <BasePath>k__BackingField
    ::StringW& dyn_$BasePath$k__BackingField();
    // public System.String get_BasePath()
    // Offset: 0x26BA2A4
    ::StringW get_BasePath();
    // private System.Void set_BasePath(System.String value)
    // Offset: 0x26BA2AC
    void set_BasePath(::StringW value);
    // public System.Void .ctor(System.String basePath)
    // Offset: 0x26BA278
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PathReferenceAttribute* New_ctor(::StringW basePath) {
      static auto ___internal__logger = ::Logger::get().WithContext("JetBrains::Annotations::PathReferenceAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PathReferenceAttribute*, creationType>(basePath)));
    }
    // public System.Void .ctor()
    // Offset: 0x26BA270
    // Implemented from: System.Attribute
    // Base method: System.Void Attribute::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PathReferenceAttribute* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("JetBrains::Annotations::PathReferenceAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PathReferenceAttribute*, creationType>()));
    }
  }; // JetBrains.Annotations.PathReferenceAttribute
  #pragma pack(pop)
  static check_size<sizeof(PathReferenceAttribute), 16 + sizeof(::StringW)> __JetBrains_Annotations_PathReferenceAttributeSizeCheck;
  static_assert(sizeof(PathReferenceAttribute) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: JetBrains::Annotations::PathReferenceAttribute::get_BasePath
// Il2CppName: get_BasePath
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (JetBrains::Annotations::PathReferenceAttribute::*)()>(&JetBrains::Annotations::PathReferenceAttribute::get_BasePath)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(JetBrains::Annotations::PathReferenceAttribute*), "get_BasePath", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: JetBrains::Annotations::PathReferenceAttribute::set_BasePath
// Il2CppName: set_BasePath
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (JetBrains::Annotations::PathReferenceAttribute::*)(::StringW)>(&JetBrains::Annotations::PathReferenceAttribute::set_BasePath)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(JetBrains::Annotations::PathReferenceAttribute*), "set_BasePath", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: JetBrains::Annotations::PathReferenceAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: JetBrains::Annotations::PathReferenceAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
