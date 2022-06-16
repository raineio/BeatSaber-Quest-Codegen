// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.IProvider
#include "Zenject/IProvider.hpp"
// Including type: Zenject.InjectSources
#include "Zenject/InjectSources.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: DiContainer
  class DiContainer;
  // Forward declaring type: InjectContext
  class InjectContext;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
  // Forward declaring type: Action
  class Action;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Forward declaring type: ResolveProvider
  class ResolveProvider;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Zenject::ResolveProvider);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::ResolveProvider*, "Zenject", "ResolveProvider");
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x31
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.ResolveProvider
  // [TokenAttribute] Offset: FFFFFFFF
  // [NoReflectionBakingAttribute] Offset: FFFFFFFF
  class ResolveProvider : public ::Il2CppObject/*, public ::Zenject::IProvider*/ {
    public:
    public:
    // private readonly System.Object _identifier
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppObject* identifier;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private readonly Zenject.DiContainer _container
    // Size: 0x8
    // Offset: 0x18
    ::Zenject::DiContainer* container;
    // Field size check
    static_assert(sizeof(::Zenject::DiContainer*) == 0x8);
    // private readonly System.Type _contractType
    // Size: 0x8
    // Offset: 0x20
    ::System::Type* contractType;
    // Field size check
    static_assert(sizeof(::System::Type*) == 0x8);
    // private readonly System.Boolean _isOptional
    // Size: 0x1
    // Offset: 0x28
    bool isOptional;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isOptional and: source
    char __padding3[0x3] = {};
    // private readonly Zenject.InjectSources _source
    // Size: 0x4
    // Offset: 0x2C
    ::Zenject::InjectSources source;
    // Field size check
    static_assert(sizeof(::Zenject::InjectSources) == 0x4);
    // private readonly System.Boolean _matchAll
    // Size: 0x1
    // Offset: 0x30
    bool matchAll;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating interface conversion operator: operator ::Zenject::IProvider
    operator ::Zenject::IProvider() noexcept {
      return *reinterpret_cast<::Zenject::IProvider*>(this);
    }
    // Creating interface conversion operator: i_IProvider
    inline ::Zenject::IProvider* i_IProvider() noexcept {
      return reinterpret_cast<::Zenject::IProvider*>(this);
    }
    // Get instance field reference: private readonly System.Object _identifier
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn__identifier();
    // Get instance field reference: private readonly Zenject.DiContainer _container
    [[deprecated("Use field access instead!")]] ::Zenject::DiContainer*& dyn__container();
    // Get instance field reference: private readonly System.Type _contractType
    [[deprecated("Use field access instead!")]] ::System::Type*& dyn__contractType();
    // Get instance field reference: private readonly System.Boolean _isOptional
    [[deprecated("Use field access instead!")]] bool& dyn__isOptional();
    // Get instance field reference: private readonly Zenject.InjectSources _source
    [[deprecated("Use field access instead!")]] ::Zenject::InjectSources& dyn__source();
    // Get instance field reference: private readonly System.Boolean _matchAll
    [[deprecated("Use field access instead!")]] bool& dyn__matchAll();
    // public System.Boolean get_IsCached()
    // Offset: 0x1C120DC
    bool get_IsCached();
    // public System.Boolean get_TypeVariesBasedOnMemberType()
    // Offset: 0x1C120E4
    bool get_TypeVariesBasedOnMemberType();
    // public System.Void .ctor(System.Type contractType, Zenject.DiContainer container, System.Object identifier, System.Boolean isOptional, Zenject.InjectSources source, System.Boolean matchAll)
    // Offset: 0x1C1206C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ResolveProvider* New_ctor(::System::Type* contractType, ::Zenject::DiContainer* container, ::Il2CppObject* identifier, bool isOptional, ::Zenject::InjectSources source, bool matchAll) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::ResolveProvider::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ResolveProvider*, creationType>(contractType, container, identifier, isOptional, source, matchAll)));
    }
    // public System.Type GetInstanceType(Zenject.InjectContext context)
    // Offset: 0x1C120EC
    ::System::Type* GetInstanceType(::Zenject::InjectContext* context);
    // public System.Void GetAllInstancesWithInjectSplit(Zenject.InjectContext context, System.Collections.Generic.List`1<Zenject.TypeValuePair> args, out System.Action injectAction, System.Collections.Generic.List`1<System.Object> buffer)
    // Offset: 0x1C120F4
    void GetAllInstancesWithInjectSplit(::Zenject::InjectContext* context, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* args, ByRef<::System::Action*> injectAction, ::System::Collections::Generic::List_1<::Il2CppObject*>* buffer);
    // private Zenject.InjectContext GetSubContext(Zenject.InjectContext parent)
    // Offset: 0x1C12234
    ::Zenject::InjectContext* GetSubContext(::Zenject::InjectContext* parent);
  }; // Zenject.ResolveProvider
  #pragma pack(pop)
  static check_size<sizeof(ResolveProvider), 48 + sizeof(bool)> __Zenject_ResolveProviderSizeCheck;
  static_assert(sizeof(ResolveProvider) == 0x31);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::ResolveProvider::get_IsCached
// Il2CppName: get_IsCached
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Zenject::ResolveProvider::*)()>(&Zenject::ResolveProvider::get_IsCached)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::ResolveProvider*), "get_IsCached", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::ResolveProvider::get_TypeVariesBasedOnMemberType
// Il2CppName: get_TypeVariesBasedOnMemberType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Zenject::ResolveProvider::*)()>(&Zenject::ResolveProvider::get_TypeVariesBasedOnMemberType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::ResolveProvider*), "get_TypeVariesBasedOnMemberType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::ResolveProvider::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Zenject::ResolveProvider::GetInstanceType
// Il2CppName: GetInstanceType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (Zenject::ResolveProvider::*)(::Zenject::InjectContext*)>(&Zenject::ResolveProvider::GetInstanceType)> {
  static const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("Zenject", "InjectContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::ResolveProvider*), "GetInstanceType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context});
  }
};
// Writing MetadataGetter for method: Zenject::ResolveProvider::GetAllInstancesWithInjectSplit
// Il2CppName: GetAllInstancesWithInjectSplit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::ResolveProvider::*)(::Zenject::InjectContext*, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*, ByRef<::System::Action*>, ::System::Collections::Generic::List_1<::Il2CppObject*>*)>(&Zenject::ResolveProvider::GetAllInstancesWithInjectSplit)> {
  static const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("Zenject", "InjectContext")->byval_arg;
    static auto* args = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Zenject", "TypeValuePair")})->byval_arg;
    static auto* injectAction = &::il2cpp_utils::GetClassFromName("System", "Action")->this_arg;
    static auto* buffer = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Object")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::ResolveProvider*), "GetAllInstancesWithInjectSplit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context, args, injectAction, buffer});
  }
};
// Writing MetadataGetter for method: Zenject::ResolveProvider::GetSubContext
// Il2CppName: GetSubContext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::InjectContext* (Zenject::ResolveProvider::*)(::Zenject::InjectContext*)>(&Zenject::ResolveProvider::GetSubContext)> {
  static const MethodInfo* get() {
    static auto* parent = &::il2cpp_utils::GetClassFromName("Zenject", "InjectContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::ResolveProvider*), "GetSubContext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{parent});
  }
};
