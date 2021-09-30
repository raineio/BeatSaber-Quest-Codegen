// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Size: 0x2
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: HoudiniEngineUnity.HAPI_SessionSyncInfo
  // [TokenAttribute] Offset: FFFFFFFF
  struct HAPI_SessionSyncInfo/*, public System::ValueType*/ {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    private:
    #endif
    // public System.Boolean cookUsingHoudiniTime
    // Size: 0x1
    // Offset: 0x0
    bool cookUsingHoudiniTime;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean syncViewport
    // Size: 0x1
    // Offset: 0x1
    bool syncViewport;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating value type constructor for type: HAPI_SessionSyncInfo
    constexpr HAPI_SessionSyncInfo(bool cookUsingHoudiniTime_ = {}, bool syncViewport_ = {}) noexcept : cookUsingHoudiniTime{cookUsingHoudiniTime_}, syncViewport{syncViewport_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Get instance field reference: public System.Boolean cookUsingHoudiniTime
    bool& dyn_cookUsingHoudiniTime();
    // Get instance field reference: public System.Boolean syncViewport
    bool& dyn_syncViewport();
  }; // HoudiniEngineUnity.HAPI_SessionSyncInfo
  #pragma pack(pop)
  static check_size<sizeof(HAPI_SessionSyncInfo), 1 + sizeof(bool)> __HoudiniEngineUnity_HAPI_SessionSyncInfoSizeCheck;
  static_assert(sizeof(HAPI_SessionSyncInfo) == 0x2);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HAPI_SessionSyncInfo, "HoudiniEngineUnity", "HAPI_SessionSyncInfo");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
