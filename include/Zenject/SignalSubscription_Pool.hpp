// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.SignalSubscription
#include "Zenject/SignalSubscription.hpp"
// Including type: Zenject.PoolableMemoryPool`3
#include "Zenject/PoolableMemoryPool_3.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: SignalDeclaration
  class SignalDeclaration;
  // Forward declaring type: InjectTypeInfo
  class InjectTypeInfo;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Zenject::SignalSubscription::Pool);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::SignalSubscription::Pool*, "Zenject", "SignalSubscription/Pool");
// Type namespace: Zenject
namespace Zenject {
  // WARNING Size may be invalid!
  // Autogenerated type: Zenject.SignalSubscription/Zenject.Pool
  // [TokenAttribute] Offset: FFFFFFFF
  class SignalSubscription::Pool : public ::Zenject::PoolableMemoryPool_3<::System::Action_1<::Il2CppObject*>*, ::Zenject::SignalDeclaration*, ::Zenject::SignalSubscription*> {
    public:
    // public System.Void .ctor()
    // Offset: 0x1CFE314
    // Implemented from: Zenject.PoolableMemoryPool`3
    // Base method: System.Void PoolableMemoryPool_3::.ctor()
    // Base method: System.Void MemoryPool_3::.ctor()
    // Base method: System.Void MemoryPoolBase_1::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SignalSubscription::Pool* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::SignalSubscription::Pool::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SignalSubscription::Pool*, creationType>()));
    }
    // static private System.Object __zenCreate(System.Object[] P_0)
    // Offset: 0x1CFE364
    // Implemented from: Zenject.PoolableMemoryPool`3
    // Base method: System.Object PoolableMemoryPool_3::__zenCreate(System.Object[] P_0)
    // Base method: System.Object MemoryPool_3::__zenCreate(System.Object[] P_0)
    // Base method: System.Object MemoryPoolBase_1::__zenCreate(System.Object[] P_0)
    static ::Il2CppObject* __zenCreate(::ArrayW<::Il2CppObject*> P_0);
    // static private Zenject.InjectTypeInfo __zenCreateInjectTypeInfo()
    // Offset: 0x1CFE3BC
    // Implemented from: Zenject.PoolableMemoryPool`3
    // Base method: Zenject.InjectTypeInfo PoolableMemoryPool_3::__zenCreateInjectTypeInfo()
    // Base method: Zenject.InjectTypeInfo MemoryPool_3::__zenCreateInjectTypeInfo()
    // Base method: Zenject.InjectTypeInfo MemoryPoolBase_1::__zenCreateInjectTypeInfo()
    static ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();
  }; // Zenject.SignalSubscription/Zenject.Pool
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::SignalSubscription::Pool::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Zenject::SignalSubscription::Pool::__zenCreate
// Il2CppName: __zenCreate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (*)(::ArrayW<::Il2CppObject*>)>(&Zenject::SignalSubscription::Pool::__zenCreate)> {
  static const MethodInfo* get() {
    static auto* P_0 = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::SignalSubscription::Pool*), "__zenCreate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{P_0});
  }
};
// Writing MetadataGetter for method: Zenject::SignalSubscription::Pool::__zenCreateInjectTypeInfo
// Il2CppName: __zenCreateInjectTypeInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&Zenject::SignalSubscription::Pool::__zenCreateInjectTypeInfo)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::SignalSubscription::Pool*), "__zenCreateInjectTypeInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};