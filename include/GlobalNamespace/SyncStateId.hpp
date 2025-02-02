// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: LiteNetLib.Utils.INetImmutableSerializable`1
#include "LiteNetLib/Utils/INetImmutableSerializable_1.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Including type: System.Byte
#include "System/Byte.hpp"
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
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: SyncStateId
  struct SyncStateId;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SyncStateId, "", "SyncStateId");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x1
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: SyncStateId
  // [TokenAttribute] Offset: FFFFFFFF
  // [IsReadOnlyAttribute] Offset: FFFFFFFF
  struct SyncStateId/*, public ::System::ValueType, public ::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::SyncStateId>, public ::System::IEquatable_1<::GlobalNamespace::SyncStateId>*/ {
    public:
    public:
    // private readonly System.Byte _id
    // Size: 0x1
    // Offset: 0x0
    uint8_t id;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    public:
    // Creating value type constructor for type: SyncStateId
    constexpr SyncStateId(uint8_t id_ = {}) noexcept : id{id_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: i_ValueType
    inline ::System::ValueType* i_ValueType() noexcept {
      return reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::SyncStateId>
    operator ::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::SyncStateId>() noexcept {
      return *reinterpret_cast<::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::SyncStateId>*>(this);
    }
    // Creating interface conversion operator: i_SyncStateId
    inline ::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::SyncStateId>* i_SyncStateId() noexcept {
      return reinterpret_cast<::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::SyncStateId>*>(this);
    }
    // Creating interface conversion operator: operator ::System::IEquatable_1<::GlobalNamespace::SyncStateId>
    operator ::System::IEquatable_1<::GlobalNamespace::SyncStateId>() noexcept {
      return *reinterpret_cast<::System::IEquatable_1<::GlobalNamespace::SyncStateId>*>(this);
    }
    // Creating conversion operator: operator uint8_t
    constexpr operator uint8_t() const noexcept {
      return id;
    }
    // static field const value: static private System.Byte kMaxValue
    static constexpr const uint8_t kMaxValue = 128u;
    // Get static field: static private System.Byte kMaxValue
    static uint8_t _get_kMaxValue();
    // Set static field: static private System.Byte kMaxValue
    static void _set_kMaxValue(uint8_t value);
    // Get instance field reference: private readonly System.Byte _id
    [[deprecated("Use field access instead!")]] uint8_t& dyn__id();
    // private System.Void .ctor(System.Byte id)
    // Offset: 0x26A6C48
    // ABORTED: conflicts with another method.  SyncStateId(uint8_t id);
    // public System.Boolean Equals(SyncStateId other)
    // Offset: 0x26A6C50
    bool Equals(::GlobalNamespace::SyncStateId other);
    // public SyncStateId Increment()
    // Offset: 0x26A6D60
    ::GlobalNamespace::SyncStateId Increment();
    // public System.Boolean Before(SyncStateId other)
    // Offset: 0x26A6D70
    bool Before(::GlobalNamespace::SyncStateId other);
    // public System.Void Serialize(LiteNetLib.Utils.NetDataWriter writer)
    // Offset: 0x26A6B4C
    void Serialize(::LiteNetLib::Utils::NetDataWriter* writer);
    // public System.Void SerializeWithFlag(LiteNetLib.Utils.NetDataWriter writer, System.Boolean flag)
    // Offset: 0x26A68D0
    void SerializeWithFlag(::LiteNetLib::Utils::NetDataWriter* writer, bool flag);
    // static public SyncStateId Deserialize(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0x26A6BC0
    static ::GlobalNamespace::SyncStateId Deserialize(::LiteNetLib::Utils::NetDataReader* reader);
    // static public SyncStateId DeserializeWithFlag(LiteNetLib.Utils.NetDataReader reader, out System.Boolean flag)
    // Offset: 0x26A6970
    static ::GlobalNamespace::SyncStateId DeserializeWithFlag(::LiteNetLib::Utils::NetDataReader* reader, ByRef<bool> flag);
    // public SyncStateId CreateFromSerializedData(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0x26A6DA0
    ::GlobalNamespace::SyncStateId CreateFromSerializedData(::LiteNetLib::Utils::NetDataReader* reader);
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x26A6C60
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x26A6CE8
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
    // public override System.String ToString()
    // Offset: 0x26A6D14
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::StringW ToString();
  }; // SyncStateId
  #pragma pack(pop)
  static check_size<sizeof(SyncStateId), 0 + sizeof(uint8_t)> __GlobalNamespace_SyncStateIdSizeCheck;
  static_assert(sizeof(SyncStateId) == 0x1);
  // static public System.Boolean op_Equality(SyncStateId a, SyncStateId b)
  // Offset: 0x26A6D40
  bool operator ==(const ::GlobalNamespace::SyncStateId& a, const ::GlobalNamespace::SyncStateId& b);
  // static public System.Boolean op_Inequality(SyncStateId a, SyncStateId b)
  // Offset: 0x26A6D50
  bool operator !=(const ::GlobalNamespace::SyncStateId& a, const ::GlobalNamespace::SyncStateId& b);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::SyncStateId::SyncStateId
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::SyncStateId::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::SyncStateId::*)(::GlobalNamespace::SyncStateId)>(&GlobalNamespace::SyncStateId::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("", "SyncStateId")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SyncStateId), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SyncStateId::Increment
// Il2CppName: Increment
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::SyncStateId (GlobalNamespace::SyncStateId::*)()>(&GlobalNamespace::SyncStateId::Increment)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SyncStateId), "Increment", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SyncStateId::Before
// Il2CppName: Before
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::SyncStateId::*)(::GlobalNamespace::SyncStateId)>(&GlobalNamespace::SyncStateId::Before)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("", "SyncStateId")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SyncStateId), "Before", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SyncStateId::Serialize
// Il2CppName: Serialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SyncStateId::*)(::LiteNetLib::Utils::NetDataWriter*)>(&GlobalNamespace::SyncStateId::Serialize)> {
  static const MethodInfo* get() {
    static auto* writer = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataWriter")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SyncStateId), "Serialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{writer});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SyncStateId::SerializeWithFlag
// Il2CppName: SerializeWithFlag
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SyncStateId::*)(::LiteNetLib::Utils::NetDataWriter*, bool)>(&GlobalNamespace::SyncStateId::SerializeWithFlag)> {
  static const MethodInfo* get() {
    static auto* writer = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataWriter")->byval_arg;
    static auto* flag = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SyncStateId), "SerializeWithFlag", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{writer, flag});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SyncStateId::Deserialize
// Il2CppName: Deserialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::SyncStateId (*)(::LiteNetLib::Utils::NetDataReader*)>(&GlobalNamespace::SyncStateId::Deserialize)> {
  static const MethodInfo* get() {
    static auto* reader = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataReader")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SyncStateId), "Deserialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{reader});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SyncStateId::DeserializeWithFlag
// Il2CppName: DeserializeWithFlag
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::SyncStateId (*)(::LiteNetLib::Utils::NetDataReader*, ByRef<bool>)>(&GlobalNamespace::SyncStateId::DeserializeWithFlag)> {
  static const MethodInfo* get() {
    static auto* reader = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataReader")->byval_arg;
    static auto* flag = &::il2cpp_utils::GetClassFromName("System", "Boolean")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SyncStateId), "DeserializeWithFlag", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{reader, flag});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SyncStateId::CreateFromSerializedData
// Il2CppName: CreateFromSerializedData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::SyncStateId (GlobalNamespace::SyncStateId::*)(::LiteNetLib::Utils::NetDataReader*)>(&GlobalNamespace::SyncStateId::CreateFromSerializedData)> {
  static const MethodInfo* get() {
    static auto* reader = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataReader")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SyncStateId), "CreateFromSerializedData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{reader});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SyncStateId::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::SyncStateId::*)(::Il2CppObject*)>(&GlobalNamespace::SyncStateId::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SyncStateId), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SyncStateId::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::SyncStateId::*)()>(&GlobalNamespace::SyncStateId::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SyncStateId), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SyncStateId::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::SyncStateId::*)()>(&GlobalNamespace::SyncStateId::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SyncStateId), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SyncStateId::operator ==
// Il2CppName: op_Equality
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::SyncStateId::operator !=
// Il2CppName: op_Inequality
// Cannot perform method pointer template specialization from operators!
