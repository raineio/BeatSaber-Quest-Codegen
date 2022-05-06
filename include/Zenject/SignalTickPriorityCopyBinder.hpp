// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.SignalCopyBinder
#include "Zenject/SignalCopyBinder.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: SignalDeclarationBindInfo
  class SignalDeclarationBindInfo;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Forward declaring type: SignalTickPriorityCopyBinder
  class SignalTickPriorityCopyBinder;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Zenject::SignalTickPriorityCopyBinder);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::SignalTickPriorityCopyBinder*, "Zenject", "SignalTickPriorityCopyBinder");
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.SignalTickPriorityCopyBinder
  // [TokenAttribute] Offset: FFFFFFFF
  // [NoReflectionBakingAttribute] Offset: FFFFFFFF
  class SignalTickPriorityCopyBinder : public ::Zenject::SignalCopyBinder {
    public:
    public:
    // private Zenject.SignalDeclarationBindInfo <SignalBindInfo>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    ::Zenject::SignalDeclarationBindInfo* SignalBindInfo;
    // Field size check
    static_assert(sizeof(::Zenject::SignalDeclarationBindInfo*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::Collections::Generic::List_1<::Zenject::BindInfo*>*
    constexpr operator ::System::Collections::Generic::List_1<::Zenject::BindInfo*>*() const noexcept = delete;
    // Get instance field reference: private Zenject.SignalDeclarationBindInfo <SignalBindInfo>k__BackingField
    [[deprecated("Use field access instead!")]] ::Zenject::SignalDeclarationBindInfo*& dyn_$SignalBindInfo$k__BackingField();
    // protected Zenject.SignalDeclarationBindInfo get_SignalBindInfo()
    // Offset: 0x1D1E198
    ::Zenject::SignalDeclarationBindInfo* get_SignalBindInfo();
    // private System.Void set_SignalBindInfo(Zenject.SignalDeclarationBindInfo value)
    // Offset: 0x1D1E1A0
    void set_SignalBindInfo(::Zenject::SignalDeclarationBindInfo* value);
    // public System.Void .ctor(Zenject.SignalDeclarationBindInfo signalBindInfo)
    // Offset: 0x1D1E170
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SignalTickPriorityCopyBinder* New_ctor(::Zenject::SignalDeclarationBindInfo* signalBindInfo) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::SignalTickPriorityCopyBinder::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SignalTickPriorityCopyBinder*, creationType>(signalBindInfo)));
    }
    // public Zenject.SignalCopyBinder WithTickPriority(System.Int32 priority)
    // Offset: 0x1D1E1A8
    ::Zenject::SignalCopyBinder* WithTickPriority(int priority);
  }; // Zenject.SignalTickPriorityCopyBinder
  #pragma pack(pop)
  static check_size<sizeof(SignalTickPriorityCopyBinder), 24 + sizeof(::Zenject::SignalDeclarationBindInfo*)> __Zenject_SignalTickPriorityCopyBinderSizeCheck;
  static_assert(sizeof(SignalTickPriorityCopyBinder) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::SignalTickPriorityCopyBinder::get_SignalBindInfo
// Il2CppName: get_SignalBindInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::SignalDeclarationBindInfo* (Zenject::SignalTickPriorityCopyBinder::*)()>(&Zenject::SignalTickPriorityCopyBinder::get_SignalBindInfo)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::SignalTickPriorityCopyBinder*), "get_SignalBindInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::SignalTickPriorityCopyBinder::set_SignalBindInfo
// Il2CppName: set_SignalBindInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::SignalTickPriorityCopyBinder::*)(::Zenject::SignalDeclarationBindInfo*)>(&Zenject::SignalTickPriorityCopyBinder::set_SignalBindInfo)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Zenject", "SignalDeclarationBindInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::SignalTickPriorityCopyBinder*), "set_SignalBindInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Zenject::SignalTickPriorityCopyBinder::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Zenject::SignalTickPriorityCopyBinder::WithTickPriority
// Il2CppName: WithTickPriority
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::SignalCopyBinder* (Zenject::SignalTickPriorityCopyBinder::*)(int)>(&Zenject::SignalTickPriorityCopyBinder::WithTickPriority)> {
  static const MethodInfo* get() {
    static auto* priority = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::SignalTickPriorityCopyBinder*), "WithTickPriority", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{priority});
  }
};
