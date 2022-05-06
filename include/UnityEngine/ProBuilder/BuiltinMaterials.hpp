// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: String
  class String;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Shader
  class Shader;
  // Forward declaring type: Material
  class Material;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Forward declaring type: BuiltinMaterials
  class BuiltinMaterials;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::ProBuilder::BuiltinMaterials);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::BuiltinMaterials*, "UnityEngine.ProBuilder", "BuiltinMaterials");
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ProBuilder.BuiltinMaterials
  // [TokenAttribute] Offset: FFFFFFFF
  class BuiltinMaterials : public ::Il2CppObject {
    public:
    // Get static field: static private System.Boolean s_IsInitialized
    static bool _get_s_IsInitialized();
    // Set static field: static private System.Boolean s_IsInitialized
    static void _set_s_IsInitialized(bool value);
    // static field const value: static public System.String faceShader
    static constexpr const char* faceShader = "Hidden/ProBuilder/FaceHighlight";
    // Get static field: static public System.String faceShader
    static ::StringW _get_faceShader();
    // Set static field: static public System.String faceShader
    static void _set_faceShader(::StringW value);
    // static field const value: static public System.String lineShader
    static constexpr const char* lineShader = "Hidden/ProBuilder/LineBillboard";
    // Get static field: static public System.String lineShader
    static ::StringW _get_lineShader();
    // Set static field: static public System.String lineShader
    static void _set_lineShader(::StringW value);
    // static field const value: static public System.String lineShaderMetal
    static constexpr const char* lineShaderMetal = "Hidden/ProBuilder/LineBillboardMetal";
    // Get static field: static public System.String lineShaderMetal
    static ::StringW _get_lineShaderMetal();
    // Set static field: static public System.String lineShaderMetal
    static void _set_lineShaderMetal(::StringW value);
    // static field const value: static public System.String pointShader
    static constexpr const char* pointShader = "Hidden/ProBuilder/PointBillboard";
    // Get static field: static public System.String pointShader
    static ::StringW _get_pointShader();
    // Set static field: static public System.String pointShader
    static void _set_pointShader(::StringW value);
    // static field const value: static public System.String wireShader
    static constexpr const char* wireShader = "Hidden/ProBuilder/FaceHighlight";
    // Get static field: static public System.String wireShader
    static ::StringW _get_wireShader();
    // Set static field: static public System.String wireShader
    static void _set_wireShader(::StringW value);
    // static field const value: static public System.String dotShader
    static constexpr const char* dotShader = "Hidden/ProBuilder/VertexShader";
    // Get static field: static public System.String dotShader
    static ::StringW _get_dotShader();
    // Set static field: static public System.String dotShader
    static void _set_dotShader(::StringW value);
    // Get static field: static readonly UnityEngine.Color previewColor
    static ::UnityEngine::Color _get_previewColor();
    // Set static field: static readonly UnityEngine.Color previewColor
    static void _set_previewColor(::UnityEngine::Color value);
    // Get static field: static private UnityEngine.Shader s_SelectionPickerShader
    static ::UnityEngine::Shader* _get_s_SelectionPickerShader();
    // Set static field: static private UnityEngine.Shader s_SelectionPickerShader
    static void _set_s_SelectionPickerShader(::UnityEngine::Shader* value);
    // Get static field: static private System.Boolean s_GeometryShadersSupported
    static bool _get_s_GeometryShadersSupported();
    // Set static field: static private System.Boolean s_GeometryShadersSupported
    static void _set_s_GeometryShadersSupported(bool value);
    // Get static field: static private UnityEngine.Material s_DefaultMaterial
    static ::UnityEngine::Material* _get_s_DefaultMaterial();
    // Set static field: static private UnityEngine.Material s_DefaultMaterial
    static void _set_s_DefaultMaterial(::UnityEngine::Material* value);
    // Get static field: static private UnityEngine.Material s_FacePickerMaterial
    static ::UnityEngine::Material* _get_s_FacePickerMaterial();
    // Set static field: static private UnityEngine.Material s_FacePickerMaterial
    static void _set_s_FacePickerMaterial(::UnityEngine::Material* value);
    // Get static field: static private UnityEngine.Material s_VertexPickerMaterial
    static ::UnityEngine::Material* _get_s_VertexPickerMaterial();
    // Set static field: static private UnityEngine.Material s_VertexPickerMaterial
    static void _set_s_VertexPickerMaterial(::UnityEngine::Material* value);
    // Get static field: static private UnityEngine.Material s_EdgePickerMaterial
    static ::UnityEngine::Material* _get_s_EdgePickerMaterial();
    // Set static field: static private UnityEngine.Material s_EdgePickerMaterial
    static void _set_s_EdgePickerMaterial(::UnityEngine::Material* value);
    // Get static field: static private UnityEngine.Material s_UnityDefaultDiffuse
    static ::UnityEngine::Material* _get_s_UnityDefaultDiffuse();
    // Set static field: static private UnityEngine.Material s_UnityDefaultDiffuse
    static void _set_s_UnityDefaultDiffuse(::UnityEngine::Material* value);
    // Get static field: static private UnityEngine.Material s_UnlitVertexColorMaterial
    static ::UnityEngine::Material* _get_s_UnlitVertexColorMaterial();
    // Set static field: static private UnityEngine.Material s_UnlitVertexColorMaterial
    static void _set_s_UnlitVertexColorMaterial(::UnityEngine::Material* value);
    // Get static field: static private UnityEngine.Material s_ShapePreviewMaterial
    static ::UnityEngine::Material* _get_s_ShapePreviewMaterial();
    // Set static field: static private UnityEngine.Material s_ShapePreviewMaterial
    static void _set_s_ShapePreviewMaterial(::UnityEngine::Material* value);
    // Get static field: static private System.String k_EdgePickerMaterial
    static ::StringW _get_k_EdgePickerMaterial();
    // Set static field: static private System.String k_EdgePickerMaterial
    static void _set_k_EdgePickerMaterial(::StringW value);
    // Get static field: static private System.String k_FacePickerMaterial
    static ::StringW _get_k_FacePickerMaterial();
    // Set static field: static private System.String k_FacePickerMaterial
    static void _set_k_FacePickerMaterial(::StringW value);
    // Get static field: static private System.String k_VertexPickerMaterial
    static ::StringW _get_k_VertexPickerMaterial();
    // Set static field: static private System.String k_VertexPickerMaterial
    static void _set_k_VertexPickerMaterial(::StringW value);
    // Get static field: static private System.String k_EdgePickerShader
    static ::StringW _get_k_EdgePickerShader();
    // Set static field: static private System.String k_EdgePickerShader
    static void _set_k_EdgePickerShader(::StringW value);
    // Get static field: static private System.String k_FacePickerShader
    static ::StringW _get_k_FacePickerShader();
    // Set static field: static private System.String k_FacePickerShader
    static void _set_k_FacePickerShader(::StringW value);
    // Get static field: static private System.String k_VertexPickerShader
    static ::StringW _get_k_VertexPickerShader();
    // Set static field: static private System.String k_VertexPickerShader
    static void _set_k_VertexPickerShader(::StringW value);
    // static public System.Boolean get_geometryShadersSupported()
    // Offset: 0x25003E0
    static bool get_geometryShadersSupported();
    // static public UnityEngine.Material get_defaultMaterial()
    // Offset: 0x250044C
    static ::UnityEngine::Material* get_defaultMaterial();
    // static UnityEngine.Shader get_selectionPickerShader()
    // Offset: 0x25004B8
    static ::UnityEngine::Shader* get_selectionPickerShader();
    // static UnityEngine.Material get_facePickerMaterial()
    // Offset: 0x2500524
    static ::UnityEngine::Material* get_facePickerMaterial();
    // static UnityEngine.Material get_vertexPickerMaterial()
    // Offset: 0x2500590
    static ::UnityEngine::Material* get_vertexPickerMaterial();
    // static UnityEngine.Material get_edgePickerMaterial()
    // Offset: 0x25005FC
    static ::UnityEngine::Material* get_edgePickerMaterial();
    // static UnityEngine.Material get_triggerMaterial()
    // Offset: 0x2500668
    static ::UnityEngine::Material* get_triggerMaterial();
    // static UnityEngine.Material get_colliderMaterial()
    // Offset: 0x2500758
    static ::UnityEngine::Material* get_colliderMaterial();
    // static UnityEngine.Material get_noDrawMaterial()
    // Offset: 0x2500848
    static ::UnityEngine::Material* get_noDrawMaterial();
    // static UnityEngine.Material get_unlitVertexColor()
    // Offset: 0x2500BCC
    static ::UnityEngine::Material* get_unlitVertexColor();
    // static UnityEngine.Material get_ShapePreviewMaterial()
    // Offset: 0x2500C38
    static ::UnityEngine::Material* get_ShapePreviewMaterial();
    // static private System.Void .cctor()
    // Offset: 0x2500CA4
    static void _cctor();
    // static private System.Void Init()
    // Offset: 0x24FFB70
    static void Init();
    // static UnityEngine.Material GetLegacyDiffuse()
    // Offset: 0x2500938
    static ::UnityEngine::Material* GetLegacyDiffuse();
    // static UnityEngine.Material GetDefaultMaterial()
    // Offset: 0x25001FC
    static ::UnityEngine::Material* GetDefaultMaterial();
  }; // UnityEngine.ProBuilder.BuiltinMaterials
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ProBuilder::BuiltinMaterials::get_geometryShadersSupported
// Il2CppName: get_geometryShadersSupported
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&UnityEngine::ProBuilder::BuiltinMaterials::get_geometryShadersSupported)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::BuiltinMaterials*), "get_geometryShadersSupported", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::BuiltinMaterials::get_defaultMaterial
// Il2CppName: get_defaultMaterial
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Material* (*)()>(&UnityEngine::ProBuilder::BuiltinMaterials::get_defaultMaterial)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::BuiltinMaterials*), "get_defaultMaterial", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::BuiltinMaterials::get_selectionPickerShader
// Il2CppName: get_selectionPickerShader
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Shader* (*)()>(&UnityEngine::ProBuilder::BuiltinMaterials::get_selectionPickerShader)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::BuiltinMaterials*), "get_selectionPickerShader", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::BuiltinMaterials::get_facePickerMaterial
// Il2CppName: get_facePickerMaterial
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Material* (*)()>(&UnityEngine::ProBuilder::BuiltinMaterials::get_facePickerMaterial)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::BuiltinMaterials*), "get_facePickerMaterial", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::BuiltinMaterials::get_vertexPickerMaterial
// Il2CppName: get_vertexPickerMaterial
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Material* (*)()>(&UnityEngine::ProBuilder::BuiltinMaterials::get_vertexPickerMaterial)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::BuiltinMaterials*), "get_vertexPickerMaterial", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::BuiltinMaterials::get_edgePickerMaterial
// Il2CppName: get_edgePickerMaterial
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Material* (*)()>(&UnityEngine::ProBuilder::BuiltinMaterials::get_edgePickerMaterial)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::BuiltinMaterials*), "get_edgePickerMaterial", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::BuiltinMaterials::get_triggerMaterial
// Il2CppName: get_triggerMaterial
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Material* (*)()>(&UnityEngine::ProBuilder::BuiltinMaterials::get_triggerMaterial)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::BuiltinMaterials*), "get_triggerMaterial", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::BuiltinMaterials::get_colliderMaterial
// Il2CppName: get_colliderMaterial
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Material* (*)()>(&UnityEngine::ProBuilder::BuiltinMaterials::get_colliderMaterial)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::BuiltinMaterials*), "get_colliderMaterial", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::BuiltinMaterials::get_noDrawMaterial
// Il2CppName: get_noDrawMaterial
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Material* (*)()>(&UnityEngine::ProBuilder::BuiltinMaterials::get_noDrawMaterial)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::BuiltinMaterials*), "get_noDrawMaterial", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::BuiltinMaterials::get_unlitVertexColor
// Il2CppName: get_unlitVertexColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Material* (*)()>(&UnityEngine::ProBuilder::BuiltinMaterials::get_unlitVertexColor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::BuiltinMaterials*), "get_unlitVertexColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::BuiltinMaterials::get_ShapePreviewMaterial
// Il2CppName: get_ShapePreviewMaterial
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Material* (*)()>(&UnityEngine::ProBuilder::BuiltinMaterials::get_ShapePreviewMaterial)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::BuiltinMaterials*), "get_ShapePreviewMaterial", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::BuiltinMaterials::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::ProBuilder::BuiltinMaterials::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::BuiltinMaterials*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::BuiltinMaterials::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::ProBuilder::BuiltinMaterials::Init)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::BuiltinMaterials*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::BuiltinMaterials::GetLegacyDiffuse
// Il2CppName: GetLegacyDiffuse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Material* (*)()>(&UnityEngine::ProBuilder::BuiltinMaterials::GetLegacyDiffuse)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::BuiltinMaterials*), "GetLegacyDiffuse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::BuiltinMaterials::GetDefaultMaterial
// Il2CppName: GetDefaultMaterial
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Material* (*)()>(&UnityEngine::ProBuilder::BuiltinMaterials::GetDefaultMaterial)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::BuiltinMaterials*), "GetDefaultMaterial", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
