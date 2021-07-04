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
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: OVRSimpleJSON.JSONNumber
  class JSONNumber : public OVRSimpleJSON::JSONNode {
    public:
    // private System.Double m_Data
    // Size: 0x8
    // Offset: 0x10
    double m_Data;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    // Creating value type constructor for type: JSONNumber
    JSONNumber(double m_Data_ = {}) noexcept : m_Data{m_Data_} {}
    // Creating conversion operator: operator double
    constexpr operator double() const noexcept {
      return m_Data;
    }
    // public System.Void .ctor(System.Double aData)
    // Offset: 0x1ECFB80
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static JSONNumber* New_ctor(double aData) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVRSimpleJSON::JSONNumber::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<JSONNumber*, creationType>(aData)));
    }
    // public System.Void .ctor(System.String aData)
    // Offset: 0x1ECFBFC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static JSONNumber* New_ctor(::Il2CppString* aData) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVRSimpleJSON::JSONNumber::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<JSONNumber*, creationType>(aData)));
    }
    // static private System.Boolean IsNumeric(System.Object value)
    // Offset: 0x1ECFCC4
    static bool IsNumeric(::Il2CppObject* value);
    // public override OVRSimpleJSON.JSONNodeType get_Tag()
    // Offset: 0x1ECF9EC
    // Implemented from: OVRSimpleJSON.JSONNode
    // Base method: OVRSimpleJSON.JSONNodeType JSONNode::get_Tag()
    OVRSimpleJSON::JSONNodeType get_Tag();
    // public override System.Boolean get_IsNumber()
    // Offset: 0x1ECF9F4
    // Implemented from: OVRSimpleJSON.JSONNode
    // Base method: System.Boolean JSONNode::get_IsNumber()
    bool get_IsNumber();
    // public override OVRSimpleJSON.JSONNode/Enumerator GetEnumerator()
    // Offset: 0x1ECF9FC
    // Implemented from: OVRSimpleJSON.JSONNode
    // Base method: OVRSimpleJSON.JSONNode/Enumerator JSONNode::GetEnumerator()
    OVRSimpleJSON::JSONNode::Enumerator GetEnumerator();
    // public override System.String get_Value()
    // Offset: 0x1ECFA1C
    // Implemented from: OVRSimpleJSON.JSONNode
    // Base method: System.String JSONNode::get_Value()
    ::Il2CppString* get_Value();
    // public override System.Void set_Value(System.String value)
    // Offset: 0x1ECFA94
    // Implemented from: OVRSimpleJSON.JSONNode
    // Base method: System.Void JSONNode::set_Value(System.String value)
    void set_Value(::Il2CppString* value);
    // public override System.Double get_AsDouble()
    // Offset: 0x1ECFB58
    // Implemented from: OVRSimpleJSON.JSONNode
    // Base method: System.Double JSONNode::get_AsDouble()
    double get_AsDouble();
    // public override System.Void set_AsDouble(System.Double value)
    // Offset: 0x1ECFB60
    // Implemented from: OVRSimpleJSON.JSONNode
    // Base method: System.Void JSONNode::set_AsDouble(System.Double value)
    void set_AsDouble(double value);
    // public override System.Int64 get_AsLong()
    // Offset: 0x1ECFB68
    // Implemented from: OVRSimpleJSON.JSONNode
    // Base method: System.Int64 JSONNode::get_AsLong()
    int64_t get_AsLong();
    // public override System.Void set_AsLong(System.Int64 value)
    // Offset: 0x1ECFB74
    // Implemented from: OVRSimpleJSON.JSONNode
    // Base method: System.Void JSONNode::set_AsLong(System.Int64 value)
    void set_AsLong(int64_t value);
    // override System.Void WriteToStringBuilder(System.Text.StringBuilder aSB, System.Int32 aIndent, System.Int32 aIndentInc, OVRSimpleJSON.JSONTextMode aMode)
    // Offset: 0x1ECFC84
    // Implemented from: OVRSimpleJSON.JSONNode
    // Base method: System.Void JSONNode::WriteToStringBuilder(System.Text.StringBuilder aSB, System.Int32 aIndent, System.Int32 aIndentInc, OVRSimpleJSON.JSONTextMode aMode)
    void WriteToStringBuilder(System::Text::StringBuilder* aSB, int aIndent, int aIndentInc, OVRSimpleJSON::JSONTextMode aMode);
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x1ECFDF4
    // Implemented from: OVRSimpleJSON.JSONNode
    // Base method: System.Boolean JSONNode::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x1ECFF30
    // Implemented from: OVRSimpleJSON.JSONNode
    // Base method: System.Int32 JSONNode::GetHashCode()
    int GetHashCode();
  }; // OVRSimpleJSON.JSONNumber
  #pragma pack(pop)
  static check_size<sizeof(JSONNumber), 16 + sizeof(double)> __OVRSimpleJSON_JSONNumberSizeCheck;
  static_assert(sizeof(JSONNumber) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(OVRSimpleJSON::JSONNumber*, "OVRSimpleJSON", "JSONNumber");
// Writing MetadataGetter for method: OVRSimpleJSON::JSONNumber::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: OVRSimpleJSON::JSONNumber::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: OVRSimpleJSON::JSONNumber::IsNumeric
// Il2CppName: IsNumeric
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Il2CppObject*)>(&OVRSimpleJSON::JSONNumber::IsNumeric)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVRSimpleJSON::JSONNumber*), "IsNumeric", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>()});
  }
};
// Writing MetadataGetter for method: OVRSimpleJSON::JSONNumber::get_Tag
// Il2CppName: get_Tag
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVRSimpleJSON::JSONNodeType (OVRSimpleJSON::JSONNumber::*)()>(&OVRSimpleJSON::JSONNumber::get_Tag)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVRSimpleJSON::JSONNumber*), "get_Tag", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OVRSimpleJSON::JSONNumber::get_IsNumber
// Il2CppName: get_IsNumber
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (OVRSimpleJSON::JSONNumber::*)()>(&OVRSimpleJSON::JSONNumber::get_IsNumber)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVRSimpleJSON::JSONNumber*), "get_IsNumber", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OVRSimpleJSON::JSONNumber::GetEnumerator
// Il2CppName: GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVRSimpleJSON::JSONNode::Enumerator (OVRSimpleJSON::JSONNumber::*)()>(&OVRSimpleJSON::JSONNumber::GetEnumerator)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVRSimpleJSON::JSONNumber*), "GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OVRSimpleJSON::JSONNumber::get_Value
// Il2CppName: get_Value
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (OVRSimpleJSON::JSONNumber::*)()>(&OVRSimpleJSON::JSONNumber::get_Value)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVRSimpleJSON::JSONNumber*), "get_Value", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OVRSimpleJSON::JSONNumber::set_Value
// Il2CppName: set_Value
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVRSimpleJSON::JSONNumber::*)(::Il2CppString*)>(&OVRSimpleJSON::JSONNumber::set_Value)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVRSimpleJSON::JSONNumber*), "set_Value", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: OVRSimpleJSON::JSONNumber::get_AsDouble
// Il2CppName: get_AsDouble
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double (OVRSimpleJSON::JSONNumber::*)()>(&OVRSimpleJSON::JSONNumber::get_AsDouble)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVRSimpleJSON::JSONNumber*), "get_AsDouble", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OVRSimpleJSON::JSONNumber::set_AsDouble
// Il2CppName: set_AsDouble
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVRSimpleJSON::JSONNumber::*)(double)>(&OVRSimpleJSON::JSONNumber::set_AsDouble)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVRSimpleJSON::JSONNumber*), "set_AsDouble", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<double>()});
  }
};
// Writing MetadataGetter for method: OVRSimpleJSON::JSONNumber::get_AsLong
// Il2CppName: get_AsLong
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (OVRSimpleJSON::JSONNumber::*)()>(&OVRSimpleJSON::JSONNumber::get_AsLong)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVRSimpleJSON::JSONNumber*), "get_AsLong", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OVRSimpleJSON::JSONNumber::set_AsLong
// Il2CppName: set_AsLong
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVRSimpleJSON::JSONNumber::*)(int64_t)>(&OVRSimpleJSON::JSONNumber::set_AsLong)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVRSimpleJSON::JSONNumber*), "set_AsLong", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int64_t>()});
  }
};
// Writing MetadataGetter for method: OVRSimpleJSON::JSONNumber::WriteToStringBuilder
// Il2CppName: WriteToStringBuilder
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVRSimpleJSON::JSONNumber::*)(System::Text::StringBuilder*, int, int, OVRSimpleJSON::JSONTextMode)>(&OVRSimpleJSON::JSONNumber::WriteToStringBuilder)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVRSimpleJSON::JSONNumber*), "WriteToStringBuilder", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Text::StringBuilder*>(), ::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<OVRSimpleJSON::JSONTextMode>()});
  }
};
// Writing MetadataGetter for method: OVRSimpleJSON::JSONNumber::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (OVRSimpleJSON::JSONNumber::*)(::Il2CppObject*)>(&OVRSimpleJSON::JSONNumber::Equals)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVRSimpleJSON::JSONNumber*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>()});
  }
};
// Writing MetadataGetter for method: OVRSimpleJSON::JSONNumber::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (OVRSimpleJSON::JSONNumber::*)()>(&OVRSimpleJSON::JSONNumber::GetHashCode)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVRSimpleJSON::JSONNumber*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
