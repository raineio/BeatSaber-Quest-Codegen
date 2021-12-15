// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.FromBinder
#include "Zenject/FromBinder.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: InjectContext
  class InjectContext;
  // Forward declaring type: InjectTypeInfo
  class InjectTypeInfo;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: MonoBehaviour
  class MonoBehaviour;
  // Forward declaring type: Component
  class Component;
}
// Completed forward declares
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(Zenject::FromBinder::$$c__DisplayClass61_2);
DEFINE_IL2CPP_ARG_TYPE(Zenject::FromBinder::$$c__DisplayClass61_2*, "Zenject", "FromBinder/<>c__DisplayClass61_2");
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.FromBinder/Zenject.<>c__DisplayClass61_2
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class FromBinder::$$c__DisplayClass61_2 : public ::Il2CppObject {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // public Zenject.InjectContext ctx
    // Size: 0x8
    // Offset: 0x10
    Zenject::InjectContext* ctx;
    // Field size check
    static_assert(sizeof(Zenject::InjectContext*) == 0x8);
    // public UnityEngine.MonoBehaviour monoBehaviour
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::MonoBehaviour* monoBehaviour;
    // Field size check
    static_assert(sizeof(UnityEngine::MonoBehaviour*) == 0x8);
    public:
    // Get instance field reference: public Zenject.InjectContext ctx
    Zenject::InjectContext*& dyn_ctx();
    // Get instance field reference: public UnityEngine.MonoBehaviour monoBehaviour
    UnityEngine::MonoBehaviour*& dyn_monoBehaviour();
    // System.Boolean <FromComponentInParents>b__2(UnityEngine.Component x)
    // Offset: 0x1AAC8F4
    bool $FromComponentInParents$b__2(UnityEngine::Component* x);
    // System.Boolean <FromComponentInParents>b__3(UnityEngine.Component x)
    // Offset: 0x1AAC918
    bool $FromComponentInParents$b__3(UnityEngine::Component* x);
    // static private System.Object __zenCreate(System.Object[] P_0)
    // Offset: 0x1AAC9C4
    static ::Il2CppObject* __zenCreate(::ArrayW<::Il2CppObject*> P_0);
    // static private Zenject.InjectTypeInfo __zenCreateInjectTypeInfo()
    // Offset: 0x1AACA20
    static Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();
    // public System.Void .ctor()
    // Offset: 0x1AAC730
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FromBinder::$$c__DisplayClass61_2* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FromBinder::$$c__DisplayClass61_2::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FromBinder::$$c__DisplayClass61_2*, creationType>()));
    }
  }; // Zenject.FromBinder/Zenject.<>c__DisplayClass61_2
  #pragma pack(pop)
  static check_size<sizeof(FromBinder::$$c__DisplayClass61_2), 24 + sizeof(UnityEngine::MonoBehaviour*)> __Zenject_FromBinder_$$c__DisplayClass61_2SizeCheck;
  static_assert(sizeof(FromBinder::$$c__DisplayClass61_2) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::FromBinder::$$c__DisplayClass61_2::$FromComponentInParents$b__2
// Il2CppName: <FromComponentInParents>b__2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Zenject::FromBinder::$$c__DisplayClass61_2::*)(UnityEngine::Component*)>(&Zenject::FromBinder::$$c__DisplayClass61_2::$FromComponentInParents$b__2)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("UnityEngine", "Component")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::FromBinder::$$c__DisplayClass61_2*), "<FromComponentInParents>b__2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: Zenject::FromBinder::$$c__DisplayClass61_2::$FromComponentInParents$b__3
// Il2CppName: <FromComponentInParents>b__3
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Zenject::FromBinder::$$c__DisplayClass61_2::*)(UnityEngine::Component*)>(&Zenject::FromBinder::$$c__DisplayClass61_2::$FromComponentInParents$b__3)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("UnityEngine", "Component")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::FromBinder::$$c__DisplayClass61_2*), "<FromComponentInParents>b__3", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: Zenject::FromBinder::$$c__DisplayClass61_2::__zenCreate
// Il2CppName: __zenCreate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (*)(::ArrayW<::Il2CppObject*>)>(&Zenject::FromBinder::$$c__DisplayClass61_2::__zenCreate)> {
  static const MethodInfo* get() {
    static auto* P_0 = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::FromBinder::$$c__DisplayClass61_2*), "__zenCreate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{P_0});
  }
};
// Writing MetadataGetter for method: Zenject::FromBinder::$$c__DisplayClass61_2::__zenCreateInjectTypeInfo
// Il2CppName: __zenCreateInjectTypeInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::InjectTypeInfo* (*)()>(&Zenject::FromBinder::$$c__DisplayClass61_2::__zenCreateInjectTypeInfo)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::FromBinder::$$c__DisplayClass61_2*), "__zenCreateInjectTypeInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::FromBinder::$$c__DisplayClass61_2::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
