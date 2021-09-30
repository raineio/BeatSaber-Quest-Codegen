// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.FromBinder
#include "Zenject/FromBinder.hpp"
// Including type: Zenject.InjectSources
#include "Zenject/InjectSources.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: IProvider
  class IProvider;
  // Forward declaring type: DiContainer
  class DiContainer;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // WARNING Size may be invalid!
  // Autogenerated type: Zenject.FromBinder/Zenject.<>c__DisplayClass71_0`2
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  template<typename TObj, typename TResult>
  class FromBinder::$$c__DisplayClass71_0_2 : public ::Il2CppObject {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    private:
    #endif
    // public System.Object identifier
    // Size: 0x8
    // Offset: 0x0
    ::Il2CppObject* identifier;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // public System.Func`2<TObj,TResult> method
    // Size: 0x8
    // Offset: 0x0
    System::Func_2<TObj, TResult>* method;
    // Field size check
    static_assert(sizeof(System::Func_2<TObj, TResult>*) == 0x8);
    // public Zenject.InjectSources source
    // Size: 0x4
    // Offset: 0x0
    Zenject::InjectSources source;
    // Field size check
    static_assert(sizeof(Zenject::InjectSources) == 0x4);
    // public System.Boolean matchMultiple
    // Size: 0x1
    // Offset: 0x0
    bool matchMultiple;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Autogenerated instance field getter
    // Get instance field: public System.Object identifier
    ::Il2CppObject*& dyn_identifier() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FromBinder::$$c__DisplayClass71_0_2::dyn_identifier");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "identifier"))->offset;
      return *reinterpret_cast<::Il2CppObject**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: public System.Func`2<TObj,TResult> method
    System::Func_2<TObj, TResult>*& dyn_method() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FromBinder::$$c__DisplayClass71_0_2::dyn_method");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "method"))->offset;
      return *reinterpret_cast<System::Func_2<TObj, TResult>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: public Zenject.InjectSources source
    Zenject::InjectSources& dyn_source() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FromBinder::$$c__DisplayClass71_0_2::dyn_source");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "source"))->offset;
      return *reinterpret_cast<Zenject::InjectSources*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: public System.Boolean matchMultiple
    bool& dyn_matchMultiple() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FromBinder::$$c__DisplayClass71_0_2::dyn_matchMultiple");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "matchMultiple"))->offset;
      return *reinterpret_cast<bool*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Zenject.IProvider <FromResolveGetterBase>b__0(Zenject.DiContainer container, System.Type type)
    // Offset: 0xFFFFFFFF
    Zenject::IProvider* $FromResolveGetterBase$b__0(Zenject::DiContainer* container, System::Type* type) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FromBinder::$$c__DisplayClass71_0_2::<FromResolveGetterBase>b__0");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "<FromResolveGetterBase>b__0", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(container), ::il2cpp_utils::ExtractType(type)})));
      auto ___instance_arg = this;
      return ::il2cpp_utils::RunMethodThrow<Zenject::IProvider*, false>(___instance_arg, ___internal__method, container, type);
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FromBinder::$$c__DisplayClass71_0_2<TObj, TResult>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FromBinder::$$c__DisplayClass71_0_2::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FromBinder::$$c__DisplayClass71_0_2<TObj, TResult>*, creationType>()));
    }
  }; // Zenject.FromBinder/Zenject.<>c__DisplayClass71_0`2
  // Could not write size check! Type: Zenject.FromBinder/Zenject.<>c__DisplayClass71_0`2 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::FromBinder::$$c__DisplayClass71_0_2, "Zenject", "FromBinder/<>c__DisplayClass71_0`2");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
