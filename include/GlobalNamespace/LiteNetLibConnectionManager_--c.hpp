// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: LiteNetLibConnectionManager
#include "GlobalNamespace/LiteNetLibConnectionManager.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Predicate`1<T>
  template<typename T>
  class Predicate_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: LiteNetLibConnectionManager/<>c
  class LiteNetLibConnectionManager::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly LiteNetLibConnectionManager/<>c <>9
    static GlobalNamespace::LiteNetLibConnectionManager::$$c* _get_$$9();
    // Set static field: static public readonly LiteNetLibConnectionManager/<>c <>9
    static void _set_$$9(GlobalNamespace::LiteNetLibConnectionManager::$$c* value);
    // Get static field: static public System.Predicate`1<LiteNetLibConnectionManager/NetPeerConnection> <>9__62_0
    static System::Predicate_1<GlobalNamespace::LiteNetLibConnectionManager::NetPeerConnection*>* _get_$$9__62_0();
    // Set static field: static public System.Predicate`1<LiteNetLibConnectionManager/NetPeerConnection> <>9__62_0
    static void _set_$$9__62_0(System::Predicate_1<GlobalNamespace::LiteNetLibConnectionManager::NetPeerConnection*>* value);
    // static private System.Void .cctor()
    // Offset: 0x2162F38
    static void _cctor();
    // System.Boolean <get_hasConnectionOwner>b__62_0(LiteNetLibConnectionManager/NetPeerConnection c)
    // Offset: 0x2162FA8
    bool $get_hasConnectionOwner$b__62_0(GlobalNamespace::LiteNetLibConnectionManager::NetPeerConnection* c);
    // public System.Void .ctor()
    // Offset: 0x2162FA0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static LiteNetLibConnectionManager::$$c* New_ctor();
  }; // LiteNetLibConnectionManager/<>c
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LiteNetLibConnectionManager::$$c*, "", "LiteNetLibConnectionManager/<>c");
#pragma pack(pop)
