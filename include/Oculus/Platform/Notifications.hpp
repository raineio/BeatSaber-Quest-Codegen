// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
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
  // Autogenerated type: Oculus.Platform.Notifications
  class Notifications : public ::Il2CppObject {
    public:
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.RoomInviteNotificationList> GetRoomInviteNotifications()
    // Offset: 0x1142328
    static Oculus::Platform::Request_1<Oculus::Platform::Models::RoomInviteNotificationList*>* GetRoomInviteNotifications();
    // static public Oculus.Platform.Request MarkAsRead(System.UInt64 notificationID)
    // Offset: 0x1142434
    static Oculus::Platform::Request* MarkAsRead(uint64_t notificationID);
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.RoomInviteNotificationList> GetNextRoomInviteNotificationListPage(Oculus.Platform.Models.RoomInviteNotificationList list)
    // Offset: 0x1142548
    static Oculus::Platform::Request_1<Oculus::Platform::Models::RoomInviteNotificationList*>* GetNextRoomInviteNotificationListPage(Oculus::Platform::Models::RoomInviteNotificationList* list);
  }; // Oculus.Platform.Notifications
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Notifications*, "Oculus.Platform", "Notifications");
#pragma pack(pop)
