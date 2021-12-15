// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Threading.IAsyncLocal
#include "System/Threading/IAsyncLocal.hpp"
// Including type: System.Threading.AsyncLocalValueChangedArgs`1
#include "System/Threading/AsyncLocalValueChangedArgs_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: System.Threading
namespace System::Threading {
  // Forward declaring type: AsyncLocal`1<T>
  template<typename T>
  class AsyncLocal_1;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::Threading::AsyncLocal_1, "System.Threading", "AsyncLocal`1");
// Type namespace: System.Threading
namespace System::Threading {
  // WARNING Size may be invalid!
  // Autogenerated type: System.Threading.AsyncLocal`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename T>
  class AsyncLocal_1 : public ::Il2CppObject/*, public System::Threading::IAsyncLocal*/ {
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
    // private readonly System.Action`1<System.Threading.AsyncLocalValueChangedArgs`1<T>> m_valueChangedHandler
    // Size: 0x8
    // Offset: 0x0
    System::Action_1<System::Threading::AsyncLocalValueChangedArgs_1<T>>* m_valueChangedHandler;
    // Field size check
    static_assert(sizeof(System::Action_1<System::Threading::AsyncLocalValueChangedArgs_1<T>>*) == 0x8);
    public:
    // Creating interface conversion operator: operator System::Threading::IAsyncLocal
    operator System::Threading::IAsyncLocal() noexcept {
      return *reinterpret_cast<System::Threading::IAsyncLocal*>(this);
    }
    // Creating conversion operator: operator System::Action_1<System::Threading::AsyncLocalValueChangedArgs_1<T>>*
    constexpr operator System::Action_1<System::Threading::AsyncLocalValueChangedArgs_1<T>>*() const noexcept {
      return m_valueChangedHandler;
    }
    // Autogenerated instance field getter
    // Get instance field: private readonly System.Action`1<System.Threading.AsyncLocalValueChangedArgs`1<T>> m_valueChangedHandler
    System::Action_1<System::Threading::AsyncLocalValueChangedArgs_1<T>>*& dyn_m_valueChangedHandler() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Threading::AsyncLocal_1::dyn_m_valueChangedHandler");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "m_valueChangedHandler"))->offset;
      return *reinterpret_cast<System::Action_1<System::Threading::AsyncLocalValueChangedArgs_1<T>>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // public System.Void set_Value(T value)
    // Offset: 0xFFFFFFFF
    void set_Value(T value) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Threading::AsyncLocal_1::set_Value");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "set_Value", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(value)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, value);
    }
    // public System.Void .ctor(System.Action`1<System.Threading.AsyncLocalValueChangedArgs`1<T>> valueChangedHandler)
    // Offset: 0xFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AsyncLocal_1<T>* New_ctor(System::Action_1<System::Threading::AsyncLocalValueChangedArgs_1<T>>* valueChangedHandler) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Threading::AsyncLocal_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AsyncLocal_1<T>*, creationType>(valueChangedHandler)));
    }
    // private System.Void System.Threading.IAsyncLocal.OnValueChanged(System.Object previousValueObj, System.Object currentValueObj, System.Boolean contextChanged)
    // Offset: 0xFFFFFFFF
    void System_Threading_IAsyncLocal_OnValueChanged(::Il2CppObject* previousValueObj, ::Il2CppObject* currentValueObj, bool contextChanged) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Threading::AsyncLocal_1::System.Threading.IAsyncLocal.OnValueChanged");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "System.Threading.IAsyncLocal.OnValueChanged", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(previousValueObj), ::il2cpp_utils::ExtractType(currentValueObj), ::il2cpp_utils::ExtractType(contextChanged)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, previousValueObj, currentValueObj, contextChanged);
    }
  }; // System.Threading.AsyncLocal`1
  // Could not write size check! Type: System.Threading.AsyncLocal`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
