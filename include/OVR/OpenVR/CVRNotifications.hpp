// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVRNotifications
#include "OVR/OpenVR/IVRNotifications.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: OVR::OpenVR
namespace OVR::OpenVR {
  // Forward declaring type: EVRNotificationError
  struct EVRNotificationError;
  // Forward declaring type: EVRNotificationType
  struct EVRNotificationType;
  // Forward declaring type: EVRNotificationStyle
  struct EVRNotificationStyle;
  // Forward declaring type: NotificationBitmap_t
  struct NotificationBitmap_t;
}
// Completed forward declares
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: OVR.OpenVR.CVRNotifications
  class CVRNotifications : public ::Il2CppObject {
    public:
    // private OVR.OpenVR.IVRNotifications FnTable
    // Size: 0x10
    // Offset: 0x10
    OVR::OpenVR::IVRNotifications FnTable;
    // Field size check
    static_assert(sizeof(OVR::OpenVR::IVRNotifications) == 0x10);
    // Creating value type constructor for type: CVRNotifications
    CVRNotifications(OVR::OpenVR::IVRNotifications FnTable_ = {}) noexcept : FnTable{FnTable_} {}
    // Creating conversion operator: operator OVR::OpenVR::IVRNotifications
    constexpr operator OVR::OpenVR::IVRNotifications() const noexcept {
      return FnTable;
    }
    // System.Void .ctor(System.IntPtr pInterface)
    // Offset: 0x15B01D0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CVRNotifications* New_ctor(System::IntPtr pInterface) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVR::OpenVR::CVRNotifications::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CVRNotifications*, creationType>(pInterface)));
    }
    // public OVR.OpenVR.EVRNotificationError CreateNotification(System.UInt64 ulOverlayHandle, System.UInt64 ulUserValue, OVR.OpenVR.EVRNotificationType type, System.String pchText, OVR.OpenVR.EVRNotificationStyle style, ref OVR.OpenVR.NotificationBitmap_t pImage, ref System.UInt32 pNotificationId)
    // Offset: 0x15B02D0
    OVR::OpenVR::EVRNotificationError CreateNotification(uint64_t ulOverlayHandle, uint64_t ulUserValue, OVR::OpenVR::EVRNotificationType type, ::Il2CppString* pchText, OVR::OpenVR::EVRNotificationStyle style, OVR::OpenVR::NotificationBitmap_t& pImage, uint& pNotificationId);
    // public OVR.OpenVR.EVRNotificationError RemoveNotification(System.UInt32 notificationId)
    // Offset: 0x15B02F4
    OVR::OpenVR::EVRNotificationError RemoveNotification(uint notificationId);
  }; // OVR.OpenVR.CVRNotifications
  #pragma pack(pop)
  static check_size<sizeof(CVRNotifications), 16 + sizeof(OVR::OpenVR::IVRNotifications)> __OVR_OpenVR_CVRNotificationsSizeCheck;
  static_assert(sizeof(CVRNotifications) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::CVRNotifications*, "OVR.OpenVR", "CVRNotifications");
// Writing MetadataGetter for method: OVR::OpenVR::CVRNotifications::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: OVR::OpenVR::CVRNotifications::CreateNotification
// Il2CppName: CreateNotification
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVR::OpenVR::EVRNotificationError (OVR::OpenVR::CVRNotifications::*)(uint64_t, uint64_t, OVR::OpenVR::EVRNotificationType, ::Il2CppString*, OVR::OpenVR::EVRNotificationStyle, OVR::OpenVR::NotificationBitmap_t&, uint&)>(&OVR::OpenVR::CVRNotifications::CreateNotification)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::CVRNotifications*), "CreateNotification", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<uint64_t>(), ::il2cpp_utils::ExtractIndependentType<uint64_t>(), ::il2cpp_utils::ExtractIndependentType<OVR::OpenVR::EVRNotificationType>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<OVR::OpenVR::EVRNotificationStyle>(), ::il2cpp_utils::ExtractIndependentType<OVR::OpenVR::NotificationBitmap_t&>(), ::il2cpp_utils::ExtractIndependentType<uint&>()});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::CVRNotifications::RemoveNotification
// Il2CppName: RemoveNotification
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVR::OpenVR::EVRNotificationError (OVR::OpenVR::CVRNotifications::*)(uint)>(&OVR::OpenVR::CVRNotifications::RemoveNotification)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::CVRNotifications*), "RemoveNotification", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<uint>()});
  }
};
