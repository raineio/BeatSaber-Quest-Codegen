// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: HoudiniEngineUnity.JSONNode
#include "HoudiniEngineUnity/JSONNode.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Forward declaring type: JSONNodeType
  struct JSONNodeType;
  // Forward declaring type: JSONTextMode
  struct JSONTextMode;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Completed forward declares
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Forward declaring type: JSONObject
  class JSONObject;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::HoudiniEngineUnity::JSONObject);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::JSONObject*, "HoudiniEngineUnity", "JSONObject");
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Size: 0x19
  #pragma pack(push, 1)
  // Autogenerated type: HoudiniEngineUnity.JSONObject
  // [TokenAttribute] Offset: FFFFFFFF
  // [DefaultMemberAttribute] Offset: 114DE7C
  class JSONObject : public ::HoudiniEngineUnity::JSONNode {
    public:
    // Nested type: ::HoudiniEngineUnity::JSONObject::$$c__DisplayClass21_0
    class $$c__DisplayClass21_0;
    // Nested type: ::HoudiniEngineUnity::JSONObject::$get_Children$d__23
    class $get_Children$d__23;
    public:
    // private System.Collections.Generic.Dictionary`2<System.String,HoudiniEngineUnity.JSONNode> m_Dict
    // Size: 0x8
    // Offset: 0x10
    ::System::Collections::Generic::Dictionary_2<::StringW, ::HoudiniEngineUnity::JSONNode*>* m_Dict;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Dictionary_2<::StringW, ::HoudiniEngineUnity::JSONNode*>*) == 0x8);
    // private System.Boolean inline
    // Size: 0x1
    // Offset: 0x18
    bool _inline;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: private System.Collections.Generic.Dictionary`2<System.String,HoudiniEngineUnity.JSONNode> m_Dict
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Dictionary_2<::StringW, ::HoudiniEngineUnity::JSONNode*>*& dyn_m_Dict();
    // Get instance field reference: private System.Boolean inline
    [[deprecated("Use field access instead!")]] bool& dyn_inline();
    // public override System.Boolean get_Inline()
    // Offset: 0x1A65B88
    // Implemented from: HoudiniEngineUnity.JSONNode
    // Base method: System.Boolean JSONNode::get_Inline()
    bool get_Inline();
    // public override System.Void set_Inline(System.Boolean value)
    // Offset: 0x1A65B90
    // Implemented from: HoudiniEngineUnity.JSONNode
    // Base method: System.Void JSONNode::set_Inline(System.Boolean value)
    void set_Inline(bool value);
    // public override HoudiniEngineUnity.JSONNodeType get_Tag()
    // Offset: 0x1A65B9C
    // Implemented from: HoudiniEngineUnity.JSONNode
    // Base method: HoudiniEngineUnity.JSONNodeType JSONNode::get_Tag()
    ::HoudiniEngineUnity::JSONNodeType get_Tag();
    // public override System.Boolean get_IsObject()
    // Offset: 0x1A65BA4
    // Implemented from: HoudiniEngineUnity.JSONNode
    // Base method: System.Boolean JSONNode::get_IsObject()
    bool get_IsObject();
    // public override HoudiniEngineUnity.JSONNode get_Item(System.String aKey)
    // Offset: 0x1A65C44
    // Implemented from: HoudiniEngineUnity.JSONNode
    // Base method: HoudiniEngineUnity.JSONNode JSONNode::get_Item(System.String aKey)
    ::HoudiniEngineUnity::JSONNode* get_Item(::StringW aKey);
    // public override System.Void set_Item(System.String aKey, HoudiniEngineUnity.JSONNode value)
    // Offset: 0x1A65D00
    // Implemented from: HoudiniEngineUnity.JSONNode
    // Base method: System.Void JSONNode::set_Item(System.String aKey, HoudiniEngineUnity.JSONNode value)
    void set_Item(::StringW aKey, ::HoudiniEngineUnity::JSONNode* value);
    // public override HoudiniEngineUnity.JSONNode get_Item(System.Int32 aIndex)
    // Offset: 0x1A65E14
    // Implemented from: HoudiniEngineUnity.JSONNode
    // Base method: HoudiniEngineUnity.JSONNode JSONNode::get_Item(System.Int32 aIndex)
    ::HoudiniEngineUnity::JSONNode* get_Item(int aIndex);
    // public override System.Void set_Item(System.Int32 aIndex, HoudiniEngineUnity.JSONNode value)
    // Offset: 0x1A65EAC
    // Implemented from: HoudiniEngineUnity.JSONNode
    // Base method: System.Void JSONNode::set_Item(System.Int32 aIndex, HoudiniEngineUnity.JSONNode value)
    void set_Item(int aIndex, ::HoudiniEngineUnity::JSONNode* value);
    // public override System.Int32 get_Count()
    // Offset: 0x1A65FC8
    // Implemented from: HoudiniEngineUnity.JSONNode
    // Base method: System.Int32 JSONNode::get_Count()
    int get_Count();
    // public override System.Collections.Generic.IEnumerable`1<HoudiniEngineUnity.JSONNode> get_Children()
    // Offset: 0x1A6649C
    // Implemented from: HoudiniEngineUnity.JSONNode
    // Base method: System.Collections.Generic.IEnumerable`1<HoudiniEngineUnity.JSONNode> JSONNode::get_Children()
    ::System::Collections::Generic::IEnumerable_1<::HoudiniEngineUnity::JSONNode*>* get_Children();
    // public System.Void .ctor()
    // Offset: 0x1A60188
    // Implemented from: HoudiniEngineUnity.JSONNode
    // Base method: System.Void JSONNode::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static JSONObject* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::HoudiniEngineUnity::JSONObject::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<JSONObject*, creationType>()));
    }
    // public override HoudiniEngineUnity.JSONNode/HoudiniEngineUnity.Enumerator GetEnumerator()
    // Offset: 0x1A65BAC
    // Implemented from: HoudiniEngineUnity.JSONNode
    // Base method: HoudiniEngineUnity.JSONNode/HoudiniEngineUnity.Enumerator JSONNode::GetEnumerator()
    ::HoudiniEngineUnity::JSONNode::Enumerator GetEnumerator();
    // public override System.Void Add(System.String aKey, HoudiniEngineUnity.JSONNode aItem)
    // Offset: 0x1A66020
    // Implemented from: HoudiniEngineUnity.JSONNode
    // Base method: System.Void JSONNode::Add(System.String aKey, HoudiniEngineUnity.JSONNode aItem)
    void Add(::StringW aKey, ::HoudiniEngineUnity::JSONNode* aItem);
    // public override HoudiniEngineUnity.JSONNode Remove(System.String aKey)
    // Offset: 0x1A661A4
    // Implemented from: HoudiniEngineUnity.JSONNode
    // Base method: HoudiniEngineUnity.JSONNode JSONNode::Remove(System.String aKey)
    ::HoudiniEngineUnity::JSONNode* Remove(::StringW aKey);
    // public override HoudiniEngineUnity.JSONNode Remove(System.Int32 aIndex)
    // Offset: 0x1A66260
    // Implemented from: HoudiniEngineUnity.JSONNode
    // Base method: HoudiniEngineUnity.JSONNode JSONNode::Remove(System.Int32 aIndex)
    ::HoudiniEngineUnity::JSONNode* Remove(int aIndex);
    // public override HoudiniEngineUnity.JSONNode Remove(HoudiniEngineUnity.JSONNode aNode)
    // Offset: 0x1A6631C
    // Implemented from: HoudiniEngineUnity.JSONNode
    // Base method: HoudiniEngineUnity.JSONNode JSONNode::Remove(HoudiniEngineUnity.JSONNode aNode)
    ::HoudiniEngineUnity::JSONNode* Remove(::HoudiniEngineUnity::JSONNode* aNode);
    // override System.Void WriteToStringBuilder(System.Text.StringBuilder aSB, System.Int32 aIndent, System.Int32 aIndentInc, HoudiniEngineUnity.JSONTextMode aMode)
    // Offset: 0x1A66554
    // Implemented from: HoudiniEngineUnity.JSONNode
    // Base method: System.Void JSONNode::WriteToStringBuilder(System.Text.StringBuilder aSB, System.Int32 aIndent, System.Int32 aIndentInc, HoudiniEngineUnity.JSONTextMode aMode)
    void WriteToStringBuilder(::System::Text::StringBuilder* aSB, int aIndent, int aIndentInc, ::HoudiniEngineUnity::JSONTextMode aMode);
  }; // HoudiniEngineUnity.JSONObject
  #pragma pack(pop)
  static check_size<sizeof(JSONObject), 24 + sizeof(bool)> __HoudiniEngineUnity_JSONObjectSizeCheck;
  static_assert(sizeof(JSONObject) == 0x19);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HoudiniEngineUnity::JSONObject::get_Inline
// Il2CppName: get_Inline
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::JSONObject::*)()>(&HoudiniEngineUnity::JSONObject::get_Inline)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::JSONObject*), "get_Inline", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::JSONObject::set_Inline
// Il2CppName: set_Inline
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::JSONObject::*)(bool)>(&HoudiniEngineUnity::JSONObject::set_Inline)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::JSONObject*), "set_Inline", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::JSONObject::get_Tag
// Il2CppName: get_Tag
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::JSONNodeType (HoudiniEngineUnity::JSONObject::*)()>(&HoudiniEngineUnity::JSONObject::get_Tag)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::JSONObject*), "get_Tag", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::JSONObject::get_IsObject
// Il2CppName: get_IsObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::JSONObject::*)()>(&HoudiniEngineUnity::JSONObject::get_IsObject)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::JSONObject*), "get_IsObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::JSONObject::get_Item
// Il2CppName: get_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::JSONNode* (HoudiniEngineUnity::JSONObject::*)(::StringW)>(&HoudiniEngineUnity::JSONObject::get_Item)> {
  static const MethodInfo* get() {
    static auto* aKey = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::JSONObject*), "get_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{aKey});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::JSONObject::set_Item
// Il2CppName: set_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::JSONObject::*)(::StringW, ::HoudiniEngineUnity::JSONNode*)>(&HoudiniEngineUnity::JSONObject::set_Item)> {
  static const MethodInfo* get() {
    static auto* aKey = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "JSONNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::JSONObject*), "set_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{aKey, value});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::JSONObject::get_Item
// Il2CppName: get_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::JSONNode* (HoudiniEngineUnity::JSONObject::*)(int)>(&HoudiniEngineUnity::JSONObject::get_Item)> {
  static const MethodInfo* get() {
    static auto* aIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::JSONObject*), "get_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{aIndex});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::JSONObject::set_Item
// Il2CppName: set_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::JSONObject::*)(int, ::HoudiniEngineUnity::JSONNode*)>(&HoudiniEngineUnity::JSONObject::set_Item)> {
  static const MethodInfo* get() {
    static auto* aIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "JSONNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::JSONObject*), "set_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{aIndex, value});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::JSONObject::get_Count
// Il2CppName: get_Count
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (HoudiniEngineUnity::JSONObject::*)()>(&HoudiniEngineUnity::JSONObject::get_Count)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::JSONObject*), "get_Count", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::JSONObject::get_Children
// Il2CppName: get_Children
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::HoudiniEngineUnity::JSONNode*>* (HoudiniEngineUnity::JSONObject::*)()>(&HoudiniEngineUnity::JSONObject::get_Children)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::JSONObject*), "get_Children", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::JSONObject::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: HoudiniEngineUnity::JSONObject::GetEnumerator
// Il2CppName: GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::JSONNode::Enumerator (HoudiniEngineUnity::JSONObject::*)()>(&HoudiniEngineUnity::JSONObject::GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::JSONObject*), "GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::JSONObject::Add
// Il2CppName: Add
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::JSONObject::*)(::StringW, ::HoudiniEngineUnity::JSONNode*)>(&HoudiniEngineUnity::JSONObject::Add)> {
  static const MethodInfo* get() {
    static auto* aKey = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* aItem = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "JSONNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::JSONObject*), "Add", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{aKey, aItem});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::JSONObject::Remove
// Il2CppName: Remove
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::JSONNode* (HoudiniEngineUnity::JSONObject::*)(::StringW)>(&HoudiniEngineUnity::JSONObject::Remove)> {
  static const MethodInfo* get() {
    static auto* aKey = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::JSONObject*), "Remove", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{aKey});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::JSONObject::Remove
// Il2CppName: Remove
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::JSONNode* (HoudiniEngineUnity::JSONObject::*)(int)>(&HoudiniEngineUnity::JSONObject::Remove)> {
  static const MethodInfo* get() {
    static auto* aIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::JSONObject*), "Remove", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{aIndex});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::JSONObject::Remove
// Il2CppName: Remove
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::JSONNode* (HoudiniEngineUnity::JSONObject::*)(::HoudiniEngineUnity::JSONNode*)>(&HoudiniEngineUnity::JSONObject::Remove)> {
  static const MethodInfo* get() {
    static auto* aNode = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "JSONNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::JSONObject*), "Remove", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{aNode});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::JSONObject::WriteToStringBuilder
// Il2CppName: WriteToStringBuilder
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::JSONObject::*)(::System::Text::StringBuilder*, int, int, ::HoudiniEngineUnity::JSONTextMode)>(&HoudiniEngineUnity::JSONObject::WriteToStringBuilder)> {
  static const MethodInfo* get() {
    static auto* aSB = &::il2cpp_utils::GetClassFromName("System.Text", "StringBuilder")->byval_arg;
    static auto* aIndent = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* aIndentInc = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* aMode = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "JSONTextMode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::JSONObject*), "WriteToStringBuilder", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{aSB, aIndent, aIndentInc, aMode});
  }
};
