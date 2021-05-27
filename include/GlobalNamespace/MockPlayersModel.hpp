// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MockPlayer
  class MockPlayer;
  // Forward declaring type: MockServer
  class MockServer;
  // Forward declaring type: MockPlayerSettings
  class MockPlayerSettings;
  // Forward declaring type: MockServerSettings
  class MockServerSettings;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
  // Forward declaring type: IReadOnlyList`1<T>
  template<typename T>
  class IReadOnlyList_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: MockPlayersModel
  class MockPlayersModel : public ::Il2CppObject {
    public:
    // Nested type: GlobalNamespace::MockPlayersModel::$get_quickplayServers$d__13
    class $get_quickplayServers$d__13;
    // [CompilerGeneratedAttribute] Offset: 0xE1DAA8
    // private MockPlayer <localPlayer>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    GlobalNamespace::MockPlayer* localPlayer;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MockPlayer*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xE1DAB8
    // private MockServer <quickplayServer>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::MockServer* quickplayServer;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MockServer*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xE1DAC8
    // private System.Collections.Generic.List`1<MockPlayer> <otherPlayers>k__BackingField
    // Size: 0x8
    // Offset: 0x20
    System::Collections::Generic::List_1<GlobalNamespace::MockPlayer*>* otherPlayers;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<GlobalNamespace::MockPlayer*>*) == 0x8);
    // Creating value type constructor for type: MockPlayersModel
    MockPlayersModel(GlobalNamespace::MockPlayer* localPlayer_ = {}, GlobalNamespace::MockServer* quickplayServer_ = {}, System::Collections::Generic::List_1<GlobalNamespace::MockPlayer*>* otherPlayers_ = {}) noexcept : localPlayer{localPlayer_}, quickplayServer{quickplayServer_}, otherPlayers{otherPlayers_} {}
    // public MockPlayer get_localPlayer()
    // Offset: 0x113C82C
    GlobalNamespace::MockPlayer* get_localPlayer();
    // private System.Void set_localPlayer(MockPlayer value)
    // Offset: 0x113C834
    void set_localPlayer(GlobalNamespace::MockPlayer* value);
    // public MockServer get_quickplayServer()
    // Offset: 0x113C83C
    GlobalNamespace::MockServer* get_quickplayServer();
    // private System.Void set_quickplayServer(MockServer value)
    // Offset: 0x113C844
    void set_quickplayServer(GlobalNamespace::MockServer* value);
    // public System.Collections.Generic.List`1<MockPlayer> get_otherPlayers()
    // Offset: 0x113C84C
    System::Collections::Generic::List_1<GlobalNamespace::MockPlayer*>* get_otherPlayers();
    // private System.Void set_otherPlayers(System.Collections.Generic.List`1<MockPlayer> value)
    // Offset: 0x113C854
    void set_otherPlayers(System::Collections::Generic::List_1<GlobalNamespace::MockPlayer*>* value);
    // public System.Collections.Generic.IEnumerable`1<MockServer> get_quickplayServers()
    // Offset: 0x113C85C
    System::Collections::Generic::IEnumerable_1<GlobalNamespace::MockServer*>* get_quickplayServers();
    // public System.Void .ctor(MockPlayerSettings localPlayer, MockServerSettings quickplayServer, System.Collections.Generic.IReadOnlyList`1<MockPlayerSettings> otherPlayers)
    // Offset: 0x113C914
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MockPlayersModel* New_ctor(GlobalNamespace::MockPlayerSettings* localPlayer, GlobalNamespace::MockServerSettings* quickplayServer, System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::MockPlayerSettings*>* otherPlayers) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MockPlayersModel::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MockPlayersModel*, creationType>(localPlayer, quickplayServer, otherPlayers)));
    }
  }; // MockPlayersModel
  #pragma pack(pop)
  static check_size<sizeof(MockPlayersModel), 32 + sizeof(System::Collections::Generic::List_1<GlobalNamespace::MockPlayer*>*)> __GlobalNamespace_MockPlayersModelSizeCheck;
  static_assert(sizeof(MockPlayersModel) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MockPlayersModel*, "", "MockPlayersModel");