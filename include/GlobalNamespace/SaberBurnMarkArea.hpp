// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.Plane
#include "UnityEngine/Plane.hpp"
// Including type: UnityEngine.ParticleSystem/UnityEngine.EmitParams
#include "UnityEngine/ParticleSystem_EmitParams.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: LineRenderer
  class LineRenderer;
  // Forward declaring type: Shader
  class Shader;
  // Forward declaring type: Renderer
  class Renderer;
  // Forward declaring type: Camera
  class Camera;
  // Forward declaring type: RenderTexture
  class RenderTexture;
  // Forward declaring type: Material
  class Material;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: ColorManager
  class ColorManager;
  // Forward declaring type: SaberManager
  class SaberManager;
  // Forward declaring type: Saber
  class Saber;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: SaberBurnMarkArea
  class SaberBurnMarkArea;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::SaberBurnMarkArea);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SaberBurnMarkArea*, "", "SaberBurnMarkArea");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x138
  #pragma pack(push, 1)
  // Autogenerated type: SaberBurnMarkArea
  // [TokenAttribute] Offset: FFFFFFFF
  // [RequireComponent] Offset: 10CCD18
  class SaberBurnMarkArea : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private UnityEngine.LineRenderer _saberBurnMarkLinePrefab
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::LineRenderer* saberBurnMarkLinePrefab;
    // Field size check
    static_assert(sizeof(::UnityEngine::LineRenderer*) == 0x8);
    // private System.Single _blackMarkLineRandomOffset
    // Size: 0x4
    // Offset: 0x20
    float blackMarkLineRandomOffset;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Int32 _textureWidth
    // Size: 0x4
    // Offset: 0x24
    int textureWidth;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _textureHeight
    // Size: 0x4
    // Offset: 0x28
    int textureHeight;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Single _burnMarksFadeOutStrength
    // Size: 0x4
    // Offset: 0x2C
    float burnMarksFadeOutStrength;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.Shader _fadeOutShader
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::Shader* fadeOutShader;
    // Field size check
    static_assert(sizeof(::UnityEngine::Shader*) == 0x8);
    // [InjectAttribute] Offset: 0x10D83B8
    // private readonly ColorManager _colorManager
    // Size: 0x8
    // Offset: 0x38
    ::GlobalNamespace::ColorManager* colorManager;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::ColorManager*) == 0x8);
    // [InjectAttribute] Offset: 0x10D83C8
    // private readonly SaberManager _saberManager
    // Size: 0x8
    // Offset: 0x40
    ::GlobalNamespace::SaberManager* saberManager;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::SaberManager*) == 0x8);
    // private UnityEngine.Renderer _renderer
    // Size: 0x8
    // Offset: 0x48
    ::UnityEngine::Renderer* renderer;
    // Field size check
    static_assert(sizeof(::UnityEngine::Renderer*) == 0x8);
    // private readonly System.Int32 _fadeOutStrengthShaderPropertyID
    // Size: 0x4
    // Offset: 0x50
    int fadeOutStrengthShaderPropertyID;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: fadeOutStrengthShaderPropertyID and: sabers
    char __padding9[0x4] = {};
    // private Saber[] _sabers
    // Size: 0x8
    // Offset: 0x58
    ::ArrayW<::GlobalNamespace::Saber*> sabers;
    // Field size check
    static_assert(sizeof(::ArrayW<::GlobalNamespace::Saber*>) == 0x8);
    // private UnityEngine.Plane _plane
    // Size: 0x10
    // Offset: 0x60
    ::UnityEngine::Plane plane;
    // Field size check
    static_assert(sizeof(::UnityEngine::Plane) == 0x10);
    // private UnityEngine.Vector3[] _prevBurnMarkPos
    // Size: 0x8
    // Offset: 0x70
    ::ArrayW<::UnityEngine::Vector3> prevBurnMarkPos;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Vector3>) == 0x8);
    // private System.Boolean[] _prevBurnMarkPosValid
    // Size: 0x8
    // Offset: 0x78
    ::ArrayW<bool> prevBurnMarkPosValid;
    // Field size check
    static_assert(sizeof(::ArrayW<bool>) == 0x8);
    // private UnityEngine.LineRenderer[] _lineRenderers
    // Size: 0x8
    // Offset: 0x80
    ::ArrayW<::UnityEngine::LineRenderer*> lineRenderers;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::LineRenderer*>) == 0x8);
    // private UnityEngine.Camera _camera
    // Size: 0x8
    // Offset: 0x88
    ::UnityEngine::Camera* camera;
    // Field size check
    static_assert(sizeof(::UnityEngine::Camera*) == 0x8);
    // private UnityEngine.Vector3[] _linePoints
    // Size: 0x8
    // Offset: 0x90
    ::ArrayW<::UnityEngine::Vector3> linePoints;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Vector3>) == 0x8);
    // private UnityEngine.RenderTexture[] _renderTextures
    // Size: 0x8
    // Offset: 0x98
    ::ArrayW<::UnityEngine::RenderTexture*> renderTextures;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::RenderTexture*>) == 0x8);
    // private UnityEngine.ParticleSystem/UnityEngine.EmitParams _emitParams
    // Size: 0x8F
    // Offset: 0xA0
    ::UnityEngine::ParticleSystem::EmitParams emitParams;
    // Field size check
    static_assert(sizeof(::UnityEngine::ParticleSystem::EmitParams) == 0x8F);
    // Padding between fields: emitParams and: fadeOutMaterial
    char __padding18[0x1] = {};
    // private UnityEngine.Material _fadeOutMaterial
    // Size: 0x8
    // Offset: 0x130
    ::UnityEngine::Material* fadeOutMaterial;
    // Field size check
    static_assert(sizeof(::UnityEngine::Material*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private UnityEngine.LineRenderer _saberBurnMarkLinePrefab
    [[deprecated("Use field access instead!")]] ::UnityEngine::LineRenderer*& dyn__saberBurnMarkLinePrefab();
    // Get instance field reference: private System.Single _blackMarkLineRandomOffset
    [[deprecated("Use field access instead!")]] float& dyn__blackMarkLineRandomOffset();
    // Get instance field reference: private System.Int32 _textureWidth
    [[deprecated("Use field access instead!")]] int& dyn__textureWidth();
    // Get instance field reference: private System.Int32 _textureHeight
    [[deprecated("Use field access instead!")]] int& dyn__textureHeight();
    // Get instance field reference: private System.Single _burnMarksFadeOutStrength
    [[deprecated("Use field access instead!")]] float& dyn__burnMarksFadeOutStrength();
    // Get instance field reference: private UnityEngine.Shader _fadeOutShader
    [[deprecated("Use field access instead!")]] ::UnityEngine::Shader*& dyn__fadeOutShader();
    // Get instance field reference: private readonly ColorManager _colorManager
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::ColorManager*& dyn__colorManager();
    // Get instance field reference: private readonly SaberManager _saberManager
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::SaberManager*& dyn__saberManager();
    // Get instance field reference: private UnityEngine.Renderer _renderer
    [[deprecated("Use field access instead!")]] ::UnityEngine::Renderer*& dyn__renderer();
    // Get instance field reference: private readonly System.Int32 _fadeOutStrengthShaderPropertyID
    [[deprecated("Use field access instead!")]] int& dyn__fadeOutStrengthShaderPropertyID();
    // Get instance field reference: private Saber[] _sabers
    [[deprecated("Use field access instead!")]] ::ArrayW<::GlobalNamespace::Saber*>& dyn__sabers();
    // Get instance field reference: private UnityEngine.Plane _plane
    [[deprecated("Use field access instead!")]] ::UnityEngine::Plane& dyn__plane();
    // Get instance field reference: private UnityEngine.Vector3[] _prevBurnMarkPos
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::Vector3>& dyn__prevBurnMarkPos();
    // Get instance field reference: private System.Boolean[] _prevBurnMarkPosValid
    [[deprecated("Use field access instead!")]] ::ArrayW<bool>& dyn__prevBurnMarkPosValid();
    // Get instance field reference: private UnityEngine.LineRenderer[] _lineRenderers
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::LineRenderer*>& dyn__lineRenderers();
    // Get instance field reference: private UnityEngine.Camera _camera
    [[deprecated("Use field access instead!")]] ::UnityEngine::Camera*& dyn__camera();
    // Get instance field reference: private UnityEngine.Vector3[] _linePoints
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::Vector3>& dyn__linePoints();
    // Get instance field reference: private UnityEngine.RenderTexture[] _renderTextures
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::RenderTexture*>& dyn__renderTextures();
    // Get instance field reference: private UnityEngine.ParticleSystem/UnityEngine.EmitParams _emitParams
    [[deprecated("Use field access instead!")]] ::UnityEngine::ParticleSystem::EmitParams& dyn__emitParams();
    // Get instance field reference: private UnityEngine.Material _fadeOutMaterial
    [[deprecated("Use field access instead!")]] ::UnityEngine::Material*& dyn__fadeOutMaterial();
    // public System.Void .ctor()
    // Offset: 0x1482608
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SaberBurnMarkArea* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::SaberBurnMarkArea::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SaberBurnMarkArea*, creationType>()));
    }
    // protected System.Void Start()
    // Offset: 0x1480E04
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0x1481638
    void OnDestroy();
    // protected System.Void OnEnable()
    // Offset: 0x14818AC
    void OnEnable();
    // protected System.Void OnDisable()
    // Offset: 0x14819F8
    void OnDisable();
    // private System.Boolean GetBurnMarkPos(UnityEngine.Vector3 bladeBottomPos, UnityEngine.Vector3 bladeTopPos, out UnityEngine.Vector3 burnMarkPos)
    // Offset: 0x1481B44
    bool GetBurnMarkPos(::UnityEngine::Vector3 bladeBottomPos, ::UnityEngine::Vector3 bladeTopPos, ByRef<::UnityEngine::Vector3> burnMarkPos);
    // private UnityEngine.Vector3 WorldToCameraBurnMarkPos(UnityEngine.Vector3 pos)
    // Offset: 0x1481DD4
    ::UnityEngine::Vector3 WorldToCameraBurnMarkPos(::UnityEngine::Vector3 pos);
    // protected System.Void LateUpdate()
    // Offset: 0x1481EFC
    void LateUpdate();
  }; // SaberBurnMarkArea
  #pragma pack(pop)
  static check_size<sizeof(SaberBurnMarkArea), 304 + sizeof(::UnityEngine::Material*)> __GlobalNamespace_SaberBurnMarkAreaSizeCheck;
  static_assert(sizeof(SaberBurnMarkArea) == 0x138);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::SaberBurnMarkArea::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::SaberBurnMarkArea::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SaberBurnMarkArea::*)()>(&GlobalNamespace::SaberBurnMarkArea::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SaberBurnMarkArea*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SaberBurnMarkArea::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SaberBurnMarkArea::*)()>(&GlobalNamespace::SaberBurnMarkArea::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SaberBurnMarkArea*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SaberBurnMarkArea::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SaberBurnMarkArea::*)()>(&GlobalNamespace::SaberBurnMarkArea::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SaberBurnMarkArea*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SaberBurnMarkArea::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SaberBurnMarkArea::*)()>(&GlobalNamespace::SaberBurnMarkArea::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SaberBurnMarkArea*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SaberBurnMarkArea::GetBurnMarkPos
// Il2CppName: GetBurnMarkPos
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::SaberBurnMarkArea::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ByRef<::UnityEngine::Vector3>)>(&GlobalNamespace::SaberBurnMarkArea::GetBurnMarkPos)> {
  static const MethodInfo* get() {
    static auto* bladeBottomPos = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* bladeTopPos = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* burnMarkPos = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SaberBurnMarkArea*), "GetBurnMarkPos", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bladeBottomPos, bladeTopPos, burnMarkPos});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SaberBurnMarkArea::WorldToCameraBurnMarkPos
// Il2CppName: WorldToCameraBurnMarkPos
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (GlobalNamespace::SaberBurnMarkArea::*)(::UnityEngine::Vector3)>(&GlobalNamespace::SaberBurnMarkArea::WorldToCameraBurnMarkPos)> {
  static const MethodInfo* get() {
    static auto* pos = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SaberBurnMarkArea*), "WorldToCameraBurnMarkPos", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pos});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SaberBurnMarkArea::LateUpdate
// Il2CppName: LateUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SaberBurnMarkArea::*)()>(&GlobalNamespace::SaberBurnMarkArea::LateUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SaberBurnMarkArea*), "LateUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
