// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ICloneable
#include "System/ICloneable.hpp"
// Including type: System.Collections.ICollection
#include "System/Collections/ICollection.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Array
  class Array;
}
// Completed forward declares
// Type namespace: System.Collections
namespace System::Collections {
  // Forward declaring type: Queue
  class Queue;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Collections::Queue);
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::Queue*, "System.Collections", "Queue");
// Type namespace: System.Collections
namespace System::Collections {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: System.Collections.Queue
  // [TokenAttribute] Offset: FFFFFFFF
  // [DebuggerDisplayAttribute] Offset: 1033B20
  // [DebuggerTypeProxyAttribute] Offset: 1033B20
  // [ComVisibleAttribute] Offset: 1033B20
  class Queue : public ::Il2CppObject/*, public ::System::ICloneable, public ::System::Collections::ICollection*/ {
    public:
    // Nested type: ::System::Collections::Queue::QueueEnumerator
    class QueueEnumerator;
    // Nested type: ::System::Collections::Queue::QueueDebugView
    class QueueDebugView;
    public:
    // private System.Object[] _array
    // Size: 0x8
    // Offset: 0x10
    ::ArrayW<::Il2CppObject*> array;
    // Field size check
    static_assert(sizeof(::ArrayW<::Il2CppObject*>) == 0x8);
    // private System.Int32 _head
    // Size: 0x4
    // Offset: 0x18
    int head;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _tail
    // Size: 0x4
    // Offset: 0x1C
    int tail;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _size
    // Size: 0x4
    // Offset: 0x20
    int size;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _growFactor
    // Size: 0x4
    // Offset: 0x24
    int growFactor;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _version
    // Size: 0x4
    // Offset: 0x28
    int version;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: version and: syncRoot
    char __padding5[0x4] = {};
    // private System.Object _syncRoot
    // Size: 0x8
    // Offset: 0x30
    ::Il2CppObject* syncRoot;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::ICloneable
    operator ::System::ICloneable() noexcept {
      return *reinterpret_cast<::System::ICloneable*>(this);
    }
    // Creating interface conversion operator: operator ::System::Collections::ICollection
    operator ::System::Collections::ICollection() noexcept {
      return *reinterpret_cast<::System::Collections::ICollection*>(this);
    }
    // Get instance field reference: private System.Object[] _array
    [[deprecated("Use field access instead!")]] ::ArrayW<::Il2CppObject*>& dyn__array();
    // Get instance field reference: private System.Int32 _head
    [[deprecated("Use field access instead!")]] int& dyn__head();
    // Get instance field reference: private System.Int32 _tail
    [[deprecated("Use field access instead!")]] int& dyn__tail();
    // Get instance field reference: private System.Int32 _size
    [[deprecated("Use field access instead!")]] int& dyn__size();
    // Get instance field reference: private System.Int32 _growFactor
    [[deprecated("Use field access instead!")]] int& dyn__growFactor();
    // Get instance field reference: private System.Int32 _version
    [[deprecated("Use field access instead!")]] int& dyn__version();
    // Get instance field reference: private System.Object _syncRoot
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn__syncRoot();
    // public System.Int32 get_Count()
    // Offset: 0x1D0007C
    int get_Count();
    // public System.Object get_SyncRoot()
    // Offset: 0x1D00170
    ::Il2CppObject* get_SyncRoot();
    // public System.Void .ctor(System.Int32 capacity)
    // Offset: 0x1CFFDE8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Queue* New_ctor(int capacity) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::Queue::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Queue*, creationType>(capacity)));
    }
    // public System.Void .ctor(System.Int32 capacity, System.Single growFactor)
    // Offset: 0x1CFFBF8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Queue* New_ctor(int capacity, float growFactor) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::Queue::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Queue*, creationType>(capacity, growFactor)));
    }
    // public System.Void .ctor(System.Collections.ICollection col)
    // Offset: 0x1CFFDF0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Queue* New_ctor(::System::Collections::ICollection* col) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::Queue::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Queue*, creationType>(col)));
    }
    // public System.Object Clone()
    // Offset: 0x1D00084
    ::Il2CppObject* Clone();
    // public System.Void Clear()
    // Offset: 0x1D001EC
    void Clear();
    // public System.Void CopyTo(System.Array array, System.Int32 index)
    // Offset: 0x1D00260
    void CopyTo(::System::Array* array, int index);
    // public System.Void Enqueue(System.Object obj)
    // Offset: 0x1D00450
    void Enqueue(::Il2CppObject* obj);
    // public System.Collections.IEnumerator GetEnumerator()
    // Offset: 0x1D00654
    ::System::Collections::IEnumerator* GetEnumerator();
    // public System.Object Dequeue()
    // Offset: 0x1D00708
    ::Il2CppObject* Dequeue();
    // public System.Object Peek()
    // Offset: 0x1D00818
    ::Il2CppObject* Peek();
    // System.Object GetElement(System.Int32 i)
    // Offset: 0x1D008EC
    ::Il2CppObject* GetElement(int i);
    // public System.Object[] ToArray()
    // Offset: 0x1D00938
    ::ArrayW<::Il2CppObject*> ToArray();
    // private System.Void SetCapacity(System.Int32 capacity)
    // Offset: 0x1D00558
    void SetCapacity(int capacity);
    // public System.Void .ctor()
    // Offset: 0x1CFFBEC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Queue* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::Queue::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Queue*, creationType>()));
    }
  }; // System.Collections.Queue
  #pragma pack(pop)
  static check_size<sizeof(Queue), 48 + sizeof(::Il2CppObject*)> __System_Collections_QueueSizeCheck;
  static_assert(sizeof(Queue) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Collections::Queue::get_Count
// Il2CppName: get_Count
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Collections::Queue::*)()>(&System::Collections::Queue::get_Count)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Queue*), "get_Count", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Collections::Queue::get_SyncRoot
// Il2CppName: get_SyncRoot
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Collections::Queue::*)()>(&System::Collections::Queue::get_SyncRoot)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Queue*), "get_SyncRoot", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Collections::Queue::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Collections::Queue::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Collections::Queue::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Collections::Queue::Clone
// Il2CppName: Clone
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Collections::Queue::*)()>(&System::Collections::Queue::Clone)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Queue*), "Clone", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Collections::Queue::Clear
// Il2CppName: Clear
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::Queue::*)()>(&System::Collections::Queue::Clear)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Queue*), "Clear", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Collections::Queue::CopyTo
// Il2CppName: CopyTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::Queue::*)(::System::Array*, int)>(&System::Collections::Queue::CopyTo)> {
  static const MethodInfo* get() {
    static auto* array = &::il2cpp_utils::GetClassFromName("System", "Array")->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Queue*), "CopyTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{array, index});
  }
};
// Writing MetadataGetter for method: System::Collections::Queue::Enqueue
// Il2CppName: Enqueue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::Queue::*)(::Il2CppObject*)>(&System::Collections::Queue::Enqueue)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Queue*), "Enqueue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: System::Collections::Queue::GetEnumerator
// Il2CppName: GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (System::Collections::Queue::*)()>(&System::Collections::Queue::GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Queue*), "GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Collections::Queue::Dequeue
// Il2CppName: Dequeue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Collections::Queue::*)()>(&System::Collections::Queue::Dequeue)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Queue*), "Dequeue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Collections::Queue::Peek
// Il2CppName: Peek
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Collections::Queue::*)()>(&System::Collections::Queue::Peek)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Queue*), "Peek", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Collections::Queue::GetElement
// Il2CppName: GetElement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Collections::Queue::*)(int)>(&System::Collections::Queue::GetElement)> {
  static const MethodInfo* get() {
    static auto* i = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Queue*), "GetElement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{i});
  }
};
// Writing MetadataGetter for method: System::Collections::Queue::ToArray
// Il2CppName: ToArray
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::Il2CppObject*> (System::Collections::Queue::*)()>(&System::Collections::Queue::ToArray)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Queue*), "ToArray", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Collections::Queue::SetCapacity
// Il2CppName: SetCapacity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::Queue::*)(int)>(&System::Collections::Queue::SetCapacity)> {
  static const MethodInfo* get() {
    static auto* capacity = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Queue*), "SetCapacity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{capacity});
  }
};
// Writing MetadataGetter for method: System::Collections::Queue::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
