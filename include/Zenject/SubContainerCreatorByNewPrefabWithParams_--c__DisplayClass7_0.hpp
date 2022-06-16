// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.SubContainerCreatorByNewPrefabWithParams
#include "Zenject/SubContainerCreatorByNewPrefabWithParams.hpp"
// Including type: Zenject.TypeValuePair
#include "Zenject/TypeValuePair.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: InjectableInfo
  class InjectableInfo;
  // Forward declaring type: InjectTypeInfo
  class InjectTypeInfo;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Zenject::SubContainerCreatorByNewPrefabWithParams::$$c__DisplayClass7_0);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::SubContainerCreatorByNewPrefabWithParams::$$c__DisplayClass7_0*, "Zenject", "SubContainerCreatorByNewPrefabWithParams/<>c__DisplayClass7_0");
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.SubContainerCreatorByNewPrefabWithParams/Zenject.<>c__DisplayClass7_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class SubContainerCreatorByNewPrefabWithParams::$$c__DisplayClass7_0 : public ::Il2CppObject {
    public:
    public:
    // public Zenject.TypeValuePair argPair
    // Size: 0x10
    // Offset: 0x10
    ::Zenject::TypeValuePair argPair;
    // Field size check
    static_assert(sizeof(::Zenject::TypeValuePair) == 0x10);
    public:
    // Creating conversion operator: operator ::Zenject::TypeValuePair
    constexpr operator ::Zenject::TypeValuePair() const noexcept {
      return argPair;
    }
    // Get instance field reference: public Zenject.TypeValuePair argPair
    [[deprecated("Use field access instead!")]] ::Zenject::TypeValuePair& dyn_argPair();
    // public System.Void .ctor()
    // Offset: 0x1D17A6C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SubContainerCreatorByNewPrefabWithParams::$$c__DisplayClass7_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::SubContainerCreatorByNewPrefabWithParams::$$c__DisplayClass7_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SubContainerCreatorByNewPrefabWithParams::$$c__DisplayClass7_0*, creationType>()));
    }
    // System.Boolean <CreateTempContainer>b__0(Zenject.InjectableInfo x)
    // Offset: 0x1D17C08
    bool $CreateTempContainer$b__0(::Zenject::InjectableInfo* x);
    // System.Int32 <CreateTempContainer>b__1(Zenject.InjectableInfo x)
    // Offset: 0x1D17C90
    int $CreateTempContainer$b__1(::Zenject::InjectableInfo* x);
    // static private System.Object __zenCreate(System.Object[] P_0)
    // Offset: 0x1D17CB0
    static ::Il2CppObject* __zenCreate(::ArrayW<::Il2CppObject*> P_0);
    // static private Zenject.InjectTypeInfo __zenCreateInjectTypeInfo()
    // Offset: 0x1D17D0C
    static ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();
  }; // Zenject.SubContainerCreatorByNewPrefabWithParams/Zenject.<>c__DisplayClass7_0
  #pragma pack(pop)
  static check_size<sizeof(SubContainerCreatorByNewPrefabWithParams::$$c__DisplayClass7_0), 16 + sizeof(::Zenject::TypeValuePair)> __Zenject_SubContainerCreatorByNewPrefabWithParams_$$c__DisplayClass7_0SizeCheck;
  static_assert(sizeof(SubContainerCreatorByNewPrefabWithParams::$$c__DisplayClass7_0) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::SubContainerCreatorByNewPrefabWithParams::$$c__DisplayClass7_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Zenject::SubContainerCreatorByNewPrefabWithParams::$$c__DisplayClass7_0::$CreateTempContainer$b__0
// Il2CppName: <CreateTempContainer>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Zenject::SubContainerCreatorByNewPrefabWithParams::$$c__DisplayClass7_0::*)(::Zenject::InjectableInfo*)>(&Zenject::SubContainerCreatorByNewPrefabWithParams::$$c__DisplayClass7_0::$CreateTempContainer$b__0)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("Zenject", "InjectableInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::SubContainerCreatorByNewPrefabWithParams::$$c__DisplayClass7_0*), "<CreateTempContainer>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: Zenject::SubContainerCreatorByNewPrefabWithParams::$$c__DisplayClass7_0::$CreateTempContainer$b__1
// Il2CppName: <CreateTempContainer>b__1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Zenject::SubContainerCreatorByNewPrefabWithParams::$$c__DisplayClass7_0::*)(::Zenject::InjectableInfo*)>(&Zenject::SubContainerCreatorByNewPrefabWithParams::$$c__DisplayClass7_0::$CreateTempContainer$b__1)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("Zenject", "InjectableInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::SubContainerCreatorByNewPrefabWithParams::$$c__DisplayClass7_0*), "<CreateTempContainer>b__1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: Zenject::SubContainerCreatorByNewPrefabWithParams::$$c__DisplayClass7_0::__zenCreate
// Il2CppName: __zenCreate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (*)(::ArrayW<::Il2CppObject*>)>(&Zenject::SubContainerCreatorByNewPrefabWithParams::$$c__DisplayClass7_0::__zenCreate)> {
  static const MethodInfo* get() {
    static auto* P_0 = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::SubContainerCreatorByNewPrefabWithParams::$$c__DisplayClass7_0*), "__zenCreate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{P_0});
  }
};
// Writing MetadataGetter for method: Zenject::SubContainerCreatorByNewPrefabWithParams::$$c__DisplayClass7_0::__zenCreateInjectTypeInfo
// Il2CppName: __zenCreateInjectTypeInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&Zenject::SubContainerCreatorByNewPrefabWithParams::$$c__DisplayClass7_0::__zenCreateInjectTypeInfo)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::SubContainerCreatorByNewPrefabWithParams::$$c__DisplayClass7_0*), "__zenCreateInjectTypeInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
