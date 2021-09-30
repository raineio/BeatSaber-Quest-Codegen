// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.PlaceholderFactoryBase`1
#include "Zenject/PlaceholderFactoryBase_1.hpp"
// Including type: Zenject.IFactory`4
#include "Zenject/IFactory_4.hpp"
// Including type: System.Collections.Generic.IEnumerable`1
#include "System/Collections/Generic/IEnumerable_1.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Skipping declaration: <get_ParamTypes>d__2 because it is already included!
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Skipping declaration: IEnumerator because it is already included!
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // WARNING Size may be invalid!
  // Autogenerated type: Zenject.PlaceholderFactory`4
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename TParam1, typename TParam2, typename TParam3, typename TValue>
  class PlaceholderFactory_4 : public Zenject::PlaceholderFactoryBase_1<TValue>/*, public Zenject::IFactory_4<TParam1, TParam2, TParam3, TValue>*/ {
    public:
    // Nested type: Zenject::PlaceholderFactory_4::$get_ParamTypes$d__2<TParam1, TParam2, TParam3, TValue>
    class $get_ParamTypes$d__2;
    // WARNING Size may be invalid!
    // Autogenerated type: Zenject.PlaceholderFactory`4/Zenject.<get_ParamTypes>d__2
    // [TokenAttribute] Offset: FFFFFFFF
    // [CompilerGeneratedAttribute] Offset: FFFFFFFF
    class $get_ParamTypes$d__2 : public ::il2cpp_utils::il2cpp_type_check::NestedType, public ::Il2CppObject/*, public System::Collections::Generic::IEnumerable_1<System::Type*>, public System::Collections::Generic::IEnumerator_1<System::Type*>*/ {
      public:
      using declaring_type = PlaceholderFactory_4<TParam1, TParam2, TParam3, TValue>*;
      static constexpr std::string_view NESTED_NAME = "<get_ParamTypes>d__2";
      static constexpr bool IS_VALUE_TYPE = false;
      #ifdef USE_CODEGEN_FIELDS
      public:
      #else
      private:
      #endif
      // private System.Int32 <>1__state
      // Size: 0x4
      // Offset: 0x0
      int $$1__state;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // private System.Type <>2__current
      // Size: 0x8
      // Offset: 0x0
      System::Type* $$2__current;
      // Field size check
      static_assert(sizeof(System::Type*) == 0x8);
      // private System.Int32 <>l__initialThreadId
      // Size: 0x4
      // Offset: 0x0
      int $$l__initialThreadId;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating interface conversion operator: operator System::Collections::Generic::IEnumerable_1<System::Type*>
      operator System::Collections::Generic::IEnumerable_1<System::Type*>() noexcept {
        return *reinterpret_cast<System::Collections::Generic::IEnumerable_1<System::Type*>*>(this);
      }
      // Creating interface conversion operator: operator System::Collections::Generic::IEnumerator_1<System::Type*>
      operator System::Collections::Generic::IEnumerator_1<System::Type*>() noexcept {
        return *reinterpret_cast<System::Collections::Generic::IEnumerator_1<System::Type*>*>(this);
      }
      // Autogenerated instance field getter
      // Get instance field: private System.Int32 <>1__state
      int& dyn_$$1__state() {
        static auto ___internal__logger = ::Logger::get().WithContext("Zenject::PlaceholderFactory_4::$get_ParamTypes$d__2::dyn_$$1__state");
        auto ___internal__instance = this;
        static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "<>1__state"))->offset;
        return *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
      }
      // Autogenerated instance field getter
      // Get instance field: private System.Type <>2__current
      System::Type*& dyn_$$2__current() {
        static auto ___internal__logger = ::Logger::get().WithContext("Zenject::PlaceholderFactory_4::$get_ParamTypes$d__2::dyn_$$2__current");
        auto ___internal__instance = this;
        static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "<>2__current"))->offset;
        return *reinterpret_cast<System::Type**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
      }
      // Autogenerated instance field getter
      // Get instance field: private System.Int32 <>l__initialThreadId
      int& dyn_$$l__initialThreadId() {
        static auto ___internal__logger = ::Logger::get().WithContext("Zenject::PlaceholderFactory_4::$get_ParamTypes$d__2::dyn_$$l__initialThreadId");
        auto ___internal__instance = this;
        static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "<>l__initialThreadId"))->offset;
        return *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
      }
      // private System.Type System.Collections.Generic.IEnumerator<System.Type>.get_Current()
      // Offset: 0xFFFFFFFF
      System::Type* System_Collections_Generic_IEnumerator$System_Type$_get_Current() {
        static auto ___internal__logger = ::Logger::get().WithContext("Zenject::PlaceholderFactory_4::$get_ParamTypes$d__2::System.Collections.Generic.IEnumerator<System.Type>.get_Current");
        auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "System.Collections.Generic.IEnumerator<System.Type>.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
        auto ___instance_arg = this;
        return ::il2cpp_utils::RunMethodThrow<System::Type*, false>(___instance_arg, ___internal__method);
      }
      // private System.Object System.Collections.IEnumerator.get_Current()
      // Offset: 0xFFFFFFFF
      ::Il2CppObject* System_Collections_IEnumerator_get_Current() {
        static auto ___internal__logger = ::Logger::get().WithContext("Zenject::PlaceholderFactory_4::$get_ParamTypes$d__2::System.Collections.IEnumerator.get_Current");
        auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
        auto ___instance_arg = this;
        return ::il2cpp_utils::RunMethodThrow<::Il2CppObject*, false>(___instance_arg, ___internal__method);
      }
      // public System.Void .ctor(System.Int32 <>1__state)
      // Offset: 0xFFFFFFFF
      template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
      static typename PlaceholderFactory_4<TParam1, TParam2, TParam3, TValue>::$get_ParamTypes$d__2* New_ctor(int $$1__state) {
        static auto ___internal__logger = ::Logger::get().WithContext("Zenject::PlaceholderFactory_4::$get_ParamTypes$d__2::.ctor");
        return THROW_UNLESS((::il2cpp_utils::New<typename PlaceholderFactory_4<TParam1, TParam2, TParam3, TValue>::$get_ParamTypes$d__2*, creationType>($$1__state)));
      }
      // private System.Void System.IDisposable.Dispose()
      // Offset: 0xFFFFFFFF
      void System_IDisposable_Dispose() {
        static auto ___internal__logger = ::Logger::get().WithContext("Zenject::PlaceholderFactory_4::$get_ParamTypes$d__2::System.IDisposable.Dispose");
        auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "System.IDisposable.Dispose", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
        auto ___instance_arg = this;
        ::il2cpp_utils::RunMethodThrow<void, false>(___instance_arg, ___internal__method);
      }
      // private System.Boolean MoveNext()
      // Offset: 0xFFFFFFFF
      bool MoveNext() {
        static auto ___internal__logger = ::Logger::get().WithContext("Zenject::PlaceholderFactory_4::$get_ParamTypes$d__2::MoveNext");
        auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
        auto ___instance_arg = this;
        return ::il2cpp_utils::RunMethodThrow<bool, false>(___instance_arg, ___internal__method);
      }
      // private System.Void System.Collections.IEnumerator.Reset()
      // Offset: 0xFFFFFFFF
      void System_Collections_IEnumerator_Reset() {
        static auto ___internal__logger = ::Logger::get().WithContext("Zenject::PlaceholderFactory_4::$get_ParamTypes$d__2::System.Collections.IEnumerator.Reset");
        auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
        auto ___instance_arg = this;
        ::il2cpp_utils::RunMethodThrow<void, false>(___instance_arg, ___internal__method);
      }
      // private System.Collections.Generic.IEnumerator`1<System.Type> System.Collections.Generic.IEnumerable<System.Type>.GetEnumerator()
      // Offset: 0xFFFFFFFF
      System::Collections::Generic::IEnumerator_1<System::Type*>* System_Collections_Generic_IEnumerable$System_Type$_GetEnumerator() {
        static auto ___internal__logger = ::Logger::get().WithContext("Zenject::PlaceholderFactory_4::$get_ParamTypes$d__2::System.Collections.Generic.IEnumerable<System.Type>.GetEnumerator");
        auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "System.Collections.Generic.IEnumerable<System.Type>.GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
        auto ___instance_arg = this;
        return ::il2cpp_utils::RunMethodThrow<System::Collections::Generic::IEnumerator_1<System::Type*>*, false>(___instance_arg, ___internal__method);
      }
      // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
      // Offset: 0xFFFFFFFF
      System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() {
        static auto ___internal__logger = ::Logger::get().WithContext("Zenject::PlaceholderFactory_4::$get_ParamTypes$d__2::System.Collections.IEnumerable.GetEnumerator");
        auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
        auto ___instance_arg = this;
        return ::il2cpp_utils::RunMethodThrow<System::Collections::IEnumerator*, false>(___instance_arg, ___internal__method);
      }
    }; // Zenject.PlaceholderFactory`4/Zenject.<get_ParamTypes>d__2
    // Could not write size check! Type: Zenject.PlaceholderFactory`4/Zenject.<get_ParamTypes>d__2 is generic, or has no fields that are valid for size checks!
    // Creating interface conversion operator: operator Zenject::IFactory_4<TParam1, TParam2, TParam3, TValue>
    operator Zenject::IFactory_4<TParam1, TParam2, TParam3, TValue>() noexcept {
      return *reinterpret_cast<Zenject::IFactory_4<TParam1, TParam2, TParam3, TValue>*>(this);
    }
    // public TValue Create(TParam1 param1, TParam2 param2, TParam3 param3)
    // Offset: 0xFFFFFFFF
    TValue Create(TParam1 param1, TParam2 param2, TParam3 param3) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::PlaceholderFactory_4::Create");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Create", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(param1), ::il2cpp_utils::ExtractType(param2), ::il2cpp_utils::ExtractType(param3)})));
      auto ___instance_arg = this;
      return ::il2cpp_utils::RunMethodThrow<TValue, false>(___instance_arg, ___internal__method, param1, param2, param3);
    }
    // protected override System.Collections.Generic.IEnumerable`1<System.Type> get_ParamTypes()
    // Offset: 0xFFFFFFFF
    // Implemented from: Zenject.PlaceholderFactoryBase`1
    // Base method: System.Collections.Generic.IEnumerable`1<System.Type> PlaceholderFactoryBase_1::get_ParamTypes()
    System::Collections::Generic::IEnumerable_1<System::Type*>* get_ParamTypes() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::PlaceholderFactory_4::get_ParamTypes");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_ParamTypes", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      auto ___instance_arg = this;
      return ::il2cpp_utils::RunMethodThrow<System::Collections::Generic::IEnumerable_1<System::Type*>*, false>(___instance_arg, ___internal__method);
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: Zenject.PlaceholderFactoryBase`1
    // Base method: System.Void PlaceholderFactoryBase_1::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlaceholderFactory_4<TParam1, TParam2, TParam3, TValue>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::PlaceholderFactory_4::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlaceholderFactory_4<TParam1, TParam2, TParam3, TValue>*, creationType>()));
    }
  }; // Zenject.PlaceholderFactory`4
  // Could not write size check! Type: Zenject.PlaceholderFactory`4 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::PlaceholderFactory_4, "Zenject", "PlaceholderFactory`4");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
