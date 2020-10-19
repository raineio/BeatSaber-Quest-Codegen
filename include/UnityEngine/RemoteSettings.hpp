// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
  // Forward declaring type: Action`3<T1, T2, T3>
  template<typename T1, typename T2, typename T3>
  class Action_3;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Autogenerated type: UnityEngine.RemoteSettings
  class RemoteSettings : public ::Il2CppObject {
    public:
    // Nested type: UnityEngine::RemoteSettings::UpdatedEventHandler
    class UpdatedEventHandler;
    // Get static field: static private UnityEngine.RemoteSettings/UpdatedEventHandler Updated
    static UnityEngine::RemoteSettings::UpdatedEventHandler* _get_Updated();
    // Set static field: static private UnityEngine.RemoteSettings/UpdatedEventHandler Updated
    static void _set_Updated(UnityEngine::RemoteSettings::UpdatedEventHandler* value);
    // Get static field: static private System.Action BeforeFetchFromServer
    static System::Action* _get_BeforeFetchFromServer();
    // Set static field: static private System.Action BeforeFetchFromServer
    static void _set_BeforeFetchFromServer(System::Action* value);
    // Get static field: static private System.Action`3<System.Boolean,System.Boolean,System.Int32> Completed
    static System::Action_3<bool, bool, int>* _get_Completed();
    // Set static field: static private System.Action`3<System.Boolean,System.Boolean,System.Int32> Completed
    static void _set_Completed(System::Action_3<bool, bool, int>* value);
    // static System.Void RemoteSettingsUpdated(System.Boolean wasLastUpdatedFromServer)
    // Offset: 0x1F79CE8
    static void RemoteSettingsUpdated(bool wasLastUpdatedFromServer);
    // static System.Void RemoteSettingsBeforeFetchFromServer()
    // Offset: 0x1F79F54
    static void RemoteSettingsBeforeFetchFromServer();
    // static System.Void RemoteSettingsUpdateCompleted(System.Boolean wasLastUpdatedFromServer, System.Boolean settingsChanged, System.Int32 response)
    // Offset: 0x1F79FB8
    static void RemoteSettingsUpdateCompleted(bool wasLastUpdatedFromServer, bool settingsChanged, int response);
  }; // UnityEngine.RemoteSettings
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::RemoteSettings*, "UnityEngine", "RemoteSettings");
#pragma pack(pop)
