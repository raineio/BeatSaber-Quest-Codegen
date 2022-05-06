// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Newtonsoft.Json.Converters.XObjectWrapper
#include "Newtonsoft/Json/Converters/XObjectWrapper.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: Newtonsoft::Json::Converters
namespace Newtonsoft::Json::Converters {
  // Skipping declaration: IXmlNode because it is already included!
}
// Forward declaring namespace: System::Xml::Linq
namespace System::Xml::Linq {
  // Forward declaring type: XContainer
  class XContainer;
  // Forward declaring type: XObject
  class XObject;
}
// Completed forward declares
// Type namespace: Newtonsoft.Json.Converters
namespace Newtonsoft::Json::Converters {
  // Forward declaring type: XContainerWrapper
  class XContainerWrapper;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Newtonsoft::Json::Converters::XContainerWrapper);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Converters::XContainerWrapper*, "Newtonsoft.Json.Converters", "XContainerWrapper");
// Type namespace: Newtonsoft.Json.Converters
namespace Newtonsoft::Json::Converters {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Newtonsoft.Json.Converters.XContainerWrapper
  // [TokenAttribute] Offset: FFFFFFFF
  class XContainerWrapper : public ::Newtonsoft::Json::Converters::XObjectWrapper {
    public:
    public:
    // private System.Collections.Generic.List`1<Newtonsoft.Json.Converters.IXmlNode> _childNodes
    // Size: 0x8
    // Offset: 0x18
    ::System::Collections::Generic::List_1<::Newtonsoft::Json::Converters::IXmlNode*>* childNodes;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::Newtonsoft::Json::Converters::IXmlNode*>*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::Xml::Linq::XObject*
    constexpr operator ::System::Xml::Linq::XObject*() const noexcept = delete;
    // Get instance field reference: private System.Collections.Generic.List`1<Newtonsoft.Json.Converters.IXmlNode> _childNodes
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::Newtonsoft::Json::Converters::IXmlNode*>*& dyn__childNodes();
    // private System.Xml.Linq.XContainer get_Container()
    // Offset: 0x17B86B8
    ::System::Xml::Linq::XContainer* get_Container();
    // public System.Void .ctor(System.Xml.Linq.XContainer container)
    // Offset: 0x17B8738
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XContainerWrapper* New_ctor(::System::Xml::Linq::XContainer* container) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::Converters::XContainerWrapper::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XContainerWrapper*, creationType>(container)));
    }
    // static Newtonsoft.Json.Converters.IXmlNode WrapNode(System.Xml.Linq.XObject node)
    // Offset: 0x17B8190
    static ::Newtonsoft::Json::Converters::IXmlNode* WrapNode(::System::Xml::Linq::XObject* node);
    // public override System.Collections.Generic.List`1<Newtonsoft.Json.Converters.IXmlNode> get_ChildNodes()
    // Offset: 0x17B87B4
    // Implemented from: Newtonsoft.Json.Converters.XObjectWrapper
    // Base method: System.Collections.Generic.List`1<Newtonsoft.Json.Converters.IXmlNode> XObjectWrapper::get_ChildNodes()
    ::System::Collections::Generic::List_1<::Newtonsoft::Json::Converters::IXmlNode*>* get_ChildNodes();
    // public override Newtonsoft.Json.Converters.IXmlNode get_ParentNode()
    // Offset: 0x17B8A7C
    // Implemented from: Newtonsoft.Json.Converters.XObjectWrapper
    // Base method: Newtonsoft.Json.Converters.IXmlNode XObjectWrapper::get_ParentNode()
    ::Newtonsoft::Json::Converters::IXmlNode* get_ParentNode();
    // public override Newtonsoft.Json.Converters.IXmlNode AppendChild(Newtonsoft.Json.Converters.IXmlNode newChild)
    // Offset: 0x17B8C4C
    // Implemented from: Newtonsoft.Json.Converters.XObjectWrapper
    // Base method: Newtonsoft.Json.Converters.IXmlNode XObjectWrapper::AppendChild(Newtonsoft.Json.Converters.IXmlNode newChild)
    ::Newtonsoft::Json::Converters::IXmlNode* AppendChild(::Newtonsoft::Json::Converters::IXmlNode* newChild);
  }; // Newtonsoft.Json.Converters.XContainerWrapper
  #pragma pack(pop)
  static check_size<sizeof(XContainerWrapper), 24 + sizeof(::System::Collections::Generic::List_1<::Newtonsoft::Json::Converters::IXmlNode*>*)> __Newtonsoft_Json_Converters_XContainerWrapperSizeCheck;
  static_assert(sizeof(XContainerWrapper) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Newtonsoft::Json::Converters::XContainerWrapper::get_Container
// Il2CppName: get_Container
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Linq::XContainer* (Newtonsoft::Json::Converters::XContainerWrapper::*)()>(&Newtonsoft::Json::Converters::XContainerWrapper::get_Container)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Converters::XContainerWrapper*), "get_Container", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Converters::XContainerWrapper::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Newtonsoft::Json::Converters::XContainerWrapper::WrapNode
// Il2CppName: WrapNode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Converters::IXmlNode* (*)(::System::Xml::Linq::XObject*)>(&Newtonsoft::Json::Converters::XContainerWrapper::WrapNode)> {
  static const MethodInfo* get() {
    static auto* node = &::il2cpp_utils::GetClassFromName("System.Xml.Linq", "XObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Converters::XContainerWrapper*), "WrapNode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{node});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Converters::XContainerWrapper::get_ChildNodes
// Il2CppName: get_ChildNodes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::Newtonsoft::Json::Converters::IXmlNode*>* (Newtonsoft::Json::Converters::XContainerWrapper::*)()>(&Newtonsoft::Json::Converters::XContainerWrapper::get_ChildNodes)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Converters::XContainerWrapper*), "get_ChildNodes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Converters::XContainerWrapper::get_ParentNode
// Il2CppName: get_ParentNode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Converters::IXmlNode* (Newtonsoft::Json::Converters::XContainerWrapper::*)()>(&Newtonsoft::Json::Converters::XContainerWrapper::get_ParentNode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Converters::XContainerWrapper*), "get_ParentNode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Converters::XContainerWrapper::AppendChild
// Il2CppName: AppendChild
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Converters::IXmlNode* (Newtonsoft::Json::Converters::XContainerWrapper::*)(::Newtonsoft::Json::Converters::IXmlNode*)>(&Newtonsoft::Json::Converters::XContainerWrapper::AppendChild)> {
  static const MethodInfo* get() {
    static auto* newChild = &::il2cpp_utils::GetClassFromName("Newtonsoft.Json.Converters", "IXmlNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Converters::XContainerWrapper*), "AppendChild", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{newChild});
  }
};
