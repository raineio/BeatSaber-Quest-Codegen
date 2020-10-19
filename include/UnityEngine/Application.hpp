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
  // Forward declaring type: ThreadPriority
  struct ThreadPriority;
  // Forward declaring type: RuntimePlatform
  struct RuntimePlatform;
  // Forward declaring type: NetworkReachability
  struct NetworkReachability;
  // Forward declaring type: LogType
  struct LogType;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
  // Forward declaring type: Func`1<TResult>
  template<typename TResult>
  class Func_1;
  // Forward declaring type: Action
  class Action;
}
// Forward declaring namespace: UnityEngine::Events
namespace UnityEngine::Events {
  // Forward declaring type: UnityAction
  class UnityAction;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Autogenerated type: UnityEngine.Application
  class Application : public ::Il2CppObject {
    public:
    // Nested type: UnityEngine::Application::LowMemoryCallback
    class LowMemoryCallback;
    // Nested type: UnityEngine::Application::LogCallback
    class LogCallback;
    // Get static field: static private UnityEngine.Application/LowMemoryCallback lowMemory
    static UnityEngine::Application::LowMemoryCallback* _get_lowMemory();
    // Set static field: static private UnityEngine.Application/LowMemoryCallback lowMemory
    static void _set_lowMemory(UnityEngine::Application::LowMemoryCallback* value);
    // Get static field: static private UnityEngine.Application/LogCallback s_LogCallbackHandler
    static UnityEngine::Application::LogCallback* _get_s_LogCallbackHandler();
    // Set static field: static private UnityEngine.Application/LogCallback s_LogCallbackHandler
    static void _set_s_LogCallbackHandler(UnityEngine::Application::LogCallback* value);
    // Get static field: static private UnityEngine.Application/LogCallback s_LogCallbackHandlerThreaded
    static UnityEngine::Application::LogCallback* _get_s_LogCallbackHandlerThreaded();
    // Set static field: static private UnityEngine.Application/LogCallback s_LogCallbackHandlerThreaded
    static void _set_s_LogCallbackHandlerThreaded(UnityEngine::Application::LogCallback* value);
    // Get static field: static private System.Action`1<System.Boolean> focusChanged
    static System::Action_1<bool>* _get_focusChanged();
    // Set static field: static private System.Action`1<System.Boolean> focusChanged
    static void _set_focusChanged(System::Action_1<bool>* value);
    // Get static field: static private System.Action`1<System.String> deepLinkActivated
    static System::Action_1<::Il2CppString*>* _get_deepLinkActivated();
    // Set static field: static private System.Action`1<System.String> deepLinkActivated
    static void _set_deepLinkActivated(System::Action_1<::Il2CppString*>* value);
    // Get static field: static private System.Func`1<System.Boolean> wantsToQuit
    static System::Func_1<bool>* _get_wantsToQuit();
    // Set static field: static private System.Func`1<System.Boolean> wantsToQuit
    static void _set_wantsToQuit(System::Func_1<bool>* value);
    // Get static field: static private System.Action quitting
    static System::Action* _get_quitting();
    // Set static field: static private System.Action quitting
    static void _set_quitting(System::Action* value);
    // static public System.Void Quit(System.Int32 exitCode)
    // Offset: 0x17849B4
    static void Quit(int exitCode);
    // static public System.Void Quit()
    // Offset: 0x17849F4
    static void Quit();
    // static public System.Boolean CanStreamedLevelBeLoaded(System.Int32 levelIndex)
    // Offset: 0x1784A30
    static bool CanStreamedLevelBeLoaded(int levelIndex);
    // static public System.Boolean CanStreamedLevelBeLoaded(System.String levelName)
    // Offset: 0x1784A68
    static bool CanStreamedLevelBeLoaded(::Il2CppString* levelName);
    // static public System.Boolean get_isPlaying()
    // Offset: 0x1784AA8
    static bool get_isPlaying();
    // static public System.Void set_runInBackground(System.Boolean value)
    // Offset: 0x1784ADC
    static void set_runInBackground(bool value);
    // static public System.String get_dataPath()
    // Offset: 0x1784B1C
    static ::Il2CppString* get_dataPath();
    // static public System.String get_persistentDataPath()
    // Offset: 0x1784B50
    static ::Il2CppString* get_persistentDataPath();
    // static public System.String get_unityVersion()
    // Offset: 0x1784B84
    static ::Il2CppString* get_unityVersion();
    // static public System.String get_version()
    // Offset: 0x1784BB8
    static ::Il2CppString* get_version();
    // static public System.String get_identifier()
    // Offset: 0x1784BEC
    static ::Il2CppString* get_identifier();
    // static public System.String get_productName()
    // Offset: 0x1784C20
    static ::Il2CppString* get_productName();
    // static public System.String get_companyName()
    // Offset: 0x1784C54
    static ::Il2CppString* get_companyName();
    // static public System.Void OpenURL(System.String url)
    // Offset: 0x1784C88
    static void OpenURL(::Il2CppString* url);
    // static public System.Void set_targetFrameRate(System.Int32 value)
    // Offset: 0x1784CC8
    static void set_targetFrameRate(int value);
    // static private System.Void SetLogCallbackDefined(System.Boolean defined)
    // Offset: 0x1784D08
    static void SetLogCallbackDefined(bool defined);
    // static public System.Void set_backgroundLoadingPriority(UnityEngine.ThreadPriority value)
    // Offset: 0x1784D48
    static void set_backgroundLoadingPriority(UnityEngine::ThreadPriority value);
    // static public UnityEngine.RuntimePlatform get_platform()
    // Offset: 0x1784D88
    static UnityEngine::RuntimePlatform get_platform();
    // static public System.Boolean get_isMobilePlatform()
    // Offset: 0x1784DBC
    static bool get_isMobilePlatform();
    // static public UnityEngine.NetworkReachability get_internetReachability()
    // Offset: 0x1784E34
    static UnityEngine::NetworkReachability get_internetReachability();
    // static System.Void CallLowMemory()
    // Offset: 0x1784E68
    static void CallLowMemory();
    // static public System.Void add_logMessageReceived(UnityEngine.Application/LogCallback value)
    // Offset: 0x17850D4
    static void add_logMessageReceived(UnityEngine::Application::LogCallback* value);
    // static public System.Void remove_logMessageReceived(UnityEngine.Application/LogCallback value)
    // Offset: 0x1785198
    static void remove_logMessageReceived(UnityEngine::Application::LogCallback* value);
    // static public System.Void add_logMessageReceivedThreaded(UnityEngine.Application/LogCallback value)
    // Offset: 0x1785234
    static void add_logMessageReceivedThreaded(UnityEngine::Application::LogCallback* value);
    // static public System.Void remove_logMessageReceivedThreaded(UnityEngine.Application/LogCallback value)
    // Offset: 0x17852F8
    static void remove_logMessageReceivedThreaded(UnityEngine::Application::LogCallback* value);
    // static private System.Void CallLogCallback(System.String logString, System.String stackTrace, UnityEngine.LogType type, System.Boolean invokedOnMainThread)
    // Offset: 0x1785394
    static void CallLogCallback(::Il2CppString* logString, ::Il2CppString* stackTrace, UnityEngine::LogType type, bool invokedOnMainThread);
    // static public System.Void add_onBeforeRender(UnityEngine.Events.UnityAction value)
    // Offset: 0x178587C
    static void add_onBeforeRender(UnityEngine::Events::UnityAction* value);
    // static public System.Void remove_onBeforeRender(UnityEngine.Events.UnityAction value)
    // Offset: 0x1785C80
    static void remove_onBeforeRender(UnityEngine::Events::UnityAction* value);
    // static private System.Boolean Internal_ApplicationWantsToQuit()
    // Offset: 0x1786010
    static bool Internal_ApplicationWantsToQuit();
    // static private System.Void Internal_ApplicationQuit()
    // Offset: 0x17862C8
    static void Internal_ApplicationQuit();
    // static System.Void InvokeOnBeforeRender()
    // Offset: 0x178632C
    static void InvokeOnBeforeRender();
    // static System.Void InvokeFocusChanged(System.Boolean focus)
    // Offset: 0x1786510
    static void InvokeFocusChanged(bool focus);
    // static System.Void InvokeDeepLinkActivated(System.String url)
    // Offset: 0x1786584
    static void InvokeDeepLinkActivated(::Il2CppString* url);
    // static public System.Boolean get_isEditor()
    // Offset: 0x17865F8
    static bool get_isEditor();
  }; // UnityEngine.Application
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Application*, "UnityEngine", "Application");
#pragma pack(pop)
