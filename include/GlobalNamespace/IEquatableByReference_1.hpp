// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: ValueType
  class ValueType;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: IEquatableByReference`1<T>
  template<typename T>
  class IEquatableByReference_1;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(GlobalNamespace::IEquatableByReference_1, "", "IEquatableByReference`1");
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: IEquatableByReference`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename T>
  class IEquatableByReference_1 {
    public:
    // public System.Boolean Equals(in T other)
    // Offset: 0xFFFFFFFF
    bool Equals(ByRef<T> other) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::IEquatableByReference_1::Equals");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Equals", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(other)})));
      return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method, byref(other));
    }
  }; // IEquatableByReference`1
  // Could not write size check! Type: IEquatableByReference`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
