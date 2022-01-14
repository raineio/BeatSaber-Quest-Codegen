// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: LiteNetLib.Utils.INetSerializable
#include "LiteNetLib/Utils/INetSerializable.hpp"
// Including type: IBitMask`1
#include "GlobalNamespace/IBitMask_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
  // Forward declaring type: BitMaskArray
  class BitMaskArray;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(GlobalNamespace::BitMaskArray);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BitMaskArray*, "", "BitMaskArray");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: BitMaskArray
  // [TokenAttribute] Offset: FFFFFFFF
  class BitMaskArray : public ::Il2CppObject/*, public LiteNetLib::Utils::INetSerializable, public GlobalNamespace::IBitMask_1<GlobalNamespace::BitMaskArray*>*/ {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private readonly System.Int32 <bitCount>k__BackingField
    // Size: 0x4
    // Offset: 0x10
    int bitCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: bitCount and: data
    char __padding0[0x4] = {};
    // private readonly System.UInt64[] _data
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<uint64_t> data;
    // Field size check
    static_assert(sizeof(::ArrayW<uint64_t>) == 0x8);
    public:
    // Creating interface conversion operator: operator LiteNetLib::Utils::INetSerializable
    operator LiteNetLib::Utils::INetSerializable() noexcept {
      return *reinterpret_cast<LiteNetLib::Utils::INetSerializable*>(this);
    }
    // Creating interface conversion operator: operator GlobalNamespace::IBitMask_1<GlobalNamespace::BitMaskArray*>
    operator GlobalNamespace::IBitMask_1<GlobalNamespace::BitMaskArray*>() noexcept {
      return *reinterpret_cast<GlobalNamespace::IBitMask_1<GlobalNamespace::BitMaskArray*>*>(this);
    }
    // Get instance field reference: private readonly System.Int32 <bitCount>k__BackingField
    int& dyn_$bitCount$k__BackingField();
    // Get instance field reference: private readonly System.UInt64[] _data
    ::ArrayW<uint64_t>& dyn__data();
    // public System.Int32 get_bitCount()
    // Offset: 0x261F914
    int get_bitCount();
    // public System.Void .ctor(System.Int32 bitCount)
    // Offset: 0x261F91C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BitMaskArray* New_ctor(int bitCount) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BitMaskArray::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BitMaskArray*, creationType>(bitCount)));
    }
    // public System.Boolean Equals(BitMaskArray other)
    // Offset: 0x261F9A0
    bool Equals(GlobalNamespace::BitMaskArray* other);
    // public BitMaskArray SetBits(System.Int32 offset, System.UInt64 bits)
    // Offset: 0x261FA18
    GlobalNamespace::BitMaskArray* SetBits(int offset, uint64_t bits);
    // public System.UInt64 GetBits(System.Int32 offset, System.Int32 count)
    // Offset: 0x261FB44
    uint64_t GetBits(int offset, int count);
    // public System.Void Serialize(LiteNetLib.Utils.NetDataWriter writer)
    // Offset: 0x261FD7C
    void Serialize(LiteNetLib::Utils::NetDataWriter* writer);
    // public System.Void Deserialize(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0x261FEF4
    void Deserialize(LiteNetLib::Utils::NetDataReader* reader);
    // public override System.String ToString()
    // Offset: 0x261FC6C
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::StringW ToString();
  }; // BitMaskArray
  #pragma pack(pop)
  static check_size<sizeof(BitMaskArray), 24 + sizeof(::ArrayW<uint64_t>)> __GlobalNamespace_BitMaskArraySizeCheck;
  static_assert(sizeof(BitMaskArray) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BitMaskArray::get_bitCount
// Il2CppName: get_bitCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::BitMaskArray::*)()>(&GlobalNamespace::BitMaskArray::get_bitCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BitMaskArray*), "get_bitCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BitMaskArray::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::BitMaskArray::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::BitMaskArray::*)(GlobalNamespace::BitMaskArray*)>(&GlobalNamespace::BitMaskArray::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("", "BitMaskArray")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BitMaskArray*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BitMaskArray::SetBits
// Il2CppName: SetBits
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::BitMaskArray* (GlobalNamespace::BitMaskArray::*)(int, uint64_t)>(&GlobalNamespace::BitMaskArray::SetBits)> {
  static const MethodInfo* get() {
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* bits = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BitMaskArray*), "SetBits", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{offset, bits});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BitMaskArray::GetBits
// Il2CppName: GetBits
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (GlobalNamespace::BitMaskArray::*)(int, int)>(&GlobalNamespace::BitMaskArray::GetBits)> {
  static const MethodInfo* get() {
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BitMaskArray*), "GetBits", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{offset, count});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BitMaskArray::Serialize
// Il2CppName: Serialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BitMaskArray::*)(LiteNetLib::Utils::NetDataWriter*)>(&GlobalNamespace::BitMaskArray::Serialize)> {
  static const MethodInfo* get() {
    static auto* writer = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataWriter")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BitMaskArray*), "Serialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{writer});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BitMaskArray::Deserialize
// Il2CppName: Deserialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BitMaskArray::*)(LiteNetLib::Utils::NetDataReader*)>(&GlobalNamespace::BitMaskArray::Deserialize)> {
  static const MethodInfo* get() {
    static auto* reader = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataReader")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BitMaskArray*), "Deserialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{reader});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BitMaskArray::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::BitMaskArray::*)()>(&GlobalNamespace::BitMaskArray::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BitMaskArray*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
