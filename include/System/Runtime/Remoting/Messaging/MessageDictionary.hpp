// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Collections.IDictionary
#include "System/Collections/IDictionary.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Remoting::Messaging
namespace System::Runtime::Remoting::Messaging {
  // Forward declaring type: IMethodMessage
  class IMethodMessage;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Skipping declaration: ICollection because it is already included!
  // Forward declaring type: IEnumerator
  class IEnumerator;
  // Forward declaring type: IDictionaryEnumerator
  class IDictionaryEnumerator;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Array
  class Array;
}
// Completed forward declares
// Type namespace: System.Runtime.Remoting.Messaging
namespace System::Runtime::Remoting::Messaging {
  // Autogenerated type: System.Runtime.Remoting.Messaging.MessageDictionary
  class MessageDictionary : public ::Il2CppObject, public System::Collections::IDictionary {
    public:
    // Nested type: System::Runtime::Remoting::Messaging::MessageDictionary::DictionaryEnumerator
    class DictionaryEnumerator;
    // private System.Collections.IDictionary _internalProperties
    // Offset: 0x10
    System::Collections::IDictionary* internalProperties;
    // protected System.Runtime.Remoting.Messaging.IMethodMessage _message
    // Offset: 0x18
    System::Runtime::Remoting::Messaging::IMethodMessage* message;
    // private System.String[] _methodKeys
    // Offset: 0x20
    ::Array<::Il2CppString*>* methodKeys;
    // private System.Boolean _ownProperties
    // Offset: 0x28
    bool ownProperties;
    // public System.Void .ctor(System.Runtime.Remoting.Messaging.IMethodMessage message)
    // Offset: 0x12C77EC
    static MessageDictionary* New_ctor(System::Runtime::Remoting::Messaging::IMethodMessage* message);
    // System.Boolean HasUserData()
    // Offset: 0x12C7A40
    bool HasUserData();
    // System.Collections.IDictionary get_InternalDictionary()
    // Offset: 0x12C7B50
    System::Collections::IDictionary* get_InternalDictionary();
    // public System.Void set_MethodKeys(System.String[] value)
    // Offset: 0x12C7BEC
    void set_MethodKeys(::Array<::Il2CppString*>* value);
    // protected System.Collections.IDictionary AllocInternalProperties()
    // Offset: 0x12C7BF4
    System::Collections::IDictionary* AllocInternalProperties();
    // public System.Collections.IDictionary GetInternalProperties()
    // Offset: 0x12C7C5C
    System::Collections::IDictionary* GetInternalProperties();
    // private System.Boolean IsOverridenKey(System.String key)
    // Offset: 0x12C7CAC
    bool IsOverridenKey(::Il2CppString* key);
    // protected System.Object GetMethodProperty(System.String key)
    // Offset: 0x12C802C
    ::Il2CppObject* GetMethodProperty(::Il2CppString* key);
    // protected System.Void SetMethodProperty(System.String key, System.Object value)
    // Offset: 0x12C85E8
    void SetMethodProperty(::Il2CppString* key, ::Il2CppObject* value);
    // public System.Collections.ICollection get_Values()
    // Offset: 0x12C8C28
    System::Collections::ICollection* get_Values();
    // public System.Object get_Item(System.Object key)
    // Offset: 0x12C7D44
    // Implemented from: System.Collections.IDictionary
    // Base method: System.Object IDictionary::get_Item(System.Object key)
    ::Il2CppObject* get_Item(::Il2CppObject* key);
    // Creating proxy method: System_Collections_IDictionary_get_Item
    // Maps to method: get_Item
    ::Il2CppObject* System_Collections_IDictionary_get_Item(::Il2CppObject* key);
    // public System.Void set_Item(System.Object key, System.Object value)
    // Offset: 0x12C7E9C
    // Implemented from: System.Collections.IDictionary
    // Base method: System.Void IDictionary::set_Item(System.Object key, System.Object value)
    void set_Item(::Il2CppObject* key, ::Il2CppObject* value);
    // Creating proxy method: System_Collections_IDictionary_set_Item
    // Maps to method: set_Item
    void System_Collections_IDictionary_set_Item(::Il2CppObject* key, ::Il2CppObject* value);
    // public System.Collections.ICollection get_Keys()
    // Offset: 0x12C886C
    // Implemented from: System.Collections.IDictionary
    // Base method: System.Collections.ICollection IDictionary::get_Keys()
    System::Collections::ICollection* get_Keys();
    // Creating proxy method: System_Collections_IDictionary_get_Keys
    // Maps to method: get_Keys
    System::Collections::ICollection* System_Collections_IDictionary_get_Keys();
    // public System.Void Add(System.Object key, System.Object value)
    // Offset: 0x12C7EA0
    // Implemented from: System.Collections.IDictionary
    // Base method: System.Void IDictionary::Add(System.Object key, System.Object value)
    void Add(::Il2CppObject* key, ::Il2CppObject* value);
    // Creating proxy method: System_Collections_IDictionary_Add
    // Maps to method: Add
    void System_Collections_IDictionary_Add(::Il2CppObject* key, ::Il2CppObject* value);
    // public System.Boolean Contains(System.Object key)
    // Offset: 0x12C8FC8
    // Implemented from: System.Collections.IDictionary
    // Base method: System.Boolean IDictionary::Contains(System.Object key)
    bool Contains(::Il2CppObject* key);
    // Creating proxy method: System_Collections_IDictionary_Contains
    // Maps to method: Contains
    bool System_Collections_IDictionary_Contains(::Il2CppObject* key);
    // public System.Int32 get_Count()
    // Offset: 0x12C911C
    // Implemented from: System.Collections.ICollection
    // Base method: System.Int32 ICollection::get_Count()
    int get_Count();
    // Creating proxy method: System_Collections_ICollection_get_Count
    // Maps to method: get_Count
    int System_Collections_ICollection_get_Count();
    // public System.Void CopyTo(System.Array array, System.Int32 index)
    // Offset: 0x12C91F4
    // Implemented from: System.Collections.ICollection
    // Base method: System.Void ICollection::CopyTo(System.Array array, System.Int32 index)
    void CopyTo(System::Array* array, int index);
    // Creating proxy method: System_Collections_ICollection_CopyTo
    // Maps to method: CopyTo
    void System_Collections_ICollection_CopyTo(System::Array* array, int index);
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0x12C92C4
    // Implemented from: System.Collections.IEnumerable
    // Base method: System.Collections.IEnumerator IEnumerable::GetEnumerator()
    System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
    // public System.Collections.IDictionaryEnumerator GetEnumerator()
    // Offset: 0x12C9440
    // Implemented from: System.Collections.IDictionary
    // Base method: System.Collections.IDictionaryEnumerator IDictionary::GetEnumerator()
    System::Collections::IDictionaryEnumerator* GetEnumerator();
    // Creating proxy method: System_Collections_IDictionary_GetEnumerator
    // Maps to method: GetEnumerator
    System::Collections::IDictionaryEnumerator* System_Collections_IDictionary_GetEnumerator();
  }; // System.Runtime.Remoting.Messaging.MessageDictionary
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::Messaging::MessageDictionary*, "System.Runtime.Remoting.Messaging", "MessageDictionary");
#pragma pack(pop)
