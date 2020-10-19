// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: LiteNetLib.Utils.INetImmutableSerializable`1
#include "LiteNetLib/Utils/INetImmutableSerializable_1.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
// Completed includes
// Begin forward declares
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
  // Autogenerated type: BloomFilter
  struct BloomFilter : public System::ValueType, public LiteNetLib::Utils::INetImmutableSerializable_1<GlobalNamespace::BloomFilter>, public System::IEquatable_1<GlobalNamespace::BloomFilter> {
    public:
    // private readonly System.UInt64 _top
    // Offset: 0x0
    uint64_t top;
    // private readonly System.UInt64 _bottom
    // Offset: 0x8
    uint64_t bottom;
    // Creating value type constructor for type: BloomFilter
    constexpr BloomFilter(uint64_t top_ = {}, uint64_t bottom_ = {}) noexcept : top{top_}, bottom{bottom_} {}
    // static field const value: static private System.Int32 kHashCount
    static constexpr const int kHashCount = 3;
    // Get static field: static private System.Int32 kHashCount
    static int _get_kHashCount();
    // Set static field: static private System.Int32 kHashCount
    static void _set_kHashCount(int value);
    // static field const value: static public System.Int32 shortStringLength
    static constexpr const int shortStringLength = 22;
    // Get static field: static public System.Int32 shortStringLength
    static int _get_shortStringLength();
    // Set static field: static public System.Int32 shortStringLength
    static void _set_shortStringLength(int value);
    // static field const value: static public System.Int32 longStringLength
    static constexpr const int longStringLength = 32;
    // Get static field: static public System.Int32 longStringLength
    static int _get_longStringLength();
    // Set static field: static public System.Int32 longStringLength
    static void _set_longStringLength(int value);
    // Get static field: static private System.Char[] _tempBuffer
    static ::Array<::Il2CppChar>* _get__tempBuffer();
    // Set static field: static private System.Char[] _tempBuffer
    static void _set__tempBuffer(::Array<::Il2CppChar>* value);
    // static private System.Void NoDomainReloadInit()
    // Offset: 0x1F0C1F4
    static void NoDomainReloadInit();
    // public System.Void .ctor(System.String packId)
    // Offset: 0xC893A0
    BloomFilter(::Il2CppString* packId);
    // public System.Void .ctor(System.UInt64 top, System.UInt64 bottom)
    // Offset: 0xC893A8
    // ABORTED: conflicts with another method.  BloomFilter(uint64_t top, uint64_t bottom);
    // static public BloomFilter get_all()
    // Offset: 0x1F0C45C
    static GlobalNamespace::BloomFilter get_all();
    // static private System.UInt32 MurmurHash2(System.String key)
    // Offset: 0x1F0C2C0
    static uint MurmurHash2(::Il2CppString* key);
    // public System.Boolean Contains(BloomFilter other)
    // Offset: 0xC893B0
    bool Contains(GlobalNamespace::BloomFilter other);
    // public System.Int32 DifferenceFrom(BloomFilter other)
    // Offset: 0xC893CC
    int DifferenceFrom(GlobalNamespace::BloomFilter other);
    // static public BloomFilter Deserialize(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0x1F0C594
    static GlobalNamespace::BloomFilter Deserialize(LiteNetLib::Utils::NetDataReader* reader);
    // public System.String ToShortString()
    // Offset: 0xC89434
    ::Il2CppString* ToShortString();
    // public System.Byte[] ToBytes()
    // Offset: 0xC8943C
    ::Array<uint8_t>* ToBytes();
    // static public System.Boolean TryParse(System.String stringSerializedMask, out BloomFilter bloomFilter)
    // Offset: 0x1F0CADC
    static bool TryParse(::Il2CppString* stringSerializedMask, GlobalNamespace::BloomFilter& bloomFilter);
    // static public System.Boolean TryParse(System.String stringSerializedMask, System.Int32 offset, System.Int32 length, out BloomFilter bloomFilter)
    // Offset: 0x1F0CAFC
    static bool TryParse(::Il2CppString* stringSerializedMask, int offset, int length, GlobalNamespace::BloomFilter& bloomFilter);
    // static public BloomFilter FromBytes(System.Byte[] bytes, System.Int32 offset)
    // Offset: 0x1F0CD48
    static GlobalNamespace::BloomFilter FromBytes(::Array<uint8_t>* bytes, int offset);
    // static private System.UInt32 GetHexDigit(System.Char c)
    // Offset: 0x1F0CC88
    static uint GetHexDigit(::Il2CppChar c);
    // static private System.UInt32 GetBase64Digit(System.Char c)
    // Offset: 0x1F0CCD8
    static uint GetBase64Digit(::Il2CppChar c);
    // static private System.Char GetBase64Char(System.UInt64 digit)
    // Offset: 0x1F0C90C
    static ::Il2CppChar GetBase64Char(uint64_t digit);
    // public System.Void Serialize(LiteNetLib.Utils.NetDataWriter writer)
    // Offset: 0xC8941C
    // Implemented from: LiteNetLib.Utils.INetImmutableSerializable`1
    // Base method: System.Void INetImmutableSerializable_1::Serialize(LiteNetLib.Utils.NetDataWriter writer)
    void Serialize(LiteNetLib::Utils::NetDataWriter* writer);
    // public BloomFilter CreateFromSerializedData(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0xC89424
    // Implemented from: LiteNetLib.Utils.INetImmutableSerializable`1
    // Base method: T INetImmutableSerializable_1::CreateFromSerializedData(LiteNetLib.Utils.NetDataReader reader)
    GlobalNamespace::BloomFilter CreateFromSerializedData(LiteNetLib::Utils::NetDataReader* reader);
    // Creating proxy method: LiteNetLib_Utils_INetImmutableSerializable_1_CreateFromSerializedData
    // Maps to method: CreateFromSerializedData
    GlobalNamespace::BloomFilter LiteNetLib_Utils_INetImmutableSerializable_1_CreateFromSerializedData(LiteNetLib::Utils::NetDataReader* reader);
    // public override System.String ToString()
    // Offset: 0xC8942C
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::Il2CppString* ToString();
    // public System.Boolean Equals(BloomFilter other)
    // Offset: 0xC89444
    // Implemented from: System.IEquatable`1
    // Base method: System.Boolean IEquatable_1::Equals(BloomFilter other)
    bool Equals(GlobalNamespace::BloomFilter other);
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0xC89468
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0xC89470
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
  }; // BloomFilter
  // static public BloomFilter op_BitwiseOr(BloomFilter a, BloomFilter b)
  // Offset: 0x1F0C468
  GlobalNamespace::BloomFilter operator|(const GlobalNamespace::BloomFilter& a, const GlobalNamespace::BloomFilter& b);
  // static public BloomFilter op_BitwiseAnd(BloomFilter a, BloomFilter b)
  // Offset: 0x1F0C474
  GlobalNamespace::BloomFilter operator&(const GlobalNamespace::BloomFilter& a, const GlobalNamespace::BloomFilter& b);
  // static public System.Boolean op_Equality(BloomFilter a, BloomFilter b)
  // Offset: 0x1F0C480
  bool operator ==(const GlobalNamespace::BloomFilter& a, const GlobalNamespace::BloomFilter& b);
  // static public System.Boolean op_Inequality(BloomFilter a, BloomFilter b)
  // Offset: 0x1F0C498
  bool operator !=(const GlobalNamespace::BloomFilter& a, const GlobalNamespace::BloomFilter& b);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BloomFilter, "", "BloomFilter");
#pragma pack(pop)
