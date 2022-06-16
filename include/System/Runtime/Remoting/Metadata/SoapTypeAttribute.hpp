// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Runtime.Remoting.Metadata.SoapAttribute
#include "System/Runtime/Remoting/Metadata/SoapAttribute.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: System.Runtime.Remoting.Metadata
namespace System::Runtime::Remoting::Metadata {
  // Forward declaring type: SoapTypeAttribute
  class SoapTypeAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Runtime::Remoting::Metadata::SoapTypeAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Metadata::SoapTypeAttribute*, "System.Runtime.Remoting.Metadata", "SoapTypeAttribute");
// Type namespace: System.Runtime.Remoting.Metadata
namespace System::Runtime::Remoting::Metadata {
  // Size: 0x52
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Remoting.Metadata.SoapTypeAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: 1032B68
  // [ComVisibleAttribute] Offset: 1032B68
  class SoapTypeAttribute : public ::System::Runtime::Remoting::Metadata::SoapAttribute {
    public:
    public:
    // private System.Boolean _useAttribute
    // Size: 0x1
    // Offset: 0x28
    bool useAttribute;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: useAttribute and: xmlElementName
    char __padding0[0x7] = {};
    // private System.String _xmlElementName
    // Size: 0x8
    // Offset: 0x30
    ::StringW xmlElementName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String _xmlNamespace
    // Size: 0x8
    // Offset: 0x38
    ::StringW xmlNamespace;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String _xmlTypeName
    // Size: 0x8
    // Offset: 0x40
    ::StringW xmlTypeName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String _xmlTypeNamespace
    // Size: 0x8
    // Offset: 0x48
    ::StringW xmlTypeNamespace;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Boolean _isType
    // Size: 0x1
    // Offset: 0x50
    bool isType;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _isElement
    // Size: 0x1
    // Offset: 0x51
    bool isElement;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: private System.Boolean _useAttribute
    [[deprecated("Use field access instead!")]] bool& dyn__useAttribute();
    // Get instance field reference: private System.String _xmlElementName
    [[deprecated("Use field access instead!")]] ::StringW& dyn__xmlElementName();
    // Get instance field reference: private System.String _xmlNamespace
    [[deprecated("Use field access instead!")]] ::StringW& dyn__xmlNamespace();
    // Get instance field reference: private System.String _xmlTypeName
    [[deprecated("Use field access instead!")]] ::StringW& dyn__xmlTypeName();
    // Get instance field reference: private System.String _xmlTypeNamespace
    [[deprecated("Use field access instead!")]] ::StringW& dyn__xmlTypeNamespace();
    // Get instance field reference: private System.Boolean _isType
    [[deprecated("Use field access instead!")]] bool& dyn__isType();
    // Get instance field reference: private System.Boolean _isElement
    [[deprecated("Use field access instead!")]] bool& dyn__isElement();
    // public System.String get_XmlElementName()
    // Offset: 0x1C80794
    ::StringW get_XmlElementName();
    // public System.String get_XmlTypeName()
    // Offset: 0x1C807A4
    ::StringW get_XmlTypeName();
    // public System.String get_XmlTypeNamespace()
    // Offset: 0x1C807AC
    ::StringW get_XmlTypeNamespace();
    // System.Boolean get_IsInteropXmlElement()
    // Offset: 0x1C807B4
    bool get_IsInteropXmlElement();
    // System.Boolean get_IsInteropXmlType()
    // Offset: 0x1C807BC
    bool get_IsInteropXmlType();
    // public override System.Boolean get_UseAttribute()
    // Offset: 0x1C8078C
    // Implemented from: System.Runtime.Remoting.Metadata.SoapAttribute
    // Base method: System.Boolean SoapAttribute::get_UseAttribute()
    bool get_UseAttribute();
    // public override System.String get_XmlNamespace()
    // Offset: 0x1C8079C
    // Implemented from: System.Runtime.Remoting.Metadata.SoapAttribute
    // Base method: System.String SoapAttribute::get_XmlNamespace()
    ::StringW get_XmlNamespace();
    // public System.Void .ctor()
    // Offset: 0x1C707F0
    // Implemented from: System.Runtime.Remoting.Metadata.SoapAttribute
    // Base method: System.Void SoapAttribute::.ctor()
    // Base method: System.Void Attribute::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SoapTypeAttribute* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Runtime::Remoting::Metadata::SoapTypeAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SoapTypeAttribute*, creationType>()));
    }
    // override System.Void SetReflectionObject(System.Object reflectionObject)
    // Offset: 0x1C807C4
    // Implemented from: System.Runtime.Remoting.Metadata.SoapAttribute
    // Base method: System.Void SoapAttribute::SetReflectionObject(System.Object reflectionObject)
    void SetReflectionObject(::Il2CppObject* reflectionObject);
  }; // System.Runtime.Remoting.Metadata.SoapTypeAttribute
  #pragma pack(pop)
  static check_size<sizeof(SoapTypeAttribute), 81 + sizeof(bool)> __System_Runtime_Remoting_Metadata_SoapTypeAttributeSizeCheck;
  static_assert(sizeof(SoapTypeAttribute) == 0x52);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::Remoting::Metadata::SoapTypeAttribute::get_XmlElementName
// Il2CppName: get_XmlElementName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Runtime::Remoting::Metadata::SoapTypeAttribute::*)()>(&System::Runtime::Remoting::Metadata::SoapTypeAttribute::get_XmlElementName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Metadata::SoapTypeAttribute*), "get_XmlElementName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Metadata::SoapTypeAttribute::get_XmlTypeName
// Il2CppName: get_XmlTypeName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Runtime::Remoting::Metadata::SoapTypeAttribute::*)()>(&System::Runtime::Remoting::Metadata::SoapTypeAttribute::get_XmlTypeName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Metadata::SoapTypeAttribute*), "get_XmlTypeName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Metadata::SoapTypeAttribute::get_XmlTypeNamespace
// Il2CppName: get_XmlTypeNamespace
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Runtime::Remoting::Metadata::SoapTypeAttribute::*)()>(&System::Runtime::Remoting::Metadata::SoapTypeAttribute::get_XmlTypeNamespace)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Metadata::SoapTypeAttribute*), "get_XmlTypeNamespace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Metadata::SoapTypeAttribute::get_IsInteropXmlElement
// Il2CppName: get_IsInteropXmlElement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Runtime::Remoting::Metadata::SoapTypeAttribute::*)()>(&System::Runtime::Remoting::Metadata::SoapTypeAttribute::get_IsInteropXmlElement)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Metadata::SoapTypeAttribute*), "get_IsInteropXmlElement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Metadata::SoapTypeAttribute::get_IsInteropXmlType
// Il2CppName: get_IsInteropXmlType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Runtime::Remoting::Metadata::SoapTypeAttribute::*)()>(&System::Runtime::Remoting::Metadata::SoapTypeAttribute::get_IsInteropXmlType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Metadata::SoapTypeAttribute*), "get_IsInteropXmlType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Metadata::SoapTypeAttribute::get_UseAttribute
// Il2CppName: get_UseAttribute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Runtime::Remoting::Metadata::SoapTypeAttribute::*)()>(&System::Runtime::Remoting::Metadata::SoapTypeAttribute::get_UseAttribute)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Metadata::SoapTypeAttribute*), "get_UseAttribute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Metadata::SoapTypeAttribute::get_XmlNamespace
// Il2CppName: get_XmlNamespace
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Runtime::Remoting::Metadata::SoapTypeAttribute::*)()>(&System::Runtime::Remoting::Metadata::SoapTypeAttribute::get_XmlNamespace)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Metadata::SoapTypeAttribute*), "get_XmlNamespace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Metadata::SoapTypeAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Runtime::Remoting::Metadata::SoapTypeAttribute::SetReflectionObject
// Il2CppName: SetReflectionObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::Metadata::SoapTypeAttribute::*)(::Il2CppObject*)>(&System::Runtime::Remoting::Metadata::SoapTypeAttribute::SetReflectionObject)> {
  static const MethodInfo* get() {
    static auto* reflectionObject = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Metadata::SoapTypeAttribute*), "SetReflectionObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{reflectionObject});
  }
};
