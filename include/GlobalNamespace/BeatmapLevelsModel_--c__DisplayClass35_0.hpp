// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: BeatmapLevelsModel
#include "GlobalNamespace/BeatmapLevelsModel.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IPreviewBeatmapLevel
  class IPreviewBeatmapLevel;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::BeatmapLevelsModel::$$c__DisplayClass35_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapLevelsModel::$$c__DisplayClass35_0*, "", "BeatmapLevelsModel/<>c__DisplayClass35_0");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: BeatmapLevelsModel/<>c__DisplayClass35_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class BeatmapLevelsModel::$$c__DisplayClass35_0 : public ::Il2CppObject {
    public:
    public:
    // public System.String levelId
    // Size: 0x8
    // Offset: 0x10
    ::StringW levelId;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Creating conversion operator: operator ::StringW
    constexpr operator ::StringW() const noexcept {
      return levelId;
    }
    // Get instance field reference: public System.String levelId
    [[deprecated("Use field access instead!")]] ::StringW& dyn_levelId();
    // public System.Void .ctor()
    // Offset: 0x150AAD8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeatmapLevelsModel::$$c__DisplayClass35_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::BeatmapLevelsModel::$$c__DisplayClass35_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeatmapLevelsModel::$$c__DisplayClass35_0*, creationType>()));
    }
    // System.Boolean <GetLevelPreviewForLevelId>b__1(IPreviewBeatmapLevel beatmapLevel)
    // Offset: 0x150B1C4
    bool $GetLevelPreviewForLevelId$b__1(::GlobalNamespace::IPreviewBeatmapLevel* beatmapLevel);
  }; // BeatmapLevelsModel/<>c__DisplayClass35_0
  #pragma pack(pop)
  static check_size<sizeof(BeatmapLevelsModel::$$c__DisplayClass35_0), 16 + sizeof(::StringW)> __GlobalNamespace_BeatmapLevelsModel_$$c__DisplayClass35_0SizeCheck;
  static_assert(sizeof(BeatmapLevelsModel::$$c__DisplayClass35_0) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BeatmapLevelsModel::$$c__DisplayClass35_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::BeatmapLevelsModel::$$c__DisplayClass35_0::$GetLevelPreviewForLevelId$b__1
// Il2CppName: <GetLevelPreviewForLevelId>b__1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::BeatmapLevelsModel::$$c__DisplayClass35_0::*)(::GlobalNamespace::IPreviewBeatmapLevel*)>(&GlobalNamespace::BeatmapLevelsModel::$$c__DisplayClass35_0::$GetLevelPreviewForLevelId$b__1)> {
  static const MethodInfo* get() {
    static auto* beatmapLevel = &::il2cpp_utils::GetClassFromName("", "IPreviewBeatmapLevel")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapLevelsModel::$$c__DisplayClass35_0*), "<GetLevelPreviewForLevelId>b__1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{beatmapLevel});
  }
};
