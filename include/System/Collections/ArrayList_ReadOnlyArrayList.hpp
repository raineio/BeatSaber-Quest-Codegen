// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Collections.ArrayList
#include "System/Collections/ArrayList.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: ICollection
  class ICollection;
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Array
  class Array;
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: System.Collections
namespace System::Collections {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: System.Collections.ArrayList/System.Collections.ReadOnlyArrayList
  // [TokenAttribute] Offset: FFFFFFFF
  // [DefaultMemberAttribute] Offset: E6156C
  class ArrayList::ReadOnlyArrayList : public System::Collections::ArrayList {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    private:
    #endif
    // private System.Collections.ArrayList _list
    // Size: 0x8
    // Offset: 0x28
    System::Collections::ArrayList* list;
    // Field size check
    static_assert(sizeof(System::Collections::ArrayList*) == 0x8);
    public:
    // Creating conversion operator: operator System::Collections::ArrayList*
    constexpr operator System::Collections::ArrayList*() const noexcept {
      return list;
    }
    // Get instance field reference: private System.Collections.ArrayList _list
    System::Collections::ArrayList*& dyn__list();
    // System.Void .ctor(System.Collections.ArrayList l)
    // Offset: 0x199719C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ArrayList::ReadOnlyArrayList* New_ctor(System::Collections::ArrayList* l) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Collections::ArrayList::ReadOnlyArrayList::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ArrayList::ReadOnlyArrayList*, creationType>(l)));
    }
    // public override System.Int32 get_Count()
    // Offset: 0x1997D18
    // Implemented from: System.Collections.ArrayList
    // Base method: System.Int32 ArrayList::get_Count()
    int get_Count();
    // public override System.Boolean get_IsReadOnly()
    // Offset: 0x1997D3C
    // Implemented from: System.Collections.ArrayList
    // Base method: System.Boolean ArrayList::get_IsReadOnly()
    bool get_IsReadOnly();
    // public override System.Object get_Item(System.Int32 index)
    // Offset: 0x1997D44
    // Implemented from: System.Collections.ArrayList
    // Base method: System.Object ArrayList::get_Item(System.Int32 index)
    ::Il2CppObject* get_Item(int index);
    // public override System.Void set_Item(System.Int32 index, System.Object value)
    // Offset: 0x1997D68
    // Implemented from: System.Collections.ArrayList
    // Base method: System.Void ArrayList::set_Item(System.Int32 index, System.Object value)
    void set_Item(int index, ::Il2CppObject* value);
    // public override System.Object get_SyncRoot()
    // Offset: 0x1997DE8
    // Implemented from: System.Collections.ArrayList
    // Base method: System.Object ArrayList::get_SyncRoot()
    ::Il2CppObject* get_SyncRoot();
    // public override System.Void set_Capacity(System.Int32 value)
    // Offset: 0x1997F0C
    // Implemented from: System.Collections.ArrayList
    // Base method: System.Void ArrayList::set_Capacity(System.Int32 value)
    void set_Capacity(int value);
    // public override System.Int32 Add(System.Object obj)
    // Offset: 0x1997E0C
    // Implemented from: System.Collections.ArrayList
    // Base method: System.Int32 ArrayList::Add(System.Object obj)
    int Add(::Il2CppObject* obj);
    // public override System.Void AddRange(System.Collections.ICollection c)
    // Offset: 0x1997E8C
    // Implemented from: System.Collections.ArrayList
    // Base method: System.Void ArrayList::AddRange(System.Collections.ICollection c)
    void AddRange(System::Collections::ICollection* c);
    // public override System.Void Clear()
    // Offset: 0x1997F8C
    // Implemented from: System.Collections.ArrayList
    // Base method: System.Void ArrayList::Clear()
    void Clear();
    // public override System.Object Clone()
    // Offset: 0x199800C
    // Implemented from: System.Collections.ArrayList
    // Base method: System.Object ArrayList::Clone()
    ::Il2CppObject* Clone();
    // public override System.Boolean Contains(System.Object obj)
    // Offset: 0x19980D8
    // Implemented from: System.Collections.ArrayList
    // Base method: System.Boolean ArrayList::Contains(System.Object obj)
    bool Contains(::Il2CppObject* obj);
    // public override System.Void CopyTo(System.Array array, System.Int32 index)
    // Offset: 0x19980FC
    // Implemented from: System.Collections.ArrayList
    // Base method: System.Void ArrayList::CopyTo(System.Array array, System.Int32 index)
    void CopyTo(System::Array* array, int index);
    // public override System.Void CopyTo(System.Int32 index, System.Array array, System.Int32 arrayIndex, System.Int32 count)
    // Offset: 0x1998120
    // Implemented from: System.Collections.ArrayList
    // Base method: System.Void ArrayList::CopyTo(System.Int32 index, System.Array array, System.Int32 arrayIndex, System.Int32 count)
    void CopyTo(int index, System::Array* array, int arrayIndex, int count);
    // public override System.Collections.IEnumerator GetEnumerator()
    // Offset: 0x1998144
    // Implemented from: System.Collections.ArrayList
    // Base method: System.Collections.IEnumerator ArrayList::GetEnumerator()
    System::Collections::IEnumerator* GetEnumerator();
    // public override System.Int32 IndexOf(System.Object value)
    // Offset: 0x1998168
    // Implemented from: System.Collections.ArrayList
    // Base method: System.Int32 ArrayList::IndexOf(System.Object value)
    int IndexOf(::Il2CppObject* value);
    // public override System.Void Insert(System.Int32 index, System.Object obj)
    // Offset: 0x199818C
    // Implemented from: System.Collections.ArrayList
    // Base method: System.Void ArrayList::Insert(System.Int32 index, System.Object obj)
    void Insert(int index, ::Il2CppObject* obj);
    // public override System.Void InsertRange(System.Int32 index, System.Collections.ICollection c)
    // Offset: 0x199820C
    // Implemented from: System.Collections.ArrayList
    // Base method: System.Void ArrayList::InsertRange(System.Int32 index, System.Collections.ICollection c)
    void InsertRange(int index, System::Collections::ICollection* c);
    // public override System.Void Remove(System.Object value)
    // Offset: 0x199828C
    // Implemented from: System.Collections.ArrayList
    // Base method: System.Void ArrayList::Remove(System.Object value)
    void Remove(::Il2CppObject* value);
    // public override System.Void RemoveAt(System.Int32 index)
    // Offset: 0x199830C
    // Implemented from: System.Collections.ArrayList
    // Base method: System.Void ArrayList::RemoveAt(System.Int32 index)
    void RemoveAt(int index);
    // public override System.Void RemoveRange(System.Int32 index, System.Int32 count)
    // Offset: 0x199838C
    // Implemented from: System.Collections.ArrayList
    // Base method: System.Void ArrayList::RemoveRange(System.Int32 index, System.Int32 count)
    void RemoveRange(int index, int count);
    // public override System.Void Reverse(System.Int32 index, System.Int32 count)
    // Offset: 0x199840C
    // Implemented from: System.Collections.ArrayList
    // Base method: System.Void ArrayList::Reverse(System.Int32 index, System.Int32 count)
    void Reverse(int index, int count);
    // public override System.Object[] ToArray()
    // Offset: 0x199848C
    // Implemented from: System.Collections.ArrayList
    // Base method: System.Object[] ArrayList::ToArray()
    ::ArrayW<::Il2CppObject*> ToArray();
    // public override System.Array ToArray(System.Type type)
    // Offset: 0x19984B0
    // Implemented from: System.Collections.ArrayList
    // Base method: System.Array ArrayList::ToArray(System.Type type)
    System::Array* ToArray(System::Type* type);
  }; // System.Collections.ArrayList/System.Collections.ReadOnlyArrayList
  #pragma pack(pop)
  static check_size<sizeof(ArrayList::ReadOnlyArrayList), 40 + sizeof(System::Collections::ArrayList*)> __System_Collections_ArrayList_ReadOnlyArrayListSizeCheck;
  static_assert(sizeof(ArrayList::ReadOnlyArrayList) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(System::Collections::ArrayList::ReadOnlyArrayList*, "System.Collections", "ArrayList/ReadOnlyArrayList");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Collections::ArrayList::ReadOnlyArrayList::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Collections::ArrayList::ReadOnlyArrayList::get_Count
// Il2CppName: get_Count
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Collections::ArrayList::ReadOnlyArrayList::*)()>(&System::Collections::ArrayList::ReadOnlyArrayList::get_Count)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::ArrayList::ReadOnlyArrayList*), "get_Count", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Collections::ArrayList::ReadOnlyArrayList::get_IsReadOnly
// Il2CppName: get_IsReadOnly
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Collections::ArrayList::ReadOnlyArrayList::*)()>(&System::Collections::ArrayList::ReadOnlyArrayList::get_IsReadOnly)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::ArrayList::ReadOnlyArrayList*), "get_IsReadOnly", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Collections::ArrayList::ReadOnlyArrayList::get_Item
// Il2CppName: get_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Collections::ArrayList::ReadOnlyArrayList::*)(int)>(&System::Collections::ArrayList::ReadOnlyArrayList::get_Item)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::ArrayList::ReadOnlyArrayList*), "get_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: System::Collections::ArrayList::ReadOnlyArrayList::set_Item
// Il2CppName: set_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::ArrayList::ReadOnlyArrayList::*)(int, ::Il2CppObject*)>(&System::Collections::ArrayList::ReadOnlyArrayList::set_Item)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::ArrayList::ReadOnlyArrayList*), "set_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index, value});
  }
};
// Writing MetadataGetter for method: System::Collections::ArrayList::ReadOnlyArrayList::get_SyncRoot
// Il2CppName: get_SyncRoot
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Collections::ArrayList::ReadOnlyArrayList::*)()>(&System::Collections::ArrayList::ReadOnlyArrayList::get_SyncRoot)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::ArrayList::ReadOnlyArrayList*), "get_SyncRoot", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Collections::ArrayList::ReadOnlyArrayList::set_Capacity
// Il2CppName: set_Capacity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::ArrayList::ReadOnlyArrayList::*)(int)>(&System::Collections::ArrayList::ReadOnlyArrayList::set_Capacity)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::ArrayList::ReadOnlyArrayList*), "set_Capacity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Collections::ArrayList::ReadOnlyArrayList::Add
// Il2CppName: Add
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Collections::ArrayList::ReadOnlyArrayList::*)(::Il2CppObject*)>(&System::Collections::ArrayList::ReadOnlyArrayList::Add)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::ArrayList::ReadOnlyArrayList*), "Add", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: System::Collections::ArrayList::ReadOnlyArrayList::AddRange
// Il2CppName: AddRange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::ArrayList::ReadOnlyArrayList::*)(System::Collections::ICollection*)>(&System::Collections::ArrayList::ReadOnlyArrayList::AddRange)> {
  static const MethodInfo* get() {
    static auto* c = &::il2cpp_utils::GetClassFromName("System.Collections", "ICollection")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::ArrayList::ReadOnlyArrayList*), "AddRange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{c});
  }
};
// Writing MetadataGetter for method: System::Collections::ArrayList::ReadOnlyArrayList::Clear
// Il2CppName: Clear
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::ArrayList::ReadOnlyArrayList::*)()>(&System::Collections::ArrayList::ReadOnlyArrayList::Clear)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::ArrayList::ReadOnlyArrayList*), "Clear", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Collections::ArrayList::ReadOnlyArrayList::Clone
// Il2CppName: Clone
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Collections::ArrayList::ReadOnlyArrayList::*)()>(&System::Collections::ArrayList::ReadOnlyArrayList::Clone)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::ArrayList::ReadOnlyArrayList*), "Clone", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Collections::ArrayList::ReadOnlyArrayList::Contains
// Il2CppName: Contains
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Collections::ArrayList::ReadOnlyArrayList::*)(::Il2CppObject*)>(&System::Collections::ArrayList::ReadOnlyArrayList::Contains)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::ArrayList::ReadOnlyArrayList*), "Contains", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: System::Collections::ArrayList::ReadOnlyArrayList::CopyTo
// Il2CppName: CopyTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::ArrayList::ReadOnlyArrayList::*)(System::Array*, int)>(&System::Collections::ArrayList::ReadOnlyArrayList::CopyTo)> {
  static const MethodInfo* get() {
    static auto* array = &::il2cpp_utils::GetClassFromName("System", "Array")->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::ArrayList::ReadOnlyArrayList*), "CopyTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{array, index});
  }
};
// Writing MetadataGetter for method: System::Collections::ArrayList::ReadOnlyArrayList::CopyTo
// Il2CppName: CopyTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::ArrayList::ReadOnlyArrayList::*)(int, System::Array*, int, int)>(&System::Collections::ArrayList::ReadOnlyArrayList::CopyTo)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* array = &::il2cpp_utils::GetClassFromName("System", "Array")->byval_arg;
    static auto* arrayIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::ArrayList::ReadOnlyArrayList*), "CopyTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index, array, arrayIndex, count});
  }
};
// Writing MetadataGetter for method: System::Collections::ArrayList::ReadOnlyArrayList::GetEnumerator
// Il2CppName: GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerator* (System::Collections::ArrayList::ReadOnlyArrayList::*)()>(&System::Collections::ArrayList::ReadOnlyArrayList::GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::ArrayList::ReadOnlyArrayList*), "GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Collections::ArrayList::ReadOnlyArrayList::IndexOf
// Il2CppName: IndexOf
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Collections::ArrayList::ReadOnlyArrayList::*)(::Il2CppObject*)>(&System::Collections::ArrayList::ReadOnlyArrayList::IndexOf)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::ArrayList::ReadOnlyArrayList*), "IndexOf", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Collections::ArrayList::ReadOnlyArrayList::Insert
// Il2CppName: Insert
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::ArrayList::ReadOnlyArrayList::*)(int, ::Il2CppObject*)>(&System::Collections::ArrayList::ReadOnlyArrayList::Insert)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::ArrayList::ReadOnlyArrayList*), "Insert", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index, obj});
  }
};
// Writing MetadataGetter for method: System::Collections::ArrayList::ReadOnlyArrayList::InsertRange
// Il2CppName: InsertRange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::ArrayList::ReadOnlyArrayList::*)(int, System::Collections::ICollection*)>(&System::Collections::ArrayList::ReadOnlyArrayList::InsertRange)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* c = &::il2cpp_utils::GetClassFromName("System.Collections", "ICollection")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::ArrayList::ReadOnlyArrayList*), "InsertRange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index, c});
  }
};
// Writing MetadataGetter for method: System::Collections::ArrayList::ReadOnlyArrayList::Remove
// Il2CppName: Remove
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::ArrayList::ReadOnlyArrayList::*)(::Il2CppObject*)>(&System::Collections::ArrayList::ReadOnlyArrayList::Remove)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::ArrayList::ReadOnlyArrayList*), "Remove", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Collections::ArrayList::ReadOnlyArrayList::RemoveAt
// Il2CppName: RemoveAt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::ArrayList::ReadOnlyArrayList::*)(int)>(&System::Collections::ArrayList::ReadOnlyArrayList::RemoveAt)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::ArrayList::ReadOnlyArrayList*), "RemoveAt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: System::Collections::ArrayList::ReadOnlyArrayList::RemoveRange
// Il2CppName: RemoveRange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::ArrayList::ReadOnlyArrayList::*)(int, int)>(&System::Collections::ArrayList::ReadOnlyArrayList::RemoveRange)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::ArrayList::ReadOnlyArrayList*), "RemoveRange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index, count});
  }
};
// Writing MetadataGetter for method: System::Collections::ArrayList::ReadOnlyArrayList::Reverse
// Il2CppName: Reverse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::ArrayList::ReadOnlyArrayList::*)(int, int)>(&System::Collections::ArrayList::ReadOnlyArrayList::Reverse)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::ArrayList::ReadOnlyArrayList*), "Reverse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index, count});
  }
};
// Writing MetadataGetter for method: System::Collections::ArrayList::ReadOnlyArrayList::ToArray
// Il2CppName: ToArray
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::Il2CppObject*> (System::Collections::ArrayList::ReadOnlyArrayList::*)()>(&System::Collections::ArrayList::ReadOnlyArrayList::ToArray)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::ArrayList::ReadOnlyArrayList*), "ToArray", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Collections::ArrayList::ReadOnlyArrayList::ToArray
// Il2CppName: ToArray
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Array* (System::Collections::ArrayList::ReadOnlyArrayList::*)(System::Type*)>(&System::Collections::ArrayList::ReadOnlyArrayList::ToArray)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::ArrayList::ReadOnlyArrayList*), "ToArray", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
