// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Platform::Models
namespace Oculus::Platform::Models {
  // Forward declaring type: MatchmakingEnqueueResult
  class MatchmakingEnqueueResult;
  // Forward declaring type: RoomList
  class RoomList;
}
// Completed forward declares
// Type namespace: Oculus.Platform.Models
namespace Oculus::Platform::Models {
  // Forward declaring type: MatchmakingBrowseResult
  class MatchmakingBrowseResult;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Platform::Models::MatchmakingBrowseResult);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::MatchmakingBrowseResult*, "Oculus.Platform.Models", "MatchmakingBrowseResult");
// Type namespace: Oculus.Platform.Models
namespace Oculus::Platform::Models {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.Models.MatchmakingBrowseResult
  // [TokenAttribute] Offset: FFFFFFFF
  class MatchmakingBrowseResult : public ::Il2CppObject {
    public:
    public:
    // public readonly Oculus.Platform.Models.MatchmakingEnqueueResult EnqueueResult
    // Size: 0x8
    // Offset: 0x10
    ::Oculus::Platform::Models::MatchmakingEnqueueResult* EnqueueResult;
    // Field size check
    static_assert(sizeof(::Oculus::Platform::Models::MatchmakingEnqueueResult*) == 0x8);
    // public readonly Oculus.Platform.Models.RoomList Rooms
    // Size: 0x8
    // Offset: 0x18
    ::Oculus::Platform::Models::RoomList* Rooms;
    // Field size check
    static_assert(sizeof(::Oculus::Platform::Models::RoomList*) == 0x8);
    public:
    // Get instance field reference: public readonly Oculus.Platform.Models.MatchmakingEnqueueResult EnqueueResult
    [[deprecated("Use field access instead!")]] ::Oculus::Platform::Models::MatchmakingEnqueueResult*& dyn_EnqueueResult();
    // Get instance field reference: public readonly Oculus.Platform.Models.RoomList Rooms
    [[deprecated("Use field access instead!")]] ::Oculus::Platform::Models::RoomList*& dyn_Rooms();
    // public System.Void .ctor(System.IntPtr o)
    // Offset: 0x19E8A00
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MatchmakingBrowseResult* New_ctor(::System::IntPtr o) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Platform::Models::MatchmakingBrowseResult::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MatchmakingBrowseResult*, creationType>(o)));
    }
  }; // Oculus.Platform.Models.MatchmakingBrowseResult
  #pragma pack(pop)
  static check_size<sizeof(MatchmakingBrowseResult), 24 + sizeof(::Oculus::Platform::Models::RoomList*)> __Oculus_Platform_Models_MatchmakingBrowseResultSizeCheck;
  static_assert(sizeof(MatchmakingBrowseResult) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Platform::Models::MatchmakingBrowseResult::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
