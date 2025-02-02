// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: OculusDeeplinkManager
  class OculusDeeplinkManager;
  // Forward declaring type: DlcPromoPanelModel
  class DlcPromoPanelModel;
}
// Forward declaring namespace: Oculus::Platform
namespace Oculus::Platform {
  // Forward declaring type: Message`1<T>
  template<typename T>
  class Message_1;
}
// Forward declaring namespace: Oculus::Platform::Models
namespace Oculus::Platform::Models {
  // Forward declaring type: PlatformInitialize
  class PlatformInitialize;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: OculusInit
  class OculusInit;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::OculusInit);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OculusInit*, "", "OculusInit");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: OculusInit
  // [TokenAttribute] Offset: FFFFFFFF
  class OculusInit : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::GlobalNamespace::OculusInit::$$c
    class $$c;
    public:
    // [InjectOptionalAttribute] Offset: 0x11185DC
    // private OculusDeeplinkManager _oculusDeeplinkManager
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::OculusDeeplinkManager* oculusDeeplinkManager;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::OculusDeeplinkManager*) == 0x8);
    // [InjectAttribute] Offset: 0x11185EC
    // private DlcPromoPanelModel _dlcPromoPanelModel
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::DlcPromoPanelModel* dlcPromoPanelModel;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::DlcPromoPanelModel*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get static field: static public System.Boolean __enabled
    static bool _get___enabled();
    // Set static field: static public System.Boolean __enabled
    static void _set___enabled(bool value);
    // Get instance field reference: private OculusDeeplinkManager _oculusDeeplinkManager
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::OculusDeeplinkManager*& dyn__oculusDeeplinkManager();
    // Get instance field reference: private DlcPromoPanelModel _dlcPromoPanelModel
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::DlcPromoPanelModel*& dyn__dlcPromoPanelModel();
    // public System.Void .ctor()
    // Offset: 0x155E4B4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OculusInit* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::OculusInit::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OculusInit*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x155E4BC
    static void _cctor();
    // static private System.Void NoDomainReloadInit()
    // Offset: 0x155E044
    static void NoDomainReloadInit();
    // public System.Void Init()
    // Offset: 0x155E0B0
    void Init();
    // private System.Void TryToInitialize()
    // Offset: 0x155E170
    void TryToInitialize();
    // private System.Void InitCallback(Oculus.Platform.Message`1<Oculus.Platform.Models.PlatformInitialize> msg)
    // Offset: 0x155E304
    void InitCallback(::Oculus::Platform::Message_1<::Oculus::Platform::Models::PlatformInitialize*>* msg);
  }; // OculusInit
  #pragma pack(pop)
  static check_size<sizeof(OculusInit), 32 + sizeof(::GlobalNamespace::DlcPromoPanelModel*)> __GlobalNamespace_OculusInitSizeCheck;
  static_assert(sizeof(OculusInit) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OculusInit::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::OculusInit::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::OculusInit::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OculusInit*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OculusInit::NoDomainReloadInit
// Il2CppName: NoDomainReloadInit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::OculusInit::NoDomainReloadInit)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OculusInit*), "NoDomainReloadInit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OculusInit::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OculusInit::*)()>(&GlobalNamespace::OculusInit::Init)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OculusInit*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OculusInit::TryToInitialize
// Il2CppName: TryToInitialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OculusInit::*)()>(&GlobalNamespace::OculusInit::TryToInitialize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OculusInit*), "TryToInitialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OculusInit::InitCallback
// Il2CppName: InitCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OculusInit::*)(::Oculus::Platform::Message_1<::Oculus::Platform::Models::PlatformInitialize*>*)>(&GlobalNamespace::OculusInit::InitCallback)> {
  static const MethodInfo* get() {
    static auto* msg = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("Oculus.Platform", "Message`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Oculus.Platform.Models", "PlatformInitialize")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OculusInit*), "InitCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{msg});
  }
};
