// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: GameServerListItem
  class GameServerListItem : public ::Il2CppObject {
    public:
    // public readonly System.String serverName
    // Offset: 0x10
    ::Il2CppString* serverName;
    // public readonly System.Int32 capacity
    // Offset: 0x18
    int capacity;
    // public readonly System.Int32 occupied
    // Offset: 0x1C
    int occupied;
    // public readonly System.Boolean password
    // Offset: 0x20
    bool password;
    // public System.Void .ctor(System.String serverName, System.Int32 capacity, System.Int32 occupied, System.Boolean password)
    // Offset: 0x20006E8
    static GameServerListItem* New_ctor(::Il2CppString* serverName, int capacity, int occupied, bool password);
  }; // GameServerListItem
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GameServerListItem*, "", "GameServerListItem");
#pragma pack(pop)
