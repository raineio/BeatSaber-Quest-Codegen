// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UI::CoroutineTween
namespace UnityEngine::UI::CoroutineTween {
  // Skipping declaration: <Start>d__2 because it is already included!
  // Forward declaring type: ITweenValue
  class ITweenValue;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: ValueType
  class ValueType;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: MonoBehaviour
  class MonoBehaviour;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Skipping declaration: IEnumerator because it is already included!
}
// Completed forward declares
// Type namespace: UnityEngine.UI.CoroutineTween
namespace UnityEngine::UI::CoroutineTween {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.UI.CoroutineTween.TweenRunner`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename T>
  class TweenRunner_1 : public ::Il2CppObject {
    public:
    // Nested type: UnityEngine::UI::CoroutineTween::TweenRunner_1::$Start$d__2<T>
    class $Start$d__2;
    // WARNING Size may be invalid!
    // Autogenerated type: UnityEngine.UI.CoroutineTween.TweenRunner`1/UnityEngine.UI.CoroutineTween.<Start>d__2
    // [TokenAttribute] Offset: FFFFFFFF
    // [CompilerGeneratedAttribute] Offset: FFFFFFFF
    class $Start$d__2 : public ::il2cpp_utils::il2cpp_type_check::NestedType, public ::Il2CppObject/*, public System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*/ {
      public:
      using declaring_type = TweenRunner_1<T>*;
      static constexpr std::string_view NESTED_NAME = "<Start>d__2";
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
      // private System.Object <>2__current
      // Size: 0x8
      // Offset: 0x0
      ::Il2CppObject* $$2__current;
      // Field size check
      static_assert(sizeof(::Il2CppObject*) == 0x8);
      // public T tweenInfo
      // Size: 0xFFFFFFFF
      // Offset: 0x0
      T tweenInfo;
      // private System.Single <elapsedTime>5__2
      // Size: 0x4
      // Offset: 0x0
      float $elapsedTime$5__2;
      // Field size check
      static_assert(sizeof(float) == 0x4);
      public:
      // Creating interface conversion operator: operator System::Collections::Generic::IEnumerator_1<::Il2CppObject*>
      operator System::Collections::Generic::IEnumerator_1<::Il2CppObject*>() noexcept {
        return *reinterpret_cast<System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*>(this);
      }
      // Autogenerated instance field getter
      // Get instance field: private System.Int32 <>1__state
      int& dyn_$$1__state() {
        static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::UI::CoroutineTween::TweenRunner_1::$Start$d__2::dyn_$$1__state");
        auto ___internal__instance = this;
        static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "<>1__state"))->offset;
        return *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
      }
      // Autogenerated instance field getter
      // Get instance field: private System.Object <>2__current
      ::Il2CppObject*& dyn_$$2__current() {
        static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::UI::CoroutineTween::TweenRunner_1::$Start$d__2::dyn_$$2__current");
        auto ___internal__instance = this;
        static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "<>2__current"))->offset;
        return *reinterpret_cast<::Il2CppObject**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
      }
      // Autogenerated instance field getter
      // Get instance field: public T tweenInfo
      T& dyn_tweenInfo() {
        static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::UI::CoroutineTween::TweenRunner_1::$Start$d__2::dyn_tweenInfo");
        auto ___internal__instance = this;
        static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "tweenInfo"))->offset;
        return *reinterpret_cast<T*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
      }
      // Autogenerated instance field getter
      // Get instance field: private System.Single <elapsedTime>5__2
      float& dyn_$elapsedTime$5__2() {
        static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::UI::CoroutineTween::TweenRunner_1::$Start$d__2::dyn_$elapsedTime$5__2");
        auto ___internal__instance = this;
        static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "<elapsedTime>5__2"))->offset;
        return *reinterpret_cast<float*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
      }
      // private System.Object System.Collections.Generic.IEnumerator<System.Object>.get_Current()
      // Offset: 0xFFFFFFFF
      ::Il2CppObject* System_Collections_Generic_IEnumerator$System_Object$_get_Current() {
        static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::UI::CoroutineTween::TweenRunner_1::$Start$d__2::System.Collections.Generic.IEnumerator<System.Object>.get_Current");
        auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
        auto ___instance_arg = this;
        return ::il2cpp_utils::RunMethodThrow<::Il2CppObject*, false>(___instance_arg, ___internal__method);
      }
      // private System.Object System.Collections.IEnumerator.get_Current()
      // Offset: 0xFFFFFFFF
      ::Il2CppObject* System_Collections_IEnumerator_get_Current() {
        static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::UI::CoroutineTween::TweenRunner_1::$Start$d__2::System.Collections.IEnumerator.get_Current");
        auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
        auto ___instance_arg = this;
        return ::il2cpp_utils::RunMethodThrow<::Il2CppObject*, false>(___instance_arg, ___internal__method);
      }
      // public System.Void .ctor(System.Int32 <>1__state)
      // Offset: 0xFFFFFFFF
      template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
      static typename TweenRunner_1<T>::$Start$d__2* New_ctor(int $$1__state) {
        static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::UI::CoroutineTween::TweenRunner_1::$Start$d__2::.ctor");
        return THROW_UNLESS((::il2cpp_utils::New<typename TweenRunner_1<T>::$Start$d__2*, creationType>($$1__state)));
      }
      // private System.Void System.IDisposable.Dispose()
      // Offset: 0xFFFFFFFF
      void System_IDisposable_Dispose() {
        static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::UI::CoroutineTween::TweenRunner_1::$Start$d__2::System.IDisposable.Dispose");
        auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "System.IDisposable.Dispose", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
        auto ___instance_arg = this;
        ::il2cpp_utils::RunMethodThrow<void, false>(___instance_arg, ___internal__method);
      }
      // private System.Boolean MoveNext()
      // Offset: 0xFFFFFFFF
      bool MoveNext() {
        static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::UI::CoroutineTween::TweenRunner_1::$Start$d__2::MoveNext");
        auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
        auto ___instance_arg = this;
        return ::il2cpp_utils::RunMethodThrow<bool, false>(___instance_arg, ___internal__method);
      }
      // private System.Void System.Collections.IEnumerator.Reset()
      // Offset: 0xFFFFFFFF
      void System_Collections_IEnumerator_Reset() {
        static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::UI::CoroutineTween::TweenRunner_1::$Start$d__2::System.Collections.IEnumerator.Reset");
        auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
        auto ___instance_arg = this;
        ::il2cpp_utils::RunMethodThrow<void, false>(___instance_arg, ___internal__method);
      }
    }; // UnityEngine.UI.CoroutineTween.TweenRunner`1/UnityEngine.UI.CoroutineTween.<Start>d__2
    // Could not write size check! Type: UnityEngine.UI.CoroutineTween.TweenRunner`1/UnityEngine.UI.CoroutineTween.<Start>d__2 is generic, or has no fields that are valid for size checks!
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    private:
    #endif
    // protected UnityEngine.MonoBehaviour m_CoroutineContainer
    // Size: 0x8
    // Offset: 0x0
    UnityEngine::MonoBehaviour* m_CoroutineContainer;
    // Field size check
    static_assert(sizeof(UnityEngine::MonoBehaviour*) == 0x8);
    // protected System.Collections.IEnumerator m_Tween
    // Size: 0x8
    // Offset: 0x0
    System::Collections::IEnumerator* m_Tween;
    // Field size check
    static_assert(sizeof(System::Collections::IEnumerator*) == 0x8);
    public:
    // Autogenerated instance field getter
    // Get instance field: protected UnityEngine.MonoBehaviour m_CoroutineContainer
    UnityEngine::MonoBehaviour*& dyn_m_CoroutineContainer() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::UI::CoroutineTween::TweenRunner_1::dyn_m_CoroutineContainer");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "m_CoroutineContainer"))->offset;
      return *reinterpret_cast<UnityEngine::MonoBehaviour**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: protected System.Collections.IEnumerator m_Tween
    System::Collections::IEnumerator*& dyn_m_Tween() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::UI::CoroutineTween::TweenRunner_1::dyn_m_Tween");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "m_Tween"))->offset;
      return *reinterpret_cast<System::Collections::IEnumerator**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // static private System.Collections.IEnumerator Start(T tweenInfo)
    // Offset: 0xFFFFFFFF
    static System::Collections::IEnumerator* Start(T tweenInfo) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::UI::CoroutineTween::TweenRunner_1::Start");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TweenRunner_1<T>*>::get(), "Start", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(tweenInfo)})));
      return ::il2cpp_utils::RunMethodThrow<System::Collections::IEnumerator*, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, tweenInfo);
    }
    // public System.Void Init(UnityEngine.MonoBehaviour coroutineContainer)
    // Offset: 0xFFFFFFFF
    void Init(UnityEngine::MonoBehaviour* coroutineContainer) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::UI::CoroutineTween::TweenRunner_1::Init");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Init", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(coroutineContainer)})));
      auto ___instance_arg = this;
      ::il2cpp_utils::RunMethodThrow<void, false>(___instance_arg, ___internal__method, coroutineContainer);
    }
    // public System.Void StartTween(T info)
    // Offset: 0xFFFFFFFF
    void StartTween(T info) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::UI::CoroutineTween::TweenRunner_1::StartTween");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "StartTween", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(info)})));
      auto ___instance_arg = this;
      ::il2cpp_utils::RunMethodThrow<void, false>(___instance_arg, ___internal__method, info);
    }
    // public System.Void StopTween()
    // Offset: 0xFFFFFFFF
    void StopTween() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::UI::CoroutineTween::TweenRunner_1::StopTween");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "StopTween", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      auto ___instance_arg = this;
      ::il2cpp_utils::RunMethodThrow<void, false>(___instance_arg, ___internal__method);
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TweenRunner_1<T>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::UI::CoroutineTween::TweenRunner_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TweenRunner_1<T>*, creationType>()));
    }
  }; // UnityEngine.UI.CoroutineTween.TweenRunner`1
  // Could not write size check! Type: UnityEngine.UI.CoroutineTween.TweenRunner`1 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(UnityEngine::UI::CoroutineTween::TweenRunner_1, "UnityEngine.UI.CoroutineTween", "TweenRunner`1");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
