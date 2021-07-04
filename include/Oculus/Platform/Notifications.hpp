// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Platform
namespace Oculus::Platform {
  // Forward declaring type: Request`1<T>
  template<typename T>
  class Request_1;
  // Forward declaring type: Request
  class Request;
}
// Forward declaring namespace: Oculus::Platform::Models
namespace Oculus::Platform::Models {
  // Forward declaring type: RoomInviteNotificationList
  class RoomInviteNotificationList;
}
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.Notifications
  class Notifications : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: Notifications
    Notifications() noexcept {}
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.RoomInviteNotificationList> GetRoomInviteNotifications()
    // Offset: 0x14D8740
    static Oculus::Platform::Request_1<Oculus::Platform::Models::RoomInviteNotificationList*>* GetRoomInviteNotifications();
    // static public Oculus.Platform.Request MarkAsRead(System.UInt64 notificationID)
    // Offset: 0x14D884C
    static Oculus::Platform::Request* MarkAsRead(uint64_t notificationID);
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.RoomInviteNotificationList> GetNextRoomInviteNotificationListPage(Oculus.Platform.Models.RoomInviteNotificationList list)
    // Offset: 0x14D8960
    static Oculus::Platform::Request_1<Oculus::Platform::Models::RoomInviteNotificationList*>* GetNextRoomInviteNotificationListPage(Oculus::Platform::Models::RoomInviteNotificationList* list);
  }; // Oculus.Platform.Notifications
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Notifications*, "Oculus.Platform", "Notifications");
// Writing MetadataGetter for method: Oculus::Platform::Notifications::GetRoomInviteNotifications
// Il2CppName: GetRoomInviteNotifications
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Request_1<Oculus::Platform::Models::RoomInviteNotificationList*>* (*)()>(&Oculus::Platform::Notifications::GetRoomInviteNotifications)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Notifications*), "GetRoomInviteNotifications", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Notifications::MarkAsRead
// Il2CppName: MarkAsRead
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Request* (*)(uint64_t)>(&Oculus::Platform::Notifications::MarkAsRead)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Notifications*), "MarkAsRead", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<uint64_t>()});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Notifications::GetNextRoomInviteNotificationListPage
// Il2CppName: GetNextRoomInviteNotificationListPage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Request_1<Oculus::Platform::Models::RoomInviteNotificationList*>* (*)(Oculus::Platform::Models::RoomInviteNotificationList*)>(&Oculus::Platform::Notifications::GetNextRoomInviteNotificationListPage)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Notifications*), "GetNextRoomInviteNotificationListPage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<Oculus::Platform::Models::RoomInviteNotificationList*>()});
  }
};
