// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.TypeAnalyzer
#include "Zenject/TypeAnalyzer.hpp"
// Including type: Zenject.InjectTypeInfo
#include "Zenject/InjectTypeInfo.hpp"
// Including type: Zenject.Internal.ReflectionTypeInfo
#include "Zenject/Internal/ReflectionTypeInfo.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Zenject::TypeAnalyzer::$$c__DisplayClass23_0);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::TypeAnalyzer::$$c__DisplayClass23_0*, "Zenject", "TypeAnalyzer/<>c__DisplayClass23_0");
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.TypeAnalyzer/Zenject.<>c__DisplayClass23_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class TypeAnalyzer::$$c__DisplayClass23_0 : public ::Il2CppObject {
    public:
    public:
    // public System.Type type
    // Size: 0x8
    // Offset: 0x10
    ::System::Type* type;
    // Field size check
    static_assert(sizeof(::System::Type*) == 0x8);
    public:
    // Creating conversion operator: operator ::System::Type*
    constexpr operator ::System::Type*() const noexcept {
      return type;
    }
    // Get instance field reference: public System.Type type
    [[deprecated("Use field access instead!")]] ::System::Type*& dyn_type();
    // public System.Void .ctor()
    // Offset: 0x1DE25CC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TypeAnalyzer::$$c__DisplayClass23_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::TypeAnalyzer::$$c__DisplayClass23_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TypeAnalyzer::$$c__DisplayClass23_0*, creationType>()));
    }
    // Zenject.InjectTypeInfo/Zenject.InjectMemberInfo <CreateTypeInfoFromReflection>b__0(Zenject.Internal.ReflectionTypeInfo/Zenject.Internal.InjectFieldInfo x)
    // Offset: 0x1DE2678
    ::Zenject::InjectTypeInfo::InjectMemberInfo* $CreateTypeInfoFromReflection$b__0(::Zenject::Internal::ReflectionTypeInfo::InjectFieldInfo* x);
    // Zenject.InjectTypeInfo/Zenject.InjectMemberInfo <CreateTypeInfoFromReflection>b__1(Zenject.Internal.ReflectionTypeInfo/Zenject.Internal.InjectPropertyInfo x)
    // Offset: 0x1DE2684
    ::Zenject::InjectTypeInfo::InjectMemberInfo* $CreateTypeInfoFromReflection$b__1(::Zenject::Internal::ReflectionTypeInfo::InjectPropertyInfo* x);
    // static private System.Object __zenCreate(System.Object[] P_0)
    // Offset: 0x1DE2690
    static ::Il2CppObject* __zenCreate(::ArrayW<::Il2CppObject*> P_0);
    // static private Zenject.InjectTypeInfo __zenCreateInjectTypeInfo()
    // Offset: 0x1DE26EC
    static ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();
  }; // Zenject.TypeAnalyzer/Zenject.<>c__DisplayClass23_0
  #pragma pack(pop)
  static check_size<sizeof(TypeAnalyzer::$$c__DisplayClass23_0), 16 + sizeof(::System::Type*)> __Zenject_TypeAnalyzer_$$c__DisplayClass23_0SizeCheck;
  static_assert(sizeof(TypeAnalyzer::$$c__DisplayClass23_0) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::TypeAnalyzer::$$c__DisplayClass23_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Zenject::TypeAnalyzer::$$c__DisplayClass23_0::$CreateTypeInfoFromReflection$b__0
// Il2CppName: <CreateTypeInfoFromReflection>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::InjectTypeInfo::InjectMemberInfo* (Zenject::TypeAnalyzer::$$c__DisplayClass23_0::*)(::Zenject::Internal::ReflectionTypeInfo::InjectFieldInfo*)>(&Zenject::TypeAnalyzer::$$c__DisplayClass23_0::$CreateTypeInfoFromReflection$b__0)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("Zenject.Internal", "ReflectionTypeInfo/InjectFieldInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::TypeAnalyzer::$$c__DisplayClass23_0*), "<CreateTypeInfoFromReflection>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: Zenject::TypeAnalyzer::$$c__DisplayClass23_0::$CreateTypeInfoFromReflection$b__1
// Il2CppName: <CreateTypeInfoFromReflection>b__1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::InjectTypeInfo::InjectMemberInfo* (Zenject::TypeAnalyzer::$$c__DisplayClass23_0::*)(::Zenject::Internal::ReflectionTypeInfo::InjectPropertyInfo*)>(&Zenject::TypeAnalyzer::$$c__DisplayClass23_0::$CreateTypeInfoFromReflection$b__1)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("Zenject.Internal", "ReflectionTypeInfo/InjectPropertyInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::TypeAnalyzer::$$c__DisplayClass23_0*), "<CreateTypeInfoFromReflection>b__1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: Zenject::TypeAnalyzer::$$c__DisplayClass23_0::__zenCreate
// Il2CppName: __zenCreate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (*)(::ArrayW<::Il2CppObject*>)>(&Zenject::TypeAnalyzer::$$c__DisplayClass23_0::__zenCreate)> {
  static const MethodInfo* get() {
    static auto* P_0 = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::TypeAnalyzer::$$c__DisplayClass23_0*), "__zenCreate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{P_0});
  }
};
// Writing MetadataGetter for method: Zenject::TypeAnalyzer::$$c__DisplayClass23_0::__zenCreateInjectTypeInfo
// Il2CppName: __zenCreateInjectTypeInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&Zenject::TypeAnalyzer::$$c__DisplayClass23_0::__zenCreateInjectTypeInfo)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::TypeAnalyzer::$$c__DisplayClass23_0*), "__zenCreateInjectTypeInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
