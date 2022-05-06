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
// Type namespace: System.Xml.Serialization
namespace System::Xml::Serialization {
  // Forward declaring type: XmlTypeConvertorAttribute
  class XmlTypeConvertorAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::Serialization::XmlTypeConvertorAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Serialization::XmlTypeConvertorAttribute*, "System.Xml.Serialization", "XmlTypeConvertorAttribute");
// Type namespace: System.Xml.Serialization
namespace System::Xml::Serialization {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.Serialization.XmlTypeConvertorAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: 103AF48
  class XmlTypeConvertorAttribute : public ::System::Attribute {
    public:
    public:
    // private System.String <Method>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::StringW Method;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Creating conversion operator: operator ::StringW
    constexpr operator ::StringW() const noexcept {
      return Method;
    }
    // Get instance field reference: private System.String <Method>k__BackingField
    [[deprecated("Use field access instead!")]] ::StringW& dyn_$Method$k__BackingField();
    // private System.Void set_Method(System.String value)
    // Offset: 0x20678CC
    void set_Method(::StringW value);
    // public System.Void .ctor(System.String method)
    // Offset: 0x20678D4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XmlTypeConvertorAttribute* New_ctor(::StringW method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Serialization::XmlTypeConvertorAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XmlTypeConvertorAttribute*, creationType>(method)));
    }
  }; // System.Xml.Serialization.XmlTypeConvertorAttribute
  #pragma pack(pop)
  static check_size<sizeof(XmlTypeConvertorAttribute), 16 + sizeof(::StringW)> __System_Xml_Serialization_XmlTypeConvertorAttributeSizeCheck;
  static_assert(sizeof(XmlTypeConvertorAttribute) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::Serialization::XmlTypeConvertorAttribute::set_Method
// Il2CppName: set_Method
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Serialization::XmlTypeConvertorAttribute::*)(::StringW)>(&System::Xml::Serialization::XmlTypeConvertorAttribute::set_Method)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Serialization::XmlTypeConvertorAttribute*), "set_Method", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::Serialization::XmlTypeConvertorAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
