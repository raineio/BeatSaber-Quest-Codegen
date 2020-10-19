// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.TextCore.GlyphMetrics
#include "UnityEngine/TextCore/GlyphMetrics.hpp"
// Including type: UnityEngine.TextCore.GlyphRect
#include "UnityEngine/TextCore/GlyphRect.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::TextCore::LowLevel
namespace UnityEngine::TextCore::LowLevel {
  // Forward declaring type: GlyphMarshallingStruct
  struct GlyphMarshallingStruct;
}
// Completed forward declares
// Type namespace: UnityEngine.TextCore
namespace UnityEngine::TextCore {
  // Autogenerated type: UnityEngine.TextCore.Glyph
  class Glyph : public ::Il2CppObject {
    public:
    // private System.UInt32 m_Index
    // Offset: 0x10
    uint m_Index;
    // private UnityEngine.TextCore.GlyphMetrics m_Metrics
    // Offset: 0x14
    UnityEngine::TextCore::GlyphMetrics m_Metrics;
    // private UnityEngine.TextCore.GlyphRect m_GlyphRect
    // Offset: 0x28
    UnityEngine::TextCore::GlyphRect m_GlyphRect;
    // private System.Single m_Scale
    // Offset: 0x38
    float m_Scale;
    // private System.Int32 m_AtlasIndex
    // Offset: 0x3C
    int m_AtlasIndex;
    // public System.UInt32 get_index()
    // Offset: 0x1F55D3C
    uint get_index();
    // public System.Void set_index(System.UInt32 value)
    // Offset: 0x1F55D44
    void set_index(uint value);
    // public UnityEngine.TextCore.GlyphMetrics get_metrics()
    // Offset: 0x1F55D4C
    UnityEngine::TextCore::GlyphMetrics get_metrics();
    // public System.Void set_metrics(UnityEngine.TextCore.GlyphMetrics value)
    // Offset: 0x1F55D60
    void set_metrics(UnityEngine::TextCore::GlyphMetrics value);
    // public UnityEngine.TextCore.GlyphRect get_glyphRect()
    // Offset: 0x1F55D74
    UnityEngine::TextCore::GlyphRect get_glyphRect();
    // public System.Void set_glyphRect(UnityEngine.TextCore.GlyphRect value)
    // Offset: 0x1F55D80
    void set_glyphRect(UnityEngine::TextCore::GlyphRect value);
    // public System.Single get_scale()
    // Offset: 0x1F55D88
    float get_scale();
    // public System.Void set_scale(System.Single value)
    // Offset: 0x1F55D90
    void set_scale(float value);
    // public System.Int32 get_atlasIndex()
    // Offset: 0x1F55D98
    int get_atlasIndex();
    // public System.Void set_atlasIndex(System.Int32 value)
    // Offset: 0x1F55DA0
    void set_atlasIndex(int value);
    // System.Void .ctor(UnityEngine.TextCore.LowLevel.GlyphMarshallingStruct glyphStruct)
    // Offset: 0x1F55DDC
    static Glyph* New_ctor(UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct glyphStruct);
    // public System.Void .ctor(System.UInt32 index, UnityEngine.TextCore.GlyphMetrics metrics, UnityEngine.TextCore.GlyphRect glyphRect, System.Single scale, System.Int32 atlasIndex)
    // Offset: 0x1F55E4C
    static Glyph* New_ctor(uint index, UnityEngine::TextCore::GlyphMetrics metrics, UnityEngine::TextCore::GlyphRect glyphRect, float scale, int atlasIndex);
    // public System.Void .ctor()
    // Offset: 0x1F55DA8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static Glyph* New_ctor();
  }; // UnityEngine.TextCore.Glyph
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TextCore::Glyph*, "UnityEngine.TextCore", "Glyph");
#pragma pack(pop)
