// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: TMPro.TextAlignmentOptions
#include "TMPro/TextAlignmentOptions.hpp"
// Including type: TMPro.Extents
#include "TMPro/Extents.hpp"
// Completed includes
// Type namespace: TMPro
namespace TMPro {
  // Forward declaring type: TMP_LineInfo
  struct TMP_LineInfo;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(TMPro::TMP_LineInfo, "TMPro", "TMP_LineInfo");
// Type namespace: TMPro
namespace TMPro {
  // Size: 0x5C
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: TMPro.TMP_LineInfo
  // [TokenAttribute] Offset: FFFFFFFF
  struct TMP_LineInfo/*, public System::ValueType*/ {
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
    // System.Int32 controlCharacterCount
    // Size: 0x4
    // Offset: 0x0
    int controlCharacterCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 characterCount
    // Size: 0x4
    // Offset: 0x4
    int characterCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 visibleCharacterCount
    // Size: 0x4
    // Offset: 0x8
    int visibleCharacterCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 spaceCount
    // Size: 0x4
    // Offset: 0xC
    int spaceCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 wordCount
    // Size: 0x4
    // Offset: 0x10
    int wordCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 firstCharacterIndex
    // Size: 0x4
    // Offset: 0x14
    int firstCharacterIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 firstVisibleCharacterIndex
    // Size: 0x4
    // Offset: 0x18
    int firstVisibleCharacterIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 lastCharacterIndex
    // Size: 0x4
    // Offset: 0x1C
    int lastCharacterIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 lastVisibleCharacterIndex
    // Size: 0x4
    // Offset: 0x20
    int lastVisibleCharacterIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Single length
    // Size: 0x4
    // Offset: 0x24
    float length;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single lineHeight
    // Size: 0x4
    // Offset: 0x28
    float lineHeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single ascender
    // Size: 0x4
    // Offset: 0x2C
    float ascender;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single baseline
    // Size: 0x4
    // Offset: 0x30
    float baseline;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single descender
    // Size: 0x4
    // Offset: 0x34
    float descender;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single maxAdvance
    // Size: 0x4
    // Offset: 0x38
    float maxAdvance;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single width
    // Size: 0x4
    // Offset: 0x3C
    float width;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single marginLeft
    // Size: 0x4
    // Offset: 0x40
    float marginLeft;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single marginRight
    // Size: 0x4
    // Offset: 0x44
    float marginRight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public TMPro.TextAlignmentOptions alignment
    // Size: 0x4
    // Offset: 0x48
    TMPro::TextAlignmentOptions alignment;
    // Field size check
    static_assert(sizeof(TMPro::TextAlignmentOptions) == 0x4);
    // public TMPro.Extents lineExtents
    // Size: 0x10
    // Offset: 0x4C
    TMPro::Extents lineExtents;
    // Field size check
    static_assert(sizeof(TMPro::Extents) == 0x10);
    public:
    // Creating value type constructor for type: TMP_LineInfo
    constexpr TMP_LineInfo(int controlCharacterCount_ = {}, int characterCount_ = {}, int visibleCharacterCount_ = {}, int spaceCount_ = {}, int wordCount_ = {}, int firstCharacterIndex_ = {}, int firstVisibleCharacterIndex_ = {}, int lastCharacterIndex_ = {}, int lastVisibleCharacterIndex_ = {}, float length_ = {}, float lineHeight_ = {}, float ascender_ = {}, float baseline_ = {}, float descender_ = {}, float maxAdvance_ = {}, float width_ = {}, float marginLeft_ = {}, float marginRight_ = {}, TMPro::TextAlignmentOptions alignment_ = {}, TMPro::Extents lineExtents_ = {}) noexcept : controlCharacterCount{controlCharacterCount_}, characterCount{characterCount_}, visibleCharacterCount{visibleCharacterCount_}, spaceCount{spaceCount_}, wordCount{wordCount_}, firstCharacterIndex{firstCharacterIndex_}, firstVisibleCharacterIndex{firstVisibleCharacterIndex_}, lastCharacterIndex{lastCharacterIndex_}, lastVisibleCharacterIndex{lastVisibleCharacterIndex_}, length{length_}, lineHeight{lineHeight_}, ascender{ascender_}, baseline{baseline_}, descender{descender_}, maxAdvance{maxAdvance_}, width{width_}, marginLeft{marginLeft_}, marginRight{marginRight_}, alignment{alignment_}, lineExtents{lineExtents_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Get instance field reference: System.Int32 controlCharacterCount
    int& dyn_controlCharacterCount();
    // Get instance field reference: public System.Int32 characterCount
    int& dyn_characterCount();
    // Get instance field reference: public System.Int32 visibleCharacterCount
    int& dyn_visibleCharacterCount();
    // Get instance field reference: public System.Int32 spaceCount
    int& dyn_spaceCount();
    // Get instance field reference: public System.Int32 wordCount
    int& dyn_wordCount();
    // Get instance field reference: public System.Int32 firstCharacterIndex
    int& dyn_firstCharacterIndex();
    // Get instance field reference: public System.Int32 firstVisibleCharacterIndex
    int& dyn_firstVisibleCharacterIndex();
    // Get instance field reference: public System.Int32 lastCharacterIndex
    int& dyn_lastCharacterIndex();
    // Get instance field reference: public System.Int32 lastVisibleCharacterIndex
    int& dyn_lastVisibleCharacterIndex();
    // Get instance field reference: public System.Single length
    float& dyn_length();
    // Get instance field reference: public System.Single lineHeight
    float& dyn_lineHeight();
    // Get instance field reference: public System.Single ascender
    float& dyn_ascender();
    // Get instance field reference: public System.Single baseline
    float& dyn_baseline();
    // Get instance field reference: public System.Single descender
    float& dyn_descender();
    // Get instance field reference: public System.Single maxAdvance
    float& dyn_maxAdvance();
    // Get instance field reference: public System.Single width
    float& dyn_width();
    // Get instance field reference: public System.Single marginLeft
    float& dyn_marginLeft();
    // Get instance field reference: public System.Single marginRight
    float& dyn_marginRight();
    // Get instance field reference: public TMPro.TextAlignmentOptions alignment
    TMPro::TextAlignmentOptions& dyn_alignment();
    // Get instance field reference: public TMPro.Extents lineExtents
    TMPro::Extents& dyn_lineExtents();
  }; // TMPro.TMP_LineInfo
  #pragma pack(pop)
  static check_size<sizeof(TMP_LineInfo), 76 + sizeof(TMPro::Extents)> __TMPro_TMP_LineInfoSizeCheck;
  static_assert(sizeof(TMP_LineInfo) == 0x5C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
