// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Runtime.Serialization.ISerializable
#include "System/Runtime/Serialization/ISerializable.hpp"
// Including type: System.Collections.ICollection
#include "System/Collections/ICollection.hpp"
// Including type: System.Runtime.Serialization.IDeserializationCallback
#include "System/Runtime/Serialization/IDeserializationCallback.hpp"
// Including type: System.Runtime.Serialization.StreamingContext
#include "System/Runtime/Serialization/StreamingContext.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
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
  // Forward declaring type: NameObjectCollectionBase
  class NameObjectCollectionBase;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Collections::Specialized::NameObjectCollectionBase);
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::Specialized::NameObjectCollectionBase*, "System.Collections.Specialized", "NameObjectCollectionBase");
// Type namespace: System.Collections.Specialized
namespace System::Collections::Specialized {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: System.Collections.Specialized.NameObjectCollectionBase
  // [TokenAttribute] Offset: FFFFFFFF
  class NameObjectCollectionBase : public ::Il2CppObject/*, public ::System::Runtime::Serialization::ISerializable, public ::System::Collections::ICollection, public ::System::Runtime::Serialization::IDeserializationCallback*/ {
    public:
    // Nested type: ::System::Collections::Specialized::NameObjectCollectionBase::NameObjectEntry
    class NameObjectEntry;
    // Nested type: ::System::Collections::Specialized::NameObjectCollectionBase::NameObjectKeysEnumerator
    class NameObjectKeysEnumerator;
    public:
    // private System.Boolean _readOnly
    // Size: 0x1
    // Offset: 0x10
    bool readOnly;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: readOnly and: entriesArray
    char __padding0[0x7] = {};
    // private System.Collections.ArrayList _entriesArray
    // Size: 0x8
    // Offset: 0x18
    ::System::Collections::ArrayList* entriesArray;
    // Field size check
    static_assert(sizeof(::System::Collections::ArrayList*) == 0x8);
    // private System.Collections.IEqualityComparer _keyComparer
    // Size: 0x8
    // Offset: 0x20
    ::System::Collections::IEqualityComparer* keyComparer;
    // Field size check
    static_assert(sizeof(::System::Collections::IEqualityComparer*) == 0x8);
    // private System.Collections.Hashtable _entriesTable
    // Size: 0x8
    // Offset: 0x28
    ::System::Collections::Hashtable* entriesTable;
    // Field size check
    static_assert(sizeof(::System::Collections::Hashtable*) == 0x8);
    // private System.Collections.Specialized.NameObjectCollectionBase/System.Collections.Specialized.NameObjectEntry _nullKeyEntry
    // Size: 0x8
    // Offset: 0x30
    ::System::Collections::Specialized::NameObjectCollectionBase::NameObjectEntry* nullKeyEntry;
    // Field size check
    static_assert(sizeof(::System::Collections::Specialized::NameObjectCollectionBase::NameObjectEntry*) == 0x8);
    // private System.Runtime.Serialization.SerializationInfo _serializationInfo
    // Size: 0x8
    // Offset: 0x38
    ::System::Runtime::Serialization::SerializationInfo* serializationInfo;
    // Field size check
    static_assert(sizeof(::System::Runtime::Serialization::SerializationInfo*) == 0x8);
    // private System.Int32 _version
    // Size: 0x4
    // Offset: 0x40
    int version;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: version and: syncRoot
    char __padding6[0x4] = {};
    // private System.Object _syncRoot
    // Size: 0x8
    // Offset: 0x48
    ::Il2CppObject* syncRoot;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::Runtime::Serialization::ISerializable
    operator ::System::Runtime::Serialization::ISerializable() noexcept {
      return *reinterpret_cast<::System::Runtime::Serialization::ISerializable*>(this);
    }
    // Creating interface conversion operator: i_ISerializable
    inline ::System::Runtime::Serialization::ISerializable* i_ISerializable() noexcept {
      return reinterpret_cast<::System::Runtime::Serialization::ISerializable*>(this);
    }
    // Creating interface conversion operator: operator ::System::Collections::ICollection
    operator ::System::Collections::ICollection() noexcept {
      return *reinterpret_cast<::System::Collections::ICollection*>(this);
    }
    // Creating interface conversion operator: i_ICollection
    inline ::System::Collections::ICollection* i_ICollection() noexcept {
      return reinterpret_cast<::System::Collections::ICollection*>(this);
    }
    // Creating interface conversion operator: operator ::System::Runtime::Serialization::IDeserializationCallback
    operator ::System::Runtime::Serialization::IDeserializationCallback() noexcept {
      return *reinterpret_cast<::System::Runtime::Serialization::IDeserializationCallback*>(this);
    }
    // Creating interface conversion operator: i_IDeserializationCallback
    inline ::System::Runtime::Serialization::IDeserializationCallback* i_IDeserializationCallback() noexcept {
      return reinterpret_cast<::System::Runtime::Serialization::IDeserializationCallback*>(this);
    }
    // Get static field: static private System.StringComparer defaultComparer
    static ::System::StringComparer* _get_defaultComparer();
    // Set static field: static private System.StringComparer defaultComparer
    static void _set_defaultComparer(::System::StringComparer* value);
    // Get instance field reference: private System.Boolean _readOnly
    [[deprecated("Use field access instead!")]] bool& dyn__readOnly();
    // Get instance field reference: private System.Collections.ArrayList _entriesArray
    [[deprecated("Use field access instead!")]] ::System::Collections::ArrayList*& dyn__entriesArray();
    // Get instance field reference: private System.Collections.IEqualityComparer _keyComparer
    [[deprecated("Use field access instead!")]] ::System::Collections::IEqualityComparer*& dyn__keyComparer();
    // Get instance field reference: private System.Collections.Hashtable _entriesTable
    [[deprecated("Use field access instead!")]] ::System::Collections::Hashtable*& dyn__entriesTable();
    // Get instance field reference: private System.Collections.Specialized.NameObjectCollectionBase/System.Collections.Specialized.NameObjectEntry _nullKeyEntry
    [[deprecated("Use field access instead!")]] ::System::Collections::Specialized::NameObjectCollectionBase::NameObjectEntry*& dyn__nullKeyEntry();
    // Get instance field reference: private System.Runtime.Serialization.SerializationInfo _serializationInfo
    [[deprecated("Use field access instead!")]] ::System::Runtime::Serialization::SerializationInfo*& dyn__serializationInfo();
    // Get instance field reference: private System.Int32 _version
    [[deprecated("Use field access instead!")]] int& dyn__version();
    // Get instance field reference: private System.Object _syncRoot
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn__syncRoot();
    // protected System.Boolean get_IsReadOnly()
    // Offset: 0x1E48910
    bool get_IsReadOnly();
    // public System.Int32 get_Count()
    // Offset: 0x1E48E40
    int get_Count();
    // private System.Object System.Collections.ICollection.get_SyncRoot()
    // Offset: 0x1E49174
    ::Il2CppObject* System_Collections_ICollection_get_SyncRoot();
    // protected System.Void .ctor()
    // Offset: 0x1E477E0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NameObjectCollectionBase* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::Specialized::NameObjectCollectionBase::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NameObjectCollectionBase*, creationType>()));
    }
    // protected System.Void .ctor(System.Collections.IEqualityComparer equalityComparer)
    // Offset: 0x1E47850
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NameObjectCollectionBase* New_ctor(::System::Collections::IEqualityComparer* equalityComparer) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::Specialized::NameObjectCollectionBase::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NameObjectCollectionBase*, creationType>(equalityComparer)));
    }
    // protected System.Void .ctor(System.Int32 capacity, System.Collections.IEqualityComparer equalityComparer)
    // Offset: 0x1E47990
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NameObjectCollectionBase* New_ctor(int capacity, ::System::Collections::IEqualityComparer* equalityComparer) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::Specialized::NameObjectCollectionBase::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NameObjectCollectionBase*, creationType>(capacity, equalityComparer)));
    }
    // protected System.Void .ctor(System.Int32 capacity)
    // Offset: 0x1E47A74
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NameObjectCollectionBase* New_ctor(int capacity) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::Specialized::NameObjectCollectionBase::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NameObjectCollectionBase*, creationType>(capacity)));
    }
    // System.Void .ctor(System.DBNull dummy)
    // Offset: 0x1E47B40
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NameObjectCollectionBase* New_ctor(::System::DBNull* dummy) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::Specialized::NameObjectCollectionBase::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NameObjectCollectionBase*, creationType>(dummy)));
    }
    // protected System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x1E47B48
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NameObjectCollectionBase* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::Specialized::NameObjectCollectionBase::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NameObjectCollectionBase*, creationType>(info, context)));
    }
    // static private System.Void .cctor()
    // Offset: 0x1E491F0
    static void _cctor();
    // public System.Void GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x1E47B74
    void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);
    // public System.Void OnDeserialization(System.Object sender)
    // Offset: 0x1E480A8
    void OnDeserialization(::Il2CppObject* sender);
    // private System.Void Reset()
    // Offset: 0x1E478E8
    void Reset();
    // private System.Void Reset(System.Int32 capacity)
    // Offset: 0x1E479C0
    void Reset(int capacity);
    // private System.Collections.Specialized.NameObjectCollectionBase/System.Collections.Specialized.NameObjectEntry FindEntry(System.String key)
    // Offset: 0x1E48848
    ::System::Collections::Specialized::NameObjectCollectionBase::NameObjectEntry* FindEntry(::StringW key);
    // protected System.Void BaseAdd(System.String name, System.Object value)
    // Offset: 0x1E486F8
    void BaseAdd(::StringW name, ::Il2CppObject* value);
    // protected System.Void BaseRemove(System.String name)
    // Offset: 0x1E48950
    void BaseRemove(::StringW name);
    // protected System.Object BaseGet(System.String name)
    // Offset: 0x1E48C00
    ::Il2CppObject* BaseGet(::StringW name);
    // protected System.Void BaseSet(System.String name, System.Object value)
    // Offset: 0x1E48C1C
    void BaseSet(::StringW name, ::Il2CppObject* value);
    // protected System.Object BaseGet(System.Int32 index)
    // Offset: 0x1E48CF0
    ::Il2CppObject* BaseGet(int index);
    // protected System.String BaseGetKey(System.Int32 index)
    // Offset: 0x1E48B54
    ::StringW BaseGetKey(int index);
    // public System.Collections.IEnumerator GetEnumerator()
    // Offset: 0x1E48D9C
    ::System::Collections::IEnumerator* GetEnumerator();
    // private System.Void System.Collections.ICollection.CopyTo(System.Array array, System.Int32 index)
    // Offset: 0x1E48E64
    void System_Collections_ICollection_CopyTo(::System::Array* array, int index);
  }; // System.Collections.Specialized.NameObjectCollectionBase
  #pragma pack(pop)
  static check_size<sizeof(NameObjectCollectionBase), 72 + sizeof(::Il2CppObject*)> __System_Collections_Specialized_NameObjectCollectionBaseSizeCheck;
  static_assert(sizeof(NameObjectCollectionBase) == 0x50);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Collections::Specialized::NameObjectCollectionBase::get_IsReadOnly
// Il2CppName: get_IsReadOnly
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Collections::Specialized::NameObjectCollectionBase::*)()>(&System::Collections::Specialized::NameObjectCollectionBase::get_IsReadOnly)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Specialized::NameObjectCollectionBase*), "get_IsReadOnly", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Collections::Specialized::NameObjectCollectionBase::get_Count
// Il2CppName: get_Count
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Collections::Specialized::NameObjectCollectionBase::*)()>(&System::Collections::Specialized::NameObjectCollectionBase::get_Count)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Specialized::NameObjectCollectionBase*), "get_Count", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Collections::Specialized::NameObjectCollectionBase::System_Collections_ICollection_get_SyncRoot
// Il2CppName: System.Collections.ICollection.get_SyncRoot
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Collections::Specialized::NameObjectCollectionBase::*)()>(&System::Collections::Specialized::NameObjectCollectionBase::System_Collections_ICollection_get_SyncRoot)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Specialized::NameObjectCollectionBase*), "System.Collections.ICollection.get_SyncRoot", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Collections::Specialized::NameObjectCollectionBase::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Collections::Specialized::NameObjectCollectionBase::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Collections::Specialized::NameObjectCollectionBase::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Collections::Specialized::NameObjectCollectionBase::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Collections::Specialized::NameObjectCollectionBase::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Collections::Specialized::NameObjectCollectionBase::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Collections::Specialized::NameObjectCollectionBase::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Collections::Specialized::NameObjectCollectionBase::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Specialized::NameObjectCollectionBase*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Collections::Specialized::NameObjectCollectionBase::GetObjectData
// Il2CppName: GetObjectData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::Specialized::NameObjectCollectionBase::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&System::Collections::Specialized::NameObjectCollectionBase::GetObjectData)> {
  static const MethodInfo* get() {
    static auto* info = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "SerializationInfo")->byval_arg;
    static auto* context = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "StreamingContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Specialized::NameObjectCollectionBase*), "GetObjectData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{info, context});
  }
};
// Writing MetadataGetter for method: System::Collections::Specialized::NameObjectCollectionBase::OnDeserialization
// Il2CppName: OnDeserialization
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::Specialized::NameObjectCollectionBase::*)(::Il2CppObject*)>(&System::Collections::Specialized::NameObjectCollectionBase::OnDeserialization)> {
  static const MethodInfo* get() {
    static auto* sender = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Specialized::NameObjectCollectionBase*), "OnDeserialization", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sender});
  }
};
// Writing MetadataGetter for method: System::Collections::Specialized::NameObjectCollectionBase::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::Specialized::NameObjectCollectionBase::*)()>(&System::Collections::Specialized::NameObjectCollectionBase::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Specialized::NameObjectCollectionBase*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Collections::Specialized::NameObjectCollectionBase::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::Specialized::NameObjectCollectionBase::*)(int)>(&System::Collections::Specialized::NameObjectCollectionBase::Reset)> {
  static const MethodInfo* get() {
    static auto* capacity = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Specialized::NameObjectCollectionBase*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{capacity});
  }
};
// Writing MetadataGetter for method: System::Collections::Specialized::NameObjectCollectionBase::FindEntry
// Il2CppName: FindEntry
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Specialized::NameObjectCollectionBase::NameObjectEntry* (System::Collections::Specialized::NameObjectCollectionBase::*)(::StringW)>(&System::Collections::Specialized::NameObjectCollectionBase::FindEntry)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Specialized::NameObjectCollectionBase*), "FindEntry", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key});
  }
};
// Writing MetadataGetter for method: System::Collections::Specialized::NameObjectCollectionBase::BaseAdd
// Il2CppName: BaseAdd
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::Specialized::NameObjectCollectionBase::*)(::StringW, ::Il2CppObject*)>(&System::Collections::Specialized::NameObjectCollectionBase::BaseAdd)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Specialized::NameObjectCollectionBase*), "BaseAdd", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, value});
  }
};
// Writing MetadataGetter for method: System::Collections::Specialized::NameObjectCollectionBase::BaseRemove
// Il2CppName: BaseRemove
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::Specialized::NameObjectCollectionBase::*)(::StringW)>(&System::Collections::Specialized::NameObjectCollectionBase::BaseRemove)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Specialized::NameObjectCollectionBase*), "BaseRemove", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name});
  }
};
// Writing MetadataGetter for method: System::Collections::Specialized::NameObjectCollectionBase::BaseGet
// Il2CppName: BaseGet
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Collections::Specialized::NameObjectCollectionBase::*)(::StringW)>(&System::Collections::Specialized::NameObjectCollectionBase::BaseGet)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Specialized::NameObjectCollectionBase*), "BaseGet", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name});
  }
};
// Writing MetadataGetter for method: System::Collections::Specialized::NameObjectCollectionBase::BaseSet
// Il2CppName: BaseSet
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::Specialized::NameObjectCollectionBase::*)(::StringW, ::Il2CppObject*)>(&System::Collections::Specialized::NameObjectCollectionBase::BaseSet)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Specialized::NameObjectCollectionBase*), "BaseSet", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, value});
  }
};
// Writing MetadataGetter for method: System::Collections::Specialized::NameObjectCollectionBase::BaseGet
// Il2CppName: BaseGet
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Collections::Specialized::NameObjectCollectionBase::*)(int)>(&System::Collections::Specialized::NameObjectCollectionBase::BaseGet)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Specialized::NameObjectCollectionBase*), "BaseGet", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: System::Collections::Specialized::NameObjectCollectionBase::BaseGetKey
// Il2CppName: BaseGetKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Collections::Specialized::NameObjectCollectionBase::*)(int)>(&System::Collections::Specialized::NameObjectCollectionBase::BaseGetKey)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Specialized::NameObjectCollectionBase*), "BaseGetKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: System::Collections::Specialized::NameObjectCollectionBase::GetEnumerator
// Il2CppName: GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (System::Collections::Specialized::NameObjectCollectionBase::*)()>(&System::Collections::Specialized::NameObjectCollectionBase::GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Specialized::NameObjectCollectionBase*), "GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Collections::Specialized::NameObjectCollectionBase::System_Collections_ICollection_CopyTo
// Il2CppName: System.Collections.ICollection.CopyTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::Specialized::NameObjectCollectionBase::*)(::System::Array*, int)>(&System::Collections::Specialized::NameObjectCollectionBase::System_Collections_ICollection_CopyTo)> {
  static const MethodInfo* get() {
    static auto* array = &::il2cpp_utils::GetClassFromName("System", "Array")->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Specialized::NameObjectCollectionBase*), "System.Collections.ICollection.CopyTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{array, index});
  }
};
