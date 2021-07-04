// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include <initializer_list>
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GUILayoutOption
  class GUILayoutOption;
  // Forward declaring type: GUIStyle
  class GUIStyle;
  // Forward declaring type: GUIContent
  class GUIContent;
  // Forward declaring type: Texture
  class Texture;
  // Forward declaring type: Rect
  struct Rect;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.GUILayout
  class GUILayout : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: GUILayout
    GUILayout() noexcept {}
    // static public System.Void Label(System.String text, params UnityEngine.GUILayoutOption[] options)
    // Offset: 0x1A8C714
    static void Label(::Il2CppString* text, ::Array<UnityEngine::GUILayoutOption*>* options);
    // Creating initializer_list -> params proxy for: System.Void Label(System.String text, params UnityEngine.GUILayoutOption[] options)
    static void Label(::Il2CppString* text, std::initializer_list<UnityEngine::GUILayoutOption*> options);
    // Creating TArgs -> initializer_list proxy for: System.Void Label(System.String text, params UnityEngine.GUILayoutOption[] options)
    template<class ...TParams>
    static void Label(::Il2CppString* text, TParams&&... options) {
      Label(text, {options...});
    }
    // static public System.Void Label(System.String text, UnityEngine.GUIStyle style, params UnityEngine.GUILayoutOption[] options)
    // Offset: 0x1A8C8A8
    static void Label(::Il2CppString* text, UnityEngine::GUIStyle* style, ::Array<UnityEngine::GUILayoutOption*>* options);
    // Creating initializer_list -> params proxy for: System.Void Label(System.String text, UnityEngine.GUIStyle style, params UnityEngine.GUILayoutOption[] options)
    static void Label(::Il2CppString* text, UnityEngine::GUIStyle* style, std::initializer_list<UnityEngine::GUILayoutOption*> options);
    // Creating TArgs -> initializer_list proxy for: System.Void Label(System.String text, UnityEngine.GUIStyle style, params UnityEngine.GUILayoutOption[] options)
    template<class ...TParams>
    static void Label(::Il2CppString* text, UnityEngine::GUIStyle* style, TParams&&... options) {
      Label(text, style, {options...});
    }
    // static private System.Void DoLabel(UnityEngine.GUIContent content, UnityEngine.GUIStyle style, UnityEngine.GUILayoutOption[] options)
    // Offset: 0x1A8C7D0
    static void DoLabel(UnityEngine::GUIContent* content, UnityEngine::GUIStyle* style, ::Array<UnityEngine::GUILayoutOption*>* options);
    // static public System.Void Box(UnityEngine.Texture image, params UnityEngine.GUILayoutOption[] options)
    // Offset: 0x1A8C9A4
    static void Box(UnityEngine::Texture* image, ::Array<UnityEngine::GUILayoutOption*>* options);
    // Creating initializer_list -> params proxy for: System.Void Box(UnityEngine.Texture image, params UnityEngine.GUILayoutOption[] options)
    static void Box(UnityEngine::Texture* image, std::initializer_list<UnityEngine::GUILayoutOption*> options);
    // Creating TArgs -> initializer_list proxy for: System.Void Box(UnityEngine.Texture image, params UnityEngine.GUILayoutOption[] options)
    template<class ...TParams>
    static void Box(UnityEngine::Texture* image, TParams&&... options) {
      Box(image, {options...});
    }
    // static private System.Void DoBox(UnityEngine.GUIContent content, UnityEngine.GUIStyle style, UnityEngine.GUILayoutOption[] options)
    // Offset: 0x1A8CA60
    static void DoBox(UnityEngine::GUIContent* content, UnityEngine::GUIStyle* style, ::Array<UnityEngine::GUILayoutOption*>* options);
    // static public System.Boolean Button(System.String text, params UnityEngine.GUILayoutOption[] options)
    // Offset: 0x1A8CB38
    static bool Button(::Il2CppString* text, ::Array<UnityEngine::GUILayoutOption*>* options);
    // Creating initializer_list -> params proxy for: System.Boolean Button(System.String text, params UnityEngine.GUILayoutOption[] options)
    static bool Button(::Il2CppString* text, std::initializer_list<UnityEngine::GUILayoutOption*> options);
    // Creating TArgs -> initializer_list proxy for: System.Boolean Button(System.String text, params UnityEngine.GUILayoutOption[] options)
    template<class ...TParams>
    static bool Button(::Il2CppString* text, TParams&&... options) {
      return Button(text, {options...});
    }
    // static private System.Boolean DoButton(UnityEngine.GUIContent content, UnityEngine.GUIStyle style, UnityEngine.GUILayoutOption[] options)
    // Offset: 0x1A8CBF4
    static bool DoButton(UnityEngine::GUIContent* content, UnityEngine::GUIStyle* style, ::Array<UnityEngine::GUILayoutOption*>* options);
    // static public System.String TextField(System.String text, params UnityEngine.GUILayoutOption[] options)
    // Offset: 0x1A8CCCC
    static ::Il2CppString* TextField(::Il2CppString* text, ::Array<UnityEngine::GUILayoutOption*>* options);
    // Creating initializer_list -> params proxy for: System.String TextField(System.String text, params UnityEngine.GUILayoutOption[] options)
    static ::Il2CppString* TextField(::Il2CppString* text, std::initializer_list<UnityEngine::GUILayoutOption*> options);
    // Creating TArgs -> initializer_list proxy for: System.String TextField(System.String text, params UnityEngine.GUILayoutOption[] options)
    template<class ...TParams>
    static ::Il2CppString* TextField(::Il2CppString* text, TParams&&... options) {
      return TextField(text, {options...});
    }
    // static public System.String TextArea(System.String text, UnityEngine.GUIStyle style, params UnityEngine.GUILayoutOption[] options)
    // Offset: 0x1A8CFB4
    static ::Il2CppString* TextArea(::Il2CppString* text, UnityEngine::GUIStyle* style, ::Array<UnityEngine::GUILayoutOption*>* options);
    // Creating initializer_list -> params proxy for: System.String TextArea(System.String text, UnityEngine.GUIStyle style, params UnityEngine.GUILayoutOption[] options)
    static ::Il2CppString* TextArea(::Il2CppString* text, UnityEngine::GUIStyle* style, std::initializer_list<UnityEngine::GUILayoutOption*> options);
    // Creating TArgs -> initializer_list proxy for: System.String TextArea(System.String text, UnityEngine.GUIStyle style, params UnityEngine.GUILayoutOption[] options)
    template<class ...TParams>
    static ::Il2CppString* TextArea(::Il2CppString* text, UnityEngine::GUIStyle* style, TParams&&... options) {
      return TextArea(text, style, {options...});
    }
    // static private System.String DoTextField(System.String text, System.Int32 maxLength, System.Boolean multiline, UnityEngine.GUIStyle style, UnityEngine.GUILayoutOption[] options)
    // Offset: 0x1A8CD60
    static ::Il2CppString* DoTextField(::Il2CppString* text, int maxLength, bool multiline, UnityEngine::GUIStyle* style, ::Array<UnityEngine::GUILayoutOption*>* options);
    // static public System.Boolean Toggle(System.Boolean value, System.String text, params UnityEngine.GUILayoutOption[] options)
    // Offset: 0x1A8CFD4
    static bool Toggle(bool value, ::Il2CppString* text, ::Array<UnityEngine::GUILayoutOption*>* options);
    // Creating initializer_list -> params proxy for: System.Boolean Toggle(System.Boolean value, System.String text, params UnityEngine.GUILayoutOption[] options)
    static bool Toggle(bool value, ::Il2CppString* text, std::initializer_list<UnityEngine::GUILayoutOption*> options);
    // Creating TArgs -> initializer_list proxy for: System.Boolean Toggle(System.Boolean value, System.String text, params UnityEngine.GUILayoutOption[] options)
    template<class ...TParams>
    static bool Toggle(bool value, ::Il2CppString* text, TParams&&... options) {
      return Toggle(value, text, {options...});
    }
    // static private System.Boolean DoToggle(System.Boolean value, UnityEngine.GUIContent content, UnityEngine.GUIStyle style, UnityEngine.GUILayoutOption[] options)
    // Offset: 0x1A8D098
    static bool DoToggle(bool value, UnityEngine::GUIContent* content, UnityEngine::GUIStyle* style, ::Array<UnityEngine::GUILayoutOption*>* options);
    // static public System.Single HorizontalSlider(System.Single value, System.Single leftValue, System.Single rightValue, params UnityEngine.GUILayoutOption[] options)
    // Offset: 0x1A8D180
    static float HorizontalSlider(float value, float leftValue, float rightValue, ::Array<UnityEngine::GUILayoutOption*>* options);
    // Creating initializer_list -> params proxy for: System.Single HorizontalSlider(System.Single value, System.Single leftValue, System.Single rightValue, params UnityEngine.GUILayoutOption[] options)
    static float HorizontalSlider(float value, float leftValue, float rightValue, std::initializer_list<UnityEngine::GUILayoutOption*> options);
    // Creating TArgs -> initializer_list proxy for: System.Single HorizontalSlider(System.Single value, System.Single leftValue, System.Single rightValue, params UnityEngine.GUILayoutOption[] options)
    template<class ...TParams>
    static float HorizontalSlider(float value, float leftValue, float rightValue, TParams&&... options) {
      return HorizontalSlider(value, leftValue, rightValue, {options...});
    }
    // static private System.Single DoHorizontalSlider(System.Single value, System.Single leftValue, System.Single rightValue, UnityEngine.GUIStyle slider, UnityEngine.GUIStyle thumb, UnityEngine.GUILayoutOption[] options)
    // Offset: 0x1A8D23C
    static float DoHorizontalSlider(float value, float leftValue, float rightValue, UnityEngine::GUIStyle* slider, UnityEngine::GUIStyle* thumb, ::Array<UnityEngine::GUILayoutOption*>* options);
    // static public System.Void Space(System.Single pixels)
    // Offset: 0x1A8D374
    static void Space(float pixels);
    // static public System.Void FlexibleSpace()
    // Offset: 0x1A8D788
    static void FlexibleSpace();
    // static public System.Void BeginHorizontal(params UnityEngine.GUILayoutOption[] options)
    // Offset: 0x1A8DAE0
    static void BeginHorizontal(::Array<UnityEngine::GUILayoutOption*>* options);
    // Creating initializer_list -> params proxy for: System.Void BeginHorizontal(params UnityEngine.GUILayoutOption[] options)
    static void BeginHorizontal(std::initializer_list<UnityEngine::GUILayoutOption*> options);
    // Creating TArgs -> initializer_list proxy for: System.Void BeginHorizontal(params UnityEngine.GUILayoutOption[] options)
    template<class ...TParams>
    static void BeginHorizontal(TParams&&... options) {
      BeginHorizontal({options...});
    }
    // static public System.Void BeginHorizontal(UnityEngine.GUIContent content, UnityEngine.GUIStyle style, params UnityEngine.GUILayoutOption[] options)
    // Offset: 0x1A8DB80
    static void BeginHorizontal(UnityEngine::GUIContent* content, UnityEngine::GUIStyle* style, ::Array<UnityEngine::GUILayoutOption*>* options);
    // Creating initializer_list -> params proxy for: System.Void BeginHorizontal(UnityEngine.GUIContent content, UnityEngine.GUIStyle style, params UnityEngine.GUILayoutOption[] options)
    static void BeginHorizontal(UnityEngine::GUIContent* content, UnityEngine::GUIStyle* style, std::initializer_list<UnityEngine::GUILayoutOption*> options);
    // Creating TArgs -> initializer_list proxy for: System.Void BeginHorizontal(UnityEngine.GUIContent content, UnityEngine.GUIStyle style, params UnityEngine.GUILayoutOption[] options)
    template<class ...TParams>
    static void BeginHorizontal(UnityEngine::GUIContent* content, UnityEngine::GUIStyle* style, TParams&&... options) {
      BeginHorizontal(content, style, {options...});
    }
    // static public System.Void EndHorizontal()
    // Offset: 0x1A8DFE4
    static void EndHorizontal();
    // static public System.Void BeginVertical(params UnityEngine.GUILayoutOption[] options)
    // Offset: 0x1A8E238
    static void BeginVertical(::Array<UnityEngine::GUILayoutOption*>* options);
    // Creating initializer_list -> params proxy for: System.Void BeginVertical(params UnityEngine.GUILayoutOption[] options)
    static void BeginVertical(std::initializer_list<UnityEngine::GUILayoutOption*> options);
    // Creating TArgs -> initializer_list proxy for: System.Void BeginVertical(params UnityEngine.GUILayoutOption[] options)
    template<class ...TParams>
    static void BeginVertical(TParams&&... options) {
      BeginVertical({options...});
    }
    // static public System.Void BeginVertical(UnityEngine.GUIContent content, UnityEngine.GUIStyle style, params UnityEngine.GUILayoutOption[] options)
    // Offset: 0x1A8E2D8
    static void BeginVertical(UnityEngine::GUIContent* content, UnityEngine::GUIStyle* style, ::Array<UnityEngine::GUILayoutOption*>* options);
    // Creating initializer_list -> params proxy for: System.Void BeginVertical(UnityEngine.GUIContent content, UnityEngine.GUIStyle style, params UnityEngine.GUILayoutOption[] options)
    static void BeginVertical(UnityEngine::GUIContent* content, UnityEngine::GUIStyle* style, std::initializer_list<UnityEngine::GUILayoutOption*> options);
    // Creating TArgs -> initializer_list proxy for: System.Void BeginVertical(UnityEngine.GUIContent content, UnityEngine.GUIStyle style, params UnityEngine.GUILayoutOption[] options)
    template<class ...TParams>
    static void BeginVertical(UnityEngine::GUIContent* content, UnityEngine::GUIStyle* style, TParams&&... options) {
      BeginVertical(content, style, {options...});
    }
    // static public System.Void EndVertical()
    // Offset: 0x1A8E474
    static void EndVertical();
    // static public System.Void BeginArea(UnityEngine.Rect screenRect)
    // Offset: 0x1A8E4D0
    static void BeginArea(UnityEngine::Rect screenRect);
    // static public System.Void BeginArea(UnityEngine.Rect screenRect, UnityEngine.GUIContent content, UnityEngine.GUIStyle style)
    // Offset: 0x1A8E598
    static void BeginArea(UnityEngine::Rect screenRect, UnityEngine::GUIContent* content, UnityEngine::GUIStyle* style);
    // static public System.Void EndArea()
    // Offset: 0x1A8EA5C
    static void EndArea();
    // static public UnityEngine.Vector2 BeginScrollView(UnityEngine.Vector2 scrollPosition, params UnityEngine.GUILayoutOption[] options)
    // Offset: 0x1A8EBE8
    static UnityEngine::Vector2 BeginScrollView(UnityEngine::Vector2 scrollPosition, ::Array<UnityEngine::GUILayoutOption*>* options);
    // Creating initializer_list -> params proxy for: UnityEngine.Vector2 BeginScrollView(UnityEngine.Vector2 scrollPosition, params UnityEngine.GUILayoutOption[] options)
    static UnityEngine::Vector2 BeginScrollView(UnityEngine::Vector2 scrollPosition, std::initializer_list<UnityEngine::GUILayoutOption*> options);
    // Creating TArgs -> initializer_list proxy for: UnityEngine.Vector2 BeginScrollView(UnityEngine.Vector2 scrollPosition, params UnityEngine.GUILayoutOption[] options)
    template<class ...TParams>
    static UnityEngine::Vector2 BeginScrollView(UnityEngine::Vector2 scrollPosition, TParams&&... options) {
      return BeginScrollView(scrollPosition, {options...});
    }
    // static public UnityEngine.Vector2 BeginScrollView(UnityEngine.Vector2 scrollPosition, System.Boolean alwaysShowHorizontal, System.Boolean alwaysShowVertical, UnityEngine.GUIStyle horizontalScrollbar, UnityEngine.GUIStyle verticalScrollbar, UnityEngine.GUIStyle background, params UnityEngine.GUILayoutOption[] options)
    // Offset: 0x1A8ECBC
    static UnityEngine::Vector2 BeginScrollView(UnityEngine::Vector2 scrollPosition, bool alwaysShowHorizontal, bool alwaysShowVertical, UnityEngine::GUIStyle* horizontalScrollbar, UnityEngine::GUIStyle* verticalScrollbar, UnityEngine::GUIStyle* background, ::Array<UnityEngine::GUILayoutOption*>* options);
    // Creating initializer_list -> params proxy for: UnityEngine.Vector2 BeginScrollView(UnityEngine.Vector2 scrollPosition, System.Boolean alwaysShowHorizontal, System.Boolean alwaysShowVertical, UnityEngine.GUIStyle horizontalScrollbar, UnityEngine.GUIStyle verticalScrollbar, UnityEngine.GUIStyle background, params UnityEngine.GUILayoutOption[] options)
    static UnityEngine::Vector2 BeginScrollView(UnityEngine::Vector2 scrollPosition, bool alwaysShowHorizontal, bool alwaysShowVertical, UnityEngine::GUIStyle* horizontalScrollbar, UnityEngine::GUIStyle* verticalScrollbar, UnityEngine::GUIStyle* background, std::initializer_list<UnityEngine::GUILayoutOption*> options);
    // Creating TArgs -> initializer_list proxy for: UnityEngine.Vector2 BeginScrollView(UnityEngine.Vector2 scrollPosition, System.Boolean alwaysShowHorizontal, System.Boolean alwaysShowVertical, UnityEngine.GUIStyle horizontalScrollbar, UnityEngine.GUIStyle verticalScrollbar, UnityEngine.GUIStyle background, params UnityEngine.GUILayoutOption[] options)
    template<class ...TParams>
    static UnityEngine::Vector2 BeginScrollView(UnityEngine::Vector2 scrollPosition, bool alwaysShowHorizontal, bool alwaysShowVertical, UnityEngine::GUIStyle* horizontalScrollbar, UnityEngine::GUIStyle* verticalScrollbar, UnityEngine::GUIStyle* background, TParams&&... options) {
      return BeginScrollView(scrollPosition, alwaysShowHorizontal, alwaysShowVertical, horizontalScrollbar, verticalScrollbar, background, {options...});
    }
    // static public System.Void EndScrollView()
    // Offset: 0x1A8EF38
    static void EndScrollView();
    // static System.Void EndScrollView(System.Boolean handleScrollWheel)
    // Offset: 0x1A8EF40
    static void EndScrollView(bool handleScrollWheel);
    // static public UnityEngine.GUILayoutOption Width(System.Single width)
    // Offset: 0x1A8B7A4
    static UnityEngine::GUILayoutOption* Width(float width);
    // static public UnityEngine.GUILayoutOption Height(System.Single height)
    // Offset: 0x1A8B834
    static UnityEngine::GUILayoutOption* Height(float height);
    // static public UnityEngine.GUILayoutOption ExpandWidth(System.Boolean expand)
    // Offset: 0x1A8DA48
    static UnityEngine::GUILayoutOption* ExpandWidth(bool expand);
    // static public UnityEngine.GUILayoutOption ExpandHeight(System.Boolean expand)
    // Offset: 0x1A8D9B0
    static UnityEngine::GUILayoutOption* ExpandHeight(bool expand);
  }; // UnityEngine.GUILayout
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::GUILayout*, "UnityEngine", "GUILayout");
// Writing MetadataGetter for method: UnityEngine::GUILayout::Label
// Il2CppName: Label
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppString*, ::Array<UnityEngine::GUILayoutOption*>*)>(&UnityEngine::GUILayout::Label)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUILayout*), "Label", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<::Array<UnityEngine::GUILayoutOption*>*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUILayout::Label
// Il2CppName: Label
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppString*, UnityEngine::GUIStyle*, ::Array<UnityEngine::GUILayoutOption*>*)>(&UnityEngine::GUILayout::Label)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUILayout*), "Label", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::GUIStyle*>(), ::il2cpp_utils::ExtractIndependentType<::Array<UnityEngine::GUILayoutOption*>*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUILayout::DoLabel
// Il2CppName: DoLabel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::GUIContent*, UnityEngine::GUIStyle*, ::Array<UnityEngine::GUILayoutOption*>*)>(&UnityEngine::GUILayout::DoLabel)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUILayout*), "DoLabel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::GUIContent*>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::GUIStyle*>(), ::il2cpp_utils::ExtractIndependentType<::Array<UnityEngine::GUILayoutOption*>*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUILayout::Box
// Il2CppName: Box
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::Texture*, ::Array<UnityEngine::GUILayoutOption*>*)>(&UnityEngine::GUILayout::Box)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUILayout*), "Box", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Texture*>(), ::il2cpp_utils::ExtractIndependentType<::Array<UnityEngine::GUILayoutOption*>*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUILayout::DoBox
// Il2CppName: DoBox
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::GUIContent*, UnityEngine::GUIStyle*, ::Array<UnityEngine::GUILayoutOption*>*)>(&UnityEngine::GUILayout::DoBox)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUILayout*), "DoBox", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::GUIContent*>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::GUIStyle*>(), ::il2cpp_utils::ExtractIndependentType<::Array<UnityEngine::GUILayoutOption*>*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUILayout::Button
// Il2CppName: Button
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Il2CppString*, ::Array<UnityEngine::GUILayoutOption*>*)>(&UnityEngine::GUILayout::Button)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUILayout*), "Button", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<::Array<UnityEngine::GUILayoutOption*>*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUILayout::DoButton
// Il2CppName: DoButton
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(UnityEngine::GUIContent*, UnityEngine::GUIStyle*, ::Array<UnityEngine::GUILayoutOption*>*)>(&UnityEngine::GUILayout::DoButton)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUILayout*), "DoButton", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::GUIContent*>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::GUIStyle*>(), ::il2cpp_utils::ExtractIndependentType<::Array<UnityEngine::GUILayoutOption*>*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUILayout::TextField
// Il2CppName: TextField
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(::Il2CppString*, ::Array<UnityEngine::GUILayoutOption*>*)>(&UnityEngine::GUILayout::TextField)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUILayout*), "TextField", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<::Array<UnityEngine::GUILayoutOption*>*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUILayout::TextArea
// Il2CppName: TextArea
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(::Il2CppString*, UnityEngine::GUIStyle*, ::Array<UnityEngine::GUILayoutOption*>*)>(&UnityEngine::GUILayout::TextArea)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUILayout*), "TextArea", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::GUIStyle*>(), ::il2cpp_utils::ExtractIndependentType<::Array<UnityEngine::GUILayoutOption*>*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUILayout::DoTextField
// Il2CppName: DoTextField
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(::Il2CppString*, int, bool, UnityEngine::GUIStyle*, ::Array<UnityEngine::GUILayoutOption*>*)>(&UnityEngine::GUILayout::DoTextField)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUILayout*), "DoTextField", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<bool>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::GUIStyle*>(), ::il2cpp_utils::ExtractIndependentType<::Array<UnityEngine::GUILayoutOption*>*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUILayout::Toggle
// Il2CppName: Toggle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(bool, ::Il2CppString*, ::Array<UnityEngine::GUILayoutOption*>*)>(&UnityEngine::GUILayout::Toggle)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUILayout*), "Toggle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<bool>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<::Array<UnityEngine::GUILayoutOption*>*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUILayout::DoToggle
// Il2CppName: DoToggle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(bool, UnityEngine::GUIContent*, UnityEngine::GUIStyle*, ::Array<UnityEngine::GUILayoutOption*>*)>(&UnityEngine::GUILayout::DoToggle)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUILayout*), "DoToggle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<bool>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::GUIContent*>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::GUIStyle*>(), ::il2cpp_utils::ExtractIndependentType<::Array<UnityEngine::GUILayoutOption*>*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUILayout::HorizontalSlider
// Il2CppName: HorizontalSlider
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(float, float, float, ::Array<UnityEngine::GUILayoutOption*>*)>(&UnityEngine::GUILayout::HorizontalSlider)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUILayout*), "HorizontalSlider", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<float>(), ::il2cpp_utils::ExtractIndependentType<float>(), ::il2cpp_utils::ExtractIndependentType<float>(), ::il2cpp_utils::ExtractIndependentType<::Array<UnityEngine::GUILayoutOption*>*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUILayout::DoHorizontalSlider
// Il2CppName: DoHorizontalSlider
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(float, float, float, UnityEngine::GUIStyle*, UnityEngine::GUIStyle*, ::Array<UnityEngine::GUILayoutOption*>*)>(&UnityEngine::GUILayout::DoHorizontalSlider)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUILayout*), "DoHorizontalSlider", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<float>(), ::il2cpp_utils::ExtractIndependentType<float>(), ::il2cpp_utils::ExtractIndependentType<float>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::GUIStyle*>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::GUIStyle*>(), ::il2cpp_utils::ExtractIndependentType<::Array<UnityEngine::GUILayoutOption*>*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUILayout::Space
// Il2CppName: Space
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(float)>(&UnityEngine::GUILayout::Space)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUILayout*), "Space", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<float>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUILayout::FlexibleSpace
// Il2CppName: FlexibleSpace
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::GUILayout::FlexibleSpace)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUILayout*), "FlexibleSpace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUILayout::BeginHorizontal
// Il2CppName: BeginHorizontal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Array<UnityEngine::GUILayoutOption*>*)>(&UnityEngine::GUILayout::BeginHorizontal)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUILayout*), "BeginHorizontal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<UnityEngine::GUILayoutOption*>*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUILayout::BeginHorizontal
// Il2CppName: BeginHorizontal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::GUIContent*, UnityEngine::GUIStyle*, ::Array<UnityEngine::GUILayoutOption*>*)>(&UnityEngine::GUILayout::BeginHorizontal)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUILayout*), "BeginHorizontal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::GUIContent*>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::GUIStyle*>(), ::il2cpp_utils::ExtractIndependentType<::Array<UnityEngine::GUILayoutOption*>*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUILayout::EndHorizontal
// Il2CppName: EndHorizontal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::GUILayout::EndHorizontal)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUILayout*), "EndHorizontal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUILayout::BeginVertical
// Il2CppName: BeginVertical
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Array<UnityEngine::GUILayoutOption*>*)>(&UnityEngine::GUILayout::BeginVertical)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUILayout*), "BeginVertical", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<UnityEngine::GUILayoutOption*>*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUILayout::BeginVertical
// Il2CppName: BeginVertical
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::GUIContent*, UnityEngine::GUIStyle*, ::Array<UnityEngine::GUILayoutOption*>*)>(&UnityEngine::GUILayout::BeginVertical)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUILayout*), "BeginVertical", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::GUIContent*>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::GUIStyle*>(), ::il2cpp_utils::ExtractIndependentType<::Array<UnityEngine::GUILayoutOption*>*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUILayout::EndVertical
// Il2CppName: EndVertical
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::GUILayout::EndVertical)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUILayout*), "EndVertical", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUILayout::BeginArea
// Il2CppName: BeginArea
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::Rect)>(&UnityEngine::GUILayout::BeginArea)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUILayout*), "BeginArea", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Rect>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUILayout::BeginArea
// Il2CppName: BeginArea
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::Rect, UnityEngine::GUIContent*, UnityEngine::GUIStyle*)>(&UnityEngine::GUILayout::BeginArea)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUILayout*), "BeginArea", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Rect>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::GUIContent*>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::GUIStyle*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUILayout::EndArea
// Il2CppName: EndArea
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::GUILayout::EndArea)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUILayout*), "EndArea", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUILayout::BeginScrollView
// Il2CppName: BeginScrollView
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector2 (*)(UnityEngine::Vector2, ::Array<UnityEngine::GUILayoutOption*>*)>(&UnityEngine::GUILayout::BeginScrollView)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUILayout*), "BeginScrollView", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector2>(), ::il2cpp_utils::ExtractIndependentType<::Array<UnityEngine::GUILayoutOption*>*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUILayout::BeginScrollView
// Il2CppName: BeginScrollView
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector2 (*)(UnityEngine::Vector2, bool, bool, UnityEngine::GUIStyle*, UnityEngine::GUIStyle*, UnityEngine::GUIStyle*, ::Array<UnityEngine::GUILayoutOption*>*)>(&UnityEngine::GUILayout::BeginScrollView)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUILayout*), "BeginScrollView", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector2>(), ::il2cpp_utils::ExtractIndependentType<bool>(), ::il2cpp_utils::ExtractIndependentType<bool>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::GUIStyle*>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::GUIStyle*>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::GUIStyle*>(), ::il2cpp_utils::ExtractIndependentType<::Array<UnityEngine::GUILayoutOption*>*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUILayout::EndScrollView
// Il2CppName: EndScrollView
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::GUILayout::EndScrollView)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUILayout*), "EndScrollView", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUILayout::EndScrollView
// Il2CppName: EndScrollView
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&UnityEngine::GUILayout::EndScrollView)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUILayout*), "EndScrollView", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<bool>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUILayout::Width
// Il2CppName: Width
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::GUILayoutOption* (*)(float)>(&UnityEngine::GUILayout::Width)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUILayout*), "Width", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<float>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUILayout::Height
// Il2CppName: Height
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::GUILayoutOption* (*)(float)>(&UnityEngine::GUILayout::Height)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUILayout*), "Height", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<float>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUILayout::ExpandWidth
// Il2CppName: ExpandWidth
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::GUILayoutOption* (*)(bool)>(&UnityEngine::GUILayout::ExpandWidth)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUILayout*), "ExpandWidth", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<bool>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUILayout::ExpandHeight
// Il2CppName: ExpandHeight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::GUILayoutOption* (*)(bool)>(&UnityEngine::GUILayout::ExpandHeight)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUILayout*), "ExpandHeight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<bool>()});
  }
};
