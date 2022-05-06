// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AnimatorStateInfo
  struct AnimatorStateInfo;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AnimatorStateInfo, "UnityEngine", "AnimatorStateInfo");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x24
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.AnimatorStateInfo
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: 105F328
  // [RequiredByNativeCodeAttribute] Offset: 105F328
  struct AnimatorStateInfo/*, public ::System::ValueType*/ {
    public:
    public:
    // private System.Int32 m_Name
    // Size: 0x4
    // Offset: 0x0
    int m_Name;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 m_Path
    // Size: 0x4
    // Offset: 0x4
    int m_Path;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 m_FullPath
    // Size: 0x4
    // Offset: 0x8
    int m_FullPath;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Single m_NormalizedTime
    // Size: 0x4
    // Offset: 0xC
    float m_NormalizedTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single m_Length
    // Size: 0x4
    // Offset: 0x10
    float m_Length;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single m_Speed
    // Size: 0x4
    // Offset: 0x14
    float m_Speed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single m_SpeedMultiplier
    // Size: 0x4
    // Offset: 0x18
    float m_SpeedMultiplier;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Int32 m_Tag
    // Size: 0x4
    // Offset: 0x1C
    int m_Tag;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 m_Loop
    // Size: 0x4
    // Offset: 0x20
    int m_Loop;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: AnimatorStateInfo
    constexpr AnimatorStateInfo(int m_Name_ = {}, int m_Path_ = {}, int m_FullPath_ = {}, float m_NormalizedTime_ = {}, float m_Length_ = {}, float m_Speed_ = {}, float m_SpeedMultiplier_ = {}, int m_Tag_ = {}, int m_Loop_ = {}) noexcept : m_Name{m_Name_}, m_Path{m_Path_}, m_FullPath{m_FullPath_}, m_NormalizedTime{m_NormalizedTime_}, m_Length{m_Length_}, m_Speed{m_Speed_}, m_SpeedMultiplier{m_SpeedMultiplier_}, m_Tag{m_Tag_}, m_Loop{m_Loop_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: private System.Int32 m_Name
    [[deprecated("Use field access instead!")]] int& dyn_m_Name();
    // Get instance field reference: private System.Int32 m_Path
    [[deprecated("Use field access instead!")]] int& dyn_m_Path();
    // Get instance field reference: private System.Int32 m_FullPath
    [[deprecated("Use field access instead!")]] int& dyn_m_FullPath();
    // Get instance field reference: private System.Single m_NormalizedTime
    [[deprecated("Use field access instead!")]] float& dyn_m_NormalizedTime();
    // Get instance field reference: private System.Single m_Length
    [[deprecated("Use field access instead!")]] float& dyn_m_Length();
    // Get instance field reference: private System.Single m_Speed
    [[deprecated("Use field access instead!")]] float& dyn_m_Speed();
    // Get instance field reference: private System.Single m_SpeedMultiplier
    [[deprecated("Use field access instead!")]] float& dyn_m_SpeedMultiplier();
    // Get instance field reference: private System.Int32 m_Tag
    [[deprecated("Use field access instead!")]] int& dyn_m_Tag();
    // Get instance field reference: private System.Int32 m_Loop
    [[deprecated("Use field access instead!")]] int& dyn_m_Loop();
    // public System.Single get_normalizedTime()
    // Offset: 0x2A4EA98
    float get_normalizedTime();
  }; // UnityEngine.AnimatorStateInfo
  #pragma pack(pop)
  static check_size<sizeof(AnimatorStateInfo), 32 + sizeof(int)> __UnityEngine_AnimatorStateInfoSizeCheck;
  static_assert(sizeof(AnimatorStateInfo) == 0x24);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::AnimatorStateInfo::get_normalizedTime
// Il2CppName: get_normalizedTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::AnimatorStateInfo::*)()>(&UnityEngine::AnimatorStateInfo::get_normalizedTime)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AnimatorStateInfo), "get_normalizedTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
