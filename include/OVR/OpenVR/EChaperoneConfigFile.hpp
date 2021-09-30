// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: OVR.OpenVR.EChaperoneConfigFile
  // [TokenAttribute] Offset: FFFFFFFF
  struct EChaperoneConfigFile/*, public System::Enum*/ {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    private:
    #endif
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
    // static field const value: static public OVR.OpenVR.EChaperoneConfigFile Live
    static constexpr const int Live = 1;
    // Get static field: static public OVR.OpenVR.EChaperoneConfigFile Live
    static OVR::OpenVR::EChaperoneConfigFile _get_Live();
    // Set static field: static public OVR.OpenVR.EChaperoneConfigFile Live
    static void _set_Live(OVR::OpenVR::EChaperoneConfigFile value);
    // static field const value: static public OVR.OpenVR.EChaperoneConfigFile Temp
    static constexpr const int Temp = 2;
    // Get static field: static public OVR.OpenVR.EChaperoneConfigFile Temp
    static OVR::OpenVR::EChaperoneConfigFile _get_Temp();
    // Set static field: static public OVR.OpenVR.EChaperoneConfigFile Temp
    static void _set_Temp(OVR::OpenVR::EChaperoneConfigFile value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // OVR.OpenVR.EChaperoneConfigFile
  #pragma pack(pop)
  static check_size<sizeof(EChaperoneConfigFile), 0 + sizeof(int)> __OVR_OpenVR_EChaperoneConfigFileSizeCheck;
  static_assert(sizeof(EChaperoneConfigFile) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::EChaperoneConfigFile, "OVR.OpenVR", "EChaperoneConfigFile");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
