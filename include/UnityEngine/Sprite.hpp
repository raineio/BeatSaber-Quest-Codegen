// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Object
#include "UnityEngine/Object.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Rect
  struct Rect;
  // Forward declaring type: Vector4
  struct Vector4;
  // Forward declaring type: Texture2D
  class Texture2D;
  // Forward declaring type: Vector2
  struct Vector2;
  // Forward declaring type: SpriteMeshType
  struct SpriteMeshType;
  // Forward declaring type: Bounds
  struct Bounds;
  // Forward declaring type: SpritePackingMode
  struct SpritePackingMode;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Autogenerated type: UnityEngine.Sprite
  class Sprite : public UnityEngine::Object {
    public:
    // System.Int32 GetPackingMode()
    // Offset: 0x17364B4
    int GetPackingMode();
    // System.Int32 GetPacked()
    // Offset: 0x17364F4
    int GetPacked();
    // UnityEngine.Rect GetTextureRect()
    // Offset: 0x1736534
    UnityEngine::Rect GetTextureRect();
    // UnityEngine.Vector4 GetInnerUVs()
    // Offset: 0x17365E0
    UnityEngine::Vector4 GetInnerUVs();
    // UnityEngine.Vector4 GetOuterUVs()
    // Offset: 0x173668C
    UnityEngine::Vector4 GetOuterUVs();
    // UnityEngine.Vector4 GetPadding()
    // Offset: 0x1736738
    UnityEngine::Vector4 GetPadding();
    // static UnityEngine.Sprite CreateSprite(UnityEngine.Texture2D texture, UnityEngine.Rect rect, UnityEngine.Vector2 pivot, System.Single pixelsPerUnit, System.UInt32 extrude, UnityEngine.SpriteMeshType meshType, UnityEngine.Vector4 border, System.Boolean generateFallbackPhysicsShape)
    // Offset: 0x17367E4
    static UnityEngine::Sprite* CreateSprite(UnityEngine::Texture2D* texture, UnityEngine::Rect rect, UnityEngine::Vector2 pivot, float pixelsPerUnit, uint extrude, UnityEngine::SpriteMeshType meshType, UnityEngine::Vector4 border, bool generateFallbackPhysicsShape);
    // public UnityEngine.Bounds get_bounds()
    // Offset: 0x1736920
    UnityEngine::Bounds get_bounds();
    // public UnityEngine.Rect get_rect()
    // Offset: 0x17369DC
    UnityEngine::Rect get_rect();
    // public UnityEngine.Vector4 get_border()
    // Offset: 0x1736A88
    UnityEngine::Vector4 get_border();
    // public UnityEngine.Texture2D get_texture()
    // Offset: 0x1736B34
    UnityEngine::Texture2D* get_texture();
    // public System.Single get_pixelsPerUnit()
    // Offset: 0x1736B74
    float get_pixelsPerUnit();
    // public UnityEngine.Texture2D get_associatedAlphaSplitTexture()
    // Offset: 0x1736BB4
    UnityEngine::Texture2D* get_associatedAlphaSplitTexture();
    // public UnityEngine.Vector2 get_pivot()
    // Offset: 0x1736BF4
    UnityEngine::Vector2 get_pivot();
    // public System.Boolean get_packed()
    // Offset: 0x1736C9C
    bool get_packed();
    // public UnityEngine.SpritePackingMode get_packingMode()
    // Offset: 0x1736CE8
    UnityEngine::SpritePackingMode get_packingMode();
    // public UnityEngine.Rect get_textureRect()
    // Offset: 0x1736D28
    UnityEngine::Rect get_textureRect();
    // public UnityEngine.Vector2[] get_vertices()
    // Offset: 0x1736DB8
    ::Array<UnityEngine::Vector2>* get_vertices();
    // public System.UInt16[] get_triangles()
    // Offset: 0x1736DF8
    ::Array<uint16_t>* get_triangles();
    // public UnityEngine.Vector2[] get_uv()
    // Offset: 0x1736E38
    ::Array<UnityEngine::Vector2>* get_uv();
    // static public UnityEngine.Sprite Create(UnityEngine.Texture2D texture, UnityEngine.Rect rect, UnityEngine.Vector2 pivot, System.Single pixelsPerUnit, System.UInt32 extrude, UnityEngine.SpriteMeshType meshType, UnityEngine.Vector4 border, System.Boolean generateFallbackPhysicsShape)
    // Offset: 0x1736E78
    static UnityEngine::Sprite* Create(UnityEngine::Texture2D* texture, UnityEngine::Rect rect, UnityEngine::Vector2 pivot, float pixelsPerUnit, uint extrude, UnityEngine::SpriteMeshType meshType, UnityEngine::Vector4 border, bool generateFallbackPhysicsShape);
    // private System.Void GetTextureRect_Injected(out UnityEngine.Rect ret)
    // Offset: 0x1736590
    void GetTextureRect_Injected(UnityEngine::Rect& ret);
    // private System.Void GetInnerUVs_Injected(out UnityEngine.Vector4 ret)
    // Offset: 0x173663C
    void GetInnerUVs_Injected(UnityEngine::Vector4& ret);
    // private System.Void GetOuterUVs_Injected(out UnityEngine.Vector4 ret)
    // Offset: 0x17366E8
    void GetOuterUVs_Injected(UnityEngine::Vector4& ret);
    // private System.Void GetPadding_Injected(out UnityEngine.Vector4 ret)
    // Offset: 0x1736794
    void GetPadding_Injected(UnityEngine::Vector4& ret);
    // static private UnityEngine.Sprite CreateSprite_Injected(UnityEngine.Texture2D texture, ref UnityEngine.Rect rect, ref UnityEngine.Vector2 pivot, System.Single pixelsPerUnit, System.UInt32 extrude, UnityEngine.SpriteMeshType meshType, ref UnityEngine.Vector4 border, System.Boolean generateFallbackPhysicsShape)
    // Offset: 0x1736888
    static UnityEngine::Sprite* CreateSprite_Injected(UnityEngine::Texture2D* texture, UnityEngine::Rect& rect, UnityEngine::Vector2& pivot, float pixelsPerUnit, uint extrude, UnityEngine::SpriteMeshType meshType, UnityEngine::Vector4& border, bool generateFallbackPhysicsShape);
    // private System.Void get_bounds_Injected(out UnityEngine.Bounds ret)
    // Offset: 0x173698C
    void get_bounds_Injected(UnityEngine::Bounds& ret);
    // private System.Void get_rect_Injected(out UnityEngine.Rect ret)
    // Offset: 0x1736A38
    void get_rect_Injected(UnityEngine::Rect& ret);
    // private System.Void get_border_Injected(out UnityEngine.Vector4 ret)
    // Offset: 0x1736AE4
    void get_border_Injected(UnityEngine::Vector4& ret);
    // private System.Void get_pivot_Injected(out UnityEngine.Vector2 ret)
    // Offset: 0x1736C4C
    void get_pivot_Injected(UnityEngine::Vector2& ret);
    // private System.Void .ctor()
    // Offset: 0x173644C
    // Implemented from: UnityEngine.Object
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static Sprite* New_ctor();
  }; // UnityEngine.Sprite
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Sprite*, "UnityEngine", "Sprite");
#pragma pack(pop)
