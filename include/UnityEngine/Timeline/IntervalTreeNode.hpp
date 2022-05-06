// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include <stdint.h>
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Type namespace: UnityEngine.Timeline
namespace UnityEngine::Timeline {
  // Forward declaring type: IntervalTreeNode
  struct IntervalTreeNode;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::IntervalTreeNode, "UnityEngine.Timeline", "IntervalTreeNode");
// Type namespace: UnityEngine.Timeline
namespace UnityEngine::Timeline {
  // Size: 0x18
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.Timeline.IntervalTreeNode
  // [TokenAttribute] Offset: FFFFFFFF
  struct IntervalTreeNode/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.Int64 center
    // Size: 0x8
    // Offset: 0x0
    int64_t center;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // public System.Int32 first
    // Size: 0x4
    // Offset: 0x8
    int first;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 last
    // Size: 0x4
    // Offset: 0xC
    int last;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 left
    // Size: 0x4
    // Offset: 0x10
    int left;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 right
    // Size: 0x4
    // Offset: 0x14
    int right;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: IntervalTreeNode
    constexpr IntervalTreeNode(int64_t center_ = {}, int first_ = {}, int last_ = {}, int left_ = {}, int right_ = {}) noexcept : center{center_}, first{first_}, last{last_}, left{left_}, right{right_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public System.Int64 center
    [[deprecated("Use field access instead!")]] int64_t& dyn_center();
    // Get instance field reference: public System.Int32 first
    [[deprecated("Use field access instead!")]] int& dyn_first();
    // Get instance field reference: public System.Int32 last
    [[deprecated("Use field access instead!")]] int& dyn_last();
    // Get instance field reference: public System.Int32 left
    [[deprecated("Use field access instead!")]] int& dyn_left();
    // Get instance field reference: public System.Int32 right
    [[deprecated("Use field access instead!")]] int& dyn_right();
  }; // UnityEngine.Timeline.IntervalTreeNode
  #pragma pack(pop)
  static check_size<sizeof(IntervalTreeNode), 20 + sizeof(int)> __UnityEngine_Timeline_IntervalTreeNodeSizeCheck;
  static_assert(sizeof(IntervalTreeNode) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
