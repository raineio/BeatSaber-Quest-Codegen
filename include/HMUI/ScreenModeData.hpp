// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: HMUI
namespace HMUI {
  // Forward declaring type: ScreenModeData
  class ScreenModeData;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::HMUI::ScreenModeData);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::ScreenModeData*, "HMUI", "ScreenModeData");
// Type namespace: HMUI
namespace HMUI {
  // Size: 0x3C
  #pragma pack(push, 1)
  // Autogenerated type: HMUI.ScreenModeData
  // [TokenAttribute] Offset: FFFFFFFF
  class ScreenModeData : public ::Il2CppObject {
    public:
    public:
    // public UnityEngine.Vector3 position
    // Size: 0xC
    // Offset: 0x10
    ::UnityEngine::Vector3 position;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // public UnityEngine.Vector3 rotation
    // Size: 0xC
    // Offset: 0x1C
    ::UnityEngine::Vector3 rotation;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // public System.Single scale
    // Size: 0x4
    // Offset: 0x28
    float scale;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single radius
    // Size: 0x4
    // Offset: 0x2C
    float radius;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Boolean offsetHeightByHeadPos
    // Size: 0x1
    // Offset: 0x30
    bool offsetHeightByHeadPos;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: offsetHeightByHeadPos and: yOffsetRelativeToHead
    char __padding4[0x3] = {};
    // [DrawIfAttribute] Offset: 0x1109398
    // public System.Single yOffsetRelativeToHead
    // Size: 0x4
    // Offset: 0x34
    float yOffsetRelativeToHead;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [DrawIfAttribute] Offset: 0x1109430
    // public System.Single minYPos
    // Size: 0x4
    // Offset: 0x38
    float minYPos;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Get instance field reference: public UnityEngine.Vector3 position
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_position();
    // Get instance field reference: public UnityEngine.Vector3 rotation
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_rotation();
    // Get instance field reference: public System.Single scale
    [[deprecated("Use field access instead!")]] float& dyn_scale();
    // Get instance field reference: public System.Single radius
    [[deprecated("Use field access instead!")]] float& dyn_radius();
    // Get instance field reference: public System.Boolean offsetHeightByHeadPos
    [[deprecated("Use field access instead!")]] bool& dyn_offsetHeightByHeadPos();
    // Get instance field reference: public System.Single yOffsetRelativeToHead
    [[deprecated("Use field access instead!")]] float& dyn_yOffsetRelativeToHead();
    // Get instance field reference: public System.Single minYPos
    [[deprecated("Use field access instead!")]] float& dyn_minYPos();
    // public System.Void .ctor(UnityEngine.Vector3 position, UnityEngine.Vector3 rotation, System.Single scale, System.Single radius, System.Boolean offsetHeightByHeadPos, System.Single yOffsetRelativeToHead, System.Single minYPos)
    // Offset: 0x16F7FC4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ScreenModeData* New_ctor(::UnityEngine::Vector3 position, ::UnityEngine::Vector3 rotation, float scale, float radius, bool offsetHeightByHeadPos, float yOffsetRelativeToHead, float minYPos) {
      static auto ___internal__logger = ::Logger::get().WithContext("::HMUI::ScreenModeData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ScreenModeData*, creationType>(position, rotation, scale, radius, offsetHeightByHeadPos, yOffsetRelativeToHead, minYPos)));
    }
  }; // HMUI.ScreenModeData
  #pragma pack(pop)
  static check_size<sizeof(ScreenModeData), 56 + sizeof(float)> __HMUI_ScreenModeDataSizeCheck;
  static_assert(sizeof(ScreenModeData) == 0x3C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HMUI::ScreenModeData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
