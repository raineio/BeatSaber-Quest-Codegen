// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: IPEndPoint
  class IPEndPoint;
}
// Completed forward declares
// Type namespace: LiteNetLib.Layers
namespace LiteNetLib::Layers {
  // Autogenerated type: LiteNetLib.Layers.PacketLayerBase
  class PacketLayerBase : public ::Il2CppObject {
    public:
    // public readonly System.Int32 ExtraPacketSizeForLayer
    // Offset: 0x10
    int ExtraPacketSizeForLayer;
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return ExtraPacketSizeForLayer;
    }
    // protected System.Void .ctor(System.Int32 extraPacketSizeForLayer)
    // Offset: 0x1DC4050
    static PacketLayerBase* New_ctor(int extraPacketSizeForLayer);
    // public System.Void ProcessInboundPacket(System.Net.IPEndPoint remoteEndPoint, ref System.Byte[] data, ref System.Int32 offset, ref System.Int32 length)
    // Offset: 0xFFFFFFFF
    void ProcessInboundPacket(System::Net::IPEndPoint* remoteEndPoint, ::Array<uint8_t>*& data, int& offset, int& length);
    // public System.Void ProcessOutBoundPacket(System.Net.IPEndPoint remoteEndPoint, ref System.Byte[] data, ref System.Int32 offset, ref System.Int32 length)
    // Offset: 0xFFFFFFFF
    void ProcessOutBoundPacket(System::Net::IPEndPoint* remoteEndPoint, ::Array<uint8_t>*& data, int& offset, int& length);
  }; // LiteNetLib.Layers.PacketLayerBase
  check_size<sizeof(PacketLayerBase), 16 + sizeof(int) + 8 - (16 + sizeof(int)) % 8> __LiteNetLib_Layers_PacketLayerBaseSizeCheck;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(LiteNetLib::Layers::PacketLayerBase*, "LiteNetLib.Layers", "PacketLayerBase");
#pragma pack(pop)