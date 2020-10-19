// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Collections.ICollection
#include "System/Collections/ICollection.hpp"
// Including type: System.Runtime.Serialization.ISerializable
#include "System/Runtime/Serialization/ISerializable.hpp"
// Including type: System.Runtime.Serialization.IDeserializationCallback
#include "System/Runtime/Serialization/IDeserializationCallback.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Specialized
namespace System::Collections::Specialized {
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: ArrayList
  class ArrayList;
  // Forward declaring type: IEqualityComparer
  class IEqualityComparer;
  // Forward declaring type: Hashtable
  class Hashtable;
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
  // Forward declaring type: StreamingContext
  struct StreamingContext;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: StringComparer
  class StringComparer;
  // Forward declaring type: DBNull
  class DBNull;
  // Forward declaring type: Array
  class Array;
}
// Completed forward declares
// Type namespace: System.Collections.Specialized
namespace System::Collections::Specialized {
  // Autogenerated type: System.Collections.Specialized.NameObjectCollectionBase
  class NameObjectCollectionBase : public ::Il2CppObject, public System::Collections::ICollection, public System::Runtime::Serialization::ISerializable, public System::Runtime::Serialization::IDeserializationCallback {
    public:
    // Nested type: System::Collections::Specialized::NameObjectCollectionBase::NameObjectEntry
    class NameObjectEntry;
    // Nested type: System::Collections::Specialized::NameObjectCollectionBase::NameObjectKeysEnumerator
    class NameObjectKeysEnumerator;
    // private System.Boolean _readOnly
    // Offset: 0x10
    bool readOnly;
    // private System.Collections.ArrayList _entriesArray
    // Offset: 0x18
    System::Collections::ArrayList* entriesArray;
    // private System.Collections.IEqualityComparer _keyComparer
    // Offset: 0x20
    System::Collections::IEqualityComparer* keyComparer;
    // private System.Collections.Hashtable _entriesTable
    // Offset: 0x28
    System::Collections::Hashtable* entriesTable;
    // private System.Collections.Specialized.NameObjectCollectionBase/NameObjectEntry _nullKeyEntry
    // Offset: 0x30
    System::Collections::Specialized::NameObjectCollectionBase::NameObjectEntry* nullKeyEntry;
    // private System.Runtime.Serialization.SerializationInfo _serializationInfo
    // Offset: 0x38
    System::Runtime::Serialization::SerializationInfo* serializationInfo;
    // private System.Int32 _version
    // Offset: 0x40
    int version;
    // Get static field: static private System.StringComparer defaultComparer
    static System::StringComparer* _get_defaultComparer();
    // Set static field: static private System.StringComparer defaultComparer
    static void _set_defaultComparer(System::StringComparer* value);
    // protected System.Void .ctor(System.Collections.IEqualityComparer equalityComparer)
    // Offset: 0x14DE670
    static NameObjectCollectionBase* New_ctor(System::Collections::IEqualityComparer* equalityComparer);
    // protected System.Void .ctor(System.Int32 capacity, System.Collections.IEqualityComparer equalityComparer)
    // Offset: 0x14DE7E0
    static NameObjectCollectionBase* New_ctor(int capacity, System::Collections::IEqualityComparer* equalityComparer);
    // protected System.Void .ctor(System.Int32 capacity)
    // Offset: 0x14DE8E8
    static NameObjectCollectionBase* New_ctor(int capacity);
    // System.Void .ctor(System.DBNull dummy)
    // Offset: 0x14DE9BC
    static NameObjectCollectionBase* New_ctor(System::DBNull* dummy);
    // protected System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x14DE9C4
    static NameObjectCollectionBase* New_ctor(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
    // private System.Void Reset()
    // Offset: 0x14DE714
    void Reset();
    // private System.Void Reset(System.Int32 capacity)
    // Offset: 0x14DE810
    void Reset(int capacity);
    // private System.Collections.Specialized.NameObjectCollectionBase/NameObjectEntry FindEntry(System.String key)
    // Offset: 0x14DF748
    System::Collections::Specialized::NameObjectCollectionBase::NameObjectEntry* FindEntry(::Il2CppString* key);
    // protected System.Boolean get_IsReadOnly()
    // Offset: 0x14DF810
    bool get_IsReadOnly();
    // protected System.Void BaseAdd(System.String name, System.Object value)
    // Offset: 0x14DF5E8
    void BaseAdd(::Il2CppString* name, ::Il2CppObject* value);
    // protected System.Void BaseRemove(System.String name)
    // Offset: 0x14DF868
    void BaseRemove(::Il2CppString* name);
    // protected System.Object BaseGet(System.String name)
    // Offset: 0x14DFB28
    ::Il2CppObject* BaseGet(::Il2CppString* name);
    // protected System.Void BaseSet(System.String name, System.Object value)
    // Offset: 0x14DFB44
    void BaseSet(::Il2CppString* name, ::Il2CppObject* value);
    // protected System.Object BaseGet(System.Int32 index)
    // Offset: 0x14DFC20
    ::Il2CppObject* BaseGet(int index);
    // protected System.String BaseGetKey(System.Int32 index)
    // Offset: 0x14DFA7C
    ::Il2CppString* BaseGetKey(int index);
    // static private System.Void .cctor()
    // Offset: 0x14E00C0
    static void _cctor();
    // protected System.Void .ctor()
    // Offset: 0x14DE600
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static NameObjectCollectionBase* New_ctor();
    // public System.Void GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x14DE9F8
    // Implemented from: System.Runtime.Serialization.ISerializable
    // Base method: System.Void ISerializable::GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    void GetObjectData(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
    // Creating proxy method: System_Runtime_Serialization_ISerializable_GetObjectData
    // Maps to method: GetObjectData
    void System_Runtime_Serialization_ISerializable_GetObjectData(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
    // public System.Void OnDeserialization(System.Object sender)
    // Offset: 0x14DEF50
    // Implemented from: System.Runtime.Serialization.IDeserializationCallback
    // Base method: System.Void IDeserializationCallback::OnDeserialization(System.Object sender)
    void OnDeserialization(::Il2CppObject* sender);
    // Creating proxy method: System_Runtime_Serialization_IDeserializationCallback_OnDeserialization
    // Maps to method: OnDeserialization
    void System_Runtime_Serialization_IDeserializationCallback_OnDeserialization(::Il2CppObject* sender);
    // public System.Collections.IEnumerator GetEnumerator()
    // Offset: 0x14DFCCC
    // Implemented from: System.Collections.IEnumerable
    // Base method: System.Collections.IEnumerator IEnumerable::GetEnumerator()
    System::Collections::IEnumerator* GetEnumerator();
    // Creating proxy method: System_Collections_IEnumerable_GetEnumerator
    // Maps to method: GetEnumerator
    System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
    // public System.Int32 get_Count()
    // Offset: 0x14DFD8C
    // Implemented from: System.Collections.ICollection
    // Base method: System.Int32 ICollection::get_Count()
    int get_Count();
    // Creating proxy method: System_Collections_ICollection_get_Count
    // Maps to method: get_Count
    int System_Collections_ICollection_get_Count();
    // private System.Void System.Collections.ICollection.CopyTo(System.Array array, System.Int32 index)
    // Offset: 0x14DFDB0
    // Implemented from: System.Collections.ICollection
    // Base method: System.Void ICollection::CopyTo(System.Array array, System.Int32 index)
    void System_Collections_ICollection_CopyTo(System::Array* array, int index);
  }; // System.Collections.Specialized.NameObjectCollectionBase
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Collections::Specialized::NameObjectCollectionBase*, "System.Collections.Specialized", "NameObjectCollectionBase");
#pragma pack(pop)
