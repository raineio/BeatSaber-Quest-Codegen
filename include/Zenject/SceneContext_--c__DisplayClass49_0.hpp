// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.SceneContext
#include "Zenject/SceneContext.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: InjectTypeInfo
  class InjectTypeInfo;
}
// Completed forward declares
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(Zenject::SceneContext::$$c__DisplayClass49_0);
DEFINE_IL2CPP_ARG_TYPE(Zenject::SceneContext::$$c__DisplayClass49_0*, "Zenject", "SceneContext/<>c__DisplayClass49_0");
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.SceneContext/Zenject.<>c__DisplayClass49_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class SceneContext::$$c__DisplayClass49_0 : public ::Il2CppObject {
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
    // public System.Collections.Generic.IEnumerable`1<System.String> parentContractNames
    // Size: 0x8
    // Offset: 0x10
    System::Collections::Generic::IEnumerable_1<::Il2CppString*>* parentContractNames;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::IEnumerable_1<::Il2CppString*>*) == 0x8);
    // public System.Func`2<System.String,System.Boolean> <>9__4
    // Size: 0x8
    // Offset: 0x18
    System::Func_2<::Il2CppString*, bool>* $$9__4;
    // Field size check
    static_assert(sizeof(System::Func_2<::Il2CppString*, bool>*) == 0x8);
    public:
    // Get instance field reference: public System.Collections.Generic.IEnumerable`1<System.String> parentContractNames
    System::Collections::Generic::IEnumerable_1<::Il2CppString*>*& dyn_parentContractNames();
    // Get instance field reference: public System.Func`2<System.String,System.Boolean> <>9__4
    System::Func_2<::Il2CppString*, bool>*& dyn_$$9__4();
    // System.Boolean <GetParentContainers>b__2(Zenject.SceneContext sceneContext)
    // Offset: 0x18E6E78
    bool $GetParentContainers$b__2(Zenject::SceneContext* sceneContext);
    // System.Boolean <GetParentContainers>b__4(System.String x)
    // Offset: 0x18E6F34
    bool $GetParentContainers$b__4(::Il2CppString* x);
    // static private System.Object __zenCreate(System.Object[] P_0)
    // Offset: 0x18E6F94
    static ::Il2CppObject* __zenCreate(::ArrayW<::Il2CppObject*> P_0);
    // static private Zenject.InjectTypeInfo __zenCreateInjectTypeInfo()
    // Offset: 0x18E6FF0
    static Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();
    // public System.Void .ctor()
    // Offset: 0x18E5F78
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SceneContext::$$c__DisplayClass49_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::SceneContext::$$c__DisplayClass49_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SceneContext::$$c__DisplayClass49_0*, creationType>()));
    }
  }; // Zenject.SceneContext/Zenject.<>c__DisplayClass49_0
  #pragma pack(pop)
  static check_size<sizeof(SceneContext::$$c__DisplayClass49_0), 24 + sizeof(System::Func_2<::Il2CppString*, bool>*)> __Zenject_SceneContext_$$c__DisplayClass49_0SizeCheck;
  static_assert(sizeof(SceneContext::$$c__DisplayClass49_0) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::SceneContext::$$c__DisplayClass49_0::$GetParentContainers$b__2
// Il2CppName: <GetParentContainers>b__2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Zenject::SceneContext::$$c__DisplayClass49_0::*)(Zenject::SceneContext*)>(&Zenject::SceneContext::$$c__DisplayClass49_0::$GetParentContainers$b__2)> {
  static const MethodInfo* get() {
    static auto* sceneContext = &::il2cpp_utils::GetClassFromName("Zenject", "SceneContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::SceneContext::$$c__DisplayClass49_0*), "<GetParentContainers>b__2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sceneContext});
  }
};
// Writing MetadataGetter for method: Zenject::SceneContext::$$c__DisplayClass49_0::$GetParentContainers$b__4
// Il2CppName: <GetParentContainers>b__4
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Zenject::SceneContext::$$c__DisplayClass49_0::*)(::Il2CppString*)>(&Zenject::SceneContext::$$c__DisplayClass49_0::$GetParentContainers$b__4)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::SceneContext::$$c__DisplayClass49_0*), "<GetParentContainers>b__4", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: Zenject::SceneContext::$$c__DisplayClass49_0::__zenCreate
// Il2CppName: __zenCreate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (*)(::ArrayW<::Il2CppObject*>)>(&Zenject::SceneContext::$$c__DisplayClass49_0::__zenCreate)> {
  static const MethodInfo* get() {
    static auto* P_0 = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::SceneContext::$$c__DisplayClass49_0*), "__zenCreate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{P_0});
  }
};
// Writing MetadataGetter for method: Zenject::SceneContext::$$c__DisplayClass49_0::__zenCreateInjectTypeInfo
// Il2CppName: __zenCreateInjectTypeInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::InjectTypeInfo* (*)()>(&Zenject::SceneContext::$$c__DisplayClass49_0::__zenCreateInjectTypeInfo)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::SceneContext::$$c__DisplayClass49_0*), "__zenCreateInjectTypeInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::SceneContext::$$c__DisplayClass49_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
