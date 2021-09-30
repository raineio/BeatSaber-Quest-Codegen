// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x8
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.AnimatorClipInfo
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: E8B38C
  // [NativeHeaderAttribute] Offset: E8B38C
  // [UsedByNativeCodeAttribute] Offset: E8B38C
  struct AnimatorClipInfo/*, public System::ValueType*/ {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    private:
    #endif
    // private System.Int32 m_ClipInstanceID
    // Size: 0x4
    // Offset: 0x0
    int m_ClipInstanceID;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Single m_Weight
    // Size: 0x4
    // Offset: 0x4
    float m_Weight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Creating value type constructor for type: AnimatorClipInfo
    constexpr AnimatorClipInfo(int m_ClipInstanceID_ = {}, float m_Weight_ = {}) noexcept : m_ClipInstanceID{m_ClipInstanceID_}, m_Weight{m_Weight_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Get instance field reference: private System.Int32 m_ClipInstanceID
    int& dyn_m_ClipInstanceID();
    // Get instance field reference: private System.Single m_Weight
    float& dyn_m_Weight();
  }; // UnityEngine.AnimatorClipInfo
  #pragma pack(pop)
  static check_size<sizeof(AnimatorClipInfo), 4 + sizeof(float)> __UnityEngine_AnimatorClipInfoSizeCheck;
  static_assert(sizeof(AnimatorClipInfo) == 0x8);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::AnimatorClipInfo, "UnityEngine", "AnimatorClipInfo");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
