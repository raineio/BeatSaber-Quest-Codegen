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
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
// Including type: UnityEngine.Color32
#include "UnityEngine/Color32.hpp"
// Completed includes
// Type namespace: TMPro
namespace TMPro {
  // Forward declaring type: TMP_Vertex
  struct TMP_Vertex;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(TMPro::TMP_Vertex, "TMPro", "TMP_Vertex");
// Type namespace: TMPro
namespace TMPro {
  // Size: 0x28
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: TMPro.TMP_Vertex
  // [TokenAttribute] Offset: FFFFFFFF
  struct TMP_Vertex/*, public System::ValueType*/ {
    public:
    public:
    // public UnityEngine.Vector3 position
    // Size: 0xC
    // Offset: 0x0
    UnityEngine::Vector3 position;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // public UnityEngine.Vector2 uv
    // Size: 0x8
    // Offset: 0xC
    UnityEngine::Vector2 uv;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector2) == 0x8);
    // public UnityEngine.Vector2 uv2
    // Size: 0x8
    // Offset: 0x14
    UnityEngine::Vector2 uv2;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector2) == 0x8);
    // public UnityEngine.Vector2 uv4
    // Size: 0x8
    // Offset: 0x1C
    UnityEngine::Vector2 uv4;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector2) == 0x8);
    // public UnityEngine.Color32 color
    // Size: 0x4
    // Offset: 0x24
    UnityEngine::Color32 color;
    // Field size check
    static_assert(sizeof(UnityEngine::Color32) == 0x4);
    public:
    // Creating value type constructor for type: TMP_Vertex
    constexpr TMP_Vertex(UnityEngine::Vector3 position_ = {}, UnityEngine::Vector2 uv_ = {}, UnityEngine::Vector2 uv2_ = {}, UnityEngine::Vector2 uv4_ = {}, UnityEngine::Color32 color_ = {}) noexcept : position{position_}, uv{uv_}, uv2{uv2_}, uv4{uv4_}, color{color_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Get instance field reference: public UnityEngine.Vector3 position
    UnityEngine::Vector3& dyn_position();
    // Get instance field reference: public UnityEngine.Vector2 uv
    UnityEngine::Vector2& dyn_uv();
    // Get instance field reference: public UnityEngine.Vector2 uv2
    UnityEngine::Vector2& dyn_uv2();
    // Get instance field reference: public UnityEngine.Vector2 uv4
    UnityEngine::Vector2& dyn_uv4();
    // Get instance field reference: public UnityEngine.Color32 color
    UnityEngine::Color32& dyn_color();
  }; // TMPro.TMP_Vertex
  #pragma pack(pop)
  static check_size<sizeof(TMP_Vertex), 36 + sizeof(UnityEngine::Color32)> __TMPro_TMP_VertexSizeCheck;
  static_assert(sizeof(TMP_Vertex) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
