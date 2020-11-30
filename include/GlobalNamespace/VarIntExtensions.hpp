// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: LiteNetLib::Utils
namespace LiteNetLib::Utils {
  // Forward declaring type: NetDataWriter
  class NetDataWriter;
  // Forward declaring type: NetDataReader
  class NetDataReader;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: VarIntExtensions
  class VarIntExtensions : public ::Il2CppObject {
    public:
    // static public System.Void PutVarInt(LiteNetLib.Utils.NetDataWriter writer, System.Int32 val)
    // Offset: 0x19A4D20
    static void PutVarInt(LiteNetLib::Utils::NetDataWriter* writer, int val);
    // static public System.Int32 GetVarInt(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0x19A50B8
    static int GetVarInt(LiteNetLib::Utils::NetDataReader* reader);
    // static public System.Void PutVarUInt(LiteNetLib.Utils.NetDataWriter writer, System.UInt32 val)
    // Offset: 0x19A2B8C
    static void PutVarUInt(LiteNetLib::Utils::NetDataWriter* writer, uint val);
    // static public System.UInt32 GetVarUInt(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0x19A2B28
    static uint GetVarUInt(LiteNetLib::Utils::NetDataReader* reader);
    // static public System.Void PutVarLong(LiteNetLib.Utils.NetDataWriter writer, System.Int64 val)
    // Offset: 0x19A87B0
    static void PutVarLong(LiteNetLib::Utils::NetDataWriter* writer, int64_t val);
    // static public System.Int64 GetVarLong(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0x19A87BC
    static int64_t GetVarLong(LiteNetLib::Utils::NetDataReader* reader);
    // static public System.Void PutVarULong(LiteNetLib.Utils.NetDataWriter writer, System.UInt64 val)
    // Offset: 0x19A87E4
    static void PutVarULong(LiteNetLib::Utils::NetDataWriter* writer, uint64_t val);
    // static public System.UInt64 GetVarULong(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0x19A8830
    static uint64_t GetVarULong(LiteNetLib::Utils::NetDataReader* reader);
    // static public System.Boolean TryGetVarUInt(LiteNetLib.Utils.NetDataReader reader, out System.UInt32 value)
    // Offset: 0x19A88B0
    static bool TryGetVarUInt(LiteNetLib::Utils::NetDataReader* reader, uint& value);
    // static public System.Boolean TryGetVarULong(LiteNetLib.Utils.NetDataReader reader, out System.UInt64 value)
    // Offset: 0x19A8900
    static bool TryGetVarULong(LiteNetLib::Utils::NetDataReader* reader, uint64_t& value);
  }; // VarIntExtensions
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::VarIntExtensions*, "", "VarIntExtensions");
#pragma pack(pop)