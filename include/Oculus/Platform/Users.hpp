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
  // Forward declaring type: UserOptions
  class UserOptions;
  // Forward declaring type: Request
  class Request;
}
// Forward declaring namespace: Oculus::Platform::Models
namespace Oculus::Platform::Models {
  // Forward declaring type: User
  class User;
  // Forward declaring type: UserList
  class UserList;
  // Forward declaring type: UserAndRoomList
  class UserAndRoomList;
  // Forward declaring type: OrgScopedID
  class OrgScopedID;
  // Forward declaring type: SdkAccountList
  class SdkAccountList;
  // Forward declaring type: UserProof
  class UserProof;
  // Forward declaring type: LaunchFriendRequestFlowResult
  class LaunchFriendRequestFlowResult;
}
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Autogenerated type: Oculus.Platform.Users
  class Users : public ::Il2CppObject {
    public:
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.User> Get(System.UInt64 userID)
    // Offset: 0x1F68D8C
    static Oculus::Platform::Request_1<Oculus::Platform::Models::User*>* Get(uint64_t userID);
    // static public Oculus.Platform.Request`1<System.String> GetAccessToken()
    // Offset: 0x1F68EA8
    static Oculus::Platform::Request_1<::Il2CppString*>* GetAccessToken();
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.User> GetLoggedInUser()
    // Offset: 0x1F68FB4
    static Oculus::Platform::Request_1<Oculus::Platform::Models::User*>* GetLoggedInUser();
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.UserList> GetLoggedInUserFriends()
    // Offset: 0x1F690C0
    static Oculus::Platform::Request_1<Oculus::Platform::Models::UserList*>* GetLoggedInUserFriends();
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.UserAndRoomList> GetLoggedInUserFriendsAndRooms()
    // Offset: 0x1F691CC
    static Oculus::Platform::Request_1<Oculus::Platform::Models::UserAndRoomList*>* GetLoggedInUserFriendsAndRooms();
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.UserAndRoomList> GetLoggedInUserRecentlyMetUsersAndRooms(Oculus.Platform.UserOptions userOptions)
    // Offset: 0x1F692D8
    static Oculus::Platform::Request_1<Oculus::Platform::Models::UserAndRoomList*>* GetLoggedInUserRecentlyMetUsersAndRooms(Oculus::Platform::UserOptions* userOptions);
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.OrgScopedID> GetOrgScopedID(System.UInt64 userID)
    // Offset: 0x1F69408
    static Oculus::Platform::Request_1<Oculus::Platform::Models::OrgScopedID*>* GetOrgScopedID(uint64_t userID);
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.SdkAccountList> GetSdkAccounts()
    // Offset: 0x1F69524
    static Oculus::Platform::Request_1<Oculus::Platform::Models::SdkAccountList*>* GetSdkAccounts();
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.UserProof> GetUserProof()
    // Offset: 0x1F69630
    static Oculus::Platform::Request_1<Oculus::Platform::Models::UserProof*>* GetUserProof();
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.LaunchFriendRequestFlowResult> LaunchFriendRequestFlow(System.UInt64 userID)
    // Offset: 0x1F6973C
    static Oculus::Platform::Request_1<Oculus::Platform::Models::LaunchFriendRequestFlowResult*>* LaunchFriendRequestFlow(uint64_t userID);
    // static public Oculus.Platform.Request LaunchProfile(System.UInt64 userID)
    // Offset: 0x1F69858
    static Oculus::Platform::Request* LaunchProfile(uint64_t userID);
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.UserAndRoomList> GetNextUserAndRoomListPage(Oculus.Platform.Models.UserAndRoomList list)
    // Offset: 0x1F6996C
    static Oculus::Platform::Request_1<Oculus::Platform::Models::UserAndRoomList*>* GetNextUserAndRoomListPage(Oculus::Platform::Models::UserAndRoomList* list);
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.UserList> GetNextUserListPage(Oculus.Platform.Models.UserList list)
    // Offset: 0x1F69AE8
    static Oculus::Platform::Request_1<Oculus::Platform::Models::UserList*>* GetNextUserListPage(Oculus::Platform::Models::UserList* list);
  }; // Oculus.Platform.Users
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Users*, "Oculus.Platform", "Users");
#pragma pack(pop)
