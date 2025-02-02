// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: SliderInteractionEffect
#include "GlobalNamespace/SliderInteractionEffect.hpp"
// Including type: SaberType
#include "GlobalNamespace/SaberType.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Libraries::HM::HMLib::VR
namespace Libraries::HM::HMLib::VR {
  // Forward declaring type: HapticPresetSO
  class HapticPresetSO;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: HapticFeedbackController
  class HapticFeedbackController;
  // Forward declaring type: IGamePause
  class IGamePause;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: SliderHapticFeedbackInteractionEffect
  class SliderHapticFeedbackInteractionEffect;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::SliderHapticFeedbackInteractionEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SliderHapticFeedbackInteractionEffect*, "", "SliderHapticFeedbackInteractionEffect");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x3C
  #pragma pack(push, 1)
  // Autogenerated type: SliderHapticFeedbackInteractionEffect
  // [TokenAttribute] Offset: FFFFFFFF
  class SliderHapticFeedbackInteractionEffect : public ::GlobalNamespace::SliderInteractionEffect {
    public:
    public:
    // private Libraries.HM.HMLib.VR.HapticPresetSO _hapticPreset
    // Size: 0x8
    // Offset: 0x20
    ::Libraries::HM::HMLib::VR::HapticPresetSO* hapticPreset;
    // Field size check
    static_assert(sizeof(::Libraries::HM::HMLib::VR::HapticPresetSO*) == 0x8);
    // [InjectAttribute] Offset: 0x111DFCC
    // private readonly HapticFeedbackController _hapticFeedbackController
    // Size: 0x8
    // Offset: 0x28
    ::GlobalNamespace::HapticFeedbackController* hapticFeedbackController;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::HapticFeedbackController*) == 0x8);
    // [InjectAttribute] Offset: 0x111DFDC
    // private readonly IGamePause _gamePause
    // Size: 0x8
    // Offset: 0x30
    ::GlobalNamespace::IGamePause* gamePause;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::IGamePause*) == 0x8);
    // private SaberType _saberType
    // Size: 0x4
    // Offset: 0x38
    ::GlobalNamespace::SaberType saberType;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::SaberType) == 0x4);
    public:
    // static field const value: static private System.Single kVibrationSaberInteractionParamThreshold
    static constexpr const float kVibrationSaberInteractionParamThreshold = 0.2;
    // Get static field: static private System.Single kVibrationSaberInteractionParamThreshold
    static float _get_kVibrationSaberInteractionParamThreshold();
    // Set static field: static private System.Single kVibrationSaberInteractionParamThreshold
    static void _set_kVibrationSaberInteractionParamThreshold(float value);
    // Get instance field reference: private Libraries.HM.HMLib.VR.HapticPresetSO _hapticPreset
    [[deprecated("Use field access instead!")]] ::Libraries::HM::HMLib::VR::HapticPresetSO*& dyn__hapticPreset();
    // Get instance field reference: private readonly HapticFeedbackController _hapticFeedbackController
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::HapticFeedbackController*& dyn__hapticFeedbackController();
    // Get instance field reference: private readonly IGamePause _gamePause
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::IGamePause*& dyn__gamePause();
    // Get instance field reference: private SaberType _saberType
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::SaberType& dyn__saberType();
    // protected System.Void Update()
    // Offset: 0x147BA38
    void Update();
    // private System.Void Vibrate()
    // Offset: 0x147BB38
    void Vibrate();
    // public System.Void .ctor()
    // Offset: 0x147BBE0
    // Implemented from: SliderInteractionEffect
    // Base method: System.Void SliderInteractionEffect::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SliderHapticFeedbackInteractionEffect* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::SliderHapticFeedbackInteractionEffect::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SliderHapticFeedbackInteractionEffect*, creationType>()));
    }
    // protected override System.Void Start()
    // Offset: 0x147B900
    // Implemented from: SliderInteractionEffect
    // Base method: System.Void SliderInteractionEffect::Start()
    void Start();
    // protected override System.Void StartEffect(System.Single saberInteractionParam)
    // Offset: 0x147BB7C
    // Implemented from: SliderInteractionEffect
    // Base method: System.Void SliderInteractionEffect::StartEffect(System.Single saberInteractionParam)
    void StartEffect(float saberInteractionParam);
    // protected override System.Void EndEffect()
    // Offset: 0x147BBD4
    // Implemented from: SliderInteractionEffect
    // Base method: System.Void SliderInteractionEffect::EndEffect()
    void EndEffect();
  }; // SliderHapticFeedbackInteractionEffect
  #pragma pack(pop)
  static check_size<sizeof(SliderHapticFeedbackInteractionEffect), 56 + sizeof(::GlobalNamespace::SaberType)> __GlobalNamespace_SliderHapticFeedbackInteractionEffectSizeCheck;
  static_assert(sizeof(SliderHapticFeedbackInteractionEffect) == 0x3C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::SliderHapticFeedbackInteractionEffect::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SliderHapticFeedbackInteractionEffect::*)()>(&GlobalNamespace::SliderHapticFeedbackInteractionEffect::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SliderHapticFeedbackInteractionEffect*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SliderHapticFeedbackInteractionEffect::Vibrate
// Il2CppName: Vibrate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SliderHapticFeedbackInteractionEffect::*)()>(&GlobalNamespace::SliderHapticFeedbackInteractionEffect::Vibrate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SliderHapticFeedbackInteractionEffect*), "Vibrate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SliderHapticFeedbackInteractionEffect::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::SliderHapticFeedbackInteractionEffect::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SliderHapticFeedbackInteractionEffect::*)()>(&GlobalNamespace::SliderHapticFeedbackInteractionEffect::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SliderHapticFeedbackInteractionEffect*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SliderHapticFeedbackInteractionEffect::StartEffect
// Il2CppName: StartEffect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SliderHapticFeedbackInteractionEffect::*)(float)>(&GlobalNamespace::SliderHapticFeedbackInteractionEffect::StartEffect)> {
  static const MethodInfo* get() {
    static auto* saberInteractionParam = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SliderHapticFeedbackInteractionEffect*), "StartEffect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{saberInteractionParam});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SliderHapticFeedbackInteractionEffect::EndEffect
// Il2CppName: EndEffect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SliderHapticFeedbackInteractionEffect::*)()>(&GlobalNamespace::SliderHapticFeedbackInteractionEffect::EndEffect)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SliderHapticFeedbackInteractionEffect*), "EndEffect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
