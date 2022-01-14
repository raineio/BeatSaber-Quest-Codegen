// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: BindInfo
  class BindInfo;
  // Forward declaring type: BindStatement
  class BindStatement;
  // Forward declaring type: IBindingFinalizer
  class IBindingFinalizer;
  // Forward declaring type: ScopeConcreteIdArgConditionCopyNonLazyBinder
  class ScopeConcreteIdArgConditionCopyNonLazyBinder;
  // Forward declaring type: DiContainer
  class DiContainer;
  // Forward declaring type: InjectContext
  class InjectContext;
  // Forward declaring type: InstallerBase
  class InstallerBase;
  // Forward declaring type: WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder
  class WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder;
  // Forward declaring type: NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder
  class NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
  // Forward declaring type: Type
  class Type;
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Object
  class Object;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Forward declaring type: SubContainerBinder
  class SubContainerBinder;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(Zenject::SubContainerBinder);
DEFINE_IL2CPP_ARG_TYPE(Zenject::SubContainerBinder*, "Zenject", "SubContainerBinder");
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x29
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.SubContainerBinder
  // [TokenAttribute] Offset: FFFFFFFF
  // [NoReflectionBakingAttribute] Offset: FFFFFFFF
  class SubContainerBinder : public ::Il2CppObject {
    public:
    // Nested type: Zenject::SubContainerBinder::$$c__DisplayClass7_0
    class $$c__DisplayClass7_0;
    // Nested type: Zenject::SubContainerBinder::$$c__DisplayClass8_0
    class $$c__DisplayClass8_0;
    // Nested type: Zenject::SubContainerBinder::$$c__DisplayClass10_0
    class $$c__DisplayClass10_0;
    // Nested type: Zenject::SubContainerBinder::$$c__DisplayClass11_0
    class $$c__DisplayClass11_0;
    // Nested type: Zenject::SubContainerBinder::$$c__DisplayClass12_0
    class $$c__DisplayClass12_0;
    // Nested type: Zenject::SubContainerBinder::$$c__DisplayClass13_0
    class $$c__DisplayClass13_0;
    // Nested type: Zenject::SubContainerBinder::$$c__DisplayClass15_0
    class $$c__DisplayClass15_0;
    // Nested type: Zenject::SubContainerBinder::$$c__DisplayClass17_0
    class $$c__DisplayClass17_0;
    // Nested type: Zenject::SubContainerBinder::$$c__DisplayClass18_0
    class $$c__DisplayClass18_0;
    // Nested type: Zenject::SubContainerBinder::$$c__DisplayClass20_0
    class $$c__DisplayClass20_0;
    // Nested type: Zenject::SubContainerBinder::$$c__DisplayClass22_0
    class $$c__DisplayClass22_0;
    // Nested type: Zenject::SubContainerBinder::$$c__DisplayClass24_0
    class $$c__DisplayClass24_0;
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private readonly Zenject.BindInfo _bindInfo
    // Size: 0x8
    // Offset: 0x10
    Zenject::BindInfo* bindInfo;
    // Field size check
    static_assert(sizeof(Zenject::BindInfo*) == 0x8);
    // private readonly Zenject.BindStatement _bindStatement
    // Size: 0x8
    // Offset: 0x18
    Zenject::BindStatement* bindStatement;
    // Field size check
    static_assert(sizeof(Zenject::BindStatement*) == 0x8);
    // private readonly System.Object _subIdentifier
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppObject* subIdentifier;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private readonly System.Boolean _resolveAll
    // Size: 0x1
    // Offset: 0x28
    bool resolveAll;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: private readonly Zenject.BindInfo _bindInfo
    Zenject::BindInfo*& dyn__bindInfo();
    // Get instance field reference: private readonly Zenject.BindStatement _bindStatement
    Zenject::BindStatement*& dyn__bindStatement();
    // Get instance field reference: private readonly System.Object _subIdentifier
    ::Il2CppObject*& dyn__subIdentifier();
    // Get instance field reference: private readonly System.Boolean _resolveAll
    bool& dyn__resolveAll();
    // protected System.Void set_SubFinalizer(Zenject.IBindingFinalizer value)
    // Offset: 0x2190388
    void set_SubFinalizer(Zenject::IBindingFinalizer* value);
    // public System.Void .ctor(Zenject.BindInfo bindInfo, Zenject.BindStatement bindStatement, System.Object subIdentifier, System.Boolean resolveAll)
    // Offset: 0x2190328
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SubContainerBinder* New_ctor(Zenject::BindInfo* bindInfo, Zenject::BindStatement* bindStatement, ::Il2CppObject* subIdentifier, bool resolveAll) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::SubContainerBinder::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SubContainerBinder*, creationType>(bindInfo, bindStatement, subIdentifier, resolveAll)));
    }
    // public Zenject.ScopeConcreteIdArgConditionCopyNonLazyBinder ByInstance(Zenject.DiContainer subContainer)
    // Offset: 0x21903A4
    Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* ByInstance(Zenject::DiContainer* subContainer);
    // public Zenject.ScopeConcreteIdArgConditionCopyNonLazyBinder ByInstanceGetter(System.Func`2<Zenject.InjectContext,Zenject.DiContainer> subContainerGetter)
    // Offset: 0x2190518
    Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* ByInstanceGetter(System::Func_2<Zenject::InjectContext*, Zenject::DiContainer*>* subContainerGetter);
    // public Zenject.WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder ByInstaller()
    // Offset: 0xFFFFFFFF
    template<class TInstaller>
    Zenject::WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder* ByInstaller() {
      static_assert(std::is_convertible_v<TInstaller, Zenject::InstallerBase*>);
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::SubContainerBinder::ByInstaller");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "ByInstaller", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TInstaller>::get()}, ::std::vector<const Il2CppType*>{})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TInstaller>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<Zenject::WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder*, false>(this, ___generic__method);
    }
    // public Zenject.WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder ByInstaller(System.Type installerType)
    // Offset: 0x2190644
    Zenject::WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder* ByInstaller(System::Type* installerType);
    // public Zenject.WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder ByMethod(System.Action`1<Zenject.DiContainer> installerMethod)
    // Offset: 0x21907F8
    Zenject::WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder* ByMethod(System::Action_1<Zenject::DiContainer*>* installerMethod);
    // public Zenject.NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder ByNewGameObjectMethod(System.Action`1<Zenject.DiContainer> installerMethod)
    // Offset: 0x219094C
    Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* ByNewGameObjectMethod(System::Action_1<Zenject::DiContainer*>* installerMethod);
    // public Zenject.NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder ByNewPrefabMethod(UnityEngine.Object prefab, System.Action`1<Zenject.DiContainer> installerMethod)
    // Offset: 0x2190AE8
    Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* ByNewPrefabMethod(UnityEngine::Object* prefab, System::Action_1<Zenject::DiContainer*>* installerMethod);
    // public Zenject.NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder ByNewGameObjectInstaller()
    // Offset: 0xFFFFFFFF
    template<class TInstaller>
    Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* ByNewGameObjectInstaller() {
      static_assert(std::is_convertible_v<TInstaller, Zenject::InstallerBase*>);
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::SubContainerBinder::ByNewGameObjectInstaller");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "ByNewGameObjectInstaller", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TInstaller>::get()}, ::std::vector<const Il2CppType*>{})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TInstaller>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder*, false>(this, ___generic__method);
    }
    // public Zenject.NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder ByNewGameObjectInstaller(System.Type installerType)
    // Offset: 0x2190C50
    Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* ByNewGameObjectInstaller(System::Type* installerType);
    // public Zenject.NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder ByNewPrefabInstaller(UnityEngine.Object prefab)
    // Offset: 0xFFFFFFFF
    template<class TInstaller>
    Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* ByNewPrefabInstaller(UnityEngine::Object* prefab) {
      static_assert(std::is_convertible_v<TInstaller, Zenject::InstallerBase*>);
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::SubContainerBinder::ByNewPrefabInstaller");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "ByNewPrefabInstaller", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TInstaller>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(prefab)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TInstaller>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder*, false>(this, ___generic__method, prefab);
    }
    // public Zenject.NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder ByNewPrefabInstaller(UnityEngine.Object prefab, System.Type installerType)
    // Offset: 0x2190DF4
    Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* ByNewPrefabInstaller(UnityEngine::Object* prefab, System::Type* installerType);
    // public Zenject.NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder ByNewPrefabResourceMethod(System.String resourcePath, System.Action`1<Zenject.DiContainer> installerMethod)
    // Offset: 0x2190FA0
    Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* ByNewPrefabResourceMethod(::StringW resourcePath, System::Action_1<Zenject::DiContainer*>* installerMethod);
    // public Zenject.NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder ByNewPrefabResourceInstaller(System.String resourcePath)
    // Offset: 0xFFFFFFFF
    template<class TInstaller>
    Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* ByNewPrefabResourceInstaller(::StringW resourcePath) {
      static_assert(std::is_convertible_v<TInstaller, Zenject::InstallerBase*>);
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::SubContainerBinder::ByNewPrefabResourceInstaller");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "ByNewPrefabResourceInstaller", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TInstaller>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(resourcePath)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TInstaller>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder*, false>(this, ___generic__method, resourcePath);
    }
    // public Zenject.NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder ByNewPrefabResourceInstaller(System.String resourcePath, System.Type installerType)
    // Offset: 0x2191108
    Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* ByNewPrefabResourceInstaller(::StringW resourcePath, System::Type* installerType);
    // public Zenject.NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder ByNewPrefab(UnityEngine.Object prefab)
    // Offset: 0x21912C4
    Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* ByNewPrefab(UnityEngine::Object* prefab);
    // public Zenject.NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder ByNewContextPrefab(UnityEngine.Object prefab)
    // Offset: 0x21912C8
    Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* ByNewContextPrefab(UnityEngine::Object* prefab);
    // public Zenject.NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder ByNewPrefabResource(System.String resourcePath)
    // Offset: 0x2191428
    Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* ByNewPrefabResource(::StringW resourcePath);
    // public Zenject.NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder ByNewContextPrefabResource(System.String resourcePath)
    // Offset: 0x219142C
    Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* ByNewContextPrefabResource(::StringW resourcePath);
  }; // Zenject.SubContainerBinder
  #pragma pack(pop)
  static check_size<sizeof(SubContainerBinder), 40 + sizeof(bool)> __Zenject_SubContainerBinderSizeCheck;
  static_assert(sizeof(SubContainerBinder) == 0x29);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::SubContainerBinder::set_SubFinalizer
// Il2CppName: set_SubFinalizer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::SubContainerBinder::*)(Zenject::IBindingFinalizer*)>(&Zenject::SubContainerBinder::set_SubFinalizer)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Zenject", "IBindingFinalizer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::SubContainerBinder*), "set_SubFinalizer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Zenject::SubContainerBinder::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Zenject::SubContainerBinder::ByInstance
// Il2CppName: ByInstance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* (Zenject::SubContainerBinder::*)(Zenject::DiContainer*)>(&Zenject::SubContainerBinder::ByInstance)> {
  static const MethodInfo* get() {
    static auto* subContainer = &::il2cpp_utils::GetClassFromName("Zenject", "DiContainer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::SubContainerBinder*), "ByInstance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{subContainer});
  }
};
// Writing MetadataGetter for method: Zenject::SubContainerBinder::ByInstanceGetter
// Il2CppName: ByInstanceGetter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* (Zenject::SubContainerBinder::*)(System::Func_2<Zenject::InjectContext*, Zenject::DiContainer*>*)>(&Zenject::SubContainerBinder::ByInstanceGetter)> {
  static const MethodInfo* get() {
    static auto* subContainerGetter = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Func`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Zenject", "InjectContext"), ::il2cpp_utils::GetClassFromName("Zenject", "DiContainer")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::SubContainerBinder*), "ByInstanceGetter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{subContainerGetter});
  }
};
// Writing MetadataGetter for method: Zenject::SubContainerBinder::ByInstaller
// Il2CppName: ByInstaller
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: Zenject::SubContainerBinder::ByInstaller
// Il2CppName: ByInstaller
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder* (Zenject::SubContainerBinder::*)(System::Type*)>(&Zenject::SubContainerBinder::ByInstaller)> {
  static const MethodInfo* get() {
    static auto* installerType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::SubContainerBinder*), "ByInstaller", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{installerType});
  }
};
// Writing MetadataGetter for method: Zenject::SubContainerBinder::ByMethod
// Il2CppName: ByMethod
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder* (Zenject::SubContainerBinder::*)(System::Action_1<Zenject::DiContainer*>*)>(&Zenject::SubContainerBinder::ByMethod)> {
  static const MethodInfo* get() {
    static auto* installerMethod = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Zenject", "DiContainer")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::SubContainerBinder*), "ByMethod", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{installerMethod});
  }
};
// Writing MetadataGetter for method: Zenject::SubContainerBinder::ByNewGameObjectMethod
// Il2CppName: ByNewGameObjectMethod
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* (Zenject::SubContainerBinder::*)(System::Action_1<Zenject::DiContainer*>*)>(&Zenject::SubContainerBinder::ByNewGameObjectMethod)> {
  static const MethodInfo* get() {
    static auto* installerMethod = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Zenject", "DiContainer")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::SubContainerBinder*), "ByNewGameObjectMethod", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{installerMethod});
  }
};
// Writing MetadataGetter for method: Zenject::SubContainerBinder::ByNewPrefabMethod
// Il2CppName: ByNewPrefabMethod
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* (Zenject::SubContainerBinder::*)(UnityEngine::Object*, System::Action_1<Zenject::DiContainer*>*)>(&Zenject::SubContainerBinder::ByNewPrefabMethod)> {
  static const MethodInfo* get() {
    static auto* prefab = &::il2cpp_utils::GetClassFromName("UnityEngine", "Object")->byval_arg;
    static auto* installerMethod = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Zenject", "DiContainer")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::SubContainerBinder*), "ByNewPrefabMethod", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{prefab, installerMethod});
  }
};
// Writing MetadataGetter for method: Zenject::SubContainerBinder::ByNewGameObjectInstaller
// Il2CppName: ByNewGameObjectInstaller
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: Zenject::SubContainerBinder::ByNewGameObjectInstaller
// Il2CppName: ByNewGameObjectInstaller
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* (Zenject::SubContainerBinder::*)(System::Type*)>(&Zenject::SubContainerBinder::ByNewGameObjectInstaller)> {
  static const MethodInfo* get() {
    static auto* installerType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::SubContainerBinder*), "ByNewGameObjectInstaller", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{installerType});
  }
};
// Writing MetadataGetter for method: Zenject::SubContainerBinder::ByNewPrefabInstaller
// Il2CppName: ByNewPrefabInstaller
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: Zenject::SubContainerBinder::ByNewPrefabInstaller
// Il2CppName: ByNewPrefabInstaller
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* (Zenject::SubContainerBinder::*)(UnityEngine::Object*, System::Type*)>(&Zenject::SubContainerBinder::ByNewPrefabInstaller)> {
  static const MethodInfo* get() {
    static auto* prefab = &::il2cpp_utils::GetClassFromName("UnityEngine", "Object")->byval_arg;
    static auto* installerType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::SubContainerBinder*), "ByNewPrefabInstaller", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{prefab, installerType});
  }
};
// Writing MetadataGetter for method: Zenject::SubContainerBinder::ByNewPrefabResourceMethod
// Il2CppName: ByNewPrefabResourceMethod
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* (Zenject::SubContainerBinder::*)(::StringW, System::Action_1<Zenject::DiContainer*>*)>(&Zenject::SubContainerBinder::ByNewPrefabResourceMethod)> {
  static const MethodInfo* get() {
    static auto* resourcePath = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* installerMethod = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Zenject", "DiContainer")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::SubContainerBinder*), "ByNewPrefabResourceMethod", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{resourcePath, installerMethod});
  }
};
// Writing MetadataGetter for method: Zenject::SubContainerBinder::ByNewPrefabResourceInstaller
// Il2CppName: ByNewPrefabResourceInstaller
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: Zenject::SubContainerBinder::ByNewPrefabResourceInstaller
// Il2CppName: ByNewPrefabResourceInstaller
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* (Zenject::SubContainerBinder::*)(::StringW, System::Type*)>(&Zenject::SubContainerBinder::ByNewPrefabResourceInstaller)> {
  static const MethodInfo* get() {
    static auto* resourcePath = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* installerType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::SubContainerBinder*), "ByNewPrefabResourceInstaller", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{resourcePath, installerType});
  }
};
// Writing MetadataGetter for method: Zenject::SubContainerBinder::ByNewPrefab
// Il2CppName: ByNewPrefab
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* (Zenject::SubContainerBinder::*)(UnityEngine::Object*)>(&Zenject::SubContainerBinder::ByNewPrefab)> {
  static const MethodInfo* get() {
    static auto* prefab = &::il2cpp_utils::GetClassFromName("UnityEngine", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::SubContainerBinder*), "ByNewPrefab", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{prefab});
  }
};
// Writing MetadataGetter for method: Zenject::SubContainerBinder::ByNewContextPrefab
// Il2CppName: ByNewContextPrefab
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* (Zenject::SubContainerBinder::*)(UnityEngine::Object*)>(&Zenject::SubContainerBinder::ByNewContextPrefab)> {
  static const MethodInfo* get() {
    static auto* prefab = &::il2cpp_utils::GetClassFromName("UnityEngine", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::SubContainerBinder*), "ByNewContextPrefab", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{prefab});
  }
};
// Writing MetadataGetter for method: Zenject::SubContainerBinder::ByNewPrefabResource
// Il2CppName: ByNewPrefabResource
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* (Zenject::SubContainerBinder::*)(::StringW)>(&Zenject::SubContainerBinder::ByNewPrefabResource)> {
  static const MethodInfo* get() {
    static auto* resourcePath = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::SubContainerBinder*), "ByNewPrefabResource", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{resourcePath});
  }
};
// Writing MetadataGetter for method: Zenject::SubContainerBinder::ByNewContextPrefabResource
// Il2CppName: ByNewContextPrefabResource
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* (Zenject::SubContainerBinder::*)(::StringW)>(&Zenject::SubContainerBinder::ByNewContextPrefabResource)> {
  static const MethodInfo* get() {
    static auto* resourcePath = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::SubContainerBinder*), "ByNewContextPrefabResource", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{resourcePath});
  }
};
