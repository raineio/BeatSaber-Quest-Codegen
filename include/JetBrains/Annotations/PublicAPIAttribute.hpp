// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Attribute
#include "System/Attribute.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: JetBrains.Annotations
namespace JetBrains::Annotations {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: JetBrains.Annotations.PublicAPIAttribute
  // [MeansImplicitUseAttribute] Offset: DCAAE0
  class PublicAPIAttribute : public System::Attribute {
    public:
    // [CompilerGeneratedAttribute] Offset: 0xDCB2D8
    // private System.String <Comment>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* Comment;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: PublicAPIAttribute
    PublicAPIAttribute(::Il2CppString* Comment_ = {}) noexcept : Comment{Comment_} {}
    // Creating conversion operator: operator ::Il2CppString*
    constexpr operator ::Il2CppString*() const noexcept {
      return Comment;
    }
    // public System.Void .ctor(System.String comment)
    // Offset: 0x23DB6A0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PublicAPIAttribute* New_ctor(::Il2CppString* comment) {
      static auto ___internal__logger = ::Logger::get().WithContext("JetBrains::Annotations::PublicAPIAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PublicAPIAttribute*, creationType>(comment)));
    }
    // public System.String get_Comment()
    // Offset: 0x23DB6CC
    ::Il2CppString* get_Comment();
    // private System.Void set_Comment(System.String value)
    // Offset: 0x23DB6D4
    void set_Comment(::Il2CppString* value);
    // public System.Void .ctor()
    // Offset: 0x23DB698
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
  static check_size<sizeof(PublicAPIAttribute), 16 + sizeof(::Il2CppString*)> __JetBrains_Annotations_PublicAPIAttributeSizeCheck;
  static_assert(sizeof(PublicAPIAttribute) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(JetBrains::Annotations::PublicAPIAttribute*, "JetBrains.Annotations", "PublicAPIAttribute");
// Writing MetadataGetter for method: JetBrains::Annotations::PublicAPIAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: JetBrains::Annotations::PublicAPIAttribute::get_Comment
// Il2CppName: get_Comment
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (JetBrains::Annotations::PublicAPIAttribute::*)()>(&JetBrains::Annotations::PublicAPIAttribute::get_Comment)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(JetBrains::Annotations::PublicAPIAttribute*), "get_Comment", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: JetBrains::Annotations::PublicAPIAttribute::set_Comment
// Il2CppName: set_Comment
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (JetBrains::Annotations::PublicAPIAttribute::*)(::Il2CppString*)>(&JetBrains::Annotations::PublicAPIAttribute::set_Comment)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(JetBrains::Annotations::PublicAPIAttribute*), "set_Comment", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: JetBrains::Annotations::PublicAPIAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
