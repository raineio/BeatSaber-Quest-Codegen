// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Events.UnityEventBase
#include "UnityEngine/Events/UnityEventBase.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Events
namespace UnityEngine::Events {
  // Forward declaring type: UnityAction
  class UnityAction;
  // Forward declaring type: BaseInvokableCall
  class BaseInvokableCall;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: MethodInfo
  class MethodInfo;
}
// Completed forward declares
// Type namespace: UnityEngine.Events
namespace UnityEngine::Events {
  // Forward declaring type: UnityEvent
  class UnityEvent;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Events::UnityEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Events::UnityEvent*, "UnityEngine.Events", "UnityEvent");
// Type namespace: UnityEngine.Events
namespace UnityEngine::Events {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Events.UnityEvent
  // [TokenAttribute] Offset: FFFFFFFF
  class UnityEvent : public ::UnityEngine::Events::UnityEventBase {
    public:
    // Writing base type padding for base size: 0x21 to desired offset: 0x28
    char ___base_padding[0x7] = {};
    public:
    // private System.Object[] m_InvokeArray
    // Size: 0x8
    // Offset: 0x28
    ::ArrayW<::Il2CppObject*> m_InvokeArray;
    // Field size check
    static_assert(sizeof(::ArrayW<::Il2CppObject*>) == 0x8);
    public:
    // Creating conversion operator: operator ::ArrayW<::Il2CppObject*>
    constexpr operator ::ArrayW<::Il2CppObject*>() const noexcept {
      return m_InvokeArray;
    }
    // Get instance field reference: private System.Object[] m_InvokeArray
    [[deprecated("Use field access instead!")]] ::ArrayW<::Il2CppObject*>& dyn_m_InvokeArray();
    // public System.Void AddListener(UnityEngine.Events.UnityAction call)
    // Offset: 0x1F99270
    void AddListener(::UnityEngine::Events::UnityAction* call);
    // public System.Void RemoveListener(UnityEngine.Events.UnityAction call)
    // Offset: 0x1F9932C
    void RemoveListener(::UnityEngine::Events::UnityAction* call);
    // static private UnityEngine.Events.BaseInvokableCall GetDelegate(UnityEngine.Events.UnityAction action)
    // Offset: 0x1F992A8
    static ::UnityEngine::Events::BaseInvokableCall* GetDelegate(::UnityEngine::Events::UnityAction* action);
    // public System.Void Invoke()
    // Offset: 0x1F9962C
    void Invoke();
    // public System.Void .ctor()
    // Offset: 0x1F991DC
    // Implemented from: UnityEngine.Events.UnityEventBase
    // Base method: System.Void UnityEventBase::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UnityEvent* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Events::UnityEvent::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UnityEvent*, creationType>()));
    }
    // protected override System.Reflection.MethodInfo FindMethod_Impl(System.String name, System.Object targetObj)
    // Offset: 0x1F9938C
    // Implemented from: UnityEngine.Events.UnityEventBase
    // Base method: System.Reflection.MethodInfo UnityEventBase::FindMethod_Impl(System.String name, System.Object targetObj)
    ::System::Reflection::MethodInfo* FindMethod_Impl(::StringW name, ::Il2CppObject* targetObj);
    // override UnityEngine.Events.BaseInvokableCall GetDelegate(System.Object target, System.Reflection.MethodInfo theFunction)
    // Offset: 0x1F995BC
    // Implemented from: UnityEngine.Events.UnityEventBase
    // Base method: UnityEngine.Events.BaseInvokableCall UnityEventBase::GetDelegate(System.Object target, System.Reflection.MethodInfo theFunction)
    ::UnityEngine::Events::BaseInvokableCall* GetDelegate(::Il2CppObject* target, ::System::Reflection::MethodInfo* theFunction);
  }; // UnityEngine.Events.UnityEvent
  #pragma pack(pop)
  static check_size<sizeof(UnityEvent), 40 + sizeof(::ArrayW<::Il2CppObject*>)> __UnityEngine_Events_UnityEventSizeCheck;
  static_assert(sizeof(UnityEvent) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Events::UnityEvent::AddListener
// Il2CppName: AddListener
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Events::UnityEvent::*)(::UnityEngine::Events::UnityAction*)>(&UnityEngine::Events::UnityEvent::AddListener)> {
  static const MethodInfo* get() {
    static auto* call = &::il2cpp_utils::GetClassFromName("UnityEngine.Events", "UnityAction")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Events::UnityEvent*), "AddListener", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{call});
  }
};
// Writing MetadataGetter for method: UnityEngine::Events::UnityEvent::RemoveListener
// Il2CppName: RemoveListener
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Events::UnityEvent::*)(::UnityEngine::Events::UnityAction*)>(&UnityEngine::Events::UnityEvent::RemoveListener)> {
  static const MethodInfo* get() {
    static auto* call = &::il2cpp_utils::GetClassFromName("UnityEngine.Events", "UnityAction")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Events::UnityEvent*), "RemoveListener", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{call});
  }
};
// Writing MetadataGetter for method: UnityEngine::Events::UnityEvent::GetDelegate
// Il2CppName: GetDelegate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Events::BaseInvokableCall* (*)(::UnityEngine::Events::UnityAction*)>(&UnityEngine::Events::UnityEvent::GetDelegate)> {
  static const MethodInfo* get() {
    static auto* action = &::il2cpp_utils::GetClassFromName("UnityEngine.Events", "UnityAction")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Events::UnityEvent*), "GetDelegate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{action});
  }
};
// Writing MetadataGetter for method: UnityEngine::Events::UnityEvent::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Events::UnityEvent::*)()>(&UnityEngine::Events::UnityEvent::Invoke)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Events::UnityEvent*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Events::UnityEvent::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Events::UnityEvent::FindMethod_Impl
// Il2CppName: FindMethod_Impl
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::MethodInfo* (UnityEngine::Events::UnityEvent::*)(::StringW, ::Il2CppObject*)>(&UnityEngine::Events::UnityEvent::FindMethod_Impl)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* targetObj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Events::UnityEvent*), "FindMethod_Impl", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, targetObj});
  }
};
// Writing MetadataGetter for method: UnityEngine::Events::UnityEvent::GetDelegate
// Il2CppName: GetDelegate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Events::BaseInvokableCall* (UnityEngine::Events::UnityEvent::*)(::Il2CppObject*, ::System::Reflection::MethodInfo*)>(&UnityEngine::Events::UnityEvent::GetDelegate)> {
  static const MethodInfo* get() {
    static auto* target = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* theFunction = &::il2cpp_utils::GetClassFromName("System.Reflection", "MethodInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Events::UnityEvent*), "GetDelegate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{target, theFunction});
  }
};
