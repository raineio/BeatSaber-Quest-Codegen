// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
  // Forward declaring type: HashSet`1<T>
  template<typename T>
  class HashSet_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Font
  class Font;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Text
  class Text;
}
// Completed forward declares
// Type namespace: UnityEngine.UI
namespace UnityEngine::UI {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UI.FontUpdateTracker
  class FontUpdateTracker : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: FontUpdateTracker
    FontUpdateTracker() noexcept {}
    // Get static field: static private System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.HashSet`1<UnityEngine.UI.Text>> m_Tracked
    static System::Collections::Generic::Dictionary_2<UnityEngine::Font*, System::Collections::Generic::HashSet_1<UnityEngine::UI::Text*>*>* _get_m_Tracked();
    // Set static field: static private System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.HashSet`1<UnityEngine.UI.Text>> m_Tracked
    static void _set_m_Tracked(System::Collections::Generic::Dictionary_2<UnityEngine::Font*, System::Collections::Generic::HashSet_1<UnityEngine::UI::Text*>*>* value);
    // static public System.Void TrackText(UnityEngine.UI.Text t)
    // Offset: 0x1912F20
    static void TrackText(UnityEngine::UI::Text* t);
    // static private System.Void RebuildForFont(UnityEngine.Font f)
    // Offset: 0x191312C
    static void RebuildForFont(UnityEngine::Font* f);
    // static public System.Void UntrackText(UnityEngine.UI.Text t)
    // Offset: 0x1913270
    static void UntrackText(UnityEngine::UI::Text* t);
    // static private System.Void .cctor()
    // Offset: 0x1913440
    static void _cctor();
  }; // UnityEngine.UI.FontUpdateTracker
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::FontUpdateTracker*, "UnityEngine.UI", "FontUpdateTracker");
// Writing MetadataGetter for method: UnityEngine::UI::FontUpdateTracker::TrackText
// Il2CppName: TrackText
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::UI::Text*)>(&UnityEngine::UI::FontUpdateTracker::TrackText)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::FontUpdateTracker*), "TrackText", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::UI::Text*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::FontUpdateTracker::RebuildForFont
// Il2CppName: RebuildForFont
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::Font*)>(&UnityEngine::UI::FontUpdateTracker::RebuildForFont)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::FontUpdateTracker*), "RebuildForFont", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Font*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::FontUpdateTracker::UntrackText
// Il2CppName: UntrackText
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::UI::Text*)>(&UnityEngine::UI::FontUpdateTracker::UntrackText)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::FontUpdateTracker*), "UntrackText", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::UI::Text*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::FontUpdateTracker::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::UI::FontUpdateTracker::_cctor)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::FontUpdateTracker*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
