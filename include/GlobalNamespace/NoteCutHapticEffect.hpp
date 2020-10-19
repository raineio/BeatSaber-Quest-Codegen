// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
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
  // Forward declaring type: SaberType
  struct SaberType;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: NoteCutHapticEffect
  class NoteCutHapticEffect : public UnityEngine::MonoBehaviour {
    public:
    // private Libraries.HM.HMLib.VR.HapticPresetSO _rumblePreset
    // Offset: 0x18
    Libraries::HM::HMLib::VR::HapticPresetSO* rumblePreset;
    // private readonly HapticFeedbackController _hapticFeedbackController
    // Offset: 0x20
    GlobalNamespace::HapticFeedbackController* hapticFeedbackController;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Void HitNote(SaberType saberType)
    // Offset: 0x20F324C
    void HitNote(GlobalNamespace::SaberType saberType);
    // public System.Void .ctor()
    // Offset: 0x20F3D84
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static NoteCutHapticEffect* New_ctor();
  }; // NoteCutHapticEffect
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::NoteCutHapticEffect*, "", "NoteCutHapticEffect");
#pragma pack(pop)
