// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: MainEffectSO
#include "GlobalNamespace/MainEffectSO.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Shader
  class Shader;
  // Forward declaring type: Material
  class Material;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: NoPostProcessMainEffectSO
  class NoPostProcessMainEffectSO;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::NoPostProcessMainEffectSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NoPostProcessMainEffectSO*, "", "NoPostProcessMainEffectSO");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: NoPostProcessMainEffectSO
  // [TokenAttribute] Offset: FFFFFFFF
  class NoPostProcessMainEffectSO : public ::GlobalNamespace::MainEffectSO {
    public:
    public:
    // private UnityEngine.Shader _fadeShader
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::Shader* fadeShader;
    // Field size check
    static_assert(sizeof(::UnityEngine::Shader*) == 0x8);
    // [SpaceAttribute] Offset: 0x1110698
    // [RangeAttribute] Offset: 0x1110698
    // private System.Single _baseColorBoost
    // Size: 0x4
    // Offset: 0x20
    float baseColorBoost;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _baseColorBoostThreshold
    // Size: 0x4
    // Offset: 0x24
    float baseColorBoostThreshold;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.Material _fadeMaterial
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::Material* fadeMaterial;
    // Field size check
    static_assert(sizeof(::UnityEngine::Material*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private UnityEngine.Shader _fadeShader
    [[deprecated("Use field access instead!")]] ::UnityEngine::Shader*& dyn__fadeShader();
    // Get instance field reference: private System.Single _baseColorBoost
    [[deprecated("Use field access instead!")]] float& dyn__baseColorBoost();
    // Get instance field reference: private System.Single _baseColorBoostThreshold
    [[deprecated("Use field access instead!")]] float& dyn__baseColorBoostThreshold();
    // Get instance field reference: private UnityEngine.Material _fadeMaterial
    [[deprecated("Use field access instead!")]] ::UnityEngine::Material*& dyn__fadeMaterial();
    // protected System.Void OnDisable()
    // Offset: 0x2AEBE4C
    void OnDisable();
    // public System.Void DrawFadeQuad(System.Single alpha)
    // Offset: 0x2AEBED8
    void DrawFadeQuad(float alpha);
    // public override System.Boolean get_hasPostProcessEffect()
    // Offset: 0x2AEBDB4
    // Implemented from: MainEffectSO
    // Base method: System.Boolean MainEffectSO::get_hasPostProcessEffect()
    bool get_hasPostProcessEffect();
    // public System.Void .ctor()
    // Offset: 0x2AEBFEC
    // Implemented from: MainEffectSO
    // Base method: System.Void MainEffectSO::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NoPostProcessMainEffectSO* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::NoPostProcessMainEffectSO::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NoPostProcessMainEffectSO*, creationType>()));
    }
    // protected override System.Void OnEnable()
    // Offset: 0x2AEBDBC
    // Implemented from: PersistentScriptableObject
    // Base method: System.Void PersistentScriptableObject::OnEnable()
    void OnEnable();
    // public override System.Void PreRender()
    // Offset: 0x2AEBE58
    // Implemented from: MainEffectSO
    // Base method: System.Void MainEffectSO::PreRender()
    void PreRender();
    // public override System.Void PostRender(System.Single fade)
    // Offset: 0x2AEBECC
    // Implemented from: MainEffectSO
    // Base method: System.Void MainEffectSO::PostRender(System.Single fade)
    void PostRender(float fade);
  }; // NoPostProcessMainEffectSO
  #pragma pack(pop)
  static check_size<sizeof(NoPostProcessMainEffectSO), 40 + sizeof(::UnityEngine::Material*)> __GlobalNamespace_NoPostProcessMainEffectSOSizeCheck;
  static_assert(sizeof(NoPostProcessMainEffectSO) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::NoPostProcessMainEffectSO::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoPostProcessMainEffectSO::*)()>(&GlobalNamespace::NoPostProcessMainEffectSO::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoPostProcessMainEffectSO*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoPostProcessMainEffectSO::DrawFadeQuad
// Il2CppName: DrawFadeQuad
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoPostProcessMainEffectSO::*)(float)>(&GlobalNamespace::NoPostProcessMainEffectSO::DrawFadeQuad)> {
  static const MethodInfo* get() {
    static auto* alpha = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoPostProcessMainEffectSO*), "DrawFadeQuad", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{alpha});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoPostProcessMainEffectSO::get_hasPostProcessEffect
// Il2CppName: get_hasPostProcessEffect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::NoPostProcessMainEffectSO::*)()>(&GlobalNamespace::NoPostProcessMainEffectSO::get_hasPostProcessEffect)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoPostProcessMainEffectSO*), "get_hasPostProcessEffect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoPostProcessMainEffectSO::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::NoPostProcessMainEffectSO::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoPostProcessMainEffectSO::*)()>(&GlobalNamespace::NoPostProcessMainEffectSO::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoPostProcessMainEffectSO*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoPostProcessMainEffectSO::PreRender
// Il2CppName: PreRender
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoPostProcessMainEffectSO::*)()>(&GlobalNamespace::NoPostProcessMainEffectSO::PreRender)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoPostProcessMainEffectSO*), "PreRender", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoPostProcessMainEffectSO::PostRender
// Il2CppName: PostRender
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoPostProcessMainEffectSO::*)(float)>(&GlobalNamespace::NoPostProcessMainEffectSO::PostRender)> {
  static const MethodInfo* get() {
    static auto* fade = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoPostProcessMainEffectSO*), "PostRender", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{fade});
  }
};
