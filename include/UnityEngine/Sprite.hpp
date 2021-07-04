// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Object
#include "UnityEngine/Object.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
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
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Sprite
  // [NativeHeaderAttribute] Offset: D90C50
  // [ExcludeFromPresetAttribute] Offset: D90C50
  // [NativeHeaderAttribute] Offset: D90C50
  // [NativeHeaderAttribute] Offset: D90C50
  // [NativeTypeAttribute] Offset: D90C50
  class Sprite : public UnityEngine::Object {
    public:
    // Creating value type constructor for type: Sprite
    Sprite() noexcept {}
    // System.Int32 GetPackingMode()
    // Offset: 0x1B37FC4
    int GetPackingMode();
    // System.Int32 GetPacked()
    // Offset: 0x1B38004
    int GetPacked();
    // UnityEngine.Rect GetTextureRect()
    // Offset: 0x1B38044
    UnityEngine::Rect GetTextureRect();
    // UnityEngine.Vector4 GetInnerUVs()
    // Offset: 0x1B380F0
    UnityEngine::Vector4 GetInnerUVs();
    // UnityEngine.Vector4 GetOuterUVs()
    // Offset: 0x1B3819C
    UnityEngine::Vector4 GetOuterUVs();
    // UnityEngine.Vector4 GetPadding()
    // Offset: 0x1B38248
    UnityEngine::Vector4 GetPadding();
    // static UnityEngine.Sprite CreateSprite(UnityEngine.Texture2D texture, UnityEngine.Rect rect, UnityEngine.Vector2 pivot, System.Single pixelsPerUnit, System.UInt32 extrude, UnityEngine.SpriteMeshType meshType, UnityEngine.Vector4 border, System.Boolean generateFallbackPhysicsShape)
    // Offset: 0x1B382F4
    static UnityEngine::Sprite* CreateSprite(UnityEngine::Texture2D* texture, UnityEngine::Rect rect, UnityEngine::Vector2 pivot, float pixelsPerUnit, uint extrude, UnityEngine::SpriteMeshType meshType, UnityEngine::Vector4 border, bool generateFallbackPhysicsShape);
    // public UnityEngine.Bounds get_bounds()
    // Offset: 0x1B38430
    UnityEngine::Bounds get_bounds();
    // public UnityEngine.Rect get_rect()
    // Offset: 0x1B384EC
    UnityEngine::Rect get_rect();
    // public UnityEngine.Vector4 get_border()
    // Offset: 0x1B38598
    UnityEngine::Vector4 get_border();
    // public UnityEngine.Texture2D get_texture()
    // Offset: 0x1B38644
    UnityEngine::Texture2D* get_texture();
    // public System.Single get_pixelsPerUnit()
    // Offset: 0x1B38684
    float get_pixelsPerUnit();
    // public UnityEngine.Texture2D get_associatedAlphaSplitTexture()
    // Offset: 0x1B386C4
    UnityEngine::Texture2D* get_associatedAlphaSplitTexture();
    // public UnityEngine.Vector2 get_pivot()
    // Offset: 0x1B38704
    UnityEngine::Vector2 get_pivot();
    // public System.Boolean get_packed()
    // Offset: 0x1B387AC
    bool get_packed();
    // public UnityEngine.SpritePackingMode get_packingMode()
    // Offset: 0x1B387F8
    UnityEngine::SpritePackingMode get_packingMode();
    // public UnityEngine.Rect get_textureRect()
    // Offset: 0x1B38838
    UnityEngine::Rect get_textureRect();
    // public UnityEngine.Vector2[] get_vertices()
    // Offset: 0x1B388CC
    ::Array<UnityEngine::Vector2>* get_vertices();
    // public System.UInt16[] get_triangles()
    // Offset: 0x1B3890C
    ::Array<uint16_t>* get_triangles();
    // public UnityEngine.Vector2[] get_uv()
    // Offset: 0x1B3894C
    ::Array<UnityEngine::Vector2>* get_uv();
    // static public UnityEngine.Sprite Create(UnityEngine.Texture2D texture, UnityEngine.Rect rect, UnityEngine.Vector2 pivot, System.Single pixelsPerUnit, System.UInt32 extrude, UnityEngine.SpriteMeshType meshType, UnityEngine.Vector4 border, System.Boolean generateFallbackPhysicsShape)
    // Offset: 0x1B3898C
    static UnityEngine::Sprite* Create(UnityEngine::Texture2D* texture, UnityEngine::Rect rect, UnityEngine::Vector2 pivot, float pixelsPerUnit, uint extrude, UnityEngine::SpriteMeshType meshType, UnityEngine::Vector4 border, bool generateFallbackPhysicsShape);
    // private System.Void GetTextureRect_Injected(out UnityEngine.Rect ret)
    // Offset: 0x1B380A0
    void GetTextureRect_Injected(UnityEngine::Rect& ret);
    // private System.Void GetInnerUVs_Injected(out UnityEngine.Vector4 ret)
    // Offset: 0x1B3814C
    void GetInnerUVs_Injected(UnityEngine::Vector4& ret);
    // private System.Void GetOuterUVs_Injected(out UnityEngine.Vector4 ret)
    // Offset: 0x1B381F8
    void GetOuterUVs_Injected(UnityEngine::Vector4& ret);
    // private System.Void GetPadding_Injected(out UnityEngine.Vector4 ret)
    // Offset: 0x1B382A4
    void GetPadding_Injected(UnityEngine::Vector4& ret);
    // static private UnityEngine.Sprite CreateSprite_Injected(UnityEngine.Texture2D texture, ref UnityEngine.Rect rect, ref UnityEngine.Vector2 pivot, System.Single pixelsPerUnit, System.UInt32 extrude, UnityEngine.SpriteMeshType meshType, ref UnityEngine.Vector4 border, System.Boolean generateFallbackPhysicsShape)
    // Offset: 0x1B38398
    static UnityEngine::Sprite* CreateSprite_Injected(UnityEngine::Texture2D* texture, UnityEngine::Rect& rect, UnityEngine::Vector2& pivot, float pixelsPerUnit, uint extrude, UnityEngine::SpriteMeshType meshType, UnityEngine::Vector4& border, bool generateFallbackPhysicsShape);
    // private System.Void get_bounds_Injected(out UnityEngine.Bounds ret)
    // Offset: 0x1B3849C
    void get_bounds_Injected(UnityEngine::Bounds& ret);
    // private System.Void get_rect_Injected(out UnityEngine.Rect ret)
    // Offset: 0x1B38548
    void get_rect_Injected(UnityEngine::Rect& ret);
    // private System.Void get_border_Injected(out UnityEngine.Vector4 ret)
    // Offset: 0x1B385F4
    void get_border_Injected(UnityEngine::Vector4& ret);
    // private System.Void get_pivot_Injected(out UnityEngine.Vector2 ret)
    // Offset: 0x1B3875C
    void get_pivot_Injected(UnityEngine::Vector2& ret);
    // private System.Void .ctor()
    // Offset: 0x1B37F5C
    // Implemented from: UnityEngine.Object
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Sprite* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Sprite::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Sprite*, creationType>()));
    }
  }; // UnityEngine.Sprite
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Sprite*, "UnityEngine", "Sprite");
// Writing MetadataGetter for method: UnityEngine::Sprite::GetPackingMode
// Il2CppName: GetPackingMode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::Sprite::*)()>(&UnityEngine::Sprite::GetPackingMode)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Sprite*), "GetPackingMode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Sprite::GetPacked
// Il2CppName: GetPacked
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::Sprite::*)()>(&UnityEngine::Sprite::GetPacked)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Sprite*), "GetPacked", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Sprite::GetTextureRect
// Il2CppName: GetTextureRect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Rect (UnityEngine::Sprite::*)()>(&UnityEngine::Sprite::GetTextureRect)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Sprite*), "GetTextureRect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Sprite::GetInnerUVs
// Il2CppName: GetInnerUVs
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector4 (UnityEngine::Sprite::*)()>(&UnityEngine::Sprite::GetInnerUVs)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Sprite*), "GetInnerUVs", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Sprite::GetOuterUVs
// Il2CppName: GetOuterUVs
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector4 (UnityEngine::Sprite::*)()>(&UnityEngine::Sprite::GetOuterUVs)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Sprite*), "GetOuterUVs", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Sprite::GetPadding
// Il2CppName: GetPadding
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector4 (UnityEngine::Sprite::*)()>(&UnityEngine::Sprite::GetPadding)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Sprite*), "GetPadding", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Sprite::CreateSprite
// Il2CppName: CreateSprite
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Sprite* (*)(UnityEngine::Texture2D*, UnityEngine::Rect, UnityEngine::Vector2, float, uint, UnityEngine::SpriteMeshType, UnityEngine::Vector4, bool)>(&UnityEngine::Sprite::CreateSprite)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Sprite*), "CreateSprite", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Texture2D*>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Rect>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector2>(), ::il2cpp_utils::ExtractIndependentType<float>(), ::il2cpp_utils::ExtractIndependentType<uint>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::SpriteMeshType>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector4>(), ::il2cpp_utils::ExtractIndependentType<bool>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::Sprite::get_bounds
// Il2CppName: get_bounds
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Bounds (UnityEngine::Sprite::*)()>(&UnityEngine::Sprite::get_bounds)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Sprite*), "get_bounds", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Sprite::get_rect
// Il2CppName: get_rect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Rect (UnityEngine::Sprite::*)()>(&UnityEngine::Sprite::get_rect)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Sprite*), "get_rect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Sprite::get_border
// Il2CppName: get_border
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector4 (UnityEngine::Sprite::*)()>(&UnityEngine::Sprite::get_border)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Sprite*), "get_border", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Sprite::get_texture
// Il2CppName: get_texture
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Texture2D* (UnityEngine::Sprite::*)()>(&UnityEngine::Sprite::get_texture)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Sprite*), "get_texture", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Sprite::get_pixelsPerUnit
// Il2CppName: get_pixelsPerUnit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::Sprite::*)()>(&UnityEngine::Sprite::get_pixelsPerUnit)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Sprite*), "get_pixelsPerUnit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Sprite::get_associatedAlphaSplitTexture
// Il2CppName: get_associatedAlphaSplitTexture
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Texture2D* (UnityEngine::Sprite::*)()>(&UnityEngine::Sprite::get_associatedAlphaSplitTexture)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Sprite*), "get_associatedAlphaSplitTexture", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Sprite::get_pivot
// Il2CppName: get_pivot
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector2 (UnityEngine::Sprite::*)()>(&UnityEngine::Sprite::get_pivot)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Sprite*), "get_pivot", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Sprite::get_packed
// Il2CppName: get_packed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Sprite::*)()>(&UnityEngine::Sprite::get_packed)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Sprite*), "get_packed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Sprite::get_packingMode
// Il2CppName: get_packingMode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::SpritePackingMode (UnityEngine::Sprite::*)()>(&UnityEngine::Sprite::get_packingMode)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Sprite*), "get_packingMode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Sprite::get_textureRect
// Il2CppName: get_textureRect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Rect (UnityEngine::Sprite::*)()>(&UnityEngine::Sprite::get_textureRect)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Sprite*), "get_textureRect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Sprite::get_vertices
// Il2CppName: get_vertices
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<UnityEngine::Vector2>* (UnityEngine::Sprite::*)()>(&UnityEngine::Sprite::get_vertices)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Sprite*), "get_vertices", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Sprite::get_triangles
// Il2CppName: get_triangles
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<uint16_t>* (UnityEngine::Sprite::*)()>(&UnityEngine::Sprite::get_triangles)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Sprite*), "get_triangles", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Sprite::get_uv
// Il2CppName: get_uv
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<UnityEngine::Vector2>* (UnityEngine::Sprite::*)()>(&UnityEngine::Sprite::get_uv)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Sprite*), "get_uv", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Sprite::Create
// Il2CppName: Create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Sprite* (*)(UnityEngine::Texture2D*, UnityEngine::Rect, UnityEngine::Vector2, float, uint, UnityEngine::SpriteMeshType, UnityEngine::Vector4, bool)>(&UnityEngine::Sprite::Create)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Sprite*), "Create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Texture2D*>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Rect>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector2>(), ::il2cpp_utils::ExtractIndependentType<float>(), ::il2cpp_utils::ExtractIndependentType<uint>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::SpriteMeshType>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector4>(), ::il2cpp_utils::ExtractIndependentType<bool>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::Sprite::GetTextureRect_Injected
// Il2CppName: GetTextureRect_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Sprite::*)(UnityEngine::Rect&)>(&UnityEngine::Sprite::GetTextureRect_Injected)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Sprite*), "GetTextureRect_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Rect&>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::Sprite::GetInnerUVs_Injected
// Il2CppName: GetInnerUVs_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Sprite::*)(UnityEngine::Vector4&)>(&UnityEngine::Sprite::GetInnerUVs_Injected)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Sprite*), "GetInnerUVs_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector4&>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::Sprite::GetOuterUVs_Injected
// Il2CppName: GetOuterUVs_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Sprite::*)(UnityEngine::Vector4&)>(&UnityEngine::Sprite::GetOuterUVs_Injected)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Sprite*), "GetOuterUVs_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector4&>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::Sprite::GetPadding_Injected
// Il2CppName: GetPadding_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Sprite::*)(UnityEngine::Vector4&)>(&UnityEngine::Sprite::GetPadding_Injected)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Sprite*), "GetPadding_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector4&>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::Sprite::CreateSprite_Injected
// Il2CppName: CreateSprite_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Sprite* (*)(UnityEngine::Texture2D*, UnityEngine::Rect&, UnityEngine::Vector2&, float, uint, UnityEngine::SpriteMeshType, UnityEngine::Vector4&, bool)>(&UnityEngine::Sprite::CreateSprite_Injected)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Sprite*), "CreateSprite_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Texture2D*>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Rect&>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector2&>(), ::il2cpp_utils::ExtractIndependentType<float>(), ::il2cpp_utils::ExtractIndependentType<uint>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::SpriteMeshType>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector4&>(), ::il2cpp_utils::ExtractIndependentType<bool>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::Sprite::get_bounds_Injected
// Il2CppName: get_bounds_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Sprite::*)(UnityEngine::Bounds&)>(&UnityEngine::Sprite::get_bounds_Injected)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Sprite*), "get_bounds_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Bounds&>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::Sprite::get_rect_Injected
// Il2CppName: get_rect_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Sprite::*)(UnityEngine::Rect&)>(&UnityEngine::Sprite::get_rect_Injected)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Sprite*), "get_rect_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Rect&>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::Sprite::get_border_Injected
// Il2CppName: get_border_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Sprite::*)(UnityEngine::Vector4&)>(&UnityEngine::Sprite::get_border_Injected)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Sprite*), "get_border_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector4&>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::Sprite::get_pivot_Injected
// Il2CppName: get_pivot_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Sprite::*)(UnityEngine::Vector2&)>(&UnityEngine::Sprite::get_pivot_Injected)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Sprite*), "get_pivot_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector2&>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::Sprite::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
