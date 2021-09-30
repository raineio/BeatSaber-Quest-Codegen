// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.TextEditor
#include "UnityEngine/TextEditor.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.TextEditor/UnityEngine.CharacterType
  // [TokenAttribute] Offset: FFFFFFFF
  struct TextEditor::CharacterType/*, public System::Enum*/ {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    private:
    #endif
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: CharacterType
    constexpr CharacterType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.TextEditor/UnityEngine.CharacterType LetterLike
    static constexpr const int LetterLike = 0;
    // Get static field: static public UnityEngine.TextEditor/UnityEngine.CharacterType LetterLike
    static UnityEngine::TextEditor::CharacterType _get_LetterLike();
    // Set static field: static public UnityEngine.TextEditor/UnityEngine.CharacterType LetterLike
    static void _set_LetterLike(UnityEngine::TextEditor::CharacterType value);
    // static field const value: static public UnityEngine.TextEditor/UnityEngine.CharacterType Symbol
    static constexpr const int Symbol = 1;
    // Get static field: static public UnityEngine.TextEditor/UnityEngine.CharacterType Symbol
    static UnityEngine::TextEditor::CharacterType _get_Symbol();
    // Set static field: static public UnityEngine.TextEditor/UnityEngine.CharacterType Symbol
    static void _set_Symbol(UnityEngine::TextEditor::CharacterType value);
    // static field const value: static public UnityEngine.TextEditor/UnityEngine.CharacterType Symbol2
    static constexpr const int Symbol2 = 2;
    // Get static field: static public UnityEngine.TextEditor/UnityEngine.CharacterType Symbol2
    static UnityEngine::TextEditor::CharacterType _get_Symbol2();
    // Set static field: static public UnityEngine.TextEditor/UnityEngine.CharacterType Symbol2
    static void _set_Symbol2(UnityEngine::TextEditor::CharacterType value);
    // static field const value: static public UnityEngine.TextEditor/UnityEngine.CharacterType WhiteSpace
    static constexpr const int WhiteSpace = 3;
    // Get static field: static public UnityEngine.TextEditor/UnityEngine.CharacterType WhiteSpace
    static UnityEngine::TextEditor::CharacterType _get_WhiteSpace();
    // Set static field: static public UnityEngine.TextEditor/UnityEngine.CharacterType WhiteSpace
    static void _set_WhiteSpace(UnityEngine::TextEditor::CharacterType value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // UnityEngine.TextEditor/UnityEngine.CharacterType
  #pragma pack(pop)
  static check_size<sizeof(TextEditor::CharacterType), 0 + sizeof(int)> __UnityEngine_TextEditor_CharacterTypeSizeCheck;
  static_assert(sizeof(TextEditor::CharacterType) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TextEditor::CharacterType, "UnityEngine", "TextEditor/CharacterType");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
