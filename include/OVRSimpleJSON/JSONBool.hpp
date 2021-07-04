// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVRSimpleJSON.JSONNode
#include "OVRSimpleJSON/JSONNode.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: OVRSimpleJSON
namespace OVRSimpleJSON {
  // Forward declaring type: JSONNodeType
  struct JSONNodeType;
  // Forward declaring type: JSONTextMode
  struct JSONTextMode;
}
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Completed forward declares
// Type namespace: OVRSimpleJSON
namespace OVRSimpleJSON {
  // Size: 0x11
  #pragma pack(push, 1)
  // Autogenerated type: OVRSimpleJSON.JSONBool
  class JSONBool : public OVRSimpleJSON::JSONNode {
    public:
    // private System.Boolean m_Data
    // Size: 0x1
    // Offset: 0x10
    bool m_Data;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: JSONBool
    JSONBool(bool m_Data_ = {}) noexcept : m_Data{m_Data_} {}
    // Creating conversion operator: operator bool
    constexpr operator bool() const noexcept {
      return m_Data;
    }
    // public System.Void .ctor(System.Boolean aData)
    // Offset: 0x162C94C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static JSONBool* New_ctor(bool aData) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVRSimpleJSON::JSONBool::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<JSONBool*, creationType>(aData)));
    }
    // public System.Void .ctor(System.String aData)
    // Offset: 0x162C9CC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static JSONBool* New_ctor(::Il2CppString* aData) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVRSimpleJSON::JSONBool::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<JSONBool*, creationType>(aData)));
    }
    // public override OVRSimpleJSON.JSONNodeType get_Tag()
    // Offset: 0x162C870
    // Implemented from: OVRSimpleJSON.JSONNode
    // Base method: OVRSimpleJSON.JSONNodeType JSONNode::get_Tag()
    OVRSimpleJSON::JSONNodeType get_Tag();
    // public override System.Boolean get_IsBoolean()
    // Offset: 0x162C878
    // Implemented from: OVRSimpleJSON.JSONNode
    // Base method: System.Boolean JSONNode::get_IsBoolean()
    bool get_IsBoolean();
    // public override OVRSimpleJSON.JSONNode/Enumerator GetEnumerator()
    // Offset: 0x162C880
    // Implemented from: OVRSimpleJSON.JSONNode
    // Base method: OVRSimpleJSON.JSONNode/Enumerator JSONNode::GetEnumerator()
    OVRSimpleJSON::JSONNode::Enumerator GetEnumerator();
    // public override System.String get_Value()
    // Offset: 0x162C8A0
    // Implemented from: OVRSimpleJSON.JSONNode
    // Base method: System.String JSONNode::get_Value()
    ::Il2CppString* get_Value();
    // public override System.Void set_Value(System.String value)
    // Offset: 0x162C8AC
    // Implemented from: OVRSimpleJSON.JSONNode
    // Base method: System.Void JSONNode::set_Value(System.String value)
    void set_Value(::Il2CppString* value);
    // public override System.Boolean get_AsBool()
    // Offset: 0x162C938
    // Implemented from: OVRSimpleJSON.JSONNode
    // Base method: System.Boolean JSONNode::get_AsBool()
    bool get_AsBool();
    // public override System.Void set_AsBool(System.Boolean value)
    // Offset: 0x162C940
    // Implemented from: OVRSimpleJSON.JSONNode
    // Base method: System.Void JSONNode::set_AsBool(System.Boolean value)
    void set_AsBool(bool value);
    // override System.Void WriteToStringBuilder(System.Text.StringBuilder aSB, System.Int32 aIndent, System.Int32 aIndentInc, OVRSimpleJSON.JSONTextMode aMode)
    // Offset: 0x162CA54
    // Implemented from: OVRSimpleJSON.JSONNode
    // Base method: System.Void JSONNode::WriteToStringBuilder(System.Text.StringBuilder aSB, System.Int32 aIndent, System.Int32 aIndentInc, OVRSimpleJSON.JSONTextMode aMode)
    void WriteToStringBuilder(System::Text::StringBuilder* aSB, int aIndent, int aIndentInc, OVRSimpleJSON::JSONTextMode aMode);
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x162CAD0
    // Implemented from: OVRSimpleJSON.JSONNode
    // Base method: System.Boolean JSONNode::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x162CB58
    // Implemented from: OVRSimpleJSON.JSONNode
    // Base method: System.Int32 JSONNode::GetHashCode()
    int GetHashCode();
  }; // OVRSimpleJSON.JSONBool
  #pragma pack(pop)
  static check_size<sizeof(JSONBool), 16 + sizeof(bool)> __OVRSimpleJSON_JSONBoolSizeCheck;
  static_assert(sizeof(JSONBool) == 0x11);
}
DEFINE_IL2CPP_ARG_TYPE(OVRSimpleJSON::JSONBool*, "OVRSimpleJSON", "JSONBool");
// Writing MetadataGetter for method: OVRSimpleJSON::JSONBool::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: OVRSimpleJSON::JSONBool::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: OVRSimpleJSON::JSONBool::get_Tag
// Il2CppName: get_Tag
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVRSimpleJSON::JSONNodeType (OVRSimpleJSON::JSONBool::*)()>(&OVRSimpleJSON::JSONBool::get_Tag)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVRSimpleJSON::JSONBool*), "get_Tag", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OVRSimpleJSON::JSONBool::get_IsBoolean
// Il2CppName: get_IsBoolean
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (OVRSimpleJSON::JSONBool::*)()>(&OVRSimpleJSON::JSONBool::get_IsBoolean)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVRSimpleJSON::JSONBool*), "get_IsBoolean", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OVRSimpleJSON::JSONBool::GetEnumerator
// Il2CppName: GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVRSimpleJSON::JSONNode::Enumerator (OVRSimpleJSON::JSONBool::*)()>(&OVRSimpleJSON::JSONBool::GetEnumerator)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVRSimpleJSON::JSONBool*), "GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OVRSimpleJSON::JSONBool::get_Value
// Il2CppName: get_Value
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (OVRSimpleJSON::JSONBool::*)()>(&OVRSimpleJSON::JSONBool::get_Value)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVRSimpleJSON::JSONBool*), "get_Value", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OVRSimpleJSON::JSONBool::set_Value
// Il2CppName: set_Value
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVRSimpleJSON::JSONBool::*)(::Il2CppString*)>(&OVRSimpleJSON::JSONBool::set_Value)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVRSimpleJSON::JSONBool*), "set_Value", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: OVRSimpleJSON::JSONBool::get_AsBool
// Il2CppName: get_AsBool
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (OVRSimpleJSON::JSONBool::*)()>(&OVRSimpleJSON::JSONBool::get_AsBool)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVRSimpleJSON::JSONBool*), "get_AsBool", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OVRSimpleJSON::JSONBool::set_AsBool
// Il2CppName: set_AsBool
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVRSimpleJSON::JSONBool::*)(bool)>(&OVRSimpleJSON::JSONBool::set_AsBool)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVRSimpleJSON::JSONBool*), "set_AsBool", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<bool>()});
  }
};
// Writing MetadataGetter for method: OVRSimpleJSON::JSONBool::WriteToStringBuilder
// Il2CppName: WriteToStringBuilder
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVRSimpleJSON::JSONBool::*)(System::Text::StringBuilder*, int, int, OVRSimpleJSON::JSONTextMode)>(&OVRSimpleJSON::JSONBool::WriteToStringBuilder)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVRSimpleJSON::JSONBool*), "WriteToStringBuilder", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Text::StringBuilder*>(), ::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<OVRSimpleJSON::JSONTextMode>()});
  }
};
// Writing MetadataGetter for method: OVRSimpleJSON::JSONBool::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (OVRSimpleJSON::JSONBool::*)(::Il2CppObject*)>(&OVRSimpleJSON::JSONBool::Equals)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVRSimpleJSON::JSONBool*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>()});
  }
};
// Writing MetadataGetter for method: OVRSimpleJSON::JSONBool::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (OVRSimpleJSON::JSONBool::*)()>(&OVRSimpleJSON::JSONBool::GetHashCode)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVRSimpleJSON::JSONBool*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
