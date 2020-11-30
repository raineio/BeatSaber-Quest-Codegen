// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: LiteNetLib.Utils.INetSerializable
#include "LiteNetLib/Utils/INetSerializable.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
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
// Begin il2cpp-utils forward declares
struct Il2CppObject;
struct Il2CppString;
// Completed il2cpp-utils forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: ColorSerializable
  struct ColorSerializable : public System::ValueType/*, public LiteNetLib::Utils::INetSerializable, public System::IEquatable_1<GlobalNamespace::ColorSerializable>*/ {
    public:
    // private UnityEngine.Color _color
    // Offset: 0x0
    UnityEngine::Color color;
    // Creating value type constructor for type: ColorSerializable
    constexpr ColorSerializable(UnityEngine::Color color_ = {}) noexcept : color{color_} {}
    // Creating interface conversion operator: operator LiteNetLib::Utils::INetSerializable
    operator LiteNetLib::Utils::INetSerializable() noexcept {
      return *reinterpret_cast<LiteNetLib::Utils::INetSerializable*>(this);
    }
    // Creating interface conversion operator: operator System::IEquatable_1<GlobalNamespace::ColorSerializable>
    operator System::IEquatable_1<GlobalNamespace::ColorSerializable>() noexcept {
      return *reinterpret_cast<System::IEquatable_1<GlobalNamespace::ColorSerializable>*>(this);
    }
    // Creating conversion operator: operator UnityEngine::Color
    constexpr operator UnityEngine::Color() const noexcept {
      return color;
    }
    // public System.Void .ctor(UnityEngine.Color color)
    // Offset: 0xCB5FE8
    // ABORTED: conflicts with another method.  ColorSerializable(UnityEngine::Color color);
    // public System.Void Serialize(LiteNetLib.Utils.NetDataWriter writer)
    // Offset: 0xCB5FF4
    // Implemented from: LiteNetLib.Utils.INetSerializable
    // Base method: System.Void INetSerializable::Serialize(LiteNetLib.Utils.NetDataWriter writer)
    void Serialize(LiteNetLib::Utils::NetDataWriter* writer);
    // Creating proxy method: LiteNetLib_Utils_INetSerializable_Serialize
    // Maps to method: Serialize
    void LiteNetLib_Utils_INetSerializable_Serialize(LiteNetLib::Utils::NetDataWriter* writer);
    // public System.Void Deserialize(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0xCB5FFC
    // Implemented from: LiteNetLib.Utils.INetSerializable
    // Base method: System.Void INetSerializable::Deserialize(LiteNetLib.Utils.NetDataReader reader)
    void Deserialize(LiteNetLib::Utils::NetDataReader* reader);
    // Creating proxy method: LiteNetLib_Utils_INetSerializable_Deserialize
    // Maps to method: Deserialize
    void LiteNetLib_Utils_INetSerializable_Deserialize(LiteNetLib::Utils::NetDataReader* reader);
    // public System.Boolean Equals(ColorSerializable other)
    // Offset: 0xCB6004
    // Implemented from: System.IEquatable`1
    // Base method: System.Boolean IEquatable_1::Equals(ColorSerializable other)
    bool Equals(GlobalNamespace::ColorSerializable other);
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0xCB600C
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0xCB6014
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
    // public override System.String ToString()
    // Offset: 0xCB6020
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::Il2CppString* ToString();
  }; // ColorSerializable
  check_size<sizeof(ColorSerializable), 0 + sizeof(UnityEngine::Color) + 8 - (0 + sizeof(UnityEngine::Color)) % 8> __GlobalNamespace_ColorSerializableSizeCheck;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ColorSerializable, "", "ColorSerializable");
#pragma pack(pop)