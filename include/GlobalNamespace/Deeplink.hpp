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
  // Autogenerated type: Deeplink
  class Deeplink : public ::Il2CppObject {
    public:
    // public System.String Destination
    // Offset: 0x10
    ::Il2CppString* Destination;
    // public System.String LevelID
    // Offset: 0x18
    ::Il2CppString* LevelID;
    // public System.String PackID
    // Offset: 0x20
    ::Il2CppString* PackID;
    // public System.String Difficulty
    // Offset: 0x28
    ::Il2CppString* Difficulty;
    // public System.String Characteristic
    // Offset: 0x30
    ::Il2CppString* Characteristic;
    // public System.Void .ctor()
    // Offset: 0x201674C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static Deeplink* New_ctor();
  }; // Deeplink
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::Deeplink*, "", "Deeplink");
#pragma pack(pop)
