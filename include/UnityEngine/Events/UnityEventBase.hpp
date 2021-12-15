// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.ISerializationCallbackReceiver
#include "UnityEngine/ISerializationCallbackReceiver.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Events
namespace UnityEngine::Events {
  // Forward declaring type: InvokableCallList
  class InvokableCallList;
  // Forward declaring type: PersistentCallGroup
  class PersistentCallGroup;
  // Forward declaring type: BaseInvokableCall
  class BaseInvokableCall;
  // Forward declaring type: PersistentCall
  class PersistentCall;
  // Forward declaring type: PersistentListenerMode
  struct PersistentListenerMode;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: MethodInfo
  class MethodInfo;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: UnityEngine.Events
namespace UnityEngine::Events {
  // Forward declaring type: UnityEventBase
  class UnityEventBase;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(UnityEngine::Events::UnityEventBase);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Events::UnityEventBase*, "UnityEngine.Events", "UnityEventBase");
// Type namespace: UnityEngine.Events
namespace UnityEngine::Events {
  // Size: 0x21
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Events.UnityEventBase
  // [TokenAttribute] Offset: FFFFFFFF
  // [UsedByNativeCodeAttribute] Offset: EB5B50
  class UnityEventBase : public ::Il2CppObject/*, public UnityEngine::ISerializationCallbackReceiver*/ {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private UnityEngine.Events.InvokableCallList m_Calls
    // Size: 0x8
    // Offset: 0x10
    UnityEngine::Events::InvokableCallList* m_Calls;
    // Field size check
    static_assert(sizeof(UnityEngine::Events::InvokableCallList*) == 0x8);
    // [FormerlySerializedAsAttribute] Offset: 0xEB90B8
    // private UnityEngine.Events.PersistentCallGroup m_PersistentCalls
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::Events::PersistentCallGroup* m_PersistentCalls;
    // Field size check
    static_assert(sizeof(UnityEngine::Events::PersistentCallGroup*) == 0x8);
    // private System.Boolean m_CallsDirty
    // Size: 0x1
    // Offset: 0x20
    bool m_CallsDirty;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating interface conversion operator: operator UnityEngine::ISerializationCallbackReceiver
    operator UnityEngine::ISerializationCallbackReceiver() noexcept {
      return *reinterpret_cast<UnityEngine::ISerializationCallbackReceiver*>(this);
    }
    // Get instance field reference: private UnityEngine.Events.InvokableCallList m_Calls
    UnityEngine::Events::InvokableCallList*& dyn_m_Calls();
    // Get instance field reference: private UnityEngine.Events.PersistentCallGroup m_PersistentCalls
    UnityEngine::Events::PersistentCallGroup*& dyn_m_PersistentCalls();
    // Get instance field reference: private System.Boolean m_CallsDirty
    bool& dyn_m_CallsDirty();
    // private System.Void UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize()
    // Offset: 0x1D0CF44
    void UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize();
    // private System.Void UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize()
    // Offset: 0x1D0CF48
    void UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize();
    // protected System.Reflection.MethodInfo FindMethod_Impl(System.String name, System.Object targetObj)
    // Offset: 0xFFFFFFFF
    System::Reflection::MethodInfo* FindMethod_Impl(::Il2CppString* name, ::Il2CppObject* targetObj);
    // UnityEngine.Events.BaseInvokableCall GetDelegate(System.Object target, System.Reflection.MethodInfo theFunction)
    // Offset: 0xFFFFFFFF
    UnityEngine::Events::BaseInvokableCall* GetDelegate(::Il2CppObject* target, System::Reflection::MethodInfo* theFunction);
    // System.Reflection.MethodInfo FindMethod(UnityEngine.Events.PersistentCall call)
    // Offset: 0x1D0C128
    System::Reflection::MethodInfo* FindMethod(UnityEngine::Events::PersistentCall* call);
    // System.Reflection.MethodInfo FindMethod(System.String name, System.Object listener, UnityEngine.Events.PersistentListenerMode mode, System.Type argumentType)
    // Offset: 0x1D0CF80
    System::Reflection::MethodInfo* FindMethod(::Il2CppString* name, ::Il2CppObject* listener, UnityEngine::Events::PersistentListenerMode mode, System::Type* argumentType);
    // public System.Int32 GetPersistentEventCount()
    // Offset: 0x1D0D220
    int GetPersistentEventCount();
    // private System.Void DirtyPersistentCalls()
    // Offset: 0x1D0CF4C
    void DirtyPersistentCalls();
    // private System.Void RebuildPersistentCallsIfNeeded()
    // Offset: 0x1D0D238
    void RebuildPersistentCallsIfNeeded();
    // System.Void AddCall(UnityEngine.Events.BaseInvokableCall call)
    // Offset: 0x1D0CA74
    void AddCall(UnityEngine::Events::BaseInvokableCall* call);
    // protected System.Void RemoveListener(System.Object targetObj, System.Reflection.MethodInfo method)
    // Offset: 0x1D0CAD4
    void RemoveListener(::Il2CppObject* targetObj, System::Reflection::MethodInfo* method);
    // System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall> PrepareInvoke()
    // Offset: 0x1D0CF18
    System::Collections::Generic::List_1<UnityEngine::Events::BaseInvokableCall*>* PrepareInvoke();
    // static public System.Reflection.MethodInfo GetValidMethodInfo(System.Object obj, System.String functionName, System.Type[] argumentTypes)
    // Offset: 0x1D0CB58
    static System::Reflection::MethodInfo* GetValidMethodInfo(::Il2CppObject* obj, ::Il2CppString* functionName, ::ArrayW<System::Type*> argumentTypes);
    // protected System.Void .ctor()
    // Offset: 0x1D0C944
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UnityEventBase* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Events::UnityEventBase::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UnityEventBase*, creationType>()));
    }
    // public override System.String ToString()
    // Offset: 0x1D0D278
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
  }; // UnityEngine.Events.UnityEventBase
  #pragma pack(pop)
  static check_size<sizeof(UnityEventBase), 32 + sizeof(bool)> __UnityEngine_Events_UnityEventBaseSizeCheck;
  static_assert(sizeof(UnityEventBase) == 0x21);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Events::UnityEventBase::UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize
// Il2CppName: UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Events::UnityEventBase::*)()>(&UnityEngine::Events::UnityEventBase::UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Events::UnityEventBase*), "UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Events::UnityEventBase::UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize
// Il2CppName: UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Events::UnityEventBase::*)()>(&UnityEngine::Events::UnityEventBase::UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Events::UnityEventBase*), "UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Events::UnityEventBase::FindMethod_Impl
// Il2CppName: FindMethod_Impl
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::MethodInfo* (UnityEngine::Events::UnityEventBase::*)(::Il2CppString*, ::Il2CppObject*)>(&UnityEngine::Events::UnityEventBase::FindMethod_Impl)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* targetObj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Events::UnityEventBase*), "FindMethod_Impl", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, targetObj});
  }
};
// Writing MetadataGetter for method: UnityEngine::Events::UnityEventBase::GetDelegate
// Il2CppName: GetDelegate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Events::BaseInvokableCall* (UnityEngine::Events::UnityEventBase::*)(::Il2CppObject*, System::Reflection::MethodInfo*)>(&UnityEngine::Events::UnityEventBase::GetDelegate)> {
  static const MethodInfo* get() {
    static auto* target = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* theFunction = &::il2cpp_utils::GetClassFromName("System.Reflection", "MethodInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Events::UnityEventBase*), "GetDelegate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{target, theFunction});
  }
};
// Writing MetadataGetter for method: UnityEngine::Events::UnityEventBase::FindMethod
// Il2CppName: FindMethod
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::MethodInfo* (UnityEngine::Events::UnityEventBase::*)(UnityEngine::Events::PersistentCall*)>(&UnityEngine::Events::UnityEventBase::FindMethod)> {
  static const MethodInfo* get() {
    static auto* call = &::il2cpp_utils::GetClassFromName("UnityEngine.Events", "PersistentCall")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Events::UnityEventBase*), "FindMethod", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{call});
  }
};
// Writing MetadataGetter for method: UnityEngine::Events::UnityEventBase::FindMethod
// Il2CppName: FindMethod
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::MethodInfo* (UnityEngine::Events::UnityEventBase::*)(::Il2CppString*, ::Il2CppObject*, UnityEngine::Events::PersistentListenerMode, System::Type*)>(&UnityEngine::Events::UnityEventBase::FindMethod)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* listener = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* mode = &::il2cpp_utils::GetClassFromName("UnityEngine.Events", "PersistentListenerMode")->byval_arg;
    static auto* argumentType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Events::UnityEventBase*), "FindMethod", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, listener, mode, argumentType});
  }
};
// Writing MetadataGetter for method: UnityEngine::Events::UnityEventBase::GetPersistentEventCount
// Il2CppName: GetPersistentEventCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::Events::UnityEventBase::*)()>(&UnityEngine::Events::UnityEventBase::GetPersistentEventCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Events::UnityEventBase*), "GetPersistentEventCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Events::UnityEventBase::DirtyPersistentCalls
// Il2CppName: DirtyPersistentCalls
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Events::UnityEventBase::*)()>(&UnityEngine::Events::UnityEventBase::DirtyPersistentCalls)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Events::UnityEventBase*), "DirtyPersistentCalls", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Events::UnityEventBase::RebuildPersistentCallsIfNeeded
// Il2CppName: RebuildPersistentCallsIfNeeded
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Events::UnityEventBase::*)()>(&UnityEngine::Events::UnityEventBase::RebuildPersistentCallsIfNeeded)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Events::UnityEventBase*), "RebuildPersistentCallsIfNeeded", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Events::UnityEventBase::AddCall
// Il2CppName: AddCall
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Events::UnityEventBase::*)(UnityEngine::Events::BaseInvokableCall*)>(&UnityEngine::Events::UnityEventBase::AddCall)> {
  static const MethodInfo* get() {
    static auto* call = &::il2cpp_utils::GetClassFromName("UnityEngine.Events", "BaseInvokableCall")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Events::UnityEventBase*), "AddCall", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{call});
  }
};
// Writing MetadataGetter for method: UnityEngine::Events::UnityEventBase::RemoveListener
// Il2CppName: RemoveListener
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Events::UnityEventBase::*)(::Il2CppObject*, System::Reflection::MethodInfo*)>(&UnityEngine::Events::UnityEventBase::RemoveListener)> {
  static const MethodInfo* get() {
    static auto* targetObj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* method = &::il2cpp_utils::GetClassFromName("System.Reflection", "MethodInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Events::UnityEventBase*), "RemoveListener", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{targetObj, method});
  }
};
// Writing MetadataGetter for method: UnityEngine::Events::UnityEventBase::PrepareInvoke
// Il2CppName: PrepareInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::List_1<UnityEngine::Events::BaseInvokableCall*>* (UnityEngine::Events::UnityEventBase::*)()>(&UnityEngine::Events::UnityEventBase::PrepareInvoke)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Events::UnityEventBase*), "PrepareInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Events::UnityEventBase::GetValidMethodInfo
// Il2CppName: GetValidMethodInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::MethodInfo* (*)(::Il2CppObject*, ::Il2CppString*, ::ArrayW<System::Type*>)>(&UnityEngine::Events::UnityEventBase::GetValidMethodInfo)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* functionName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* argumentTypes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Type"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Events::UnityEventBase*), "GetValidMethodInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj, functionName, argumentTypes});
  }
};
// Writing MetadataGetter for method: UnityEngine::Events::UnityEventBase::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Events::UnityEventBase::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (UnityEngine::Events::UnityEventBase::*)()>(&UnityEngine::Events::UnityEventBase::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Events::UnityEventBase*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
