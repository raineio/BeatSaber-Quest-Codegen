// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Polyglot.LocalizedTextComponent`1
#include "Polyglot/LocalizedTextComponent_1.hpp"
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
  // Autogenerated type: Polyglot.LocalizedText
  class LocalizedText : public Polyglot::LocalizedTextComponent_1<UnityEngine::UI::Text*> {
    public:
    // protected System.Void SetText(UnityEngine.UI.Text text, System.String value)
    // Offset: 0x1EF06F8
    void SetText(UnityEngine::UI::Text* text, ::Il2CppString* value);
    // protected System.Void UpdateAlignment(UnityEngine.UI.Text text, Polyglot.LanguageDirection direction)
    // Offset: 0x1EF0814
    void UpdateAlignment(UnityEngine::UI::Text* text, Polyglot::LanguageDirection direction);
    // private System.Boolean IsOppositeDirection(UnityEngine.TextAnchor alignment, Polyglot.LanguageDirection direction)
    // Offset: 0x1EF08F8
    bool IsOppositeDirection(UnityEngine::TextAnchor alignment, Polyglot::LanguageDirection direction);
    // private System.Boolean IsAlignmentRight(UnityEngine.TextAnchor alignment)
    // Offset: 0x1EF0950
    bool IsAlignmentRight(UnityEngine::TextAnchor alignment);
    // private System.Boolean IsAlignmentLeft(UnityEngine.TextAnchor alignment)
    // Offset: 0x1EF0978
    bool IsAlignmentLeft(UnityEngine::TextAnchor alignment);
    // public System.Void .ctor()
    // Offset: 0x1EF09A0
    // Implemented from: Polyglot.LocalizedTextComponent`1
    // Base method: System.Void LocalizedTextComponent_1::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static LocalizedText* New_ctor();
  }; // Polyglot.LocalizedText
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Polyglot::LocalizedText*, "Polyglot", "LocalizedText");
#pragma pack(pop)
