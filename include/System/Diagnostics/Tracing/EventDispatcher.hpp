// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Diagnostics::Tracing
namespace System::Diagnostics::Tracing {
  // Forward declaring type: EventListener
  class EventListener;
}
// Completed forward declares
// Type namespace: System.Diagnostics.Tracing
namespace System::Diagnostics::Tracing {
  // Autogenerated type: System.Diagnostics.Tracing.EventDispatcher
  class EventDispatcher : public ::Il2CppObject {
    public:
    // readonly System.Diagnostics.Tracing.EventListener m_Listener
    // Offset: 0x10
    System::Diagnostics::Tracing::EventListener* m_Listener;
    // System.Boolean[] m_EventEnabled
    // Offset: 0x18
    ::Array<bool>* m_EventEnabled;
    // System.Boolean m_activityFilteringEnabled
    // Offset: 0x20
    bool m_activityFilteringEnabled;
    // System.Diagnostics.Tracing.EventDispatcher m_Next
    // Offset: 0x28
    System::Diagnostics::Tracing::EventDispatcher* m_Next;
    // System.Void .ctor(System.Diagnostics.Tracing.EventDispatcher next, System.Boolean[] eventEnabled, System.Diagnostics.Tracing.EventListener listener)
    // Offset: 0x1251D50
    static EventDispatcher* New_ctor(System::Diagnostics::Tracing::EventDispatcher* next, ::Array<bool>* eventEnabled, System::Diagnostics::Tracing::EventListener* listener);
  }; // System.Diagnostics.Tracing.EventDispatcher
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Diagnostics::Tracing::EventDispatcher*, "System.Diagnostics.Tracing", "EventDispatcher");
#pragma pack(pop)
