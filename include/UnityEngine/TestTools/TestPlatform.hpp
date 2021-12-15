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
// Type namespace: UnityEngine.TestTools
namespace UnityEngine::TestTools {
  // Forward declaring type: TestPlatform
  struct TestPlatform;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TestTools::TestPlatform, "UnityEngine.TestTools", "TestPlatform");
// Type namespace: UnityEngine.TestTools
namespace UnityEngine::TestTools {
  // Size: 0x1
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.TestTools.TestPlatform
  // [TokenAttribute] Offset: FFFFFFFF
  // [FlagsAttribute] Offset: FFFFFFFF
  struct TestPlatform/*, public System::Enum*/ {
    public:
    public:
    // public System.Byte value__
    // Size: 0x1
    // Offset: 0x0
    uint8_t value;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    public:
    // Creating value type constructor for type: TestPlatform
    constexpr TestPlatform(uint8_t value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator uint8_t
    constexpr operator uint8_t() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.TestTools.TestPlatform All
    static constexpr const uint8_t All = 255u;
    // Get static field: static public UnityEngine.TestTools.TestPlatform All
    static UnityEngine::TestTools::TestPlatform _get_All();
    // Set static field: static public UnityEngine.TestTools.TestPlatform All
    static void _set_All(UnityEngine::TestTools::TestPlatform value);
    // static field const value: static public UnityEngine.TestTools.TestPlatform EditMode
    static constexpr const uint8_t EditMode = 2u;
    // Get static field: static public UnityEngine.TestTools.TestPlatform EditMode
    static UnityEngine::TestTools::TestPlatform _get_EditMode();
    // Set static field: static public UnityEngine.TestTools.TestPlatform EditMode
    static void _set_EditMode(UnityEngine::TestTools::TestPlatform value);
    // static field const value: static public UnityEngine.TestTools.TestPlatform PlayMode
    static constexpr const uint8_t PlayMode = 4u;
    // Get static field: static public UnityEngine.TestTools.TestPlatform PlayMode
    static UnityEngine::TestTools::TestPlatform _get_PlayMode();
    // Set static field: static public UnityEngine.TestTools.TestPlatform PlayMode
    static void _set_PlayMode(UnityEngine::TestTools::TestPlatform value);
    // Get instance field reference: public System.Byte value__
    uint8_t& dyn_value__();
  }; // UnityEngine.TestTools.TestPlatform
  #pragma pack(pop)
  static check_size<sizeof(TestPlatform), 0 + sizeof(uint8_t)> __UnityEngine_TestTools_TestPlatformSizeCheck;
  static_assert(sizeof(TestPlatform) == 0x1);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
