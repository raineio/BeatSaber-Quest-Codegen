// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
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
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
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
// Type namespace: System
namespace System {
  // Autogenerated type: System.TimeZoneInfo/TransitionTime
  struct TimeZoneInfo::TransitionTime : public System::ValueType, public System::IEquatable_1<System::TimeZoneInfo::TransitionTime>, public System::Runtime::Serialization::ISerializable, public System::Runtime::Serialization::IDeserializationCallback {
    public:
    // private System.DateTime m_timeOfDay
    // Offset: 0x0
    System::DateTime m_timeOfDay;
    // private System.Byte m_month
    // Offset: 0x8
    uint8_t m_month;
    // private System.Byte m_week
    // Offset: 0x9
    uint8_t m_week;
    // private System.Byte m_day
    // Offset: 0xA
    uint8_t m_day;
    // private System.DayOfWeek m_dayOfWeek
    // Offset: 0xC
    System::DayOfWeek m_dayOfWeek;
    // private System.Boolean m_isFixedDateRule
    // Offset: 0x10
    bool m_isFixedDateRule;
    // Creating value type constructor for type: TransitionTime
    TransitionTime(System::DateTime m_timeOfDay_ = {}, uint8_t m_month_ = {}, uint8_t m_week_ = {}, uint8_t m_day_ = {}, System::DayOfWeek m_dayOfWeek_ = {}, bool m_isFixedDateRule_ = {}) : m_timeOfDay{m_timeOfDay_}, m_month{m_month_}, m_week{m_week_}, m_day{m_day_}, m_dayOfWeek{m_dayOfWeek_}, m_isFixedDateRule{m_isFixedDateRule_} {}
    // public System.DateTime get_TimeOfDay()
    // Offset: 0xA5702C
    System::DateTime get_TimeOfDay();
    // public System.Int32 get_Month()
    // Offset: 0xA57034
    int get_Month();
    // public System.Int32 get_Week()
    // Offset: 0xA5703C
    int get_Week();
    // public System.Int32 get_Day()
    // Offset: 0xA57044
    int get_Day();
    // public System.DayOfWeek get_DayOfWeek()
    // Offset: 0xA5704C
    System::DayOfWeek get_DayOfWeek();
    // public System.Boolean get_IsFixedDateRule()
    // Offset: 0xA57054
    bool get_IsFixedDateRule();
    // static public System.TimeZoneInfo/TransitionTime CreateFixedDateRule(System.DateTime timeOfDay, System.Int32 month, System.Int32 day)
    // Offset: 0x1795474
    static System::TimeZoneInfo::TransitionTime CreateFixedDateRule(System::DateTime timeOfDay, int month, int day);
    // static public System.TimeZoneInfo/TransitionTime CreateFloatingDateRule(System.DateTime timeOfDay, System.Int32 month, System.Int32 week, System.DayOfWeek dayOfWeek)
    // Offset: 0x1795564
    static System::TimeZoneInfo::TransitionTime CreateFloatingDateRule(System::DateTime timeOfDay, int month, int week, System::DayOfWeek dayOfWeek);
    // static private System.TimeZoneInfo/TransitionTime CreateTransitionTime(System.DateTime timeOfDay, System.Int32 month, System.Int32 week, System.Int32 day, System.DayOfWeek dayOfWeek, System.Boolean isFixedDateRule)
    // Offset: 0x17954E8
    static System::TimeZoneInfo::TransitionTime CreateTransitionTime(System::DateTime timeOfDay, int month, int week, int day, System::DayOfWeek dayOfWeek, bool isFixedDateRule);
    // static private System.Void ValidateTransitionTime(System.DateTime timeOfDay, System.Int32 month, System.Int32 week, System.Int32 day, System.DayOfWeek dayOfWeek)
    // Offset: 0x17955D4
    static void ValidateTransitionTime(System::DateTime timeOfDay, int month, int week, int day, System::DayOfWeek dayOfWeek);
    // private System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0xA570C0
    static TimeZoneInfo::TransitionTime* New_ctor(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0xA5705C
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public System.Boolean Equals(System.TimeZoneInfo/TransitionTime other)
    // Offset: 0xA57064
    // Implemented from: System.IEquatable`1
    // Base method: System.Boolean IEquatable`1::Equals(System.TimeZoneInfo/TransitionTime other)
    bool Equals(System::TimeZoneInfo::TransitionTime other);
    // public override System.Int32 GetHashCode()
    // Offset: 0xA5709C
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
    // private System.Void System.Runtime.Serialization.IDeserializationCallback.OnDeserialization(System.Object sender)
    // Offset: 0xA570B0
    // Implemented from: System.Runtime.Serialization.IDeserializationCallback
    // Base method: System.Void IDeserializationCallback::OnDeserialization(System.Object sender)
    void System_Runtime_Serialization_IDeserializationCallback_OnDeserialization(::Il2CppObject* sender);
    // private System.Void System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0xA570B8
    // Implemented from: System.Runtime.Serialization.ISerializable
    // Base method: System.Void ISerializable::GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    void System_Runtime_Serialization_ISerializable_GetObjectData(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
  }; // System.TimeZoneInfo/TransitionTime
  // static public System.Boolean op_Inequality(System.TimeZoneInfo/TransitionTime t1, System.TimeZoneInfo/TransitionTime t2)
  // Offset: 0x1795428
  inline bool operator !=(const System::TimeZoneInfo::TransitionTime& t1, const System::TimeZoneInfo::TransitionTime& t2) {
    return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("System", "TimeZoneInfo/TransitionTime", "op_Inequality", t1, t2));
  }
}
DEFINE_IL2CPP_ARG_TYPE(System::TimeZoneInfo::TransitionTime, "System", "TimeZoneInfo/TransitionTime");
#pragma pack(pop)
