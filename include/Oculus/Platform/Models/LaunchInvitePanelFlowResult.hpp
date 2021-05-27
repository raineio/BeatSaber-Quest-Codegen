// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Platform::Models
namespace Oculus::Platform::Models {
  // Forward declaring type: UserList
  class UserList;
}
// Completed forward declares
// Type namespace: Oculus.Platform.Models
namespace Oculus::Platform::Models {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.Models.LaunchInvitePanelFlowResult
  class LaunchInvitePanelFlowResult : public ::Il2CppObject {
    public:
    // public readonly Oculus.Platform.Models.UserList InvitedUsers
    // Size: 0x8
    // Offset: 0x10
    Oculus::Platform::Models::UserList* InvitedUsers;
    // Field size check
    static_assert(sizeof(Oculus::Platform::Models::UserList*) == 0x8);
    // Creating value type constructor for type: LaunchInvitePanelFlowResult
    LaunchInvitePanelFlowResult(Oculus::Platform::Models::UserList* InvitedUsers_ = {}) noexcept : InvitedUsers{InvitedUsers_} {}
    // Creating conversion operator: operator Oculus::Platform::Models::UserList*
    constexpr operator Oculus::Platform::Models::UserList*() const noexcept {
      return InvitedUsers;
    }
    // public System.Void .ctor(System.IntPtr o)
    // Offset: 0x14B4E58
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LaunchInvitePanelFlowResult* New_ctor(System::IntPtr o) {
      static auto ___internal__logger = ::Logger::get().WithContext("Oculus::Platform::Models::LaunchInvitePanelFlowResult::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LaunchInvitePanelFlowResult*, creationType>(o)));
    }
  }; // Oculus.Platform.Models.LaunchInvitePanelFlowResult
  #pragma pack(pop)
  static check_size<sizeof(LaunchInvitePanelFlowResult), 16 + sizeof(Oculus::Platform::Models::UserList*)> __Oculus_Platform_Models_LaunchInvitePanelFlowResultSizeCheck;
  static_assert(sizeof(LaunchInvitePanelFlowResult) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Models::LaunchInvitePanelFlowResult*, "Oculus.Platform.Models", "LaunchInvitePanelFlowResult");