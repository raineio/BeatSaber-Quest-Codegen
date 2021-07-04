// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: String
  class String;
}
// Completed forward declares
// Type namespace: UnityEngine.UI
namespace UnityEngine::UI {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UI.AnimationTriggers
  class AnimationTriggers : public ::Il2CppObject {
    public:
    // [FormerlySerializedAsAttribute] Offset: 0xDC5F28
    // private System.String m_NormalTrigger
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* m_NormalTrigger;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // [FormerlySerializedAsAttribute] Offset: 0xDC5F74
    // private System.String m_HighlightedTrigger
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* m_HighlightedTrigger;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // [FormerlySerializedAsAttribute] Offset: 0xDC5FC0
    // private System.String m_PressedTrigger
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppString* m_PressedTrigger;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // [FormerlySerializedAsAttribute] Offset: 0xDC600C
    // private System.String m_SelectedTrigger
    // Size: 0x8
    // Offset: 0x28
    ::Il2CppString* m_SelectedTrigger;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // [FormerlySerializedAsAttribute] Offset: 0xDC6058
    // private System.String m_DisabledTrigger
    // Size: 0x8
    // Offset: 0x30
    ::Il2CppString* m_DisabledTrigger;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: AnimationTriggers
    AnimationTriggers(::Il2CppString* m_NormalTrigger_ = {}, ::Il2CppString* m_HighlightedTrigger_ = {}, ::Il2CppString* m_PressedTrigger_ = {}, ::Il2CppString* m_SelectedTrigger_ = {}, ::Il2CppString* m_DisabledTrigger_ = {}) noexcept : m_NormalTrigger{m_NormalTrigger_}, m_HighlightedTrigger{m_HighlightedTrigger_}, m_PressedTrigger{m_PressedTrigger_}, m_SelectedTrigger{m_SelectedTrigger_}, m_DisabledTrigger{m_DisabledTrigger_} {}
    // static field const value: static private System.String kDefaultNormalAnimName
    static constexpr const char* kDefaultNormalAnimName = "Normal";
    // Get static field: static private System.String kDefaultNormalAnimName
    static ::Il2CppString* _get_kDefaultNormalAnimName();
    // Set static field: static private System.String kDefaultNormalAnimName
    static void _set_kDefaultNormalAnimName(::Il2CppString* value);
    // static field const value: static private System.String kDefaultHighlightedAnimName
    static constexpr const char* kDefaultHighlightedAnimName = "Highlighted";
    // Get static field: static private System.String kDefaultHighlightedAnimName
    static ::Il2CppString* _get_kDefaultHighlightedAnimName();
    // Set static field: static private System.String kDefaultHighlightedAnimName
    static void _set_kDefaultHighlightedAnimName(::Il2CppString* value);
    // static field const value: static private System.String kDefaultPressedAnimName
    static constexpr const char* kDefaultPressedAnimName = "Pressed";
    // Get static field: static private System.String kDefaultPressedAnimName
    static ::Il2CppString* _get_kDefaultPressedAnimName();
    // Set static field: static private System.String kDefaultPressedAnimName
    static void _set_kDefaultPressedAnimName(::Il2CppString* value);
    // static field const value: static private System.String kDefaultSelectedAnimName
    static constexpr const char* kDefaultSelectedAnimName = "Selected";
    // Get static field: static private System.String kDefaultSelectedAnimName
    static ::Il2CppString* _get_kDefaultSelectedAnimName();
    // Set static field: static private System.String kDefaultSelectedAnimName
    static void _set_kDefaultSelectedAnimName(::Il2CppString* value);
    // static field const value: static private System.String kDefaultDisabledAnimName
    static constexpr const char* kDefaultDisabledAnimName = "Disabled";
    // Get static field: static private System.String kDefaultDisabledAnimName
    static ::Il2CppString* _get_kDefaultDisabledAnimName();
    // Set static field: static private System.String kDefaultDisabledAnimName
    static void _set_kDefaultDisabledAnimName(::Il2CppString* value);
    // public System.String get_normalTrigger()
    // Offset: 0x1437EC0
    ::Il2CppString* get_normalTrigger();
    // public System.Void set_normalTrigger(System.String value)
    // Offset: 0x1437EC8
    void set_normalTrigger(::Il2CppString* value);
    // public System.String get_highlightedTrigger()
    // Offset: 0x1437ED0
    ::Il2CppString* get_highlightedTrigger();
    // public System.Void set_highlightedTrigger(System.String value)
    // Offset: 0x1437ED8
    void set_highlightedTrigger(::Il2CppString* value);
    // public System.String get_pressedTrigger()
    // Offset: 0x1437EE0
    ::Il2CppString* get_pressedTrigger();
    // public System.Void set_pressedTrigger(System.String value)
    // Offset: 0x1437EE8
    void set_pressedTrigger(::Il2CppString* value);
    // public System.String get_selectedTrigger()
    // Offset: 0x1437EF0
    ::Il2CppString* get_selectedTrigger();
    // public System.Void set_selectedTrigger(System.String value)
    // Offset: 0x1437EF8
    void set_selectedTrigger(::Il2CppString* value);
    // public System.String get_disabledTrigger()
    // Offset: 0x1437F00
    ::Il2CppString* get_disabledTrigger();
    // public System.Void set_disabledTrigger(System.String value)
    // Offset: 0x1437F08
    void set_disabledTrigger(::Il2CppString* value);
    // public System.Void .ctor()
    // Offset: 0x1437F10
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AnimationTriggers* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::UI::AnimationTriggers::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AnimationTriggers*, creationType>()));
    }
  }; // UnityEngine.UI.AnimationTriggers
  #pragma pack(pop)
  static check_size<sizeof(AnimationTriggers), 48 + sizeof(::Il2CppString*)> __UnityEngine_UI_AnimationTriggersSizeCheck;
  static_assert(sizeof(AnimationTriggers) == 0x38);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::AnimationTriggers*, "UnityEngine.UI", "AnimationTriggers");
// Writing MetadataGetter for method: UnityEngine::UI::AnimationTriggers::get_normalTrigger
// Il2CppName: get_normalTrigger
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (UnityEngine::UI::AnimationTriggers::*)()>(&UnityEngine::UI::AnimationTriggers::get_normalTrigger)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::AnimationTriggers*), "get_normalTrigger", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::AnimationTriggers::set_normalTrigger
// Il2CppName: set_normalTrigger
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::AnimationTriggers::*)(::Il2CppString*)>(&UnityEngine::UI::AnimationTriggers::set_normalTrigger)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::AnimationTriggers*), "set_normalTrigger", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::AnimationTriggers::get_highlightedTrigger
// Il2CppName: get_highlightedTrigger
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (UnityEngine::UI::AnimationTriggers::*)()>(&UnityEngine::UI::AnimationTriggers::get_highlightedTrigger)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::AnimationTriggers*), "get_highlightedTrigger", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::AnimationTriggers::set_highlightedTrigger
// Il2CppName: set_highlightedTrigger
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::AnimationTriggers::*)(::Il2CppString*)>(&UnityEngine::UI::AnimationTriggers::set_highlightedTrigger)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::AnimationTriggers*), "set_highlightedTrigger", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::AnimationTriggers::get_pressedTrigger
// Il2CppName: get_pressedTrigger
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (UnityEngine::UI::AnimationTriggers::*)()>(&UnityEngine::UI::AnimationTriggers::get_pressedTrigger)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::AnimationTriggers*), "get_pressedTrigger", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::AnimationTriggers::set_pressedTrigger
// Il2CppName: set_pressedTrigger
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::AnimationTriggers::*)(::Il2CppString*)>(&UnityEngine::UI::AnimationTriggers::set_pressedTrigger)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::AnimationTriggers*), "set_pressedTrigger", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::AnimationTriggers::get_selectedTrigger
// Il2CppName: get_selectedTrigger
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (UnityEngine::UI::AnimationTriggers::*)()>(&UnityEngine::UI::AnimationTriggers::get_selectedTrigger)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::AnimationTriggers*), "get_selectedTrigger", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::AnimationTriggers::set_selectedTrigger
// Il2CppName: set_selectedTrigger
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::AnimationTriggers::*)(::Il2CppString*)>(&UnityEngine::UI::AnimationTriggers::set_selectedTrigger)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::AnimationTriggers*), "set_selectedTrigger", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::AnimationTriggers::get_disabledTrigger
// Il2CppName: get_disabledTrigger
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (UnityEngine::UI::AnimationTriggers::*)()>(&UnityEngine::UI::AnimationTriggers::get_disabledTrigger)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::AnimationTriggers*), "get_disabledTrigger", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::AnimationTriggers::set_disabledTrigger
// Il2CppName: set_disabledTrigger
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::AnimationTriggers::*)(::Il2CppString*)>(&UnityEngine::UI::AnimationTriggers::set_disabledTrigger)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::AnimationTriggers*), "set_disabledTrigger", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::AnimationTriggers::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
