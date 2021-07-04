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
// Forward declaring namespace: System::Globalization
namespace System::Globalization {
  // Forward declaring type: NumberStyles
  struct NumberStyles;
  // Forward declaring type: NumberFormatInfo
  class NumberFormatInfo;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Size: 0x8
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.Double
  // [ComVisibleAttribute] Offset: D7A5B8
  struct Double/*, public System::ValueType, public System::IComparable, public System::IFormattable, public System::IConvertible, public System::IComparable_1<double>, public System::IEquatable_1<double>*/ {
    public:
    // System.Double m_value
    // Size: 0x8
    // Offset: 0x0
    double m_value;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    // Creating value type constructor for type: Double
    constexpr Double(double m_value_ = {}) noexcept : m_value{m_value_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator System::IComparable
    operator System::IComparable() noexcept {
      return *reinterpret_cast<System::IComparable*>(this);
    }
    // Creating interface conversion operator: operator System::IFormattable
    operator System::IFormattable() noexcept {
      return *reinterpret_cast<System::IFormattable*>(this);
    }
    // Creating interface conversion operator: operator System::IConvertible
    operator System::IConvertible() noexcept {
      return *reinterpret_cast<System::IConvertible*>(this);
    }
    // Creating interface conversion operator: operator System::IComparable_1<double>
    operator System::IComparable_1<double>() noexcept {
      return *reinterpret_cast<System::IComparable_1<double>*>(this);
    }
    // Creating interface conversion operator: operator System::IEquatable_1<double>
    operator System::IEquatable_1<double>() noexcept {
      return *reinterpret_cast<System::IEquatable_1<double>*>(this);
    }
    // Creating conversion operator: operator double
    constexpr operator double() const noexcept {
      return m_value;
    }
    // static field const value: static public System.Double MinValue
    static constexpr const double MinValue = -1.7976931348623157e+308;
    // Get static field: static public System.Double MinValue
    static double _get_MinValue();
    // Set static field: static public System.Double MinValue
    static void _set_MinValue(double value);
    // static field const value: static public System.Double MaxValue
    static constexpr const double MaxValue = 1.7976931348623157e+308;
    // Get static field: static public System.Double MaxValue
    static double _get_MaxValue();
    // Set static field: static public System.Double MaxValue
    static void _set_MaxValue(double value);
    // static field const value: static public System.Double Epsilon
    static constexpr const double Epsilon = 5e-324;
    // Get static field: static public System.Double Epsilon
    static double _get_Epsilon();
    // Set static field: static public System.Double Epsilon
    static void _set_Epsilon(double value);
    // Get static field: static public System.Double NegativeInfinity
    static double _get_NegativeInfinity();
    // Set static field: static public System.Double NegativeInfinity
    static void _set_NegativeInfinity(double value);
    // Get static field: static public System.Double PositiveInfinity
    static double _get_PositiveInfinity();
    // Set static field: static public System.Double PositiveInfinity
    static void _set_PositiveInfinity(double value);
    // Get static field: static public System.Double NaN
    static double _get_NaN();
    // Set static field: static public System.Double NaN
    static void _set_NaN(double value);
    // Get static field: static System.Double NegativeZero
    static double _get_NegativeZero();
    // Set static field: static System.Double NegativeZero
    static void _set_NegativeZero(double value);
    // static public System.Boolean IsInfinity(System.Double d)
    // Offset: 0x17A77D8
    static bool IsInfinity(double d);
    // static public System.Boolean IsPositiveInfinity(System.Double d)
    // Offset: 0x17A77F0
    static bool IsPositiveInfinity(double d);
    // static public System.Boolean IsNegativeInfinity(System.Double d)
    // Offset: 0x17A7804
    static bool IsNegativeInfinity(double d);
    // static public System.Boolean IsNaN(System.Double d)
    // Offset: 0x17A7818
    static bool IsNaN(double d);
    // public System.Int32 CompareTo(System.Object value)
    // Offset: 0xEFD608
    int CompareTo(::Il2CppObject* value);
    // public System.Int32 CompareTo(System.Double value)
    // Offset: 0xEFD610
    int CompareTo(double value);
    // public System.Boolean Equals(System.Double obj)
    // Offset: 0xEFD620
    bool Equals(double obj);
    // public System.String ToString(System.String format)
    // Offset: 0xEFD668
    ::Il2CppString* ToString(::Il2CppString* format);
    // public System.String ToString(System.IFormatProvider provider)
    // Offset: 0xEFD6A8
    ::Il2CppString* ToString(System::IFormatProvider* provider);
    // public System.String ToString(System.String format, System.IFormatProvider provider)
    // Offset: 0xEFD6E0
    ::Il2CppString* ToString(::Il2CppString* format, System::IFormatProvider* provider);
    // static public System.Double Parse(System.String s)
    // Offset: 0x17A7D18
    static double Parse(::Il2CppString* s);
    // static public System.Double Parse(System.String s, System.IFormatProvider provider)
    // Offset: 0x17A7DA0
    static double Parse(::Il2CppString* s, System::IFormatProvider* provider);
    // static public System.Double Parse(System.String s, System.Globalization.NumberStyles style, System.IFormatProvider provider)
    // Offset: 0x17A7E30
    static double Parse(::Il2CppString* s, System::Globalization::NumberStyles style, System::IFormatProvider* provider);
    // static private System.Double Parse(System.String s, System.Globalization.NumberStyles style, System.Globalization.NumberFormatInfo info)
    // Offset: 0x17A7D98
    static double Parse(::Il2CppString* s, System::Globalization::NumberStyles style, System::Globalization::NumberFormatInfo* info);
    // static public System.Boolean TryParse(System.String s, System.Globalization.NumberStyles style, System.IFormatProvider provider, out System.Double result)
    // Offset: 0x17A7ED0
    static bool TryParse(::Il2CppString* s, System::Globalization::NumberStyles style, System::IFormatProvider* provider, double& result);
    // static private System.Boolean TryParse(System.String s, System.Globalization.NumberStyles style, System.Globalization.NumberFormatInfo info, out System.Double result)
    // Offset: 0x17A7F7C
    static bool TryParse(::Il2CppString* s, System::Globalization::NumberStyles style, System::Globalization::NumberFormatInfo* info, double& result);
    // public System.TypeCode GetTypeCode()
    // Offset: 0xEFD724
    System::TypeCode GetTypeCode();
    // private System.Boolean System.IConvertible.ToBoolean(System.IFormatProvider provider)
    // Offset: 0xEFD72C
    bool System_IConvertible_ToBoolean(System::IFormatProvider* provider);
    // private System.Char System.IConvertible.ToChar(System.IFormatProvider provider)
    // Offset: 0xEFD734
    ::Il2CppChar System_IConvertible_ToChar(System::IFormatProvider* provider);
    // private System.SByte System.IConvertible.ToSByte(System.IFormatProvider provider)
    // Offset: 0xEFD740
    int8_t System_IConvertible_ToSByte(System::IFormatProvider* provider);
    // private System.Byte System.IConvertible.ToByte(System.IFormatProvider provider)
    // Offset: 0xEFD748
    uint8_t System_IConvertible_ToByte(System::IFormatProvider* provider);
    // private System.Int16 System.IConvertible.ToInt16(System.IFormatProvider provider)
    // Offset: 0xEFD750
    int16_t System_IConvertible_ToInt16(System::IFormatProvider* provider);
    // private System.UInt16 System.IConvertible.ToUInt16(System.IFormatProvider provider)
    // Offset: 0xEFD758
    uint16_t System_IConvertible_ToUInt16(System::IFormatProvider* provider);
    // private System.Int32 System.IConvertible.ToInt32(System.IFormatProvider provider)
    // Offset: 0xEFD760
    int System_IConvertible_ToInt32(System::IFormatProvider* provider);
    // private System.UInt32 System.IConvertible.ToUInt32(System.IFormatProvider provider)
    // Offset: 0xEFD768
    uint System_IConvertible_ToUInt32(System::IFormatProvider* provider);
    // private System.Int64 System.IConvertible.ToInt64(System.IFormatProvider provider)
    // Offset: 0xEFD770
    int64_t System_IConvertible_ToInt64(System::IFormatProvider* provider);
    // private System.UInt64 System.IConvertible.ToUInt64(System.IFormatProvider provider)
    // Offset: 0xEFD778
    uint64_t System_IConvertible_ToUInt64(System::IFormatProvider* provider);
    // private System.Single System.IConvertible.ToSingle(System.IFormatProvider provider)
    // Offset: 0xEFD780
    float System_IConvertible_ToSingle(System::IFormatProvider* provider);
    // private System.Double System.IConvertible.ToDouble(System.IFormatProvider provider)
    // Offset: 0xEFD788
    double System_IConvertible_ToDouble(System::IFormatProvider* provider);
    // private System.Decimal System.IConvertible.ToDecimal(System.IFormatProvider provider)
    // Offset: 0xEFD790
    System::Decimal System_IConvertible_ToDecimal(System::IFormatProvider* provider);
    // private System.DateTime System.IConvertible.ToDateTime(System.IFormatProvider provider)
    // Offset: 0xEFD798
    System::DateTime System_IConvertible_ToDateTime(System::IFormatProvider* provider);
    // private System.Object System.IConvertible.ToType(System.Type type, System.IFormatProvider provider)
    // Offset: 0xEFD7A4
    ::Il2CppObject* System_IConvertible_ToType(System::Type* type, System::IFormatProvider* provider);
    // static private System.Void .cctor()
    // Offset: 0x17A8850
    static void _cctor();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0xEFD618
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0xEFD628
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
    // public override System.String ToString()
    // Offset: 0xEFD634
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::Il2CppString* ToString();
  }; // System.Double
  #pragma pack(pop)
  static check_size<sizeof(Double), 0 + sizeof(double)> __System_DoubleSizeCheck;
  static_assert(sizeof(Double) == 0x8);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Double, "System", "Double");
// Writing MetadataGetter for method: System::Double::IsInfinity
// Il2CppName: IsInfinity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(double)>(&System::Double::IsInfinity)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Double), "IsInfinity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<double>()});
  }
};
// Writing MetadataGetter for method: System::Double::IsPositiveInfinity
// Il2CppName: IsPositiveInfinity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(double)>(&System::Double::IsPositiveInfinity)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Double), "IsPositiveInfinity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<double>()});
  }
};
// Writing MetadataGetter for method: System::Double::IsNegativeInfinity
// Il2CppName: IsNegativeInfinity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(double)>(&System::Double::IsNegativeInfinity)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Double), "IsNegativeInfinity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<double>()});
  }
};
// Writing MetadataGetter for method: System::Double::IsNaN
// Il2CppName: IsNaN
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(double)>(&System::Double::IsNaN)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Double), "IsNaN", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<double>()});
  }
};
// Writing MetadataGetter for method: System::Double::CompareTo
// Il2CppName: CompareTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Double::*)(::Il2CppObject*)>(&System::Double::CompareTo)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Double), "CompareTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>()});
  }
};
// Writing MetadataGetter for method: System::Double::CompareTo
// Il2CppName: CompareTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Double::*)(double)>(&System::Double::CompareTo)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Double), "CompareTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<double>()});
  }
};
// Writing MetadataGetter for method: System::Double::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Double::*)(double)>(&System::Double::Equals)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Double), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<double>()});
  }
};
// Writing MetadataGetter for method: System::Double::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Double::*)(::Il2CppString*)>(&System::Double::ToString)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Double), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: System::Double::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Double::*)(System::IFormatProvider*)>(&System::Double::ToString)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Double), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::IFormatProvider*>()});
  }
};
// Writing MetadataGetter for method: System::Double::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Double::*)(::Il2CppString*, System::IFormatProvider*)>(&System::Double::ToString)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Double), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<System::IFormatProvider*>()});
  }
};
// Writing MetadataGetter for method: System::Double::Parse
// Il2CppName: Parse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double (*)(::Il2CppString*)>(&System::Double::Parse)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Double), "Parse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: System::Double::Parse
// Il2CppName: Parse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double (*)(::Il2CppString*, System::IFormatProvider*)>(&System::Double::Parse)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Double), "Parse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<System::IFormatProvider*>()});
  }
};
// Writing MetadataGetter for method: System::Double::Parse
// Il2CppName: Parse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double (*)(::Il2CppString*, System::Globalization::NumberStyles, System::IFormatProvider*)>(&System::Double::Parse)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Double), "Parse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<System::Globalization::NumberStyles>(), ::il2cpp_utils::ExtractIndependentType<System::IFormatProvider*>()});
  }
};
// Writing MetadataGetter for method: System::Double::Parse
// Il2CppName: Parse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double (*)(::Il2CppString*, System::Globalization::NumberStyles, System::Globalization::NumberFormatInfo*)>(&System::Double::Parse)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Double), "Parse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<System::Globalization::NumberStyles>(), ::il2cpp_utils::ExtractIndependentType<System::Globalization::NumberFormatInfo*>()});
  }
};
// Writing MetadataGetter for method: System::Double::TryParse
// Il2CppName: TryParse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Il2CppString*, System::Globalization::NumberStyles, System::IFormatProvider*, double&)>(&System::Double::TryParse)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Double), "TryParse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<System::Globalization::NumberStyles>(), ::il2cpp_utils::ExtractIndependentType<System::IFormatProvider*>(), ::il2cpp_utils::ExtractIndependentType<double&>()});
  }
};
// Writing MetadataGetter for method: System::Double::TryParse
// Il2CppName: TryParse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Il2CppString*, System::Globalization::NumberStyles, System::Globalization::NumberFormatInfo*, double&)>(&System::Double::TryParse)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Double), "TryParse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<System::Globalization::NumberStyles>(), ::il2cpp_utils::ExtractIndependentType<System::Globalization::NumberFormatInfo*>(), ::il2cpp_utils::ExtractIndependentType<double&>()});
  }
};
// Writing MetadataGetter for method: System::Double::GetTypeCode
// Il2CppName: GetTypeCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::TypeCode (System::Double::*)()>(&System::Double::GetTypeCode)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Double), "GetTypeCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Double::System_IConvertible_ToBoolean
// Il2CppName: System.IConvertible.ToBoolean
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Double::*)(System::IFormatProvider*)>(&System::Double::System_IConvertible_ToBoolean)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Double), "System.IConvertible.ToBoolean", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::IFormatProvider*>()});
  }
};
// Writing MetadataGetter for method: System::Double::System_IConvertible_ToChar
// Il2CppName: System.IConvertible.ToChar
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppChar (System::Double::*)(System::IFormatProvider*)>(&System::Double::System_IConvertible_ToChar)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Double), "System.IConvertible.ToChar", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::IFormatProvider*>()});
  }
};
// Writing MetadataGetter for method: System::Double::System_IConvertible_ToSByte
// Il2CppName: System.IConvertible.ToSByte
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int8_t (System::Double::*)(System::IFormatProvider*)>(&System::Double::System_IConvertible_ToSByte)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Double), "System.IConvertible.ToSByte", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::IFormatProvider*>()});
  }
};
// Writing MetadataGetter for method: System::Double::System_IConvertible_ToByte
// Il2CppName: System.IConvertible.ToByte
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (System::Double::*)(System::IFormatProvider*)>(&System::Double::System_IConvertible_ToByte)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Double), "System.IConvertible.ToByte", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::IFormatProvider*>()});
  }
};
// Writing MetadataGetter for method: System::Double::System_IConvertible_ToInt16
// Il2CppName: System.IConvertible.ToInt16
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int16_t (System::Double::*)(System::IFormatProvider*)>(&System::Double::System_IConvertible_ToInt16)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Double), "System.IConvertible.ToInt16", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::IFormatProvider*>()});
  }
};
// Writing MetadataGetter for method: System::Double::System_IConvertible_ToUInt16
// Il2CppName: System.IConvertible.ToUInt16
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint16_t (System::Double::*)(System::IFormatProvider*)>(&System::Double::System_IConvertible_ToUInt16)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Double), "System.IConvertible.ToUInt16", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::IFormatProvider*>()});
  }
};
// Writing MetadataGetter for method: System::Double::System_IConvertible_ToInt32
// Il2CppName: System.IConvertible.ToInt32
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Double::*)(System::IFormatProvider*)>(&System::Double::System_IConvertible_ToInt32)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Double), "System.IConvertible.ToInt32", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::IFormatProvider*>()});
  }
};
// Writing MetadataGetter for method: System::Double::System_IConvertible_ToUInt32
// Il2CppName: System.IConvertible.ToUInt32
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (System::Double::*)(System::IFormatProvider*)>(&System::Double::System_IConvertible_ToUInt32)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Double), "System.IConvertible.ToUInt32", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::IFormatProvider*>()});
  }
};
// Writing MetadataGetter for method: System::Double::System_IConvertible_ToInt64
// Il2CppName: System.IConvertible.ToInt64
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (System::Double::*)(System::IFormatProvider*)>(&System::Double::System_IConvertible_ToInt64)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Double), "System.IConvertible.ToInt64", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::IFormatProvider*>()});
  }
};
// Writing MetadataGetter for method: System::Double::System_IConvertible_ToUInt64
// Il2CppName: System.IConvertible.ToUInt64
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (System::Double::*)(System::IFormatProvider*)>(&System::Double::System_IConvertible_ToUInt64)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Double), "System.IConvertible.ToUInt64", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::IFormatProvider*>()});
  }
};
// Writing MetadataGetter for method: System::Double::System_IConvertible_ToSingle
// Il2CppName: System.IConvertible.ToSingle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (System::Double::*)(System::IFormatProvider*)>(&System::Double::System_IConvertible_ToSingle)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Double), "System.IConvertible.ToSingle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::IFormatProvider*>()});
  }
};
// Writing MetadataGetter for method: System::Double::System_IConvertible_ToDouble
// Il2CppName: System.IConvertible.ToDouble
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double (System::Double::*)(System::IFormatProvider*)>(&System::Double::System_IConvertible_ToDouble)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Double), "System.IConvertible.ToDouble", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::IFormatProvider*>()});
  }
};
// Writing MetadataGetter for method: System::Double::System_IConvertible_ToDecimal
// Il2CppName: System.IConvertible.ToDecimal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Decimal (System::Double::*)(System::IFormatProvider*)>(&System::Double::System_IConvertible_ToDecimal)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Double), "System.IConvertible.ToDecimal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::IFormatProvider*>()});
  }
};
// Writing MetadataGetter for method: System::Double::System_IConvertible_ToDateTime
// Il2CppName: System.IConvertible.ToDateTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::DateTime (System::Double::*)(System::IFormatProvider*)>(&System::Double::System_IConvertible_ToDateTime)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Double), "System.IConvertible.ToDateTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::IFormatProvider*>()});
  }
};
// Writing MetadataGetter for method: System::Double::System_IConvertible_ToType
// Il2CppName: System.IConvertible.ToType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Double::*)(System::Type*, System::IFormatProvider*)>(&System::Double::System_IConvertible_ToType)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Double), "System.IConvertible.ToType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Type*>(), ::il2cpp_utils::ExtractIndependentType<System::IFormatProvider*>()});
  }
};
// Writing MetadataGetter for method: System::Double::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Double::_cctor)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Double), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Double::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Double::*)(::Il2CppObject*)>(&System::Double::Equals)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Double), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>()});
  }
};
// Writing MetadataGetter for method: System::Double::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Double::*)()>(&System::Double::GetHashCode)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Double), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Double::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Double::*)()>(&System::Double::ToString)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Double), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
