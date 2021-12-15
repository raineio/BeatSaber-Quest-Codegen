// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: BGNetDebug
#include "GlobalNamespace/BGNetDebug.hpp"
// Completed includes
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(GlobalNamespace::BGNetDebug::ILogger);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BGNetDebug::ILogger*, "", "BGNetDebug/ILogger");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: BGNetDebug/ILogger
  // [TokenAttribute] Offset: FFFFFFFF
  class BGNetDebug::ILogger {
    public:
    // public System.Void LogInfo(System.String message)
    // Offset: 0xFFFFFFFF
    void LogInfo(::Il2CppString* message);
    // public System.Void LogError(System.String message)
    // Offset: 0xFFFFFFFF
    void LogError(::Il2CppString* message);
    // public System.Void LogWarning(System.String message)
    // Offset: 0xFFFFFFFF
    void LogWarning(::Il2CppString* message);
  }; // BGNetDebug/ILogger
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BGNetDebug::ILogger::LogInfo
// Il2CppName: LogInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BGNetDebug::ILogger::*)(::Il2CppString*)>(&GlobalNamespace::BGNetDebug::ILogger::LogInfo)> {
  static const MethodInfo* get() {
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BGNetDebug::ILogger*), "LogInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BGNetDebug::ILogger::LogError
// Il2CppName: LogError
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BGNetDebug::ILogger::*)(::Il2CppString*)>(&GlobalNamespace::BGNetDebug::ILogger::LogError)> {
  static const MethodInfo* get() {
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BGNetDebug::ILogger*), "LogError", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BGNetDebug::ILogger::LogWarning
// Il2CppName: LogWarning
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BGNetDebug::ILogger::*)(::Il2CppString*)>(&GlobalNamespace::BGNetDebug::ILogger::LogWarning)> {
  static const MethodInfo* get() {
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BGNetDebug::ILogger*), "LogWarning", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message});
  }
};
