// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: BeatSaberAPI.DataTransferObjects
namespace BeatSaberAPI::DataTransferObjects {
  // Autogenerated type: BeatSaberAPI.DataTransferObjects.PlatformEnviroment
  struct PlatformEnviroment : public System::Enum {
    public:
    // public System.Byte value__
    // Offset: 0x0
    uint8_t value;
    // Creating value type constructor for type: PlatformEnviroment
    constexpr PlatformEnviroment(uint8_t value_ = {}) noexcept : value{value_} {}
    // Creating conversion operator: operator uint8_t
    constexpr operator uint8_t() const noexcept {
      return value;
    }
    // static field const value: static public BeatSaberAPI.DataTransferObjects.PlatformEnviroment Test
    static constexpr const uint8_t Test = 0u;
    // Get static field: static public BeatSaberAPI.DataTransferObjects.PlatformEnviroment Test
    static BeatSaberAPI::DataTransferObjects::PlatformEnviroment _get_Test();
    // Set static field: static public BeatSaberAPI.DataTransferObjects.PlatformEnviroment Test
    static void _set_Test(BeatSaberAPI::DataTransferObjects::PlatformEnviroment value);
    // static field const value: static public BeatSaberAPI.DataTransferObjects.PlatformEnviroment Developer
    static constexpr const uint8_t Developer = 1u;
    // Get static field: static public BeatSaberAPI.DataTransferObjects.PlatformEnviroment Developer
    static BeatSaberAPI::DataTransferObjects::PlatformEnviroment _get_Developer();
    // Set static field: static public BeatSaberAPI.DataTransferObjects.PlatformEnviroment Developer
    static void _set_Developer(BeatSaberAPI::DataTransferObjects::PlatformEnviroment value);
    // static field const value: static public BeatSaberAPI.DataTransferObjects.PlatformEnviroment Production
    static constexpr const uint8_t Production = 2u;
    // Get static field: static public BeatSaberAPI.DataTransferObjects.PlatformEnviroment Production
    static BeatSaberAPI::DataTransferObjects::PlatformEnviroment _get_Production();
    // Set static field: static public BeatSaberAPI.DataTransferObjects.PlatformEnviroment Production
    static void _set_Production(BeatSaberAPI::DataTransferObjects::PlatformEnviroment value);
  }; // BeatSaberAPI.DataTransferObjects.PlatformEnviroment
  check_size<sizeof(PlatformEnviroment), 0 + sizeof(uint8_t) + 8 - (0 + sizeof(uint8_t)) % 8> __BeatSaberAPI_DataTransferObjects_PlatformEnviromentSizeCheck;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(BeatSaberAPI::DataTransferObjects::PlatformEnviroment, "BeatSaberAPI.DataTransferObjects", "PlatformEnviroment");
#pragma pack(pop)