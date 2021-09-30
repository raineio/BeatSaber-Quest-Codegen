// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
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
  // Autogenerated type: JetBrains.Annotations.AspRequiredAttributeAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: EADD24
  class AspRequiredAttributeAttribute : public System::Attribute {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    private:
    #endif
    // private System.String <Attribute>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* Attribute;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    public:
    // Creating conversion operator: operator ::Il2CppString*
    constexpr operator ::Il2CppString*() const noexcept {
      return Attribute;
    }
    // Get instance field reference: private System.String <Attribute>k__BackingField
    ::Il2CppString*& dyn_$Attribute$k__BackingField();
    // public System.String get_Attribute()
    // Offset: 0x2610354
    ::Il2CppString* get_Attribute();
    // private System.Void set_Attribute(System.String value)
    // Offset: 0x261035C
    void set_Attribute(::Il2CppString* value);
    // public System.Void .ctor(System.String attribute)
    // Offset: 0x2610328
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AspRequiredAttributeAttribute* New_ctor(::Il2CppString* attribute) {
      static auto ___internal__logger = ::Logger::get().WithContext("JetBrains::Annotations::AspRequiredAttributeAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AspRequiredAttributeAttribute*, creationType>(attribute)));
    }
  }; // JetBrains.Annotations.AspRequiredAttributeAttribute
  #pragma pack(pop)
  static check_size<sizeof(AspRequiredAttributeAttribute), 16 + sizeof(::Il2CppString*)> __JetBrains_Annotations_AspRequiredAttributeAttributeSizeCheck;
  static_assert(sizeof(AspRequiredAttributeAttribute) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(JetBrains::Annotations::AspRequiredAttributeAttribute*, "JetBrains.Annotations", "AspRequiredAttributeAttribute");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: JetBrains::Annotations::AspRequiredAttributeAttribute::get_Attribute
// Il2CppName: get_Attribute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (JetBrains::Annotations::AspRequiredAttributeAttribute::*)()>(&JetBrains::Annotations::AspRequiredAttributeAttribute::get_Attribute)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(JetBrains::Annotations::AspRequiredAttributeAttribute*), "get_Attribute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: JetBrains::Annotations::AspRequiredAttributeAttribute::set_Attribute
// Il2CppName: set_Attribute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (JetBrains::Annotations::AspRequiredAttributeAttribute::*)(::Il2CppString*)>(&JetBrains::Annotations::AspRequiredAttributeAttribute::set_Attribute)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(JetBrains::Annotations::AspRequiredAttributeAttribute*), "set_Attribute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: JetBrains::Annotations::AspRequiredAttributeAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
