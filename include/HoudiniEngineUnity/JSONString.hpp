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
// Completed includes
// Begin forward declares
// Forward declaring namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
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
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Forward declaring type: JSONString
  class JSONString;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(HoudiniEngineUnity::JSONString);
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::JSONString*, "HoudiniEngineUnity", "JSONString");
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: HoudiniEngineUnity.JSONString
  // [TokenAttribute] Offset: FFFFFFFF
  class JSONString : public HoudiniEngineUnity::JSONNode {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private System.String m_Data
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* m_Data;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    public:
    // Creating conversion operator: operator ::Il2CppString*
    constexpr operator ::Il2CppString*() const noexcept {
      return m_Data;
    }
    // Get instance field reference: private System.String m_Data
    ::Il2CppString*& dyn_m_Data();
    // public System.Void .ctor(System.String aData)
    // Offset: 0x1788738
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static JSONString* New_ctor(::Il2CppString* aData) {
      static auto ___internal__logger = ::Logger::get().WithContext("HoudiniEngineUnity::JSONString::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<JSONString*, creationType>(aData)));
    }
    // public override HoudiniEngineUnity.JSONNodeType get_Tag()
    // Offset: 0x178EAF8
    // Implemented from: HoudiniEngineUnity.JSONNode
    // Base method: HoudiniEngineUnity.JSONNodeType JSONNode::get_Tag()
    HoudiniEngineUnity::JSONNodeType get_Tag();
    // public override System.Boolean get_IsString()
    // Offset: 0x178EB00
    // Implemented from: HoudiniEngineUnity.JSONNode
    // Base method: System.Boolean JSONNode::get_IsString()
    bool get_IsString();
    // public override System.String get_Value()
    // Offset: 0x178EB28
    // Implemented from: HoudiniEngineUnity.JSONNode
    // Base method: System.String JSONNode::get_Value()
    ::Il2CppString* get_Value();
    // public override System.Void set_Value(System.String value)
    // Offset: 0x178EB30
    // Implemented from: HoudiniEngineUnity.JSONNode
    // Base method: System.Void JSONNode::set_Value(System.String value)
    void set_Value(::Il2CppString* value);
    // public override HoudiniEngineUnity.JSONNode/HoudiniEngineUnity.Enumerator GetEnumerator()
    // Offset: 0x178EB08
    // Implemented from: HoudiniEngineUnity.JSONNode
    // Base method: HoudiniEngineUnity.JSONNode/HoudiniEngineUnity.Enumerator JSONNode::GetEnumerator()
    HoudiniEngineUnity::JSONNode::Enumerator GetEnumerator();
    // override System.Void WriteToStringBuilder(System.Text.StringBuilder aSB, System.Int32 aIndent, System.Int32 aIndentInc, HoudiniEngineUnity.JSONTextMode aMode)
    // Offset: 0x178EB38
    // Implemented from: HoudiniEngineUnity.JSONNode
    // Base method: System.Void JSONNode::WriteToStringBuilder(System.Text.StringBuilder aSB, System.Int32 aIndent, System.Int32 aIndentInc, HoudiniEngineUnity.JSONTextMode aMode)
    void WriteToStringBuilder(System::Text::StringBuilder* aSB, int aIndent, int aIndentInc, HoudiniEngineUnity::JSONTextMode aMode);
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x178EBF0
    // Implemented from: HoudiniEngineUnity.JSONNode
    // Base method: System.Boolean JSONNode::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x178ED04
    // Implemented from: HoudiniEngineUnity.JSONNode
    // Base method: System.Int32 JSONNode::GetHashCode()
    int GetHashCode();
  }; // HoudiniEngineUnity.JSONString
  #pragma pack(pop)
  static check_size<sizeof(JSONString), 16 + sizeof(::Il2CppString*)> __HoudiniEngineUnity_JSONStringSizeCheck;
  static_assert(sizeof(JSONString) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HoudiniEngineUnity::JSONString::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: HoudiniEngineUnity::JSONString::get_Tag
// Il2CppName: get_Tag
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<HoudiniEngineUnity::JSONNodeType (HoudiniEngineUnity::JSONString::*)()>(&HoudiniEngineUnity::JSONString::get_Tag)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::JSONString*), "get_Tag", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::JSONString::get_IsString
// Il2CppName: get_IsString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::JSONString::*)()>(&HoudiniEngineUnity::JSONString::get_IsString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::JSONString*), "get_IsString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::JSONString::get_Value
// Il2CppName: get_Value
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (HoudiniEngineUnity::JSONString::*)()>(&HoudiniEngineUnity::JSONString::get_Value)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::JSONString*), "get_Value", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::JSONString::set_Value
// Il2CppName: set_Value
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::JSONString::*)(::Il2CppString*)>(&HoudiniEngineUnity::JSONString::set_Value)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::JSONString*), "set_Value", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::JSONString::GetEnumerator
// Il2CppName: GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<HoudiniEngineUnity::JSONNode::Enumerator (HoudiniEngineUnity::JSONString::*)()>(&HoudiniEngineUnity::JSONString::GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::JSONString*), "GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::JSONString::WriteToStringBuilder
// Il2CppName: WriteToStringBuilder
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::JSONString::*)(System::Text::StringBuilder*, int, int, HoudiniEngineUnity::JSONTextMode)>(&HoudiniEngineUnity::JSONString::WriteToStringBuilder)> {
  static const MethodInfo* get() {
    static auto* aSB = &::il2cpp_utils::GetClassFromName("System.Text", "StringBuilder")->byval_arg;
    static auto* aIndent = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* aIndentInc = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* aMode = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "JSONTextMode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::JSONString*), "WriteToStringBuilder", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{aSB, aIndent, aIndentInc, aMode});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::JSONString::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::JSONString::*)(::Il2CppObject*)>(&HoudiniEngineUnity::JSONString::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::JSONString*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::JSONString::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (HoudiniEngineUnity::JSONString::*)()>(&HoudiniEngineUnity::JSONString::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::JSONString*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
