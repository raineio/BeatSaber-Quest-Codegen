// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.FromBinder
#include "Zenject/FromBinder.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: InjectContext
  class InjectContext;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.FromBinder/<>c__DisplayClass62_1
  // [CompilerGeneratedAttribute] Offset: DDDF6C
  class FromBinder::$$c__DisplayClass62_1 : public ::Il2CppObject {
    public:
    // public System.Type concreteType
    // Size: 0x8
    // Offset: 0x10
    System::Type* concreteType;
    // Field size check
    static_assert(sizeof(System::Type*) == 0x8);
    // public Zenject.FromBinder/<>c__DisplayClass62_0 CS$<>8__locals1
    // Size: 0x8
    // Offset: 0x18
    Zenject::FromBinder::$$c__DisplayClass62_0* CS$$$8__locals1;
    // Field size check
    static_assert(sizeof(Zenject::FromBinder::$$c__DisplayClass62_0*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass62_1
    $$c__DisplayClass62_1(System::Type* concreteType_ = {}, Zenject::FromBinder::$$c__DisplayClass62_0* CS$$$8__locals1_ = {}) noexcept : concreteType{concreteType_}, CS$$$8__locals1{CS$$$8__locals1_} {}
    // System.Collections.Generic.IEnumerable`1<System.Object> <FromComponentsInParents>b__1(Zenject.InjectContext ctx)
    // Offset: 0x163B88C
    System::Collections::Generic::IEnumerable_1<::Il2CppObject*>* $FromComponentsInParents$b__1(Zenject::InjectContext* ctx);
    // public System.Void .ctor()
    // Offset: 0x163B884
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FromBinder::$$c__DisplayClass62_1* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FromBinder::$$c__DisplayClass62_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FromBinder::$$c__DisplayClass62_1*, creationType>()));
    }
  }; // Zenject.FromBinder/<>c__DisplayClass62_1
  #pragma pack(pop)
  static check_size<sizeof(FromBinder::$$c__DisplayClass62_1), 24 + sizeof(Zenject::FromBinder::$$c__DisplayClass62_0*)> __Zenject_FromBinder_$$c__DisplayClass62_1SizeCheck;
  static_assert(sizeof(FromBinder::$$c__DisplayClass62_1) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::FromBinder::$$c__DisplayClass62_1*, "Zenject", "FromBinder/<>c__DisplayClass62_1");
// Writing MetadataGetter for method: Zenject::FromBinder::$$c__DisplayClass62_1::$FromComponentsInParents$b__1
// Il2CppName: <FromComponentsInParents>b__1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IEnumerable_1<::Il2CppObject*>* (Zenject::FromBinder::$$c__DisplayClass62_1::*)(Zenject::InjectContext*)>(&Zenject::FromBinder::$$c__DisplayClass62_1::$FromComponentsInParents$b__1)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::FromBinder::$$c__DisplayClass62_1*), "<FromComponentsInParents>b__1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<Zenject::InjectContext*>()});
  }
};
// Writing MetadataGetter for method: Zenject::FromBinder::$$c__DisplayClass62_1::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
