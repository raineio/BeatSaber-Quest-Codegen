// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: BeatmapEventDataExtensions
#include "GlobalNamespace/BeatmapEventDataExtensions.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: BeatmapEventDataExtensions/LightSwitchEventEffectDataValues
  // [TokenAttribute] Offset: FFFFFFFF
  class BeatmapEventDataExtensions::LightSwitchEventEffectDataValues : public ::Il2CppObject {
    public:
    // static field const value: static public System.Int32 kOff
    static constexpr const int kOff = 0;
    // Get static field: static public System.Int32 kOff
    static int _get_kOff();
    // Set static field: static public System.Int32 kOff
    static void _set_kOff(int value);
    // static field const value: static public System.Int32 kOnA
    static constexpr const int kOnA = 1;
    // Get static field: static public System.Int32 kOnA
    static int _get_kOnA();
    // Set static field: static public System.Int32 kOnA
    static void _set_kOnA(int value);
    // static field const value: static public System.Int32 kOnB
    static constexpr const int kOnB = 5;
    // Get static field: static public System.Int32 kOnB
    static int _get_kOnB();
    // Set static field: static public System.Int32 kOnB
    static void _set_kOnB(int value);
    // static field const value: static public System.Int32 kHighlightA
    static constexpr const int kHighlightA = 2;
    // Get static field: static public System.Int32 kHighlightA
    static int _get_kHighlightA();
    // Set static field: static public System.Int32 kHighlightA
    static void _set_kHighlightA(int value);
    // static field const value: static public System.Int32 kHighlightB
    static constexpr const int kHighlightB = 6;
    // Get static field: static public System.Int32 kHighlightB
    static int _get_kHighlightB();
    // Set static field: static public System.Int32 kHighlightB
    static void _set_kHighlightB(int value);
    // static field const value: static public System.Int32 kFlashAndFadeToBlack
    static constexpr const int kFlashAndFadeToBlack = -1;
    // Get static field: static public System.Int32 kFlashAndFadeToBlack
    static int _get_kFlashAndFadeToBlack();
    // Set static field: static public System.Int32 kFlashAndFadeToBlack
    static void _set_kFlashAndFadeToBlack(int value);
    // static field const value: static public System.Int32 kFlashAndFadeToBlackA
    static constexpr const int kFlashAndFadeToBlackA = 3;
    // Get static field: static public System.Int32 kFlashAndFadeToBlackA
    static int _get_kFlashAndFadeToBlackA();
    // Set static field: static public System.Int32 kFlashAndFadeToBlackA
    static void _set_kFlashAndFadeToBlackA(int value);
    // static field const value: static public System.Int32 kFlashAndFadeToBlackB
    static constexpr const int kFlashAndFadeToBlackB = 7;
    // Get static field: static public System.Int32 kFlashAndFadeToBlackB
    static int _get_kFlashAndFadeToBlackB();
    // Set static field: static public System.Int32 kFlashAndFadeToBlackB
    static void _set_kFlashAndFadeToBlackB(int value);
    // static field const value: static public System.Int32 kFadeA
    static constexpr const int kFadeA = 4;
    // Get static field: static public System.Int32 kFadeA
    static int _get_kFadeA();
    // Set static field: static public System.Int32 kFadeA
    static void _set_kFadeA(int value);
    // static field const value: static public System.Int32 kFadeB
    static constexpr const int kFadeB = 8;
    // Get static field: static public System.Int32 kFadeB
    static int _get_kFadeB();
    // Set static field: static public System.Int32 kFadeB
    static void _set_kFadeB(int value);
    // static public System.Boolean IsColor0EventDataValue(System.Int32 beatmapEventValue)
    // Offset: 0x2613690
    static bool IsColor0EventDataValue(int beatmapEventValue);
  }; // BeatmapEventDataExtensions/LightSwitchEventEffectDataValues
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapEventDataExtensions::LightSwitchEventEffectDataValues*, "", "BeatmapEventDataExtensions/LightSwitchEventEffectDataValues");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BeatmapEventDataExtensions::LightSwitchEventEffectDataValues::IsColor0EventDataValue
// Il2CppName: IsColor0EventDataValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(int)>(&GlobalNamespace::BeatmapEventDataExtensions::LightSwitchEventEffectDataValues::IsColor0EventDataValue)> {
  static const MethodInfo* get() {
    static auto* beatmapEventValue = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapEventDataExtensions::LightSwitchEventEffectDataValues*), "IsColor0EventDataValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{beatmapEventValue});
  }
};