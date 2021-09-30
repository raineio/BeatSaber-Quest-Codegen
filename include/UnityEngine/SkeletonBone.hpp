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
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x38
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.SkeletonBone
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: E8B6E8
  // [NativeTypeAttribute] Offset: E8B6E8
  // [RequiredByNativeCodeAttribute] Offset: E8B6E8
  struct SkeletonBone/*, public System::ValueType*/ {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    private:
    #endif
    // [NativeNameAttribute] Offset: 0xE8C778
    // public System.String name
    // Size: 0x8
    // Offset: 0x0
    ::Il2CppString* name;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // [NativeNameAttribute] Offset: 0xE8C7B0
    // System.String parentName
    // Size: 0x8
    // Offset: 0x8
    ::Il2CppString* parentName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // [NativeNameAttribute] Offset: 0xE8C7E8
    // public UnityEngine.Vector3 position
    // Size: 0xC
    // Offset: 0x10
    UnityEngine::Vector3 position;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // [NativeNameAttribute] Offset: 0xE8C820
    // public UnityEngine.Quaternion rotation
    // Size: 0x10
    // Offset: 0x1C
    UnityEngine::Quaternion rotation;
    // Field size check
    static_assert(sizeof(UnityEngine::Quaternion) == 0x10);
    // [NativeNameAttribute] Offset: 0xE8C858
    // public UnityEngine.Vector3 scale
    // Size: 0xC
    // Offset: 0x2C
    UnityEngine::Vector3 scale;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    public:
    // Creating value type constructor for type: SkeletonBone
    constexpr SkeletonBone(::Il2CppString* name_ = {}, ::Il2CppString* parentName_ = {}, UnityEngine::Vector3 position_ = {}, UnityEngine::Quaternion rotation_ = {}, UnityEngine::Vector3 scale_ = {}) noexcept : name{name_}, parentName{parentName_}, position{position_}, rotation{rotation_}, scale{scale_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Get instance field reference: public System.String name
    ::Il2CppString*& dyn_name();
    // Get instance field reference: System.String parentName
    ::Il2CppString*& dyn_parentName();
    // Get instance field reference: public UnityEngine.Vector3 position
    UnityEngine::Vector3& dyn_position();
    // Get instance field reference: public UnityEngine.Quaternion rotation
    UnityEngine::Quaternion& dyn_rotation();
    // Get instance field reference: public UnityEngine.Vector3 scale
    UnityEngine::Vector3& dyn_scale();
  }; // UnityEngine.SkeletonBone
  #pragma pack(pop)
  static check_size<sizeof(SkeletonBone), 44 + sizeof(UnityEngine::Vector3)> __UnityEngine_SkeletonBoneSizeCheck;
  static_assert(sizeof(SkeletonBone) == 0x38);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::SkeletonBone, "UnityEngine", "SkeletonBone");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
