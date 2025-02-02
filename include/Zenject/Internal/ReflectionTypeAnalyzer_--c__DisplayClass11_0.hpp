// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.Internal.ReflectionTypeAnalyzer
#include "Zenject/Internal/ReflectionTypeAnalyzer.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: ConstructorInfo
  class ConstructorInfo;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: InjectTypeInfo
  class InjectTypeInfo;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Zenject::Internal::ReflectionTypeAnalyzer::$$c__DisplayClass11_0);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::Internal::ReflectionTypeAnalyzer::$$c__DisplayClass11_0*, "Zenject.Internal", "ReflectionTypeAnalyzer/<>c__DisplayClass11_0");
// Type namespace: Zenject.Internal
namespace Zenject::Internal {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.Internal.ReflectionTypeAnalyzer/Zenject.Internal.<>c__DisplayClass11_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class ReflectionTypeAnalyzer::$$c__DisplayClass11_0 : public ::Il2CppObject {
    public:
    public:
    // public System.Reflection.ConstructorInfo c
    // Size: 0x8
    // Offset: 0x10
    ::System::Reflection::ConstructorInfo* c;
    // Field size check
    static_assert(sizeof(::System::Reflection::ConstructorInfo*) == 0x8);
    public:
    // Creating conversion operator: operator ::System::Reflection::ConstructorInfo*
    constexpr operator ::System::Reflection::ConstructorInfo*() const noexcept {
      return c;
    }
    // Get instance field reference: public System.Reflection.ConstructorInfo c
    [[deprecated("Use field access instead!")]] ::System::Reflection::ConstructorInfo*& dyn_c();
    // public System.Void .ctor()
    // Offset: 0x1CBAC50
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ReflectionTypeAnalyzer::$$c__DisplayClass11_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::Internal::ReflectionTypeAnalyzer::$$c__DisplayClass11_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ReflectionTypeAnalyzer::$$c__DisplayClass11_0*, creationType>()));
    }
    // System.Boolean <TryGetInjectConstructor>b__3(System.Type a)
    // Offset: 0x1CBAE98
    bool $TryGetInjectConstructor$b__3(::System::Type* a);
    // static private System.Object __zenCreate(System.Object[] P_0)
    // Offset: 0x1CBAF70
    static ::Il2CppObject* __zenCreate(::ArrayW<::Il2CppObject*> P_0);
    // static private Zenject.InjectTypeInfo __zenCreateInjectTypeInfo()
    // Offset: 0x1CBAFCC
    static ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();
  }; // Zenject.Internal.ReflectionTypeAnalyzer/Zenject.Internal.<>c__DisplayClass11_0
  #pragma pack(pop)
  static check_size<sizeof(ReflectionTypeAnalyzer::$$c__DisplayClass11_0), 16 + sizeof(::System::Reflection::ConstructorInfo*)> __Zenject_Internal_ReflectionTypeAnalyzer_$$c__DisplayClass11_0SizeCheck;
  static_assert(sizeof(ReflectionTypeAnalyzer::$$c__DisplayClass11_0) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::Internal::ReflectionTypeAnalyzer::$$c__DisplayClass11_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Zenject::Internal::ReflectionTypeAnalyzer::$$c__DisplayClass11_0::$TryGetInjectConstructor$b__3
// Il2CppName: <TryGetInjectConstructor>b__3
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Zenject::Internal::ReflectionTypeAnalyzer::$$c__DisplayClass11_0::*)(::System::Type*)>(&Zenject::Internal::ReflectionTypeAnalyzer::$$c__DisplayClass11_0::$TryGetInjectConstructor$b__3)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::Internal::ReflectionTypeAnalyzer::$$c__DisplayClass11_0*), "<TryGetInjectConstructor>b__3", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a});
  }
};
// Writing MetadataGetter for method: Zenject::Internal::ReflectionTypeAnalyzer::$$c__DisplayClass11_0::__zenCreate
// Il2CppName: __zenCreate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (*)(::ArrayW<::Il2CppObject*>)>(&Zenject::Internal::ReflectionTypeAnalyzer::$$c__DisplayClass11_0::__zenCreate)> {
  static const MethodInfo* get() {
    static auto* P_0 = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::Internal::ReflectionTypeAnalyzer::$$c__DisplayClass11_0*), "__zenCreate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{P_0});
  }
};
// Writing MetadataGetter for method: Zenject::Internal::ReflectionTypeAnalyzer::$$c__DisplayClass11_0::__zenCreateInjectTypeInfo
// Il2CppName: __zenCreateInjectTypeInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&Zenject::Internal::ReflectionTypeAnalyzer::$$c__DisplayClass11_0::__zenCreateInjectTypeInfo)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::Internal::ReflectionTypeAnalyzer::$$c__DisplayClass11_0*), "__zenCreateInjectTypeInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
