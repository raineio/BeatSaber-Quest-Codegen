// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.SignalDeclaration
#include "Zenject/SignalDeclaration.hpp"
// Including type: Zenject.PlaceholderFactory`2
#include "Zenject/PlaceholderFactory_2.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: SignalDeclarationBindInfo
  class SignalDeclarationBindInfo;
  // Forward declaring type: InjectTypeInfo
  class InjectTypeInfo;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Zenject::SignalDeclaration::Factory);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::SignalDeclaration::Factory*, "Zenject", "SignalDeclaration/Factory");
// Type namespace: Zenject
namespace Zenject {
  // WARNING Size may be invalid!
  // Autogenerated type: Zenject.SignalDeclaration/Zenject.Factory
  // [TokenAttribute] Offset: FFFFFFFF
  class SignalDeclaration::Factory : public ::Zenject::PlaceholderFactory_2<::Zenject::SignalDeclarationBindInfo*, ::Zenject::SignalDeclaration*> {
    public:
    // public System.Void .ctor()
    // Offset: 0x1D1D1EC
    // Implemented from: Zenject.PlaceholderFactory`2
    // Base method: System.Void PlaceholderFactory_2::.ctor()
    // Base method: System.Void PlaceholderFactoryBase_1::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SignalDeclaration::Factory* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::SignalDeclaration::Factory::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SignalDeclaration::Factory*, creationType>()));
    }
    // static private System.Object __zenCreate(System.Object[] P_0)
    // Offset: 0x1D1D23C
    // Implemented from: Zenject.PlaceholderFactory`2
    // Base method: System.Object PlaceholderFactory_2::__zenCreate(System.Object[] P_0)
    static ::Il2CppObject* __zenCreate(::ArrayW<::Il2CppObject*> P_0);
    // static private Zenject.InjectTypeInfo __zenCreateInjectTypeInfo()
    // Offset: 0x1D1D294
    // Implemented from: Zenject.PlaceholderFactory`2
    // Base method: Zenject.InjectTypeInfo PlaceholderFactory_2::__zenCreateInjectTypeInfo()
    // Base method: Zenject.InjectTypeInfo PlaceholderFactoryBase_1::__zenCreateInjectTypeInfo()
    static ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();
  }; // Zenject.SignalDeclaration/Zenject.Factory
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::SignalDeclaration::Factory::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Zenject::SignalDeclaration::Factory::__zenCreate
// Il2CppName: __zenCreate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (*)(::ArrayW<::Il2CppObject*>)>(&Zenject::SignalDeclaration::Factory::__zenCreate)> {
  static const MethodInfo* get() {
    static auto* P_0 = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::SignalDeclaration::Factory*), "__zenCreate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{P_0});
  }
};
// Writing MetadataGetter for method: Zenject::SignalDeclaration::Factory::__zenCreateInjectTypeInfo
// Il2CppName: __zenCreateInjectTypeInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&Zenject::SignalDeclaration::Factory::__zenCreateInjectTypeInfo)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::SignalDeclaration::Factory*), "__zenCreateInjectTypeInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
