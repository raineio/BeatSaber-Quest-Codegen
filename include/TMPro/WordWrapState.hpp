// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: TMPro.FontStyles
#include "TMPro/FontStyles.hpp"
// Including type: TMPro.TMP_LineInfo
#include "TMPro/TMP_LineInfo.hpp"
// Including type: UnityEngine.Color32
#include "UnityEngine/Color32.hpp"
// Including type: TMPro.TMP_FontStyleStack
#include "TMPro/TMP_FontStyleStack.hpp"
// Including type: TMPro.TMP_RichTextTagStack`1
#include "TMPro/TMP_RichTextTagStack_1.hpp"
// Including type: TMPro.FontWeight
#include "TMPro/FontWeight.hpp"
// Including type: TMPro.MaterialReference
#include "TMPro/MaterialReference.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TMP_TextInfo
  class TMP_TextInfo;
  // Forward declaring type: TMP_ColorGradient
  class TMP_ColorGradient;
  // Forward declaring type: TMP_FontAsset
  class TMP_FontAsset;
  // Forward declaring type: TMP_SpriteAsset
  class TMP_SpriteAsset;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Material
  class Material;
}
// Completed forward declares
// Type namespace: TMPro
namespace TMPro {
  // Forward declaring type: WordWrapState
  struct WordWrapState;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(TMPro::WordWrapState, "TMPro", "WordWrapState");
// Type namespace: TMPro
namespace TMPro {
  // WARNING Size may be invalid!
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: TMPro.WordWrapState
  // [TokenAttribute] Offset: FFFFFFFF
  struct WordWrapState/*, public System::ValueType*/ {
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
    // public System.Int32 previous_WordBreak
    // Size: 0x4
    // Offset: 0x0
    int previous_WordBreak;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 total_CharacterCount
    // Size: 0x4
    // Offset: 0x4
    int total_CharacterCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 visible_CharacterCount
    // Size: 0x4
    // Offset: 0x8
    int visible_CharacterCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 visible_SpriteCount
    // Size: 0x4
    // Offset: 0xC
    int visible_SpriteCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 visible_LinkCount
    // Size: 0x4
    // Offset: 0x10
    int visible_LinkCount;
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
    // public System.Int32 lastVisibleCharIndex
    // Size: 0x4
    // Offset: 0x20
    int lastVisibleCharIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 lineNumber
    // Size: 0x4
    // Offset: 0x24
    int lineNumber;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Single maxCapHeight
    // Size: 0x4
    // Offset: 0x28
    float maxCapHeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single maxAscender
    // Size: 0x4
    // Offset: 0x2C
    float maxAscender;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single maxDescender
    // Size: 0x4
    // Offset: 0x30
    float maxDescender;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single maxLineAscender
    // Size: 0x4
    // Offset: 0x34
    float maxLineAscender;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single maxLineDescender
    // Size: 0x4
    // Offset: 0x38
    float maxLineDescender;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single previousLineAscender
    // Size: 0x4
    // Offset: 0x3C
    float previousLineAscender;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single xAdvance
    // Size: 0x4
    // Offset: 0x40
    float xAdvance;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single preferredWidth
    // Size: 0x4
    // Offset: 0x44
    float preferredWidth;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single preferredHeight
    // Size: 0x4
    // Offset: 0x48
    float preferredHeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single previousLineScale
    // Size: 0x4
    // Offset: 0x4C
    float previousLineScale;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Int32 wordCount
    // Size: 0x4
    // Offset: 0x50
    int wordCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public TMPro.FontStyles fontStyle
    // Size: 0x4
    // Offset: 0x54
    TMPro::FontStyles fontStyle;
    // Field size check
    static_assert(sizeof(TMPro::FontStyles) == 0x4);
    // public System.Single fontScale
    // Size: 0x4
    // Offset: 0x58
    float fontScale;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single fontScaleMultiplier
    // Size: 0x4
    // Offset: 0x5C
    float fontScaleMultiplier;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single currentFontSize
    // Size: 0x4
    // Offset: 0x60
    float currentFontSize;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single baselineOffset
    // Size: 0x4
    // Offset: 0x64
    float baselineOffset;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single lineOffset
    // Size: 0x4
    // Offset: 0x68
    float lineOffset;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public TMPro.TMP_TextInfo textInfo
    // Size: 0x8
    // Offset: 0x70
    TMPro::TMP_TextInfo* textInfo;
    // Field size check
    static_assert(sizeof(TMPro::TMP_TextInfo*) == 0x8);
    // public TMPro.TMP_LineInfo lineInfo
    // Size: 0x5C
    // Offset: 0x78
    TMPro::TMP_LineInfo lineInfo;
    // Field size check
    static_assert(sizeof(TMPro::TMP_LineInfo) == 0x5C);
    // public UnityEngine.Color32 vertexColor
    // Size: 0x4
    // Offset: 0xD4
    UnityEngine::Color32 vertexColor;
    // Field size check
    static_assert(sizeof(UnityEngine::Color32) == 0x4);
    // public UnityEngine.Color32 underlineColor
    // Size: 0x4
    // Offset: 0xD8
    UnityEngine::Color32 underlineColor;
    // Field size check
    static_assert(sizeof(UnityEngine::Color32) == 0x4);
    // public UnityEngine.Color32 strikethroughColor
    // Size: 0x4
    // Offset: 0xDC
    UnityEngine::Color32 strikethroughColor;
    // Field size check
    static_assert(sizeof(UnityEngine::Color32) == 0x4);
    // public UnityEngine.Color32 highlightColor
    // Size: 0x4
    // Offset: 0xE0
    UnityEngine::Color32 highlightColor;
    // Field size check
    static_assert(sizeof(UnityEngine::Color32) == 0x4);
    // public TMPro.TMP_FontStyleStack basicStyleStack
    // Size: 0xA
    // Offset: 0xE4
    TMPro::TMP_FontStyleStack basicStyleStack;
    // Field size check
    static_assert(sizeof(TMPro::TMP_FontStyleStack) == 0xA);
    // public TMPro.TMP_RichTextTagStack`1<UnityEngine.Color32> colorStack
    // Size: 0xFFFFFFFF
    // Offset: 0xF0
    TMPro::TMP_RichTextTagStack_1<UnityEngine::Color32> colorStack;
    // public TMPro.TMP_RichTextTagStack`1<UnityEngine.Color32> underlineColorStack
    // Size: 0xFFFFFFFF
    // Offset: 0x108
    TMPro::TMP_RichTextTagStack_1<UnityEngine::Color32> underlineColorStack;
    // public TMPro.TMP_RichTextTagStack`1<UnityEngine.Color32> strikethroughColorStack
    // Size: 0xFFFFFFFF
    // Offset: 0x120
    TMPro::TMP_RichTextTagStack_1<UnityEngine::Color32> strikethroughColorStack;
    // public TMPro.TMP_RichTextTagStack`1<UnityEngine.Color32> highlightColorStack
    // Size: 0xFFFFFFFF
    // Offset: 0x138
    TMPro::TMP_RichTextTagStack_1<UnityEngine::Color32> highlightColorStack;
    // public TMPro.TMP_RichTextTagStack`1<TMPro.TMP_ColorGradient> colorGradientStack
    // Size: 0xFFFFFFFF
    // Offset: 0x150
    TMPro::TMP_RichTextTagStack_1<TMPro::TMP_ColorGradient*> colorGradientStack;
    // public TMPro.TMP_RichTextTagStack`1<System.Single> sizeStack
    // Size: 0xFFFFFFFF
    // Offset: 0x168
    TMPro::TMP_RichTextTagStack_1<float> sizeStack;
    // public TMPro.TMP_RichTextTagStack`1<System.Single> indentStack
    // Size: 0xFFFFFFFF
    // Offset: 0x180
    TMPro::TMP_RichTextTagStack_1<float> indentStack;
    // public TMPro.TMP_RichTextTagStack`1<TMPro.FontWeight> fontWeightStack
    // Size: 0xFFFFFFFF
    // Offset: 0x198
    TMPro::TMP_RichTextTagStack_1<TMPro::FontWeight> fontWeightStack;
    // public TMPro.TMP_RichTextTagStack`1<System.Int32> styleStack
    // Size: 0xFFFFFFFF
    // Offset: 0x1B0
    TMPro::TMP_RichTextTagStack_1<int> styleStack;
    // public TMPro.TMP_RichTextTagStack`1<System.Single> baselineStack
    // Size: 0xFFFFFFFF
    // Offset: 0x1C8
    TMPro::TMP_RichTextTagStack_1<float> baselineStack;
    // public TMPro.TMP_RichTextTagStack`1<System.Int32> actionStack
    // Size: 0xFFFFFFFF
    // Offset: 0x1E0
    TMPro::TMP_RichTextTagStack_1<int> actionStack;
    // public TMPro.TMP_RichTextTagStack`1<TMPro.MaterialReference> materialReferenceStack
    // Size: 0xFFFFFFFF
    // Offset: 0x1F8
    TMPro::TMP_RichTextTagStack_1<TMPro::MaterialReference> materialReferenceStack;
    // public TMPro.TMP_RichTextTagStack`1<TMPro.TextAlignmentOptions> lineJustificationStack
    // Size: 0xFFFFFFFF
    // Offset: 0x240
    TMPro::TMP_RichTextTagStack_1<TMPro::TextAlignmentOptions> lineJustificationStack;
    // public System.Int32 spriteAnimationID
    // Size: 0x4
    // Offset: 0x258
    int spriteAnimationID;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public TMPro.TMP_FontAsset currentFontAsset
    // Size: 0x8
    // Offset: 0x260
    TMPro::TMP_FontAsset* currentFontAsset;
    // Field size check
    static_assert(sizeof(TMPro::TMP_FontAsset*) == 0x8);
    // public TMPro.TMP_SpriteAsset currentSpriteAsset
    // Size: 0x8
    // Offset: 0x268
    TMPro::TMP_SpriteAsset* currentSpriteAsset;
    // Field size check
    static_assert(sizeof(TMPro::TMP_SpriteAsset*) == 0x8);
    // public UnityEngine.Material currentMaterial
    // Size: 0x8
    // Offset: 0x270
    UnityEngine::Material* currentMaterial;
    // Field size check
    static_assert(sizeof(UnityEngine::Material*) == 0x8);
    // public System.Int32 currentMaterialIndex
    // Size: 0x4
    // Offset: 0x278
    int currentMaterialIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public TMPro.Extents meshExtents
    // Size: 0x10
    // Offset: 0x27C
    TMPro::Extents meshExtents;
    // Field size check
    static_assert(sizeof(TMPro::Extents) == 0x10);
    // public System.Boolean tagNoParsing
    // Size: 0x1
    // Offset: 0x28C
    bool tagNoParsing;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean isNonBreakingSpace
    // Size: 0x1
    // Offset: 0x28D
    bool isNonBreakingSpace;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating value type constructor for type: WordWrapState
    constexpr WordWrapState(int previous_WordBreak_ = {}, int total_CharacterCount_ = {}, int visible_CharacterCount_ = {}, int visible_SpriteCount_ = {}, int visible_LinkCount_ = {}, int firstCharacterIndex_ = {}, int firstVisibleCharacterIndex_ = {}, int lastCharacterIndex_ = {}, int lastVisibleCharIndex_ = {}, int lineNumber_ = {}, float maxCapHeight_ = {}, float maxAscender_ = {}, float maxDescender_ = {}, float maxLineAscender_ = {}, float maxLineDescender_ = {}, float previousLineAscender_ = {}, float xAdvance_ = {}, float preferredWidth_ = {}, float preferredHeight_ = {}, float previousLineScale_ = {}, int wordCount_ = {}, TMPro::FontStyles fontStyle_ = {}, float fontScale_ = {}, float fontScaleMultiplier_ = {}, float currentFontSize_ = {}, float baselineOffset_ = {}, float lineOffset_ = {}, TMPro::TMP_TextInfo* textInfo_ = {}, TMPro::TMP_LineInfo lineInfo_ = {}, UnityEngine::Color32 vertexColor_ = {}, UnityEngine::Color32 underlineColor_ = {}, UnityEngine::Color32 strikethroughColor_ = {}, UnityEngine::Color32 highlightColor_ = {}, TMPro::TMP_FontStyleStack basicStyleStack_ = {}, TMPro::TMP_RichTextTagStack_1<UnityEngine::Color32> colorStack_ = {}, TMPro::TMP_RichTextTagStack_1<UnityEngine::Color32> underlineColorStack_ = {}, TMPro::TMP_RichTextTagStack_1<UnityEngine::Color32> strikethroughColorStack_ = {}, TMPro::TMP_RichTextTagStack_1<UnityEngine::Color32> highlightColorStack_ = {}, TMPro::TMP_RichTextTagStack_1<TMPro::TMP_ColorGradient*> colorGradientStack_ = {}, TMPro::TMP_RichTextTagStack_1<float> sizeStack_ = {}, TMPro::TMP_RichTextTagStack_1<float> indentStack_ = {}, TMPro::TMP_RichTextTagStack_1<TMPro::FontWeight> fontWeightStack_ = {}, TMPro::TMP_RichTextTagStack_1<int> styleStack_ = {}, TMPro::TMP_RichTextTagStack_1<float> baselineStack_ = {}, TMPro::TMP_RichTextTagStack_1<int> actionStack_ = {}, TMPro::TMP_RichTextTagStack_1<TMPro::MaterialReference> materialReferenceStack_ = {}, TMPro::TMP_RichTextTagStack_1<TMPro::TextAlignmentOptions> lineJustificationStack_ = {}, int spriteAnimationID_ = {}, TMPro::TMP_FontAsset* currentFontAsset_ = {}, TMPro::TMP_SpriteAsset* currentSpriteAsset_ = {}, UnityEngine::Material* currentMaterial_ = {}, int currentMaterialIndex_ = {}, TMPro::Extents meshExtents_ = {}, bool tagNoParsing_ = {}, bool isNonBreakingSpace_ = {}) noexcept : previous_WordBreak{previous_WordBreak_}, total_CharacterCount{total_CharacterCount_}, visible_CharacterCount{visible_CharacterCount_}, visible_SpriteCount{visible_SpriteCount_}, visible_LinkCount{visible_LinkCount_}, firstCharacterIndex{firstCharacterIndex_}, firstVisibleCharacterIndex{firstVisibleCharacterIndex_}, lastCharacterIndex{lastCharacterIndex_}, lastVisibleCharIndex{lastVisibleCharIndex_}, lineNumber{lineNumber_}, maxCapHeight{maxCapHeight_}, maxAscender{maxAscender_}, maxDescender{maxDescender_}, maxLineAscender{maxLineAscender_}, maxLineDescender{maxLineDescender_}, previousLineAscender{previousLineAscender_}, xAdvance{xAdvance_}, preferredWidth{preferredWidth_}, preferredHeight{preferredHeight_}, previousLineScale{previousLineScale_}, wordCount{wordCount_}, fontStyle{fontStyle_}, fontScale{fontScale_}, fontScaleMultiplier{fontScaleMultiplier_}, currentFontSize{currentFontSize_}, baselineOffset{baselineOffset_}, lineOffset{lineOffset_}, textInfo{textInfo_}, lineInfo{lineInfo_}, vertexColor{vertexColor_}, underlineColor{underlineColor_}, strikethroughColor{strikethroughColor_}, highlightColor{highlightColor_}, basicStyleStack{basicStyleStack_}, colorStack{colorStack_}, underlineColorStack{underlineColorStack_}, strikethroughColorStack{strikethroughColorStack_}, highlightColorStack{highlightColorStack_}, colorGradientStack{colorGradientStack_}, sizeStack{sizeStack_}, indentStack{indentStack_}, fontWeightStack{fontWeightStack_}, styleStack{styleStack_}, baselineStack{baselineStack_}, actionStack{actionStack_}, materialReferenceStack{materialReferenceStack_}, lineJustificationStack{lineJustificationStack_}, spriteAnimationID{spriteAnimationID_}, currentFontAsset{currentFontAsset_}, currentSpriteAsset{currentSpriteAsset_}, currentMaterial{currentMaterial_}, currentMaterialIndex{currentMaterialIndex_}, meshExtents{meshExtents_}, tagNoParsing{tagNoParsing_}, isNonBreakingSpace{isNonBreakingSpace_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Get instance field reference: public System.Int32 previous_WordBreak
    int& dyn_previous_WordBreak();
    // Get instance field reference: public System.Int32 total_CharacterCount
    int& dyn_total_CharacterCount();
    // Get instance field reference: public System.Int32 visible_CharacterCount
    int& dyn_visible_CharacterCount();
    // Get instance field reference: public System.Int32 visible_SpriteCount
    int& dyn_visible_SpriteCount();
    // Get instance field reference: public System.Int32 visible_LinkCount
    int& dyn_visible_LinkCount();
    // Get instance field reference: public System.Int32 firstCharacterIndex
    int& dyn_firstCharacterIndex();
    // Get instance field reference: public System.Int32 firstVisibleCharacterIndex
    int& dyn_firstVisibleCharacterIndex();
    // Get instance field reference: public System.Int32 lastCharacterIndex
    int& dyn_lastCharacterIndex();
    // Get instance field reference: public System.Int32 lastVisibleCharIndex
    int& dyn_lastVisibleCharIndex();
    // Get instance field reference: public System.Int32 lineNumber
    int& dyn_lineNumber();
    // Get instance field reference: public System.Single maxCapHeight
    float& dyn_maxCapHeight();
    // Get instance field reference: public System.Single maxAscender
    float& dyn_maxAscender();
    // Get instance field reference: public System.Single maxDescender
    float& dyn_maxDescender();
    // Get instance field reference: public System.Single maxLineAscender
    float& dyn_maxLineAscender();
    // Get instance field reference: public System.Single maxLineDescender
    float& dyn_maxLineDescender();
    // Get instance field reference: public System.Single previousLineAscender
    float& dyn_previousLineAscender();
    // Get instance field reference: public System.Single xAdvance
    float& dyn_xAdvance();
    // Get instance field reference: public System.Single preferredWidth
    float& dyn_preferredWidth();
    // Get instance field reference: public System.Single preferredHeight
    float& dyn_preferredHeight();
    // Get instance field reference: public System.Single previousLineScale
    float& dyn_previousLineScale();
    // Get instance field reference: public System.Int32 wordCount
    int& dyn_wordCount();
    // Get instance field reference: public TMPro.FontStyles fontStyle
    TMPro::FontStyles& dyn_fontStyle();
    // Get instance field reference: public System.Single fontScale
    float& dyn_fontScale();
    // Get instance field reference: public System.Single fontScaleMultiplier
    float& dyn_fontScaleMultiplier();
    // Get instance field reference: public System.Single currentFontSize
    float& dyn_currentFontSize();
    // Get instance field reference: public System.Single baselineOffset
    float& dyn_baselineOffset();
    // Get instance field reference: public System.Single lineOffset
    float& dyn_lineOffset();
    // Get instance field reference: public TMPro.TMP_TextInfo textInfo
    TMPro::TMP_TextInfo*& dyn_textInfo();
    // Get instance field reference: public TMPro.TMP_LineInfo lineInfo
    TMPro::TMP_LineInfo& dyn_lineInfo();
    // Get instance field reference: public UnityEngine.Color32 vertexColor
    UnityEngine::Color32& dyn_vertexColor();
    // Get instance field reference: public UnityEngine.Color32 underlineColor
    UnityEngine::Color32& dyn_underlineColor();
    // Get instance field reference: public UnityEngine.Color32 strikethroughColor
    UnityEngine::Color32& dyn_strikethroughColor();
    // Get instance field reference: public UnityEngine.Color32 highlightColor
    UnityEngine::Color32& dyn_highlightColor();
    // Get instance field reference: public TMPro.TMP_FontStyleStack basicStyleStack
    TMPro::TMP_FontStyleStack& dyn_basicStyleStack();
    // Get instance field reference: public TMPro.TMP_RichTextTagStack`1<UnityEngine.Color32> colorStack
    TMPro::TMP_RichTextTagStack_1<UnityEngine::Color32>& dyn_colorStack();
    // Get instance field reference: public TMPro.TMP_RichTextTagStack`1<UnityEngine.Color32> underlineColorStack
    TMPro::TMP_RichTextTagStack_1<UnityEngine::Color32>& dyn_underlineColorStack();
    // Get instance field reference: public TMPro.TMP_RichTextTagStack`1<UnityEngine.Color32> strikethroughColorStack
    TMPro::TMP_RichTextTagStack_1<UnityEngine::Color32>& dyn_strikethroughColorStack();
    // Get instance field reference: public TMPro.TMP_RichTextTagStack`1<UnityEngine.Color32> highlightColorStack
    TMPro::TMP_RichTextTagStack_1<UnityEngine::Color32>& dyn_highlightColorStack();
    // Get instance field reference: public TMPro.TMP_RichTextTagStack`1<TMPro.TMP_ColorGradient> colorGradientStack
    TMPro::TMP_RichTextTagStack_1<TMPro::TMP_ColorGradient*>& dyn_colorGradientStack();
    // Get instance field reference: public TMPro.TMP_RichTextTagStack`1<System.Single> sizeStack
    TMPro::TMP_RichTextTagStack_1<float>& dyn_sizeStack();
    // Get instance field reference: public TMPro.TMP_RichTextTagStack`1<System.Single> indentStack
    TMPro::TMP_RichTextTagStack_1<float>& dyn_indentStack();
    // Get instance field reference: public TMPro.TMP_RichTextTagStack`1<TMPro.FontWeight> fontWeightStack
    TMPro::TMP_RichTextTagStack_1<TMPro::FontWeight>& dyn_fontWeightStack();
    // Get instance field reference: public TMPro.TMP_RichTextTagStack`1<System.Int32> styleStack
    TMPro::TMP_RichTextTagStack_1<int>& dyn_styleStack();
    // Get instance field reference: public TMPro.TMP_RichTextTagStack`1<System.Single> baselineStack
    TMPro::TMP_RichTextTagStack_1<float>& dyn_baselineStack();
    // Get instance field reference: public TMPro.TMP_RichTextTagStack`1<System.Int32> actionStack
    TMPro::TMP_RichTextTagStack_1<int>& dyn_actionStack();
    // Get instance field reference: public TMPro.TMP_RichTextTagStack`1<TMPro.MaterialReference> materialReferenceStack
    TMPro::TMP_RichTextTagStack_1<TMPro::MaterialReference>& dyn_materialReferenceStack();
    // Get instance field reference: public TMPro.TMP_RichTextTagStack`1<TMPro.TextAlignmentOptions> lineJustificationStack
    TMPro::TMP_RichTextTagStack_1<TMPro::TextAlignmentOptions>& dyn_lineJustificationStack();
    // Get instance field reference: public System.Int32 spriteAnimationID
    int& dyn_spriteAnimationID();
    // Get instance field reference: public TMPro.TMP_FontAsset currentFontAsset
    TMPro::TMP_FontAsset*& dyn_currentFontAsset();
    // Get instance field reference: public TMPro.TMP_SpriteAsset currentSpriteAsset
    TMPro::TMP_SpriteAsset*& dyn_currentSpriteAsset();
    // Get instance field reference: public UnityEngine.Material currentMaterial
    UnityEngine::Material*& dyn_currentMaterial();
    // Get instance field reference: public System.Int32 currentMaterialIndex
    int& dyn_currentMaterialIndex();
    // Get instance field reference: public TMPro.Extents meshExtents
    TMPro::Extents& dyn_meshExtents();
    // Get instance field reference: public System.Boolean tagNoParsing
    bool& dyn_tagNoParsing();
    // Get instance field reference: public System.Boolean isNonBreakingSpace
    bool& dyn_isNonBreakingSpace();
  }; // TMPro.WordWrapState
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
