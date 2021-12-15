// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Valve.VR.IVRSystem
#include "Valve/VR/IVRSystem.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Valve::VR
namespace Valve::VR {
  // Forward declaring type: EVRFirmwareError
  struct EVRFirmwareError;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: Valve.VR
namespace Valve::VR {
  // Forward declaring type: _PerformFirmwareUpdate
  class _PerformFirmwareUpdate;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(Valve::VR::IVRSystem::_PerformFirmwareUpdate);
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRSystem::_PerformFirmwareUpdate*, "Valve.VR", "IVRSystem/_PerformFirmwareUpdate");
// Type namespace: Valve.VR
namespace Valve::VR {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: Valve.VR.IVRSystem/Valve.VR._PerformFirmwareUpdate
  // [TokenAttribute] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: EF6CD4
  class IVRSystem::_PerformFirmwareUpdate : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1ECE4C8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRSystem::_PerformFirmwareUpdate* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("Valve::VR::IVRSystem::_PerformFirmwareUpdate::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRSystem::_PerformFirmwareUpdate*, creationType>(object, method)));
    }
    // public Valve.VR.EVRFirmwareError Invoke(System.UInt32 unDeviceIndex)
    // Offset: 0x1ECE4D8
    Valve::VR::EVRFirmwareError Invoke(uint unDeviceIndex);
    // public System.IAsyncResult BeginInvoke(System.UInt32 unDeviceIndex, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1ECE740
    System::IAsyncResult* BeginInvoke(uint unDeviceIndex, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public Valve.VR.EVRFirmwareError EndInvoke(System.IAsyncResult result)
    // Offset: 0x1ECE7CC
    Valve::VR::EVRFirmwareError EndInvoke(System::IAsyncResult* result);
  }; // Valve.VR.IVRSystem/Valve.VR._PerformFirmwareUpdate
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Valve::VR::IVRSystem::_PerformFirmwareUpdate::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Valve::VR::IVRSystem::_PerformFirmwareUpdate::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Valve::VR::EVRFirmwareError (Valve::VR::IVRSystem::_PerformFirmwareUpdate::*)(uint)>(&Valve::VR::IVRSystem::_PerformFirmwareUpdate::Invoke)> {
  static const MethodInfo* get() {
    static auto* unDeviceIndex = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRSystem::_PerformFirmwareUpdate*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{unDeviceIndex});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVRSystem::_PerformFirmwareUpdate::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (Valve::VR::IVRSystem::_PerformFirmwareUpdate::*)(uint, System::AsyncCallback*, ::Il2CppObject*)>(&Valve::VR::IVRSystem::_PerformFirmwareUpdate::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* unDeviceIndex = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRSystem::_PerformFirmwareUpdate*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{unDeviceIndex, callback, object});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVRSystem::_PerformFirmwareUpdate::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Valve::VR::EVRFirmwareError (Valve::VR::IVRSystem::_PerformFirmwareUpdate::*)(System::IAsyncResult*)>(&Valve::VR::IVRSystem::_PerformFirmwareUpdate::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRSystem::_PerformFirmwareUpdate*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
