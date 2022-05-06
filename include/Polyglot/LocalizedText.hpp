// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Polyglot.LocalizedTextComponent`1
#include "Polyglot/LocalizedTextComponent_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Text
  class Text;
}
// Forward declaring namespace: Polyglot
namespace Polyglot {
  // Skipping declaration: LanguageDirection because it is already included!
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: TextAnchor
  struct TextAnchor;
}
// Completed forward declares
// Type namespace: Polyglot
namespace Polyglot {
  // Forward declaring type: LocalizedText
  class LocalizedText;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Polyglot::LocalizedText);
DEFINE_IL2CPP_ARG_TYPE(::Polyglot::LocalizedText*, "Polyglot", "LocalizedText");
// Type namespace: Polyglot
namespace Polyglot {
  // WARNING Size may be invalid!
  // Autogenerated type: Polyglot.LocalizedText
  // [TokenAttribute] Offset: FFFFFFFF
  // [AddComponentMenu] Offset: 10B1B34
  // [RequireComponent] Offset: 10B1B34
  class LocalizedText : public ::Polyglot::LocalizedTextComponent_1<::UnityEngine::UI::Text*> {
    public:
    // protected System.Void SetText(UnityEngine.UI.Text text, System.String value)
    // Offset: 0x2A365A0
    void SetText(::UnityEngine::UI::Text* text, ::StringW value);
    // protected System.Void UpdateAlignment(UnityEngine.UI.Text text, Polyglot.LanguageDirection direction)
    // Offset: 0x2A366BC
    void UpdateAlignment(::UnityEngine::UI::Text* text, ::Polyglot::LanguageDirection direction);
    // private System.Boolean IsOppositeDirection(UnityEngine.TextAnchor alignment, Polyglot.LanguageDirection direction)
    // Offset: 0x2A367A0
    bool IsOppositeDirection(::UnityEngine::TextAnchor alignment, ::Polyglot::LanguageDirection direction);
    // private System.Boolean IsAlignmentRight(UnityEngine.TextAnchor alignment)
    // Offset: 0x2A367F8
    bool IsAlignmentRight(::UnityEngine::TextAnchor alignment);
    // private System.Boolean IsAlignmentLeft(UnityEngine.TextAnchor alignment)
    // Offset: 0x2A36820
    bool IsAlignmentLeft(::UnityEngine::TextAnchor alignment);
    // public System.Void .ctor()
    // Offset: 0x2A36848
    // Implemented from: Polyglot.LocalizedTextComponent`1
    // Base method: System.Void LocalizedTextComponent_1::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LocalizedText* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Polyglot::LocalizedText::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LocalizedText*, creationType>()));
    }
  }; // Polyglot.LocalizedText
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Polyglot::LocalizedText::SetText
// Il2CppName: SetText
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Polyglot::LocalizedText::*)(::UnityEngine::UI::Text*, ::StringW)>(&Polyglot::LocalizedText::SetText)> {
  static const MethodInfo* get() {
    static auto* text = &::il2cpp_utils::GetClassFromName("UnityEngine.UI", "Text")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Polyglot::LocalizedText*), "SetText", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{text, value});
  }
};
// Writing MetadataGetter for method: Polyglot::LocalizedText::UpdateAlignment
// Il2CppName: UpdateAlignment
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Polyglot::LocalizedText::*)(::UnityEngine::UI::Text*, ::Polyglot::LanguageDirection)>(&Polyglot::LocalizedText::UpdateAlignment)> {
  static const MethodInfo* get() {
    static auto* text = &::il2cpp_utils::GetClassFromName("UnityEngine.UI", "Text")->byval_arg;
    static auto* direction = &::il2cpp_utils::GetClassFromName("Polyglot", "LanguageDirection")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Polyglot::LocalizedText*), "UpdateAlignment", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{text, direction});
  }
};
// Writing MetadataGetter for method: Polyglot::LocalizedText::IsOppositeDirection
// Il2CppName: IsOppositeDirection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Polyglot::LocalizedText::*)(::UnityEngine::TextAnchor, ::Polyglot::LanguageDirection)>(&Polyglot::LocalizedText::IsOppositeDirection)> {
  static const MethodInfo* get() {
    static auto* alignment = &::il2cpp_utils::GetClassFromName("UnityEngine", "TextAnchor")->byval_arg;
    static auto* direction = &::il2cpp_utils::GetClassFromName("Polyglot", "LanguageDirection")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Polyglot::LocalizedText*), "IsOppositeDirection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{alignment, direction});
  }
};
// Writing MetadataGetter for method: Polyglot::LocalizedText::IsAlignmentRight
// Il2CppName: IsAlignmentRight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Polyglot::LocalizedText::*)(::UnityEngine::TextAnchor)>(&Polyglot::LocalizedText::IsAlignmentRight)> {
  static const MethodInfo* get() {
    static auto* alignment = &::il2cpp_utils::GetClassFromName("UnityEngine", "TextAnchor")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Polyglot::LocalizedText*), "IsAlignmentRight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{alignment});
  }
};
// Writing MetadataGetter for method: Polyglot::LocalizedText::IsAlignmentLeft
// Il2CppName: IsAlignmentLeft
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Polyglot::LocalizedText::*)(::UnityEngine::TextAnchor)>(&Polyglot::LocalizedText::IsAlignmentLeft)> {
  static const MethodInfo* get() {
    static auto* alignment = &::il2cpp_utils::GetClassFromName("UnityEngine", "TextAnchor")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Polyglot::LocalizedText*), "IsAlignmentLeft", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{alignment});
  }
};
// Writing MetadataGetter for method: Polyglot::LocalizedText::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
