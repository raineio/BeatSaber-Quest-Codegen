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
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Completed forward declares
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Forward declaring type: JSONNumber
  class JSONNumber;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::HoudiniEngineUnity::JSONNumber);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::JSONNumber*, "HoudiniEngineUnity", "JSONNumber");
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: HoudiniEngineUnity.JSONNumber
  // [TokenAttribute] Offset: FFFFFFFF
  class JSONNumber : public ::HoudiniEngineUnity::JSONNode {
    public:
    public:
    // private System.Double m_Data
    // Size: 0x8
    // Offset: 0x10
    double m_Data;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    public:
    // Creating conversion operator: operator double
    constexpr operator double() const noexcept {
      return m_Data;
    }
    // Get instance field reference: private System.Double m_Data
    [[deprecated("Use field access instead!")]] double& dyn_m_Data();
    // public System.Void .ctor(System.Double aData)
    // Offset: 0x1A60410
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static JSONNumber* New_ctor(double aData) {
      static auto ___internal__logger = ::Logger::get().WithContext("::HoudiniEngineUnity::JSONNumber::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<JSONNumber*, creationType>(aData)));
    }
    // public System.Void .ctor(System.String aData)
    // Offset: 0x1A65858
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static JSONNumber* New_ctor(::StringW aData) {
      static auto ___internal__logger = ::Logger::get().WithContext("::HoudiniEngineUnity::JSONNumber::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<JSONNumber*, creationType>(aData)));
    }
    // static private System.Boolean IsNumeric(System.Object value)
    // Offset: 0x1A65920
    static bool IsNumeric(::Il2CppObject* value);
    // public override HoudiniEngineUnity.JSONNodeType get_Tag()
    // Offset: 0x1A656B0
    // Implemented from: HoudiniEngineUnity.JSONNode
    // Base method: HoudiniEngineUnity.JSONNodeType JSONNode::get_Tag()
    ::HoudiniEngineUnity::JSONNodeType get_Tag();
    // public override System.Boolean get_IsNumber()
    // Offset: 0x1A656B8
    // Implemented from: HoudiniEngineUnity.JSONNode
    // Base method: System.Boolean JSONNode::get_IsNumber()
    bool get_IsNumber();
    // public override System.String get_Value()
    // Offset: 0x1A656E0
    // Implemented from: HoudiniEngineUnity.JSONNode
    // Base method: System.String JSONNode::get_Value()
    ::StringW get_Value();
    // public override System.Void set_Value(System.String value)
    // Offset: 0x1A65758
    // Implemented from: HoudiniEngineUnity.JSONNode
    // Base method: System.Void JSONNode::set_Value(System.String value)
    void set_Value(::StringW value);
    // public override System.Double get_AsDouble()
    // Offset: 0x1A6581C
    // Implemented from: HoudiniEngineUnity.JSONNode
    // Base method: System.Double JSONNode::get_AsDouble()
    double get_AsDouble();
    // public override System.Void set_AsDouble(System.Double value)
    // Offset: 0x1A65824
    // Implemented from: HoudiniEngineUnity.JSONNode
    // Base method: System.Void JSONNode::set_AsDouble(System.Double value)
    void set_AsDouble(double value);
    // public override System.Int64 get_AsLong()
    // Offset: 0x1A6582C
    // Implemented from: HoudiniEngineUnity.JSONNode
    // Base method: System.Int64 JSONNode::get_AsLong()
    int64_t get_AsLong();
    // public override System.Void set_AsLong(System.Int64 value)
    // Offset: 0x1A6584C
    // Implemented from: HoudiniEngineUnity.JSONNode
    // Base method: System.Void JSONNode::set_AsLong(System.Int64 value)
    void set_AsLong(int64_t value);
    // public override HoudiniEngineUnity.JSONNode/HoudiniEngineUnity.Enumerator GetEnumerator()
    // Offset: 0x1A656C0
    // Implemented from: HoudiniEngineUnity.JSONNode
    // Base method: HoudiniEngineUnity.JSONNode/HoudiniEngineUnity.Enumerator JSONNode::GetEnumerator()
    ::HoudiniEngineUnity::JSONNode::Enumerator GetEnumerator();
    // override System.Void WriteToStringBuilder(System.Text.StringBuilder aSB, System.Int32 aIndent, System.Int32 aIndentInc, HoudiniEngineUnity.JSONTextMode aMode)
    // Offset: 0x1A658E0
    // Implemented from: HoudiniEngineUnity.JSONNode
    // Base method: System.Void JSONNode::WriteToStringBuilder(System.Text.StringBuilder aSB, System.Int32 aIndent, System.Int32 aIndentInc, HoudiniEngineUnity.JSONTextMode aMode)
    void WriteToStringBuilder(::System::Text::StringBuilder* aSB, int aIndent, int aIndentInc, ::HoudiniEngineUnity::JSONTextMode aMode);
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x1A65A50
    // Implemented from: HoudiniEngineUnity.JSONNode
    // Base method: System.Boolean JSONNode::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x1A65B7C
    // Implemented from: HoudiniEngineUnity.JSONNode
    // Base method: System.Int32 JSONNode::GetHashCode()
    int GetHashCode();
  }; // HoudiniEngineUnity.JSONNumber
  #pragma pack(pop)
  static check_size<sizeof(JSONNumber), 16 + sizeof(double)> __HoudiniEngineUnity_JSONNumberSizeCheck;
  static_assert(sizeof(JSONNumber) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HoudiniEngineUnity::JSONNumber::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: HoudiniEngineUnity::JSONNumber::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: HoudiniEngineUnity::JSONNumber::IsNumeric
// Il2CppName: IsNumeric
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Il2CppObject*)>(&HoudiniEngineUnity::JSONNumber::IsNumeric)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::JSONNumber*), "IsNumeric", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::JSONNumber::get_Tag
// Il2CppName: get_Tag
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::JSONNodeType (HoudiniEngineUnity::JSONNumber::*)()>(&HoudiniEngineUnity::JSONNumber::get_Tag)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::JSONNumber*), "get_Tag", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::JSONNumber::get_IsNumber
// Il2CppName: get_IsNumber
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::JSONNumber::*)()>(&HoudiniEngineUnity::JSONNumber::get_IsNumber)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::JSONNumber*), "get_IsNumber", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::JSONNumber::get_Value
// Il2CppName: get_Value
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (HoudiniEngineUnity::JSONNumber::*)()>(&HoudiniEngineUnity::JSONNumber::get_Value)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::JSONNumber*), "get_Value", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::JSONNumber::set_Value
// Il2CppName: set_Value
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::JSONNumber::*)(::StringW)>(&HoudiniEngineUnity::JSONNumber::set_Value)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::JSONNumber*), "set_Value", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::JSONNumber::get_AsDouble
// Il2CppName: get_AsDouble
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double (HoudiniEngineUnity::JSONNumber::*)()>(&HoudiniEngineUnity::JSONNumber::get_AsDouble)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::JSONNumber*), "get_AsDouble", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::JSONNumber::set_AsDouble
// Il2CppName: set_AsDouble
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::JSONNumber::*)(double)>(&HoudiniEngineUnity::JSONNumber::set_AsDouble)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::JSONNumber*), "set_AsDouble", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::JSONNumber::get_AsLong
// Il2CppName: get_AsLong
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (HoudiniEngineUnity::JSONNumber::*)()>(&HoudiniEngineUnity::JSONNumber::get_AsLong)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::JSONNumber*), "get_AsLong", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::JSONNumber::set_AsLong
// Il2CppName: set_AsLong
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::JSONNumber::*)(int64_t)>(&HoudiniEngineUnity::JSONNumber::set_AsLong)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::JSONNumber*), "set_AsLong", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::JSONNumber::GetEnumerator
// Il2CppName: GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::JSONNode::Enumerator (HoudiniEngineUnity::JSONNumber::*)()>(&HoudiniEngineUnity::JSONNumber::GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::JSONNumber*), "GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::JSONNumber::WriteToStringBuilder
// Il2CppName: WriteToStringBuilder
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::JSONNumber::*)(::System::Text::StringBuilder*, int, int, ::HoudiniEngineUnity::JSONTextMode)>(&HoudiniEngineUnity::JSONNumber::WriteToStringBuilder)> {
  static const MethodInfo* get() {
    static auto* aSB = &::il2cpp_utils::GetClassFromName("System.Text", "StringBuilder")->byval_arg;
    static auto* aIndent = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* aIndentInc = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* aMode = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "JSONTextMode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::JSONNumber*), "WriteToStringBuilder", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{aSB, aIndent, aIndentInc, aMode});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::JSONNumber::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::JSONNumber::*)(::Il2CppObject*)>(&HoudiniEngineUnity::JSONNumber::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::JSONNumber*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::JSONNumber::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (HoudiniEngineUnity::JSONNumber::*)()>(&HoudiniEngineUnity::JSONNumber::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::JSONNumber*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
