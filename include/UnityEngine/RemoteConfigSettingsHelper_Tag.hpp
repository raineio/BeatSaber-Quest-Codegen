// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.RemoteConfigSettingsHelper
#include "UnityEngine/RemoteConfigSettingsHelper.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::RemoteConfigSettingsHelper::Tag, "UnityEngine", "RemoteConfigSettingsHelper/Tag");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.RemoteConfigSettingsHelper/UnityEngine.Tag
  // [TokenAttribute] Offset: FFFFFFFF
  // [RequiredByNativeCodeAttribute] Offset: 109B208
  struct RemoteConfigSettingsHelper::Tag/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: Tag
    constexpr Tag(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.RemoteConfigSettingsHelper/UnityEngine.Tag kUnknown
    static constexpr const int kUnknown = 0;
    // Get static field: static public UnityEngine.RemoteConfigSettingsHelper/UnityEngine.Tag kUnknown
    static ::UnityEngine::RemoteConfigSettingsHelper::Tag _get_kUnknown();
    // Set static field: static public UnityEngine.RemoteConfigSettingsHelper/UnityEngine.Tag kUnknown
    static void _set_kUnknown(::UnityEngine::RemoteConfigSettingsHelper::Tag value);
    // static field const value: static public UnityEngine.RemoteConfigSettingsHelper/UnityEngine.Tag kIntVal
    static constexpr const int kIntVal = 1;
    // Get static field: static public UnityEngine.RemoteConfigSettingsHelper/UnityEngine.Tag kIntVal
    static ::UnityEngine::RemoteConfigSettingsHelper::Tag _get_kIntVal();
    // Set static field: static public UnityEngine.RemoteConfigSettingsHelper/UnityEngine.Tag kIntVal
    static void _set_kIntVal(::UnityEngine::RemoteConfigSettingsHelper::Tag value);
    // static field const value: static public UnityEngine.RemoteConfigSettingsHelper/UnityEngine.Tag kInt64Val
    static constexpr const int kInt64Val = 2;
    // Get static field: static public UnityEngine.RemoteConfigSettingsHelper/UnityEngine.Tag kInt64Val
    static ::UnityEngine::RemoteConfigSettingsHelper::Tag _get_kInt64Val();
    // Set static field: static public UnityEngine.RemoteConfigSettingsHelper/UnityEngine.Tag kInt64Val
    static void _set_kInt64Val(::UnityEngine::RemoteConfigSettingsHelper::Tag value);
    // static field const value: static public UnityEngine.RemoteConfigSettingsHelper/UnityEngine.Tag kUInt64Val
    static constexpr const int kUInt64Val = 3;
    // Get static field: static public UnityEngine.RemoteConfigSettingsHelper/UnityEngine.Tag kUInt64Val
    static ::UnityEngine::RemoteConfigSettingsHelper::Tag _get_kUInt64Val();
    // Set static field: static public UnityEngine.RemoteConfigSettingsHelper/UnityEngine.Tag kUInt64Val
    static void _set_kUInt64Val(::UnityEngine::RemoteConfigSettingsHelper::Tag value);
    // static field const value: static public UnityEngine.RemoteConfigSettingsHelper/UnityEngine.Tag kDoubleVal
    static constexpr const int kDoubleVal = 4;
    // Get static field: static public UnityEngine.RemoteConfigSettingsHelper/UnityEngine.Tag kDoubleVal
    static ::UnityEngine::RemoteConfigSettingsHelper::Tag _get_kDoubleVal();
    // Set static field: static public UnityEngine.RemoteConfigSettingsHelper/UnityEngine.Tag kDoubleVal
    static void _set_kDoubleVal(::UnityEngine::RemoteConfigSettingsHelper::Tag value);
    // static field const value: static public UnityEngine.RemoteConfigSettingsHelper/UnityEngine.Tag kBoolVal
    static constexpr const int kBoolVal = 5;
    // Get static field: static public UnityEngine.RemoteConfigSettingsHelper/UnityEngine.Tag kBoolVal
    static ::UnityEngine::RemoteConfigSettingsHelper::Tag _get_kBoolVal();
    // Set static field: static public UnityEngine.RemoteConfigSettingsHelper/UnityEngine.Tag kBoolVal
    static void _set_kBoolVal(::UnityEngine::RemoteConfigSettingsHelper::Tag value);
    // static field const value: static public UnityEngine.RemoteConfigSettingsHelper/UnityEngine.Tag kStringVal
    static constexpr const int kStringVal = 6;
    // Get static field: static public UnityEngine.RemoteConfigSettingsHelper/UnityEngine.Tag kStringVal
    static ::UnityEngine::RemoteConfigSettingsHelper::Tag _get_kStringVal();
    // Set static field: static public UnityEngine.RemoteConfigSettingsHelper/UnityEngine.Tag kStringVal
    static void _set_kStringVal(::UnityEngine::RemoteConfigSettingsHelper::Tag value);
    // static field const value: static public UnityEngine.RemoteConfigSettingsHelper/UnityEngine.Tag kArrayVal
    static constexpr const int kArrayVal = 7;
    // Get static field: static public UnityEngine.RemoteConfigSettingsHelper/UnityEngine.Tag kArrayVal
    static ::UnityEngine::RemoteConfigSettingsHelper::Tag _get_kArrayVal();
    // Set static field: static public UnityEngine.RemoteConfigSettingsHelper/UnityEngine.Tag kArrayVal
    static void _set_kArrayVal(::UnityEngine::RemoteConfigSettingsHelper::Tag value);
    // static field const value: static public UnityEngine.RemoteConfigSettingsHelper/UnityEngine.Tag kMixedArrayVal
    static constexpr const int kMixedArrayVal = 8;
    // Get static field: static public UnityEngine.RemoteConfigSettingsHelper/UnityEngine.Tag kMixedArrayVal
    static ::UnityEngine::RemoteConfigSettingsHelper::Tag _get_kMixedArrayVal();
    // Set static field: static public UnityEngine.RemoteConfigSettingsHelper/UnityEngine.Tag kMixedArrayVal
    static void _set_kMixedArrayVal(::UnityEngine::RemoteConfigSettingsHelper::Tag value);
    // static field const value: static public UnityEngine.RemoteConfigSettingsHelper/UnityEngine.Tag kMapVal
    static constexpr const int kMapVal = 9;
    // Get static field: static public UnityEngine.RemoteConfigSettingsHelper/UnityEngine.Tag kMapVal
    static ::UnityEngine::RemoteConfigSettingsHelper::Tag _get_kMapVal();
    // Set static field: static public UnityEngine.RemoteConfigSettingsHelper/UnityEngine.Tag kMapVal
    static void _set_kMapVal(::UnityEngine::RemoteConfigSettingsHelper::Tag value);
    // static field const value: static public UnityEngine.RemoteConfigSettingsHelper/UnityEngine.Tag kMaxTags
    static constexpr const int kMaxTags = 10;
    // Get static field: static public UnityEngine.RemoteConfigSettingsHelper/UnityEngine.Tag kMaxTags
    static ::UnityEngine::RemoteConfigSettingsHelper::Tag _get_kMaxTags();
    // Set static field: static public UnityEngine.RemoteConfigSettingsHelper/UnityEngine.Tag kMaxTags
    static void _set_kMaxTags(::UnityEngine::RemoteConfigSettingsHelper::Tag value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // UnityEngine.RemoteConfigSettingsHelper/UnityEngine.Tag
  #pragma pack(pop)
  static check_size<sizeof(RemoteConfigSettingsHelper::Tag), 0 + sizeof(int)> __UnityEngine_RemoteConfigSettingsHelper_TagSizeCheck;
  static_assert(sizeof(RemoteConfigSettingsHelper::Tag) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
