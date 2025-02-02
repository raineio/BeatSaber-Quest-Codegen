// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: ILevelEndActions
#include "GlobalNamespace/ILevelEndActions.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
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
  // Forward declaring type: MockLevelEndActions
  class MockLevelEndActions;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::MockLevelEndActions);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MockLevelEndActions*, "", "MockLevelEndActions");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: MockLevelEndActions
  // [TokenAttribute] Offset: FFFFFFFF
  class MockLevelEndActions : public ::Il2CppObject/*, public ::GlobalNamespace::ILevelEndActions*/ {
    public:
    public:
    // private System.Action levelFailedEvent
    // Size: 0x8
    // Offset: 0x10
    ::System::Action* levelFailedEvent;
    // Field size check
    static_assert(sizeof(::System::Action*) == 0x8);
    // private System.Action levelFinishedEvent
    // Size: 0x8
    // Offset: 0x18
    ::System::Action* levelFinishedEvent;
    // Field size check
    static_assert(sizeof(::System::Action*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::GlobalNamespace::ILevelEndActions
    operator ::GlobalNamespace::ILevelEndActions() noexcept {
      return *reinterpret_cast<::GlobalNamespace::ILevelEndActions*>(this);
    }
    // Creating interface conversion operator: i_ILevelEndActions
    inline ::GlobalNamespace::ILevelEndActions* i_ILevelEndActions() noexcept {
      return reinterpret_cast<::GlobalNamespace::ILevelEndActions*>(this);
    }
    // Get instance field reference: private System.Action levelFailedEvent
    [[deprecated("Use field access instead!")]] ::System::Action*& dyn_levelFailedEvent();
    // Get instance field reference: private System.Action levelFinishedEvent
    [[deprecated("Use field access instead!")]] ::System::Action*& dyn_levelFinishedEvent();
    // public System.Void add_levelFailedEvent(System.Action value)
    // Offset: 0x149AA24
    void add_levelFailedEvent(::System::Action* value);
    // public System.Void remove_levelFailedEvent(System.Action value)
    // Offset: 0x149AAC8
    void remove_levelFailedEvent(::System::Action* value);
    // public System.Void add_levelFinishedEvent(System.Action value)
    // Offset: 0x149AB6C
    void add_levelFinishedEvent(::System::Action* value);
    // public System.Void remove_levelFinishedEvent(System.Action value)
    // Offset: 0x149AC10
    void remove_levelFinishedEvent(::System::Action* value);
    // public System.Void .ctor()
    // Offset: 0x149ACB4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MockLevelEndActions* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MockLevelEndActions::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MockLevelEndActions*, creationType>()));
    }
  }; // MockLevelEndActions
  #pragma pack(pop)
  static check_size<sizeof(MockLevelEndActions), 24 + sizeof(::System::Action*)> __GlobalNamespace_MockLevelEndActionsSizeCheck;
  static_assert(sizeof(MockLevelEndActions) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MockLevelEndActions::add_levelFailedEvent
// Il2CppName: add_levelFailedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MockLevelEndActions::*)(::System::Action*)>(&GlobalNamespace::MockLevelEndActions::add_levelFailedEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MockLevelEndActions*), "add_levelFailedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MockLevelEndActions::remove_levelFailedEvent
// Il2CppName: remove_levelFailedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MockLevelEndActions::*)(::System::Action*)>(&GlobalNamespace::MockLevelEndActions::remove_levelFailedEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MockLevelEndActions*), "remove_levelFailedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MockLevelEndActions::add_levelFinishedEvent
// Il2CppName: add_levelFinishedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MockLevelEndActions::*)(::System::Action*)>(&GlobalNamespace::MockLevelEndActions::add_levelFinishedEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MockLevelEndActions*), "add_levelFinishedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MockLevelEndActions::remove_levelFinishedEvent
// Il2CppName: remove_levelFinishedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MockLevelEndActions::*)(::System::Action*)>(&GlobalNamespace::MockLevelEndActions::remove_levelFinishedEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MockLevelEndActions*), "remove_levelFinishedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MockLevelEndActions::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
