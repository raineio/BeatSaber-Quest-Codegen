// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
// Completed includes
// Begin il2cpp-utils forward declares
struct Il2CppObject;
// Completed il2cpp-utils forward declares
// Type namespace: UnityEngine.UI
namespace UnityEngine::UI {
  // Forward declaring type: ColorBlock
  struct ColorBlock;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::ColorBlock, "UnityEngine.UI", "ColorBlock");
// Type namespace: UnityEngine.UI
namespace UnityEngine::UI {
  // Size: 0x58
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.UI.ColorBlock
  // [TokenAttribute] Offset: FFFFFFFF
  struct ColorBlock/*, public ::System::ValueType, public ::System::IEquatable_1<::UnityEngine::UI::ColorBlock>*/ {
    public:
    public:
    // [FormerlySerializedAsAttribute] Offset: 0x107FE34
    // private UnityEngine.Color m_NormalColor
    // Size: 0x10
    // Offset: 0x0
    ::UnityEngine::Color m_NormalColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // [FormerlySerializedAsAttribute] Offset: 0x107FE80
    // private UnityEngine.Color m_HighlightedColor
    // Size: 0x10
    // Offset: 0x10
    ::UnityEngine::Color m_HighlightedColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // [FormerlySerializedAsAttribute] Offset: 0x107FECC
    // private UnityEngine.Color m_PressedColor
    // Size: 0x10
    // Offset: 0x20
    ::UnityEngine::Color m_PressedColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // [FormerlySerializedAsAttribute] Offset: 0x107FF18
    // private UnityEngine.Color m_SelectedColor
    // Size: 0x10
    // Offset: 0x30
    ::UnityEngine::Color m_SelectedColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // [FormerlySerializedAsAttribute] Offset: 0x107FF64
    // private UnityEngine.Color m_DisabledColor
    // Size: 0x10
    // Offset: 0x40
    ::UnityEngine::Color m_DisabledColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // [RangeAttribute] Offset: 0x107FFB0
    // private System.Single m_ColorMultiplier
    // Size: 0x4
    // Offset: 0x50
    float m_ColorMultiplier;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [FormerlySerializedAsAttribute] Offset: 0x107FFF0
    // private System.Single m_FadeDuration
    // Size: 0x4
    // Offset: 0x54
    float m_FadeDuration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Creating value type constructor for type: ColorBlock
    constexpr ColorBlock(::UnityEngine::Color m_NormalColor_ = {}, ::UnityEngine::Color m_HighlightedColor_ = {}, ::UnityEngine::Color m_PressedColor_ = {}, ::UnityEngine::Color m_SelectedColor_ = {}, ::UnityEngine::Color m_DisabledColor_ = {}, float m_ColorMultiplier_ = {}, float m_FadeDuration_ = {}) noexcept : m_NormalColor{m_NormalColor_}, m_HighlightedColor{m_HighlightedColor_}, m_PressedColor{m_PressedColor_}, m_SelectedColor{m_SelectedColor_}, m_DisabledColor{m_DisabledColor_}, m_ColorMultiplier{m_ColorMultiplier_}, m_FadeDuration{m_FadeDuration_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::System::IEquatable_1<::UnityEngine::UI::ColorBlock>
    operator ::System::IEquatable_1<::UnityEngine::UI::ColorBlock>() noexcept {
      return *reinterpret_cast<::System::IEquatable_1<::UnityEngine::UI::ColorBlock>*>(this);
    }
    // Get instance field reference: private UnityEngine.Color m_NormalColor
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color& dyn_m_NormalColor();
    // Get instance field reference: private UnityEngine.Color m_HighlightedColor
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color& dyn_m_HighlightedColor();
    // Get instance field reference: private UnityEngine.Color m_PressedColor
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color& dyn_m_PressedColor();
    // Get instance field reference: private UnityEngine.Color m_SelectedColor
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color& dyn_m_SelectedColor();
    // Get instance field reference: private UnityEngine.Color m_DisabledColor
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color& dyn_m_DisabledColor();
    // Get instance field reference: private System.Single m_ColorMultiplier
    [[deprecated("Use field access instead!")]] float& dyn_m_ColorMultiplier();
    // Get instance field reference: private System.Single m_FadeDuration
    [[deprecated("Use field access instead!")]] float& dyn_m_FadeDuration();
    // public UnityEngine.Color get_normalColor()
    // Offset: 0x193A0D8
    ::UnityEngine::Color get_normalColor();
    // public System.Void set_normalColor(UnityEngine.Color value)
    // Offset: 0x193A0E4
    void set_normalColor(::UnityEngine::Color value);
    // public UnityEngine.Color get_highlightedColor()
    // Offset: 0x193A0F0
    ::UnityEngine::Color get_highlightedColor();
    // public System.Void set_highlightedColor(UnityEngine.Color value)
    // Offset: 0x193A0FC
    void set_highlightedColor(::UnityEngine::Color value);
    // public UnityEngine.Color get_pressedColor()
    // Offset: 0x193A108
    ::UnityEngine::Color get_pressedColor();
    // public System.Void set_pressedColor(UnityEngine.Color value)
    // Offset: 0x193A114
    void set_pressedColor(::UnityEngine::Color value);
    // public UnityEngine.Color get_selectedColor()
    // Offset: 0x193A120
    ::UnityEngine::Color get_selectedColor();
    // public System.Void set_selectedColor(UnityEngine.Color value)
    // Offset: 0x193A12C
    void set_selectedColor(::UnityEngine::Color value);
    // public UnityEngine.Color get_disabledColor()
    // Offset: 0x193A138
    ::UnityEngine::Color get_disabledColor();
    // public System.Void set_disabledColor(UnityEngine.Color value)
    // Offset: 0x193A144
    void set_disabledColor(::UnityEngine::Color value);
    // public System.Single get_colorMultiplier()
    // Offset: 0x193A150
    float get_colorMultiplier();
    // public System.Void set_colorMultiplier(System.Single value)
    // Offset: 0x193A158
    void set_colorMultiplier(float value);
    // public System.Single get_fadeDuration()
    // Offset: 0x193A160
    float get_fadeDuration();
    // public System.Void set_fadeDuration(System.Single value)
    // Offset: 0x193A168
    void set_fadeDuration(float value);
    // static public UnityEngine.UI.ColorBlock get_defaultColorBlock()
    // Offset: 0x193A170
    static ::UnityEngine::UI::ColorBlock get_defaultColorBlock();
    // public System.Boolean Equals(UnityEngine.UI.ColorBlock other)
    // Offset: 0x193A3C8
    bool Equals(::UnityEngine::UI::ColorBlock other);
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x193A328
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x193A520
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
  }; // UnityEngine.UI.ColorBlock
  #pragma pack(pop)
  static check_size<sizeof(ColorBlock), 84 + sizeof(float)> __UnityEngine_UI_ColorBlockSizeCheck;
  static_assert(sizeof(ColorBlock) == 0x58);
  // static public System.Boolean op_Equality(UnityEngine.UI.ColorBlock point1, UnityEngine.UI.ColorBlock point2)
  // Offset: 0x193A49C
  bool operator ==(const ::UnityEngine::UI::ColorBlock& point1, const ::UnityEngine::UI::ColorBlock& point2);
  // static public System.Boolean op_Inequality(UnityEngine.UI.ColorBlock point1, UnityEngine.UI.ColorBlock point2)
  // Offset: 0x193A4DC
  bool operator !=(const ::UnityEngine::UI::ColorBlock& point1, const ::UnityEngine::UI::ColorBlock& point2);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UI::ColorBlock::get_normalColor
// Il2CppName: get_normalColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (UnityEngine::UI::ColorBlock::*)()>(&UnityEngine::UI::ColorBlock::get_normalColor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::ColorBlock), "get_normalColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::ColorBlock::set_normalColor
// Il2CppName: set_normalColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::ColorBlock::*)(::UnityEngine::Color)>(&UnityEngine::UI::ColorBlock::set_normalColor)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::ColorBlock), "set_normalColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::ColorBlock::get_highlightedColor
// Il2CppName: get_highlightedColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (UnityEngine::UI::ColorBlock::*)()>(&UnityEngine::UI::ColorBlock::get_highlightedColor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::ColorBlock), "get_highlightedColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::ColorBlock::set_highlightedColor
// Il2CppName: set_highlightedColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::ColorBlock::*)(::UnityEngine::Color)>(&UnityEngine::UI::ColorBlock::set_highlightedColor)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::ColorBlock), "set_highlightedColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::ColorBlock::get_pressedColor
// Il2CppName: get_pressedColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (UnityEngine::UI::ColorBlock::*)()>(&UnityEngine::UI::ColorBlock::get_pressedColor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::ColorBlock), "get_pressedColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::ColorBlock::set_pressedColor
// Il2CppName: set_pressedColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::ColorBlock::*)(::UnityEngine::Color)>(&UnityEngine::UI::ColorBlock::set_pressedColor)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::ColorBlock), "set_pressedColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::ColorBlock::get_selectedColor
// Il2CppName: get_selectedColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (UnityEngine::UI::ColorBlock::*)()>(&UnityEngine::UI::ColorBlock::get_selectedColor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::ColorBlock), "get_selectedColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::ColorBlock::set_selectedColor
// Il2CppName: set_selectedColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::ColorBlock::*)(::UnityEngine::Color)>(&UnityEngine::UI::ColorBlock::set_selectedColor)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::ColorBlock), "set_selectedColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::ColorBlock::get_disabledColor
// Il2CppName: get_disabledColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (UnityEngine::UI::ColorBlock::*)()>(&UnityEngine::UI::ColorBlock::get_disabledColor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::ColorBlock), "get_disabledColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::ColorBlock::set_disabledColor
// Il2CppName: set_disabledColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::ColorBlock::*)(::UnityEngine::Color)>(&UnityEngine::UI::ColorBlock::set_disabledColor)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::ColorBlock), "set_disabledColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::ColorBlock::get_colorMultiplier
// Il2CppName: get_colorMultiplier
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::UI::ColorBlock::*)()>(&UnityEngine::UI::ColorBlock::get_colorMultiplier)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::ColorBlock), "get_colorMultiplier", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::ColorBlock::set_colorMultiplier
// Il2CppName: set_colorMultiplier
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::ColorBlock::*)(float)>(&UnityEngine::UI::ColorBlock::set_colorMultiplier)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::ColorBlock), "set_colorMultiplier", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::ColorBlock::get_fadeDuration
// Il2CppName: get_fadeDuration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::UI::ColorBlock::*)()>(&UnityEngine::UI::ColorBlock::get_fadeDuration)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::ColorBlock), "get_fadeDuration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::ColorBlock::set_fadeDuration
// Il2CppName: set_fadeDuration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::ColorBlock::*)(float)>(&UnityEngine::UI::ColorBlock::set_fadeDuration)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::ColorBlock), "set_fadeDuration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::ColorBlock::get_defaultColorBlock
// Il2CppName: get_defaultColorBlock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UI::ColorBlock (*)()>(&UnityEngine::UI::ColorBlock::get_defaultColorBlock)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::ColorBlock), "get_defaultColorBlock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::ColorBlock::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UI::ColorBlock::*)(::UnityEngine::UI::ColorBlock)>(&UnityEngine::UI::ColorBlock::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("UnityEngine.UI", "ColorBlock")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::ColorBlock), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::ColorBlock::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UI::ColorBlock::*)(::Il2CppObject*)>(&UnityEngine::UI::ColorBlock::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::ColorBlock), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::ColorBlock::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::UI::ColorBlock::*)()>(&UnityEngine::UI::ColorBlock::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::ColorBlock), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::ColorBlock::operator ==
// Il2CppName: op_Equality
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::UI::ColorBlock::operator !=
// Il2CppName: op_Inequality
// Cannot perform method pointer template specialization from operators!
