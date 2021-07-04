// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
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
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: IObservableChange
  class IObservableChange {
    public:
    // Creating value type constructor for type: IObservableChange
    IObservableChange() noexcept {}
    // public System.Void add_didChangeEvent(System.Action value)
    // Offset: 0xFFFFFFFF
    void add_didChangeEvent(System::Action* value);
    // public System.Void remove_didChangeEvent(System.Action value)
    // Offset: 0xFFFFFFFF
    void remove_didChangeEvent(System::Action* value);
  }; // IObservableChange
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::IObservableChange*, "", "IObservableChange");
// Writing MetadataGetter for method: GlobalNamespace::IObservableChange::add_didChangeEvent
// Il2CppName: add_didChangeEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IObservableChange::*)(System::Action*)>(&GlobalNamespace::IObservableChange::add_didChangeEvent)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IObservableChange*), "add_didChangeEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Action*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IObservableChange::remove_didChangeEvent
// Il2CppName: remove_didChangeEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IObservableChange::*)(System::Action*)>(&GlobalNamespace::IObservableChange::remove_didChangeEvent)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IObservableChange*), "remove_didChangeEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Action*>()});
  }
};
