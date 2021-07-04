// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Events.PersistentListenerMode
#include "UnityEngine/Events/PersistentListenerMode.hpp"
// Including type: UnityEngine.Events.UnityEventCallState
#include "UnityEngine/Events/UnityEventCallState.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Object
  class Object;
}
// Forward declaring namespace: UnityEngine::Events
namespace UnityEngine::Events {
  // Forward declaring type: ArgumentCache
  class ArgumentCache;
  // Forward declaring type: BaseInvokableCall
  class BaseInvokableCall;
  // Forward declaring type: UnityEventBase
  class UnityEventBase;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: MethodInfo
  class MethodInfo;
}
// Completed forward declares
// Type namespace: UnityEngine.Events
namespace UnityEngine::Events {
  // Size: 0x34
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Events.PersistentCall
  class PersistentCall : public ::Il2CppObject {
    public:
    // [FormerlySerializedAsAttribute] Offset: 0xD9431C
    // private UnityEngine.Object m_Target
    // Size: 0x8
    // Offset: 0x10
    UnityEngine::Object* m_Target;
    // Field size check
    static_assert(sizeof(UnityEngine::Object*) == 0x8);
    // [FormerlySerializedAsAttribute] Offset: 0xD94368
    // private System.String m_MethodName
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* m_MethodName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // [FormerlySerializedAsAttribute] Offset: 0xD943B4
    // private UnityEngine.Events.PersistentListenerMode m_Mode
    // Size: 0x4
    // Offset: 0x20
    UnityEngine::Events::PersistentListenerMode m_Mode;
    // Field size check
    static_assert(sizeof(UnityEngine::Events::PersistentListenerMode) == 0x4);
    // Padding between fields: m_Mode and: m_Arguments
    char __padding2[0x4] = {};
    // [FormerlySerializedAsAttribute] Offset: 0xD94400
    // private UnityEngine.Events.ArgumentCache m_Arguments
    // Size: 0x8
    // Offset: 0x28
    UnityEngine::Events::ArgumentCache* m_Arguments;
    // Field size check
    static_assert(sizeof(UnityEngine::Events::ArgumentCache*) == 0x8);
    // [FormerlySerializedAsAttribute] Offset: 0xD9444C
    // [FormerlySerializedAsAttribute] Offset: 0xD9444C
    // private UnityEngine.Events.UnityEventCallState m_CallState
    // Size: 0x4
    // Offset: 0x30
    UnityEngine::Events::UnityEventCallState m_CallState;
    // Field size check
    static_assert(sizeof(UnityEngine::Events::UnityEventCallState) == 0x4);
    // Creating value type constructor for type: PersistentCall
    PersistentCall(UnityEngine::Object* m_Target_ = {}, ::Il2CppString* m_MethodName_ = {}, UnityEngine::Events::PersistentListenerMode m_Mode_ = {}, UnityEngine::Events::ArgumentCache* m_Arguments_ = {}, UnityEngine::Events::UnityEventCallState m_CallState_ = {}) noexcept : m_Target{m_Target_}, m_MethodName{m_MethodName_}, m_Mode{m_Mode_}, m_Arguments{m_Arguments_}, m_CallState{m_CallState_} {}
    // public UnityEngine.Object get_target()
    // Offset: 0x1B95C6C
    UnityEngine::Object* get_target();
    // public System.String get_methodName()
    // Offset: 0x1B95C74
    ::Il2CppString* get_methodName();
    // public UnityEngine.Events.PersistentListenerMode get_mode()
    // Offset: 0x1B95C7C
    UnityEngine::Events::PersistentListenerMode get_mode();
    // public UnityEngine.Events.ArgumentCache get_arguments()
    // Offset: 0x1B95C84
    UnityEngine::Events::ArgumentCache* get_arguments();
    // public System.Boolean IsValid()
    // Offset: 0x1B95C8C
    bool IsValid();
    // public UnityEngine.Events.BaseInvokableCall GetRuntimeCall(UnityEngine.Events.UnityEventBase theEvent)
    // Offset: 0x1B95D20
    UnityEngine::Events::BaseInvokableCall* GetRuntimeCall(UnityEngine::Events::UnityEventBase* theEvent);
    // static private UnityEngine.Events.BaseInvokableCall GetObjectCall(UnityEngine.Object target, System.Reflection.MethodInfo method, UnityEngine.Events.ArgumentCache arguments)
    // Offset: 0x1B96090
    static UnityEngine::Events::BaseInvokableCall* GetObjectCall(UnityEngine::Object* target, System::Reflection::MethodInfo* method, UnityEngine::Events::ArgumentCache* arguments);
    // public System.Void .ctor()
    // Offset: 0x1B9649C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PersistentCall* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Events::PersistentCall::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PersistentCall*, creationType>()));
    }
  }; // UnityEngine.Events.PersistentCall
  #pragma pack(pop)
  static check_size<sizeof(PersistentCall), 48 + sizeof(UnityEngine::Events::UnityEventCallState)> __UnityEngine_Events_PersistentCallSizeCheck;
  static_assert(sizeof(PersistentCall) == 0x34);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Events::PersistentCall*, "UnityEngine.Events", "PersistentCall");
// Writing MetadataGetter for method: UnityEngine::Events::PersistentCall::get_target
// Il2CppName: get_target
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Object* (UnityEngine::Events::PersistentCall::*)()>(&UnityEngine::Events::PersistentCall::get_target)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Events::PersistentCall*), "get_target", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Events::PersistentCall::get_methodName
// Il2CppName: get_methodName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (UnityEngine::Events::PersistentCall::*)()>(&UnityEngine::Events::PersistentCall::get_methodName)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Events::PersistentCall*), "get_methodName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Events::PersistentCall::get_mode
// Il2CppName: get_mode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Events::PersistentListenerMode (UnityEngine::Events::PersistentCall::*)()>(&UnityEngine::Events::PersistentCall::get_mode)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Events::PersistentCall*), "get_mode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Events::PersistentCall::get_arguments
// Il2CppName: get_arguments
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Events::ArgumentCache* (UnityEngine::Events::PersistentCall::*)()>(&UnityEngine::Events::PersistentCall::get_arguments)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Events::PersistentCall*), "get_arguments", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Events::PersistentCall::IsValid
// Il2CppName: IsValid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Events::PersistentCall::*)()>(&UnityEngine::Events::PersistentCall::IsValid)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Events::PersistentCall*), "IsValid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Events::PersistentCall::GetRuntimeCall
// Il2CppName: GetRuntimeCall
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Events::BaseInvokableCall* (UnityEngine::Events::PersistentCall::*)(UnityEngine::Events::UnityEventBase*)>(&UnityEngine::Events::PersistentCall::GetRuntimeCall)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Events::PersistentCall*), "GetRuntimeCall", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Events::UnityEventBase*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::Events::PersistentCall::GetObjectCall
// Il2CppName: GetObjectCall
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Events::BaseInvokableCall* (*)(UnityEngine::Object*, System::Reflection::MethodInfo*, UnityEngine::Events::ArgumentCache*)>(&UnityEngine::Events::PersistentCall::GetObjectCall)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Events::PersistentCall*), "GetObjectCall", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Object*>(), ::il2cpp_utils::ExtractIndependentType<System::Reflection::MethodInfo*>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Events::ArgumentCache*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::Events::PersistentCall::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
