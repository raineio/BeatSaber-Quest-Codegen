// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.ZenjectSettings
#include "Zenject/ZenjectSettings.hpp"
// Including type: Zenject.SignalDefaultSyncModes
#include "Zenject/SignalDefaultSyncModes.hpp"
// Including type: Zenject.SignalMissingHandlerResponses
#include "Zenject/SignalMissingHandlerResponses.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: InjectTypeInfo
  class InjectTypeInfo;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Zenject::ZenjectSettings::SignalSettings);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::ZenjectSettings::SignalSettings*, "Zenject", "ZenjectSettings/SignalSettings");
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.ZenjectSettings/Zenject.SignalSettings
  // [TokenAttribute] Offset: FFFFFFFF
  class ZenjectSettings::SignalSettings : public ::Il2CppObject {
    public:
    public:
    // private Zenject.SignalDefaultSyncModes _defaultSyncMode
    // Size: 0x4
    // Offset: 0x10
    ::Zenject::SignalDefaultSyncModes defaultSyncMode;
    // Field size check
    static_assert(sizeof(::Zenject::SignalDefaultSyncModes) == 0x4);
    // private Zenject.SignalMissingHandlerResponses _missingHandlerDefaultResponse
    // Size: 0x4
    // Offset: 0x14
    ::Zenject::SignalMissingHandlerResponses missingHandlerDefaultResponse;
    // Field size check
    static_assert(sizeof(::Zenject::SignalMissingHandlerResponses) == 0x4);
    // private System.Boolean _requireStrictUnsubscribe
    // Size: 0x1
    // Offset: 0x18
    bool requireStrictUnsubscribe;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: requireStrictUnsubscribe and: defaultAsyncTickPriority
    char __padding2[0x3] = {};
    // private System.Int32 _defaultAsyncTickPriority
    // Size: 0x4
    // Offset: 0x1C
    int defaultAsyncTickPriority;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get static field: static public Zenject.ZenjectSettings/Zenject.SignalSettings Default
    static ::Zenject::ZenjectSettings::SignalSettings* _get_Default();
    // Set static field: static public Zenject.ZenjectSettings/Zenject.SignalSettings Default
    static void _set_Default(::Zenject::ZenjectSettings::SignalSettings* value);
    // Get instance field reference: private Zenject.SignalDefaultSyncModes _defaultSyncMode
    [[deprecated("Use field access instead!")]] ::Zenject::SignalDefaultSyncModes& dyn__defaultSyncMode();
    // Get instance field reference: private Zenject.SignalMissingHandlerResponses _missingHandlerDefaultResponse
    [[deprecated("Use field access instead!")]] ::Zenject::SignalMissingHandlerResponses& dyn__missingHandlerDefaultResponse();
    // Get instance field reference: private System.Boolean _requireStrictUnsubscribe
    [[deprecated("Use field access instead!")]] bool& dyn__requireStrictUnsubscribe();
    // Get instance field reference: private System.Int32 _defaultAsyncTickPriority
    [[deprecated("Use field access instead!")]] int& dyn__defaultAsyncTickPriority();
    // public System.Int32 get_DefaultAsyncTickPriority()
    // Offset: 0x1DE45D4
    int get_DefaultAsyncTickPriority();
    // public Zenject.SignalDefaultSyncModes get_DefaultSyncMode()
    // Offset: 0x1DE45DC
    ::Zenject::SignalDefaultSyncModes get_DefaultSyncMode();
    // public Zenject.SignalMissingHandlerResponses get_MissingHandlerDefaultResponse()
    // Offset: 0x1DE45E4
    ::Zenject::SignalMissingHandlerResponses get_MissingHandlerDefaultResponse();
    // public System.Boolean get_RequireStrictUnsubscribe()
    // Offset: 0x1DE45EC
    bool get_RequireStrictUnsubscribe();
    // public System.Void .ctor(Zenject.SignalDefaultSyncModes defaultSyncMode, Zenject.SignalMissingHandlerResponses missingHandlerDefaultResponse, System.Boolean requireStrictUnsubscribe, System.Int32 defaultAsyncTickPriority)
    // Offset: 0x1DE4544
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ZenjectSettings::SignalSettings* New_ctor(::Zenject::SignalDefaultSyncModes defaultSyncMode, ::Zenject::SignalMissingHandlerResponses missingHandlerDefaultResponse, bool requireStrictUnsubscribe, int defaultAsyncTickPriority) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::ZenjectSettings::SignalSettings::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ZenjectSettings::SignalSettings*, creationType>(defaultSyncMode, missingHandlerDefaultResponse, requireStrictUnsubscribe, defaultAsyncTickPriority)));
    }
    // public System.Void .ctor()
    // Offset: 0x1DE4598
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ZenjectSettings::SignalSettings* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::ZenjectSettings::SignalSettings::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ZenjectSettings::SignalSettings*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x1DE45F4
    static void _cctor();
    // static private System.Object __zenCreate(System.Object[] P_0)
    // Offset: 0x1DE4670
    static ::Il2CppObject* __zenCreate(::ArrayW<::Il2CppObject*> P_0);
    // static private Zenject.InjectTypeInfo __zenCreateInjectTypeInfo()
    // Offset: 0x1DE46E4
    static ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();
  }; // Zenject.ZenjectSettings/Zenject.SignalSettings
  #pragma pack(pop)
  static check_size<sizeof(ZenjectSettings::SignalSettings), 28 + sizeof(int)> __Zenject_ZenjectSettings_SignalSettingsSizeCheck;
  static_assert(sizeof(ZenjectSettings::SignalSettings) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::ZenjectSettings::SignalSettings::get_DefaultAsyncTickPriority
// Il2CppName: get_DefaultAsyncTickPriority
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Zenject::ZenjectSettings::SignalSettings::*)()>(&Zenject::ZenjectSettings::SignalSettings::get_DefaultAsyncTickPriority)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::ZenjectSettings::SignalSettings*), "get_DefaultAsyncTickPriority", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::ZenjectSettings::SignalSettings::get_DefaultSyncMode
// Il2CppName: get_DefaultSyncMode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::SignalDefaultSyncModes (Zenject::ZenjectSettings::SignalSettings::*)()>(&Zenject::ZenjectSettings::SignalSettings::get_DefaultSyncMode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::ZenjectSettings::SignalSettings*), "get_DefaultSyncMode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::ZenjectSettings::SignalSettings::get_MissingHandlerDefaultResponse
// Il2CppName: get_MissingHandlerDefaultResponse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::SignalMissingHandlerResponses (Zenject::ZenjectSettings::SignalSettings::*)()>(&Zenject::ZenjectSettings::SignalSettings::get_MissingHandlerDefaultResponse)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::ZenjectSettings::SignalSettings*), "get_MissingHandlerDefaultResponse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::ZenjectSettings::SignalSettings::get_RequireStrictUnsubscribe
// Il2CppName: get_RequireStrictUnsubscribe
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Zenject::ZenjectSettings::SignalSettings::*)()>(&Zenject::ZenjectSettings::SignalSettings::get_RequireStrictUnsubscribe)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::ZenjectSettings::SignalSettings*), "get_RequireStrictUnsubscribe", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::ZenjectSettings::SignalSettings::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Zenject::ZenjectSettings::SignalSettings::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Zenject::ZenjectSettings::SignalSettings::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Zenject::ZenjectSettings::SignalSettings::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::ZenjectSettings::SignalSettings*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::ZenjectSettings::SignalSettings::__zenCreate
// Il2CppName: __zenCreate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (*)(::ArrayW<::Il2CppObject*>)>(&Zenject::ZenjectSettings::SignalSettings::__zenCreate)> {
  static const MethodInfo* get() {
    static auto* P_0 = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::ZenjectSettings::SignalSettings*), "__zenCreate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{P_0});
  }
};
// Writing MetadataGetter for method: Zenject::ZenjectSettings::SignalSettings::__zenCreateInjectTypeInfo
// Il2CppName: __zenCreateInjectTypeInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&Zenject::ZenjectSettings::SignalSettings::__zenCreateInjectTypeInfo)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::ZenjectSettings::SignalSettings*), "__zenCreateInjectTypeInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
