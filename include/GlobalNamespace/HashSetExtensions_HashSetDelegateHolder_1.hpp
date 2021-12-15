// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: HashSetExtensions
#include "GlobalNamespace/HashSetExtensions.hpp"
// Including type: System.Reflection.BindingFlags
#include "System/Reflection/BindingFlags.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: MethodInfo
  class MethodInfo;
}
// Completed forward declares
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(GlobalNamespace::HashSetExtensions::HashSetDelegateHolder_1, "", "HashSetExtensions/HashSetDelegateHolder`1");
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: HashSetExtensions/HashSetDelegateHolder`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename T>
  class HashSetExtensions::HashSetDelegateHolder_1 : public ::Il2CppObject {
    public:
    // Autogenerated static field getter
    // Get static field: static private System.Reflection.BindingFlags Flags
    static System::Reflection::BindingFlags _get_Flags() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::HashSetExtensions::HashSetDelegateHolder_1::_get_Flags");
      return THROW_UNLESS(il2cpp_utils::GetFieldValue<System::Reflection::BindingFlags>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HashSetExtensions::HashSetDelegateHolder_1<T>*>::get(), "Flags"));
    }
    // Autogenerated static field setter
    // Set static field: static private System.Reflection.BindingFlags Flags
    static void _set_Flags(System::Reflection::BindingFlags value) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::HashSetExtensions::HashSetDelegateHolder_1::_set_Flags");
      THROW_UNLESS(il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HashSetExtensions::HashSetDelegateHolder_1<T>*>::get(), "Flags", value));
    }
    // Autogenerated static field getter
    // Get static field: static private readonly System.Reflection.MethodInfo <InitializeMethod>k__BackingField
    static System::Reflection::MethodInfo* _get_$InitializeMethod$k__BackingField() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::HashSetExtensions::HashSetDelegateHolder_1::_get_$InitializeMethod$k__BackingField");
      return THROW_UNLESS((il2cpp_utils::GetFieldValue<System::Reflection::MethodInfo*>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HashSetExtensions::HashSetDelegateHolder_1<T>*>::get(), "<InitializeMethod>k__BackingField")));
    }
    // Autogenerated static field setter
    // Set static field: static private readonly System.Reflection.MethodInfo <InitializeMethod>k__BackingField
    static void _set_$InitializeMethod$k__BackingField(System::Reflection::MethodInfo* value) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::HashSetExtensions::HashSetDelegateHolder_1::_set_$InitializeMethod$k__BackingField");
      THROW_UNLESS((il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HashSetExtensions::HashSetDelegateHolder_1<T>*>::get(), "<InitializeMethod>k__BackingField", value)));
    }
    // static public System.Reflection.MethodInfo get_InitializeMethod()
    // Offset: 0xFFFFFFFF
    static System::Reflection::MethodInfo* get_InitializeMethod() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::HashSetExtensions::HashSetDelegateHolder_1::get_InitializeMethod");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HashSetExtensions::HashSetDelegateHolder_1<T>*>::get(), "get_InitializeMethod", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodThrow<System::Reflection::MethodInfo*, false>(static_cast<Il2CppObject*>(nullptr), ___internal__method);
    }
    // static private System.Void .cctor()
    // Offset: 0xFFFFFFFF
    static void _cctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::HashSetExtensions::HashSetDelegateHolder_1::.cctor");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HashSetExtensions::HashSetDelegateHolder_1<T>*>::get(), ".cctor", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppObject*>(nullptr), ___internal__method);
    }
  }; // HashSetExtensions/HashSetDelegateHolder`1
  // Could not write size check! Type: HashSetExtensions/HashSetDelegateHolder`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
