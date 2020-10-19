// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: EventHandler`1<TEventArgs>
  template<typename TEventArgs>
  class EventHandler_1;
  // Forward declaring type: WeakReference
  class WeakReference;
  // Forward declaring type: EventArgs
  class EventArgs;
}
// Forward declaring namespace: System::Diagnostics::Tracing
namespace System::Diagnostics::Tracing {
  // Forward declaring type: EventSourceCreatedEventArgs
  class EventSourceCreatedEventArgs;
  // Forward declaring type: EventWrittenEventArgs
  class EventWrittenEventArgs;
  // Forward declaring type: ActivityFilter
  class ActivityFilter;
  // Forward declaring type: EventSource
  class EventSource;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: System.Diagnostics.Tracing
namespace System::Diagnostics::Tracing {
  // Autogenerated type: System.Diagnostics.Tracing.EventListener
  class EventListener : public ::Il2CppObject {
    public:
    // private System.EventHandler`1<System.Diagnostics.Tracing.EventSourceCreatedEventArgs> _EventSourceCreated
    // Offset: 0x10
    System::EventHandler_1<System::Diagnostics::Tracing::EventSourceCreatedEventArgs*>* EventSourceCreated;
    // private System.EventHandler`1<System.Diagnostics.Tracing.EventWrittenEventArgs> EventWritten
    // Offset: 0x18
    System::EventHandler_1<System::Diagnostics::Tracing::EventWrittenEventArgs*>* EventWritten;
    // System.Diagnostics.Tracing.EventListener m_Next
    // Offset: 0x20
    System::Diagnostics::Tracing::EventListener* m_Next;
    // System.Diagnostics.Tracing.ActivityFilter m_activityFilter
    // Offset: 0x28
    System::Diagnostics::Tracing::ActivityFilter* m_activityFilter;
    // Get static field: static private readonly System.Object s_EventSourceCreatedLock
    static ::Il2CppObject* _get_s_EventSourceCreatedLock();
    // Set static field: static private readonly System.Object s_EventSourceCreatedLock
    static void _set_s_EventSourceCreatedLock(::Il2CppObject* value);
    // Get static field: static System.Diagnostics.Tracing.EventListener s_Listeners
    static System::Diagnostics::Tracing::EventListener* _get_s_Listeners();
    // Set static field: static System.Diagnostics.Tracing.EventListener s_Listeners
    static void _set_s_Listeners(System::Diagnostics::Tracing::EventListener* value);
    // Get static field: static System.Collections.Generic.List`1<System.WeakReference> s_EventSources
    static System::Collections::Generic::List_1<System::WeakReference*>* _get_s_EventSources();
    // Set static field: static System.Collections.Generic.List`1<System.WeakReference> s_EventSources
    static void _set_s_EventSources(System::Collections::Generic::List_1<System::WeakReference*>* value);
    // Get static field: static private System.Boolean s_CreatingListener
    static bool _get_s_CreatingListener();
    // Set static field: static private System.Boolean s_CreatingListener
    static void _set_s_CreatingListener(bool value);
    // Get static field: static private System.Boolean s_EventSourceShutdownRegistered
    static bool _get_s_EventSourceShutdownRegistered();
    // Set static field: static private System.Boolean s_EventSourceShutdownRegistered
    static void _set_s_EventSourceShutdownRegistered(bool value);
    // protected internal System.Void OnEventSourceCreated(System.Diagnostics.Tracing.EventSource eventSource)
    // Offset: 0x1251DCC
    void OnEventSourceCreated(System::Diagnostics::Tracing::EventSource* eventSource);
    // protected internal System.Void OnEventWritten(System.Diagnostics.Tracing.EventWrittenEventArgs eventData)
    // Offset: 0x1251EE0
    void OnEventWritten(System::Diagnostics::Tracing::EventWrittenEventArgs* eventData);
    // static System.Void AddEventSource(System.Diagnostics.Tracing.EventSource newEventSource)
    // Offset: 0x1251F58
    static void AddEventSource(System::Diagnostics::Tracing::EventSource* newEventSource);
    // static private System.Void DisposeOnShutdown(System.Object sender, System.EventArgs e)
    // Offset: 0x1252634
    static void DisposeOnShutdown(::Il2CppObject* sender, System::EventArgs* e);
    // static System.Object get_EventListenersLock()
    // Offset: 0x12523B0
    static ::Il2CppObject* get_EventListenersLock();
    // static private System.Void .cctor()
    // Offset: 0x12528C8
    static void _cctor();
  }; // System.Diagnostics.Tracing.EventListener
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Diagnostics::Tracing::EventListener*, "System.Diagnostics.Tracing", "EventListener");
#pragma pack(pop)
