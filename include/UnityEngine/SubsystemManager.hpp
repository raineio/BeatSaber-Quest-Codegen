// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: SubsystemManager
  class SubsystemManager;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::SubsystemManager);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::SubsystemManager*, "UnityEngine", "SubsystemManager");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.SubsystemManager
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeTypeAttribute] Offset: 10A3370
  class SubsystemManager : public ::Il2CppObject {
    public:
    // [DebuggerBrowsableAttribute] Offset: 0x10A346C
    // Get static field: static private System.Action reloadSubsytemsStarted
    static ::System::Action* _get_reloadSubsytemsStarted();
    // Set static field: static private System.Action reloadSubsytemsStarted
    static void _set_reloadSubsytemsStarted(::System::Action* value);
    // [DebuggerBrowsableAttribute] Offset: 0x10A34A8
    // Get static field: static private System.Action reloadSubsytemsCompleted
    static ::System::Action* _get_reloadSubsytemsCompleted();
    // Set static field: static private System.Action reloadSubsytemsCompleted
    static void _set_reloadSubsytemsCompleted(::System::Action* value);
    // static private System.Void .cctor()
    // Offset: 0x2B99518
    static void _cctor();
    // static System.Void ReportSingleSubsystemAnalytics(System.String id)
    // Offset: 0x2B98AE4
    static void ReportSingleSubsystemAnalytics(::StringW id);
    // static System.Void StaticConstructScriptingClassMap()
    // Offset: 0x2B9954C
    static void StaticConstructScriptingClassMap();
    // static private System.Void Internal_ReloadSubsystemsStarted()
    // Offset: 0x2B99580
    static void Internal_ReloadSubsystemsStarted();
    // static private System.Void Internal_ReloadSubsystemsCompleted()
    // Offset: 0x2B99628
    static void Internal_ReloadSubsystemsCompleted();
  }; // UnityEngine.SubsystemManager
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::SubsystemManager::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::SubsystemManager::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SubsystemManager*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::SubsystemManager::ReportSingleSubsystemAnalytics
// Il2CppName: ReportSingleSubsystemAnalytics
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&UnityEngine::SubsystemManager::ReportSingleSubsystemAnalytics)> {
  static const MethodInfo* get() {
    static auto* id = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SubsystemManager*), "ReportSingleSubsystemAnalytics", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{id});
  }
};
// Writing MetadataGetter for method: UnityEngine::SubsystemManager::StaticConstructScriptingClassMap
// Il2CppName: StaticConstructScriptingClassMap
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::SubsystemManager::StaticConstructScriptingClassMap)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SubsystemManager*), "StaticConstructScriptingClassMap", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::SubsystemManager::Internal_ReloadSubsystemsStarted
// Il2CppName: Internal_ReloadSubsystemsStarted
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::SubsystemManager::Internal_ReloadSubsystemsStarted)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SubsystemManager*), "Internal_ReloadSubsystemsStarted", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::SubsystemManager::Internal_ReloadSubsystemsCompleted
// Il2CppName: Internal_ReloadSubsystemsCompleted
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::SubsystemManager::Internal_ReloadSubsystemsCompleted)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SubsystemManager*), "Internal_ReloadSubsystemsCompleted", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
