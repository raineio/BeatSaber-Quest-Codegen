// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: LiteNetLib.Utils.INetSerializable
#include "LiteNetLib/Utils/INetSerializable.hpp"
// Including type: ColorType
#include "GlobalNamespace/ColorType.hpp"
// Including type: NoteLineLayer
#include "GlobalNamespace/NoteLineLayer.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: NoteData
  class NoteData;
}
// Forward declaring namespace: LiteNetLib::Utils
namespace LiteNetLib::Utils {
  // Forward declaring type: NetDataReader
  class NetDataReader;
  // Forward declaring type: NetDataWriter
  class NetDataWriter;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: NoteMissInfoNetSerializable
  class NoteMissInfoNetSerializable : public ::Il2CppObject, public LiteNetLib::Utils::INetSerializable {
    public:
    // private ColorType <colorType>k__BackingField
    // Offset: 0x10
    GlobalNamespace::ColorType colorType;
    // private System.Single <noteTime>k__BackingField
    // Offset: 0x14
    float noteTime;
    // private System.Int32 <noteLineIndex>k__BackingField
    // Offset: 0x18
    int noteLineIndex;
    // private NoteLineLayer <noteLineLayer>k__BackingField
    // Offset: 0x1C
    GlobalNamespace::NoteLineLayer noteLineLayer;
    // public ColorType get_colorType()
    // Offset: 0x1F1014C
    GlobalNamespace::ColorType get_colorType();
    // private System.Void set_colorType(ColorType value)
    // Offset: 0x1F10154
    void set_colorType(GlobalNamespace::ColorType value);
    // public System.Single get_noteTime()
    // Offset: 0x1F1015C
    float get_noteTime();
    // private System.Void set_noteTime(System.Single value)
    // Offset: 0x1F10164
    void set_noteTime(float value);
    // public System.Int32 get_noteLineIndex()
    // Offset: 0x1F1016C
    int get_noteLineIndex();
    // private System.Void set_noteLineIndex(System.Int32 value)
    // Offset: 0x1F10174
    void set_noteLineIndex(int value);
    // public NoteLineLayer get_noteLineLayer()
    // Offset: 0x1F1017C
    GlobalNamespace::NoteLineLayer get_noteLineLayer();
    // private System.Void set_noteLineLayer(NoteLineLayer value)
    // Offset: 0x1F10184
    void set_noteLineLayer(GlobalNamespace::NoteLineLayer value);
    // public System.Void .ctor(NoteData noteData)
    // Offset: 0x1F1029C
    static NoteMissInfoNetSerializable* New_ctor(GlobalNamespace::NoteData* noteData);
    // private System.Void LiteNetLib.Utils.INetSerializable.Deserialize(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0x1F1018C
    // Implemented from: LiteNetLib.Utils.INetSerializable
    // Base method: System.Void INetSerializable::Deserialize(LiteNetLib.Utils.NetDataReader reader)
    void LiteNetLib_Utils_INetSerializable_Deserialize(LiteNetLib::Utils::NetDataReader* reader);
    // private System.Void LiteNetLib.Utils.INetSerializable.Serialize(LiteNetLib.Utils.NetDataWriter writer)
    // Offset: 0x1F10224
    // Implemented from: LiteNetLib.Utils.INetSerializable
    // Base method: System.Void INetSerializable::Serialize(LiteNetLib.Utils.NetDataWriter writer)
    void LiteNetLib_Utils_INetSerializable_Serialize(LiteNetLib::Utils::NetDataWriter* writer);
    // public System.Void .ctor()
    // Offset: 0x1F10294
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static NoteMissInfoNetSerializable* New_ctor();
  }; // NoteMissInfoNetSerializable
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::NoteMissInfoNetSerializable*, "", "NoteMissInfoNetSerializable");
#pragma pack(pop)
