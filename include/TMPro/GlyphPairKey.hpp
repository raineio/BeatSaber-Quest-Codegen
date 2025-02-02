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
// Begin forward declares
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TMP_GlyphPairAdjustmentRecord
  class TMP_GlyphPairAdjustmentRecord;
}
// Completed forward declares
// Type namespace: TMPro
namespace TMPro {
  // Forward declaring type: GlyphPairKey
  struct GlyphPairKey;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::TMPro::GlyphPairKey, "TMPro", "GlyphPairKey");
// Type namespace: TMPro
namespace TMPro {
  // Size: 0x10
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: TMPro.GlyphPairKey
  // [TokenAttribute] Offset: FFFFFFFF
  struct GlyphPairKey/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.UInt32 firstGlyphIndex
    // Size: 0x4
    // Offset: 0x0
    uint firstGlyphIndex;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // public System.UInt32 secondGlyphIndex
    // Size: 0x4
    // Offset: 0x4
    uint secondGlyphIndex;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // public System.Int64 key
    // Size: 0x8
    // Offset: 0x8
    int64_t key;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    public:
    // Creating value type constructor for type: GlyphPairKey
    constexpr GlyphPairKey(uint firstGlyphIndex_ = {}, uint secondGlyphIndex_ = {}, int64_t key_ = {}) noexcept : firstGlyphIndex{firstGlyphIndex_}, secondGlyphIndex{secondGlyphIndex_}, key{key_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: i_ValueType
    inline ::System::ValueType* i_ValueType() noexcept {
      return reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public System.UInt32 firstGlyphIndex
    [[deprecated("Use field access instead!")]] uint& dyn_firstGlyphIndex();
    // Get instance field reference: public System.UInt32 secondGlyphIndex
    [[deprecated("Use field access instead!")]] uint& dyn_secondGlyphIndex();
    // Get instance field reference: public System.Int64 key
    [[deprecated("Use field access instead!")]] int64_t& dyn_key();
    // public System.Void .ctor(System.UInt32 firstGlyphIndex, System.UInt32 secondGlyphIndex)
    // Offset: 0x14A53F0
    GlyphPairKey(uint firstGlyphIndex, uint secondGlyphIndex);
    // System.Void .ctor(TMPro.TMP_GlyphPairAdjustmentRecord record)
    // Offset: 0x14A5404
    GlyphPairKey(::TMPro::TMP_GlyphPairAdjustmentRecord* record);
  }; // TMPro.GlyphPairKey
  #pragma pack(pop)
  static check_size<sizeof(GlyphPairKey), 8 + sizeof(int64_t)> __TMPro_GlyphPairKeySizeCheck;
  static_assert(sizeof(GlyphPairKey) == 0x10);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: TMPro::GlyphPairKey::GlyphPairKey
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: TMPro::GlyphPairKey::GlyphPairKey
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
