// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVROverlay
#include "Valve/VR/IVROverlay.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Valve::VR
namespace Valve::VR {
  // Forward declaring type: EVROverlayError
  struct EVROverlayError;
  // Forward declaring type: HmdMatrix34_t
  struct HmdMatrix34_t;
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
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: Valve.VR.IVROverlay/_SetOverlayTransformTrackedDeviceRelative
  // [UnmanagedFunctionPointerAttribute] Offset: DD4194
  class IVROverlay::_SetOverlayTransformTrackedDeviceRelative : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _SetOverlayTransformTrackedDeviceRelative
    _SetOverlayTransformTrackedDeviceRelative() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1C87B9C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVROverlay::_SetOverlayTransformTrackedDeviceRelative* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("Valve::VR::IVROverlay::_SetOverlayTransformTrackedDeviceRelative::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVROverlay::_SetOverlayTransformTrackedDeviceRelative*, creationType>(object, method)));
    }
    // public Valve.VR.EVROverlayError Invoke(System.UInt64 ulOverlayHandle, System.UInt32 unTrackedDevice, ref Valve.VR.HmdMatrix34_t pmatTrackedDeviceToOverlayTransform)
    // Offset: 0x1C87BAC
    Valve::VR::EVROverlayError Invoke(uint64_t ulOverlayHandle, uint unTrackedDevice, Valve::VR::HmdMatrix34_t& pmatTrackedDeviceToOverlayTransform);
    // public System.IAsyncResult BeginInvoke(System.UInt64 ulOverlayHandle, System.UInt32 unTrackedDevice, ref Valve.VR.HmdMatrix34_t pmatTrackedDeviceToOverlayTransform, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1C87E48
    System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, uint unTrackedDevice, Valve::VR::HmdMatrix34_t& pmatTrackedDeviceToOverlayTransform, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public Valve.VR.EVROverlayError EndInvoke(ref Valve.VR.HmdMatrix34_t pmatTrackedDeviceToOverlayTransform, System.IAsyncResult result)
    // Offset: 0x1C87F1C
    Valve::VR::EVROverlayError EndInvoke(Valve::VR::HmdMatrix34_t& pmatTrackedDeviceToOverlayTransform, System::IAsyncResult* result);
  }; // Valve.VR.IVROverlay/_SetOverlayTransformTrackedDeviceRelative
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVROverlay::_SetOverlayTransformTrackedDeviceRelative*, "Valve.VR", "IVROverlay/_SetOverlayTransformTrackedDeviceRelative");
// Writing MetadataGetter for method: Valve::VR::IVROverlay::_SetOverlayTransformTrackedDeviceRelative::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Valve::VR::IVROverlay::_SetOverlayTransformTrackedDeviceRelative::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Valve::VR::EVROverlayError (Valve::VR::IVROverlay::_SetOverlayTransformTrackedDeviceRelative::*)(uint64_t, uint, Valve::VR::HmdMatrix34_t&)>(&Valve::VR::IVROverlay::_SetOverlayTransformTrackedDeviceRelative::Invoke)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVROverlay::_SetOverlayTransformTrackedDeviceRelative*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<uint64_t>(), ::il2cpp_utils::ExtractIndependentType<uint>(), ::il2cpp_utils::ExtractIndependentType<Valve::VR::HmdMatrix34_t&>()});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVROverlay::_SetOverlayTransformTrackedDeviceRelative::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (Valve::VR::IVROverlay::_SetOverlayTransformTrackedDeviceRelative::*)(uint64_t, uint, Valve::VR::HmdMatrix34_t&, System::AsyncCallback*, ::Il2CppObject*)>(&Valve::VR::IVROverlay::_SetOverlayTransformTrackedDeviceRelative::BeginInvoke)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVROverlay::_SetOverlayTransformTrackedDeviceRelative*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<uint64_t>(), ::il2cpp_utils::ExtractIndependentType<uint>(), ::il2cpp_utils::ExtractIndependentType<Valve::VR::HmdMatrix34_t&>(), ::il2cpp_utils::ExtractIndependentType<System::AsyncCallback*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>()});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVROverlay::_SetOverlayTransformTrackedDeviceRelative::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Valve::VR::EVROverlayError (Valve::VR::IVROverlay::_SetOverlayTransformTrackedDeviceRelative::*)(Valve::VR::HmdMatrix34_t&, System::IAsyncResult*)>(&Valve::VR::IVROverlay::_SetOverlayTransformTrackedDeviceRelative::EndInvoke)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVROverlay::_SetOverlayTransformTrackedDeviceRelative*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<Valve::VR::HmdMatrix34_t&>(), ::il2cpp_utils::ExtractIndependentType<System::IAsyncResult*>()});
  }
};
