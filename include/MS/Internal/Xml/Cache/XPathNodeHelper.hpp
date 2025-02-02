// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: MS.Internal.Xml.Cache.XPathNode
#include "MS/Internal/Xml/Cache/XPathNode.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Type namespace: MS.Internal.Xml.Cache
namespace MS::Internal::Xml::Cache {
  // Forward declaring type: XPathNodeHelper
  class XPathNodeHelper;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::MS::Internal::Xml::Cache::XPathNodeHelper);
DEFINE_IL2CPP_ARG_TYPE(::MS::Internal::Xml::Cache::XPathNodeHelper*, "MS.Internal.Xml.Cache", "XPathNodeHelper");
// Type namespace: MS.Internal.Xml.Cache
namespace MS::Internal::Xml::Cache {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: MS.Internal.Xml.Cache.XPathNodeHelper
  // [TokenAttribute] Offset: FFFFFFFF
  class XPathNodeHelper : public ::Il2CppObject {
    public:
    // static public System.Int32 GetLocalNamespaces(MS.Internal.Xml.Cache.XPathNode[] pageElem, System.Int32 idxElem, out MS.Internal.Xml.Cache.XPathNode[] pageNmsp)
    // Offset: 0x1AFA320
    static int GetLocalNamespaces(::ArrayW<::MS::Internal::Xml::Cache::XPathNode> pageElem, int idxElem, ByRef<::ArrayW<::MS::Internal::Xml::Cache::XPathNode>> pageNmsp);
    // static public System.Int32 GetInScopeNamespaces(MS.Internal.Xml.Cache.XPathNode[] pageElem, System.Int32 idxElem, out MS.Internal.Xml.Cache.XPathNode[] pageNmsp)
    // Offset: 0x1AFA390
    static int GetInScopeNamespaces(::ArrayW<::MS::Internal::Xml::Cache::XPathNode> pageElem, int idxElem, ByRef<::ArrayW<::MS::Internal::Xml::Cache::XPathNode>> pageNmsp);
    // static public System.Boolean GetParent(ref MS.Internal.Xml.Cache.XPathNode[] pageNode, ref System.Int32 idxNode)
    // Offset: 0x1AFA66C
    static bool GetParent(ByRef<::ArrayW<::MS::Internal::Xml::Cache::XPathNode>> pageNode, ByRef<int> idxNode);
    // static public System.Int32 GetLocation(MS.Internal.Xml.Cache.XPathNode[] pageNode, System.Int32 idxNode)
    // Offset: 0x1AFA864
    static int GetLocation(::ArrayW<::MS::Internal::Xml::Cache::XPathNode> pageNode, int idxNode);
    // static public System.Boolean GetTextFollowing(ref MS.Internal.Xml.Cache.XPathNode[] pageCurrent, ref System.Int32 idxCurrent, MS.Internal.Xml.Cache.XPathNode[] pageEnd, System.Int32 idxEnd)
    // Offset: 0x1AF9E48
    static bool GetTextFollowing(ByRef<::ArrayW<::MS::Internal::Xml::Cache::XPathNode>> pageCurrent, ByRef<int> idxCurrent, ::ArrayW<::MS::Internal::Xml::Cache::XPathNode> pageEnd, int idxEnd);
    // static public System.Boolean GetNonDescendant(ref MS.Internal.Xml.Cache.XPathNode[] pageNode, ref System.Int32 idxNode)
    // Offset: 0x1AF9DAC
    static bool GetNonDescendant(ByRef<::ArrayW<::MS::Internal::Xml::Cache::XPathNode>> pageNode, ByRef<int> idxNode);
  }; // MS.Internal.Xml.Cache.XPathNodeHelper
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: MS::Internal::Xml::Cache::XPathNodeHelper::GetLocalNamespaces
// Il2CppName: GetLocalNamespaces
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::ArrayW<::MS::Internal::Xml::Cache::XPathNode>, int, ByRef<::ArrayW<::MS::Internal::Xml::Cache::XPathNode>>)>(&MS::Internal::Xml::Cache::XPathNodeHelper::GetLocalNamespaces)> {
  static const MethodInfo* get() {
    static auto* pageElem = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("MS.Internal.Xml.Cache", "XPathNode"), 1)->byval_arg;
    static auto* idxElem = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* pageNmsp = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("MS.Internal.Xml.Cache", "XPathNode"), 1)->this_arg;
    return ::il2cpp_utils::FindMethod(classof(MS::Internal::Xml::Cache::XPathNodeHelper*), "GetLocalNamespaces", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pageElem, idxElem, pageNmsp});
  }
};
// Writing MetadataGetter for method: MS::Internal::Xml::Cache::XPathNodeHelper::GetInScopeNamespaces
// Il2CppName: GetInScopeNamespaces
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::ArrayW<::MS::Internal::Xml::Cache::XPathNode>, int, ByRef<::ArrayW<::MS::Internal::Xml::Cache::XPathNode>>)>(&MS::Internal::Xml::Cache::XPathNodeHelper::GetInScopeNamespaces)> {
  static const MethodInfo* get() {
    static auto* pageElem = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("MS.Internal.Xml.Cache", "XPathNode"), 1)->byval_arg;
    static auto* idxElem = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* pageNmsp = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("MS.Internal.Xml.Cache", "XPathNode"), 1)->this_arg;
    return ::il2cpp_utils::FindMethod(classof(MS::Internal::Xml::Cache::XPathNodeHelper*), "GetInScopeNamespaces", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pageElem, idxElem, pageNmsp});
  }
};
// Writing MetadataGetter for method: MS::Internal::Xml::Cache::XPathNodeHelper::GetParent
// Il2CppName: GetParent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<::ArrayW<::MS::Internal::Xml::Cache::XPathNode>>, ByRef<int>)>(&MS::Internal::Xml::Cache::XPathNodeHelper::GetParent)> {
  static const MethodInfo* get() {
    static auto* pageNode = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("MS.Internal.Xml.Cache", "XPathNode"), 1)->this_arg;
    static auto* idxNode = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(MS::Internal::Xml::Cache::XPathNodeHelper*), "GetParent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pageNode, idxNode});
  }
};
// Writing MetadataGetter for method: MS::Internal::Xml::Cache::XPathNodeHelper::GetLocation
// Il2CppName: GetLocation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::ArrayW<::MS::Internal::Xml::Cache::XPathNode>, int)>(&MS::Internal::Xml::Cache::XPathNodeHelper::GetLocation)> {
  static const MethodInfo* get() {
    static auto* pageNode = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("MS.Internal.Xml.Cache", "XPathNode"), 1)->byval_arg;
    static auto* idxNode = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MS::Internal::Xml::Cache::XPathNodeHelper*), "GetLocation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pageNode, idxNode});
  }
};
// Writing MetadataGetter for method: MS::Internal::Xml::Cache::XPathNodeHelper::GetTextFollowing
// Il2CppName: GetTextFollowing
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<::ArrayW<::MS::Internal::Xml::Cache::XPathNode>>, ByRef<int>, ::ArrayW<::MS::Internal::Xml::Cache::XPathNode>, int)>(&MS::Internal::Xml::Cache::XPathNodeHelper::GetTextFollowing)> {
  static const MethodInfo* get() {
    static auto* pageCurrent = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("MS.Internal.Xml.Cache", "XPathNode"), 1)->this_arg;
    static auto* idxCurrent = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* pageEnd = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("MS.Internal.Xml.Cache", "XPathNode"), 1)->byval_arg;
    static auto* idxEnd = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MS::Internal::Xml::Cache::XPathNodeHelper*), "GetTextFollowing", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pageCurrent, idxCurrent, pageEnd, idxEnd});
  }
};
// Writing MetadataGetter for method: MS::Internal::Xml::Cache::XPathNodeHelper::GetNonDescendant
// Il2CppName: GetNonDescendant
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<::ArrayW<::MS::Internal::Xml::Cache::XPathNode>>, ByRef<int>)>(&MS::Internal::Xml::Cache::XPathNodeHelper::GetNonDescendant)> {
  static const MethodInfo* get() {
    static auto* pageNode = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("MS.Internal.Xml.Cache", "XPathNode"), 1)->this_arg;
    static auto* idxNode = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(MS::Internal::Xml::Cache::XPathNodeHelper*), "GetNonDescendant", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pageNode, idxNode});
  }
};
