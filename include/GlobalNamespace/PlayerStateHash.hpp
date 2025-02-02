// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include <stdint.h>
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: LiteNetLib.Utils.INetImmutableSerializable`1
#include "LiteNetLib/Utils/INetImmutableSerializable_1.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Including type: BitMask128
#include "GlobalNamespace/BitMask128.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: String
  class String;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: HashSet`1<T>
  template<typename T>
  class HashSet_1;
}
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
// Completed il2cpp-utils forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: PlayerStateHash
  struct PlayerStateHash;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlayerStateHash, "", "PlayerStateHash");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: PlayerStateHash
  // [TokenAttribute] Offset: FFFFFFFF
  // [IsReadOnlyAttribute] Offset: FFFFFFFF
  struct PlayerStateHash/*, public ::System::ValueType, public ::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::PlayerStateHash>, public ::System::IEquatable_1<::GlobalNamespace::PlayerStateHash>*/ {
    public:
    public:
    // private readonly BitMask128 _bloomFilter
    // Size: 0x10
    // Offset: 0x0
    ::GlobalNamespace::BitMask128 bloomFilter;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BitMask128) == 0x10);
    public:
    // Creating value type constructor for type: PlayerStateHash
    constexpr PlayerStateHash(::GlobalNamespace::BitMask128 bloomFilter_ = {}) noexcept : bloomFilter{bloomFilter_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: i_ValueType
    inline ::System::ValueType* i_ValueType() noexcept {
      return reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::PlayerStateHash>
    operator ::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::PlayerStateHash>() noexcept {
      return *reinterpret_cast<::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::PlayerStateHash>*>(this);
    }
    // Creating interface conversion operator: i_PlayerStateHash
    inline ::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::PlayerStateHash>* i_PlayerStateHash() noexcept {
      return reinterpret_cast<::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::PlayerStateHash>*>(this);
    }
    // Creating interface conversion operator: operator ::System::IEquatable_1<::GlobalNamespace::PlayerStateHash>
    operator ::System::IEquatable_1<::GlobalNamespace::PlayerStateHash>() noexcept {
      return *reinterpret_cast<::System::IEquatable_1<::GlobalNamespace::PlayerStateHash>*>(this);
    }
    // Creating conversion operator: operator ::GlobalNamespace::BitMask128
    constexpr operator ::GlobalNamespace::BitMask128() const noexcept {
      return bloomFilter;
    }
    // static field const value: static private System.String kToStringPrefix
    static constexpr const char* kToStringPrefix = "[PlayerStateMask ";
    // Get static field: static private System.String kToStringPrefix
    static ::StringW _get_kToStringPrefix();
    // Set static field: static private System.String kToStringPrefix
    static void _set_kToStringPrefix(::StringW value);
    // static field const value: static private System.String kToStringSuffix
    static constexpr const char* kToStringSuffix = "]";
    // Get static field: static private System.String kToStringSuffix
    static ::StringW _get_kToStringSuffix();
    // Set static field: static private System.String kToStringSuffix
    static void _set_kToStringSuffix(::StringW value);
    // Get instance field reference: private readonly BitMask128 _bloomFilter
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::BitMask128& dyn__bloomFilter();
    // private System.Void .ctor(BitMask128 bloomFilter)
    // Offset: 0x269F320
    // ABORTED: conflicts with another method.  PlayerStateHash(::GlobalNamespace::BitMask128 bloomFilter);
    // public System.Void .ctor(System.String state)
    // Offset: 0x269F328
    PlayerStateHash(::StringW state);
    // public System.Void .ctor(System.Collections.Generic.HashSet`1<System.String> stateHashSet)
    // Offset: 0x269F394
    PlayerStateHash(::System::Collections::Generic::HashSet_1<::StringW>* stateHashSet);
    // public System.Boolean Contains(System.String state)
    // Offset: 0x269F400
    bool Contains(::StringW state);
    // public PlayerStateHash AddState(System.String state)
    // Offset: 0x269F468
    ::GlobalNamespace::PlayerStateHash AddState(::StringW state);
    // public System.Void Serialize(LiteNetLib.Utils.NetDataWriter writer)
    // Offset: 0x269F4D0
    void Serialize(::LiteNetLib::Utils::NetDataWriter* writer);
    // public PlayerStateHash CreateFromSerializedData(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0x269F4D8
    ::GlobalNamespace::PlayerStateHash CreateFromSerializedData(::LiteNetLib::Utils::NetDataReader* reader);
    // static public PlayerStateHash Deserialize(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0x269F4E4
    static ::GlobalNamespace::PlayerStateHash Deserialize(::LiteNetLib::Utils::NetDataReader* reader);
    // public System.String ToShortString()
    // Offset: 0x269F578
    ::StringW ToShortString();
    // public System.Byte[] ToBytes()
    // Offset: 0x269F5C8
    ::ArrayW<uint8_t> ToBytes();
    // public System.Boolean Equals(PlayerStateHash other)
    // Offset: 0x269F620
    bool Equals(::GlobalNamespace::PlayerStateHash other);
    // static public System.Boolean TryParse(System.String stringSerializedMask, out PlayerStateHash playerStateHash)
    // Offset: 0x269F6E8
    static bool TryParse(::StringW stringSerializedMask, ByRef<::GlobalNamespace::PlayerStateHash> playerStateHash);
    // static public PlayerStateHash Parse(System.String stringSerializedMask)
    // Offset: 0x269F7F4
    static ::GlobalNamespace::PlayerStateHash Parse(::StringW stringSerializedMask);
    // static public PlayerStateHash FromBytes(System.Byte[] bytes, System.Int32 offset)
    // Offset: 0x269F8A8
    static ::GlobalNamespace::PlayerStateHash FromBytes(::ArrayW<uint8_t> bytes, int offset);
    // public override System.String ToString()
    // Offset: 0x269F4EC
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::StringW ToString();
    // public override System.Int32 GetHashCode()
    // Offset: 0x269F618
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x269F64C
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
  }; // PlayerStateHash
  #pragma pack(pop)
  static check_size<sizeof(PlayerStateHash), 0 + sizeof(::GlobalNamespace::BitMask128)> __GlobalNamespace_PlayerStateHashSizeCheck;
  static_assert(sizeof(PlayerStateHash) == 0x10);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::PlayerStateHash::PlayerStateHash
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::PlayerStateHash::PlayerStateHash
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::PlayerStateHash::PlayerStateHash
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::PlayerStateHash::Contains
// Il2CppName: Contains
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::PlayerStateHash::*)(::StringW)>(&GlobalNamespace::PlayerStateHash::Contains)> {
  static const MethodInfo* get() {
    static auto* state = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerStateHash), "Contains", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{state});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerStateHash::AddState
// Il2CppName: AddState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::PlayerStateHash (GlobalNamespace::PlayerStateHash::*)(::StringW)>(&GlobalNamespace::PlayerStateHash::AddState)> {
  static const MethodInfo* get() {
    static auto* state = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerStateHash), "AddState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{state});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerStateHash::Serialize
// Il2CppName: Serialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayerStateHash::*)(::LiteNetLib::Utils::NetDataWriter*)>(&GlobalNamespace::PlayerStateHash::Serialize)> {
  static const MethodInfo* get() {
    static auto* writer = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataWriter")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerStateHash), "Serialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{writer});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerStateHash::CreateFromSerializedData
// Il2CppName: CreateFromSerializedData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::PlayerStateHash (GlobalNamespace::PlayerStateHash::*)(::LiteNetLib::Utils::NetDataReader*)>(&GlobalNamespace::PlayerStateHash::CreateFromSerializedData)> {
  static const MethodInfo* get() {
    static auto* reader = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataReader")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerStateHash), "CreateFromSerializedData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{reader});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerStateHash::Deserialize
// Il2CppName: Deserialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::PlayerStateHash (*)(::LiteNetLib::Utils::NetDataReader*)>(&GlobalNamespace::PlayerStateHash::Deserialize)> {
  static const MethodInfo* get() {
    static auto* reader = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataReader")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerStateHash), "Deserialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{reader});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerStateHash::ToShortString
// Il2CppName: ToShortString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::PlayerStateHash::*)()>(&GlobalNamespace::PlayerStateHash::ToShortString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerStateHash), "ToShortString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerStateHash::ToBytes
// Il2CppName: ToBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (GlobalNamespace::PlayerStateHash::*)()>(&GlobalNamespace::PlayerStateHash::ToBytes)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerStateHash), "ToBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerStateHash::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::PlayerStateHash::*)(::GlobalNamespace::PlayerStateHash)>(&GlobalNamespace::PlayerStateHash::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("", "PlayerStateHash")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerStateHash), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerStateHash::TryParse
// Il2CppName: TryParse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, ByRef<::GlobalNamespace::PlayerStateHash>)>(&GlobalNamespace::PlayerStateHash::TryParse)> {
  static const MethodInfo* get() {
    static auto* stringSerializedMask = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* playerStateHash = &::il2cpp_utils::GetClassFromName("", "PlayerStateHash")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerStateHash), "TryParse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stringSerializedMask, playerStateHash});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerStateHash::Parse
// Il2CppName: Parse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::PlayerStateHash (*)(::StringW)>(&GlobalNamespace::PlayerStateHash::Parse)> {
  static const MethodInfo* get() {
    static auto* stringSerializedMask = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerStateHash), "Parse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stringSerializedMask});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerStateHash::FromBytes
// Il2CppName: FromBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::PlayerStateHash (*)(::ArrayW<uint8_t>, int)>(&GlobalNamespace::PlayerStateHash::FromBytes)> {
  static const MethodInfo* get() {
    static auto* bytes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerStateHash), "FromBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bytes, offset});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerStateHash::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::PlayerStateHash::*)()>(&GlobalNamespace::PlayerStateHash::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerStateHash), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerStateHash::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::PlayerStateHash::*)()>(&GlobalNamespace::PlayerStateHash::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerStateHash), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerStateHash::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::PlayerStateHash::*)(::Il2CppObject*)>(&GlobalNamespace::PlayerStateHash::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerStateHash), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
