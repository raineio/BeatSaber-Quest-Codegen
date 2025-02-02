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
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: SortedSet`1<T>
  template<typename T>
  class SortedSet_1;
}
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
  // Forward declaring type: BitMaskSparse
  class BitMaskSparse;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::BitMaskSparse);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BitMaskSparse*, "", "BitMaskSparse");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: BitMaskSparse
  // [TokenAttribute] Offset: FFFFFFFF
  class BitMaskSparse : public ::Il2CppObject/*, public ::LiteNetLib::Utils::INetSerializable, public ::GlobalNamespace::IBitMask_1<::GlobalNamespace::BitMaskSparse*>*/ {
    public:
    // Nested type: ::GlobalNamespace::BitMaskSparse::$$c
    class $$c;
    public:
    // private readonly System.Int32 <bitCount>k__BackingField
    // Size: 0x4
    // Offset: 0x10
    int bitCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: bitCount and: sparseSet
    char __padding0[0x4] = {};
    // private readonly System.Collections.Generic.SortedSet`1<System.UInt32> _sparseSet
    // Size: 0x8
    // Offset: 0x18
    ::System::Collections::Generic::SortedSet_1<uint>* sparseSet;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::SortedSet_1<uint>*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::LiteNetLib::Utils::INetSerializable
    operator ::LiteNetLib::Utils::INetSerializable() noexcept {
      return *reinterpret_cast<::LiteNetLib::Utils::INetSerializable*>(this);
    }
    // Creating interface conversion operator: i_INetSerializable
    inline ::LiteNetLib::Utils::INetSerializable* i_INetSerializable() noexcept {
      return reinterpret_cast<::LiteNetLib::Utils::INetSerializable*>(this);
    }
    // Creating interface conversion operator: operator ::GlobalNamespace::IBitMask_1<::GlobalNamespace::BitMaskSparse*>
    operator ::GlobalNamespace::IBitMask_1<::GlobalNamespace::BitMaskSparse*>() noexcept {
      return *reinterpret_cast<::GlobalNamespace::IBitMask_1<::GlobalNamespace::BitMaskSparse*>*>(this);
    }
    // Creating interface conversion operator: i_BitMaskSparse
    inline ::GlobalNamespace::IBitMask_1<::GlobalNamespace::BitMaskSparse*>* i_BitMaskSparse() noexcept {
      return reinterpret_cast<::GlobalNamespace::IBitMask_1<::GlobalNamespace::BitMaskSparse*>*>(this);
    }
    // Get instance field reference: private readonly System.Int32 <bitCount>k__BackingField
    [[deprecated("Use field access instead!")]] int& dyn_$bitCount$k__BackingField();
    // Get instance field reference: private readonly System.Collections.Generic.SortedSet`1<System.UInt32> _sparseSet
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::SortedSet_1<uint>*& dyn__sparseSet();
    // public System.Int32 get_bitCount()
    // Offset: 0x2A0CEB0
    int get_bitCount();
    // public System.Void .ctor(System.Int32 bitCount)
    // Offset: 0x2A0B584
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BitMaskSparse* New_ctor(int bitCount) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::BitMaskSparse::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BitMaskSparse*, creationType>(bitCount)));
    }
    // public System.Boolean Equals(BitMaskSparse other)
    // Offset: 0x2A0CEB8
    bool Equals(::GlobalNamespace::BitMaskSparse* other);
    // public BitMaskSparse SetBits(System.Int32 offset, System.UInt64 bits)
    // Offset: 0x2A0CF38
    ::GlobalNamespace::BitMaskSparse* SetBits(int offset, uint64_t bits);
    // public System.UInt64 GetBits(System.Int32 offset, System.Int32 count)
    // Offset: 0x2A0CFD0
    uint64_t GetBits(int offset, int count);
    // public System.Void Serialize(LiteNetLib.Utils.NetDataWriter writer)
    // Offset: 0x2A0B8BC
    void Serialize(::LiteNetLib::Utils::NetDataWriter* writer);
    // public System.Void Deserialize(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0x2A0BA20
    void Deserialize(::LiteNetLib::Utils::NetDataReader* reader);
    // public override System.String ToString()
    // Offset: 0x2A0D06C
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::StringW ToString();
  }; // BitMaskSparse
  #pragma pack(pop)
  static check_size<sizeof(BitMaskSparse), 24 + sizeof(::System::Collections::Generic::SortedSet_1<uint>*)> __GlobalNamespace_BitMaskSparseSizeCheck;
  static_assert(sizeof(BitMaskSparse) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BitMaskSparse::get_bitCount
// Il2CppName: get_bitCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::BitMaskSparse::*)()>(&GlobalNamespace::BitMaskSparse::get_bitCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BitMaskSparse*), "get_bitCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BitMaskSparse::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::BitMaskSparse::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::BitMaskSparse::*)(::GlobalNamespace::BitMaskSparse*)>(&GlobalNamespace::BitMaskSparse::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("", "BitMaskSparse")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BitMaskSparse*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BitMaskSparse::SetBits
// Il2CppName: SetBits
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BitMaskSparse* (GlobalNamespace::BitMaskSparse::*)(int, uint64_t)>(&GlobalNamespace::BitMaskSparse::SetBits)> {
  static const MethodInfo* get() {
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* bits = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BitMaskSparse*), "SetBits", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{offset, bits});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BitMaskSparse::GetBits
// Il2CppName: GetBits
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (GlobalNamespace::BitMaskSparse::*)(int, int)>(&GlobalNamespace::BitMaskSparse::GetBits)> {
  static const MethodInfo* get() {
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BitMaskSparse*), "GetBits", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{offset, count});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BitMaskSparse::Serialize
// Il2CppName: Serialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BitMaskSparse::*)(::LiteNetLib::Utils::NetDataWriter*)>(&GlobalNamespace::BitMaskSparse::Serialize)> {
  static const MethodInfo* get() {
    static auto* writer = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataWriter")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BitMaskSparse*), "Serialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{writer});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BitMaskSparse::Deserialize
// Il2CppName: Deserialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BitMaskSparse::*)(::LiteNetLib::Utils::NetDataReader*)>(&GlobalNamespace::BitMaskSparse::Deserialize)> {
  static const MethodInfo* get() {
    static auto* reader = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataReader")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BitMaskSparse*), "Deserialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{reader});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BitMaskSparse::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::BitMaskSparse::*)()>(&GlobalNamespace::BitMaskSparse::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BitMaskSparse*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
