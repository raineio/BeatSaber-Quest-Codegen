// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OnlineServices.API.IUserLoginDtoDataSource
#include "OnlineServices/API/IUserLoginDtoDataSource.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IPlatformUserModel
  class IPlatformUserModel;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: String
  class String;
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: CancellationToken
  struct CancellationToken;
}
// Forward declaring namespace: BeatSaberAPI::DataTransferObjects
namespace BeatSaberAPI::DataTransferObjects {
  // Forward declaring type: UserAuthenticationData
  class UserAuthenticationData;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: UserLoginDtoDataSource
  class UserLoginDtoDataSource;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::UserLoginDtoDataSource);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::UserLoginDtoDataSource*, "", "UserLoginDtoDataSource");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UserLoginDtoDataSource
  // [TokenAttribute] Offset: FFFFFFFF
  class UserLoginDtoDataSource : public ::Il2CppObject/*, public ::OnlineServices::API::IUserLoginDtoDataSource*/ {
    public:
    // Nested type: ::GlobalNamespace::UserLoginDtoDataSource::$GetPlatformUserIdAsync$d__2
    struct $GetPlatformUserIdAsync$d__2;
    // Nested type: ::GlobalNamespace::UserLoginDtoDataSource::$UserAuthenticationDataAsync$d__3
    struct $UserAuthenticationDataAsync$d__3;
    // Nested type: ::GlobalNamespace::UserLoginDtoDataSource::$GetUserFriendsUserIds$d__4
    struct $GetUserFriendsUserIds$d__4;
    public:
    // [InjectAttribute] Offset: 0x10D543C
    // private readonly IPlatformUserModel _platformUserModel
    // Size: 0x8
    // Offset: 0x10
    ::GlobalNamespace::IPlatformUserModel* platformUserModel;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::IPlatformUserModel*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::OnlineServices::API::IUserLoginDtoDataSource
    operator ::OnlineServices::API::IUserLoginDtoDataSource() noexcept {
      return *reinterpret_cast<::OnlineServices::API::IUserLoginDtoDataSource*>(this);
    }
    // Creating interface conversion operator: i_IUserLoginDtoDataSource
    inline ::OnlineServices::API::IUserLoginDtoDataSource* i_IUserLoginDtoDataSource() noexcept {
      return reinterpret_cast<::OnlineServices::API::IUserLoginDtoDataSource*>(this);
    }
    // Creating conversion operator: operator ::GlobalNamespace::IPlatformUserModel*
    constexpr operator ::GlobalNamespace::IPlatformUserModel*() const noexcept {
      return platformUserModel;
    }
    // static field const value: static private System.String kVersion
    static constexpr const char* kVersion = "0.0.1";
    // Get static field: static private System.String kVersion
    static ::StringW _get_kVersion();
    // Set static field: static private System.String kVersion
    static void _set_kVersion(::StringW value);
    // Get instance field reference: private readonly IPlatformUserModel _platformUserModel
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::IPlatformUserModel*& dyn__platformUserModel();
    // public System.Void .ctor()
    // Offset: 0x14A18D0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UserLoginDtoDataSource* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::UserLoginDtoDataSource::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UserLoginDtoDataSource*, creationType>()));
    }
    // public System.Threading.Tasks.Task`1<System.String> GetPlatformUserIdAsync(System.Threading.CancellationToken cancellationToken)
    // Offset: 0x14A15CC
    ::System::Threading::Tasks::Task_1<::StringW>* GetPlatformUserIdAsync(::System::Threading::CancellationToken cancellationToken);
    // public System.Threading.Tasks.Task`1<BeatSaberAPI.DataTransferObjects.UserAuthenticationData> UserAuthenticationDataAsync(System.Threading.CancellationToken cancellationToken)
    // Offset: 0x14A16CC
    ::System::Threading::Tasks::Task_1<::BeatSaberAPI::DataTransferObjects::UserAuthenticationData*>* UserAuthenticationDataAsync(::System::Threading::CancellationToken cancellationToken);
    // public System.Threading.Tasks.Task`1<System.String[]> GetUserFriendsUserIds(System.Threading.CancellationToken cancellationToken)
    // Offset: 0x14A17D0
    ::System::Threading::Tasks::Task_1<::ArrayW<::StringW>>* GetUserFriendsUserIds(::System::Threading::CancellationToken cancellationToken);
  }; // UserLoginDtoDataSource
  #pragma pack(pop)
  static check_size<sizeof(UserLoginDtoDataSource), 16 + sizeof(::GlobalNamespace::IPlatformUserModel*)> __GlobalNamespace_UserLoginDtoDataSourceSizeCheck;
  static_assert(sizeof(UserLoginDtoDataSource) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::UserLoginDtoDataSource::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::UserLoginDtoDataSource::GetPlatformUserIdAsync
// Il2CppName: GetPlatformUserIdAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::StringW>* (GlobalNamespace::UserLoginDtoDataSource::*)(::System::Threading::CancellationToken)>(&GlobalNamespace::UserLoginDtoDataSource::GetPlatformUserIdAsync)> {
  static const MethodInfo* get() {
    static auto* cancellationToken = &::il2cpp_utils::GetClassFromName("System.Threading", "CancellationToken")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::UserLoginDtoDataSource*), "GetPlatformUserIdAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cancellationToken});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::UserLoginDtoDataSource::UserAuthenticationDataAsync
// Il2CppName: UserAuthenticationDataAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::BeatSaberAPI::DataTransferObjects::UserAuthenticationData*>* (GlobalNamespace::UserLoginDtoDataSource::*)(::System::Threading::CancellationToken)>(&GlobalNamespace::UserLoginDtoDataSource::UserAuthenticationDataAsync)> {
  static const MethodInfo* get() {
    static auto* cancellationToken = &::il2cpp_utils::GetClassFromName("System.Threading", "CancellationToken")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::UserLoginDtoDataSource*), "UserAuthenticationDataAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cancellationToken});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::UserLoginDtoDataSource::GetUserFriendsUserIds
// Il2CppName: GetUserFriendsUserIds
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::ArrayW<::StringW>>* (GlobalNamespace::UserLoginDtoDataSource::*)(::System::Threading::CancellationToken)>(&GlobalNamespace::UserLoginDtoDataSource::GetUserFriendsUserIds)> {
  static const MethodInfo* get() {
    static auto* cancellationToken = &::il2cpp_utils::GetClassFromName("System.Threading", "CancellationToken")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::UserLoginDtoDataSource*), "GetUserFriendsUserIds", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cancellationToken});
  }
};
