// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Renderer
  class Renderer;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: LOD
  struct LOD;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::LOD, "UnityEngine", "LOD");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x10
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.LOD
  // [TokenAttribute] Offset: FFFFFFFF
  // [UsedByNativeCodeAttribute] Offset: 10459BC
  struct LOD/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.Single screenRelativeTransitionHeight
    // Size: 0x4
    // Offset: 0x0
    float screenRelativeTransitionHeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single fadeTransitionWidth
    // Size: 0x4
    // Offset: 0x4
    float fadeTransitionWidth;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public UnityEngine.Renderer[] renderers
    // Size: 0x8
    // Offset: 0x8
    ::ArrayW<::UnityEngine::Renderer*> renderers;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Renderer*>) == 0x8);
    public:
    // Creating value type constructor for type: LOD
    constexpr LOD(float screenRelativeTransitionHeight_ = {}, float fadeTransitionWidth_ = {}, ::ArrayW<::UnityEngine::Renderer*> renderers_ = ::ArrayW<::UnityEngine::Renderer*>(static_cast<void*>(nullptr))) noexcept : screenRelativeTransitionHeight{screenRelativeTransitionHeight_}, fadeTransitionWidth{fadeTransitionWidth_}, renderers{renderers_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: i_ValueType
    inline ::System::ValueType* i_ValueType() noexcept {
      return reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public System.Single screenRelativeTransitionHeight
    [[deprecated("Use field access instead!")]] float& dyn_screenRelativeTransitionHeight();
    // Get instance field reference: public System.Single fadeTransitionWidth
    [[deprecated("Use field access instead!")]] float& dyn_fadeTransitionWidth();
    // Get instance field reference: public UnityEngine.Renderer[] renderers
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::Renderer*>& dyn_renderers();
    // public System.Void .ctor(System.Single screenRelativeTransitionHeight, UnityEngine.Renderer[] renderers)
    // Offset: 0x202D030
    LOD(float screenRelativeTransitionHeight, ::ArrayW<::UnityEngine::Renderer*> renderers);
  }; // UnityEngine.LOD
  #pragma pack(pop)
  static check_size<sizeof(LOD), 8 + sizeof(::ArrayW<::UnityEngine::Renderer*>)> __UnityEngine_LODSizeCheck;
  static_assert(sizeof(LOD) == 0x10);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::LOD::LOD
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
