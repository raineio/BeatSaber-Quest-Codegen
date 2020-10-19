// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.TimeZone
#include "System/TimeZone.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: TimeZoneInfo
  class TimeZoneInfo;
  // Forward declaring type: TimeSpan
  struct TimeSpan;
  // Forward declaring type: DateTime
  struct DateTime;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Autogenerated type: System.CurrentSystemTimeZone
  class CurrentSystemTimeZone : public System::TimeZone {
    public:
    // private readonly System.TimeZoneInfo LocalTimeZone
    // Offset: 0x10
    System::TimeZoneInfo* LocalTimeZone;
    // Creating conversion operator: operator System::TimeZoneInfo*
    constexpr operator System::TimeZoneInfo*() const noexcept {
      return LocalTimeZone;
    }
    // static public System.Boolean GetTimeZoneData(System.Int32 year, out System.Int64[] data, out System.String[] names, out System.Boolean daylight_inverted)
    // Offset: 0x159F720
    static bool GetTimeZoneData(int year, ::Array<int64_t>*& data, ::Array<::Il2CppString*>*& names, bool& daylight_inverted);
    // System.Void .ctor()
    // Offset: 0x159F5D0
    // Implemented from: System.TimeZone
    // Base method: System.Void TimeZone::.ctor()
    // Base method: System.Void Object::.ctor()
    static CurrentSystemTimeZone* New_ctor();
    // public override System.TimeSpan GetUtcOffset(System.DateTime dateTime)
    // Offset: 0x159F650
    // Implemented from: System.TimeZone
    // Base method: System.TimeSpan TimeZone::GetUtcOffset(System.DateTime dateTime)
    System::TimeSpan GetUtcOffset(System::DateTime dateTime);
  }; // System.CurrentSystemTimeZone
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::CurrentSystemTimeZone*, "System", "CurrentSystemTimeZone");
#pragma pack(pop)
