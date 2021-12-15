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
  // Forward declaring type: VRControllerState_t
  struct VRControllerState_t;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(Valve::VR::IVRSystem::_GetControllerState);
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRSystem::_GetControllerState*, "Valve.VR", "IVRSystem/_GetControllerState");
// Type namespace: Valve.VR
namespace Valve::VR {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: Valve.VR.IVRSystem/Valve.VR._GetControllerState
  // [TokenAttribute] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: EF6C0C
  class IVRSystem::_GetControllerState : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1EC8218
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRSystem::_GetControllerState* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("Valve::VR::IVRSystem::_GetControllerState::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRSystem::_GetControllerState*, creationType>(object, method)));
    }
    // public System.Boolean Invoke(System.UInt32 unControllerDeviceIndex, ref Valve.VR.VRControllerState_t pControllerState, System.UInt32 unControllerStateSize)
    // Offset: 0x1EC8228
    bool Invoke(uint unControllerDeviceIndex, ByRef<Valve::VR::VRControllerState_t> pControllerState, uint unControllerStateSize);
    // public System.IAsyncResult BeginInvoke(System.UInt32 unControllerDeviceIndex, ref Valve.VR.VRControllerState_t pControllerState, System.UInt32 unControllerStateSize, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1EC84CC
    System::IAsyncResult* BeginInvoke(uint unControllerDeviceIndex, ByRef<Valve::VR::VRControllerState_t> pControllerState, uint unControllerStateSize, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Boolean EndInvoke(ref Valve.VR.VRControllerState_t pControllerState, System.IAsyncResult result)
    // Offset: 0x1EC8598
    bool EndInvoke(ByRef<Valve::VR::VRControllerState_t> pControllerState, System::IAsyncResult* result);
  }; // Valve.VR.IVRSystem/Valve.VR._GetControllerState
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Valve::VR::IVRSystem::_GetControllerState::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Valve::VR::IVRSystem::_GetControllerState::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Valve::VR::IVRSystem::_GetControllerState::*)(uint, ByRef<Valve::VR::VRControllerState_t>, uint)>(&Valve::VR::IVRSystem::_GetControllerState::Invoke)> {
  static const MethodInfo* get() {
    static auto* unControllerDeviceIndex = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* pControllerState = &::il2cpp_utils::GetClassFromName("Valve.VR", "VRControllerState_t")->this_arg;
    static auto* unControllerStateSize = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRSystem::_GetControllerState*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{unControllerDeviceIndex, pControllerState, unControllerStateSize});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVRSystem::_GetControllerState::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (Valve::VR::IVRSystem::_GetControllerState::*)(uint, ByRef<Valve::VR::VRControllerState_t>, uint, System::AsyncCallback*, ::Il2CppObject*)>(&Valve::VR::IVRSystem::_GetControllerState::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* unControllerDeviceIndex = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* pControllerState = &::il2cpp_utils::GetClassFromName("Valve.VR", "VRControllerState_t")->this_arg;
    static auto* unControllerStateSize = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRSystem::_GetControllerState*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{unControllerDeviceIndex, pControllerState, unControllerStateSize, callback, object});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVRSystem::_GetControllerState::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Valve::VR::IVRSystem::_GetControllerState::*)(ByRef<Valve::VR::VRControllerState_t>, System::IAsyncResult*)>(&Valve::VR::IVRSystem::_GetControllerState::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* pControllerState = &::il2cpp_utils::GetClassFromName("Valve.VR", "VRControllerState_t")->this_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRSystem::_GetControllerState*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pControllerState, result});
  }
};
