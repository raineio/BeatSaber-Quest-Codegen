// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.Internal.PreserveAttribute
#include "Zenject/Internal/PreserveAttribute.hpp"
// Including type: Zenject.InjectSources
#include "Zenject/InjectSources.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x24
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.InjectAttributeBase
  // [TokenAttribute] Offset: FFFFFFFF
  class InjectAttributeBase : public Zenject::Internal::PreserveAttribute {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    private:
    #endif
    // private System.Boolean <Optional>k__BackingField
    // Size: 0x1
    // Offset: 0x10
    bool Optional;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: Optional and: Id
    char __padding0[0x7] = {};
    // private System.Object <Id>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppObject* Id;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private Zenject.InjectSources <Source>k__BackingField
    // Size: 0x4
    // Offset: 0x20
    Zenject::InjectSources Source;
    // Field size check
    static_assert(sizeof(Zenject::InjectSources) == 0x4);
    public:
    // Get instance field reference: private System.Boolean <Optional>k__BackingField
    bool& dyn_$Optional$k__BackingField();
    // Get instance field reference: private System.Object <Id>k__BackingField
    ::Il2CppObject*& dyn_$Id$k__BackingField();
    // Get instance field reference: private Zenject.InjectSources <Source>k__BackingField
    Zenject::InjectSources& dyn_$Source$k__BackingField();
    // public System.Boolean get_Optional()
    // Offset: 0x2610B94
    bool get_Optional();
    // public System.Void set_Optional(System.Boolean value)
    // Offset: 0x2610B9C
    void set_Optional(bool value);
    // public System.Object get_Id()
    // Offset: 0x2610BA8
    ::Il2CppObject* get_Id();
    // public System.Void set_Id(System.Object value)
    // Offset: 0x2610BB0
    void set_Id(::Il2CppObject* value);
    // public Zenject.InjectSources get_Source()
    // Offset: 0x2610BB8
    Zenject::InjectSources get_Source();
    // public System.Void set_Source(Zenject.InjectSources value)
    // Offset: 0x2610BC0
    void set_Source(Zenject::InjectSources value);
    // protected System.Void .ctor()
    // Offset: 0x2610B8C
    // Implemented from: Zenject.Internal.PreserveAttribute
    // Base method: System.Void PreserveAttribute::.ctor()
    // Base method: System.Void Attribute::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InjectAttributeBase* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::InjectAttributeBase::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InjectAttributeBase*, creationType>()));
    }
  }; // Zenject.InjectAttributeBase
  #pragma pack(pop)
  static check_size<sizeof(InjectAttributeBase), 32 + sizeof(Zenject::InjectSources)> __Zenject_InjectAttributeBaseSizeCheck;
  static_assert(sizeof(InjectAttributeBase) == 0x24);
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::InjectAttributeBase*, "Zenject", "InjectAttributeBase");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::InjectAttributeBase::get_Optional
// Il2CppName: get_Optional
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Zenject::InjectAttributeBase::*)()>(&Zenject::InjectAttributeBase::get_Optional)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::InjectAttributeBase*), "get_Optional", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::InjectAttributeBase::set_Optional
// Il2CppName: set_Optional
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::InjectAttributeBase::*)(bool)>(&Zenject::InjectAttributeBase::set_Optional)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::InjectAttributeBase*), "set_Optional", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Zenject::InjectAttributeBase::get_Id
// Il2CppName: get_Id
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (Zenject::InjectAttributeBase::*)()>(&Zenject::InjectAttributeBase::get_Id)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::InjectAttributeBase*), "get_Id", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::InjectAttributeBase::set_Id
// Il2CppName: set_Id
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::InjectAttributeBase::*)(::Il2CppObject*)>(&Zenject::InjectAttributeBase::set_Id)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::InjectAttributeBase*), "set_Id", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Zenject::InjectAttributeBase::get_Source
// Il2CppName: get_Source
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::InjectSources (Zenject::InjectAttributeBase::*)()>(&Zenject::InjectAttributeBase::get_Source)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::InjectAttributeBase*), "get_Source", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::InjectAttributeBase::set_Source
// Il2CppName: set_Source
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::InjectAttributeBase::*)(Zenject::InjectSources)>(&Zenject::InjectAttributeBase::set_Source)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Zenject", "InjectSources")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::InjectAttributeBase*), "set_Source", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Zenject::InjectAttributeBase::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
