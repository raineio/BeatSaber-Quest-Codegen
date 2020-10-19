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
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IConnectedPlayer
  class IConnectedPlayer;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: ConnectedPlayerName
  class ConnectedPlayerName : public UnityEngine::MonoBehaviour {
    public:
    // private TMPro.TextMeshProUGUI _nameText
    // Offset: 0x18
    TMPro::TextMeshProUGUI* nameText;
    // private readonly IConnectedPlayer _connectedPlayer
    // Offset: 0x20
    GlobalNamespace::IConnectedPlayer* connectedPlayer;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Void Start()
    // Offset: 0x1FBB648
    void Start();
    // public System.Void .ctor()
    // Offset: 0x1FBB714
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static ConnectedPlayerName* New_ctor();
  }; // ConnectedPlayerName
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ConnectedPlayerName*, "", "ConnectedPlayerName");
#pragma pack(pop)
