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
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: ConventionBindInfo
  class ConventionBindInfo;
  // Forward declaring type: ConventionFilterTypesBinder
  class ConventionFilterTypesBinder;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Forward declaring type: ConventionSelectTypesBinder
  class ConventionSelectTypesBinder;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Zenject::ConventionSelectTypesBinder);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::ConventionSelectTypesBinder*, "Zenject", "ConventionSelectTypesBinder");
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.ConventionSelectTypesBinder
  // [TokenAttribute] Offset: FFFFFFFF
  // [NoReflectionBakingAttribute] Offset: FFFFFFFF
  class ConventionSelectTypesBinder : public ::Il2CppObject {
    public:
    // Nested type: ::Zenject::ConventionSelectTypesBinder::$$c
    class $$c;
    public:
    // private readonly Zenject.ConventionBindInfo _bindInfo
    // Size: 0x8
    // Offset: 0x10
    ::Zenject::ConventionBindInfo* bindInfo;
    // Field size check
    static_assert(sizeof(::Zenject::ConventionBindInfo*) == 0x8);
    public:
    // Creating conversion operator: operator ::Zenject::ConventionBindInfo*
    constexpr operator ::Zenject::ConventionBindInfo*() const noexcept {
      return bindInfo;
    }
    // Get instance field reference: private readonly Zenject.ConventionBindInfo _bindInfo
    [[deprecated("Use field access instead!")]] ::Zenject::ConventionBindInfo*& dyn__bindInfo();
    // public System.Void .ctor(Zenject.ConventionBindInfo bindInfo)
    // Offset: 0x17C047C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ConventionSelectTypesBinder* New_ctor(::Zenject::ConventionBindInfo* bindInfo) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::ConventionSelectTypesBinder::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ConventionSelectTypesBinder*, creationType>(bindInfo)));
    }
    // private Zenject.ConventionFilterTypesBinder CreateNextBinder()
    // Offset: 0x17C5BA4
    ::Zenject::ConventionFilterTypesBinder* CreateNextBinder();
    // public Zenject.ConventionFilterTypesBinder AllTypes()
    // Offset: 0x17C5C0C
    ::Zenject::ConventionFilterTypesBinder* AllTypes();
    // public Zenject.ConventionFilterTypesBinder AllClasses()
    // Offset: 0x17C5C10
    ::Zenject::ConventionFilterTypesBinder* AllClasses();
    // public Zenject.ConventionFilterTypesBinder AllNonAbstractClasses()
    // Offset: 0x17C5D0C
    ::Zenject::ConventionFilterTypesBinder* AllNonAbstractClasses();
    // public Zenject.ConventionFilterTypesBinder AllAbstractClasses()
    // Offset: 0x17C5E08
    ::Zenject::ConventionFilterTypesBinder* AllAbstractClasses();
    // public Zenject.ConventionFilterTypesBinder AllInterfaces()
    // Offset: 0x17C5F04
    ::Zenject::ConventionFilterTypesBinder* AllInterfaces();
  }; // Zenject.ConventionSelectTypesBinder
  #pragma pack(pop)
  static check_size<sizeof(ConventionSelectTypesBinder), 16 + sizeof(::Zenject::ConventionBindInfo*)> __Zenject_ConventionSelectTypesBinderSizeCheck;
  static_assert(sizeof(ConventionSelectTypesBinder) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::ConventionSelectTypesBinder::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Zenject::ConventionSelectTypesBinder::CreateNextBinder
// Il2CppName: CreateNextBinder
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::ConventionFilterTypesBinder* (Zenject::ConventionSelectTypesBinder::*)()>(&Zenject::ConventionSelectTypesBinder::CreateNextBinder)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::ConventionSelectTypesBinder*), "CreateNextBinder", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::ConventionSelectTypesBinder::AllTypes
// Il2CppName: AllTypes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::ConventionFilterTypesBinder* (Zenject::ConventionSelectTypesBinder::*)()>(&Zenject::ConventionSelectTypesBinder::AllTypes)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::ConventionSelectTypesBinder*), "AllTypes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::ConventionSelectTypesBinder::AllClasses
// Il2CppName: AllClasses
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::ConventionFilterTypesBinder* (Zenject::ConventionSelectTypesBinder::*)()>(&Zenject::ConventionSelectTypesBinder::AllClasses)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::ConventionSelectTypesBinder*), "AllClasses", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::ConventionSelectTypesBinder::AllNonAbstractClasses
// Il2CppName: AllNonAbstractClasses
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::ConventionFilterTypesBinder* (Zenject::ConventionSelectTypesBinder::*)()>(&Zenject::ConventionSelectTypesBinder::AllNonAbstractClasses)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::ConventionSelectTypesBinder*), "AllNonAbstractClasses", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::ConventionSelectTypesBinder::AllAbstractClasses
// Il2CppName: AllAbstractClasses
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::ConventionFilterTypesBinder* (Zenject::ConventionSelectTypesBinder::*)()>(&Zenject::ConventionSelectTypesBinder::AllAbstractClasses)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::ConventionSelectTypesBinder*), "AllAbstractClasses", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::ConventionSelectTypesBinder::AllInterfaces
// Il2CppName: AllInterfaces
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::ConventionFilterTypesBinder* (Zenject::ConventionSelectTypesBinder::*)()>(&Zenject::ConventionSelectTypesBinder::AllInterfaces)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::ConventionSelectTypesBinder*), "AllInterfaces", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
