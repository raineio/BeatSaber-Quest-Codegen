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
  // Forward declaring type: ETextureType
  struct ETextureType;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Valve::VR::IVRSystem::_GetOutputDevice);
DEFINE_IL2CPP_ARG_TYPE(::Valve::VR::IVRSystem::_GetOutputDevice*, "Valve.VR", "IVRSystem/_GetOutputDevice");
// Type namespace: Valve.VR
namespace Valve::VR {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: Valve.VR.IVRSystem/Valve.VR._GetOutputDevice
  // [TokenAttribute] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: 108CDCC
  class IVRSystem::_GetOutputDevice : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x226E890
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRSystem::_GetOutputDevice* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Valve::VR::IVRSystem::_GetOutputDevice::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRSystem::_GetOutputDevice*, creationType>(object, method)));
    }
    // public System.Void Invoke(ref System.UInt64 pnDevice, Valve.VR.ETextureType textureType, System.IntPtr pInstance)
    // Offset: 0x226E8A0
    void Invoke(ByRef<uint64_t> pnDevice, ::Valve::VR::ETextureType textureType, ::System::IntPtr pInstance);
    // public System.IAsyncResult BeginInvoke(ref System.UInt64 pnDevice, Valve.VR.ETextureType textureType, System.IntPtr pInstance, System.AsyncCallback callback, System.Object object)
    // Offset: 0x226EB28
    ::System::IAsyncResult* BeginInvoke(ByRef<uint64_t> pnDevice, ::Valve::VR::ETextureType textureType, ::System::IntPtr pInstance, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(ref System.UInt64 pnDevice, System.IAsyncResult result)
    // Offset: 0x226EBF8
    void EndInvoke(ByRef<uint64_t> pnDevice, ::System::IAsyncResult* result);
  }; // Valve.VR.IVRSystem/Valve.VR._GetOutputDevice
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Valve::VR::IVRSystem::_GetOutputDevice::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Valve::VR::IVRSystem::_GetOutputDevice::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Valve::VR::IVRSystem::_GetOutputDevice::*)(ByRef<uint64_t>, ::Valve::VR::ETextureType, ::System::IntPtr)>(&Valve::VR::IVRSystem::_GetOutputDevice::Invoke)> {
  static const MethodInfo* get() {
    static auto* pnDevice = &::il2cpp_utils::GetClassFromName("System", "UInt64")->this_arg;
    static auto* textureType = &::il2cpp_utils::GetClassFromName("Valve.VR", "ETextureType")->byval_arg;
    static auto* pInstance = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRSystem::_GetOutputDevice*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pnDevice, textureType, pInstance});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVRSystem::_GetOutputDevice::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (Valve::VR::IVRSystem::_GetOutputDevice::*)(ByRef<uint64_t>, ::Valve::VR::ETextureType, ::System::IntPtr, ::System::AsyncCallback*, ::Il2CppObject*)>(&Valve::VR::IVRSystem::_GetOutputDevice::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* pnDevice = &::il2cpp_utils::GetClassFromName("System", "UInt64")->this_arg;
    static auto* textureType = &::il2cpp_utils::GetClassFromName("Valve.VR", "ETextureType")->byval_arg;
    static auto* pInstance = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRSystem::_GetOutputDevice*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pnDevice, textureType, pInstance, callback, object});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVRSystem::_GetOutputDevice::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Valve::VR::IVRSystem::_GetOutputDevice::*)(ByRef<uint64_t>, ::System::IAsyncResult*)>(&Valve::VR::IVRSystem::_GetOutputDevice::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* pnDevice = &::il2cpp_utils::GetClassFromName("System", "UInt64")->this_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRSystem::_GetOutputDevice*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pnDevice, result});
  }
};
