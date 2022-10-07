// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: ILevelStartController
  class ILevelStartController;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::ILevelStartController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ILevelStartController*, "", "ILevelStartController");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: ILevelStartController
  // [TokenAttribute] Offset: FFFFFFFF
  class ILevelStartController {
    public:
    // public System.Void add_levelWillStartIntroEvent(System.Action value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void add_levelWillStartIntroEvent(::System::Action* value);
    // public System.Void remove_levelWillStartIntroEvent(System.Action value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void remove_levelWillStartIntroEvent(::System::Action* value);
    // public System.Void add_levelDidStartEvent(System.Action value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void add_levelDidStartEvent(::System::Action* value);
    // public System.Void remove_levelDidStartEvent(System.Action value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void remove_levelDidStartEvent(::System::Action* value);
  }; // ILevelStartController
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ILevelStartController::add_levelWillStartIntroEvent
// Il2CppName: add_levelWillStartIntroEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ILevelStartController::*)(::System::Action*)>(&GlobalNamespace::ILevelStartController::add_levelWillStartIntroEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ILevelStartController*), "add_levelWillStartIntroEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ILevelStartController::remove_levelWillStartIntroEvent
// Il2CppName: remove_levelWillStartIntroEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ILevelStartController::*)(::System::Action*)>(&GlobalNamespace::ILevelStartController::remove_levelWillStartIntroEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ILevelStartController*), "remove_levelWillStartIntroEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ILevelStartController::add_levelDidStartEvent
// Il2CppName: add_levelDidStartEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ILevelStartController::*)(::System::Action*)>(&GlobalNamespace::ILevelStartController::add_levelDidStartEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ILevelStartController*), "add_levelDidStartEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ILevelStartController::remove_levelDidStartEvent
// Il2CppName: remove_levelDidStartEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ILevelStartController::*)(::System::Action*)>(&GlobalNamespace::ILevelStartController::remove_levelDidStartEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ILevelStartController*), "remove_levelDidStartEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};