// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::ComponentModel
namespace System::ComponentModel {
  // Forward declaring type: Component
  class Component;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Delegate
  class Delegate;
}
// Completed forward declares
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.ComponentModel.EventHandlerList
  // [TokenAttribute] Offset: FFFFFFFF
  // [DefaultMemberAttribute] Offset: E694BC
  class EventHandlerList : public ::Il2CppObject {
    public:
    // Nested type: System::ComponentModel::EventHandlerList::ListEntry
    class ListEntry;
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    private:
    #endif
    // private System.ComponentModel.EventHandlerList/System.ComponentModel.ListEntry head
    // Size: 0x8
    // Offset: 0x10
    System::ComponentModel::EventHandlerList::ListEntry* head;
    // Field size check
    static_assert(sizeof(System::ComponentModel::EventHandlerList::ListEntry*) == 0x8);
    // private System.ComponentModel.Component parent
    // Size: 0x8
    // Offset: 0x18
    System::ComponentModel::Component* parent;
    // Field size check
    static_assert(sizeof(System::ComponentModel::Component*) == 0x8);
    public:
    // Get instance field reference: private System.ComponentModel.EventHandlerList/System.ComponentModel.ListEntry head
    System::ComponentModel::EventHandlerList::ListEntry*& dyn_head();
    // Get instance field reference: private System.ComponentModel.Component parent
    System::ComponentModel::Component*& dyn_parent();
    // public System.Delegate get_Item(System.Object key)
    // Offset: 0x1A21C3C
    System::Delegate* get_Item(::Il2CppObject* key);
    // private System.ComponentModel.EventHandlerList/System.ComponentModel.ListEntry Find(System.Object key)
    // Offset: 0x1A23170
    System::ComponentModel::EventHandlerList::ListEntry* Find(::Il2CppObject* key);
  }; // System.ComponentModel.EventHandlerList
  #pragma pack(pop)
  static check_size<sizeof(EventHandlerList), 24 + sizeof(System::ComponentModel::Component*)> __System_ComponentModel_EventHandlerListSizeCheck;
  static_assert(sizeof(EventHandlerList) == 0x20);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::ComponentModel::EventHandlerList*, "System.ComponentModel", "EventHandlerList");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::ComponentModel::EventHandlerList::get_Item
// Il2CppName: get_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Delegate* (System::ComponentModel::EventHandlerList::*)(::Il2CppObject*)>(&System::ComponentModel::EventHandlerList::get_Item)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::EventHandlerList*), "get_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::EventHandlerList::Find
// Il2CppName: Find
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::ComponentModel::EventHandlerList::ListEntry* (System::ComponentModel::EventHandlerList::*)(::Il2CppObject*)>(&System::ComponentModel::EventHandlerList::Find)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::EventHandlerList*), "Find", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key});
  }
};
