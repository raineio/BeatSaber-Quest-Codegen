// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Including type: UnityEngine.Quaternion
#include "UnityEngine/Quaternion.hpp"
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x28
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.HumanPose
  // [TokenAttribute] Offset: FFFFFFFF
  struct HumanPose/*, public System::ValueType*/ {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    private:
    #endif
    // public UnityEngine.Vector3 bodyPosition
    // Size: 0xC
    // Offset: 0x0
    UnityEngine::Vector3 bodyPosition;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // public UnityEngine.Quaternion bodyRotation
    // Size: 0x10
    // Offset: 0xC
    UnityEngine::Quaternion bodyRotation;
    // Field size check
    static_assert(sizeof(UnityEngine::Quaternion) == 0x10);
    // Padding between fields: bodyRotation and: muscles
    char __padding1[0x4] = {};
    // public System.Single[] muscles
    // Size: 0x8
    // Offset: 0x20
    ::ArrayW<float> muscles;
    // Field size check
    static_assert(sizeof(::ArrayW<float>) == 0x8);
    public:
    // Creating value type constructor for type: HumanPose
    constexpr HumanPose(UnityEngine::Vector3 bodyPosition_ = {}, UnityEngine::Quaternion bodyRotation_ = {}, ::ArrayW<float> muscles_ = ::ArrayW<float>(nullptr)) noexcept : bodyPosition{bodyPosition_}, bodyRotation{bodyRotation_}, muscles{muscles_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Get instance field reference: public UnityEngine.Vector3 bodyPosition
    UnityEngine::Vector3& dyn_bodyPosition();
    // Get instance field reference: public UnityEngine.Quaternion bodyRotation
    UnityEngine::Quaternion& dyn_bodyRotation();
    // Get instance field reference: public System.Single[] muscles
    ::ArrayW<float>& dyn_muscles();
    // System.Void Init()
    // Offset: 0x2597E38
    void Init();
  }; // UnityEngine.HumanPose
  #pragma pack(pop)
  static check_size<sizeof(HumanPose), 32 + sizeof(::ArrayW<float>)> __UnityEngine_HumanPoseSizeCheck;
  static_assert(sizeof(HumanPose) == 0x28);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::HumanPose, "UnityEngine", "HumanPose");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::HumanPose::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::HumanPose::*)()>(&UnityEngine::HumanPose::Init)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::HumanPose), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
