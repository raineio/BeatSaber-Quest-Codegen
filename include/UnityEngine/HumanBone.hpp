// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.HumanLimit
#include "UnityEngine/HumanLimit.hpp"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: HumanBone
  struct HumanBone;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::HumanBone, "UnityEngine", "HumanBone");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x3C
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.HumanBone
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeTypeAttribute] Offset: ECDE14
  // [NativeHeaderAttribute] Offset: ECDE14
  // [RequiredByNativeCodeAttribute] Offset: ECDE14
  struct HumanBone/*, public System::ValueType*/ {
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
    // private System.String m_BoneName
    // Size: 0x8
    // Offset: 0x0
    ::Il2CppString* m_BoneName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String m_HumanName
    // Size: 0x8
    // Offset: 0x8
    ::Il2CppString* m_HumanName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // [NativeNameAttribute] Offset: 0xECEEC0
    // public UnityEngine.HumanLimit limit
    // Size: 0x2C
    // Offset: 0x10
    UnityEngine::HumanLimit limit;
    // Field size check
    static_assert(sizeof(UnityEngine::HumanLimit) == 0x2C);
    public:
    // Creating value type constructor for type: HumanBone
    constexpr HumanBone(::Il2CppString* m_BoneName_ = {}, ::Il2CppString* m_HumanName_ = {}, UnityEngine::HumanLimit limit_ = {}) noexcept : m_BoneName{m_BoneName_}, m_HumanName{m_HumanName_}, limit{limit_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Get instance field reference: private System.String m_BoneName
    ::Il2CppString*& dyn_m_BoneName();
    // Get instance field reference: private System.String m_HumanName
    ::Il2CppString*& dyn_m_HumanName();
    // Get instance field reference: public UnityEngine.HumanLimit limit
    UnityEngine::HumanLimit& dyn_limit();
  }; // UnityEngine.HumanBone
  #pragma pack(pop)
  static check_size<sizeof(HumanBone), 16 + sizeof(UnityEngine::HumanLimit)> __UnityEngine_HumanBoneSizeCheck;
  static_assert(sizeof(HumanBone) == 0x3C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
