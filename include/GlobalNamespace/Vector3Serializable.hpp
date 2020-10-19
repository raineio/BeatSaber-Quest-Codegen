// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: LiteNetLib.Utils.INetSerializable
#include "LiteNetLib/Utils/INetSerializable.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
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
  // Autogenerated type: Vector3Serializable
  struct Vector3Serializable : public System::ValueType, public LiteNetLib::Utils::INetSerializable, public System::IEquatable_1<GlobalNamespace::Vector3Serializable> {
    public:
    // private UnityEngine.Vector3 _v
    // Offset: 0x0
    UnityEngine::Vector3 v;
    // Creating value type constructor for type: Vector3Serializable
    constexpr Vector3Serializable(UnityEngine::Vector3 v_ = {}) noexcept : v{v_} {}
    // Creating conversion operator: operator UnityEngine::Vector3
    constexpr operator UnityEngine::Vector3() const noexcept {
      return v;
    }
    // public System.Void .ctor(UnityEngine.Vector3 v)
    // Offset: 0xC89BA8
    // ABORTED: conflicts with another method.  Vector3Serializable(UnityEngine::Vector3 v);
    // public System.Void .ctor(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0xC89BB4
    Vector3Serializable(LiteNetLib::Utils::NetDataReader* reader);
    // public System.Void Serialize(LiteNetLib.Utils.NetDataWriter writer)
    // Offset: 0xC89B70
    // Implemented from: LiteNetLib.Utils.INetSerializable
    // Base method: System.Void INetSerializable::Serialize(LiteNetLib.Utils.NetDataWriter writer)
    void Serialize(LiteNetLib::Utils::NetDataWriter* writer);
    // Creating proxy method: LiteNetLib_Utils_INetSerializable_Serialize
    // Maps to method: Serialize
    void LiteNetLib_Utils_INetSerializable_Serialize(LiteNetLib::Utils::NetDataWriter* writer);
    // public System.Void Deserialize(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0xC89B78
    // Implemented from: LiteNetLib.Utils.INetSerializable
    // Base method: System.Void INetSerializable::Deserialize(LiteNetLib.Utils.NetDataReader reader)
    void Deserialize(LiteNetLib::Utils::NetDataReader* reader);
    // Creating proxy method: LiteNetLib_Utils_INetSerializable_Deserialize
    // Maps to method: Deserialize
    void LiteNetLib_Utils_INetSerializable_Deserialize(LiteNetLib::Utils::NetDataReader* reader);
    // public System.Boolean Equals(Vector3Serializable other)
    // Offset: 0xC89B80
    // Implemented from: System.IEquatable`1
    // Base method: System.Boolean IEquatable_1::Equals(Vector3Serializable other)
    bool Equals(GlobalNamespace::Vector3Serializable other);
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0xC89B88
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0xC89B90
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
    // public override System.String ToString()
    // Offset: 0xC89B9C
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::Il2CppString* ToString();
  }; // Vector3Serializable
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::Vector3Serializable, "", "Vector3Serializable");
#pragma pack(pop)
