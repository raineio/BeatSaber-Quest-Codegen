// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include <initializer_list>
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.ResourceManagement.Util.ComponentSingleton`1
#include "UnityEngine/ResourceManagement/Util/ComponentSingleton_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: LinkedList`1<T>
  template<typename T>
  class LinkedList_1;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: Stack`1<T>
  template<typename T>
  class Stack_1;
  // Forward declaring type: LinkedListNode`1<T>
  template<typename T>
  class LinkedListNode_1;
}
// Forward declaring namespace: UnityEngine::ResourceManagement::Util
namespace UnityEngine::ResourceManagement::Util {
  // Skipping declaration: DelegateInfo because it is already included!
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Delegate
  class Delegate;
}
// Completed forward declares
// Type namespace: UnityEngine.ResourceManagement.Util
namespace UnityEngine::ResourceManagement::Util {
  // Forward declaring type: DelayedActionManager
  class DelayedActionManager;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::ResourceManagement::Util::DelayedActionManager);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::Util::DelayedActionManager*, "UnityEngine.ResourceManagement.Util", "DelayedActionManager");
// Type namespace: UnityEngine.ResourceManagement.Util
namespace UnityEngine::ResourceManagement::Util {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.ResourceManagement.Util.DelayedActionManager
  // [TokenAttribute] Offset: FFFFFFFF
  class DelayedActionManager : public ::UnityEngine::ResourceManagement::Util::ComponentSingleton_1<::UnityEngine::ResourceManagement::Util::DelayedActionManager*> {
    public:
    // Nested type: ::UnityEngine::ResourceManagement::Util::DelayedActionManager::DelegateInfo
    struct DelegateInfo;
    // Size: 0x1C
    #pragma pack(push, 1)
    // WARNING Layout: Sequential may not be correctly taken into account!
    // Autogenerated type: UnityEngine.ResourceManagement.Util.DelayedActionManager/UnityEngine.ResourceManagement.Util.DelegateInfo
    // [TokenAttribute] Offset: FFFFFFFF
    struct DelegateInfo/*, public ::System::ValueType*/ {
      public:
      public:
      // private System.Int32 m_Id
      // Size: 0x4
      // Offset: 0x0
      int m_Id;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // Padding between fields: m_Id and: m_Delegate
      char __padding0[0x4] = {};
      // private System.Delegate m_Delegate
      // Size: 0x8
      // Offset: 0x8
      ::System::Delegate* m_Delegate;
      // Field size check
      static_assert(sizeof(::System::Delegate*) == 0x8);
      // private System.Object[] m_Target
      // Size: 0x8
      // Offset: 0x10
      ::ArrayW<::Il2CppObject*> m_Target;
      // Field size check
      static_assert(sizeof(::ArrayW<::Il2CppObject*>) == 0x8);
      // private System.Single <InvocationTime>k__BackingField
      // Size: 0x4
      // Offset: 0x18
      float InvocationTime;
      // Field size check
      static_assert(sizeof(float) == 0x4);
      public:
      // Creating value type constructor for type: DelegateInfo
      constexpr DelegateInfo(int m_Id_ = {}, ::System::Delegate* m_Delegate_ = {}, ::ArrayW<::Il2CppObject*> m_Target_ = ::ArrayW<::Il2CppObject*>(static_cast<void*>(nullptr)), float InvocationTime_ = {}) noexcept : m_Id{m_Id_}, m_Delegate{m_Delegate_}, m_Target{m_Target_}, InvocationTime{InvocationTime_} {}
      // Creating interface conversion operator: operator ::System::ValueType
      operator ::System::ValueType() noexcept {
        return *reinterpret_cast<::System::ValueType*>(this);
      }
      // Creating interface conversion operator: i_ValueType
      inline ::System::ValueType* i_ValueType() noexcept {
        return reinterpret_cast<::System::ValueType*>(this);
      }
      // Get static field: static private System.Int32 s_Id
      static int _get_s_Id();
      // Set static field: static private System.Int32 s_Id
      static void _set_s_Id(int value);
      // Get instance field reference: private System.Int32 m_Id
      [[deprecated("Use field access instead!")]] int& dyn_m_Id();
      // Get instance field reference: private System.Delegate m_Delegate
      [[deprecated("Use field access instead!")]] ::System::Delegate*& dyn_m_Delegate();
      // Get instance field reference: private System.Object[] m_Target
      [[deprecated("Use field access instead!")]] ::ArrayW<::Il2CppObject*>& dyn_m_Target();
      // Get instance field reference: private System.Single <InvocationTime>k__BackingField
      [[deprecated("Use field access instead!")]] float& dyn_$InvocationTime$k__BackingField();
      // public System.Single get_InvocationTime()
      // Offset: 0x1F807C8
      float get_InvocationTime();
      // private System.Void set_InvocationTime(System.Single value)
      // Offset: 0x1F807D0
      void set_InvocationTime(float value);
      // public System.Void .ctor(System.Delegate d, System.Single invocationTime, params System.Object[] p)
      // Offset: 0x1F7FE98
      DelegateInfo(::System::Delegate* d, float invocationTime, ::ArrayW<::Il2CppObject*> p);
      // public System.Void Invoke()
      // Offset: 0x1F803F0
      void Invoke();
      // public override System.String ToString()
      // Offset: 0x1F807D8
      // Implemented from: System.ValueType
      // Base method: System.String ValueType::ToString()
      ::StringW ToString();
    }; // UnityEngine.ResourceManagement.Util.DelayedActionManager/UnityEngine.ResourceManagement.Util.DelegateInfo
    #pragma pack(pop)
    static check_size<sizeof(DelayedActionManager::DelegateInfo), 24 + sizeof(float)> __UnityEngine_ResourceManagement_Util_DelayedActionManager_DelegateInfoSizeCheck;
    static_assert(sizeof(DelayedActionManager::DelegateInfo) == 0x1C);
    public:
    // private System.Collections.Generic.List`1<UnityEngine.ResourceManagement.Util.DelayedActionManager/UnityEngine.ResourceManagement.Util.DelegateInfo>[] m_Actions
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::Util::DelayedActionManager::DelegateInfo>*> m_Actions;
    // Field size check
    static_assert(sizeof(::ArrayW<::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::Util::DelayedActionManager::DelegateInfo>*>) == 0x8);
    // private System.Collections.Generic.LinkedList`1<UnityEngine.ResourceManagement.Util.DelayedActionManager/UnityEngine.ResourceManagement.Util.DelegateInfo> m_DelayedActions
    // Size: 0x8
    // Offset: 0x20
    ::System::Collections::Generic::LinkedList_1<::UnityEngine::ResourceManagement::Util::DelayedActionManager::DelegateInfo>* m_DelayedActions;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::LinkedList_1<::UnityEngine::ResourceManagement::Util::DelayedActionManager::DelegateInfo>*) == 0x8);
    // private System.Collections.Generic.Stack`1<System.Collections.Generic.LinkedListNode`1<UnityEngine.ResourceManagement.Util.DelayedActionManager/UnityEngine.ResourceManagement.Util.DelegateInfo>> m_NodeCache
    // Size: 0x8
    // Offset: 0x28
    ::System::Collections::Generic::Stack_1<::System::Collections::Generic::LinkedListNode_1<::UnityEngine::ResourceManagement::Util::DelayedActionManager::DelegateInfo>*>* m_NodeCache;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Stack_1<::System::Collections::Generic::LinkedListNode_1<::UnityEngine::ResourceManagement::Util::DelayedActionManager::DelegateInfo>*>*) == 0x8);
    // private System.Int32 m_CollectionIndex
    // Size: 0x4
    // Offset: 0x30
    int m_CollectionIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Boolean m_DestroyOnCompletion
    // Size: 0x1
    // Offset: 0x34
    bool m_DestroyOnCompletion;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private System.Collections.Generic.List`1<UnityEngine.ResourceManagement.Util.DelayedActionManager/UnityEngine.ResourceManagement.Util.DelegateInfo>[] m_Actions
    [[deprecated("Use field access instead!")]] ::ArrayW<::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::Util::DelayedActionManager::DelegateInfo>*>& dyn_m_Actions();
    // Get instance field reference: private System.Collections.Generic.LinkedList`1<UnityEngine.ResourceManagement.Util.DelayedActionManager/UnityEngine.ResourceManagement.Util.DelegateInfo> m_DelayedActions
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::LinkedList_1<::UnityEngine::ResourceManagement::Util::DelayedActionManager::DelegateInfo>*& dyn_m_DelayedActions();
    // Get instance field reference: private System.Collections.Generic.Stack`1<System.Collections.Generic.LinkedListNode`1<UnityEngine.ResourceManagement.Util.DelayedActionManager/UnityEngine.ResourceManagement.Util.DelegateInfo>> m_NodeCache
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Stack_1<::System::Collections::Generic::LinkedListNode_1<::UnityEngine::ResourceManagement::Util::DelayedActionManager::DelegateInfo>*>*& dyn_m_NodeCache();
    // Get instance field reference: private System.Int32 m_CollectionIndex
    [[deprecated("Use field access instead!")]] int& dyn_m_CollectionIndex();
    // Get instance field reference: private System.Boolean m_DestroyOnCompletion
    [[deprecated("Use field access instead!")]] bool& dyn_m_DestroyOnCompletion();
    // static public System.Boolean get_IsActive()
    // Offset: 0x1F7FF20
    static bool get_IsActive();
    // private System.Collections.Generic.LinkedListNode`1<UnityEngine.ResourceManagement.Util.DelayedActionManager/UnityEngine.ResourceManagement.Util.DelegateInfo> GetNode(ref UnityEngine.ResourceManagement.Util.DelayedActionManager/UnityEngine.ResourceManagement.Util.DelegateInfo del)
    // Offset: 0x1F7FACC
    ::System::Collections::Generic::LinkedListNode_1<::UnityEngine::ResourceManagement::Util::DelayedActionManager::DelegateInfo>* GetNode(ByRef<::UnityEngine::ResourceManagement::Util::DelayedActionManager::DelegateInfo> del);
    // static public System.Void Clear()
    // Offset: 0x1F7FBA4
    static void Clear();
    // private System.Void DestroyWhenComplete()
    // Offset: 0x1F7FC14
    void DestroyWhenComplete();
    // static public System.Void AddAction(System.Delegate action, System.Single delay, params System.Object[] parameters)
    // Offset: 0x1F7FC20
    static void AddAction(::System::Delegate* action, float delay, ::ArrayW<::Il2CppObject*> parameters);
    // private System.Void AddActionInternal(System.Delegate action, System.Single delay, params System.Object[] parameters)
    // Offset: 0x1F7FC9C
    void AddActionInternal(::System::Delegate* action, float delay, ::ArrayW<::Il2CppObject*> parameters);
    // static public System.Boolean Wait(System.Single timeout, System.Single timeAdvanceAmount)
    // Offset: 0x1F80020
    static bool Wait(float timeout, float timeAdvanceAmount);
    // private System.Void LateUpdate()
    // Offset: 0x1F803C8
    void LateUpdate();
    // private System.Void InternalLateUpdate(System.Single t)
    // Offset: 0x1F80154
    void InternalLateUpdate(float t);
    // private System.Void OnApplicationQuit()
    // Offset: 0x1F805A4
    void OnApplicationQuit();
    // public System.Void .ctor()
    // Offset: 0x1F80650
    // Implemented from: UnityEngine.ResourceManagement.Util.ComponentSingleton`1
    // Base method: System.Void ComponentSingleton_1::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DelayedActionManager* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::ResourceManagement::Util::DelayedActionManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DelayedActionManager*, creationType>()));
    }
  }; // UnityEngine.ResourceManagement.Util.DelayedActionManager
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::Util::DelayedActionManager::DelegateInfo, "UnityEngine.ResourceManagement.Util", "DelayedActionManager/DelegateInfo");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::Util::DelayedActionManager::get_IsActive
// Il2CppName: get_IsActive
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&UnityEngine::ResourceManagement::Util::DelayedActionManager::get_IsActive)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::Util::DelayedActionManager*), "get_IsActive", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::Util::DelayedActionManager::GetNode
// Il2CppName: GetNode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::LinkedListNode_1<::UnityEngine::ResourceManagement::Util::DelayedActionManager::DelegateInfo>* (UnityEngine::ResourceManagement::Util::DelayedActionManager::*)(ByRef<::UnityEngine::ResourceManagement::Util::DelayedActionManager::DelegateInfo>)>(&UnityEngine::ResourceManagement::Util::DelayedActionManager::GetNode)> {
  static const MethodInfo* get() {
    static auto* del = &::il2cpp_utils::GetClassFromName("UnityEngine.ResourceManagement.Util", "DelayedActionManager/DelegateInfo")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::Util::DelayedActionManager*), "GetNode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{del});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::Util::DelayedActionManager::Clear
// Il2CppName: Clear
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::ResourceManagement::Util::DelayedActionManager::Clear)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::Util::DelayedActionManager*), "Clear", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::Util::DelayedActionManager::DestroyWhenComplete
// Il2CppName: DestroyWhenComplete
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::Util::DelayedActionManager::*)()>(&UnityEngine::ResourceManagement::Util::DelayedActionManager::DestroyWhenComplete)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::Util::DelayedActionManager*), "DestroyWhenComplete", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::Util::DelayedActionManager::AddAction
// Il2CppName: AddAction
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Delegate*, float, ::ArrayW<::Il2CppObject*>)>(&UnityEngine::ResourceManagement::Util::DelayedActionManager::AddAction)> {
  static const MethodInfo* get() {
    static auto* action = &::il2cpp_utils::GetClassFromName("System", "Delegate")->byval_arg;
    static auto* delay = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* parameters = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::Util::DelayedActionManager*), "AddAction", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{action, delay, parameters});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::Util::DelayedActionManager::AddActionInternal
// Il2CppName: AddActionInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::Util::DelayedActionManager::*)(::System::Delegate*, float, ::ArrayW<::Il2CppObject*>)>(&UnityEngine::ResourceManagement::Util::DelayedActionManager::AddActionInternal)> {
  static const MethodInfo* get() {
    static auto* action = &::il2cpp_utils::GetClassFromName("System", "Delegate")->byval_arg;
    static auto* delay = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* parameters = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::Util::DelayedActionManager*), "AddActionInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{action, delay, parameters});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::Util::DelayedActionManager::Wait
// Il2CppName: Wait
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(float, float)>(&UnityEngine::ResourceManagement::Util::DelayedActionManager::Wait)> {
  static const MethodInfo* get() {
    static auto* timeout = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* timeAdvanceAmount = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::Util::DelayedActionManager*), "Wait", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{timeout, timeAdvanceAmount});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::Util::DelayedActionManager::LateUpdate
// Il2CppName: LateUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::Util::DelayedActionManager::*)()>(&UnityEngine::ResourceManagement::Util::DelayedActionManager::LateUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::Util::DelayedActionManager*), "LateUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::Util::DelayedActionManager::InternalLateUpdate
// Il2CppName: InternalLateUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::Util::DelayedActionManager::*)(float)>(&UnityEngine::ResourceManagement::Util::DelayedActionManager::InternalLateUpdate)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::Util::DelayedActionManager*), "InternalLateUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::Util::DelayedActionManager::OnApplicationQuit
// Il2CppName: OnApplicationQuit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::Util::DelayedActionManager::*)()>(&UnityEngine::ResourceManagement::Util::DelayedActionManager::OnApplicationQuit)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::Util::DelayedActionManager*), "OnApplicationQuit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::Util::DelayedActionManager::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
