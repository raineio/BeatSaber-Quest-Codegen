// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.IProvider
#include "Zenject/IProvider.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
  // Forward declaring type: Action
  class Action;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: InjectContext
  class InjectContext;
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
  // Forward declaring type: ResourceProvider
  class ResourceProvider;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Zenject::ResourceProvider);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::ResourceProvider*, "Zenject", "ResourceProvider");
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x21
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.ResourceProvider
  // [TokenAttribute] Offset: FFFFFFFF
  // [NoReflectionBakingAttribute] Offset: FFFFFFFF
  class ResourceProvider : public ::Il2CppObject/*, public ::Zenject::IProvider*/ {
    public:
    public:
    // private readonly System.Type _resourceType
    // Size: 0x8
    // Offset: 0x10
    ::System::Type* resourceType;
    // Field size check
    static_assert(sizeof(::System::Type*) == 0x8);
    // private readonly System.String _resourcePath
    // Size: 0x8
    // Offset: 0x18
    ::StringW resourcePath;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private readonly System.Boolean _matchSingle
    // Size: 0x1
    // Offset: 0x20
    bool matchSingle;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating interface conversion operator: operator ::Zenject::IProvider
    operator ::Zenject::IProvider() noexcept {
      return *reinterpret_cast<::Zenject::IProvider*>(this);
    }
    // Get instance field reference: private readonly System.Type _resourceType
    [[deprecated("Use field access instead!")]] ::System::Type*& dyn__resourceType();
    // Get instance field reference: private readonly System.String _resourcePath
    [[deprecated("Use field access instead!")]] ::StringW& dyn__resourcePath();
    // Get instance field reference: private readonly System.Boolean _matchSingle
    [[deprecated("Use field access instead!")]] bool& dyn__matchSingle();
    // public System.Boolean get_IsCached()
    // Offset: 0x1C1E5F4
    bool get_IsCached();
    // public System.Boolean get_TypeVariesBasedOnMemberType()
    // Offset: 0x1C1E5FC
    bool get_TypeVariesBasedOnMemberType();
    // public System.Void .ctor(System.String resourcePath, System.Type resourceType, System.Boolean matchSingle)
    // Offset: 0x1C1E5B0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ResourceProvider* New_ctor(::StringW resourcePath, ::System::Type* resourceType, bool matchSingle) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::ResourceProvider::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ResourceProvider*, creationType>(resourcePath, resourceType, matchSingle)));
    }
    // public System.Type GetInstanceType(Zenject.InjectContext context)
    // Offset: 0x1C1E604
    ::System::Type* GetInstanceType(::Zenject::InjectContext* context);
    // public System.Void GetAllInstancesWithInjectSplit(Zenject.InjectContext context, System.Collections.Generic.List`1<Zenject.TypeValuePair> args, out System.Action injectAction, System.Collections.Generic.List`1<System.Object> buffer)
    // Offset: 0x1C1E60C
    void GetAllInstancesWithInjectSplit(::Zenject::InjectContext* context, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* args, ByRef<::System::Action*> injectAction, ::System::Collections::Generic::List_1<::Il2CppObject*>* buffer);
  }; // Zenject.ResourceProvider
  #pragma pack(pop)
  static check_size<sizeof(ResourceProvider), 32 + sizeof(bool)> __Zenject_ResourceProviderSizeCheck;
  static_assert(sizeof(ResourceProvider) == 0x21);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::ResourceProvider::get_IsCached
// Il2CppName: get_IsCached
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Zenject::ResourceProvider::*)()>(&Zenject::ResourceProvider::get_IsCached)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::ResourceProvider*), "get_IsCached", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::ResourceProvider::get_TypeVariesBasedOnMemberType
// Il2CppName: get_TypeVariesBasedOnMemberType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Zenject::ResourceProvider::*)()>(&Zenject::ResourceProvider::get_TypeVariesBasedOnMemberType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::ResourceProvider*), "get_TypeVariesBasedOnMemberType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::ResourceProvider::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Zenject::ResourceProvider::GetInstanceType
// Il2CppName: GetInstanceType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (Zenject::ResourceProvider::*)(::Zenject::InjectContext*)>(&Zenject::ResourceProvider::GetInstanceType)> {
  static const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("Zenject", "InjectContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::ResourceProvider*), "GetInstanceType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context});
  }
};
// Writing MetadataGetter for method: Zenject::ResourceProvider::GetAllInstancesWithInjectSplit
// Il2CppName: GetAllInstancesWithInjectSplit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::ResourceProvider::*)(::Zenject::InjectContext*, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*, ByRef<::System::Action*>, ::System::Collections::Generic::List_1<::Il2CppObject*>*)>(&Zenject::ResourceProvider::GetAllInstancesWithInjectSplit)> {
  static const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("Zenject", "InjectContext")->byval_arg;
    static auto* args = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Zenject", "TypeValuePair")})->byval_arg;
    static auto* injectAction = &::il2cpp_utils::GetClassFromName("System", "Action")->this_arg;
    static auto* buffer = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Object")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::ResourceProvider*), "GetAllInstancesWithInjectSplit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context, args, injectAction, buffer});
  }
};
