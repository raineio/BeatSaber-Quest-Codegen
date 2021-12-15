// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: SteamVR_Controller
#include "GlobalNamespace/SteamVR_Controller.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SteamVR_Controller::DeviceRelation, "", "SteamVR_Controller/DeviceRelation");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: SteamVR_Controller/DeviceRelation
  // [TokenAttribute] Offset: FFFFFFFF
  struct SteamVR_Controller::DeviceRelation/*, public System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: DeviceRelation
    constexpr DeviceRelation(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public SteamVR_Controller/DeviceRelation First
    static constexpr const int First = 0;
    // Get static field: static public SteamVR_Controller/DeviceRelation First
    static GlobalNamespace::SteamVR_Controller::DeviceRelation _get_First();
    // Set static field: static public SteamVR_Controller/DeviceRelation First
    static void _set_First(GlobalNamespace::SteamVR_Controller::DeviceRelation value);
    // static field const value: static public SteamVR_Controller/DeviceRelation Leftmost
    static constexpr const int Leftmost = 1;
    // Get static field: static public SteamVR_Controller/DeviceRelation Leftmost
    static GlobalNamespace::SteamVR_Controller::DeviceRelation _get_Leftmost();
    // Set static field: static public SteamVR_Controller/DeviceRelation Leftmost
    static void _set_Leftmost(GlobalNamespace::SteamVR_Controller::DeviceRelation value);
    // static field const value: static public SteamVR_Controller/DeviceRelation Rightmost
    static constexpr const int Rightmost = 2;
    // Get static field: static public SteamVR_Controller/DeviceRelation Rightmost
    static GlobalNamespace::SteamVR_Controller::DeviceRelation _get_Rightmost();
    // Set static field: static public SteamVR_Controller/DeviceRelation Rightmost
    static void _set_Rightmost(GlobalNamespace::SteamVR_Controller::DeviceRelation value);
    // static field const value: static public SteamVR_Controller/DeviceRelation FarthestLeft
    static constexpr const int FarthestLeft = 3;
    // Get static field: static public SteamVR_Controller/DeviceRelation FarthestLeft
    static GlobalNamespace::SteamVR_Controller::DeviceRelation _get_FarthestLeft();
    // Set static field: static public SteamVR_Controller/DeviceRelation FarthestLeft
    static void _set_FarthestLeft(GlobalNamespace::SteamVR_Controller::DeviceRelation value);
    // static field const value: static public SteamVR_Controller/DeviceRelation FarthestRight
    static constexpr const int FarthestRight = 4;
    // Get static field: static public SteamVR_Controller/DeviceRelation FarthestRight
    static GlobalNamespace::SteamVR_Controller::DeviceRelation _get_FarthestRight();
    // Set static field: static public SteamVR_Controller/DeviceRelation FarthestRight
    static void _set_FarthestRight(GlobalNamespace::SteamVR_Controller::DeviceRelation value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // SteamVR_Controller/DeviceRelation
  #pragma pack(pop)
  static check_size<sizeof(SteamVR_Controller::DeviceRelation), 0 + sizeof(int)> __GlobalNamespace_SteamVR_Controller_DeviceRelationSizeCheck;
  static_assert(sizeof(SteamVR_Controller::DeviceRelation) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
