// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: LiteNetLib.Utils.INetSerializable
#include "LiteNetLib/Utils/INetSerializable.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Including type: Vector3Serializable
#include "GlobalNamespace/Vector3Serializable.hpp"
// Including type: QuaternionSerializable
#include "GlobalNamespace/QuaternionSerializable.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: LiteNetLib::Utils
namespace LiteNetLib::Utils {
  // Forward declaring type: NetDataWriter
  class NetDataWriter;
  // Forward declaring type: NetDataReader
  class NetDataReader;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Pose
  struct Pose;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: PoseSerializable
  struct PoseSerializable;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PoseSerializable, "", "PoseSerializable");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: PoseSerializable
  // [TokenAttribute] Offset: FFFFFFFF
  struct PoseSerializable/*, public ::System::ValueType, public ::LiteNetLib::Utils::INetSerializable, public ::System::IEquatable_1<::GlobalNamespace::PoseSerializable>*/ {
    public:
    public:
    // public Vector3Serializable position
    // Size: 0xC
    // Offset: 0x0
    ::GlobalNamespace::Vector3Serializable position;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::Vector3Serializable) == 0xC);
    // public QuaternionSerializable rotation
    // Size: 0xC
    // Offset: 0xC
    ::GlobalNamespace::QuaternionSerializable rotation;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::QuaternionSerializable) == 0xC);
    public:
    // Creating value type constructor for type: PoseSerializable
    constexpr PoseSerializable(::GlobalNamespace::Vector3Serializable position_ = {}, ::GlobalNamespace::QuaternionSerializable rotation_ = {}) noexcept : position{position_}, rotation{rotation_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::LiteNetLib::Utils::INetSerializable
    operator ::LiteNetLib::Utils::INetSerializable() noexcept {
      return *reinterpret_cast<::LiteNetLib::Utils::INetSerializable*>(this);
    }
    // Creating interface conversion operator: operator ::System::IEquatable_1<::GlobalNamespace::PoseSerializable>
    operator ::System::IEquatable_1<::GlobalNamespace::PoseSerializable>() noexcept {
      return *reinterpret_cast<::System::IEquatable_1<::GlobalNamespace::PoseSerializable>*>(this);
    }
    // Get instance field reference: public Vector3Serializable position
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::Vector3Serializable& dyn_position();
    // Get instance field reference: public QuaternionSerializable rotation
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::QuaternionSerializable& dyn_rotation();
    // static public PoseSerializable get_identity()
    // Offset: 0x2A044F0
    static ::GlobalNamespace::PoseSerializable get_identity();
    // public System.Void .ctor(Vector3Serializable position, QuaternionSerializable rotation)
    // Offset: 0x2A044DC
    // ABORTED: conflicts with another method.  PoseSerializable(::GlobalNamespace::Vector3Serializable position, ::GlobalNamespace::QuaternionSerializable rotation);
    // public System.Void Serialize(LiteNetLib.Utils.NetDataWriter writer)
    // Offset: 0x2A045A4
    void Serialize(::LiteNetLib::Utils::NetDataWriter* writer);
    // public System.Void Deserialize(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0x2A045D0
    void Deserialize(::LiteNetLib::Utils::NetDataReader* reader);
    // public System.Boolean Equals(PoseSerializable other)
    // Offset: 0x2A045FC
    bool Equals(::GlobalNamespace::PoseSerializable other);
    // public System.Int32 GetSize()
    // Offset: 0x2A048A8
    int GetSize();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x2A046D0
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x2A04770
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
    // public override System.String ToString()
    // Offset: 0x2A047F4
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::StringW ToString();
  }; // PoseSerializable
  #pragma pack(pop)
  static check_size<sizeof(PoseSerializable), 12 + sizeof(::GlobalNamespace::QuaternionSerializable)> __GlobalNamespace_PoseSerializableSizeCheck;
  static_assert(sizeof(PoseSerializable) == 0x18);
  // static public PoseSerializable op_Addition(PoseSerializable a, PoseSerializable b)
  // Offset: 0x2A04B5C
  ::GlobalNamespace::PoseSerializable operator+(const ::GlobalNamespace::PoseSerializable& a, const ::GlobalNamespace::PoseSerializable& b);
  // static public PoseSerializable op_Subtraction(PoseSerializable a, PoseSerializable b)
  // Offset: 0x2A04BF8
  ::GlobalNamespace::PoseSerializable operator-(const ::GlobalNamespace::PoseSerializable& a, const ::GlobalNamespace::PoseSerializable& b);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::PoseSerializable::get_identity
// Il2CppName: get_identity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::PoseSerializable (*)()>(&GlobalNamespace::PoseSerializable::get_identity)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PoseSerializable), "get_identity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PoseSerializable::PoseSerializable
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::PoseSerializable::Serialize
// Il2CppName: Serialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PoseSerializable::*)(::LiteNetLib::Utils::NetDataWriter*)>(&GlobalNamespace::PoseSerializable::Serialize)> {
  static const MethodInfo* get() {
    static auto* writer = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataWriter")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PoseSerializable), "Serialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{writer});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PoseSerializable::Deserialize
// Il2CppName: Deserialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PoseSerializable::*)(::LiteNetLib::Utils::NetDataReader*)>(&GlobalNamespace::PoseSerializable::Deserialize)> {
  static const MethodInfo* get() {
    static auto* reader = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataReader")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PoseSerializable), "Deserialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{reader});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PoseSerializable::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::PoseSerializable::*)(::GlobalNamespace::PoseSerializable)>(&GlobalNamespace::PoseSerializable::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("", "PoseSerializable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PoseSerializable), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PoseSerializable::GetSize
// Il2CppName: GetSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::PoseSerializable::*)()>(&GlobalNamespace::PoseSerializable::GetSize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PoseSerializable), "GetSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PoseSerializable::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::PoseSerializable::*)(::Il2CppObject*)>(&GlobalNamespace::PoseSerializable::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PoseSerializable), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PoseSerializable::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::PoseSerializable::*)()>(&GlobalNamespace::PoseSerializable::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PoseSerializable), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PoseSerializable::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::PoseSerializable::*)()>(&GlobalNamespace::PoseSerializable::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PoseSerializable), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PoseSerializable::operator+
// Il2CppName: op_Addition
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::PoseSerializable::operator-
// Il2CppName: op_Subtraction
// Cannot perform method pointer template specialization from operators!
