// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: MS.Internal.Xml.Cache.XPathNode
#include "MS/Internal/Xml/Cache/XPathNode.hpp"
// Including type: MS.Internal.Xml.Cache.XPathNodeRef
#include "MS/Internal/Xml/Cache/XPathNodeRef.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Xml
namespace System::Xml {
  // Forward declaring type: XmlNameTable
  class XmlNameTable;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Completed forward declares
// Type namespace: System.Xml.XPath
namespace System::Xml::XPath {
  // Forward declaring type: XPathDocument
  class XPathDocument;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::XPath::XPathDocument);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XPath::XPathDocument*, "System.Xml.XPath", "XPathDocument");
// Type namespace: System.Xml.XPath
namespace System::Xml::XPath {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.XPath.XPathDocument
  // [TokenAttribute] Offset: FFFFFFFF
  class XPathDocument : public ::Il2CppObject {
    public:
    public:
    // private MS.Internal.Xml.Cache.XPathNode[] pageXmlNmsp
    // Size: 0x8
    // Offset: 0x10
    ::ArrayW<::MS::Internal::Xml::Cache::XPathNode> pageXmlNmsp;
    // Field size check
    static_assert(sizeof(::ArrayW<::MS::Internal::Xml::Cache::XPathNode>) == 0x8);
    // private System.Int32 idxXmlNmsp
    // Size: 0x4
    // Offset: 0x18
    int idxXmlNmsp;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: idxXmlNmsp and: nameTable
    char __padding1[0x4] = {};
    // private System.Xml.XmlNameTable nameTable
    // Size: 0x8
    // Offset: 0x20
    ::System::Xml::XmlNameTable* nameTable;
    // Field size check
    static_assert(sizeof(::System::Xml::XmlNameTable*) == 0x8);
    // private System.Collections.Generic.Dictionary`2<MS.Internal.Xml.Cache.XPathNodeRef,MS.Internal.Xml.Cache.XPathNodeRef> mapNmsp
    // Size: 0x8
    // Offset: 0x28
    ::System::Collections::Generic::Dictionary_2<::MS::Internal::Xml::Cache::XPathNodeRef, ::MS::Internal::Xml::Cache::XPathNodeRef>* mapNmsp;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Dictionary_2<::MS::Internal::Xml::Cache::XPathNodeRef, ::MS::Internal::Xml::Cache::XPathNodeRef>*) == 0x8);
    public:
    // Get instance field reference: private MS.Internal.Xml.Cache.XPathNode[] pageXmlNmsp
    [[deprecated("Use field access instead!")]] ::ArrayW<::MS::Internal::Xml::Cache::XPathNode>& dyn_pageXmlNmsp();
    // Get instance field reference: private System.Int32 idxXmlNmsp
    [[deprecated("Use field access instead!")]] int& dyn_idxXmlNmsp();
    // Get instance field reference: private System.Xml.XmlNameTable nameTable
    [[deprecated("Use field access instead!")]] ::System::Xml::XmlNameTable*& dyn_nameTable();
    // Get instance field reference: private System.Collections.Generic.Dictionary`2<MS.Internal.Xml.Cache.XPathNodeRef,MS.Internal.Xml.Cache.XPathNodeRef> mapNmsp
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Dictionary_2<::MS::Internal::Xml::Cache::XPathNodeRef, ::MS::Internal::Xml::Cache::XPathNodeRef>*& dyn_mapNmsp();
    // System.Xml.XmlNameTable get_NameTable()
    // Offset: 0x1C552FC
    ::System::Xml::XmlNameTable* get_NameTable();
    // System.Int32 GetXmlNamespaceNode(out MS.Internal.Xml.Cache.XPathNode[] pageXmlNmsp)
    // Offset: 0x1C55304
    int GetXmlNamespaceNode(ByRef<::ArrayW<::MS::Internal::Xml::Cache::XPathNode>> pageXmlNmsp);
    // System.Int32 LookupNamespaces(MS.Internal.Xml.Cache.XPathNode[] pageElem, System.Int32 idxElem, out MS.Internal.Xml.Cache.XPathNode[] pageNmsp)
    // Offset: 0x1C55314
    int LookupNamespaces(::ArrayW<::MS::Internal::Xml::Cache::XPathNode> pageElem, int idxElem, ByRef<::ArrayW<::MS::Internal::Xml::Cache::XPathNode>> pageNmsp);
  }; // System.Xml.XPath.XPathDocument
  #pragma pack(pop)
  static check_size<sizeof(XPathDocument), 40 + sizeof(::System::Collections::Generic::Dictionary_2<::MS::Internal::Xml::Cache::XPathNodeRef, ::MS::Internal::Xml::Cache::XPathNodeRef>*)> __System_Xml_XPath_XPathDocumentSizeCheck;
  static_assert(sizeof(XPathDocument) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::XPath::XPathDocument::get_NameTable
// Il2CppName: get_NameTable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlNameTable* (System::Xml::XPath::XPathDocument::*)()>(&System::Xml::XPath::XPathDocument::get_NameTable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XPath::XPathDocument*), "get_NameTable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XPath::XPathDocument::GetXmlNamespaceNode
// Il2CppName: GetXmlNamespaceNode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Xml::XPath::XPathDocument::*)(ByRef<::ArrayW<::MS::Internal::Xml::Cache::XPathNode>>)>(&System::Xml::XPath::XPathDocument::GetXmlNamespaceNode)> {
  static const MethodInfo* get() {
    static auto* pageXmlNmsp = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("MS.Internal.Xml.Cache", "XPathNode"), 1)->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XPath::XPathDocument*), "GetXmlNamespaceNode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pageXmlNmsp});
  }
};
// Writing MetadataGetter for method: System::Xml::XPath::XPathDocument::LookupNamespaces
// Il2CppName: LookupNamespaces
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Xml::XPath::XPathDocument::*)(::ArrayW<::MS::Internal::Xml::Cache::XPathNode>, int, ByRef<::ArrayW<::MS::Internal::Xml::Cache::XPathNode>>)>(&System::Xml::XPath::XPathDocument::LookupNamespaces)> {
  static const MethodInfo* get() {
    static auto* pageElem = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("MS.Internal.Xml.Cache", "XPathNode"), 1)->byval_arg;
    static auto* idxElem = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* pageNmsp = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("MS.Internal.Xml.Cache", "XPathNode"), 1)->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XPath::XPathDocument*), "LookupNamespaces", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pageElem, idxElem, pageNmsp});
  }
};
