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
// Type namespace: ModestTree.Util
namespace ModestTree::Util {
  // Forward declaring type: ValuePair`3<T1, T2, T3>
  template<typename T1, typename T2, typename T3>
  class ValuePair_3;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::ModestTree::Util::ValuePair_3, "ModestTree.Util", "ValuePair`3");
// Type namespace: ModestTree.Util
namespace ModestTree::Util {
  // WARNING Size may be invalid!
  // Autogenerated type: ModestTree.Util.ValuePair`3
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename T1, typename T2, typename T3>
  class ValuePair_3 : public ::Il2CppObject {
    public:
    public:
    // public readonly T1 First
    // Size: 0xFFFFFFFF
    // Offset: 0x0
    T1 First;
    // public readonly T2 Second
    // Size: 0xFFFFFFFF
    // Offset: 0x0
    T2 Second;
    // public readonly T3 Third
    // Size: 0xFFFFFFFF
    // Offset: 0x0
    T3 Third;
    public:
    // Autogenerated instance field getter
    // Get instance field: public readonly T1 First
    [[deprecated("Use field access instead!")]] T1& dyn_First() {
      static auto ___internal__logger = ::Logger::get().WithContext("::ModestTree::Util::ValuePair_3::dyn_First");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "First"))->offset;
      return *reinterpret_cast<T1*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: public readonly T2 Second
    [[deprecated("Use field access instead!")]] T2& dyn_Second() {
      static auto ___internal__logger = ::Logger::get().WithContext("::ModestTree::Util::ValuePair_3::dyn_Second");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "Second"))->offset;
      return *reinterpret_cast<T2*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: public readonly T3 Third
    [[deprecated("Use field access instead!")]] T3& dyn_Third() {
      static auto ___internal__logger = ::Logger::get().WithContext("::ModestTree::Util::ValuePair_3::dyn_Third");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "Third"))->offset;
      return *reinterpret_cast<T3*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ValuePair_3<T1, T2, T3>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::ModestTree::Util::ValuePair_3::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ValuePair_3<T1, T2, T3>*, creationType>()));
    }
    // public System.Void .ctor(T1 first, T2 second, T3 third)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ValuePair_3<T1, T2, T3>* New_ctor(T1 first, T2 second, T3 third) {
      static auto ___internal__logger = ::Logger::get().WithContext("::ModestTree::Util::ValuePair_3::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ValuePair_3<T1, T2, T3>*, creationType>(first, second, third)));
    }
    // public System.Boolean Equals(ModestTree.Util.ValuePair`3<T1,T2,T3> that)
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool Equals(::ModestTree::Util::ValuePair_3<T1, T2, T3>* that) {
      static auto ___internal__logger = ::Logger::get().WithContext("::ModestTree::Util::ValuePair_3::Equals");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Equals", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(that)})));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method, that);
    }
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj) {
      static auto ___internal__logger = ::Logger::get().WithContext("::ModestTree::Util::ValuePair_3::Equals");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Equals", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(obj)})));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method, obj);
    }
    // public override System.Int32 GetHashCode()
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode() {
      static auto ___internal__logger = ::Logger::get().WithContext("::ModestTree::Util::ValuePair_3::GetHashCode");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "GetHashCode", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<int, false>(this, ___internal__method);
    }
  }; // ModestTree.Util.ValuePair`3
  // Could not write size check! Type: ModestTree.Util.ValuePair`3 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
