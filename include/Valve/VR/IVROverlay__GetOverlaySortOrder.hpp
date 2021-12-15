// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Valve.VR.IVROverlay
#include "Valve/VR/IVROverlay.hpp"
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
  // Forward declaring type: EVROverlayError
  struct EVROverlayError;
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
  // Forward declaring type: _GetOverlaySortOrder
  class _GetOverlaySortOrder;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(Valve::VR::IVROverlay::_GetOverlaySortOrder);
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVROverlay::_GetOverlaySortOrder*, "Valve.VR", "IVROverlay/_GetOverlaySortOrder");
// Type namespace: Valve.VR
namespace Valve::VR {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: Valve.VR.IVROverlay/Valve.VR._GetOverlaySortOrder
  // [TokenAttribute] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: EF77D8
  class IVROverlay::_GetOverlaySortOrder : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x22601B8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVROverlay::_GetOverlaySortOrder* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("Valve::VR::IVROverlay::_GetOverlaySortOrder::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVROverlay::_GetOverlaySortOrder*, creationType>(object, method)));
    }
    // public Valve.VR.EVROverlayError Invoke(System.UInt64 ulOverlayHandle, ref System.UInt32 punSortOrder)
    // Offset: 0x22601C8
    Valve::VR::EVROverlayError Invoke(uint64_t ulOverlayHandle, ByRef<uint> punSortOrder);
    // public System.IAsyncResult BeginInvoke(System.UInt64 ulOverlayHandle, ref System.UInt32 punSortOrder, System.AsyncCallback callback, System.Object object)
    // Offset: 0x226044C
    System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, ByRef<uint> punSortOrder, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public Valve.VR.EVROverlayError EndInvoke(ref System.UInt32 punSortOrder, System.IAsyncResult result)
    // Offset: 0x22604FC
    Valve::VR::EVROverlayError EndInvoke(ByRef<uint> punSortOrder, System::IAsyncResult* result);
  }; // Valve.VR.IVROverlay/Valve.VR._GetOverlaySortOrder
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Valve::VR::IVROverlay::_GetOverlaySortOrder::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Valve::VR::IVROverlay::_GetOverlaySortOrder::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Valve::VR::EVROverlayError (Valve::VR::IVROverlay::_GetOverlaySortOrder::*)(uint64_t, ByRef<uint>)>(&Valve::VR::IVROverlay::_GetOverlaySortOrder::Invoke)> {
  static const MethodInfo* get() {
    static auto* ulOverlayHandle = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* punSortOrder = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVROverlay::_GetOverlaySortOrder*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ulOverlayHandle, punSortOrder});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVROverlay::_GetOverlaySortOrder::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (Valve::VR::IVROverlay::_GetOverlaySortOrder::*)(uint64_t, ByRef<uint>, System::AsyncCallback*, ::Il2CppObject*)>(&Valve::VR::IVROverlay::_GetOverlaySortOrder::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* ulOverlayHandle = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* punSortOrder = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVROverlay::_GetOverlaySortOrder*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ulOverlayHandle, punSortOrder, callback, object});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVROverlay::_GetOverlaySortOrder::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Valve::VR::EVROverlayError (Valve::VR::IVROverlay::_GetOverlaySortOrder::*)(ByRef<uint>, System::IAsyncResult*)>(&Valve::VR::IVROverlay::_GetOverlaySortOrder::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* punSortOrder = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVROverlay::_GetOverlaySortOrder*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{punSortOrder, result});
  }
};
