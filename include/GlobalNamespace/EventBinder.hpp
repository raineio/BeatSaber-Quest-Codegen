// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: EventBinder
  class EventBinder;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::EventBinder);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EventBinder*, "", "EventBinder");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: EventBinder
  // [TokenAttribute] Offset: FFFFFFFF
  class EventBinder : public ::Il2CppObject {
    public:
    public:
    // private System.Collections.Generic.List`1<System.Action> _unsubscribes
    // Size: 0x8
    // Offset: 0x10
    ::System::Collections::Generic::List_1<::System::Action*>* unsubscribes;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::System::Action*>*) == 0x8);
    public:
    // Creating conversion operator: operator ::System::Collections::Generic::List_1<::System::Action*>*
    constexpr operator ::System::Collections::Generic::List_1<::System::Action*>*() const noexcept {
      return unsubscribes;
    }
    // Get instance field reference: private System.Collections.Generic.List`1<System.Action> _unsubscribes
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::System::Action*>*& dyn__unsubscribes();
    // public System.Void .ctor()
    // Offset: 0x161FDE0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EventBinder* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::EventBinder::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EventBinder*, creationType>()));
    }
    // public System.Void Bind(System.Action subscribe, System.Action unsubscribe)
    // Offset: 0x161FC54
    void Bind(::System::Action* subscribe, ::System::Action* unsubscribe);
    // public System.Void ClearAllBindings()
    // Offset: 0x161FCD0
    void ClearAllBindings();
  }; // EventBinder
  #pragma pack(pop)
  static check_size<sizeof(EventBinder), 16 + sizeof(::System::Collections::Generic::List_1<::System::Action*>*)> __GlobalNamespace_EventBinderSizeCheck;
  static_assert(sizeof(EventBinder) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::EventBinder::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::EventBinder::Bind
// Il2CppName: Bind
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EventBinder::*)(::System::Action*, ::System::Action*)>(&GlobalNamespace::EventBinder::Bind)> {
  static const MethodInfo* get() {
    static auto* subscribe = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    static auto* unsubscribe = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EventBinder*), "Bind", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{subscribe, unsubscribe});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EventBinder::ClearAllBindings
// Il2CppName: ClearAllBindings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EventBinder::*)()>(&GlobalNamespace::EventBinder::ClearAllBindings)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EventBinder*), "ClearAllBindings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
