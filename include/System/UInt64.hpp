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
// Including type: System.IFormattable
#include "System/IFormattable.hpp"
// Including type: System.IConvertible
#include "System/IConvertible.hpp"
// Including type: System.IComparable`1
#include "System/IComparable_1.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Globalization
namespace System::Globalization {
  // Forward declaring type: NumberStyles
  struct NumberStyles;
}
// Forward declaring namespace: System
namespace System {
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
  // Autogenerated type: System.UInt64
  struct UInt64 : public System::ValueType, public System::IComparable, public System::IFormattable, public System::IConvertible, public System::IComparable_1<uint64_t>, public System::IEquatable_1<uint64_t> {
    public:
    // private System.UInt64 m_value
    // Offset: 0x0
    uint64_t m_value;
    // Creating value type constructor for type: UInt64
    constexpr UInt64(uint64_t m_value_ = {}) noexcept : m_value{m_value_} {}
    // Creating conversion operator: operator uint64_t
    constexpr operator uint64_t() const noexcept {
      return m_value;
    }
    // static field const value: static public System.UInt64 MaxValue
    static constexpr const uint64_t MaxValue = 18446744073709551615u;
    // Get static field: static public System.UInt64 MaxValue
    static uint64_t _get_MaxValue();
    // Set static field: static public System.UInt64 MaxValue
    static void _set_MaxValue(uint64_t value);
    // static field const value: static public System.UInt64 MinValue
    static constexpr const uint64_t MinValue = 0u;
    // Get static field: static public System.UInt64 MinValue
    static uint64_t _get_MinValue();
    // Set static field: static public System.UInt64 MinValue
    static void _set_MinValue(uint64_t value);
    // public System.String ToString(System.String format)
    // Offset: 0xC749A8
    ::Il2CppString* ToString(::Il2CppString* format);
    // static public System.UInt64 Parse(System.String s)
    // Offset: 0x170C5EC
    static uint64_t Parse(::Il2CppString* s);
    // static public System.UInt64 Parse(System.String s, System.Globalization.NumberStyles style)
    // Offset: 0x170C620
    static uint64_t Parse(::Il2CppString* s, System::Globalization::NumberStyles style);
    // static public System.UInt64 Parse(System.String s, System.IFormatProvider provider)
    // Offset: 0x170C664
    static uint64_t Parse(::Il2CppString* s, System::IFormatProvider* provider);
    // static public System.UInt64 Parse(System.String s, System.Globalization.NumberStyles style, System.IFormatProvider provider)
    // Offset: 0x170C69C
    static uint64_t Parse(::Il2CppString* s, System::Globalization::NumberStyles style, System::IFormatProvider* provider);
    // public System.Int32 CompareTo(System.Object value)
    // Offset: 0xC748FC
    // Implemented from: System.IComparable
    // Base method: System.Int32 IComparable::CompareTo(System.Object value)
    int CompareTo(::Il2CppObject* value);
    // Creating proxy method: System_IComparable_CompareTo
    // Maps to method: CompareTo
    int System_IComparable_CompareTo(::Il2CppObject* value);
    // public System.Int32 CompareTo(System.UInt64 value)
    // Offset: 0xC74904
    // Implemented from: System.IComparable`1
    // Base method: System.Int32 IComparable_1::CompareTo(System.UInt64 value)
    int CompareTo(uint64_t value);
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0xC74918
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public System.Boolean Equals(System.UInt64 obj)
    // Offset: 0xC74920
    // Implemented from: System.IEquatable`1
    // Base method: System.Boolean IEquatable_1::Equals(System.UInt64 obj)
    bool Equals(uint64_t obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0xC74930
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
    // public override System.String ToString()
    // Offset: 0xC7493C
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::Il2CppString* ToString();
    // public System.String ToString(System.IFormatProvider provider)
    // Offset: 0xC74970
    // Implemented from: System.IConvertible
    // Base method: System.String IConvertible::ToString(System.IFormatProvider provider)
    ::Il2CppString* ToString(System::IFormatProvider* provider);
    // public System.String ToString(System.String format, System.IFormatProvider provider)
    // Offset: 0xC749E0
    // Implemented from: System.IFormattable
    // Base method: System.String IFormattable::ToString(System.String format, System.IFormatProvider provider)
    ::Il2CppString* ToString(::Il2CppString* format, System::IFormatProvider* provider);
    // public System.TypeCode GetTypeCode()
    // Offset: 0xC74A1C
    // Implemented from: System.IConvertible
    // Base method: System.TypeCode IConvertible::GetTypeCode()
    System::TypeCode GetTypeCode();
    // private System.Boolean System.IConvertible.ToBoolean(System.IFormatProvider provider)
    // Offset: 0xC74A24
    // Implemented from: System.IConvertible
    // Base method: System.Boolean IConvertible::ToBoolean(System.IFormatProvider provider)
    bool System_IConvertible_ToBoolean(System::IFormatProvider* provider);
    // private System.Char System.IConvertible.ToChar(System.IFormatProvider provider)
    // Offset: 0xC74A2C
    // Implemented from: System.IConvertible
    // Base method: System.Char IConvertible::ToChar(System.IFormatProvider provider)
    ::Il2CppChar System_IConvertible_ToChar(System::IFormatProvider* provider);
    // private System.SByte System.IConvertible.ToSByte(System.IFormatProvider provider)
    // Offset: 0xC74A34
    // Implemented from: System.IConvertible
    // Base method: System.SByte IConvertible::ToSByte(System.IFormatProvider provider)
    int8_t System_IConvertible_ToSByte(System::IFormatProvider* provider);
    // private System.Byte System.IConvertible.ToByte(System.IFormatProvider provider)
    // Offset: 0xC74A3C
    // Implemented from: System.IConvertible
    // Base method: System.Byte IConvertible::ToByte(System.IFormatProvider provider)
    uint8_t System_IConvertible_ToByte(System::IFormatProvider* provider);
    // private System.Int16 System.IConvertible.ToInt16(System.IFormatProvider provider)
    // Offset: 0xC74A44
    // Implemented from: System.IConvertible
    // Base method: System.Int16 IConvertible::ToInt16(System.IFormatProvider provider)
    int16_t System_IConvertible_ToInt16(System::IFormatProvider* provider);
    // private System.UInt16 System.IConvertible.ToUInt16(System.IFormatProvider provider)
    // Offset: 0xC74A4C
    // Implemented from: System.IConvertible
    // Base method: System.UInt16 IConvertible::ToUInt16(System.IFormatProvider provider)
    uint16_t System_IConvertible_ToUInt16(System::IFormatProvider* provider);
    // private System.Int32 System.IConvertible.ToInt32(System.IFormatProvider provider)
    // Offset: 0xC74A54
    // Implemented from: System.IConvertible
    // Base method: System.Int32 IConvertible::ToInt32(System.IFormatProvider provider)
    int System_IConvertible_ToInt32(System::IFormatProvider* provider);
    // private System.UInt32 System.IConvertible.ToUInt32(System.IFormatProvider provider)
    // Offset: 0xC74A5C
    // Implemented from: System.IConvertible
    // Base method: System.UInt32 IConvertible::ToUInt32(System.IFormatProvider provider)
    uint System_IConvertible_ToUInt32(System::IFormatProvider* provider);
    // private System.Int64 System.IConvertible.ToInt64(System.IFormatProvider provider)
    // Offset: 0xC74A64
    // Implemented from: System.IConvertible
    // Base method: System.Int64 IConvertible::ToInt64(System.IFormatProvider provider)
    int64_t System_IConvertible_ToInt64(System::IFormatProvider* provider);
    // private System.UInt64 System.IConvertible.ToUInt64(System.IFormatProvider provider)
    // Offset: 0xC74A6C
    // Implemented from: System.IConvertible
    // Base method: System.UInt64 IConvertible::ToUInt64(System.IFormatProvider provider)
    uint64_t System_IConvertible_ToUInt64(System::IFormatProvider* provider);
    // private System.Single System.IConvertible.ToSingle(System.IFormatProvider provider)
    // Offset: 0xC74A74
    // Implemented from: System.IConvertible
    // Base method: System.Single IConvertible::ToSingle(System.IFormatProvider provider)
    float System_IConvertible_ToSingle(System::IFormatProvider* provider);
    // private System.Double System.IConvertible.ToDouble(System.IFormatProvider provider)
    // Offset: 0xC74A7C
    // Implemented from: System.IConvertible
    // Base method: System.Double IConvertible::ToDouble(System.IFormatProvider provider)
    double System_IConvertible_ToDouble(System::IFormatProvider* provider);
    // private System.Decimal System.IConvertible.ToDecimal(System.IFormatProvider provider)
    // Offset: 0xC74A84
    // Implemented from: System.IConvertible
    // Base method: System.Decimal IConvertible::ToDecimal(System.IFormatProvider provider)
    System::Decimal System_IConvertible_ToDecimal(System::IFormatProvider* provider);
    // private System.DateTime System.IConvertible.ToDateTime(System.IFormatProvider provider)
    // Offset: 0xC74A8C
    // Implemented from: System.IConvertible
    // Base method: System.DateTime IConvertible::ToDateTime(System.IFormatProvider provider)
    System::DateTime System_IConvertible_ToDateTime(System::IFormatProvider* provider);
    // private System.Object System.IConvertible.ToType(System.Type type, System.IFormatProvider provider)
    // Offset: 0xC74A98
    // Implemented from: System.IConvertible
    // Base method: System.Object IConvertible::ToType(System.Type type, System.IFormatProvider provider)
    ::Il2CppObject* System_IConvertible_ToType(System::Type* type, System::IFormatProvider* provider);
  }; // System.UInt64
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::UInt64, "System", "UInt64");
#pragma pack(pop)
