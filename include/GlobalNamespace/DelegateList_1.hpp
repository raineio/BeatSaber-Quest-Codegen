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
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: LinkedListNode`1<T>
  template<typename T>
  class LinkedListNode_1;
  // Forward declaring type: LinkedList`1<T>
  template<typename T>
  class LinkedList_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: DelegateList`1<T>
  template<typename T>
  class DelegateList_1;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::DelegateList_1, "", "DelegateList`1");
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: DelegateList`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename T>
  class DelegateList_1 : public ::Il2CppObject {
    public:
    public:
    // private System.Func`2<System.Action`1<T>,System.Collections.Generic.LinkedListNode`1<System.Action`1<T>>> m_acquireFunc
    // Size: 0x8
    // Offset: 0x0
    ::System::Func_2<::System::Action_1<T>*, ::System::Collections::Generic::LinkedListNode_1<::System::Action_1<T>*>*>* m_acquireFunc;
    // Field size check
    static_assert(sizeof(::System::Func_2<::System::Action_1<T>*, ::System::Collections::Generic::LinkedListNode_1<::System::Action_1<T>*>*>*) == 0x8);
    // private System.Action`1<System.Collections.Generic.LinkedListNode`1<System.Action`1<T>>> m_releaseFunc
    // Size: 0x8
    // Offset: 0x0
    ::System::Action_1<::System::Collections::Generic::LinkedListNode_1<::System::Action_1<T>*>*>* m_releaseFunc;
    // Field size check
    static_assert(sizeof(::System::Action_1<::System::Collections::Generic::LinkedListNode_1<::System::Action_1<T>*>*>*) == 0x8);
    // private System.Collections.Generic.LinkedList`1<System.Action`1<T>> m_callbacks
    // Size: 0x8
    // Offset: 0x0
    ::System::Collections::Generic::LinkedList_1<::System::Action_1<T>*>* m_callbacks;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::LinkedList_1<::System::Action_1<T>*>*) == 0x8);
    // private System.Boolean m_invoking
    // Size: 0x1
    // Offset: 0x0
    bool m_invoking;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Autogenerated instance field getter
    // Get instance field: private System.Func`2<System.Action`1<T>,System.Collections.Generic.LinkedListNode`1<System.Action`1<T>>> m_acquireFunc
    [[deprecated("Use field access instead!")]] ::System::Func_2<::System::Action_1<T>*, ::System::Collections::Generic::LinkedListNode_1<::System::Action_1<T>*>*>*& dyn_m_acquireFunc() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::DelegateList_1::dyn_m_acquireFunc");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "m_acquireFunc"))->offset;
      return *reinterpret_cast<::System::Func_2<::System::Action_1<T>*, ::System::Collections::Generic::LinkedListNode_1<::System::Action_1<T>*>*>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Action`1<System.Collections.Generic.LinkedListNode`1<System.Action`1<T>>> m_releaseFunc
    [[deprecated("Use field access instead!")]] ::System::Action_1<::System::Collections::Generic::LinkedListNode_1<::System::Action_1<T>*>*>*& dyn_m_releaseFunc() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::DelegateList_1::dyn_m_releaseFunc");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "m_releaseFunc"))->offset;
      return *reinterpret_cast<::System::Action_1<::System::Collections::Generic::LinkedListNode_1<::System::Action_1<T>*>*>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Collections.Generic.LinkedList`1<System.Action`1<T>> m_callbacks
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::LinkedList_1<::System::Action_1<T>*>*& dyn_m_callbacks() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::DelegateList_1::dyn_m_callbacks");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "m_callbacks"))->offset;
      return *reinterpret_cast<::System::Collections::Generic::LinkedList_1<::System::Action_1<T>*>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Boolean m_invoking
    [[deprecated("Use field access instead!")]] bool& dyn_m_invoking() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::DelegateList_1::dyn_m_invoking");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "m_invoking"))->offset;
      return *reinterpret_cast<bool*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // public System.Int32 get_Count()
    // Offset: 0xFFFFFFFFFFFFFFFF
    int get_Count() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::DelegateList_1::get_Count");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_Count", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<int, false>(this, ___internal__method);
    }
    // public System.Void .ctor(System.Func`2<System.Action`1<T>,System.Collections.Generic.LinkedListNode`1<System.Action`1<T>>> acquireFunc, System.Action`1<System.Collections.Generic.LinkedListNode`1<System.Action`1<T>>> releaseFunc)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DelegateList_1<T>* New_ctor(::System::Func_2<::System::Action_1<T>*, ::System::Collections::Generic::LinkedListNode_1<::System::Action_1<T>*>*>* acquireFunc, ::System::Action_1<::System::Collections::Generic::LinkedListNode_1<::System::Action_1<T>*>*>* releaseFunc) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::DelegateList_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DelegateList_1<T>*, creationType>(acquireFunc, releaseFunc)));
    }
    // public System.Void Add(System.Action`1<T> action)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Add(::System::Action_1<T>* action) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::DelegateList_1::Add");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Add", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(action)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, action);
    }
    // public System.Void Remove(System.Action`1<T> action)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Remove(::System::Action_1<T>* action) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::DelegateList_1::Remove");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Remove", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(action)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, action);
    }
    // public System.Void Invoke(T res)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Invoke(T res) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::DelegateList_1::Invoke");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Invoke", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(res)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, res);
    }
    // public System.Void Clear()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Clear() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::DelegateList_1::Clear");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Clear", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method);
    }
    // static public DelegateList`1<T> CreateWithGlobalCache()
    // Offset: 0xFFFFFFFFFFFFFFFF
    static ::GlobalNamespace::DelegateList_1<T>* CreateWithGlobalCache() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::DelegateList_1::CreateWithGlobalCache");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<DelegateList_1<T>*>::get(), "CreateWithGlobalCache", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<::GlobalNamespace::DelegateList_1<T>*, false>(static_cast<Il2CppObject*>(nullptr), ___internal__method);
    }
  }; // DelegateList`1
  // Could not write size check! Type: DelegateList`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
