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
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Forward declaring type: SubContainerCreatorBindInfo
  class SubContainerCreatorBindInfo;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Zenject::SubContainerCreatorBindInfo);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::SubContainerCreatorBindInfo*, "Zenject", "SubContainerCreatorBindInfo");
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.SubContainerCreatorBindInfo
  // [TokenAttribute] Offset: FFFFFFFF
  // [NoReflectionBakingAttribute] Offset: FFFFFFFF
  class SubContainerCreatorBindInfo : public ::Il2CppObject {
    public:
    public:
    // private System.String <DefaultParentName>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::StringW DefaultParentName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Boolean <CreateKernel>k__BackingField
    // Size: 0x1
    // Offset: 0x18
    bool CreateKernel;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: CreateKernel and: KernelType
    char __padding1[0x7] = {};
    // private System.Type <KernelType>k__BackingField
    // Size: 0x8
    // Offset: 0x20
    ::System::Type* KernelType;
    // Field size check
    static_assert(sizeof(::System::Type*) == 0x8);
    public:
    // Get instance field reference: private System.String <DefaultParentName>k__BackingField
    [[deprecated("Use field access instead!")]] ::StringW& dyn_$DefaultParentName$k__BackingField();
    // Get instance field reference: private System.Boolean <CreateKernel>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$CreateKernel$k__BackingField();
    // Get instance field reference: private System.Type <KernelType>k__BackingField
    [[deprecated("Use field access instead!")]] ::System::Type*& dyn_$KernelType$k__BackingField();
    // public System.String get_DefaultParentName()
    // Offset: 0x1D223E0
    ::StringW get_DefaultParentName();
    // public System.Void set_DefaultParentName(System.String value)
    // Offset: 0x1D223E8
    void set_DefaultParentName(::StringW value);
    // public System.Boolean get_CreateKernel()
    // Offset: 0x1D223F0
    bool get_CreateKernel();
    // public System.Void set_CreateKernel(System.Boolean value)
    // Offset: 0x1D223F8
    void set_CreateKernel(bool value);
    // public System.Type get_KernelType()
    // Offset: 0x1D22404
    ::System::Type* get_KernelType();
    // public System.Void set_KernelType(System.Type value)
    // Offset: 0x1D2240C
    void set_KernelType(::System::Type* value);
    // public System.Void .ctor()
    // Offset: 0x1D1E8C8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SubContainerCreatorBindInfo* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::SubContainerCreatorBindInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SubContainerCreatorBindInfo*, creationType>()));
    }
  }; // Zenject.SubContainerCreatorBindInfo
  #pragma pack(pop)
  static check_size<sizeof(SubContainerCreatorBindInfo), 32 + sizeof(::System::Type*)> __Zenject_SubContainerCreatorBindInfoSizeCheck;
  static_assert(sizeof(SubContainerCreatorBindInfo) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::SubContainerCreatorBindInfo::get_DefaultParentName
// Il2CppName: get_DefaultParentName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Zenject::SubContainerCreatorBindInfo::*)()>(&Zenject::SubContainerCreatorBindInfo::get_DefaultParentName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::SubContainerCreatorBindInfo*), "get_DefaultParentName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::SubContainerCreatorBindInfo::set_DefaultParentName
// Il2CppName: set_DefaultParentName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::SubContainerCreatorBindInfo::*)(::StringW)>(&Zenject::SubContainerCreatorBindInfo::set_DefaultParentName)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::SubContainerCreatorBindInfo*), "set_DefaultParentName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Zenject::SubContainerCreatorBindInfo::get_CreateKernel
// Il2CppName: get_CreateKernel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Zenject::SubContainerCreatorBindInfo::*)()>(&Zenject::SubContainerCreatorBindInfo::get_CreateKernel)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::SubContainerCreatorBindInfo*), "get_CreateKernel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::SubContainerCreatorBindInfo::set_CreateKernel
// Il2CppName: set_CreateKernel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::SubContainerCreatorBindInfo::*)(bool)>(&Zenject::SubContainerCreatorBindInfo::set_CreateKernel)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::SubContainerCreatorBindInfo*), "set_CreateKernel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Zenject::SubContainerCreatorBindInfo::get_KernelType
// Il2CppName: get_KernelType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (Zenject::SubContainerCreatorBindInfo::*)()>(&Zenject::SubContainerCreatorBindInfo::get_KernelType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::SubContainerCreatorBindInfo*), "get_KernelType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::SubContainerCreatorBindInfo::set_KernelType
// Il2CppName: set_KernelType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::SubContainerCreatorBindInfo::*)(::System::Type*)>(&Zenject::SubContainerCreatorBindInfo::set_KernelType)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::SubContainerCreatorBindInfo*), "set_KernelType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Zenject::SubContainerCreatorBindInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
