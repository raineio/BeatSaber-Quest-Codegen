// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: FlyingTextEffect
  class FlyingTextEffect;
  // Forward declaring type: FlyingScoreEffect
  class FlyingScoreEffect;
  // Forward declaring type: BeatEffect
  class BeatEffect;
  // Forward declaring type: NoteCutSoundEffect
  class NoteCutSoundEffect;
  // Forward declaring type: BombCutSoundEffect
  class BombCutSoundEffect;
  // Forward declaring type: FlyingSpriteEffect
  class FlyingSpriteEffect;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: DiContainer
  class DiContainer;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: EffectPoolsManualInstaller
  class EffectPoolsManualInstaller;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::EffectPoolsManualInstaller);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EffectPoolsManualInstaller*, "", "EffectPoolsManualInstaller");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: EffectPoolsManualInstaller
  // [TokenAttribute] Offset: FFFFFFFF
  class EffectPoolsManualInstaller : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private FlyingTextEffect _flyingTextEffectPrefab
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::FlyingTextEffect* flyingTextEffectPrefab;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::FlyingTextEffect*) == 0x8);
    // private FlyingScoreEffect _flyingScoreEffectPrefab
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::FlyingScoreEffect* flyingScoreEffectPrefab;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::FlyingScoreEffect*) == 0x8);
    // [SpaceAttribute] Offset: 0x10DBCA4
    // private BeatEffect _beatEffectPrefab
    // Size: 0x8
    // Offset: 0x28
    ::GlobalNamespace::BeatEffect* beatEffectPrefab;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BeatEffect*) == 0x8);
    // private BeatEffect _shortBeatEffectPrefab
    // Size: 0x8
    // Offset: 0x30
    ::GlobalNamespace::BeatEffect* shortBeatEffectPrefab;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BeatEffect*) == 0x8);
    // [SpaceAttribute] Offset: 0x10DBCEC
    // private NoteCutSoundEffect _noteCutSoundEffectPrefab
    // Size: 0x8
    // Offset: 0x38
    ::GlobalNamespace::NoteCutSoundEffect* noteCutSoundEffectPrefab;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::NoteCutSoundEffect*) == 0x8);
    // private BombCutSoundEffect _bombCutSoundEffectPrefab
    // Size: 0x8
    // Offset: 0x40
    ::GlobalNamespace::BombCutSoundEffect* bombCutSoundEffectPrefab;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BombCutSoundEffect*) == 0x8);
    // private FlyingSpriteEffect _flyingSpriteEffectPrefab
    // Size: 0x8
    // Offset: 0x48
    ::GlobalNamespace::FlyingSpriteEffect* flyingSpriteEffectPrefab;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::FlyingSpriteEffect*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private FlyingTextEffect _flyingTextEffectPrefab
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::FlyingTextEffect*& dyn__flyingTextEffectPrefab();
    // Get instance field reference: private FlyingScoreEffect _flyingScoreEffectPrefab
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::FlyingScoreEffect*& dyn__flyingScoreEffectPrefab();
    // Get instance field reference: private BeatEffect _beatEffectPrefab
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::BeatEffect*& dyn__beatEffectPrefab();
    // Get instance field reference: private BeatEffect _shortBeatEffectPrefab
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::BeatEffect*& dyn__shortBeatEffectPrefab();
    // Get instance field reference: private NoteCutSoundEffect _noteCutSoundEffectPrefab
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::NoteCutSoundEffect*& dyn__noteCutSoundEffectPrefab();
    // Get instance field reference: private BombCutSoundEffect _bombCutSoundEffectPrefab
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::BombCutSoundEffect*& dyn__bombCutSoundEffectPrefab();
    // Get instance field reference: private FlyingSpriteEffect _flyingSpriteEffectPrefab
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::FlyingSpriteEffect*& dyn__flyingSpriteEffectPrefab();
    // public System.Void .ctor()
    // Offset: 0x14360E4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EffectPoolsManualInstaller* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::EffectPoolsManualInstaller::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EffectPoolsManualInstaller*, creationType>()));
    }
    // public System.Void ManualInstallBindings(Zenject.DiContainer container, System.Boolean shortBeatEffect)
    // Offset: 0x1435F18
    void ManualInstallBindings(::Zenject::DiContainer* container, bool shortBeatEffect);
  }; // EffectPoolsManualInstaller
  #pragma pack(pop)
  static check_size<sizeof(EffectPoolsManualInstaller), 72 + sizeof(::GlobalNamespace::FlyingSpriteEffect*)> __GlobalNamespace_EffectPoolsManualInstallerSizeCheck;
  static_assert(sizeof(EffectPoolsManualInstaller) == 0x50);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::EffectPoolsManualInstaller::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::EffectPoolsManualInstaller::ManualInstallBindings
// Il2CppName: ManualInstallBindings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EffectPoolsManualInstaller::*)(::Zenject::DiContainer*, bool)>(&GlobalNamespace::EffectPoolsManualInstaller::ManualInstallBindings)> {
  static const MethodInfo* get() {
    static auto* container = &::il2cpp_utils::GetClassFromName("Zenject", "DiContainer")->byval_arg;
    static auto* shortBeatEffect = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EffectPoolsManualInstaller*), "ManualInstallBindings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{container, shortBeatEffect});
  }
};
