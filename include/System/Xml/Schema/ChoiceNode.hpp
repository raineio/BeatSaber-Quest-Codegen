// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Xml.Schema.InteriorNode
#include "System/Xml/Schema/InteriorNode.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Xml::Schema
namespace System::Xml::Schema {
  // Skipping declaration: SyntaxTreeNode because it is already included!
  // Forward declaring type: BitSet
  class BitSet;
  // Forward declaring type: SymbolsDictionary
  class SymbolsDictionary;
  // Forward declaring type: Positions
  class Positions;
}
// Completed forward declares
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Forward declaring type: ChoiceNode
  class ChoiceNode;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::Schema::ChoiceNode);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::ChoiceNode*, "System.Xml.Schema", "ChoiceNode");
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.Schema.ChoiceNode
  // [TokenAttribute] Offset: FFFFFFFF
  class ChoiceNode : public ::System::Xml::Schema::InteriorNode {
    public:
    // static private System.Void ConstructChildPos(System.Xml.Schema.SyntaxTreeNode child, System.Xml.Schema.BitSet firstpos, System.Xml.Schema.BitSet lastpos, System.Xml.Schema.BitSet[] followpos)
    // Offset: 0x1ACB848
    static void ConstructChildPos(::System::Xml::Schema::SyntaxTreeNode* child, ::System::Xml::Schema::BitSet* firstpos, ::System::Xml::Schema::BitSet* lastpos, ::ArrayW<::System::Xml::Schema::BitSet*> followpos);
    // public override System.Boolean get_IsNullable()
    // Offset: 0x1ACBA30
    // Implemented from: System.Xml.Schema.SyntaxTreeNode
    // Base method: System.Boolean SyntaxTreeNode::get_IsNullable()
    bool get_IsNullable();
    // public System.Void .ctor()
    // Offset: 0x1ACBAD0
    // Implemented from: System.Xml.Schema.InteriorNode
    // Base method: System.Void InteriorNode::.ctor()
    // Base method: System.Void SyntaxTreeNode::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ChoiceNode* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Schema::ChoiceNode::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ChoiceNode*, creationType>()));
    }
    // public override System.Void ConstructPos(System.Xml.Schema.BitSet firstpos, System.Xml.Schema.BitSet lastpos, System.Xml.Schema.BitSet[] followpos)
    // Offset: 0x1ACB924
    // Implemented from: System.Xml.Schema.SyntaxTreeNode
    // Base method: System.Void SyntaxTreeNode::ConstructPos(System.Xml.Schema.BitSet firstpos, System.Xml.Schema.BitSet lastpos, System.Xml.Schema.BitSet[] followpos)
    void ConstructPos(::System::Xml::Schema::BitSet* firstpos, ::System::Xml::Schema::BitSet* lastpos, ::ArrayW<::System::Xml::Schema::BitSet*> followpos);
    // public override System.Void ExpandTree(System.Xml.Schema.InteriorNode parent, System.Xml.Schema.SymbolsDictionary symbols, System.Xml.Schema.Positions positions)
    // Offset: 0x1ACBAC8
    // Implemented from: System.Xml.Schema.InteriorNode
    // Base method: System.Void InteriorNode::ExpandTree(System.Xml.Schema.InteriorNode parent, System.Xml.Schema.SymbolsDictionary symbols, System.Xml.Schema.Positions positions)
    void ExpandTree(::System::Xml::Schema::InteriorNode* parent, ::System::Xml::Schema::SymbolsDictionary* symbols, ::System::Xml::Schema::Positions* positions);
  }; // System.Xml.Schema.ChoiceNode
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::Schema::ChoiceNode::ConstructChildPos
// Il2CppName: ConstructChildPos
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Xml::Schema::SyntaxTreeNode*, ::System::Xml::Schema::BitSet*, ::System::Xml::Schema::BitSet*, ::ArrayW<::System::Xml::Schema::BitSet*>)>(&System::Xml::Schema::ChoiceNode::ConstructChildPos)> {
  static const MethodInfo* get() {
    static auto* child = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "SyntaxTreeNode")->byval_arg;
    static auto* firstpos = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "BitSet")->byval_arg;
    static auto* lastpos = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "BitSet")->byval_arg;
    static auto* followpos = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System.Xml.Schema", "BitSet"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::ChoiceNode*), "ConstructChildPos", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{child, firstpos, lastpos, followpos});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::ChoiceNode::get_IsNullable
// Il2CppName: get_IsNullable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::Schema::ChoiceNode::*)()>(&System::Xml::Schema::ChoiceNode::get_IsNullable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::ChoiceNode*), "get_IsNullable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::ChoiceNode::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::Schema::ChoiceNode::ConstructPos
// Il2CppName: ConstructPos
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::ChoiceNode::*)(::System::Xml::Schema::BitSet*, ::System::Xml::Schema::BitSet*, ::ArrayW<::System::Xml::Schema::BitSet*>)>(&System::Xml::Schema::ChoiceNode::ConstructPos)> {
  static const MethodInfo* get() {
    static auto* firstpos = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "BitSet")->byval_arg;
    static auto* lastpos = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "BitSet")->byval_arg;
    static auto* followpos = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System.Xml.Schema", "BitSet"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::ChoiceNode*), "ConstructPos", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{firstpos, lastpos, followpos});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::ChoiceNode::ExpandTree
// Il2CppName: ExpandTree
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::ChoiceNode::*)(::System::Xml::Schema::InteriorNode*, ::System::Xml::Schema::SymbolsDictionary*, ::System::Xml::Schema::Positions*)>(&System::Xml::Schema::ChoiceNode::ExpandTree)> {
  static const MethodInfo* get() {
    static auto* parent = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "InteriorNode")->byval_arg;
    static auto* symbols = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "SymbolsDictionary")->byval_arg;
    static auto* positions = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "Positions")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::ChoiceNode*), "ExpandTree", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{parent, symbols, positions});
  }
};
