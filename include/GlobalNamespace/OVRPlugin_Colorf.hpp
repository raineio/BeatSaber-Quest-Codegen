// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVRPlugin
#include "GlobalNamespace/OVRPlugin.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRPlugin::Colorf, "", "OVRPlugin/Colorf");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: OVRPlugin/Colorf
  // [TokenAttribute] Offset: FFFFFFFF
  struct OVRPlugin::Colorf/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.Single r
    // Size: 0x4
    // Offset: 0x0
    float r;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single g
    // Size: 0x4
    // Offset: 0x4
    float g;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single b
    // Size: 0x4
    // Offset: 0x8
    float b;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single a
    // Size: 0x4
    // Offset: 0xC
    float a;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Creating value type constructor for type: Colorf
    constexpr Colorf(float r_ = {}, float g_ = {}, float b_ = {}, float a_ = {}) noexcept : r{r_}, g{g_}, b{b_}, a{a_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public System.Single r
    [[deprecated("Use field access instead!")]] float& dyn_r();
    // Get instance field reference: public System.Single g
    [[deprecated("Use field access instead!")]] float& dyn_g();
    // Get instance field reference: public System.Single b
    [[deprecated("Use field access instead!")]] float& dyn_b();
    // Get instance field reference: public System.Single a
    [[deprecated("Use field access instead!")]] float& dyn_a();
  }; // OVRPlugin/Colorf
  #pragma pack(pop)
  static check_size<sizeof(OVRPlugin::Colorf), 12 + sizeof(float)> __GlobalNamespace_OVRPlugin_ColorfSizeCheck;
  static_assert(sizeof(OVRPlugin::Colorf) == 0x10);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
