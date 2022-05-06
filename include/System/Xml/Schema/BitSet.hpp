// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Forward declaring type: BitSet
  class BitSet;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::Schema::BitSet);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::BitSet*, "System.Xml.Schema", "BitSet");
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.Schema.BitSet
  // [TokenAttribute] Offset: FFFFFFFF
  // [DefaultMemberAttribute] Offset: 103B004
  class BitSet : public ::Il2CppObject {
    public:
    public:
    // private System.Int32 count
    // Size: 0x4
    // Offset: 0x10
    int count;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: count and: bits
    char __padding0[0x4] = {};
    // private System.UInt32[] bits
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<uint> bits;
    // Field size check
    static_assert(sizeof(::ArrayW<uint>) == 0x8);
    public:
    // Get instance field reference: private System.Int32 count
    [[deprecated("Use field access instead!")]] int& dyn_count();
    // Get instance field reference: private System.UInt32[] bits
    [[deprecated("Use field access instead!")]] ::ArrayW<uint>& dyn_bits();
    // public System.Int32 get_Count()
    // Offset: 0x1ACB0B0
    int get_Count();
    // public System.Boolean get_Item(System.Int32 index)
    // Offset: 0x1ACB0B8
    bool get_Item(int index);
    // private System.Void .ctor()
    // Offset: 0x1ACB028
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BitSet* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Schema::BitSet::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BitSet*, creationType>()));
    }
    // public System.Void .ctor(System.Int32 count)
    // Offset: 0x1ACB030
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BitSet* New_ctor(int count) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Schema::BitSet::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BitSet*, creationType>(count)));
    }
    // public System.Void Clear()
    // Offset: 0x1ACB124
    void Clear();
    // public System.Void Set(System.Int32 index)
    // Offset: 0x1ACB188
    void Set(int index);
    // public System.Boolean Get(System.Int32 index)
    // Offset: 0x1ACB0BC
    bool Get(int index);
    // public System.Int32 NextSet(System.Int32 startFrom)
    // Offset: 0x1ACB29C
    int NextSet(int startFrom);
    // public System.Void And(System.Xml.Schema.BitSet other)
    // Offset: 0x1ACB348
    void And(::System::Xml::Schema::BitSet* other);
    // public System.Void Or(System.Xml.Schema.BitSet other)
    // Offset: 0x1ACB43C
    void Or(::System::Xml::Schema::BitSet* other);
    // public System.Xml.Schema.BitSet Clone()
    // Offset: 0x1ACB698
    ::System::Xml::Schema::BitSet* Clone();
    // public System.Boolean Intersects(System.Xml.Schema.BitSet other)
    // Offset: 0x1ACB750
    bool Intersects(::System::Xml::Schema::BitSet* other);
    // private System.Int32 Subscript(System.Int32 bitIndex)
    // Offset: 0x1ACB0A8
    int Subscript(int bitIndex);
    // private System.Void EnsureLength(System.Int32 nRequiredLength)
    // Offset: 0x1ACB1F8
    void EnsureLength(int nRequiredLength);
    // public override System.Int32 GetHashCode()
    // Offset: 0x1ACB4F4
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x1ACB538
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
  }; // System.Xml.Schema.BitSet
  #pragma pack(pop)
  static check_size<sizeof(BitSet), 24 + sizeof(::ArrayW<uint>)> __System_Xml_Schema_BitSetSizeCheck;
  static_assert(sizeof(BitSet) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::Schema::BitSet::get_Count
// Il2CppName: get_Count
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Xml::Schema::BitSet::*)()>(&System::Xml::Schema::BitSet::get_Count)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::BitSet*), "get_Count", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::BitSet::get_Item
// Il2CppName: get_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::Schema::BitSet::*)(int)>(&System::Xml::Schema::BitSet::get_Item)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::BitSet*), "get_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::BitSet::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::Schema::BitSet::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::Schema::BitSet::Clear
// Il2CppName: Clear
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::BitSet::*)()>(&System::Xml::Schema::BitSet::Clear)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::BitSet*), "Clear", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::BitSet::Set
// Il2CppName: Set
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::BitSet::*)(int)>(&System::Xml::Schema::BitSet::Set)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::BitSet*), "Set", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::BitSet::Get
// Il2CppName: Get
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::Schema::BitSet::*)(int)>(&System::Xml::Schema::BitSet::Get)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::BitSet*), "Get", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::BitSet::NextSet
// Il2CppName: NextSet
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Xml::Schema::BitSet::*)(int)>(&System::Xml::Schema::BitSet::NextSet)> {
  static const MethodInfo* get() {
    static auto* startFrom = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::BitSet*), "NextSet", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{startFrom});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::BitSet::And
// Il2CppName: And
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::BitSet::*)(::System::Xml::Schema::BitSet*)>(&System::Xml::Schema::BitSet::And)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "BitSet")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::BitSet*), "And", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::BitSet::Or
// Il2CppName: Or
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::BitSet::*)(::System::Xml::Schema::BitSet*)>(&System::Xml::Schema::BitSet::Or)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "BitSet")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::BitSet*), "Or", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::BitSet::Clone
// Il2CppName: Clone
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::BitSet* (System::Xml::Schema::BitSet::*)()>(&System::Xml::Schema::BitSet::Clone)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::BitSet*), "Clone", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::BitSet::Intersects
// Il2CppName: Intersects
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::Schema::BitSet::*)(::System::Xml::Schema::BitSet*)>(&System::Xml::Schema::BitSet::Intersects)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "BitSet")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::BitSet*), "Intersects", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::BitSet::Subscript
// Il2CppName: Subscript
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Xml::Schema::BitSet::*)(int)>(&System::Xml::Schema::BitSet::Subscript)> {
  static const MethodInfo* get() {
    static auto* bitIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::BitSet*), "Subscript", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bitIndex});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::BitSet::EnsureLength
// Il2CppName: EnsureLength
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::BitSet::*)(int)>(&System::Xml::Schema::BitSet::EnsureLength)> {
  static const MethodInfo* get() {
    static auto* nRequiredLength = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::BitSet*), "EnsureLength", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{nRequiredLength});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::BitSet::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Xml::Schema::BitSet::*)()>(&System::Xml::Schema::BitSet::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::BitSet*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::BitSet::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::Schema::BitSet::*)(::Il2CppObject*)>(&System::Xml::Schema::BitSet::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::BitSet*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
