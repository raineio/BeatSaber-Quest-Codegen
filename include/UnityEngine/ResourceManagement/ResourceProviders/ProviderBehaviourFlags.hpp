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
// Type namespace: UnityEngine.ResourceManagement.ResourceProviders
namespace UnityEngine::ResourceManagement::ResourceProviders {
  // Forward declaring type: ProviderBehaviourFlags
  struct ProviderBehaviourFlags;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::ResourceProviders::ProviderBehaviourFlags, "UnityEngine.ResourceManagement.ResourceProviders", "ProviderBehaviourFlags");
// Type namespace: UnityEngine.ResourceManagement.ResourceProviders
namespace UnityEngine::ResourceManagement::ResourceProviders {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ResourceManagement.ResourceProviders.ProviderBehaviourFlags
  // [TokenAttribute] Offset: FFFFFFFF
  struct ProviderBehaviourFlags/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: ProviderBehaviourFlags
    constexpr ProviderBehaviourFlags(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating interface conversion operator: i_Enum
    inline ::System::Enum* i_Enum() noexcept {
      return reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.ResourceManagement.ResourceProviders.ProviderBehaviourFlags None
    static constexpr const int None = 0;
    // Get static field: static public UnityEngine.ResourceManagement.ResourceProviders.ProviderBehaviourFlags None
    static ::UnityEngine::ResourceManagement::ResourceProviders::ProviderBehaviourFlags _get_None();
    // Set static field: static public UnityEngine.ResourceManagement.ResourceProviders.ProviderBehaviourFlags None
    static void _set_None(::UnityEngine::ResourceManagement::ResourceProviders::ProviderBehaviourFlags value);
    // static field const value: static public UnityEngine.ResourceManagement.ResourceProviders.ProviderBehaviourFlags CanProvideWithFailedDependencies
    static constexpr const int CanProvideWithFailedDependencies = 1;
    // Get static field: static public UnityEngine.ResourceManagement.ResourceProviders.ProviderBehaviourFlags CanProvideWithFailedDependencies
    static ::UnityEngine::ResourceManagement::ResourceProviders::ProviderBehaviourFlags _get_CanProvideWithFailedDependencies();
    // Set static field: static public UnityEngine.ResourceManagement.ResourceProviders.ProviderBehaviourFlags CanProvideWithFailedDependencies
    static void _set_CanProvideWithFailedDependencies(::UnityEngine::ResourceManagement::ResourceProviders::ProviderBehaviourFlags value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // UnityEngine.ResourceManagement.ResourceProviders.ProviderBehaviourFlags
  #pragma pack(pop)
  static check_size<sizeof(ProviderBehaviourFlags), 0 + sizeof(int)> __UnityEngine_ResourceManagement_ResourceProviders_ProviderBehaviourFlagsSizeCheck;
  static_assert(sizeof(ProviderBehaviourFlags) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
