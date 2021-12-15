// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: HoudiniEngineUnity.HEU_PDGSession
#include "HoudiniEngineUnity/HEU_PDGSession.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HEU_PDGSession::EventMessageColor, "HoudiniEngineUnity", "HEU_PDGSession/EventMessageColor");
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: HoudiniEngineUnity.HEU_PDGSession/HoudiniEngineUnity.EventMessageColor
  // [TokenAttribute] Offset: FFFFFFFF
  struct HEU_PDGSession::EventMessageColor/*, public System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: EventMessageColor
    constexpr EventMessageColor(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public HoudiniEngineUnity.HEU_PDGSession/HoudiniEngineUnity.EventMessageColor DEFAULT
    static constexpr const int DEFAULT = 0;
    // Get static field: static public HoudiniEngineUnity.HEU_PDGSession/HoudiniEngineUnity.EventMessageColor DEFAULT
    static HoudiniEngineUnity::HEU_PDGSession::EventMessageColor _get_DEFAULT();
    // Set static field: static public HoudiniEngineUnity.HEU_PDGSession/HoudiniEngineUnity.EventMessageColor DEFAULT
    static void _set_DEFAULT(HoudiniEngineUnity::HEU_PDGSession::EventMessageColor value);
    // static field const value: static public HoudiniEngineUnity.HEU_PDGSession/HoudiniEngineUnity.EventMessageColor WARNING
    static constexpr const int WARNING = 1;
    // Get static field: static public HoudiniEngineUnity.HEU_PDGSession/HoudiniEngineUnity.EventMessageColor WARNING
    static HoudiniEngineUnity::HEU_PDGSession::EventMessageColor _get_WARNING();
    // Set static field: static public HoudiniEngineUnity.HEU_PDGSession/HoudiniEngineUnity.EventMessageColor WARNING
    static void _set_WARNING(HoudiniEngineUnity::HEU_PDGSession::EventMessageColor value);
    // static field const value: static public HoudiniEngineUnity.HEU_PDGSession/HoudiniEngineUnity.EventMessageColor ERROR
    static constexpr const int ERROR = 2;
    // Get static field: static public HoudiniEngineUnity.HEU_PDGSession/HoudiniEngineUnity.EventMessageColor ERROR
    static HoudiniEngineUnity::HEU_PDGSession::EventMessageColor _get_ERROR();
    // Set static field: static public HoudiniEngineUnity.HEU_PDGSession/HoudiniEngineUnity.EventMessageColor ERROR
    static void _set_ERROR(HoudiniEngineUnity::HEU_PDGSession::EventMessageColor value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // HoudiniEngineUnity.HEU_PDGSession/HoudiniEngineUnity.EventMessageColor
  #pragma pack(pop)
  static check_size<sizeof(HEU_PDGSession::EventMessageColor), 0 + sizeof(int)> __HoudiniEngineUnity_HEU_PDGSession_EventMessageColorSizeCheck;
  static_assert(sizeof(HEU_PDGSession::EventMessageColor) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
