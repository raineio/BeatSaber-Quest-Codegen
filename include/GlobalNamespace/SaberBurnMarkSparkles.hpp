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
// Including type: UnityEngine.ParticleSystem/UnityEngine.EmissionModule
#include "UnityEngine/ParticleSystem_EmissionModule.hpp"
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
  // Skipping declaration: ParticleSystem because it is already included!
  // Forward declaring type: BoxCollider
  class BoxCollider;
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
  // Forward declaring type: SaberBurnMarkSparkles
  class SaberBurnMarkSparkles;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::SaberBurnMarkSparkles);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SaberBurnMarkSparkles*, "", "SaberBurnMarkSparkles");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x107
  #pragma pack(push, 1)
  // Autogenerated type: SaberBurnMarkSparkles
  // [TokenAttribute] Offset: FFFFFFFF
  class SaberBurnMarkSparkles : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private UnityEngine.ParticleSystem _sparklesPS
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::ParticleSystem* sparklesPS;
    // Field size check
    static_assert(sizeof(::UnityEngine::ParticleSystem*) == 0x8);
    // private UnityEngine.ParticleSystem _burnMarksPSPrefab
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::ParticleSystem* burnMarksPSPrefab;
    // Field size check
    static_assert(sizeof(::UnityEngine::ParticleSystem*) == 0x8);
    // private UnityEngine.BoxCollider _boxCollider
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::BoxCollider* boxCollider;
    // Field size check
    static_assert(sizeof(::UnityEngine::BoxCollider*) == 0x8);
    // [InjectAttribute] Offset: 0x10D5898
    // private readonly ColorManager _colorManager
    // Size: 0x8
    // Offset: 0x30
    ::GlobalNamespace::ColorManager* colorManager;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::ColorManager*) == 0x8);
    // [InjectAttribute] Offset: 0x10D58A8
    // private readonly SaberManager _saberManager
    // Size: 0x8
    // Offset: 0x38
    ::GlobalNamespace::SaberManager* saberManager;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::SaberManager*) == 0x8);
    // private Saber[] _sabers
    // Size: 0x8
    // Offset: 0x40
    ::ArrayW<::GlobalNamespace::Saber*> sabers;
    // Field size check
    static_assert(sizeof(::ArrayW<::GlobalNamespace::Saber*>) == 0x8);
    // private UnityEngine.Plane _plane
    // Size: 0x10
    // Offset: 0x48
    ::UnityEngine::Plane plane;
    // Field size check
    static_assert(sizeof(::UnityEngine::Plane) == 0x10);
    // private UnityEngine.Vector3[] _prevBurnMarkPos
    // Size: 0x8
    // Offset: 0x58
    ::ArrayW<::UnityEngine::Vector3> prevBurnMarkPos;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Vector3>) == 0x8);
    // private System.Boolean[] _prevBurnMarkPosValid
    // Size: 0x8
    // Offset: 0x60
    ::ArrayW<bool> prevBurnMarkPosValid;
    // Field size check
    static_assert(sizeof(::ArrayW<bool>) == 0x8);
    // private UnityEngine.ParticleSystem[] _burnMarksPS
    // Size: 0x8
    // Offset: 0x68
    ::ArrayW<::UnityEngine::ParticleSystem*> burnMarksPS;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::ParticleSystem*>) == 0x8);
    // private UnityEngine.ParticleSystem/UnityEngine.EmissionModule[] _burnMarksEmissionModules
    // Size: 0x8
    // Offset: 0x70
    ::ArrayW<::UnityEngine::ParticleSystem::EmissionModule> burnMarksEmissionModules;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::ParticleSystem::EmissionModule>) == 0x8);
    // private UnityEngine.ParticleSystem/UnityEngine.EmitParams _sparklesEmitParams
    // Size: 0x8F
    // Offset: 0x78
    ::UnityEngine::ParticleSystem::EmitParams sparklesEmitParams;
    // Field size check
    static_assert(sizeof(::UnityEngine::ParticleSystem::EmitParams) == 0x8F);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private UnityEngine.ParticleSystem _sparklesPS
    [[deprecated("Use field access instead!")]] ::UnityEngine::ParticleSystem*& dyn__sparklesPS();
    // Get instance field reference: private UnityEngine.ParticleSystem _burnMarksPSPrefab
    [[deprecated("Use field access instead!")]] ::UnityEngine::ParticleSystem*& dyn__burnMarksPSPrefab();
    // Get instance field reference: private UnityEngine.BoxCollider _boxCollider
    [[deprecated("Use field access instead!")]] ::UnityEngine::BoxCollider*& dyn__boxCollider();
    // Get instance field reference: private readonly ColorManager _colorManager
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::ColorManager*& dyn__colorManager();
    // Get instance field reference: private readonly SaberManager _saberManager
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::SaberManager*& dyn__saberManager();
    // Get instance field reference: private Saber[] _sabers
    [[deprecated("Use field access instead!")]] ::ArrayW<::GlobalNamespace::Saber*>& dyn__sabers();
    // Get instance field reference: private UnityEngine.Plane _plane
    [[deprecated("Use field access instead!")]] ::UnityEngine::Plane& dyn__plane();
    // Get instance field reference: private UnityEngine.Vector3[] _prevBurnMarkPos
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::Vector3>& dyn__prevBurnMarkPos();
    // Get instance field reference: private System.Boolean[] _prevBurnMarkPosValid
    [[deprecated("Use field access instead!")]] ::ArrayW<bool>& dyn__prevBurnMarkPosValid();
    // Get instance field reference: private UnityEngine.ParticleSystem[] _burnMarksPS
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::ParticleSystem*>& dyn__burnMarksPS();
    // Get instance field reference: private UnityEngine.ParticleSystem/UnityEngine.EmissionModule[] _burnMarksEmissionModules
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::ParticleSystem::EmissionModule>& dyn__burnMarksEmissionModules();
    // Get instance field reference: private UnityEngine.ParticleSystem/UnityEngine.EmitParams _sparklesEmitParams
    [[deprecated("Use field access instead!")]] ::UnityEngine::ParticleSystem::EmitParams& dyn__sparklesEmitParams();
    // public System.Void .ctor()
    // Offset: 0x145D6A0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SaberBurnMarkSparkles* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::SaberBurnMarkSparkles::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SaberBurnMarkSparkles*, creationType>()));
    }
    // protected System.Void Start()
    // Offset: 0x145C7E4
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0x145CC6C
    void OnDestroy();
    // protected System.Void OnEnable()
    // Offset: 0x145CD78
    void OnEnable();
    // protected System.Void OnDisable()
    // Offset: 0x145CE68
    void OnDisable();
    // private System.Boolean GetBurnMarkPos(UnityEngine.Vector3 bladeBottomPos, UnityEngine.Vector3 bladeTopPos, out UnityEngine.Vector3 burnMarkPos)
    // Offset: 0x145CF58
    bool GetBurnMarkPos(::UnityEngine::Vector3 bladeBottomPos, ::UnityEngine::Vector3 bladeTopPos, ByRef<::UnityEngine::Vector3> burnMarkPos);
    // protected System.Void LateUpdate()
    // Offset: 0x145D1F0
    void LateUpdate();
  }; // SaberBurnMarkSparkles
  #pragma pack(pop)
  static check_size<sizeof(SaberBurnMarkSparkles), 120 + sizeof(::UnityEngine::ParticleSystem::EmitParams)> __GlobalNamespace_SaberBurnMarkSparklesSizeCheck;
  static_assert(sizeof(SaberBurnMarkSparkles) == 0x107);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::SaberBurnMarkSparkles::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::SaberBurnMarkSparkles::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SaberBurnMarkSparkles::*)()>(&GlobalNamespace::SaberBurnMarkSparkles::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SaberBurnMarkSparkles*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SaberBurnMarkSparkles::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SaberBurnMarkSparkles::*)()>(&GlobalNamespace::SaberBurnMarkSparkles::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SaberBurnMarkSparkles*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SaberBurnMarkSparkles::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SaberBurnMarkSparkles::*)()>(&GlobalNamespace::SaberBurnMarkSparkles::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SaberBurnMarkSparkles*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SaberBurnMarkSparkles::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SaberBurnMarkSparkles::*)()>(&GlobalNamespace::SaberBurnMarkSparkles::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SaberBurnMarkSparkles*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SaberBurnMarkSparkles::GetBurnMarkPos
// Il2CppName: GetBurnMarkPos
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::SaberBurnMarkSparkles::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ByRef<::UnityEngine::Vector3>)>(&GlobalNamespace::SaberBurnMarkSparkles::GetBurnMarkPos)> {
  static const MethodInfo* get() {
    static auto* bladeBottomPos = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* bladeTopPos = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* burnMarkPos = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SaberBurnMarkSparkles*), "GetBurnMarkPos", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bladeBottomPos, bladeTopPos, burnMarkPos});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SaberBurnMarkSparkles::LateUpdate
// Il2CppName: LateUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SaberBurnMarkSparkles::*)()>(&GlobalNamespace::SaberBurnMarkSparkles::LateUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SaberBurnMarkSparkles*), "LateUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
