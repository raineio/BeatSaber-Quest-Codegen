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
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TextMeshProUGUI
  class TextMeshProUGUI;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Animation
  class Animation;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: CountdownElementController
  class CountdownElementController : public UnityEngine::MonoBehaviour {
    public:
    // private TMPro.TextMeshProUGUI _text
    // Offset: 0x18
    TMPro::TextMeshProUGUI* text;
    // private UnityEngine.Animation _animation
    // Offset: 0x20
    UnityEngine::Animation* animation;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Void SetTextAndRunAnimation(System.String text)
    // Offset: 0x1FBC570
    void SetTextAndRunAnimation(::Il2CppString* text);
    // public System.Void StopAndHide()
    // Offset: 0x1FBC5D0
    void StopAndHide();
    // public System.Void .ctor()
    // Offset: 0x1FBC67C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static CountdownElementController* New_ctor();
  }; // CountdownElementController
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::CountdownElementController*, "", "CountdownElementController");
#pragma pack(pop)
