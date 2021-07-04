// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IComparable
#include "System/IComparable.hpp"
// Including type: System.IConvertible
#include "System/IConvertible.hpp"
// Including type: System.IComparable`1
#include "System/IComparable_1.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: String
  class String;
  // Forward declaring type: IFormatProvider
  class IFormatProvider;
  // Forward declaring type: TypeCode
  struct TypeCode;
  // Forward declaring type: Decimal
  struct Decimal;
  // Forward declaring type: DateTime
  struct DateTime;
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Size: 0x1
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.Boolean
  // [ComVisibleAttribute] Offset: D7A3F0
  struct Boolean/*, public System::ValueType, public System::IComparable, public System::IConvertible, public System::IComparable_1<bool>, public System::IEquatable_1<bool>*/ {
    public:
    // private System.Boolean m_value
    // Size: 0x1
    // Offset: 0x0
    bool m_value;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: Boolean
    constexpr Boolean(bool m_value_ = {}) noexcept : m_value{m_value_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator System::IComparable
    operator System::IComparable() noexcept {
      return *reinterpret_cast<System::IComparable*>(this);
    }
    // Creating interface conversion operator: operator System::IConvertible
    operator System::IConvertible() noexcept {
      return *reinterpret_cast<System::IConvertible*>(this);
    }
    // Creating interface conversion operator: operator System::IComparable_1<bool>
    operator System::IComparable_1<bool>() noexcept {
      return *reinterpret_cast<System::IComparable_1<bool>*>(this);
    }
    // Creating interface conversion operator: operator System::IEquatable_1<bool>
    operator System::IEquatable_1<bool>() noexcept {
      return *reinterpret_cast<System::IEquatable_1<bool>*>(this);
    }
    // Creating conversion operator: operator bool
    constexpr operator bool() const noexcept {
      return m_value;
    }
    // static field const value: static System.Int32 True
    static constexpr const int True = 1;
    // Get static field: static System.Int32 True
    static int _get_True();
    // Set static field: static System.Int32 True
    static void _set_True(int value);
    // static field const value: static System.Int32 False
    static constexpr const int False = 0;
    // Get static field: static System.Int32 False
    static int _get_False();
    // Set static field: static System.Int32 False
    static void _set_False(int value);
    // static field const value: static System.String TrueLiteral
    static constexpr const char* TrueLiteral = "True";
    // Get static field: static System.String TrueLiteral
    static ::Il2CppString* _get_TrueLiteral();
    // Set static field: static System.String TrueLiteral
    static void _set_TrueLiteral(::Il2CppString* value);
    // static field const value: static System.String FalseLiteral
    static constexpr const char* FalseLiteral = "False";
    // Get static field: static System.String FalseLiteral
    static ::Il2CppString* _get_FalseLiteral();
    // Set static field: static System.String FalseLiteral
    static void _set_FalseLiteral(::Il2CppString* value);
    // Get static field: static public readonly System.String TrueString
    static ::Il2CppString* _get_TrueString();
    // Set static field: static public readonly System.String TrueString
    static void _set_TrueString(::Il2CppString* value);
    // Get static field: static public readonly System.String FalseString
    static ::Il2CppString* _get_FalseString();
    // Set static field: static public readonly System.String FalseString
    static void _set_FalseString(::Il2CppString* value);
    // public System.String ToString(System.IFormatProvider provider)
    // Offset: 0xEFD03C
    ::Il2CppString* ToString(System::IFormatProvider* provider);
    // public System.Boolean Equals(System.Boolean obj)
    // Offset: 0xEFD0A4
    bool Equals(bool obj);
    // public System.Int32 CompareTo(System.Object obj)
    // Offset: 0xEFD0B8
    int CompareTo(::Il2CppObject* obj);
    // public System.Int32 CompareTo(System.Boolean value)
    // Offset: 0xEFD0C0
    int CompareTo(bool value);
    // static public System.Boolean Parse(System.String value)
    // Offset: 0x177CCA0
    static bool Parse(::Il2CppString* value);
    // static public System.Boolean TryParse(System.String value, out System.Boolean result)
    // Offset: 0x177CDB0
    static bool TryParse(::Il2CppString* value, bool& result);
    // static private System.String TrimWhiteSpaceAndNull(System.String value)
    // Offset: 0x177CED4
    static ::Il2CppString* TrimWhiteSpaceAndNull(::Il2CppString* value);
    // public System.TypeCode GetTypeCode()
    // Offset: 0xEFD0E0
    System::TypeCode GetTypeCode();
    // private System.Boolean System.IConvertible.ToBoolean(System.IFormatProvider provider)
    // Offset: 0xEFD0E8
    bool System_IConvertible_ToBoolean(System::IFormatProvider* provider);
    // private System.Char System.IConvertible.ToChar(System.IFormatProvider provider)
    // Offset: 0xEFD0F8
    ::Il2CppChar System_IConvertible_ToChar(System::IFormatProvider* provider);
    // private System.SByte System.IConvertible.ToSByte(System.IFormatProvider provider)
    // Offset: 0xEFD104
    int8_t System_IConvertible_ToSByte(System::IFormatProvider* provider);
    // private System.Byte System.IConvertible.ToByte(System.IFormatProvider provider)
    // Offset: 0xEFD10C
    uint8_t System_IConvertible_ToByte(System::IFormatProvider* provider);
    // private System.Int16 System.IConvertible.ToInt16(System.IFormatProvider provider)
    // Offset: 0xEFD114
    int16_t System_IConvertible_ToInt16(System::IFormatProvider* provider);
    // private System.UInt16 System.IConvertible.ToUInt16(System.IFormatProvider provider)
    // Offset: 0xEFD11C
    uint16_t System_IConvertible_ToUInt16(System::IFormatProvider* provider);
    // private System.Int32 System.IConvertible.ToInt32(System.IFormatProvider provider)
    // Offset: 0xEFD124
    int System_IConvertible_ToInt32(System::IFormatProvider* provider);
    // private System.UInt32 System.IConvertible.ToUInt32(System.IFormatProvider provider)
    // Offset: 0xEFD12C
    uint System_IConvertible_ToUInt32(System::IFormatProvider* provider);
    // private System.Int64 System.IConvertible.ToInt64(System.IFormatProvider provider)
    // Offset: 0xEFD134
    int64_t System_IConvertible_ToInt64(System::IFormatProvider* provider);
    // private System.UInt64 System.IConvertible.ToUInt64(System.IFormatProvider provider)
    // Offset: 0xEFD13C
    uint64_t System_IConvertible_ToUInt64(System::IFormatProvider* provider);
    // private System.Single System.IConvertible.ToSingle(System.IFormatProvider provider)
    // Offset: 0xEFD144
    float System_IConvertible_ToSingle(System::IFormatProvider* provider);
    // private System.Double System.IConvertible.ToDouble(System.IFormatProvider provider)
    // Offset: 0xEFD14C
    double System_IConvertible_ToDouble(System::IFormatProvider* provider);
    // private System.Decimal System.IConvertible.ToDecimal(System.IFormatProvider provider)
    // Offset: 0xEFD154
    System::Decimal System_IConvertible_ToDecimal(System::IFormatProvider* provider);
    // private System.DateTime System.IConvertible.ToDateTime(System.IFormatProvider provider)
    // Offset: 0xEFD15C
    System::DateTime System_IConvertible_ToDateTime(System::IFormatProvider* provider);
    // private System.Object System.IConvertible.ToType(System.Type type, System.IFormatProvider provider)
    // Offset: 0xEFD168
    ::Il2CppObject* System_IConvertible_ToType(System::Type* type, System::IFormatProvider* provider);
    // static private System.Void .cctor()
    // Offset: 0x177D86C
    static void _cctor();
    // public override System.Int32 GetHashCode()
    // Offset: 0xEFBFCC
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
    // public override System.String ToString()
    // Offset: 0xEFBFDC
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::Il2CppString* ToString();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0xEFD09C
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
  }; // System.Boolean
  #pragma pack(pop)
  static check_size<sizeof(Boolean), 0 + sizeof(bool)> __System_BooleanSizeCheck;
  static_assert(sizeof(Boolean) == 0x1);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Boolean, "System", "Boolean");
// Writing MetadataGetter for method: System::Boolean::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Boolean::*)(System::IFormatProvider*)>(&System::Boolean::ToString)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Boolean), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::IFormatProvider*>()});
  }
};
// Writing MetadataGetter for method: System::Boolean::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Boolean::*)(bool)>(&System::Boolean::Equals)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Boolean), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<bool>()});
  }
};
// Writing MetadataGetter for method: System::Boolean::CompareTo
// Il2CppName: CompareTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Boolean::*)(::Il2CppObject*)>(&System::Boolean::CompareTo)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Boolean), "CompareTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>()});
  }
};
// Writing MetadataGetter for method: System::Boolean::CompareTo
// Il2CppName: CompareTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Boolean::*)(bool)>(&System::Boolean::CompareTo)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Boolean), "CompareTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<bool>()});
  }
};
// Writing MetadataGetter for method: System::Boolean::Parse
// Il2CppName: Parse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Il2CppString*)>(&System::Boolean::Parse)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Boolean), "Parse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: System::Boolean::TryParse
// Il2CppName: TryParse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Il2CppString*, bool&)>(&System::Boolean::TryParse)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Boolean), "TryParse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<bool&>()});
  }
};
// Writing MetadataGetter for method: System::Boolean::TrimWhiteSpaceAndNull
// Il2CppName: TrimWhiteSpaceAndNull
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(::Il2CppString*)>(&System::Boolean::TrimWhiteSpaceAndNull)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Boolean), "TrimWhiteSpaceAndNull", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: System::Boolean::GetTypeCode
// Il2CppName: GetTypeCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::TypeCode (System::Boolean::*)()>(&System::Boolean::GetTypeCode)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Boolean), "GetTypeCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Boolean::System_IConvertible_ToBoolean
// Il2CppName: System.IConvertible.ToBoolean
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Boolean::*)(System::IFormatProvider*)>(&System::Boolean::System_IConvertible_ToBoolean)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Boolean), "System.IConvertible.ToBoolean", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::IFormatProvider*>()});
  }
};
// Writing MetadataGetter for method: System::Boolean::System_IConvertible_ToChar
// Il2CppName: System.IConvertible.ToChar
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppChar (System::Boolean::*)(System::IFormatProvider*)>(&System::Boolean::System_IConvertible_ToChar)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Boolean), "System.IConvertible.ToChar", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::IFormatProvider*>()});
  }
};
// Writing MetadataGetter for method: System::Boolean::System_IConvertible_ToSByte
// Il2CppName: System.IConvertible.ToSByte
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int8_t (System::Boolean::*)(System::IFormatProvider*)>(&System::Boolean::System_IConvertible_ToSByte)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Boolean), "System.IConvertible.ToSByte", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::IFormatProvider*>()});
  }
};
// Writing MetadataGetter for method: System::Boolean::System_IConvertible_ToByte
// Il2CppName: System.IConvertible.ToByte
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (System::Boolean::*)(System::IFormatProvider*)>(&System::Boolean::System_IConvertible_ToByte)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Boolean), "System.IConvertible.ToByte", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::IFormatProvider*>()});
  }
};
// Writing MetadataGetter for method: System::Boolean::System_IConvertible_ToInt16
// Il2CppName: System.IConvertible.ToInt16
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int16_t (System::Boolean::*)(System::IFormatProvider*)>(&System::Boolean::System_IConvertible_ToInt16)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Boolean), "System.IConvertible.ToInt16", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::IFormatProvider*>()});
  }
};
// Writing MetadataGetter for method: System::Boolean::System_IConvertible_ToUInt16
// Il2CppName: System.IConvertible.ToUInt16
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint16_t (System::Boolean::*)(System::IFormatProvider*)>(&System::Boolean::System_IConvertible_ToUInt16)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Boolean), "System.IConvertible.ToUInt16", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::IFormatProvider*>()});
  }
};
// Writing MetadataGetter for method: System::Boolean::System_IConvertible_ToInt32
// Il2CppName: System.IConvertible.ToInt32
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Boolean::*)(System::IFormatProvider*)>(&System::Boolean::System_IConvertible_ToInt32)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Boolean), "System.IConvertible.ToInt32", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::IFormatProvider*>()});
  }
};
// Writing MetadataGetter for method: System::Boolean::System_IConvertible_ToUInt32
// Il2CppName: System.IConvertible.ToUInt32
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (System::Boolean::*)(System::IFormatProvider*)>(&System::Boolean::System_IConvertible_ToUInt32)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Boolean), "System.IConvertible.ToUInt32", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::IFormatProvider*>()});
  }
};
// Writing MetadataGetter for method: System::Boolean::System_IConvertible_ToInt64
// Il2CppName: System.IConvertible.ToInt64
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (System::Boolean::*)(System::IFormatProvider*)>(&System::Boolean::System_IConvertible_ToInt64)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Boolean), "System.IConvertible.ToInt64", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::IFormatProvider*>()});
  }
};
// Writing MetadataGetter for method: System::Boolean::System_IConvertible_ToUInt64
// Il2CppName: System.IConvertible.ToUInt64
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (System::Boolean::*)(System::IFormatProvider*)>(&System::Boolean::System_IConvertible_ToUInt64)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Boolean), "System.IConvertible.ToUInt64", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::IFormatProvider*>()});
  }
};
// Writing MetadataGetter for method: System::Boolean::System_IConvertible_ToSingle
// Il2CppName: System.IConvertible.ToSingle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (System::Boolean::*)(System::IFormatProvider*)>(&System::Boolean::System_IConvertible_ToSingle)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Boolean), "System.IConvertible.ToSingle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::IFormatProvider*>()});
  }
};
// Writing MetadataGetter for method: System::Boolean::System_IConvertible_ToDouble
// Il2CppName: System.IConvertible.ToDouble
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double (System::Boolean::*)(System::IFormatProvider*)>(&System::Boolean::System_IConvertible_ToDouble)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Boolean), "System.IConvertible.ToDouble", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::IFormatProvider*>()});
  }
};
// Writing MetadataGetter for method: System::Boolean::System_IConvertible_ToDecimal
// Il2CppName: System.IConvertible.ToDecimal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Decimal (System::Boolean::*)(System::IFormatProvider*)>(&System::Boolean::System_IConvertible_ToDecimal)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Boolean), "System.IConvertible.ToDecimal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::IFormatProvider*>()});
  }
};
// Writing MetadataGetter for method: System::Boolean::System_IConvertible_ToDateTime
// Il2CppName: System.IConvertible.ToDateTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::DateTime (System::Boolean::*)(System::IFormatProvider*)>(&System::Boolean::System_IConvertible_ToDateTime)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Boolean), "System.IConvertible.ToDateTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::IFormatProvider*>()});
  }
};
// Writing MetadataGetter for method: System::Boolean::System_IConvertible_ToType
// Il2CppName: System.IConvertible.ToType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Boolean::*)(System::Type*, System::IFormatProvider*)>(&System::Boolean::System_IConvertible_ToType)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Boolean), "System.IConvertible.ToType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Type*>(), ::il2cpp_utils::ExtractIndependentType<System::IFormatProvider*>()});
  }
};
// Writing MetadataGetter for method: System::Boolean::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Boolean::_cctor)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Boolean), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Boolean::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Boolean::*)()>(&System::Boolean::GetHashCode)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Boolean), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Boolean::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Boolean::*)()>(&System::Boolean::ToString)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Boolean), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Boolean::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Boolean::*)(::Il2CppObject*)>(&System::Boolean::Equals)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Boolean), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>()});
  }
};
