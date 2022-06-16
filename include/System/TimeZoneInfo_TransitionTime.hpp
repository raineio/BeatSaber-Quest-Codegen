// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.TimeZoneInfo
#include "System/TimeZoneInfo.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Including type: System.Runtime.Serialization.ISerializable
#include "System/Runtime/Serialization/ISerializable.hpp"
// Including type: System.Runtime.Serialization.IDeserializationCallback
#include "System/Runtime/Serialization/IDeserializationCallback.hpp"
// Including type: System.DateTime
#include "System/DateTime.hpp"
// Including type: System.DayOfWeek
#include "System/DayOfWeek.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
  // Forward declaring type: StreamingContext
  struct StreamingContext;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::TimeZoneInfo::TransitionTime, "System", "TimeZoneInfo/TransitionTime");
// Type namespace: System
namespace System {
  // Size: 0x11
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.TimeZoneInfo/System.TransitionTime
  // [TokenAttribute] Offset: FFFFFFFF
  // [TypeForwardedFromAttribute] Offset: 102F274
  struct TimeZoneInfo::TransitionTime/*, public ::System::ValueType, public ::System::IEquatable_1<::System::TimeZoneInfo::TransitionTime>, public ::System::Runtime::Serialization::ISerializable, public ::System::Runtime::Serialization::IDeserializationCallback*/ {
    public:
    public:
    // private System.DateTime m_timeOfDay
    // Size: 0x8
    // Offset: 0x0
    ::System::DateTime m_timeOfDay;
    // Field size check
    static_assert(sizeof(::System::DateTime) == 0x8);
    // private System.Byte m_month
    // Size: 0x1
    // Offset: 0x8
    uint8_t m_month;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // private System.Byte m_week
    // Size: 0x1
    // Offset: 0x9
    uint8_t m_week;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // private System.Byte m_day
    // Size: 0x1
    // Offset: 0xA
    uint8_t m_day;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // Padding between fields: m_day and: m_dayOfWeek
    char __padding3[0x1] = {};
    // private System.DayOfWeek m_dayOfWeek
    // Size: 0x4
    // Offset: 0xC
    ::System::DayOfWeek m_dayOfWeek;
    // Field size check
    static_assert(sizeof(::System::DayOfWeek) == 0x4);
    // private System.Boolean m_isFixedDateRule
    // Size: 0x1
    // Offset: 0x10
    bool m_isFixedDateRule;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating value type constructor for type: TransitionTime
    constexpr TransitionTime(::System::DateTime m_timeOfDay_ = {}, uint8_t m_month_ = {}, uint8_t m_week_ = {}, uint8_t m_day_ = {}, ::System::DayOfWeek m_dayOfWeek_ = {}, bool m_isFixedDateRule_ = {}) noexcept : m_timeOfDay{m_timeOfDay_}, m_month{m_month_}, m_week{m_week_}, m_day{m_day_}, m_dayOfWeek{m_dayOfWeek_}, m_isFixedDateRule{m_isFixedDateRule_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: i_ValueType
    inline ::System::ValueType* i_ValueType() noexcept {
      return reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::System::IEquatable_1<::System::TimeZoneInfo::TransitionTime>
    operator ::System::IEquatable_1<::System::TimeZoneInfo::TransitionTime>() noexcept {
      return *reinterpret_cast<::System::IEquatable_1<::System::TimeZoneInfo::TransitionTime>*>(this);
    }
    // Creating interface conversion operator: i_TransitionTime
    inline ::System::IEquatable_1<::System::TimeZoneInfo::TransitionTime>* i_TransitionTime() noexcept {
      return reinterpret_cast<::System::IEquatable_1<::System::TimeZoneInfo::TransitionTime>*>(this);
    }
    // Creating interface conversion operator: operator ::System::Runtime::Serialization::ISerializable
    operator ::System::Runtime::Serialization::ISerializable() noexcept {
      return *reinterpret_cast<::System::Runtime::Serialization::ISerializable*>(this);
    }
    // Creating interface conversion operator: i_ISerializable
    inline ::System::Runtime::Serialization::ISerializable* i_ISerializable() noexcept {
      return reinterpret_cast<::System::Runtime::Serialization::ISerializable*>(this);
    }
    // Creating interface conversion operator: operator ::System::Runtime::Serialization::IDeserializationCallback
    operator ::System::Runtime::Serialization::IDeserializationCallback() noexcept {
      return *reinterpret_cast<::System::Runtime::Serialization::IDeserializationCallback*>(this);
    }
    // Creating interface conversion operator: i_IDeserializationCallback
    inline ::System::Runtime::Serialization::IDeserializationCallback* i_IDeserializationCallback() noexcept {
      return reinterpret_cast<::System::Runtime::Serialization::IDeserializationCallback*>(this);
    }
    // Get instance field reference: private System.DateTime m_timeOfDay
    [[deprecated("Use field access instead!")]] ::System::DateTime& dyn_m_timeOfDay();
    // Get instance field reference: private System.Byte m_month
    [[deprecated("Use field access instead!")]] uint8_t& dyn_m_month();
    // Get instance field reference: private System.Byte m_week
    [[deprecated("Use field access instead!")]] uint8_t& dyn_m_week();
    // Get instance field reference: private System.Byte m_day
    [[deprecated("Use field access instead!")]] uint8_t& dyn_m_day();
    // Get instance field reference: private System.DayOfWeek m_dayOfWeek
    [[deprecated("Use field access instead!")]] ::System::DayOfWeek& dyn_m_dayOfWeek();
    // Get instance field reference: private System.Boolean m_isFixedDateRule
    [[deprecated("Use field access instead!")]] bool& dyn_m_isFixedDateRule();
    // public System.DateTime get_TimeOfDay()
    // Offset: 0x1D377FC
    ::System::DateTime get_TimeOfDay();
    // public System.Int32 get_Month()
    // Offset: 0x1D37804
    int get_Month();
    // public System.Int32 get_Week()
    // Offset: 0x1D3780C
    int get_Week();
    // public System.Int32 get_Day()
    // Offset: 0x1D37814
    int get_Day();
    // public System.DayOfWeek get_DayOfWeek()
    // Offset: 0x1D3781C
    ::System::DayOfWeek get_DayOfWeek();
    // public System.Boolean get_IsFixedDateRule()
    // Offset: 0x1D37824
    bool get_IsFixedDateRule();
    // private System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x1D37E34
    TransitionTime(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);
    // public System.Boolean Equals(System.TimeZoneInfo/System.TransitionTime other)
    // Offset: 0x1D2FAF0
    bool Equals(::System::TimeZoneInfo::TransitionTime other);
    // static public System.TimeZoneInfo/System.TransitionTime CreateFixedDateRule(System.DateTime timeOfDay, System.Int32 month, System.Int32 day)
    // Offset: 0x1D2EAE0
    static ::System::TimeZoneInfo::TransitionTime CreateFixedDateRule(::System::DateTime timeOfDay, int month, int day);
    // static public System.TimeZoneInfo/System.TransitionTime CreateFloatingDateRule(System.DateTime timeOfDay, System.Int32 month, System.Int32 week, System.DayOfWeek dayOfWeek)
    // Offset: 0x1D2FBE4
    static ::System::TimeZoneInfo::TransitionTime CreateFloatingDateRule(::System::DateTime timeOfDay, int month, int week, ::System::DayOfWeek dayOfWeek);
    // static private System.TimeZoneInfo/System.TransitionTime CreateTransitionTime(System.DateTime timeOfDay, System.Int32 month, System.Int32 week, System.Int32 day, System.DayOfWeek dayOfWeek, System.Boolean isFixedDateRule)
    // Offset: 0x1D378E0
    static ::System::TimeZoneInfo::TransitionTime CreateTransitionTime(::System::DateTime timeOfDay, int month, int week, int day, ::System::DayOfWeek dayOfWeek, bool isFixedDateRule);
    // static private System.Void ValidateTransitionTime(System.DateTime timeOfDay, System.Int32 month, System.Int32 week, System.Int32 day, System.DayOfWeek dayOfWeek)
    // Offset: 0x1D3795C
    static void ValidateTransitionTime(::System::DateTime timeOfDay, int month, int week, int day, ::System::DayOfWeek dayOfWeek);
    // private System.Void System.Runtime.Serialization.IDeserializationCallback.OnDeserialization(System.Object sender)
    // Offset: 0x1D37BC4
    void System_Runtime_Serialization_IDeserializationCallback_OnDeserialization(::Il2CppObject* sender);
    // private System.Void System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x1D37CE4
    void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x1D3782C
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x1D378CC
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
  }; // System.TimeZoneInfo/System.TransitionTime
  #pragma pack(pop)
  static check_size<sizeof(TimeZoneInfo::TransitionTime), 16 + sizeof(bool)> __System_TimeZoneInfo_TransitionTimeSizeCheck;
  static_assert(sizeof(TimeZoneInfo::TransitionTime) == 0x11);
  // static public System.Boolean op_Inequality(System.TimeZoneInfo/System.TransitionTime t1, System.TimeZoneInfo/System.TransitionTime t2)
  // Offset: 0x1D36C9C
  bool operator !=(const ::System::TimeZoneInfo::TransitionTime& t1, const ::System::TimeZoneInfo::TransitionTime& t2);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::TimeZoneInfo::TransitionTime::get_TimeOfDay
// Il2CppName: get_TimeOfDay
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DateTime (System::TimeZoneInfo::TransitionTime::*)()>(&System::TimeZoneInfo::TransitionTime::get_TimeOfDay)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::TimeZoneInfo::TransitionTime), "get_TimeOfDay", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::TimeZoneInfo::TransitionTime::get_Month
// Il2CppName: get_Month
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::TimeZoneInfo::TransitionTime::*)()>(&System::TimeZoneInfo::TransitionTime::get_Month)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::TimeZoneInfo::TransitionTime), "get_Month", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::TimeZoneInfo::TransitionTime::get_Week
// Il2CppName: get_Week
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::TimeZoneInfo::TransitionTime::*)()>(&System::TimeZoneInfo::TransitionTime::get_Week)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::TimeZoneInfo::TransitionTime), "get_Week", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::TimeZoneInfo::TransitionTime::get_Day
// Il2CppName: get_Day
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::TimeZoneInfo::TransitionTime::*)()>(&System::TimeZoneInfo::TransitionTime::get_Day)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::TimeZoneInfo::TransitionTime), "get_Day", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::TimeZoneInfo::TransitionTime::get_DayOfWeek
// Il2CppName: get_DayOfWeek
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DayOfWeek (System::TimeZoneInfo::TransitionTime::*)()>(&System::TimeZoneInfo::TransitionTime::get_DayOfWeek)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::TimeZoneInfo::TransitionTime), "get_DayOfWeek", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::TimeZoneInfo::TransitionTime::get_IsFixedDateRule
// Il2CppName: get_IsFixedDateRule
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::TimeZoneInfo::TransitionTime::*)()>(&System::TimeZoneInfo::TransitionTime::get_IsFixedDateRule)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::TimeZoneInfo::TransitionTime), "get_IsFixedDateRule", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::TimeZoneInfo::TransitionTime::TransitionTime
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::TimeZoneInfo::TransitionTime::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::TimeZoneInfo::TransitionTime::*)(::System::TimeZoneInfo::TransitionTime)>(&System::TimeZoneInfo::TransitionTime::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("System", "TimeZoneInfo/TransitionTime")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::TimeZoneInfo::TransitionTime), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: System::TimeZoneInfo::TransitionTime::CreateFixedDateRule
// Il2CppName: CreateFixedDateRule
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::TimeZoneInfo::TransitionTime (*)(::System::DateTime, int, int)>(&System::TimeZoneInfo::TransitionTime::CreateFixedDateRule)> {
  static const MethodInfo* get() {
    static auto* timeOfDay = &::il2cpp_utils::GetClassFromName("System", "DateTime")->byval_arg;
    static auto* month = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* day = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::TimeZoneInfo::TransitionTime), "CreateFixedDateRule", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{timeOfDay, month, day});
  }
};
// Writing MetadataGetter for method: System::TimeZoneInfo::TransitionTime::CreateFloatingDateRule
// Il2CppName: CreateFloatingDateRule
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::TimeZoneInfo::TransitionTime (*)(::System::DateTime, int, int, ::System::DayOfWeek)>(&System::TimeZoneInfo::TransitionTime::CreateFloatingDateRule)> {
  static const MethodInfo* get() {
    static auto* timeOfDay = &::il2cpp_utils::GetClassFromName("System", "DateTime")->byval_arg;
    static auto* month = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* week = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* dayOfWeek = &::il2cpp_utils::GetClassFromName("System", "DayOfWeek")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::TimeZoneInfo::TransitionTime), "CreateFloatingDateRule", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{timeOfDay, month, week, dayOfWeek});
  }
};
// Writing MetadataGetter for method: System::TimeZoneInfo::TransitionTime::CreateTransitionTime
// Il2CppName: CreateTransitionTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::TimeZoneInfo::TransitionTime (*)(::System::DateTime, int, int, int, ::System::DayOfWeek, bool)>(&System::TimeZoneInfo::TransitionTime::CreateTransitionTime)> {
  static const MethodInfo* get() {
    static auto* timeOfDay = &::il2cpp_utils::GetClassFromName("System", "DateTime")->byval_arg;
    static auto* month = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* week = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* day = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* dayOfWeek = &::il2cpp_utils::GetClassFromName("System", "DayOfWeek")->byval_arg;
    static auto* isFixedDateRule = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::TimeZoneInfo::TransitionTime), "CreateTransitionTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{timeOfDay, month, week, day, dayOfWeek, isFixedDateRule});
  }
};
// Writing MetadataGetter for method: System::TimeZoneInfo::TransitionTime::ValidateTransitionTime
// Il2CppName: ValidateTransitionTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::DateTime, int, int, int, ::System::DayOfWeek)>(&System::TimeZoneInfo::TransitionTime::ValidateTransitionTime)> {
  static const MethodInfo* get() {
    static auto* timeOfDay = &::il2cpp_utils::GetClassFromName("System", "DateTime")->byval_arg;
    static auto* month = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* week = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* day = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* dayOfWeek = &::il2cpp_utils::GetClassFromName("System", "DayOfWeek")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::TimeZoneInfo::TransitionTime), "ValidateTransitionTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{timeOfDay, month, week, day, dayOfWeek});
  }
};
// Writing MetadataGetter for method: System::TimeZoneInfo::TransitionTime::System_Runtime_Serialization_IDeserializationCallback_OnDeserialization
// Il2CppName: System.Runtime.Serialization.IDeserializationCallback.OnDeserialization
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::TimeZoneInfo::TransitionTime::*)(::Il2CppObject*)>(&System::TimeZoneInfo::TransitionTime::System_Runtime_Serialization_IDeserializationCallback_OnDeserialization)> {
  static const MethodInfo* get() {
    static auto* sender = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::TimeZoneInfo::TransitionTime), "System.Runtime.Serialization.IDeserializationCallback.OnDeserialization", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sender});
  }
};
// Writing MetadataGetter for method: System::TimeZoneInfo::TransitionTime::System_Runtime_Serialization_ISerializable_GetObjectData
// Il2CppName: System.Runtime.Serialization.ISerializable.GetObjectData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::TimeZoneInfo::TransitionTime::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&System::TimeZoneInfo::TransitionTime::System_Runtime_Serialization_ISerializable_GetObjectData)> {
  static const MethodInfo* get() {
    static auto* info = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "SerializationInfo")->byval_arg;
    static auto* context = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "StreamingContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::TimeZoneInfo::TransitionTime), "System.Runtime.Serialization.ISerializable.GetObjectData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{info, context});
  }
};
// Writing MetadataGetter for method: System::TimeZoneInfo::TransitionTime::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::TimeZoneInfo::TransitionTime::*)(::Il2CppObject*)>(&System::TimeZoneInfo::TransitionTime::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::TimeZoneInfo::TransitionTime), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: System::TimeZoneInfo::TransitionTime::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::TimeZoneInfo::TransitionTime::*)()>(&System::TimeZoneInfo::TransitionTime::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::TimeZoneInfo::TransitionTime), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::TimeZoneInfo::TransitionTime::operator !=
// Il2CppName: op_Inequality
// Cannot perform method pointer template specialization from operators!
