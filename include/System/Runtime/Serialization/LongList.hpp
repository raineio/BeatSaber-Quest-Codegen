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
// Type namespace: System.Runtime.Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: LongList
  class LongList;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Runtime::Serialization::LongList);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::LongList*, "System.Runtime.Serialization", "LongList");
// Type namespace: System.Runtime.Serialization
namespace System::Runtime::Serialization {
  // Size: 0x24
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Serialization.LongList
  // [TokenAttribute] Offset: FFFFFFFF
  class LongList : public ::Il2CppObject {
    public:
    public:
    // private System.Int64[] m_values
    // Size: 0x8
    // Offset: 0x10
    ::ArrayW<int64_t> m_values;
    // Field size check
    static_assert(sizeof(::ArrayW<int64_t>) == 0x8);
    // private System.Int32 m_count
    // Size: 0x4
    // Offset: 0x18
    int m_count;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 m_totalItems
    // Size: 0x4
    // Offset: 0x1C
    int m_totalItems;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 m_currentItem
    // Size: 0x4
    // Offset: 0x20
    int m_currentItem;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: private System.Int64[] m_values
    [[deprecated("Use field access instead!")]] ::ArrayW<int64_t>& dyn_m_values();
    // Get instance field reference: private System.Int32 m_count
    [[deprecated("Use field access instead!")]] int& dyn_m_count();
    // Get instance field reference: private System.Int32 m_totalItems
    [[deprecated("Use field access instead!")]] int& dyn_m_totalItems();
    // Get instance field reference: private System.Int32 m_currentItem
    [[deprecated("Use field access instead!")]] int& dyn_m_currentItem();
    // System.Int32 get_Count()
    // Offset: 0x1636168
    int get_Count();
    // System.Int64 get_Current()
    // Offset: 0x16361E4
    int64_t get_Current();
    // System.Void .ctor(System.Int32 startingSize)
    // Offset: 0x1635FD8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LongList* New_ctor(int startingSize) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Runtime::Serialization::LongList::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LongList*, creationType>(startingSize)));
    }
    // System.Void Add(System.Int64 value)
    // Offset: 0x163604C
    void Add(int64_t value);
    // System.Void StartEnumeration()
    // Offset: 0x1636170
    void StartEnumeration();
    // System.Boolean MoveNext()
    // Offset: 0x163617C
    bool MoveNext();
    // System.Boolean RemoveElement(System.Int64 value)
    // Offset: 0x1636224
    bool RemoveElement(int64_t value);
    // private System.Void EnlargeArray()
    // Offset: 0x16360D8
    void EnlargeArray();
    // System.Void .ctor()
    // Offset: 0x1635FD0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LongList* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Runtime::Serialization::LongList::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LongList*, creationType>()));
    }
  }; // System.Runtime.Serialization.LongList
  #pragma pack(pop)
  static check_size<sizeof(LongList), 32 + sizeof(int)> __System_Runtime_Serialization_LongListSizeCheck;
  static_assert(sizeof(LongList) == 0x24);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::Serialization::LongList::get_Count
// Il2CppName: get_Count
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Runtime::Serialization::LongList::*)()>(&System::Runtime::Serialization::LongList::get_Count)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::LongList*), "get_Count", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::LongList::get_Current
// Il2CppName: get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (System::Runtime::Serialization::LongList::*)()>(&System::Runtime::Serialization::LongList::get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::LongList*), "get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::LongList::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Runtime::Serialization::LongList::Add
// Il2CppName: Add
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::LongList::*)(int64_t)>(&System::Runtime::Serialization::LongList::Add)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::LongList*), "Add", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::LongList::StartEnumeration
// Il2CppName: StartEnumeration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::LongList::*)()>(&System::Runtime::Serialization::LongList::StartEnumeration)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::LongList*), "StartEnumeration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::LongList::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Runtime::Serialization::LongList::*)()>(&System::Runtime::Serialization::LongList::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::LongList*), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::LongList::RemoveElement
// Il2CppName: RemoveElement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Runtime::Serialization::LongList::*)(int64_t)>(&System::Runtime::Serialization::LongList::RemoveElement)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::LongList*), "RemoveElement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::LongList::EnlargeArray
// Il2CppName: EnlargeArray
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::LongList::*)()>(&System::Runtime::Serialization::LongList::EnlargeArray)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::LongList*), "EnlargeArray", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::LongList::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
