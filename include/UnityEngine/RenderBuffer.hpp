// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: RenderBuffer
  struct RenderBuffer;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::RenderBuffer, "UnityEngine", "RenderBuffer");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x10
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.RenderBuffer
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: 104444C
  struct RenderBuffer/*, public ::System::ValueType*/ {
    public:
    public:
    // System.Int32 m_RenderTextureInstanceID
    // Size: 0x4
    // Offset: 0x0
    int m_RenderTextureInstanceID;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: m_RenderTextureInstanceID and: m_BufferPtr
    char __padding0[0x4] = {};
    // System.IntPtr m_BufferPtr
    // Size: 0x8
    // Offset: 0x8
    ::System::IntPtr m_BufferPtr;
    // Field size check
    static_assert(sizeof(::System::IntPtr) == 0x8);
    public:
    // Creating value type constructor for type: RenderBuffer
    constexpr RenderBuffer(int m_RenderTextureInstanceID_ = {}, ::System::IntPtr m_BufferPtr_ = {}) noexcept : m_RenderTextureInstanceID{m_RenderTextureInstanceID_}, m_BufferPtr{m_BufferPtr_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: System.Int32 m_RenderTextureInstanceID
    [[deprecated("Use field access instead!")]] int& dyn_m_RenderTextureInstanceID();
    // Get instance field reference: System.IntPtr m_BufferPtr
    [[deprecated("Use field access instead!")]] ::System::IntPtr& dyn_m_BufferPtr();
  }; // UnityEngine.RenderBuffer
  #pragma pack(pop)
  static check_size<sizeof(RenderBuffer), 8 + sizeof(::System::IntPtr)> __UnityEngine_RenderBufferSizeCheck;
  static_assert(sizeof(RenderBuffer) == 0x10);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
