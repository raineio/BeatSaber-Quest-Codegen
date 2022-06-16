// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BeatmapDifficultyMask
  struct BeatmapDifficultyMask;
  // Forward declaring type: BeatmapDifficulty
  struct BeatmapDifficulty;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: BeatmapDifficultyMaskExtensions
  class BeatmapDifficultyMaskExtensions;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::BeatmapDifficultyMaskExtensions);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapDifficultyMaskExtensions*, "", "BeatmapDifficultyMaskExtensions");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: BeatmapDifficultyMaskExtensions
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExtensionAttribute] Offset: FFFFFFFF
  class BeatmapDifficultyMaskExtensions : public ::Il2CppObject {
    public:
    // static public BeatmapDifficultyMask ToMask(BeatmapDifficulty difficulty)
    // Offset: 0x282166C
    static ::GlobalNamespace::BeatmapDifficultyMask ToMask(::GlobalNamespace::BeatmapDifficulty difficulty);
    // static public BeatmapDifficulty FromMask(BeatmapDifficultyMask mask)
    // Offset: 0x2821678
    static ::GlobalNamespace::BeatmapDifficulty FromMask(::GlobalNamespace::BeatmapDifficultyMask mask);
    // static public System.String LocalizedKey(BeatmapDifficultyMask mask)
    // Offset: 0x28216C8
    static ::StringW LocalizedKey(::GlobalNamespace::BeatmapDifficultyMask mask);
    // static public System.String ShortLocalizedKey(BeatmapDifficultyMask mask)
    // Offset: 0x2821770
    static ::StringW ShortLocalizedKey(::GlobalNamespace::BeatmapDifficultyMask mask);
    // static public System.Boolean Contains(BeatmapDifficultyMask mask, BeatmapDifficulty difficulty)
    // Offset: 0x2821818
    static bool Contains(::GlobalNamespace::BeatmapDifficultyMask mask, ::GlobalNamespace::BeatmapDifficulty difficulty);
    // static public System.Boolean Contains(BeatmapDifficultyMask mask, BeatmapDifficultyMask other)
    // Offset: 0x2821830
    static bool Contains(::GlobalNamespace::BeatmapDifficultyMask mask, ::GlobalNamespace::BeatmapDifficultyMask other);
    // static public System.Int32 DifferenceFrom(BeatmapDifficultyMask mask, BeatmapDifficultyMask other)
    // Offset: 0x2821840
    static int DifferenceFrom(::GlobalNamespace::BeatmapDifficultyMask mask, ::GlobalNamespace::BeatmapDifficultyMask other);
    // static public System.String ToHexString(BeatmapDifficultyMask mask)
    // Offset: 0x28218B0
    static ::StringW ToHexString(::GlobalNamespace::BeatmapDifficultyMask mask);
  }; // BeatmapDifficultyMaskExtensions
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BeatmapDifficultyMaskExtensions::ToMask
// Il2CppName: ToMask
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BeatmapDifficultyMask (*)(::GlobalNamespace::BeatmapDifficulty)>(&GlobalNamespace::BeatmapDifficultyMaskExtensions::ToMask)> {
  static const MethodInfo* get() {
    static auto* difficulty = &::il2cpp_utils::GetClassFromName("", "BeatmapDifficulty")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapDifficultyMaskExtensions*), "ToMask", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{difficulty});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapDifficultyMaskExtensions::FromMask
// Il2CppName: FromMask
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BeatmapDifficulty (*)(::GlobalNamespace::BeatmapDifficultyMask)>(&GlobalNamespace::BeatmapDifficultyMaskExtensions::FromMask)> {
  static const MethodInfo* get() {
    static auto* mask = &::il2cpp_utils::GetClassFromName("", "BeatmapDifficultyMask")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapDifficultyMaskExtensions*), "FromMask", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mask});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapDifficultyMaskExtensions::LocalizedKey
// Il2CppName: LocalizedKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::GlobalNamespace::BeatmapDifficultyMask)>(&GlobalNamespace::BeatmapDifficultyMaskExtensions::LocalizedKey)> {
  static const MethodInfo* get() {
    static auto* mask = &::il2cpp_utils::GetClassFromName("", "BeatmapDifficultyMask")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapDifficultyMaskExtensions*), "LocalizedKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mask});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapDifficultyMaskExtensions::ShortLocalizedKey
// Il2CppName: ShortLocalizedKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::GlobalNamespace::BeatmapDifficultyMask)>(&GlobalNamespace::BeatmapDifficultyMaskExtensions::ShortLocalizedKey)> {
  static const MethodInfo* get() {
    static auto* mask = &::il2cpp_utils::GetClassFromName("", "BeatmapDifficultyMask")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapDifficultyMaskExtensions*), "ShortLocalizedKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mask});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapDifficultyMaskExtensions::Contains
// Il2CppName: Contains
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::GlobalNamespace::BeatmapDifficultyMask, ::GlobalNamespace::BeatmapDifficulty)>(&GlobalNamespace::BeatmapDifficultyMaskExtensions::Contains)> {
  static const MethodInfo* get() {
    static auto* mask = &::il2cpp_utils::GetClassFromName("", "BeatmapDifficultyMask")->byval_arg;
    static auto* difficulty = &::il2cpp_utils::GetClassFromName("", "BeatmapDifficulty")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapDifficultyMaskExtensions*), "Contains", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mask, difficulty});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapDifficultyMaskExtensions::Contains
// Il2CppName: Contains
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::GlobalNamespace::BeatmapDifficultyMask, ::GlobalNamespace::BeatmapDifficultyMask)>(&GlobalNamespace::BeatmapDifficultyMaskExtensions::Contains)> {
  static const MethodInfo* get() {
    static auto* mask = &::il2cpp_utils::GetClassFromName("", "BeatmapDifficultyMask")->byval_arg;
    static auto* other = &::il2cpp_utils::GetClassFromName("", "BeatmapDifficultyMask")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapDifficultyMaskExtensions*), "Contains", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mask, other});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapDifficultyMaskExtensions::DifferenceFrom
// Il2CppName: DifferenceFrom
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::GlobalNamespace::BeatmapDifficultyMask, ::GlobalNamespace::BeatmapDifficultyMask)>(&GlobalNamespace::BeatmapDifficultyMaskExtensions::DifferenceFrom)> {
  static const MethodInfo* get() {
    static auto* mask = &::il2cpp_utils::GetClassFromName("", "BeatmapDifficultyMask")->byval_arg;
    static auto* other = &::il2cpp_utils::GetClassFromName("", "BeatmapDifficultyMask")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapDifficultyMaskExtensions*), "DifferenceFrom", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mask, other});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapDifficultyMaskExtensions::ToHexString
// Il2CppName: ToHexString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::GlobalNamespace::BeatmapDifficultyMask)>(&GlobalNamespace::BeatmapDifficultyMaskExtensions::ToHexString)> {
  static const MethodInfo* get() {
    static auto* mask = &::il2cpp_utils::GetClassFromName("", "BeatmapDifficultyMask")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapDifficultyMaskExtensions*), "ToHexString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mask});
  }
};
