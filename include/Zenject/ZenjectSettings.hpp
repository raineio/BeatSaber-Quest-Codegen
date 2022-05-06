// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.RootResolveMethods
#include "Zenject/RootResolveMethods.hpp"
// Including type: Zenject.ValidationErrorResponses
#include "Zenject/ValidationErrorResponses.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Forward declaring type: ZenjectSettings
  class ZenjectSettings;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Zenject::ZenjectSettings);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::ZenjectSettings*, "Zenject", "ZenjectSettings");
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.ZenjectSettings
  // [TokenAttribute] Offset: FFFFFFFF
  // [NoReflectionBakingAttribute] Offset: FFFFFFFF
  // [ZenjectAllowDuringValidationAttribute] Offset: FFFFFFFF
  class ZenjectSettings : public ::Il2CppObject {
    public:
    // Nested type: ::Zenject::ZenjectSettings::SignalSettings
    class SignalSettings;
    public:
    // private System.Boolean _ensureDeterministicDestructionOrderOnApplicationQuit
    // Size: 0x1
    // Offset: 0x10
    bool ensureDeterministicDestructionOrderOnApplicationQuit;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _displayWarningWhenResolvingDuringInstall
    // Size: 0x1
    // Offset: 0x11
    bool displayWarningWhenResolvingDuringInstall;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: displayWarningWhenResolvingDuringInstall and: validationRootResolveMethod
    char __padding1[0x2] = {};
    // private Zenject.RootResolveMethods _validationRootResolveMethod
    // Size: 0x4
    // Offset: 0x14
    ::Zenject::RootResolveMethods validationRootResolveMethod;
    // Field size check
    static_assert(sizeof(::Zenject::RootResolveMethods) == 0x4);
    // private Zenject.ValidationErrorResponses _validationErrorResponse
    // Size: 0x4
    // Offset: 0x18
    ::Zenject::ValidationErrorResponses validationErrorResponse;
    // Field size check
    static_assert(sizeof(::Zenject::ValidationErrorResponses) == 0x4);
    // Padding between fields: validationErrorResponse and: signalSettings
    char __padding3[0x4] = {};
    // private Zenject.ZenjectSettings/Zenject.SignalSettings _signalSettings
    // Size: 0x8
    // Offset: 0x20
    ::Zenject::ZenjectSettings::SignalSettings* signalSettings;
    // Field size check
    static_assert(sizeof(::Zenject::ZenjectSettings::SignalSettings*) == 0x8);
    public:
    // Get static field: static public Zenject.ZenjectSettings Default
    static ::Zenject::ZenjectSettings* _get_Default();
    // Set static field: static public Zenject.ZenjectSettings Default
    static void _set_Default(::Zenject::ZenjectSettings* value);
    // Get instance field reference: private System.Boolean _ensureDeterministicDestructionOrderOnApplicationQuit
    [[deprecated("Use field access instead!")]] bool& dyn__ensureDeterministicDestructionOrderOnApplicationQuit();
    // Get instance field reference: private System.Boolean _displayWarningWhenResolvingDuringInstall
    [[deprecated("Use field access instead!")]] bool& dyn__displayWarningWhenResolvingDuringInstall();
    // Get instance field reference: private Zenject.RootResolveMethods _validationRootResolveMethod
    [[deprecated("Use field access instead!")]] ::Zenject::RootResolveMethods& dyn__validationRootResolveMethod();
    // Get instance field reference: private Zenject.ValidationErrorResponses _validationErrorResponse
    [[deprecated("Use field access instead!")]] ::Zenject::ValidationErrorResponses& dyn__validationErrorResponse();
    // Get instance field reference: private Zenject.ZenjectSettings/Zenject.SignalSettings _signalSettings
    [[deprecated("Use field access instead!")]] ::Zenject::ZenjectSettings::SignalSettings*& dyn__signalSettings();
    // public Zenject.ZenjectSettings/Zenject.SignalSettings get_Signals()
    // Offset: 0x1D2B8F8
    ::Zenject::ZenjectSettings::SignalSettings* get_Signals();
    // public Zenject.ValidationErrorResponses get_ValidationErrorResponse()
    // Offset: 0x1D2B900
    ::Zenject::ValidationErrorResponses get_ValidationErrorResponse();
    // public Zenject.RootResolveMethods get_ValidationRootResolveMethod()
    // Offset: 0x1D2B908
    ::Zenject::RootResolveMethods get_ValidationRootResolveMethod();
    // public System.Boolean get_DisplayWarningWhenResolvingDuringInstall()
    // Offset: 0x1D2B910
    bool get_DisplayWarningWhenResolvingDuringInstall();
    // public System.Boolean get_EnsureDeterministicDestructionOrderOnApplicationQuit()
    // Offset: 0x1D2B918
    bool get_EnsureDeterministicDestructionOrderOnApplicationQuit();
    // public System.Void .ctor(Zenject.ValidationErrorResponses validationErrorResponse, Zenject.RootResolveMethods validationRootResolveMethod, System.Boolean displayWarningWhenResolvingDuringInstall, System.Boolean ensureDeterministicDestructionOrderOnApplicationQuit, Zenject.ZenjectSettings/Zenject.SignalSettings signalSettings)
    // Offset: 0x1D2B820
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ZenjectSettings* New_ctor(::Zenject::ValidationErrorResponses validationErrorResponse, ::Zenject::RootResolveMethods validationRootResolveMethod, bool displayWarningWhenResolvingDuringInstall, bool ensureDeterministicDestructionOrderOnApplicationQuit, ::Zenject::ZenjectSettings::SignalSettings* signalSettings) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::ZenjectSettings::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ZenjectSettings*, creationType>(validationErrorResponse, validationRootResolveMethod, displayWarningWhenResolvingDuringInstall, ensureDeterministicDestructionOrderOnApplicationQuit, signalSettings)));
    }
    // public System.Void .ctor()
    // Offset: 0x1D2B8E0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ZenjectSettings* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::ZenjectSettings::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ZenjectSettings*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x1D2B920
    static void _cctor();
  }; // Zenject.ZenjectSettings
  #pragma pack(pop)
  static check_size<sizeof(ZenjectSettings), 32 + sizeof(::Zenject::ZenjectSettings::SignalSettings*)> __Zenject_ZenjectSettingsSizeCheck;
  static_assert(sizeof(ZenjectSettings) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::ZenjectSettings::get_Signals
// Il2CppName: get_Signals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::ZenjectSettings::SignalSettings* (Zenject::ZenjectSettings::*)()>(&Zenject::ZenjectSettings::get_Signals)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::ZenjectSettings*), "get_Signals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::ZenjectSettings::get_ValidationErrorResponse
// Il2CppName: get_ValidationErrorResponse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::ValidationErrorResponses (Zenject::ZenjectSettings::*)()>(&Zenject::ZenjectSettings::get_ValidationErrorResponse)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::ZenjectSettings*), "get_ValidationErrorResponse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::ZenjectSettings::get_ValidationRootResolveMethod
// Il2CppName: get_ValidationRootResolveMethod
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::RootResolveMethods (Zenject::ZenjectSettings::*)()>(&Zenject::ZenjectSettings::get_ValidationRootResolveMethod)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::ZenjectSettings*), "get_ValidationRootResolveMethod", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::ZenjectSettings::get_DisplayWarningWhenResolvingDuringInstall
// Il2CppName: get_DisplayWarningWhenResolvingDuringInstall
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Zenject::ZenjectSettings::*)()>(&Zenject::ZenjectSettings::get_DisplayWarningWhenResolvingDuringInstall)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::ZenjectSettings*), "get_DisplayWarningWhenResolvingDuringInstall", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::ZenjectSettings::get_EnsureDeterministicDestructionOrderOnApplicationQuit
// Il2CppName: get_EnsureDeterministicDestructionOrderOnApplicationQuit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Zenject::ZenjectSettings::*)()>(&Zenject::ZenjectSettings::get_EnsureDeterministicDestructionOrderOnApplicationQuit)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::ZenjectSettings*), "get_EnsureDeterministicDestructionOrderOnApplicationQuit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::ZenjectSettings::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Zenject::ZenjectSettings::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Zenject::ZenjectSettings::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Zenject::ZenjectSettings::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::ZenjectSettings*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
