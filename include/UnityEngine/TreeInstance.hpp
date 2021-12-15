// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Including type: UnityEngine.Color32
#include "UnityEngine/Color32.hpp"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: TreeInstance
  struct TreeInstance;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TreeInstance, "UnityEngine", "TreeInstance");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x28
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.TreeInstance
  // [TokenAttribute] Offset: FFFFFFFF
  // [UsedByNativeCodeAttribute] Offset: F0D480
  struct TreeInstance/*, public System::ValueType*/ {
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
    // public UnityEngine.Vector3 position
    // Size: 0xC
    // Offset: 0x0
    UnityEngine::Vector3 position;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // public System.Single widthScale
    // Size: 0x4
    // Offset: 0xC
    float widthScale;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single heightScale
    // Size: 0x4
    // Offset: 0x10
    float heightScale;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single rotation
    // Size: 0x4
    // Offset: 0x14
    float rotation;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public UnityEngine.Color32 color
    // Size: 0x4
    // Offset: 0x18
    UnityEngine::Color32 color;
    // Field size check
    static_assert(sizeof(UnityEngine::Color32) == 0x4);
    // public UnityEngine.Color32 lightmapColor
    // Size: 0x4
    // Offset: 0x1C
    UnityEngine::Color32 lightmapColor;
    // Field size check
    static_assert(sizeof(UnityEngine::Color32) == 0x4);
    // public System.Int32 prototypeIndex
    // Size: 0x4
    // Offset: 0x20
    int prototypeIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Single temporaryDistance
    // Size: 0x4
    // Offset: 0x24
    float temporaryDistance;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Creating value type constructor for type: TreeInstance
    constexpr TreeInstance(UnityEngine::Vector3 position_ = {}, float widthScale_ = {}, float heightScale_ = {}, float rotation_ = {}, UnityEngine::Color32 color_ = {}, UnityEngine::Color32 lightmapColor_ = {}, int prototypeIndex_ = {}, float temporaryDistance_ = {}) noexcept : position{position_}, widthScale{widthScale_}, heightScale{heightScale_}, rotation{rotation_}, color{color_}, lightmapColor{lightmapColor_}, prototypeIndex{prototypeIndex_}, temporaryDistance{temporaryDistance_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Get instance field reference: public UnityEngine.Vector3 position
    UnityEngine::Vector3& dyn_position();
    // Get instance field reference: public System.Single widthScale
    float& dyn_widthScale();
    // Get instance field reference: public System.Single heightScale
    float& dyn_heightScale();
    // Get instance field reference: public System.Single rotation
    float& dyn_rotation();
    // Get instance field reference: public UnityEngine.Color32 color
    UnityEngine::Color32& dyn_color();
    // Get instance field reference: public UnityEngine.Color32 lightmapColor
    UnityEngine::Color32& dyn_lightmapColor();
    // Get instance field reference: public System.Int32 prototypeIndex
    int& dyn_prototypeIndex();
    // Get instance field reference: System.Single temporaryDistance
    float& dyn_temporaryDistance();
  }; // UnityEngine.TreeInstance
  #pragma pack(pop)
  static check_size<sizeof(TreeInstance), 36 + sizeof(float)> __UnityEngine_TreeInstanceSizeCheck;
  static_assert(sizeof(TreeInstance) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
