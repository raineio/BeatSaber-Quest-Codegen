// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: String
  class String;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BeatmapDifficulty
  struct BeatmapDifficulty;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: BeatmapDifficultySerializedMethods
  class BeatmapDifficultySerializedMethods;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(GlobalNamespace::BeatmapDifficultySerializedMethods);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapDifficultySerializedMethods*, "", "BeatmapDifficultySerializedMethods");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: BeatmapDifficultySerializedMethods
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExtensionAttribute] Offset: FFFFFFFF
  class BeatmapDifficultySerializedMethods : public ::Il2CppObject {
    public:
    // static field const value: static private System.String kDifficultyEasySerializedName
    static constexpr const char* kDifficultyEasySerializedName = "Easy";
    // Get static field: static private System.String kDifficultyEasySerializedName
    static ::Il2CppString* _get_kDifficultyEasySerializedName();
    // Set static field: static private System.String kDifficultyEasySerializedName
    static void _set_kDifficultyEasySerializedName(::Il2CppString* value);
    // static field const value: static private System.String kDifficultyNormalSerializedName
    static constexpr const char* kDifficultyNormalSerializedName = "Normal";
    // Get static field: static private System.String kDifficultyNormalSerializedName
    static ::Il2CppString* _get_kDifficultyNormalSerializedName();
    // Set static field: static private System.String kDifficultyNormalSerializedName
    static void _set_kDifficultyNormalSerializedName(::Il2CppString* value);
    // static field const value: static private System.String kDifficultyHardSerializedName
    static constexpr const char* kDifficultyHardSerializedName = "Hard";
    // Get static field: static private System.String kDifficultyHardSerializedName
    static ::Il2CppString* _get_kDifficultyHardSerializedName();
    // Set static field: static private System.String kDifficultyHardSerializedName
    static void _set_kDifficultyHardSerializedName(::Il2CppString* value);
    // static field const value: static private System.String kDifficultyExpertSerializedName
    static constexpr const char* kDifficultyExpertSerializedName = "Expert";
    // Get static field: static private System.String kDifficultyExpertSerializedName
    static ::Il2CppString* _get_kDifficultyExpertSerializedName();
    // Set static field: static private System.String kDifficultyExpertSerializedName
    static void _set_kDifficultyExpertSerializedName(::Il2CppString* value);
    // static field const value: static private System.String kDifficultyExpertPlusNameSerializedLegacy
    static constexpr const char* kDifficultyExpertPlusNameSerializedLegacy = "Expert+";
    // Get static field: static private System.String kDifficultyExpertPlusNameSerializedLegacy
    static ::Il2CppString* _get_kDifficultyExpertPlusNameSerializedLegacy();
    // Set static field: static private System.String kDifficultyExpertPlusNameSerializedLegacy
    static void _set_kDifficultyExpertPlusNameSerializedLegacy(::Il2CppString* value);
    // static field const value: static private System.String kDifficultyExpertPlusSerializedName
    static constexpr const char* kDifficultyExpertPlusSerializedName = "ExpertPlus";
    // Get static field: static private System.String kDifficultyExpertPlusSerializedName
    static ::Il2CppString* _get_kDifficultyExpertPlusSerializedName();
    // Set static field: static private System.String kDifficultyExpertPlusSerializedName
    static void _set_kDifficultyExpertPlusSerializedName(::Il2CppString* value);
    // static field const value: static private System.String kDifficultyUnknownSerializedName
    static constexpr const char* kDifficultyUnknownSerializedName = "Unknown";
    // Get static field: static private System.String kDifficultyUnknownSerializedName
    static ::Il2CppString* _get_kDifficultyUnknownSerializedName();
    // Set static field: static private System.String kDifficultyUnknownSerializedName
    static void _set_kDifficultyUnknownSerializedName(::Il2CppString* value);
    // static public System.String SerializedName(BeatmapDifficulty difficulty)
    // Offset: 0x26BCEF0
    static ::Il2CppString* SerializedName(GlobalNamespace::BeatmapDifficulty difficulty);
    // static public System.Boolean BeatmapDifficultyFromSerializedName(System.String name, out BeatmapDifficulty difficulty)
    // Offset: 0x26BCF60
    static bool BeatmapDifficultyFromSerializedName(::Il2CppString* name, ByRef<GlobalNamespace::BeatmapDifficulty> difficulty);
  }; // BeatmapDifficultySerializedMethods
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BeatmapDifficultySerializedMethods::SerializedName
// Il2CppName: SerializedName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(GlobalNamespace::BeatmapDifficulty)>(&GlobalNamespace::BeatmapDifficultySerializedMethods::SerializedName)> {
  static const MethodInfo* get() {
    static auto* difficulty = &::il2cpp_utils::GetClassFromName("", "BeatmapDifficulty")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapDifficultySerializedMethods*), "SerializedName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{difficulty});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapDifficultySerializedMethods::BeatmapDifficultyFromSerializedName
// Il2CppName: BeatmapDifficultyFromSerializedName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Il2CppString*, ByRef<GlobalNamespace::BeatmapDifficulty>)>(&GlobalNamespace::BeatmapDifficultySerializedMethods::BeatmapDifficultyFromSerializedName)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* difficulty = &::il2cpp_utils::GetClassFromName("", "BeatmapDifficulty")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapDifficultySerializedMethods*), "BeatmapDifficultyFromSerializedName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, difficulty});
  }
};
