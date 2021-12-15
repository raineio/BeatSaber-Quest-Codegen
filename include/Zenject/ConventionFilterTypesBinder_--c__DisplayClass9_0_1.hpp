// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.ConventionFilterTypesBinder
#include "Zenject/ConventionFilterTypesBinder.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Attribute
  class Attribute;
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: InjectTypeInfo
  class InjectTypeInfo;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Forward declaring type: <>c__DisplayClass9_0`1<T>
  template<typename T>
  class $$c__DisplayClass9_0_1;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::ConventionFilterTypesBinder::$$c__DisplayClass9_0_1, "Zenject", "ConventionFilterTypesBinder/<>c__DisplayClass9_0`1");
// Type namespace: Zenject
namespace Zenject {
  // WARNING Size may be invalid!
  // Autogenerated type: Zenject.ConventionFilterTypesBinder/Zenject.<>c__DisplayClass9_0`1
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  template<typename T>
  class ConventionFilterTypesBinder::$$c__DisplayClass9_0_1 : public ::Il2CppObject {
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
    // public System.Func`2<T,System.Boolean> predicate
    // Size: 0x8
    // Offset: 0x0
    System::Func_2<T, bool>* predicate;
    // Field size check
    static_assert(sizeof(System::Func_2<T, bool>*) == 0x8);
    public:
    // Creating conversion operator: operator System::Func_2<T, bool>*
    constexpr operator System::Func_2<T, bool>*() const noexcept {
      return predicate;
    }
    // Autogenerated instance field getter
    // Get instance field: public System.Func`2<T,System.Boolean> predicate
    System::Func_2<T, bool>*& dyn_predicate() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::ConventionFilterTypesBinder::$$c__DisplayClass9_0_1::dyn_predicate");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "predicate"))->offset;
      return *reinterpret_cast<System::Func_2<T, bool>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // System.Boolean <WithAttributeWhere>b__0(System.Type t)
    // Offset: 0xFFFFFFFF
    bool $WithAttributeWhere$b__0(System::Type* t) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::ConventionFilterTypesBinder::$$c__DisplayClass9_0_1::<WithAttributeWhere>b__0");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "<WithAttributeWhere>b__0", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(t)})));
      return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method, t);
    }
    // static private System.Object __zenCreate(System.Object[] P_0)
    // Offset: 0xFFFFFFFF
    static ::Il2CppObject* __zenCreate(::ArrayW<::Il2CppObject*> P_0) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::ConventionFilterTypesBinder::$$c__DisplayClass9_0_1::__zenCreate");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ConventionFilterTypesBinder::$$c__DisplayClass9_0_1<T>*>::get(), "__zenCreate", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(P_0)})));
      return ::il2cpp_utils::RunMethodThrow<::Il2CppObject*, false>(static_cast<Il2CppObject*>(nullptr), ___internal__method, P_0);
    }
    // static private Zenject.InjectTypeInfo __zenCreateInjectTypeInfo()
    // Offset: 0xFFFFFFFF
    static Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::ConventionFilterTypesBinder::$$c__DisplayClass9_0_1::__zenCreateInjectTypeInfo");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ConventionFilterTypesBinder::$$c__DisplayClass9_0_1<T>*>::get(), "__zenCreateInjectTypeInfo", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodThrow<Zenject::InjectTypeInfo*, false>(static_cast<Il2CppObject*>(nullptr), ___internal__method);
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ConventionFilterTypesBinder::$$c__DisplayClass9_0_1<T>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::ConventionFilterTypesBinder::$$c__DisplayClass9_0_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ConventionFilterTypesBinder::$$c__DisplayClass9_0_1<T>*, creationType>()));
    }
  }; // Zenject.ConventionFilterTypesBinder/Zenject.<>c__DisplayClass9_0`1
  // Could not write size check! Type: Zenject.ConventionFilterTypesBinder/Zenject.<>c__DisplayClass9_0`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
