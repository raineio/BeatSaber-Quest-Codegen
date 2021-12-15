// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Oculus.Platform.CAPI
#include "Oculus/Platform/CAPI.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Forward declaring type: OculusInitParams
  struct OculusInitParams;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::CAPI::OculusInitParams, "Oculus.Platform", "CAPI/OculusInitParams");
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Size: 0x28
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Oculus.Platform.CAPI/Oculus.Platform.OculusInitParams
  // [TokenAttribute] Offset: FFFFFFFF
  struct CAPI::OculusInitParams/*, public System::ValueType*/ {
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
    // public System.Int32 sType
    // Size: 0x4
    // Offset: 0x0
    int sType;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: sType and: email
    char __padding0[0x4] = {};
    // public System.String email
    // Size: 0x8
    // Offset: 0x8
    ::Il2CppString* email;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.String password
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* password;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.UInt64 appId
    // Size: 0x8
    // Offset: 0x18
    uint64_t appId;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // public System.String uriPrefixOverride
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppString* uriPrefixOverride;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    public:
    // Creating value type constructor for type: OculusInitParams
    constexpr OculusInitParams(int sType_ = {}, ::Il2CppString* email_ = {}, ::Il2CppString* password_ = {}, uint64_t appId_ = {}, ::Il2CppString* uriPrefixOverride_ = {}) noexcept : sType{sType_}, email{email_}, password{password_}, appId{appId_}, uriPrefixOverride{uriPrefixOverride_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Get instance field reference: public System.Int32 sType
    int& dyn_sType();
    // Get instance field reference: public System.String email
    ::Il2CppString*& dyn_email();
    // Get instance field reference: public System.String password
    ::Il2CppString*& dyn_password();
    // Get instance field reference: public System.UInt64 appId
    uint64_t& dyn_appId();
    // Get instance field reference: public System.String uriPrefixOverride
    ::Il2CppString*& dyn_uriPrefixOverride();
  }; // Oculus.Platform.CAPI/Oculus.Platform.OculusInitParams
  #pragma pack(pop)
  static check_size<sizeof(CAPI::OculusInitParams), 32 + sizeof(::Il2CppString*)> __Oculus_Platform_CAPI_OculusInitParamsSizeCheck;
  static_assert(sizeof(CAPI::OculusInitParams) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
