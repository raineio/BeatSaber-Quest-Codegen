// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Collections.SortedList
#include "System/Collections/SortedList.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Array
  class Array;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IDictionaryEnumerator
  class IDictionaryEnumerator;
  // Forward declaring type: IList
  class IList;
}
// Completed forward declares
// Type namespace: System.Collections
namespace System::Collections {
  // Size: 0x58
  #pragma pack(push, 1)
  // Autogenerated type: System.Collections.SortedList/System.Collections.SyncSortedList
  // [TokenAttribute] Offset: FFFFFFFF
  // [DefaultMemberAttribute] Offset: E61AF8
  class SortedList::SyncSortedList : public System::Collections::SortedList {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    private:
    #endif
    // private System.Collections.SortedList _list
    // Size: 0x8
    // Offset: 0x48
    System::Collections::SortedList* list;
    // Field size check
    static_assert(sizeof(System::Collections::SortedList*) == 0x8);
    // private System.Object _root
    // Size: 0x8
    // Offset: 0x50
    ::Il2CppObject* root;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    public:
    // Get instance field reference: private System.Collections.SortedList _list
    System::Collections::SortedList*& dyn__list();
    // Get instance field reference: private System.Object _root
    ::Il2CppObject*& dyn__root();
    // System.Void .ctor(System.Collections.SortedList list)
    // Offset: 0x1B14D2C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SortedList::SyncSortedList* New_ctor(System::Collections::SortedList* list) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Collections::SortedList::SyncSortedList::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SortedList::SyncSortedList*, creationType>(list)));
    }
    // public override System.Int32 get_Count()
    // Offset: 0x1B15984
    // Implemented from: System.Collections.SortedList
    // Base method: System.Int32 SortedList::get_Count()
    int get_Count();
    // public override System.Object get_SyncRoot()
    // Offset: 0x1B15A34
    // Implemented from: System.Collections.SortedList
    // Base method: System.Object SortedList::get_SyncRoot()
    ::Il2CppObject* get_SyncRoot();
    // public override System.Object get_Item(System.Object key)
    // Offset: 0x1B15A3C
    // Implemented from: System.Collections.SortedList
    // Base method: System.Object SortedList::get_Item(System.Object key)
    ::Il2CppObject* get_Item(::Il2CppObject* key);
    // public override System.Void set_Item(System.Object key, System.Object value)
    // Offset: 0x1B15AF4
    // Implemented from: System.Collections.SortedList
    // Base method: System.Void SortedList::set_Item(System.Object key, System.Object value)
    void set_Item(::Il2CppObject* key, ::Il2CppObject* value);
    // public override System.Int32 get_Capacity()
    // Offset: 0x1B15C64
    // Implemented from: System.Collections.SortedList
    // Base method: System.Int32 SortedList::get_Capacity()
    int get_Capacity();
    // public override System.Void Add(System.Object key, System.Object value)
    // Offset: 0x1B15BAC
    // Implemented from: System.Collections.SortedList
    // Base method: System.Void SortedList::Add(System.Object key, System.Object value)
    void Add(::Il2CppObject* key, ::Il2CppObject* value);
    // public override System.Object Clone()
    // Offset: 0x1B15D14
    // Implemented from: System.Collections.SortedList
    // Base method: System.Object SortedList::Clone()
    ::Il2CppObject* Clone();
    // public override System.Boolean Contains(System.Object key)
    // Offset: 0x1B15DC4
    // Implemented from: System.Collections.SortedList
    // Base method: System.Boolean SortedList::Contains(System.Object key)
    bool Contains(::Il2CppObject* key);
    // public override System.Boolean ContainsValue(System.Object key)
    // Offset: 0x1B15E7C
    // Implemented from: System.Collections.SortedList
    // Base method: System.Boolean SortedList::ContainsValue(System.Object key)
    bool ContainsValue(::Il2CppObject* key);
    // public override System.Void CopyTo(System.Array array, System.Int32 index)
    // Offset: 0x1B15F34
    // Implemented from: System.Collections.SortedList
    // Base method: System.Void SortedList::CopyTo(System.Array array, System.Int32 index)
    void CopyTo(System::Array* array, int index);
    // public override System.Object GetByIndex(System.Int32 index)
    // Offset: 0x1B15FEC
    // Implemented from: System.Collections.SortedList
    // Base method: System.Object SortedList::GetByIndex(System.Int32 index)
    ::Il2CppObject* GetByIndex(int index);
    // public override System.Collections.IDictionaryEnumerator GetEnumerator()
    // Offset: 0x1B160A4
    // Implemented from: System.Collections.SortedList
    // Base method: System.Collections.IDictionaryEnumerator SortedList::GetEnumerator()
    System::Collections::IDictionaryEnumerator* GetEnumerator();
    // public override System.Object GetKey(System.Int32 index)
    // Offset: 0x1B16154
    // Implemented from: System.Collections.SortedList
    // Base method: System.Object SortedList::GetKey(System.Int32 index)
    ::Il2CppObject* GetKey(int index);
    // public override System.Collections.IList GetKeyList()
    // Offset: 0x1B1620C
    // Implemented from: System.Collections.SortedList
    // Base method: System.Collections.IList SortedList::GetKeyList()
    System::Collections::IList* GetKeyList();
    // public override System.Collections.IList GetValueList()
    // Offset: 0x1B162BC
    // Implemented from: System.Collections.SortedList
    // Base method: System.Collections.IList SortedList::GetValueList()
    System::Collections::IList* GetValueList();
    // public override System.Int32 IndexOfKey(System.Object key)
    // Offset: 0x1B1636C
    // Implemented from: System.Collections.SortedList
    // Base method: System.Int32 SortedList::IndexOfKey(System.Object key)
    int IndexOfKey(::Il2CppObject* key);
    // public override System.Int32 IndexOfValue(System.Object value)
    // Offset: 0x1B164AC
    // Implemented from: System.Collections.SortedList
    // Base method: System.Int32 SortedList::IndexOfValue(System.Object value)
    int IndexOfValue(::Il2CppObject* value);
    // public override System.Void RemoveAt(System.Int32 index)
    // Offset: 0x1B16564
    // Implemented from: System.Collections.SortedList
    // Base method: System.Void SortedList::RemoveAt(System.Int32 index)
    void RemoveAt(int index);
  }; // System.Collections.SortedList/System.Collections.SyncSortedList
  #pragma pack(pop)
  static check_size<sizeof(SortedList::SyncSortedList), 80 + sizeof(::Il2CppObject*)> __System_Collections_SortedList_SyncSortedListSizeCheck;
  static_assert(sizeof(SortedList::SyncSortedList) == 0x58);
}
DEFINE_IL2CPP_ARG_TYPE(System::Collections::SortedList::SyncSortedList*, "System.Collections", "SortedList/SyncSortedList");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Collections::SortedList::SyncSortedList::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Collections::SortedList::SyncSortedList::get_Count
// Il2CppName: get_Count
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Collections::SortedList::SyncSortedList::*)()>(&System::Collections::SortedList::SyncSortedList::get_Count)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::SortedList::SyncSortedList*), "get_Count", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Collections::SortedList::SyncSortedList::get_SyncRoot
// Il2CppName: get_SyncRoot
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Collections::SortedList::SyncSortedList::*)()>(&System::Collections::SortedList::SyncSortedList::get_SyncRoot)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::SortedList::SyncSortedList*), "get_SyncRoot", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Collections::SortedList::SyncSortedList::get_Item
// Il2CppName: get_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Collections::SortedList::SyncSortedList::*)(::Il2CppObject*)>(&System::Collections::SortedList::SyncSortedList::get_Item)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::SortedList::SyncSortedList*), "get_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key});
  }
};
// Writing MetadataGetter for method: System::Collections::SortedList::SyncSortedList::set_Item
// Il2CppName: set_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::SortedList::SyncSortedList::*)(::Il2CppObject*, ::Il2CppObject*)>(&System::Collections::SortedList::SyncSortedList::set_Item)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::SortedList::SyncSortedList*), "set_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key, value});
  }
};
// Writing MetadataGetter for method: System::Collections::SortedList::SyncSortedList::get_Capacity
// Il2CppName: get_Capacity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Collections::SortedList::SyncSortedList::*)()>(&System::Collections::SortedList::SyncSortedList::get_Capacity)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::SortedList::SyncSortedList*), "get_Capacity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Collections::SortedList::SyncSortedList::Add
// Il2CppName: Add
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::SortedList::SyncSortedList::*)(::Il2CppObject*, ::Il2CppObject*)>(&System::Collections::SortedList::SyncSortedList::Add)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::SortedList::SyncSortedList*), "Add", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key, value});
  }
};
// Writing MetadataGetter for method: System::Collections::SortedList::SyncSortedList::Clone
// Il2CppName: Clone
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Collections::SortedList::SyncSortedList::*)()>(&System::Collections::SortedList::SyncSortedList::Clone)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::SortedList::SyncSortedList*), "Clone", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Collections::SortedList::SyncSortedList::Contains
// Il2CppName: Contains
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Collections::SortedList::SyncSortedList::*)(::Il2CppObject*)>(&System::Collections::SortedList::SyncSortedList::Contains)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::SortedList::SyncSortedList*), "Contains", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key});
  }
};
// Writing MetadataGetter for method: System::Collections::SortedList::SyncSortedList::ContainsValue
// Il2CppName: ContainsValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Collections::SortedList::SyncSortedList::*)(::Il2CppObject*)>(&System::Collections::SortedList::SyncSortedList::ContainsValue)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::SortedList::SyncSortedList*), "ContainsValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key});
  }
};
// Writing MetadataGetter for method: System::Collections::SortedList::SyncSortedList::CopyTo
// Il2CppName: CopyTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::SortedList::SyncSortedList::*)(System::Array*, int)>(&System::Collections::SortedList::SyncSortedList::CopyTo)> {
  static const MethodInfo* get() {
    static auto* array = &::il2cpp_utils::GetClassFromName("System", "Array")->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::SortedList::SyncSortedList*), "CopyTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{array, index});
  }
};
// Writing MetadataGetter for method: System::Collections::SortedList::SyncSortedList::GetByIndex
// Il2CppName: GetByIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Collections::SortedList::SyncSortedList::*)(int)>(&System::Collections::SortedList::SyncSortedList::GetByIndex)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::SortedList::SyncSortedList*), "GetByIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: System::Collections::SortedList::SyncSortedList::GetEnumerator
// Il2CppName: GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IDictionaryEnumerator* (System::Collections::SortedList::SyncSortedList::*)()>(&System::Collections::SortedList::SyncSortedList::GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::SortedList::SyncSortedList*), "GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Collections::SortedList::SyncSortedList::GetKey
// Il2CppName: GetKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Collections::SortedList::SyncSortedList::*)(int)>(&System::Collections::SortedList::SyncSortedList::GetKey)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::SortedList::SyncSortedList*), "GetKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: System::Collections::SortedList::SyncSortedList::GetKeyList
// Il2CppName: GetKeyList
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IList* (System::Collections::SortedList::SyncSortedList::*)()>(&System::Collections::SortedList::SyncSortedList::GetKeyList)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::SortedList::SyncSortedList*), "GetKeyList", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Collections::SortedList::SyncSortedList::GetValueList
// Il2CppName: GetValueList
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IList* (System::Collections::SortedList::SyncSortedList::*)()>(&System::Collections::SortedList::SyncSortedList::GetValueList)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::SortedList::SyncSortedList*), "GetValueList", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Collections::SortedList::SyncSortedList::IndexOfKey
// Il2CppName: IndexOfKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Collections::SortedList::SyncSortedList::*)(::Il2CppObject*)>(&System::Collections::SortedList::SyncSortedList::IndexOfKey)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::SortedList::SyncSortedList*), "IndexOfKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key});
  }
};
// Writing MetadataGetter for method: System::Collections::SortedList::SyncSortedList::IndexOfValue
// Il2CppName: IndexOfValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Collections::SortedList::SyncSortedList::*)(::Il2CppObject*)>(&System::Collections::SortedList::SyncSortedList::IndexOfValue)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::SortedList::SyncSortedList*), "IndexOfValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Collections::SortedList::SyncSortedList::RemoveAt
// Il2CppName: RemoveAt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::SortedList::SyncSortedList::*)(int)>(&System::Collections::SortedList::SyncSortedList::RemoveAt)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::SortedList::SyncSortedList*), "RemoveAt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
