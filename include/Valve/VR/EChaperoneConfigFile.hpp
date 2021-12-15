// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: Valve.VR
namespace Valve::VR {
  // Forward declaring type: EChaperoneConfigFile
  struct EChaperoneConfigFile;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::EChaperoneConfigFile, "Valve.VR", "EChaperoneConfigFile");
// Type namespace: Valve.VR
namespace Valve::VR {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Valve.VR.EChaperoneConfigFile
  // [TokenAttribute] Offset: FFFFFFFF
  struct EChaperoneConfigFile/*, public System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: EChaperoneConfigFile
    constexpr EChaperoneConfigFile(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Valve.VR.EChaperoneConfigFile Live
    static constexpr const int Live = 1;
    // Get static field: static public Valve.VR.EChaperoneConfigFile Live
    static Valve::VR::EChaperoneConfigFile _get_Live();
    // Set static field: static public Valve.VR.EChaperoneConfigFile Live
    static void _set_Live(Valve::VR::EChaperoneConfigFile value);
    // static field const value: static public Valve.VR.EChaperoneConfigFile Temp
    static constexpr const int Temp = 2;
    // Get static field: static public Valve.VR.EChaperoneConfigFile Temp
    static Valve::VR::EChaperoneConfigFile _get_Temp();
    // Set static field: static public Valve.VR.EChaperoneConfigFile Temp
    static void _set_Temp(Valve::VR::EChaperoneConfigFile value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // Valve.VR.EChaperoneConfigFile
  #pragma pack(pop)
  static check_size<sizeof(EChaperoneConfigFile), 0 + sizeof(int)> __Valve_VR_EChaperoneConfigFileSizeCheck;
  static_assert(sizeof(EChaperoneConfigFile) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
