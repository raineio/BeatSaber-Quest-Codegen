// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Texture2D
#include "UnityEngine/Texture2D.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Texture2D/UnityEngine.EXRFlags
  // [TokenAttribute] Offset: FFFFFFFF
  // [FlagsAttribute] Offset: FFFFFFFF
  struct Texture2D::EXRFlags/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: EXRFlags
    constexpr EXRFlags(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.Texture2D/UnityEngine.EXRFlags None
    static constexpr const int None = 0;
    // Get static field: static public UnityEngine.Texture2D/UnityEngine.EXRFlags None
    static UnityEngine::Texture2D::EXRFlags _get_None();
    // Set static field: static public UnityEngine.Texture2D/UnityEngine.EXRFlags None
    static void _set_None(UnityEngine::Texture2D::EXRFlags value);
    // static field const value: static public UnityEngine.Texture2D/UnityEngine.EXRFlags OutputAsFloat
    static constexpr const int OutputAsFloat = 1;
    // Get static field: static public UnityEngine.Texture2D/UnityEngine.EXRFlags OutputAsFloat
    static UnityEngine::Texture2D::EXRFlags _get_OutputAsFloat();
    // Set static field: static public UnityEngine.Texture2D/UnityEngine.EXRFlags OutputAsFloat
    static void _set_OutputAsFloat(UnityEngine::Texture2D::EXRFlags value);
    // static field const value: static public UnityEngine.Texture2D/UnityEngine.EXRFlags CompressZIP
    static constexpr const int CompressZIP = 2;
    // Get static field: static public UnityEngine.Texture2D/UnityEngine.EXRFlags CompressZIP
    static UnityEngine::Texture2D::EXRFlags _get_CompressZIP();
    // Set static field: static public UnityEngine.Texture2D/UnityEngine.EXRFlags CompressZIP
    static void _set_CompressZIP(UnityEngine::Texture2D::EXRFlags value);
    // static field const value: static public UnityEngine.Texture2D/UnityEngine.EXRFlags CompressRLE
    static constexpr const int CompressRLE = 4;
    // Get static field: static public UnityEngine.Texture2D/UnityEngine.EXRFlags CompressRLE
    static UnityEngine::Texture2D::EXRFlags _get_CompressRLE();
    // Set static field: static public UnityEngine.Texture2D/UnityEngine.EXRFlags CompressRLE
    static void _set_CompressRLE(UnityEngine::Texture2D::EXRFlags value);
    // static field const value: static public UnityEngine.Texture2D/UnityEngine.EXRFlags CompressPIZ
    static constexpr const int CompressPIZ = 8;
    // Get static field: static public UnityEngine.Texture2D/UnityEngine.EXRFlags CompressPIZ
    static UnityEngine::Texture2D::EXRFlags _get_CompressPIZ();
    // Set static field: static public UnityEngine.Texture2D/UnityEngine.EXRFlags CompressPIZ
    static void _set_CompressPIZ(UnityEngine::Texture2D::EXRFlags value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // UnityEngine.Texture2D/UnityEngine.EXRFlags
  #pragma pack(pop)
  static check_size<sizeof(Texture2D::EXRFlags), 0 + sizeof(int)> __UnityEngine_Texture2D_EXRFlagsSizeCheck;
  static_assert(sizeof(Texture2D::EXRFlags) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Texture2D::EXRFlags, "UnityEngine", "Texture2D/EXRFlags");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"