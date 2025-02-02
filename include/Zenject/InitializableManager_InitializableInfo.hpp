// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.InitializableManager
#include "Zenject/InitializableManager.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: IInitializable
  class IInitializable;
  // Forward declaring type: InjectTypeInfo
  class InjectTypeInfo;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Zenject::InitializableManager::InitializableInfo);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::InitializableManager::InitializableInfo*, "Zenject", "InitializableManager/InitializableInfo");
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.InitializableManager/Zenject.InitializableInfo
  // [TokenAttribute] Offset: FFFFFFFF
  class InitializableManager::InitializableInfo : public ::Il2CppObject {
    public:
    public:
    // public Zenject.IInitializable Initializable
    // Size: 0x8
    // Offset: 0x10
    ::Zenject::IInitializable* Initializable;
    // Field size check
    static_assert(sizeof(::Zenject::IInitializable*) == 0x8);
    // public System.Int32 Priority
    // Size: 0x4
    // Offset: 0x18
    int Priority;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: public Zenject.IInitializable Initializable
    [[deprecated("Use field access instead!")]] ::Zenject::IInitializable*& dyn_Initializable();
    // Get instance field reference: public System.Int32 Priority
    [[deprecated("Use field access instead!")]] int& dyn_Priority();
    // public System.Void .ctor(Zenject.IInitializable initializable, System.Int32 priority)
    // Offset: 0x1EAD5EC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InitializableManager::InitializableInfo* New_ctor(::Zenject::IInitializable* initializable, int priority) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::InitializableManager::InitializableInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InitializableManager::InitializableInfo*, creationType>(initializable, priority)));
    }
    // static private System.Object __zenCreate(System.Object[] P_0)
    // Offset: 0x1EAE2CC
    static ::Il2CppObject* __zenCreate(::ArrayW<::Il2CppObject*> P_0);
    // static private Zenject.InjectTypeInfo __zenCreateInjectTypeInfo()
    // Offset: 0x1EAE3D8
    static ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();
  }; // Zenject.InitializableManager/Zenject.InitializableInfo
  #pragma pack(pop)
  static check_size<sizeof(InitializableManager::InitializableInfo), 24 + sizeof(int)> __Zenject_InitializableManager_InitializableInfoSizeCheck;
  static_assert(sizeof(InitializableManager::InitializableInfo) == 0x1C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::InitializableManager::InitializableInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Zenject::InitializableManager::InitializableInfo::__zenCreate
// Il2CppName: __zenCreate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (*)(::ArrayW<::Il2CppObject*>)>(&Zenject::InitializableManager::InitializableInfo::__zenCreate)> {
  static const MethodInfo* get() {
    static auto* P_0 = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::InitializableManager::InitializableInfo*), "__zenCreate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{P_0});
  }
};
// Writing MetadataGetter for method: Zenject::InitializableManager::InitializableInfo::__zenCreateInjectTypeInfo
// Il2CppName: __zenCreateInjectTypeInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&Zenject::InitializableManager::InitializableInfo::__zenCreateInjectTypeInfo)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::InitializableManager::InitializableInfo*), "__zenCreateInjectTypeInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
