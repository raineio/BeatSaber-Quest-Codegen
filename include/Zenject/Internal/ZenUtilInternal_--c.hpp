// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.Internal.ZenUtilInternal
#include "Zenject/Internal/ZenUtilInternal.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: SceneContext
  class SceneContext;
  // Forward declaring type: InjectTypeInfo
  class InjectTypeInfo;
}
// Completed forward declares
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(Zenject::Internal::ZenUtilInternal::$$c);
DEFINE_IL2CPP_ARG_TYPE(Zenject::Internal::ZenUtilInternal::$$c*, "Zenject.Internal", "ZenUtilInternal/<>c");
// Type namespace: Zenject.Internal
namespace Zenject::Internal {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.Internal.ZenUtilInternal/Zenject.Internal.<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class ZenUtilInternal::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly Zenject.Internal.ZenUtilInternal/Zenject.Internal.<>c <>9
    static Zenject::Internal::ZenUtilInternal::$$c* _get_$$9();
    // Set static field: static public readonly Zenject.Internal.ZenUtilInternal/Zenject.Internal.<>c <>9
    static void _set_$$9(Zenject::Internal::ZenUtilInternal::$$c* value);
    // Get static field: static public System.Func`2<UnityEngine.GameObject,System.Collections.Generic.IEnumerable`1<Zenject.SceneContext>> <>9__3_0
    static System::Func_2<UnityEngine::GameObject*, System::Collections::Generic::IEnumerable_1<Zenject::SceneContext*>*>* _get_$$9__3_0();
    // Set static field: static public System.Func`2<UnityEngine.GameObject,System.Collections.Generic.IEnumerable`1<Zenject.SceneContext>> <>9__3_0
    static void _set_$$9__3_0(System::Func_2<UnityEngine::GameObject*, System::Collections::Generic::IEnumerable_1<Zenject::SceneContext*>*>* value);
    // Get static field: static public System.Func`2<UnityEngine.GameObject,System.Boolean> <>9__10_0
    static System::Func_2<UnityEngine::GameObject*, bool>* _get_$$9__10_0();
    // Set static field: static public System.Func`2<UnityEngine.GameObject,System.Boolean> <>9__10_0
    static void _set_$$9__10_0(System::Func_2<UnityEngine::GameObject*, bool>* value);
    // static private System.Void .cctor()
    // Offset: 0x18D8E98
    static void _cctor();
    // System.Collections.Generic.IEnumerable`1<Zenject.SceneContext> <GetAllSceneContexts>b__3_0(UnityEngine.GameObject root)
    // Offset: 0x18D8F04
    System::Collections::Generic::IEnumerable_1<Zenject::SceneContext*>* $GetAllSceneContexts$b__3_0(UnityEngine::GameObject* root);
    // System.Boolean <GetRootGameObjects>b__10_0(UnityEngine.GameObject x)
    // Offset: 0x18D8F5C
    bool $GetRootGameObjects$b__10_0(UnityEngine::GameObject* x);
    // static private System.Object __zenCreate(System.Object[] P_0)
    // Offset: 0x18D8FEC
    static ::Il2CppObject* __zenCreate(::ArrayW<::Il2CppObject*> P_0);
    // static private Zenject.InjectTypeInfo __zenCreateInjectTypeInfo()
    // Offset: 0x18D9048
    static Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();
    // public System.Void .ctor()
    // Offset: 0x18D8EFC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ZenUtilInternal::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::Internal::ZenUtilInternal::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ZenUtilInternal::$$c*, creationType>()));
    }
  }; // Zenject.Internal.ZenUtilInternal/Zenject.Internal.<>c
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::Internal::ZenUtilInternal::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Zenject::Internal::ZenUtilInternal::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::Internal::ZenUtilInternal::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::Internal::ZenUtilInternal::$$c::$GetAllSceneContexts$b__3_0
// Il2CppName: <GetAllSceneContexts>b__3_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IEnumerable_1<Zenject::SceneContext*>* (Zenject::Internal::ZenUtilInternal::$$c::*)(UnityEngine::GameObject*)>(&Zenject::Internal::ZenUtilInternal::$$c::$GetAllSceneContexts$b__3_0)> {
  static const MethodInfo* get() {
    static auto* root = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::Internal::ZenUtilInternal::$$c*), "<GetAllSceneContexts>b__3_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{root});
  }
};
// Writing MetadataGetter for method: Zenject::Internal::ZenUtilInternal::$$c::$GetRootGameObjects$b__10_0
// Il2CppName: <GetRootGameObjects>b__10_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Zenject::Internal::ZenUtilInternal::$$c::*)(UnityEngine::GameObject*)>(&Zenject::Internal::ZenUtilInternal::$$c::$GetRootGameObjects$b__10_0)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::Internal::ZenUtilInternal::$$c*), "<GetRootGameObjects>b__10_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: Zenject::Internal::ZenUtilInternal::$$c::__zenCreate
// Il2CppName: __zenCreate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (*)(::ArrayW<::Il2CppObject*>)>(&Zenject::Internal::ZenUtilInternal::$$c::__zenCreate)> {
  static const MethodInfo* get() {
    static auto* P_0 = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::Internal::ZenUtilInternal::$$c*), "__zenCreate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{P_0});
  }
};
// Writing MetadataGetter for method: Zenject::Internal::ZenUtilInternal::$$c::__zenCreateInjectTypeInfo
// Il2CppName: __zenCreateInjectTypeInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::InjectTypeInfo* (*)()>(&Zenject::Internal::ZenUtilInternal::$$c::__zenCreateInjectTypeInfo)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::Internal::ZenUtilInternal::$$c*), "__zenCreateInjectTypeInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::Internal::ZenUtilInternal::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
