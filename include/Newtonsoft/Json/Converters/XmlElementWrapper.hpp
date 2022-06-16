// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Newtonsoft.Json.Converters.XmlNodeWrapper
#include "Newtonsoft/Json/Converters/XmlNodeWrapper.hpp"
// Including type: Newtonsoft.Json.Converters.IXmlElement
#include "Newtonsoft/Json/Converters/IXmlElement.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Xml
namespace System::Xml {
  // Forward declaring type: XmlElement
  class XmlElement;
}
// Forward declaring namespace: Newtonsoft::Json::Converters
namespace Newtonsoft::Json::Converters {
  // Skipping declaration: IXmlNode because it is already included!
}
// Completed forward declares
// Type namespace: Newtonsoft.Json.Converters
namespace Newtonsoft::Json::Converters {
  // Forward declaring type: XmlElementWrapper
  class XmlElementWrapper;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Newtonsoft::Json::Converters::XmlElementWrapper);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Converters::XmlElementWrapper*, "Newtonsoft.Json.Converters", "XmlElementWrapper");
// Type namespace: Newtonsoft.Json.Converters
namespace Newtonsoft::Json::Converters {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: Newtonsoft.Json.Converters.XmlElementWrapper
  // [TokenAttribute] Offset: FFFFFFFF
  class XmlElementWrapper : public ::Newtonsoft::Json::Converters::XmlNodeWrapper/*, public ::Newtonsoft::Json::Converters::IXmlElement*/ {
    public:
    public:
    // private readonly System.Xml.XmlElement _element
    // Size: 0x8
    // Offset: 0x28
    ::System::Xml::XmlElement* element;
    // Field size check
    static_assert(sizeof(::System::Xml::XmlElement*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::Newtonsoft::Json::Converters::IXmlElement
    operator ::Newtonsoft::Json::Converters::IXmlElement() noexcept {
      return *reinterpret_cast<::Newtonsoft::Json::Converters::IXmlElement*>(this);
    }
    // Creating interface conversion operator: i_IXmlElement
    inline ::Newtonsoft::Json::Converters::IXmlElement* i_IXmlElement() noexcept {
      return reinterpret_cast<::Newtonsoft::Json::Converters::IXmlElement*>(this);
    }
    // Creating conversion operator: operator ::System::Xml::XmlElement*
    constexpr operator ::System::Xml::XmlElement*() const noexcept {
      return element;
    }
    // Get instance field reference: private readonly System.Xml.XmlElement _element
    [[deprecated("Use field access instead!")]] ::System::Xml::XmlElement*& dyn__element();
    // public System.Boolean get_IsEmpty()
    // Offset: 0x17B7BF0
    bool get_IsEmpty();
    // public System.Void .ctor(System.Xml.XmlElement element)
    // Offset: 0x17B77E4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XmlElementWrapper* New_ctor(::System::Xml::XmlElement* element) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::Converters::XmlElementWrapper::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XmlElementWrapper*, creationType>(element)));
    }
    // public System.Void SetAttributeNode(Newtonsoft.Json.Converters.IXmlNode attribute)
    // Offset: 0x17B7AE0
    void SetAttributeNode(::Newtonsoft::Json::Converters::IXmlNode* attribute);
    // public System.String GetPrefixOfNamespace(System.String namespaceUri)
    // Offset: 0x17B7BCC
    ::StringW GetPrefixOfNamespace(::StringW namespaceUri);
  }; // Newtonsoft.Json.Converters.XmlElementWrapper
  #pragma pack(pop)
  static check_size<sizeof(XmlElementWrapper), 40 + sizeof(::System::Xml::XmlElement*)> __Newtonsoft_Json_Converters_XmlElementWrapperSizeCheck;
  static_assert(sizeof(XmlElementWrapper) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Newtonsoft::Json::Converters::XmlElementWrapper::get_IsEmpty
// Il2CppName: get_IsEmpty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Newtonsoft::Json::Converters::XmlElementWrapper::*)()>(&Newtonsoft::Json::Converters::XmlElementWrapper::get_IsEmpty)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Converters::XmlElementWrapper*), "get_IsEmpty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Converters::XmlElementWrapper::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Newtonsoft::Json::Converters::XmlElementWrapper::SetAttributeNode
// Il2CppName: SetAttributeNode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Converters::XmlElementWrapper::*)(::Newtonsoft::Json::Converters::IXmlNode*)>(&Newtonsoft::Json::Converters::XmlElementWrapper::SetAttributeNode)> {
  static const MethodInfo* get() {
    static auto* attribute = &::il2cpp_utils::GetClassFromName("Newtonsoft.Json.Converters", "IXmlNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Converters::XmlElementWrapper*), "SetAttributeNode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{attribute});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Converters::XmlElementWrapper::GetPrefixOfNamespace
// Il2CppName: GetPrefixOfNamespace
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Newtonsoft::Json::Converters::XmlElementWrapper::*)(::StringW)>(&Newtonsoft::Json::Converters::XmlElementWrapper::GetPrefixOfNamespace)> {
  static const MethodInfo* get() {
    static auto* namespaceUri = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Converters::XmlElementWrapper*), "GetPrefixOfNamespace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{namespaceUri});
  }
};
