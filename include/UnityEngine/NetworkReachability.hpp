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
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: NetworkReachability
  struct NetworkReachability;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::NetworkReachability, "UnityEngine", "NetworkReachability");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.NetworkReachability
  // [TokenAttribute] Offset: FFFFFFFF
  struct NetworkReachability/*, public System::Enum*/ {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: NetworkReachability
    constexpr NetworkReachability(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.NetworkReachability NotReachable
    static constexpr const int NotReachable = 0;
    // Get static field: static public UnityEngine.NetworkReachability NotReachable
    static UnityEngine::NetworkReachability _get_NotReachable();
    // Set static field: static public UnityEngine.NetworkReachability NotReachable
    static void _set_NotReachable(UnityEngine::NetworkReachability value);
    // static field const value: static public UnityEngine.NetworkReachability ReachableViaCarrierDataNetwork
    static constexpr const int ReachableViaCarrierDataNetwork = 1;
    // Get static field: static public UnityEngine.NetworkReachability ReachableViaCarrierDataNetwork
    static UnityEngine::NetworkReachability _get_ReachableViaCarrierDataNetwork();
    // Set static field: static public UnityEngine.NetworkReachability ReachableViaCarrierDataNetwork
    static void _set_ReachableViaCarrierDataNetwork(UnityEngine::NetworkReachability value);
    // static field const value: static public UnityEngine.NetworkReachability ReachableViaLocalAreaNetwork
    static constexpr const int ReachableViaLocalAreaNetwork = 2;
    // Get static field: static public UnityEngine.NetworkReachability ReachableViaLocalAreaNetwork
    static UnityEngine::NetworkReachability _get_ReachableViaLocalAreaNetwork();
    // Set static field: static public UnityEngine.NetworkReachability ReachableViaLocalAreaNetwork
    static void _set_ReachableViaLocalAreaNetwork(UnityEngine::NetworkReachability value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // UnityEngine.NetworkReachability
  #pragma pack(pop)
  static check_size<sizeof(NetworkReachability), 0 + sizeof(int)> __UnityEngine_NetworkReachabilitySizeCheck;
  static_assert(sizeof(NetworkReachability) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
