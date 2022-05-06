// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: PersistentScriptableObject
#include "GlobalNamespace/PersistentScriptableObject.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BeatmapLevelPackSO
  class BeatmapLevelPackSO;
  // Forward declaring type: BeatmapLevelSO
  class BeatmapLevelSO;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: AlwaysOwnedContentSO
  class AlwaysOwnedContentSO;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::AlwaysOwnedContentSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AlwaysOwnedContentSO*, "", "AlwaysOwnedContentSO");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: AlwaysOwnedContentSO
  // [TokenAttribute] Offset: FFFFFFFF
  class AlwaysOwnedContentSO : public ::GlobalNamespace::PersistentScriptableObject {
    public:
    public:
    // private BeatmapLevelPackSO[] _alwaysOwnedPacks
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<::GlobalNamespace::BeatmapLevelPackSO*> alwaysOwnedPacks;
    // Field size check
    static_assert(sizeof(::ArrayW<::GlobalNamespace::BeatmapLevelPackSO*>) == 0x8);
    // private BeatmapLevelSO[] _alwaysOwnedBeatmapLevels
    // Size: 0x8
    // Offset: 0x20
    ::ArrayW<::GlobalNamespace::BeatmapLevelSO*> alwaysOwnedBeatmapLevels;
    // Field size check
    static_assert(sizeof(::ArrayW<::GlobalNamespace::BeatmapLevelSO*>) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private BeatmapLevelPackSO[] _alwaysOwnedPacks
    [[deprecated("Use field access instead!")]] ::ArrayW<::GlobalNamespace::BeatmapLevelPackSO*>& dyn__alwaysOwnedPacks();
    // Get instance field reference: private BeatmapLevelSO[] _alwaysOwnedBeatmapLevels
    [[deprecated("Use field access instead!")]] ::ArrayW<::GlobalNamespace::BeatmapLevelSO*>& dyn__alwaysOwnedBeatmapLevels();
    // public BeatmapLevelPackSO[] get_alwaysOwnedPacks()
    // Offset: 0x14E9208
    ::ArrayW<::GlobalNamespace::BeatmapLevelPackSO*> get_alwaysOwnedPacks();
    // public BeatmapLevelSO[] get_alwaysOwnedBeatmapLevels()
    // Offset: 0x14E9210
    ::ArrayW<::GlobalNamespace::BeatmapLevelSO*> get_alwaysOwnedBeatmapLevels();
    // public System.Void .ctor()
    // Offset: 0x14E9218
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AlwaysOwnedContentSO* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::AlwaysOwnedContentSO::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AlwaysOwnedContentSO*, creationType>()));
    }
  }; // AlwaysOwnedContentSO
  #pragma pack(pop)
  static check_size<sizeof(AlwaysOwnedContentSO), 32 + sizeof(::ArrayW<::GlobalNamespace::BeatmapLevelSO*>)> __GlobalNamespace_AlwaysOwnedContentSOSizeCheck;
  static_assert(sizeof(AlwaysOwnedContentSO) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::AlwaysOwnedContentSO::get_alwaysOwnedPacks
// Il2CppName: get_alwaysOwnedPacks
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::GlobalNamespace::BeatmapLevelPackSO*> (GlobalNamespace::AlwaysOwnedContentSO::*)()>(&GlobalNamespace::AlwaysOwnedContentSO::get_alwaysOwnedPacks)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AlwaysOwnedContentSO*), "get_alwaysOwnedPacks", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AlwaysOwnedContentSO::get_alwaysOwnedBeatmapLevels
// Il2CppName: get_alwaysOwnedBeatmapLevels
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::GlobalNamespace::BeatmapLevelSO*> (GlobalNamespace::AlwaysOwnedContentSO::*)()>(&GlobalNamespace::AlwaysOwnedContentSO::get_alwaysOwnedBeatmapLevels)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AlwaysOwnedContentSO*), "get_alwaysOwnedBeatmapLevels", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AlwaysOwnedContentSO::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
