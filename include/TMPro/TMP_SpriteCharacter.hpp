// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: TMPro.TMP_TextElement
#include "TMPro/TMP_TextElement.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TMP_SpriteGlyph
  class TMP_SpriteGlyph;
}
// Completed forward declares
// Type namespace: TMPro
namespace TMPro {
  // Autogenerated type: TMPro.TMP_SpriteCharacter
  class TMP_SpriteCharacter : public TMPro::TMP_TextElement {
    public:
    // private System.String m_Name
    // Offset: 0x28
    ::Il2CppString* m_Name;
    // private System.Int32 m_HashCode
    // Offset: 0x30
    int m_HashCode;
    // public System.String get_name()
    // Offset: 0xEDFB70
    ::Il2CppString* get_name();
    // public System.Void set_name(System.String value)
    // Offset: 0xEDF974
    void set_name(::Il2CppString* value);
    // public System.Int32 get_hashCode()
    // Offset: 0xEDFB78
    int get_hashCode();
    // public System.Void .ctor(System.UInt32 unicode, TMPro.TMP_SpriteGlyph glyph)
    // Offset: 0xEDF904
    static TMP_SpriteCharacter* New_ctor(uint unicode, TMPro::TMP_SpriteGlyph* glyph);
    // public System.Void .ctor()
    // Offset: 0xEDFB80
    // Implemented from: TMPro.TMP_TextElement
    // Base method: System.Void TMP_TextElement::.ctor()
    // Base method: System.Void Object::.ctor()
    static TMP_SpriteCharacter* New_ctor();
  }; // TMPro.TMP_SpriteCharacter
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(TMPro::TMP_SpriteCharacter*, "TMPro", "TMP_SpriteCharacter");
#pragma pack(pop)
