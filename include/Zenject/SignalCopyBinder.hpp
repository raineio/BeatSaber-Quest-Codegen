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
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: BindInfo
  class BindInfo;
  // Forward declaring type: BindingInheritanceMethods
  struct BindingInheritanceMethods;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Forward declaring type: SignalCopyBinder
  class SignalCopyBinder;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Zenject::SignalCopyBinder);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::SignalCopyBinder*, "Zenject", "SignalCopyBinder");
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.SignalCopyBinder
  // [TokenAttribute] Offset: FFFFFFFF
  // [NoReflectionBakingAttribute] Offset: FFFFFFFF
  class SignalCopyBinder : public ::Il2CppObject {
    public:
    public:
    // private readonly System.Collections.Generic.List`1<Zenject.BindInfo> _bindInfos
    // Size: 0x8
    // Offset: 0x10
    ::System::Collections::Generic::List_1<::Zenject::BindInfo*>* bindInfos;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::Zenject::BindInfo*>*) == 0x8);
    public:
    // Creating conversion operator: operator ::System::Collections::Generic::List_1<::Zenject::BindInfo*>*
    constexpr operator ::System::Collections::Generic::List_1<::Zenject::BindInfo*>*() const noexcept {
      return bindInfos;
    }
    // Get instance field reference: private readonly System.Collections.Generic.List`1<Zenject.BindInfo> _bindInfos
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::Zenject::BindInfo*>*& dyn__bindInfos();
    // public System.Void .ctor()
    // Offset: 0x1D1C514
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SignalCopyBinder* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::SignalCopyBinder::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SignalCopyBinder*, creationType>()));
    }
    // public System.Void .ctor(Zenject.BindInfo bindInfo)
    // Offset: 0x1D1C588
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SignalCopyBinder* New_ctor(::Zenject::BindInfo* bindInfo) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::SignalCopyBinder::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SignalCopyBinder*, creationType>(bindInfo)));
    }
    // public System.Void AddCopyBindInfo(Zenject.BindInfo bindInfo)
    // Offset: 0x1D1C628
    void AddCopyBindInfo(::Zenject::BindInfo* bindInfo);
    // public System.Void CopyIntoAllSubContainers()
    // Offset: 0x1D1C690
    void CopyIntoAllSubContainers();
    // public System.Void CopyIntoDirectSubContainers()
    // Offset: 0x1D1C730
    void CopyIntoDirectSubContainers();
    // public System.Void MoveIntoAllSubContainers()
    // Offset: 0x1D1C738
    void MoveIntoAllSubContainers();
    // public System.Void MoveIntoDirectSubContainers()
    // Offset: 0x1D1C740
    void MoveIntoDirectSubContainers();
    // private System.Void SetInheritanceMethod(Zenject.BindingInheritanceMethods method)
    // Offset: 0x1D1C698
    void SetInheritanceMethod(::Zenject::BindingInheritanceMethods method);
  }; // Zenject.SignalCopyBinder
  #pragma pack(pop)
  static check_size<sizeof(SignalCopyBinder), 16 + sizeof(::System::Collections::Generic::List_1<::Zenject::BindInfo*>*)> __Zenject_SignalCopyBinderSizeCheck;
  static_assert(sizeof(SignalCopyBinder) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::SignalCopyBinder::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Zenject::SignalCopyBinder::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Zenject::SignalCopyBinder::AddCopyBindInfo
// Il2CppName: AddCopyBindInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::SignalCopyBinder::*)(::Zenject::BindInfo*)>(&Zenject::SignalCopyBinder::AddCopyBindInfo)> {
  static const MethodInfo* get() {
    static auto* bindInfo = &::il2cpp_utils::GetClassFromName("Zenject", "BindInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::SignalCopyBinder*), "AddCopyBindInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bindInfo});
  }
};
// Writing MetadataGetter for method: Zenject::SignalCopyBinder::CopyIntoAllSubContainers
// Il2CppName: CopyIntoAllSubContainers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::SignalCopyBinder::*)()>(&Zenject::SignalCopyBinder::CopyIntoAllSubContainers)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::SignalCopyBinder*), "CopyIntoAllSubContainers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::SignalCopyBinder::CopyIntoDirectSubContainers
// Il2CppName: CopyIntoDirectSubContainers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::SignalCopyBinder::*)()>(&Zenject::SignalCopyBinder::CopyIntoDirectSubContainers)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::SignalCopyBinder*), "CopyIntoDirectSubContainers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::SignalCopyBinder::MoveIntoAllSubContainers
// Il2CppName: MoveIntoAllSubContainers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::SignalCopyBinder::*)()>(&Zenject::SignalCopyBinder::MoveIntoAllSubContainers)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::SignalCopyBinder*), "MoveIntoAllSubContainers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::SignalCopyBinder::MoveIntoDirectSubContainers
// Il2CppName: MoveIntoDirectSubContainers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::SignalCopyBinder::*)()>(&Zenject::SignalCopyBinder::MoveIntoDirectSubContainers)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::SignalCopyBinder*), "MoveIntoDirectSubContainers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::SignalCopyBinder::SetInheritanceMethod
// Il2CppName: SetInheritanceMethod
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::SignalCopyBinder::*)(::Zenject::BindingInheritanceMethods)>(&Zenject::SignalCopyBinder::SetInheritanceMethod)> {
  static const MethodInfo* get() {
    static auto* method = &::il2cpp_utils::GetClassFromName("Zenject", "BindingInheritanceMethods")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::SignalCopyBinder*), "SetInheritanceMethod", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{method});
  }
};
