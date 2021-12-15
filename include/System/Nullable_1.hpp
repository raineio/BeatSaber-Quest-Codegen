// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin il2cpp-utils forward declares
struct Il2CppObject;
struct Il2CppString;
// Completed il2cpp-utils forward declares
// Type namespace: System
namespace System {
  // Forward declaring type: Nullable`1<T>
  template<typename T>
  struct Nullable_1;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(System::Nullable_1, "System", "Nullable`1");
// Type namespace: System
namespace System {
  // WARNING Size may be invalid!
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.Nullable`1
  // [TokenAttribute] Offset: FFFFFFFF
  // [DebuggerStepThroughAttribute] Offset: E9E2CC
  template<typename T>
  struct Nullable_1/*, public System::ValueType*/ {
    public:
    public:
    // T value
    // Size: 0xFFFFFFFF
    // Offset: 0x0
    T value;
    // System.Boolean has_value
    // Size: 0x1
    // Offset: 0x0
    bool has_value;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating value type constructor for type: Nullable_1
    constexpr Nullable_1(T value_ = {}, bool has_value_ = {}) noexcept : value{value_}, has_value{has_value_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Autogenerated instance field getter
    // Get instance field: T value
    T& dyn_value() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Nullable_1::dyn_value");
      auto ___internal__instance = *this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "value"))->offset;
      return *reinterpret_cast<T*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: System.Boolean has_value
    bool& dyn_has_value() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Nullable_1::dyn_has_value");
      auto ___internal__instance = *this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "has_value"))->offset;
      return *reinterpret_cast<bool*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // public System.Boolean get_HasValue()
    // Offset: 0xFFFFFFFF
    bool get_HasValue() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Nullable_1::get_HasValue");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "get_HasValue", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method);
    }
    // public T get_Value()
    // Offset: 0xFFFFFFFF
    T get_Value() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Nullable_1::get_Value");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "get_Value", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodThrow<T, false>(this, ___internal__method);
    }
    // public System.Void .ctor(T value)
    // Offset: 0xFFFFFFFF
    Nullable_1(T value) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Nullable_1::.ctor");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(value)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, value);
    }
    // private System.Boolean Equals(System.Nullable`1<T> other)
    // Offset: 0xFFFFFFFF
    bool Equals(System::Nullable_1<T> other) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Nullable_1::Equals");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "Equals", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(other)})));
      return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method, other);
    }
    // public T GetValueOrDefault()
    // Offset: 0xFFFFFFFF
    T GetValueOrDefault() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Nullable_1::GetValueOrDefault");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "GetValueOrDefault", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodThrow<T, false>(this, ___internal__method);
    }
    // static private System.Object Box(System.Nullable`1<T> o)
    // Offset: 0xFFFFFFFF
    static ::Il2CppObject* Box(System::Nullable_1<T> o) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Nullable_1::Box");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Nullable_1<T>>::get(), "Box", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(o)})));
      return ::il2cpp_utils::RunMethodThrow<::Il2CppObject*, false>(static_cast<Il2CppObject*>(nullptr), ___internal__method, o);
    }
    // static private System.Nullable`1<T> Unbox(System.Object o)
    // Offset: 0xFFFFFFFF
    static System::Nullable_1<T> Unbox(::Il2CppObject* o) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Nullable_1::Unbox");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Nullable_1<T>>::get(), "Unbox", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(o)})));
      return ::il2cpp_utils::RunMethodThrow<System::Nullable_1<T>, false>(static_cast<Il2CppObject*>(nullptr), ___internal__method, o);
    }
    // public override System.Boolean Equals(System.Object other)
    // Offset: 0xFFFFFFFF
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object other)
    bool Equals(::Il2CppObject* other) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Nullable_1::Equals");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "Equals", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(other)})));
      return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method, other);
    }
    // public override System.Int32 GetHashCode()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Nullable_1::GetHashCode");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "GetHashCode", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodThrow<int, false>(this, ___internal__method);
    }
    // public override System.String ToString()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::Il2CppString* ToString() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Nullable_1::ToString");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "ToString", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodThrow<::Il2CppString*, false>(this, ___internal__method);
    }
  }; // System.Nullable`1
  // Could not write size check! Type: System.Nullable`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
