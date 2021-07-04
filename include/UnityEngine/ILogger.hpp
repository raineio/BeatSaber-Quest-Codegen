// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include <initializer_list>
// Including type: UnityEngine.ILogHandler
#include "UnityEngine/ILogHandler.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Object
  class Object;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ILogger
  class ILogger/*, public UnityEngine::ILogHandler*/ {
    public:
    // Creating value type constructor for type: ILogger
    ILogger() noexcept {}
    // Creating interface conversion operator: operator UnityEngine::ILogHandler
    operator UnityEngine::ILogHandler() noexcept {
      return *reinterpret_cast<UnityEngine::ILogHandler*>(this);
    }
    // public UnityEngine.ILogHandler get_logHandler()
    // Offset: 0xFFFFFFFF
    UnityEngine::ILogHandler* get_logHandler();
    // public System.Void Log(UnityEngine.LogType logType, System.Object message)
    // Offset: 0xFFFFFFFF
    void Log(UnityEngine::LogType logType, ::Il2CppObject* message);
    // public System.Void Log(UnityEngine.LogType logType, System.Object message, UnityEngine.Object context)
    // Offset: 0xFFFFFFFF
    void Log(UnityEngine::LogType logType, ::Il2CppObject* message, UnityEngine::Object* context);
    // public System.Void LogFormat(UnityEngine.LogType logType, System.String format, params System.Object[] args)
    // Offset: 0xFFFFFFFF
    void LogFormat(UnityEngine::LogType logType, ::Il2CppString* format, ::Array<::Il2CppObject*>* args);
    // Creating initializer_list -> params proxy for: System.Void LogFormat(UnityEngine.LogType logType, System.String format, params System.Object[] args)
    void LogFormat(UnityEngine::LogType logType, ::Il2CppString* format, std::initializer_list<::Il2CppObject*> args);
    // Creating TArgs -> initializer_list proxy for: System.Void LogFormat(UnityEngine.LogType logType, System.String format, params System.Object[] args)
    template<class ...TParams>
    void LogFormat(UnityEngine::LogType logType, ::Il2CppString* format, TParams&&... args) {
      LogFormat(logType, format, {args...});
    }
  }; // UnityEngine.ILogger
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ILogger*, "UnityEngine", "ILogger");
// Writing MetadataGetter for method: UnityEngine::ILogger::get_logHandler
// Il2CppName: get_logHandler
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ILogHandler* (UnityEngine::ILogger::*)()>(&UnityEngine::ILogger::get_logHandler)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ILogger*), "get_logHandler", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ILogger::Log
// Il2CppName: Log
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ILogger::*)(UnityEngine::LogType, ::Il2CppObject*)>(&UnityEngine::ILogger::Log)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ILogger*), "Log", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::LogType>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::ILogger::Log
// Il2CppName: Log
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ILogger::*)(UnityEngine::LogType, ::Il2CppObject*, UnityEngine::Object*)>(&UnityEngine::ILogger::Log)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ILogger*), "Log", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::LogType>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Object*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::ILogger::LogFormat
// Il2CppName: LogFormat
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ILogger::*)(UnityEngine::LogType, ::Il2CppString*, ::Array<::Il2CppObject*>*)>(&UnityEngine::ILogger::LogFormat)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ILogger*), "LogFormat", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::LogType>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<::Array<::Il2CppObject*>*>()});
  }
};
