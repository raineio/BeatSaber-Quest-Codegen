// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Queue`1<T>
  template<typename T>
  class Queue_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`1<TResult>
  template<typename TResult>
  class Func_1;
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Forward declaring type: ObjectPool`1<T>
  template<typename T>
  class ObjectPool_1;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::ProBuilder::ObjectPool_1, "UnityEngine.ProBuilder", "ObjectPool`1");
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.ProBuilder.ObjectPool`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename T>
  class ObjectPool_1 : public ::Il2CppObject/*, public ::System::IDisposable*/ {
    public:
    public:
    // private System.Boolean m_IsDisposed
    // Size: 0x1
    // Offset: 0x0
    bool m_IsDisposed;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Collections.Generic.Queue`1<T> m_Pool
    // Size: 0x8
    // Offset: 0x0
    ::System::Collections::Generic::Queue_1<T>* m_Pool;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Queue_1<T>*) == 0x8);
    // public System.Int32 desiredSize
    // Size: 0x4
    // Offset: 0x0
    int desiredSize;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Func`1<T> constructor
    // Size: 0x8
    // Offset: 0x0
    ::System::Func_1<T>* constructor;
    // Field size check
    static_assert(sizeof(::System::Func_1<T>*) == 0x8);
    // public System.Action`1<T> destructor
    // Size: 0x8
    // Offset: 0x0
    ::System::Action_1<T>* destructor;
    // Field size check
    static_assert(sizeof(::System::Action_1<T>*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::IDisposable
    operator ::System::IDisposable() noexcept {
      return *reinterpret_cast<::System::IDisposable*>(this);
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Boolean m_IsDisposed
    [[deprecated("Use field access instead!")]] bool& dyn_m_IsDisposed() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::ProBuilder::ObjectPool_1::dyn_m_IsDisposed");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "m_IsDisposed"))->offset;
      return *reinterpret_cast<bool*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Collections.Generic.Queue`1<T> m_Pool
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Queue_1<T>*& dyn_m_Pool() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::ProBuilder::ObjectPool_1::dyn_m_Pool");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "m_Pool"))->offset;
      return *reinterpret_cast<::System::Collections::Generic::Queue_1<T>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: public System.Int32 desiredSize
    [[deprecated("Use field access instead!")]] int& dyn_desiredSize() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::ProBuilder::ObjectPool_1::dyn_desiredSize");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "desiredSize"))->offset;
      return *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: public System.Func`1<T> constructor
    [[deprecated("Use field access instead!")]] ::System::Func_1<T>*& dyn_constructor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::ProBuilder::ObjectPool_1::dyn_constructor");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "constructor"))->offset;
      return *reinterpret_cast<::System::Func_1<T>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: public System.Action`1<T> destructor
    [[deprecated("Use field access instead!")]] ::System::Action_1<T>*& dyn_destructor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::ProBuilder::ObjectPool_1::dyn_destructor");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "destructor"))->offset;
      return *reinterpret_cast<::System::Action_1<T>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // public System.Void .ctor(System.Int32 initialSize, System.Int32 desiredSize, System.Func`1<T> constructor, System.Action`1<T> destructor, System.Boolean lazyInitialization)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ObjectPool_1<T>* New_ctor(int initialSize, int desiredSize, ::System::Func_1<T>* constructor, ::System::Action_1<T>* destructor, bool lazyInitialization) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::ProBuilder::ObjectPool_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ObjectPool_1<T>*, creationType>(initialSize, desiredSize, constructor, destructor, lazyInitialization)));
    }
    // public T Dequeue()
    // Offset: 0xFFFFFFFFFFFFFFFF
    T Dequeue() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::ProBuilder::ObjectPool_1::Dequeue");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Dequeue", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<T, false>(this, ___internal__method);
    }
    // public System.Void Enqueue(T obj)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Enqueue(T obj) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::ProBuilder::ObjectPool_1::Enqueue");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Enqueue", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(obj)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, obj);
    }
    // public System.Void Empty()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Empty() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::ProBuilder::ObjectPool_1::Empty");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Empty", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method);
    }
    // public System.Void Dispose()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Dispose() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::ProBuilder::ObjectPool_1::Dispose");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Dispose", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method);
    }
    // private System.Void Dispose(System.Boolean disposing)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Dispose(bool disposing) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::ProBuilder::ObjectPool_1::Dispose");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Dispose", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(disposing)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, disposing);
    }
  }; // UnityEngine.ProBuilder.ObjectPool`1
  // Could not write size check! Type: UnityEngine.ProBuilder.ObjectPool`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
