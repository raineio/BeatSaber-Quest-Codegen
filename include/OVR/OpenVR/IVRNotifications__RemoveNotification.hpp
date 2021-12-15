// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVR.OpenVR.IVRNotifications
#include "OVR/OpenVR/IVRNotifications.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: OVR::OpenVR
namespace OVR::OpenVR {
  // Forward declaring type: EVRNotificationError
  struct EVRNotificationError;
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
  // Forward declaring type: _RemoveNotification
  class _RemoveNotification;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(OVR::OpenVR::IVRNotifications::_RemoveNotification);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRNotifications::_RemoveNotification*, "OVR.OpenVR", "IVRNotifications/_RemoveNotification");
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: OVR.OpenVR.IVRNotifications/OVR.OpenVR._RemoveNotification
  // [TokenAttribute] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: EF2D30
  class IVRNotifications::_RemoveNotification : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x2181CA0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRNotifications::_RemoveNotification* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVR::OpenVR::IVRNotifications::_RemoveNotification::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRNotifications::_RemoveNotification*, creationType>(object, method)));
    }
    // public OVR.OpenVR.EVRNotificationError Invoke(System.UInt32 notificationId)
    // Offset: 0x2181CB0
    OVR::OpenVR::EVRNotificationError Invoke(uint notificationId);
    // public System.IAsyncResult BeginInvoke(System.UInt32 notificationId, System.AsyncCallback callback, System.Object object)
    // Offset: 0x2181F18
    System::IAsyncResult* BeginInvoke(uint notificationId, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public OVR.OpenVR.EVRNotificationError EndInvoke(System.IAsyncResult result)
    // Offset: 0x2181FA4
    OVR::OpenVR::EVRNotificationError EndInvoke(System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRNotifications/OVR.OpenVR._RemoveNotification
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: OVR::OpenVR::IVRNotifications::_RemoveNotification::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: OVR::OpenVR::IVRNotifications::_RemoveNotification::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVR::OpenVR::EVRNotificationError (OVR::OpenVR::IVRNotifications::_RemoveNotification::*)(uint)>(&OVR::OpenVR::IVRNotifications::_RemoveNotification::Invoke)> {
  static const MethodInfo* get() {
    static auto* notificationId = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRNotifications::_RemoveNotification*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{notificationId});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRNotifications::_RemoveNotification::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (OVR::OpenVR::IVRNotifications::_RemoveNotification::*)(uint, System::AsyncCallback*, ::Il2CppObject*)>(&OVR::OpenVR::IVRNotifications::_RemoveNotification::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* notificationId = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRNotifications::_RemoveNotification*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{notificationId, callback, object});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRNotifications::_RemoveNotification::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVR::OpenVR::EVRNotificationError (OVR::OpenVR::IVRNotifications::_RemoveNotification::*)(System::IAsyncResult*)>(&OVR::OpenVR::IVRNotifications::_RemoveNotification::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRNotifications::_RemoveNotification*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
