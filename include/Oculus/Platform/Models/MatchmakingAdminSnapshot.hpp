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
  // Forward declaring type: MatchmakingAdminSnapshotCandidateList
  class MatchmakingAdminSnapshotCandidateList;
}
// Completed forward declares
// Type namespace: Oculus.Platform.Models
namespace Oculus::Platform::Models {
  // Forward declaring type: MatchmakingAdminSnapshot
  class MatchmakingAdminSnapshot;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(Oculus::Platform::Models::MatchmakingAdminSnapshot);
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Models::MatchmakingAdminSnapshot*, "Oculus.Platform.Models", "MatchmakingAdminSnapshot");
// Type namespace: Oculus.Platform.Models
namespace Oculus::Platform::Models {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.Models.MatchmakingAdminSnapshot
  // [TokenAttribute] Offset: FFFFFFFF
  class MatchmakingAdminSnapshot : public ::Il2CppObject {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // public readonly Oculus.Platform.Models.MatchmakingAdminSnapshotCandidateList Candidates
    // Size: 0x8
    // Offset: 0x10
    Oculus::Platform::Models::MatchmakingAdminSnapshotCandidateList* Candidates;
    // Field size check
    static_assert(sizeof(Oculus::Platform::Models::MatchmakingAdminSnapshotCandidateList*) == 0x8);
    // public readonly System.Double MyCurrentThreshold
    // Size: 0x8
    // Offset: 0x18
    double MyCurrentThreshold;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    public:
    // Get instance field reference: public readonly Oculus.Platform.Models.MatchmakingAdminSnapshotCandidateList Candidates
    Oculus::Platform::Models::MatchmakingAdminSnapshotCandidateList*& dyn_Candidates();
    // Get instance field reference: public readonly System.Double MyCurrentThreshold
    double& dyn_MyCurrentThreshold();
    // public System.Void .ctor(System.IntPtr o)
    // Offset: 0x175BC58
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MatchmakingAdminSnapshot* New_ctor(System::IntPtr o) {
      static auto ___internal__logger = ::Logger::get().WithContext("Oculus::Platform::Models::MatchmakingAdminSnapshot::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MatchmakingAdminSnapshot*, creationType>(o)));
    }
  }; // Oculus.Platform.Models.MatchmakingAdminSnapshot
  #pragma pack(pop)
  static check_size<sizeof(MatchmakingAdminSnapshot), 24 + sizeof(double)> __Oculus_Platform_Models_MatchmakingAdminSnapshotSizeCheck;
  static_assert(sizeof(MatchmakingAdminSnapshot) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Platform::Models::MatchmakingAdminSnapshot::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
