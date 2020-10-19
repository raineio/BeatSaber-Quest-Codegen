// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
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
  // Autogenerated type: System.Boolean
  struct Boolean : public System::ValueType, public System::IComparable, public System::IConvertible, public System::IComparable_1<bool>, public System::IEquatable_1<bool> {
    public:
    // private System.Boolean m_value
    // Offset: 0x0
    bool m_value;
    // Creating value type constructor for type: Boolean
    constexpr Boolean(bool m_value_ = {}) noexcept : m_value{m_value_} {}
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
    // static public System.Boolean Parse(System.String value)
    // Offset: 0x13A33E4
    static bool Parse(::Il2CppString* value);
    // static public System.Boolean TryParse(System.String value, out System.Boolean result)
    // Offset: 0x13A34F4
    static bool TryParse(::Il2CppString* value, bool& result);
    // static private System.String TrimWhiteSpaceAndNull(System.String value)
    // Offset: 0x13A3618
    static ::Il2CppString* TrimWhiteSpaceAndNull(::Il2CppString* value);
    // static private System.Void .cctor()
    // Offset: 0x13A3FB0
    static void _cctor();
    // public override System.Int32 GetHashCode()
    // Offset: 0xC6EEC8
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
    // public override System.String ToString()
    // Offset: 0xC6EED8
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::Il2CppString* ToString();
    // public System.String ToString(System.IFormatProvider provider)
    // Offset: 0xC6EF38
    // Implemented from: System.IConvertible
    // Base method: System.String IConvertible::ToString(System.IFormatProvider provider)
    ::Il2CppString* ToString(System::IFormatProvider* provider);
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0xC6EF98
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public System.Boolean Equals(System.Boolean obj)
    // Offset: 0xC6EFA0
    // Implemented from: System.IEquatable`1
    // Base method: System.Boolean IEquatable_1::Equals(System.Boolean obj)
    bool Equals(bool obj);
    // public System.Int32 CompareTo(System.Object obj)
    // Offset: 0xC6EFB4
    // Implemented from: System.IComparable
    // Base method: System.Int32 IComparable::CompareTo(System.Object obj)
    int CompareTo(::Il2CppObject* obj);
    // Creating proxy method: System_IComparable_CompareTo
    // Maps to method: CompareTo
    int System_IComparable_CompareTo(::Il2CppObject* obj);
    // public System.Int32 CompareTo(System.Boolean value)
    // Offset: 0xC6EFBC
    // Implemented from: System.IComparable`1
    // Base method: System.Int32 IComparable_1::CompareTo(System.Boolean value)
    int CompareTo(bool value);
    // public System.TypeCode GetTypeCode()
    // Offset: 0xC6EFDC
    // Implemented from: System.IConvertible
    // Base method: System.TypeCode IConvertible::GetTypeCode()
    System::TypeCode GetTypeCode();
    // private System.Boolean System.IConvertible.ToBoolean(System.IFormatProvider provider)
    // Offset: 0xC6EFE4
    // Implemented from: System.IConvertible
    // Base method: System.Boolean IConvertible::ToBoolean(System.IFormatProvider provider)
    bool System_IConvertible_ToBoolean(System::IFormatProvider* provider);
    // private System.Char System.IConvertible.ToChar(System.IFormatProvider provider)
    // Offset: 0xC6EFF4
    // Implemented from: System.IConvertible
    // Base method: System.Char IConvertible::ToChar(System.IFormatProvider provider)
    ::Il2CppChar System_IConvertible_ToChar(System::IFormatProvider* provider);
    // private System.SByte System.IConvertible.ToSByte(System.IFormatProvider provider)
    // Offset: 0xC6F000
    // Implemented from: System.IConvertible
    // Base method: System.SByte IConvertible::ToSByte(System.IFormatProvider provider)
    int8_t System_IConvertible_ToSByte(System::IFormatProvider* provider);
    // private System.Byte System.IConvertible.ToByte(System.IFormatProvider provider)
    // Offset: 0xC6F008
    // Implemented from: System.IConvertible
    // Base method: System.Byte IConvertible::ToByte(System.IFormatProvider provider)
    uint8_t System_IConvertible_ToByte(System::IFormatProvider* provider);
    // private System.Int16 System.IConvertible.ToInt16(System.IFormatProvider provider)
    // Offset: 0xC6F010
    // Implemented from: System.IConvertible
    // Base method: System.Int16 IConvertible::ToInt16(System.IFormatProvider provider)
    int16_t System_IConvertible_ToInt16(System::IFormatProvider* provider);
    // private System.UInt16 System.IConvertible.ToUInt16(System.IFormatProvider provider)
    // Offset: 0xC6F018
    // Implemented from: System.IConvertible
    // Base method: System.UInt16 IConvertible::ToUInt16(System.IFormatProvider provider)
    uint16_t System_IConvertible_ToUInt16(System::IFormatProvider* provider);
    // private System.Int32 System.IConvertible.ToInt32(System.IFormatProvider provider)
    // Offset: 0xC6F020
    // Implemented from: System.IConvertible
    // Base method: System.Int32 IConvertible::ToInt32(System.IFormatProvider provider)
    int System_IConvertible_ToInt32(System::IFormatProvider* provider);
    // private System.UInt32 System.IConvertible.ToUInt32(System.IFormatProvider provider)
    // Offset: 0xC6F028
    // Implemented from: System.IConvertible
    // Base method: System.UInt32 IConvertible::ToUInt32(System.IFormatProvider provider)
    uint System_IConvertible_ToUInt32(System::IFormatProvider* provider);
    // private System.Int64 System.IConvertible.ToInt64(System.IFormatProvider provider)
    // Offset: 0xC6F030
    // Implemented from: System.IConvertible
    // Base method: System.Int64 IConvertible::ToInt64(System.IFormatProvider provider)
    int64_t System_IConvertible_ToInt64(System::IFormatProvider* provider);
    // private System.UInt64 System.IConvertible.ToUInt64(System.IFormatProvider provider)
    // Offset: 0xC6F038
    // Implemented from: System.IConvertible
    // Base method: System.UInt64 IConvertible::ToUInt64(System.IFormatProvider provider)
    uint64_t System_IConvertible_ToUInt64(System::IFormatProvider* provider);
    // private System.Single System.IConvertible.ToSingle(System.IFormatProvider provider)
    // Offset: 0xC6F040
    // Implemented from: System.IConvertible
    // Base method: System.Single IConvertible::ToSingle(System.IFormatProvider provider)
    float System_IConvertible_ToSingle(System::IFormatProvider* provider);
    // private System.Double System.IConvertible.ToDouble(System.IFormatProvider provider)
    // Offset: 0xC6F048
    // Implemented from: System.IConvertible
    // Base method: System.Double IConvertible::ToDouble(System.IFormatProvider provider)
    double System_IConvertible_ToDouble(System::IFormatProvider* provider);
    // private System.Decimal System.IConvertible.ToDecimal(System.IFormatProvider provider)
    // Offset: 0xC6F050
    // Implemented from: System.IConvertible
    // Base method: System.Decimal IConvertible::ToDecimal(System.IFormatProvider provider)
    System::Decimal System_IConvertible_ToDecimal(System::IFormatProvider* provider);
    // private System.DateTime System.IConvertible.ToDateTime(System.IFormatProvider provider)
    // Offset: 0xC6F058
    // Implemented from: System.IConvertible
    // Base method: System.DateTime IConvertible::ToDateTime(System.IFormatProvider provider)
    System::DateTime System_IConvertible_ToDateTime(System::IFormatProvider* provider);
    // private System.Object System.IConvertible.ToType(System.Type type, System.IFormatProvider provider)
    // Offset: 0xC6F064
    // Implemented from: System.IConvertible
    // Base method: System.Object IConvertible::ToType(System.Type type, System.IFormatProvider provider)
    ::Il2CppObject* System_IConvertible_ToType(System::Type* type, System::IFormatProvider* provider);
  }; // System.Boolean
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Boolean, "System", "Boolean");
#pragma pack(pop)
