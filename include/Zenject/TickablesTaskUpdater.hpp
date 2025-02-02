// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.TaskUpdater`1
#include "Zenject/TaskUpdater_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: ITickable
  class ITickable;
  // Forward declaring type: InjectTypeInfo
  class InjectTypeInfo;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Forward declaring type: TickablesTaskUpdater
  class TickablesTaskUpdater;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Zenject::TickablesTaskUpdater);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::TickablesTaskUpdater*, "Zenject", "TickablesTaskUpdater");
// Type namespace: Zenject
namespace Zenject {
  // WARNING Size may be invalid!
  // Autogenerated type: Zenject.TickablesTaskUpdater
  // [TokenAttribute] Offset: FFFFFFFF
  class TickablesTaskUpdater : public ::Zenject::TaskUpdater_1<::Zenject::ITickable*> {
    public:
    // protected System.Void UpdateItem(Zenject.ITickable task)
    // Offset: 0x1DE0DB0
    void UpdateItem(::Zenject::ITickable* task);
    // static private System.Object __zenCreate(System.Object[] P_0)
    // Offset: 0x1DE0E5C
    static ::Il2CppObject* __zenCreate(::ArrayW<::Il2CppObject*> P_0);
    // public System.Void .ctor()
    // Offset: 0x1DDDFBC
    // Implemented from: Zenject.TaskUpdater`1
    // Base method: System.Void TaskUpdater_1::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TickablesTaskUpdater* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::TickablesTaskUpdater::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TickablesTaskUpdater*, creationType>()));
    }
    // static private Zenject.InjectTypeInfo __zenCreateInjectTypeInfo()
    // Offset: 0x1DE0EB4
    // Implemented from: Zenject.TaskUpdater`1
    // Base method: Zenject.InjectTypeInfo TaskUpdater_1::__zenCreateInjectTypeInfo()
    static ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();
  }; // Zenject.TickablesTaskUpdater
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::TickablesTaskUpdater::UpdateItem
// Il2CppName: UpdateItem
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::TickablesTaskUpdater::*)(::Zenject::ITickable*)>(&Zenject::TickablesTaskUpdater::UpdateItem)> {
  static const MethodInfo* get() {
    static auto* task = &::il2cpp_utils::GetClassFromName("Zenject", "ITickable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::TickablesTaskUpdater*), "UpdateItem", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{task});
  }
};
// Writing MetadataGetter for method: Zenject::TickablesTaskUpdater::__zenCreate
// Il2CppName: __zenCreate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (*)(::ArrayW<::Il2CppObject*>)>(&Zenject::TickablesTaskUpdater::__zenCreate)> {
  static const MethodInfo* get() {
    static auto* P_0 = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::TickablesTaskUpdater*), "__zenCreate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{P_0});
  }
};
// Writing MetadataGetter for method: Zenject::TickablesTaskUpdater::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Zenject::TickablesTaskUpdater::__zenCreateInjectTypeInfo
// Il2CppName: __zenCreateInjectTypeInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&Zenject::TickablesTaskUpdater::__zenCreateInjectTypeInfo)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::TickablesTaskUpdater*), "__zenCreateInjectTypeInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
