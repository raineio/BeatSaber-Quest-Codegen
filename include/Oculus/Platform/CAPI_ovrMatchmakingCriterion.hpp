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
// Including type: Oculus.Platform.MatchmakingCriterionImportance
#include "Oculus/Platform/MatchmakingCriterionImportance.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Completed includes
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::CAPI::ovrMatchmakingCriterion, "Oculus.Platform", "CAPI/ovrMatchmakingCriterion");
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Size: 0x1C
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Oculus.Platform.CAPI/Oculus.Platform.ovrMatchmakingCriterion
  // [TokenAttribute] Offset: FFFFFFFF
  struct CAPI::ovrMatchmakingCriterion/*, public System::ValueType*/ {
    public:
    public:
    // public System.String key_
    // Size: 0x8
    // Offset: 0x0
    ::Il2CppString* key;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public Oculus.Platform.MatchmakingCriterionImportance importance_
    // Size: 0x4
    // Offset: 0x8
    Oculus::Platform::MatchmakingCriterionImportance importance;
    // Field size check
    static_assert(sizeof(Oculus::Platform::MatchmakingCriterionImportance) == 0x4);
    // Padding between fields: importance and: parameterArray
    char __padding1[0x4] = {};
    // public System.IntPtr parameterArray
    // Size: 0x8
    // Offset: 0x10
    System::IntPtr parameterArray;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    // public System.UInt32 parameterArrayCount
    // Size: 0x4
    // Offset: 0x18
    uint parameterArrayCount;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    public:
    // Creating value type constructor for type: ovrMatchmakingCriterion
    constexpr ovrMatchmakingCriterion(::Il2CppString* key_ = {}, Oculus::Platform::MatchmakingCriterionImportance importance_ = {}, System::IntPtr parameterArray_ = {}, uint parameterArrayCount_ = {}) noexcept : key{key_}, importance{importance_}, parameterArray{parameterArray_}, parameterArrayCount{parameterArrayCount_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Get instance field reference: public System.String key_
    ::Il2CppString*& dyn_key_();
    // Get instance field reference: public Oculus.Platform.MatchmakingCriterionImportance importance_
    Oculus::Platform::MatchmakingCriterionImportance& dyn_importance_();
    // Get instance field reference: public System.IntPtr parameterArray
    System::IntPtr& dyn_parameterArray();
    // Get instance field reference: public System.UInt32 parameterArrayCount
    uint& dyn_parameterArrayCount();
    // public System.Void .ctor(System.String key, Oculus.Platform.MatchmakingCriterionImportance importance)
    // Offset: 0x1749DC4
    ovrMatchmakingCriterion(::Il2CppString* key, Oculus::Platform::MatchmakingCriterionImportance importance);
  }; // Oculus.Platform.CAPI/Oculus.Platform.ovrMatchmakingCriterion
  #pragma pack(pop)
  static check_size<sizeof(CAPI::ovrMatchmakingCriterion), 24 + sizeof(uint)> __Oculus_Platform_CAPI_ovrMatchmakingCriterionSizeCheck;
  static_assert(sizeof(CAPI::ovrMatchmakingCriterion) == 0x1C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Platform::CAPI::ovrMatchmakingCriterion::ovrMatchmakingCriterion
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
