// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: Newtonsoft.Json.Linq.IJEnumerable`1
#include "Newtonsoft/Json/Linq/IJEnumerable_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Newtonsoft::Json::Linq
namespace Newtonsoft::Json::Linq {
  // Forward declaring type: JToken
  class JToken;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Skipping declaration: IEnumerable`1 because it is already included!
  // Forward declaring type: IEnumerator`1<T>
  template<typename T>
  class IEnumerator_1;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct Il2CppObject;
// Completed il2cpp-utils forward declares
// Type namespace: Newtonsoft.Json.Linq
namespace Newtonsoft::Json::Linq {
  // Forward declaring type: JEnumerable`1<T>
  template<typename T>
  struct JEnumerable_1;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::Newtonsoft::Json::Linq::JEnumerable_1, "Newtonsoft.Json.Linq", "JEnumerable`1");
// Type namespace: Newtonsoft.Json.Linq
namespace Newtonsoft::Json::Linq {
  // WARNING Size may be invalid!
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Newtonsoft.Json.Linq.JEnumerable`1
  // [TokenAttribute] Offset: FFFFFFFF
  // [PreserveAttribute] Offset: FFFFFFFF
  // [DefaultMemberAttribute] Offset: 10B22F8
  template<typename T>
  struct JEnumerable_1/*, public ::System::ValueType, public ::Newtonsoft::Json::Linq::IJEnumerable_1<T>*/ {
    public:
    public:
    // private readonly System.Collections.Generic.IEnumerable`1<T> _enumerable
    // Size: 0x8
    // Offset: 0x0
    ::System::Collections::Generic::IEnumerable_1<T>* enumerable;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::IEnumerable_1<T>*) == 0x8);
    public:
    // Creating value type constructor for type: JEnumerable_1
    constexpr JEnumerable_1(::System::Collections::Generic::IEnumerable_1<T>* enumerable_ = {}) noexcept : enumerable{enumerable_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: i_ValueType
    inline ::System::ValueType* i_ValueType() noexcept {
      return reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::Newtonsoft::Json::Linq::IJEnumerable_1<T>
    operator ::Newtonsoft::Json::Linq::IJEnumerable_1<T>() noexcept {
      return *reinterpret_cast<::Newtonsoft::Json::Linq::IJEnumerable_1<T>*>(this);
    }
    // Creating interface conversion operator: i_IJEnumerable_1_T
    inline ::Newtonsoft::Json::Linq::IJEnumerable_1<T>* i_IJEnumerable_1_T() noexcept {
      return reinterpret_cast<::Newtonsoft::Json::Linq::IJEnumerable_1<T>*>(this);
    }
    // Creating conversion operator: operator ::System::Collections::Generic::IEnumerable_1<T>*
    constexpr operator ::System::Collections::Generic::IEnumerable_1<T>*() const noexcept {
      return enumerable;
    }
    // Autogenerated static field getter
    // Get static field: static public readonly Newtonsoft.Json.Linq.JEnumerable`1<T> Empty
    static ::Newtonsoft::Json::Linq::JEnumerable_1<T> _get_Empty() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::Linq::JEnumerable_1::_get_Empty");
      return THROW_UNLESS(il2cpp_utils::GetFieldValue<::Newtonsoft::Json::Linq::JEnumerable_1<T>>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<JEnumerable_1<T>>::get(), "Empty"));
    }
    // Autogenerated static field setter
    // Set static field: static public readonly Newtonsoft.Json.Linq.JEnumerable`1<T> Empty
    static void _set_Empty(::Newtonsoft::Json::Linq::JEnumerable_1<T> value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::Linq::JEnumerable_1::_set_Empty");
      THROW_UNLESS(il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<JEnumerable_1<T>>::get(), "Empty", value));
    }
    // Autogenerated instance field getter
    // Get instance field: private readonly System.Collections.Generic.IEnumerable`1<T> _enumerable
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::IEnumerable_1<T>*& dyn__enumerable() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::Linq::JEnumerable_1::dyn__enumerable");
      auto ___internal__instance = *this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_enumerable"))->offset;
      return *reinterpret_cast<::System::Collections::Generic::IEnumerable_1<T>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // public System.Void .ctor(System.Collections.Generic.IEnumerable`1<T> enumerable)
    // Offset: 0xFFFFFFFFFFFFFFFF
    // ABORTED: conflicts with another method.  JEnumerable_1(::System::Collections::Generic::IEnumerable_1<T>* enumerable)
    // static private System.Void .cctor()
    // Offset: 0xFFFFFFFFFFFFFFFF
    static void _cctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::Linq::JEnumerable_1::.cctor");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<JEnumerable_1<T>>::get(), ".cctor", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(static_cast<Il2CppObject*>(nullptr), ___internal__method);
    }
    // public System.Collections.Generic.IEnumerator`1<T> GetEnumerator()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Collections::Generic::IEnumerator_1<T>* GetEnumerator() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::Linq::JEnumerable_1::GetEnumerator");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<T>*, false>(this, ___internal__method);
    }
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::Linq::JEnumerable_1::System.Collections.IEnumerable.GetEnumerator");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal__method);
    }
    // public System.Boolean Equals(Newtonsoft.Json.Linq.JEnumerable`1<T> other)
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool Equals(::Newtonsoft::Json::Linq::JEnumerable_1<T> other) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::Linq::JEnumerable_1::Equals");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "Equals", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(other)})));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method, other);
    }
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::Linq::JEnumerable_1::Equals");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "Equals", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(obj)})));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method, obj);
    }
    // public override System.Int32 GetHashCode()
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::Linq::JEnumerable_1::GetHashCode");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "GetHashCode", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<int, false>(this, ___internal__method);
    }
  }; // Newtonsoft.Json.Linq.JEnumerable`1
  // Could not write size check! Type: Newtonsoft.Json.Linq.JEnumerable`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
