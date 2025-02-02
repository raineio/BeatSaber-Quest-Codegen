// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: PersistentScriptableObject
#include "GlobalNamespace/PersistentScriptableObject.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: RenderTexture
  class RenderTexture;
  // Forward declaring type: Shader
  class Shader;
  // Forward declaring type: Material
  class Material;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: PyramidBloomRendererSO
  class PyramidBloomRendererSO;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::PyramidBloomRendererSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PyramidBloomRendererSO*, "", "PyramidBloomRendererSO");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x31
  #pragma pack(push, 1)
  // Autogenerated type: PyramidBloomRendererSO
  // [TokenAttribute] Offset: FFFFFFFF
  class PyramidBloomRendererSO : public ::GlobalNamespace::PersistentScriptableObject {
    public:
    // Nested type: ::GlobalNamespace::PyramidBloomRendererSO::Pass
    struct Pass;
    // Nested type: ::GlobalNamespace::PyramidBloomRendererSO::Level
    struct Level;
    // Size: 0x10
    #pragma pack(push, 1)
    // WARNING Layout: Sequential may not be correctly taken into account!
    // Autogenerated type: PyramidBloomRendererSO/Level
    // [TokenAttribute] Offset: FFFFFFFF
    struct Level/*, public ::System::ValueType*/ {
      public:
      public:
      // UnityEngine.RenderTexture down
      // Size: 0x8
      // Offset: 0x0
      ::UnityEngine::RenderTexture* down;
      // Field size check
      static_assert(sizeof(::UnityEngine::RenderTexture*) == 0x8);
      // UnityEngine.RenderTexture up
      // Size: 0x8
      // Offset: 0x8
      ::UnityEngine::RenderTexture* up;
      // Field size check
      static_assert(sizeof(::UnityEngine::RenderTexture*) == 0x8);
      public:
      // Creating value type constructor for type: Level
      constexpr Level(::UnityEngine::RenderTexture* down_ = {}, ::UnityEngine::RenderTexture* up_ = {}) noexcept : down{down_}, up{up_} {}
      // Creating interface conversion operator: operator ::System::ValueType
      operator ::System::ValueType() noexcept {
        return *reinterpret_cast<::System::ValueType*>(this);
      }
      // Creating interface conversion operator: i_ValueType
      inline ::System::ValueType* i_ValueType() noexcept {
        return reinterpret_cast<::System::ValueType*>(this);
      }
      // Get instance field reference: UnityEngine.RenderTexture down
      [[deprecated("Use field access instead!")]] ::UnityEngine::RenderTexture*& dyn_down();
      // Get instance field reference: UnityEngine.RenderTexture up
      [[deprecated("Use field access instead!")]] ::UnityEngine::RenderTexture*& dyn_up();
    }; // PyramidBloomRendererSO/Level
    #pragma pack(pop)
    static check_size<sizeof(PyramidBloomRendererSO::Level), 8 + sizeof(::UnityEngine::RenderTexture*)> __GlobalNamespace_PyramidBloomRendererSO_LevelSizeCheck;
    static_assert(sizeof(PyramidBloomRendererSO::Level) == 0x10);
    public:
    // private UnityEngine.Shader _shader
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::Shader* shader;
    // Field size check
    static_assert(sizeof(::UnityEngine::Shader*) == 0x8);
    // private UnityEngine.Material _material
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::Material* material;
    // Field size check
    static_assert(sizeof(::UnityEngine::Material*) == 0x8);
    // private PyramidBloomRendererSO/Level[] _pyramid
    // Size: 0x8
    // Offset: 0x28
    ::ArrayW<::GlobalNamespace::PyramidBloomRendererSO::Level> pyramid;
    // Field size check
    static_assert(sizeof(::ArrayW<::GlobalNamespace::PyramidBloomRendererSO::Level>) == 0x8);
    // private System.Boolean _initialized
    // Size: 0x1
    // Offset: 0x30
    bool initialized;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // static field const value: static private System.Int32 kMaxPyramidSize
    static constexpr const int kMaxPyramidSize = 16;
    // Get static field: static private System.Int32 kMaxPyramidSize
    static int _get_kMaxPyramidSize();
    // Set static field: static private System.Int32 kMaxPyramidSize
    static void _set_kMaxPyramidSize(int value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0x1105024
    // Get static field: static private readonly System.Int32 _bloomTexID
    static int _get__bloomTexID();
    // Set static field: static private readonly System.Int32 _bloomTexID
    static void _set__bloomTexID(int value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0x1105034
    // Get static field: static private readonly System.Int32 _globalIntensityTex
    static int _get__globalIntensityTex();
    // Set static field: static private readonly System.Int32 _globalIntensityTex
    static void _set__globalIntensityTex(int value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0x1105044
    // Get static field: static private readonly System.Int32 _brightnessID
    static int _get__brightnessID();
    // Set static field: static private readonly System.Int32 _brightnessID
    static void _set__brightnessID(int value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0x1105054
    // Get static field: static private readonly System.Int32 _autoExposureIntensityID
    static int _get__autoExposureIntensityID();
    // Set static field: static private readonly System.Int32 _autoExposureIntensityID
    static void _set__autoExposureIntensityID(int value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0x1105064
    // Get static field: static private readonly System.Int32 _sampleScaleID
    static int _get__sampleScaleID();
    // Set static field: static private readonly System.Int32 _sampleScaleID
    static void _set__sampleScaleID(int value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0x1105074
    // Get static field: static private readonly System.Int32 _combineSrcID
    static int _get__combineSrcID();
    // Set static field: static private readonly System.Int32 _combineSrcID
    static void _set__combineSrcID(int value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0x1105084
    // Get static field: static private readonly System.Int32 _combineDstID
    static int _get__combineDstID();
    // Set static field: static private readonly System.Int32 _combineDstID
    static void _set__combineDstID(int value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0x1105094
    // Get static field: static private readonly System.Int32 _alphaWeightsID
    static int _get__alphaWeightsID();
    // Set static field: static private readonly System.Int32 _alphaWeightsID
    static void _set__alphaWeightsID(int value);
    // Get instance field reference: private UnityEngine.Shader _shader
    [[deprecated("Use field access instead!")]] ::UnityEngine::Shader*& dyn__shader();
    // Get instance field reference: private UnityEngine.Material _material
    [[deprecated("Use field access instead!")]] ::UnityEngine::Material*& dyn__material();
    // Get instance field reference: private PyramidBloomRendererSO/Level[] _pyramid
    [[deprecated("Use field access instead!")]] ::ArrayW<::GlobalNamespace::PyramidBloomRendererSO::Level>& dyn__pyramid();
    // Get instance field reference: private System.Boolean _initialized
    [[deprecated("Use field access instead!")]] bool& dyn__initialized();
    // public System.Void .ctor()
    // Offset: 0x1CDEF50
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PyramidBloomRendererSO* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::PyramidBloomRendererSO::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PyramidBloomRendererSO*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x1CDEF58
    static void _cctor();
    // protected System.Void OnDisable()
    // Offset: 0x1CDE590
    void OnDisable();
    // public System.Void RenderBloom(UnityEngine.RenderTexture src, UnityEngine.RenderTexture dest, System.Single radius, System.Boolean alphaWeights, System.Boolean betterQuality, System.Boolean gammaCorrection)
    // Offset: 0x1CDE5C0
    void RenderBloom(::UnityEngine::RenderTexture* src, ::UnityEngine::RenderTexture* dest, float radius, bool alphaWeights, bool betterQuality, bool gammaCorrection);
    // public System.Void RenderBloom(UnityEngine.RenderTexture src, UnityEngine.RenderTexture dest, System.Single radius, System.Single intensity, System.Single fogBrightness, System.Single autoExposureIntensity, System.Single downIntensityOffset, System.Boolean uniformPyramidWeights, System.Boolean downsampleOnFirstPass, System.Single pyramidWeightsParam, System.Single alphaWeights, System.Single firstUpsampleBrightness, System.Single finalUpsampleBrightness, PyramidBloomRendererSO/Pass preFilterPass, PyramidBloomRendererSO/Pass downsamplePass, PyramidBloomRendererSO/Pass upsamplePass, PyramidBloomRendererSO/Pass finalUpsamplePass)
    // Offset: 0x1CDE64C
    void RenderBloom(::UnityEngine::RenderTexture* src, ::UnityEngine::RenderTexture* dest, float radius, float intensity, float fogBrightness, float autoExposureIntensity, float downIntensityOffset, bool uniformPyramidWeights, bool downsampleOnFirstPass, float pyramidWeightsParam, float alphaWeights, float firstUpsampleBrightness, float finalUpsampleBrightness, ::GlobalNamespace::PyramidBloomRendererSO::Pass preFilterPass, ::GlobalNamespace::PyramidBloomRendererSO::Pass downsamplePass, ::GlobalNamespace::PyramidBloomRendererSO::Pass upsamplePass, ::GlobalNamespace::PyramidBloomRendererSO::Pass finalUpsamplePass);
    // protected override System.Void OnEnable()
    // Offset: 0x1CDE458
    // Implemented from: PersistentScriptableObject
    // Base method: System.Void PersistentScriptableObject::OnEnable()
    void OnEnable();
  }; // PyramidBloomRendererSO
  #pragma pack(pop)
  static check_size<sizeof(PyramidBloomRendererSO), 48 + sizeof(bool)> __GlobalNamespace_PyramidBloomRendererSOSizeCheck;
  static_assert(sizeof(PyramidBloomRendererSO) == 0x31);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PyramidBloomRendererSO::Level, "", "PyramidBloomRendererSO/Level");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::PyramidBloomRendererSO::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::PyramidBloomRendererSO::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::PyramidBloomRendererSO::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PyramidBloomRendererSO*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PyramidBloomRendererSO::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PyramidBloomRendererSO::*)()>(&GlobalNamespace::PyramidBloomRendererSO::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PyramidBloomRendererSO*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PyramidBloomRendererSO::RenderBloom
// Il2CppName: RenderBloom
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PyramidBloomRendererSO::*)(::UnityEngine::RenderTexture*, ::UnityEngine::RenderTexture*, float, bool, bool, bool)>(&GlobalNamespace::PyramidBloomRendererSO::RenderBloom)> {
  static const MethodInfo* get() {
    static auto* src = &::il2cpp_utils::GetClassFromName("UnityEngine", "RenderTexture")->byval_arg;
    static auto* dest = &::il2cpp_utils::GetClassFromName("UnityEngine", "RenderTexture")->byval_arg;
    static auto* radius = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* alphaWeights = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* betterQuality = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* gammaCorrection = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PyramidBloomRendererSO*), "RenderBloom", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{src, dest, radius, alphaWeights, betterQuality, gammaCorrection});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PyramidBloomRendererSO::RenderBloom
// Il2CppName: RenderBloom
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PyramidBloomRendererSO::*)(::UnityEngine::RenderTexture*, ::UnityEngine::RenderTexture*, float, float, float, float, float, bool, bool, float, float, float, float, ::GlobalNamespace::PyramidBloomRendererSO::Pass, ::GlobalNamespace::PyramidBloomRendererSO::Pass, ::GlobalNamespace::PyramidBloomRendererSO::Pass, ::GlobalNamespace::PyramidBloomRendererSO::Pass)>(&GlobalNamespace::PyramidBloomRendererSO::RenderBloom)> {
  static const MethodInfo* get() {
    static auto* src = &::il2cpp_utils::GetClassFromName("UnityEngine", "RenderTexture")->byval_arg;
    static auto* dest = &::il2cpp_utils::GetClassFromName("UnityEngine", "RenderTexture")->byval_arg;
    static auto* radius = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* intensity = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* fogBrightness = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* autoExposureIntensity = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* downIntensityOffset = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* uniformPyramidWeights = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* downsampleOnFirstPass = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* pyramidWeightsParam = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* alphaWeights = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* firstUpsampleBrightness = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* finalUpsampleBrightness = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* preFilterPass = &::il2cpp_utils::GetClassFromName("", "PyramidBloomRendererSO/Pass")->byval_arg;
    static auto* downsamplePass = &::il2cpp_utils::GetClassFromName("", "PyramidBloomRendererSO/Pass")->byval_arg;
    static auto* upsamplePass = &::il2cpp_utils::GetClassFromName("", "PyramidBloomRendererSO/Pass")->byval_arg;
    static auto* finalUpsamplePass = &::il2cpp_utils::GetClassFromName("", "PyramidBloomRendererSO/Pass")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PyramidBloomRendererSO*), "RenderBloom", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{src, dest, radius, intensity, fogBrightness, autoExposureIntensity, downIntensityOffset, uniformPyramidWeights, downsampleOnFirstPass, pyramidWeightsParam, alphaWeights, firstUpsampleBrightness, finalUpsampleBrightness, preFilterPass, downsamplePass, upsamplePass, finalUpsamplePass});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PyramidBloomRendererSO::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PyramidBloomRendererSO::*)()>(&GlobalNamespace::PyramidBloomRendererSO::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PyramidBloomRendererSO*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
