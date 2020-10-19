// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.EventArgs
#include "System/EventArgs.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Diagnostics::Tracing
namespace System::Diagnostics::Tracing {
  // Forward declaring type: EventSource
  class EventSource;
}
// Completed forward declares
// Type namespace: System.Diagnostics.Tracing
namespace System::Diagnostics::Tracing {
  // Autogenerated type: System.Diagnostics.Tracing.EventSourceCreatedEventArgs
  class EventSourceCreatedEventArgs : public System::EventArgs {
    public:
    // private System.Diagnostics.Tracing.EventSource <EventSource>k__BackingField
    // Offset: 0x10
    System::Diagnostics::Tracing::EventSource* EventSource;
    // Creating conversion operator: operator System::Diagnostics::Tracing::EventSource*
    constexpr operator System::Diagnostics::Tracing::EventSource*() const noexcept {
      return EventSource;
    }
    // System.Void set_EventSource(System.Diagnostics.Tracing.EventSource value)
    // Offset: 0x1263754
    void set_EventSource(System::Diagnostics::Tracing::EventSource* value);
    // public System.Void .ctor()
    // Offset: 0x1251E78
    // Implemented from: System.EventArgs
    // Base method: System.Void EventArgs::.ctor()
    // Base method: System.Void Object::.ctor()
    static EventSourceCreatedEventArgs* New_ctor();
  }; // System.Diagnostics.Tracing.EventSourceCreatedEventArgs
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Diagnostics::Tracing::EventSourceCreatedEventArgs*, "System.Diagnostics.Tracing", "EventSourceCreatedEventArgs");
#pragma pack(pop)
