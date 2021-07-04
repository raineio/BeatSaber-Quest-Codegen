// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVROverlay
#include "OVR/OpenVR/IVROverlay.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: OVR::OpenVR
namespace OVR::OpenVR {
  // Forward declaring type: EVROverlayError
  struct EVROverlayError;
  // Forward declaring type: EOverlayDirection
  struct EOverlayDirection;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: OVR.OpenVR.IVROverlay/_SetOverlayNeighbor
  // [UnmanagedFunctionPointerAttribute] Offset: DCE214
  class IVROverlay::_SetOverlayNeighbor : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _SetOverlayNeighbor
    _SetOverlayNeighbor() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x209CE08
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVROverlay::_SetOverlayNeighbor* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVR::OpenVR::IVROverlay::_SetOverlayNeighbor::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVROverlay::_SetOverlayNeighbor*, creationType>(object, method)));
    }
    // public OVR.OpenVR.EVROverlayError Invoke(OVR.OpenVR.EOverlayDirection eDirection, System.UInt64 ulFrom, System.UInt64 ulTo)
    // Offset: 0x209CE18
    OVR::OpenVR::EVROverlayError Invoke(OVR::OpenVR::EOverlayDirection eDirection, uint64_t ulFrom, uint64_t ulTo);
    // public System.IAsyncResult BeginInvoke(OVR.OpenVR.EOverlayDirection eDirection, System.UInt64 ulFrom, System.UInt64 ulTo, System.AsyncCallback callback, System.Object object)
    // Offset: 0x209D0D0
    System::IAsyncResult* BeginInvoke(OVR::OpenVR::EOverlayDirection eDirection, uint64_t ulFrom, uint64_t ulTo, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public OVR.OpenVR.EVROverlayError EndInvoke(System.IAsyncResult result)
    // Offset: 0x209D190
    OVR::OpenVR::EVROverlayError EndInvoke(System::IAsyncResult* result);
  }; // OVR.OpenVR.IVROverlay/_SetOverlayNeighbor
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVROverlay::_SetOverlayNeighbor*, "OVR.OpenVR", "IVROverlay/_SetOverlayNeighbor");
// Writing MetadataGetter for method: OVR::OpenVR::IVROverlay::_SetOverlayNeighbor::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: OVR::OpenVR::IVROverlay::_SetOverlayNeighbor::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVR::OpenVR::EVROverlayError (OVR::OpenVR::IVROverlay::_SetOverlayNeighbor::*)(OVR::OpenVR::EOverlayDirection, uint64_t, uint64_t)>(&OVR::OpenVR::IVROverlay::_SetOverlayNeighbor::Invoke)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVROverlay::_SetOverlayNeighbor*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<OVR::OpenVR::EOverlayDirection>(), ::il2cpp_utils::ExtractIndependentType<uint64_t>(), ::il2cpp_utils::ExtractIndependentType<uint64_t>()});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVROverlay::_SetOverlayNeighbor::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (OVR::OpenVR::IVROverlay::_SetOverlayNeighbor::*)(OVR::OpenVR::EOverlayDirection, uint64_t, uint64_t, System::AsyncCallback*, ::Il2CppObject*)>(&OVR::OpenVR::IVROverlay::_SetOverlayNeighbor::BeginInvoke)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVROverlay::_SetOverlayNeighbor*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<OVR::OpenVR::EOverlayDirection>(), ::il2cpp_utils::ExtractIndependentType<uint64_t>(), ::il2cpp_utils::ExtractIndependentType<uint64_t>(), ::il2cpp_utils::ExtractIndependentType<System::AsyncCallback*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>()});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVROverlay::_SetOverlayNeighbor::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVR::OpenVR::EVROverlayError (OVR::OpenVR::IVROverlay::_SetOverlayNeighbor::*)(System::IAsyncResult*)>(&OVR::OpenVR::IVROverlay::_SetOverlayNeighbor::EndInvoke)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVROverlay::_SetOverlayNeighbor*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::IAsyncResult*>()});
  }
};
