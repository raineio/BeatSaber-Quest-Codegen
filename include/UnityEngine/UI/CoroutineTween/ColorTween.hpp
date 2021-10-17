// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.UI.CoroutineTween.ITweenValue
#include "UnityEngine/UI/CoroutineTween/ITweenValue.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UI::CoroutineTween
namespace UnityEngine::UI::CoroutineTween {
  // Skipping declaration: ColorTweenMode because it is already included!
}
// Forward declaring namespace: UnityEngine::Events
namespace UnityEngine::Events {
  // Forward declaring type: UnityAction`1<T0>
  template<typename T0>
  class UnityAction_1;
}
// Completed forward declares
// Type namespace: UnityEngine.UI.CoroutineTween
namespace UnityEngine::UI::CoroutineTween {
  // Forward declaring type: ColorTween
  struct ColorTween;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::CoroutineTween::ColorTween, "UnityEngine.UI.CoroutineTween", "ColorTween");
// Type namespace: UnityEngine.UI.CoroutineTween
namespace UnityEngine::UI::CoroutineTween {
  // Size: 0x31
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.UI.CoroutineTween.ColorTween
  // [TokenAttribute] Offset: FFFFFFFF
  struct ColorTween/*, public System::ValueType, public UnityEngine::UI::CoroutineTween::ITweenValue*/ {
    public:
    // Nested type: UnityEngine::UI::CoroutineTween::ColorTween::ColorTweenMode
    struct ColorTweenMode;
    // Nested type: UnityEngine::UI::CoroutineTween::ColorTween::ColorTweenCallback
    class ColorTweenCallback;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: UnityEngine.UI.CoroutineTween.ColorTween/UnityEngine.UI.CoroutineTween.ColorTweenMode
    // [TokenAttribute] Offset: FFFFFFFF
    struct ColorTweenMode/*, public System::Enum*/ {
      public:
      #ifdef USE_CODEGEN_FIELDS
      public:
      #else
      protected:
      #endif
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: ColorTweenMode
      constexpr ColorTweenMode(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator System::Enum
      operator System::Enum() noexcept {
        return *reinterpret_cast<System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public UnityEngine.UI.CoroutineTween.ColorTween/UnityEngine.UI.CoroutineTween.ColorTweenMode All
      static constexpr const int All = 0;
      // Get static field: static public UnityEngine.UI.CoroutineTween.ColorTween/UnityEngine.UI.CoroutineTween.ColorTweenMode All
      static UnityEngine::UI::CoroutineTween::ColorTween::ColorTweenMode _get_All();
      // Set static field: static public UnityEngine.UI.CoroutineTween.ColorTween/UnityEngine.UI.CoroutineTween.ColorTweenMode All
      static void _set_All(UnityEngine::UI::CoroutineTween::ColorTween::ColorTweenMode value);
      // static field const value: static public UnityEngine.UI.CoroutineTween.ColorTween/UnityEngine.UI.CoroutineTween.ColorTweenMode RGB
      static constexpr const int RGB = 1;
      // Get static field: static public UnityEngine.UI.CoroutineTween.ColorTween/UnityEngine.UI.CoroutineTween.ColorTweenMode RGB
      static UnityEngine::UI::CoroutineTween::ColorTween::ColorTweenMode _get_RGB();
      // Set static field: static public UnityEngine.UI.CoroutineTween.ColorTween/UnityEngine.UI.CoroutineTween.ColorTweenMode RGB
      static void _set_RGB(UnityEngine::UI::CoroutineTween::ColorTween::ColorTweenMode value);
      // static field const value: static public UnityEngine.UI.CoroutineTween.ColorTween/UnityEngine.UI.CoroutineTween.ColorTweenMode Alpha
      static constexpr const int Alpha = 2;
      // Get static field: static public UnityEngine.UI.CoroutineTween.ColorTween/UnityEngine.UI.CoroutineTween.ColorTweenMode Alpha
      static UnityEngine::UI::CoroutineTween::ColorTween::ColorTweenMode _get_Alpha();
      // Set static field: static public UnityEngine.UI.CoroutineTween.ColorTween/UnityEngine.UI.CoroutineTween.ColorTweenMode Alpha
      static void _set_Alpha(UnityEngine::UI::CoroutineTween::ColorTween::ColorTweenMode value);
      // Get instance field reference: public System.Int32 value__
      int& dyn_value__();
    }; // UnityEngine.UI.CoroutineTween.ColorTween/UnityEngine.UI.CoroutineTween.ColorTweenMode
    #pragma pack(pop)
    static check_size<sizeof(ColorTween::ColorTweenMode), 0 + sizeof(int)> __UnityEngine_UI_CoroutineTween_ColorTween_ColorTweenModeSizeCheck;
    static_assert(sizeof(ColorTween::ColorTweenMode) == 0x4);
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    protected:
    #endif
    // private UnityEngine.UI.CoroutineTween.ColorTween/UnityEngine.UI.CoroutineTween.ColorTweenCallback m_Target
    // Size: 0x8
    // Offset: 0x0
    UnityEngine::UI::CoroutineTween::ColorTween::ColorTweenCallback* m_Target;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::CoroutineTween::ColorTween::ColorTweenCallback*) == 0x8);
    // private UnityEngine.Color m_StartColor
    // Size: 0x10
    // Offset: 0x8
    UnityEngine::Color m_StartColor;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // private UnityEngine.Color m_TargetColor
    // Size: 0x10
    // Offset: 0x18
    UnityEngine::Color m_TargetColor;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // private UnityEngine.UI.CoroutineTween.ColorTween/UnityEngine.UI.CoroutineTween.ColorTweenMode m_TweenMode
    // Size: 0x4
    // Offset: 0x28
    UnityEngine::UI::CoroutineTween::ColorTween::ColorTweenMode m_TweenMode;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::CoroutineTween::ColorTween::ColorTweenMode) == 0x4);
    // private System.Single m_Duration
    // Size: 0x4
    // Offset: 0x2C
    float m_Duration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean m_IgnoreTimeScale
    // Size: 0x1
    // Offset: 0x30
    bool m_IgnoreTimeScale;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating value type constructor for type: ColorTween
    constexpr ColorTween(UnityEngine::UI::CoroutineTween::ColorTween::ColorTweenCallback* m_Target_ = {}, UnityEngine::Color m_StartColor_ = {}, UnityEngine::Color m_TargetColor_ = {}, UnityEngine::UI::CoroutineTween::ColorTween::ColorTweenMode m_TweenMode_ = {}, float m_Duration_ = {}, bool m_IgnoreTimeScale_ = {}) noexcept : m_Target{m_Target_}, m_StartColor{m_StartColor_}, m_TargetColor{m_TargetColor_}, m_TweenMode{m_TweenMode_}, m_Duration{m_Duration_}, m_IgnoreTimeScale{m_IgnoreTimeScale_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator UnityEngine::UI::CoroutineTween::ITweenValue
    operator UnityEngine::UI::CoroutineTween::ITweenValue() noexcept {
      return *reinterpret_cast<UnityEngine::UI::CoroutineTween::ITweenValue*>(this);
    }
    // Get instance field reference: private UnityEngine.UI.CoroutineTween.ColorTween/UnityEngine.UI.CoroutineTween.ColorTweenCallback m_Target
    UnityEngine::UI::CoroutineTween::ColorTween::ColorTweenCallback*& dyn_m_Target();
    // Get instance field reference: private UnityEngine.Color m_StartColor
    UnityEngine::Color& dyn_m_StartColor();
    // Get instance field reference: private UnityEngine.Color m_TargetColor
    UnityEngine::Color& dyn_m_TargetColor();
    // Get instance field reference: private UnityEngine.UI.CoroutineTween.ColorTween/UnityEngine.UI.CoroutineTween.ColorTweenMode m_TweenMode
    UnityEngine::UI::CoroutineTween::ColorTween::ColorTweenMode& dyn_m_TweenMode();
    // Get instance field reference: private System.Single m_Duration
    float& dyn_m_Duration();
    // Get instance field reference: private System.Boolean m_IgnoreTimeScale
    bool& dyn_m_IgnoreTimeScale();
    // public UnityEngine.Color get_startColor()
    // Offset: 0x15E0AA0
    UnityEngine::Color get_startColor();
    // public System.Void set_startColor(UnityEngine.Color value)
    // Offset: 0x15E0AAC
    void set_startColor(UnityEngine::Color value);
    // public UnityEngine.Color get_targetColor()
    // Offset: 0x15E0AB8
    UnityEngine::Color get_targetColor();
    // public System.Void set_targetColor(UnityEngine.Color value)
    // Offset: 0x15E0AC4
    void set_targetColor(UnityEngine::Color value);
    // public UnityEngine.UI.CoroutineTween.ColorTween/UnityEngine.UI.CoroutineTween.ColorTweenMode get_tweenMode()
    // Offset: 0x15E0AD0
    UnityEngine::UI::CoroutineTween::ColorTween::ColorTweenMode get_tweenMode();
    // public System.Void set_tweenMode(UnityEngine.UI.CoroutineTween.ColorTween/UnityEngine.UI.CoroutineTween.ColorTweenMode value)
    // Offset: 0x15E0AD8
    void set_tweenMode(UnityEngine::UI::CoroutineTween::ColorTween::ColorTweenMode value);
    // public System.Single get_duration()
    // Offset: 0x15E0AE0
    float get_duration();
    // public System.Void set_duration(System.Single value)
    // Offset: 0x15E0AE8
    void set_duration(float value);
    // public System.Boolean get_ignoreTimeScale()
    // Offset: 0x15E0AF0
    bool get_ignoreTimeScale();
    // public System.Void set_ignoreTimeScale(System.Boolean value)
    // Offset: 0x15E0AF8
    void set_ignoreTimeScale(bool value);
    // public System.Void TweenValue(System.Single floatPercentage)
    // Offset: 0x15E0B04
    void TweenValue(float floatPercentage);
    // public System.Void AddOnChangedCallback(UnityEngine.Events.UnityAction`1<UnityEngine.Color> callback)
    // Offset: 0x15E0BDC
    void AddOnChangedCallback(UnityEngine::Events::UnityAction_1<UnityEngine::Color>* callback);
    // public System.Boolean GetIgnoreTimescale()
    // Offset: 0x15E0CB8
    bool GetIgnoreTimescale();
    // public System.Single GetDuration()
    // Offset: 0x15E0CC0
    float GetDuration();
    // public System.Boolean ValidTarget()
    // Offset: 0x15E0BCC
    bool ValidTarget();
  }; // UnityEngine.UI.CoroutineTween.ColorTween
  #pragma pack(pop)
  static check_size<sizeof(ColorTween), 48 + sizeof(bool)> __UnityEngine_UI_CoroutineTween_ColorTweenSizeCheck;
  static_assert(sizeof(ColorTween) == 0x31);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::CoroutineTween::ColorTween::ColorTweenMode, "UnityEngine.UI.CoroutineTween", "ColorTween/ColorTweenMode");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UI::CoroutineTween::ColorTween::get_startColor
// Il2CppName: get_startColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Color (UnityEngine::UI::CoroutineTween::ColorTween::*)()>(&UnityEngine::UI::CoroutineTween::ColorTween::get_startColor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::CoroutineTween::ColorTween), "get_startColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::CoroutineTween::ColorTween::set_startColor
// Il2CppName: set_startColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::CoroutineTween::ColorTween::*)(UnityEngine::Color)>(&UnityEngine::UI::CoroutineTween::ColorTween::set_startColor)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::CoroutineTween::ColorTween), "set_startColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::CoroutineTween::ColorTween::get_targetColor
// Il2CppName: get_targetColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Color (UnityEngine::UI::CoroutineTween::ColorTween::*)()>(&UnityEngine::UI::CoroutineTween::ColorTween::get_targetColor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::CoroutineTween::ColorTween), "get_targetColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::CoroutineTween::ColorTween::set_targetColor
// Il2CppName: set_targetColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::CoroutineTween::ColorTween::*)(UnityEngine::Color)>(&UnityEngine::UI::CoroutineTween::ColorTween::set_targetColor)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::CoroutineTween::ColorTween), "set_targetColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::CoroutineTween::ColorTween::get_tweenMode
// Il2CppName: get_tweenMode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::UI::CoroutineTween::ColorTween::ColorTweenMode (UnityEngine::UI::CoroutineTween::ColorTween::*)()>(&UnityEngine::UI::CoroutineTween::ColorTween::get_tweenMode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::CoroutineTween::ColorTween), "get_tweenMode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::CoroutineTween::ColorTween::set_tweenMode
// Il2CppName: set_tweenMode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::CoroutineTween::ColorTween::*)(UnityEngine::UI::CoroutineTween::ColorTween::ColorTweenMode)>(&UnityEngine::UI::CoroutineTween::ColorTween::set_tweenMode)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.UI.CoroutineTween", "ColorTween/ColorTweenMode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::CoroutineTween::ColorTween), "set_tweenMode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::CoroutineTween::ColorTween::get_duration
// Il2CppName: get_duration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::UI::CoroutineTween::ColorTween::*)()>(&UnityEngine::UI::CoroutineTween::ColorTween::get_duration)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::CoroutineTween::ColorTween), "get_duration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::CoroutineTween::ColorTween::set_duration
// Il2CppName: set_duration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::CoroutineTween::ColorTween::*)(float)>(&UnityEngine::UI::CoroutineTween::ColorTween::set_duration)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::CoroutineTween::ColorTween), "set_duration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::CoroutineTween::ColorTween::get_ignoreTimeScale
// Il2CppName: get_ignoreTimeScale
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UI::CoroutineTween::ColorTween::*)()>(&UnityEngine::UI::CoroutineTween::ColorTween::get_ignoreTimeScale)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::CoroutineTween::ColorTween), "get_ignoreTimeScale", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::CoroutineTween::ColorTween::set_ignoreTimeScale
// Il2CppName: set_ignoreTimeScale
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::CoroutineTween::ColorTween::*)(bool)>(&UnityEngine::UI::CoroutineTween::ColorTween::set_ignoreTimeScale)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::CoroutineTween::ColorTween), "set_ignoreTimeScale", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::CoroutineTween::ColorTween::TweenValue
// Il2CppName: TweenValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::CoroutineTween::ColorTween::*)(float)>(&UnityEngine::UI::CoroutineTween::ColorTween::TweenValue)> {
  static const MethodInfo* get() {
    static auto* floatPercentage = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::CoroutineTween::ColorTween), "TweenValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{floatPercentage});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::CoroutineTween::ColorTween::AddOnChangedCallback
// Il2CppName: AddOnChangedCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::CoroutineTween::ColorTween::*)(UnityEngine::Events::UnityAction_1<UnityEngine::Color>*)>(&UnityEngine::UI::CoroutineTween::ColorTween::AddOnChangedCallback)> {
  static const MethodInfo* get() {
    static auto* callback = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("UnityEngine.Events", "UnityAction`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "Color")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::CoroutineTween::ColorTween), "AddOnChangedCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{callback});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::CoroutineTween::ColorTween::GetIgnoreTimescale
// Il2CppName: GetIgnoreTimescale
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UI::CoroutineTween::ColorTween::*)()>(&UnityEngine::UI::CoroutineTween::ColorTween::GetIgnoreTimescale)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::CoroutineTween::ColorTween), "GetIgnoreTimescale", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::CoroutineTween::ColorTween::GetDuration
// Il2CppName: GetDuration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::UI::CoroutineTween::ColorTween::*)()>(&UnityEngine::UI::CoroutineTween::ColorTween::GetDuration)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::CoroutineTween::ColorTween), "GetDuration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::CoroutineTween::ColorTween::ValidTarget
// Il2CppName: ValidTarget
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UI::CoroutineTween::ColorTween::*)()>(&UnityEngine::UI::CoroutineTween::ColorTween::ValidTarget)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::CoroutineTween::ColorTween), "ValidTarget", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
