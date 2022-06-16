// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: TMPro.CaretPosition
#include "TMPro/CaretPosition.hpp"
// Completed includes
// Type namespace: TMPro
namespace TMPro {
  // Forward declaring type: CaretInfo
  struct CaretInfo;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::TMPro::CaretInfo, "TMPro", "CaretInfo");
// Type namespace: TMPro
namespace TMPro {
  // Size: 0x8
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: TMPro.CaretInfo
  // [TokenAttribute] Offset: FFFFFFFF
  struct CaretInfo/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.Int32 index
    // Size: 0x4
    // Offset: 0x0
    int index;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public TMPro.CaretPosition position
    // Size: 0x4
    // Offset: 0x4
    ::TMPro::CaretPosition position;
    // Field size check
    static_assert(sizeof(::TMPro::CaretPosition) == 0x4);
    public:
    // Creating value type constructor for type: CaretInfo
    constexpr CaretInfo(int index_ = {}, ::TMPro::CaretPosition position_ = {}) noexcept : index{index_}, position{position_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: i_ValueType
    inline ::System::ValueType* i_ValueType() noexcept {
      return reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public System.Int32 index
    [[deprecated("Use field access instead!")]] int& dyn_index();
    // Get instance field reference: public TMPro.CaretPosition position
    [[deprecated("Use field access instead!")]] ::TMPro::CaretPosition& dyn_position();
    // public System.Void .ctor(System.Int32 index, TMPro.CaretPosition position)
    // Offset: 0x1429354
    // ABORTED: conflicts with another method.  CaretInfo(int index, ::TMPro::CaretPosition position);
  }; // TMPro.CaretInfo
  #pragma pack(pop)
  static check_size<sizeof(CaretInfo), 4 + sizeof(::TMPro::CaretPosition)> __TMPro_CaretInfoSizeCheck;
  static_assert(sizeof(CaretInfo) == 0x8);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: TMPro::CaretInfo::CaretInfo
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
