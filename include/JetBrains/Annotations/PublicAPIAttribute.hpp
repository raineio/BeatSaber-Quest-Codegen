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
  // Forward declaring type: PublicAPIAttribute
  class PublicAPIAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(JetBrains::Annotations::PublicAPIAttribute);
DEFINE_IL2CPP_ARG_TYPE(JetBrains::Annotations::PublicAPIAttribute*, "JetBrains.Annotations", "PublicAPIAttribute");
// Type namespace: JetBrains.Annotations
namespace JetBrains::Annotations {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: JetBrains.Annotations.PublicAPIAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [MeansImplicitUseAttribute] Offset: EEFE64
  class PublicAPIAttribute : public System::Attribute {
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
    // private System.String <Comment>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::StringW Comment;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Creating conversion operator: operator ::StringW
    constexpr operator ::StringW() const noexcept {
      return Comment;
    }
    // Get instance field reference: private System.String <Comment>k__BackingField
    ::StringW& dyn_$Comment$k__BackingField();
    // public System.String get_Comment()
    // Offset: 0x26BA2F0
    ::StringW get_Comment();
    // private System.Void set_Comment(System.String value)
    // Offset: 0x26BA2F8
    void set_Comment(::StringW value);
    // public System.Void .ctor(System.String comment)
    // Offset: 0x26BA2C4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PublicAPIAttribute* New_ctor(::StringW comment) {
      static auto ___internal__logger = ::Logger::get().WithContext("JetBrains::Annotations::PublicAPIAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PublicAPIAttribute*, creationType>(comment)));
    }
    // public System.Void .ctor()
    // Offset: 0x26BA2BC
    // Implemented from: System.Attribute
    // Base method: System.Void Attribute::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PublicAPIAttribute* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("JetBrains::Annotations::PublicAPIAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PublicAPIAttribute*, creationType>()));
    }
  }; // JetBrains.Annotations.PublicAPIAttribute
  #pragma pack(pop)
  static check_size<sizeof(PublicAPIAttribute), 16 + sizeof(::StringW)> __JetBrains_Annotations_PublicAPIAttributeSizeCheck;
  static_assert(sizeof(PublicAPIAttribute) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: JetBrains::Annotations::PublicAPIAttribute::get_Comment
// Il2CppName: get_Comment
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (JetBrains::Annotations::PublicAPIAttribute::*)()>(&JetBrains::Annotations::PublicAPIAttribute::get_Comment)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(JetBrains::Annotations::PublicAPIAttribute*), "get_Comment", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: JetBrains::Annotations::PublicAPIAttribute::set_Comment
// Il2CppName: set_Comment
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (JetBrains::Annotations::PublicAPIAttribute::*)(::StringW)>(&JetBrains::Annotations::PublicAPIAttribute::set_Comment)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(JetBrains::Annotations::PublicAPIAttribute*), "set_Comment", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: JetBrains::Annotations::PublicAPIAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: JetBrains::Annotations::PublicAPIAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
