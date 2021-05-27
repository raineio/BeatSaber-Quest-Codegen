// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: BaseTransitionSO
#include "GlobalNamespace/BaseTransitionSO.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Sprite
  class Sprite;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: SpriteSwapTransitionSO
  class SpriteSwapTransitionSO : public GlobalNamespace::BaseTransitionSO {
    public:
    // private UnityEngine.Sprite _normalSprite
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::Sprite* normalSprite;
    // Field size check
    static_assert(sizeof(UnityEngine::Sprite*) == 0x8);
    // private UnityEngine.Sprite _highlightedSprite
    // Size: 0x8
    // Offset: 0x28
    UnityEngine::Sprite* highlightedSprite;
    // Field size check
    static_assert(sizeof(UnityEngine::Sprite*) == 0x8);
    // private UnityEngine.Sprite _pressedSprite
    // Size: 0x8
    // Offset: 0x30
    UnityEngine::Sprite* pressedSprite;
    // Field size check
    static_assert(sizeof(UnityEngine::Sprite*) == 0x8);
    // private UnityEngine.Sprite _disabledSprite
    // Size: 0x8
    // Offset: 0x38
    UnityEngine::Sprite* disabledSprite;
    // Field size check
    static_assert(sizeof(UnityEngine::Sprite*) == 0x8);
    // private UnityEngine.Sprite _selectedSprite
    // Size: 0x8
    // Offset: 0x40
    UnityEngine::Sprite* selectedSprite;
    // Field size check
    static_assert(sizeof(UnityEngine::Sprite*) == 0x8);
    // private UnityEngine.Sprite _selectedAndHighlightedSprite
    // Size: 0x8
    // Offset: 0x48
    UnityEngine::Sprite* selectedAndHighlightedSprite;
    // Field size check
    static_assert(sizeof(UnityEngine::Sprite*) == 0x8);
    // Creating value type constructor for type: SpriteSwapTransitionSO
    SpriteSwapTransitionSO(UnityEngine::Sprite* normalSprite_ = {}, UnityEngine::Sprite* highlightedSprite_ = {}, UnityEngine::Sprite* pressedSprite_ = {}, UnityEngine::Sprite* disabledSprite_ = {}, UnityEngine::Sprite* selectedSprite_ = {}, UnityEngine::Sprite* selectedAndHighlightedSprite_ = {}) noexcept : normalSprite{normalSprite_}, highlightedSprite{highlightedSprite_}, pressedSprite{pressedSprite_}, disabledSprite{disabledSprite_}, selectedSprite{selectedSprite_}, selectedAndHighlightedSprite{selectedAndHighlightedSprite_} {}
    // public UnityEngine.Sprite get_normalSprite()
    // Offset: 0x1176A4C
    UnityEngine::Sprite* get_normalSprite();
    // public UnityEngine.Sprite get_highlightedSprite()
    // Offset: 0x1176A54
    UnityEngine::Sprite* get_highlightedSprite();
    // public UnityEngine.Sprite get_pressedSprite()
    // Offset: 0x1176A5C
    UnityEngine::Sprite* get_pressedSprite();
    // public UnityEngine.Sprite get_disabledSprite()
    // Offset: 0x1176A64
    UnityEngine::Sprite* get_disabledSprite();
    // public UnityEngine.Sprite get_selectedSprite()
    // Offset: 0x1176A6C
    UnityEngine::Sprite* get_selectedSprite();
    // public UnityEngine.Sprite get_selectedAndHighlightedSprite()
    // Offset: 0x1176A74
    UnityEngine::Sprite* get_selectedAndHighlightedSprite();
    // public System.Void .ctor()
    // Offset: 0x1176A7C
    // Implemented from: BaseTransitionSO
    // Base method: System.Void BaseTransitionSO::.ctor()
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SpriteSwapTransitionSO* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::SpriteSwapTransitionSO::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SpriteSwapTransitionSO*, creationType>()));
    }
  }; // SpriteSwapTransitionSO
  #pragma pack(pop)
  static check_size<sizeof(SpriteSwapTransitionSO), 72 + sizeof(UnityEngine::Sprite*)> __GlobalNamespace_SpriteSwapTransitionSOSizeCheck;
  static_assert(sizeof(SpriteSwapTransitionSO) == 0x50);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SpriteSwapTransitionSO*, "", "SpriteSwapTransitionSO");