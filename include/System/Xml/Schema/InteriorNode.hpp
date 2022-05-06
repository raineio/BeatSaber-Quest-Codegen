// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Xml.Schema.SyntaxTreeNode
#include "System/Xml/Schema/SyntaxTreeNode.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Xml::Schema
namespace System::Xml::Schema {
  // Forward declaring type: SymbolsDictionary
  class SymbolsDictionary;
  // Forward declaring type: Positions
  class Positions;
}
// Completed forward declares
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Forward declaring type: InteriorNode
  class InteriorNode;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::Schema::InteriorNode);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::InteriorNode*, "System.Xml.Schema", "InteriorNode");
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.Schema.InteriorNode
  // [TokenAttribute] Offset: FFFFFFFF
  class InteriorNode : public ::System::Xml::Schema::SyntaxTreeNode {
    public:
    public:
    // private System.Xml.Schema.SyntaxTreeNode leftChild
    // Size: 0x8
    // Offset: 0x10
    ::System::Xml::Schema::SyntaxTreeNode* leftChild;
    // Field size check
    static_assert(sizeof(::System::Xml::Schema::SyntaxTreeNode*) == 0x8);
    // private System.Xml.Schema.SyntaxTreeNode rightChild
    // Size: 0x8
    // Offset: 0x18
    ::System::Xml::Schema::SyntaxTreeNode* rightChild;
    // Field size check
    static_assert(sizeof(::System::Xml::Schema::SyntaxTreeNode*) == 0x8);
    public:
    // Get instance field reference: private System.Xml.Schema.SyntaxTreeNode leftChild
    [[deprecated("Use field access instead!")]] ::System::Xml::Schema::SyntaxTreeNode*& dyn_leftChild();
    // Get instance field reference: private System.Xml.Schema.SyntaxTreeNode rightChild
    [[deprecated("Use field access instead!")]] ::System::Xml::Schema::SyntaxTreeNode*& dyn_rightChild();
    // public System.Xml.Schema.SyntaxTreeNode get_LeftChild()
    // Offset: 0x1C5DF38
    ::System::Xml::Schema::SyntaxTreeNode* get_LeftChild();
    // public System.Void set_LeftChild(System.Xml.Schema.SyntaxTreeNode value)
    // Offset: 0x1C5DF40
    void set_LeftChild(::System::Xml::Schema::SyntaxTreeNode* value);
    // public System.Xml.Schema.SyntaxTreeNode get_RightChild()
    // Offset: 0x1C5DF48
    ::System::Xml::Schema::SyntaxTreeNode* get_RightChild();
    // public System.Void set_RightChild(System.Xml.Schema.SyntaxTreeNode value)
    // Offset: 0x1C5DF50
    void set_RightChild(::System::Xml::Schema::SyntaxTreeNode* value);
    // protected System.Void ExpandTreeNoRecursive(System.Xml.Schema.InteriorNode parent, System.Xml.Schema.SymbolsDictionary symbols, System.Xml.Schema.Positions positions)
    // Offset: 0x1C5DF58
    void ExpandTreeNoRecursive(::System::Xml::Schema::InteriorNode* parent, ::System::Xml::Schema::SymbolsDictionary* symbols, ::System::Xml::Schema::Positions* positions);
    // protected System.Void .ctor()
    // Offset: 0x1C5E168
    // Implemented from: System.Xml.Schema.SyntaxTreeNode
    // Base method: System.Void SyntaxTreeNode::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InteriorNode* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Schema::InteriorNode::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InteriorNode*, creationType>()));
    }
    // public override System.Void ExpandTree(System.Xml.Schema.InteriorNode parent, System.Xml.Schema.SymbolsDictionary symbols, System.Xml.Schema.Positions positions)
    // Offset: 0x1C5E0F4
    // Implemented from: System.Xml.Schema.SyntaxTreeNode
    // Base method: System.Void SyntaxTreeNode::ExpandTree(System.Xml.Schema.InteriorNode parent, System.Xml.Schema.SymbolsDictionary symbols, System.Xml.Schema.Positions positions)
    void ExpandTree(::System::Xml::Schema::InteriorNode* parent, ::System::Xml::Schema::SymbolsDictionary* symbols, ::System::Xml::Schema::Positions* positions);
  }; // System.Xml.Schema.InteriorNode
  #pragma pack(pop)
  static check_size<sizeof(InteriorNode), 24 + sizeof(::System::Xml::Schema::SyntaxTreeNode*)> __System_Xml_Schema_InteriorNodeSizeCheck;
  static_assert(sizeof(InteriorNode) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::Schema::InteriorNode::get_LeftChild
// Il2CppName: get_LeftChild
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::SyntaxTreeNode* (System::Xml::Schema::InteriorNode::*)()>(&System::Xml::Schema::InteriorNode::get_LeftChild)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::InteriorNode*), "get_LeftChild", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::InteriorNode::set_LeftChild
// Il2CppName: set_LeftChild
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::InteriorNode::*)(::System::Xml::Schema::SyntaxTreeNode*)>(&System::Xml::Schema::InteriorNode::set_LeftChild)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "SyntaxTreeNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::InteriorNode*), "set_LeftChild", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::InteriorNode::get_RightChild
// Il2CppName: get_RightChild
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::SyntaxTreeNode* (System::Xml::Schema::InteriorNode::*)()>(&System::Xml::Schema::InteriorNode::get_RightChild)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::InteriorNode*), "get_RightChild", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::InteriorNode::set_RightChild
// Il2CppName: set_RightChild
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::InteriorNode::*)(::System::Xml::Schema::SyntaxTreeNode*)>(&System::Xml::Schema::InteriorNode::set_RightChild)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "SyntaxTreeNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::InteriorNode*), "set_RightChild", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::InteriorNode::ExpandTreeNoRecursive
// Il2CppName: ExpandTreeNoRecursive
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::InteriorNode::*)(::System::Xml::Schema::InteriorNode*, ::System::Xml::Schema::SymbolsDictionary*, ::System::Xml::Schema::Positions*)>(&System::Xml::Schema::InteriorNode::ExpandTreeNoRecursive)> {
  static const MethodInfo* get() {
    static auto* parent = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "InteriorNode")->byval_arg;
    static auto* symbols = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "SymbolsDictionary")->byval_arg;
    static auto* positions = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "Positions")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::InteriorNode*), "ExpandTreeNoRecursive", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{parent, symbols, positions});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::InteriorNode::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::Schema::InteriorNode::ExpandTree
// Il2CppName: ExpandTree
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::InteriorNode::*)(::System::Xml::Schema::InteriorNode*, ::System::Xml::Schema::SymbolsDictionary*, ::System::Xml::Schema::Positions*)>(&System::Xml::Schema::InteriorNode::ExpandTree)> {
  static const MethodInfo* get() {
    static auto* parent = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "InteriorNode")->byval_arg;
    static auto* symbols = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "SymbolsDictionary")->byval_arg;
    static auto* positions = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "Positions")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::InteriorNode*), "ExpandTree", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{parent, symbols, positions});
  }
};
