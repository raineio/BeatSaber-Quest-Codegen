// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Collections.Specialized.ListDictionary/NodeKeyValueCollection
#include "System/Collections/Specialized/ListDictionary_NodeKeyValueCollection.hpp"
// Including type: System.Collections.IEnumerator
#include "System/Collections/IEnumerator.hpp"
// Including type: System.Collections.Specialized.ListDictionary
#include "System/Collections/Specialized/ListDictionary.hpp"
// Completed includes
// Type namespace: System.Collections.Specialized
namespace System::Collections::Specialized {
  // Autogenerated type: System.Collections.Specialized.ListDictionary/NodeKeyValueCollection/NodeKeyValueEnumerator
  class ListDictionary::NodeKeyValueCollection::NodeKeyValueEnumerator : public ::Il2CppObject, public System::Collections::IEnumerator {
    public:
    // private System.Collections.Specialized.ListDictionary list
    // Offset: 0x10
    System::Collections::Specialized::ListDictionary* list;
    // private System.Collections.Specialized.ListDictionary/DictionaryNode current
    // Offset: 0x18
    System::Collections::Specialized::ListDictionary::DictionaryNode* current;
    // private System.Int32 version
    // Offset: 0x20
    int version;
    // private System.Boolean isKeys
    // Offset: 0x24
    bool isKeys;
    // private System.Boolean start
    // Offset: 0x25
    bool start;
    // public System.Void .ctor(System.Collections.Specialized.ListDictionary list, System.Boolean isKeys)
    // Offset: 0x14DE35C
    static ListDictionary::NodeKeyValueCollection::NodeKeyValueEnumerator* New_ctor(System::Collections::Specialized::ListDictionary* list, bool isKeys);
    // public System.Object get_Current()
    // Offset: 0x14DE3D0
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Object IEnumerator::get_Current()
    ::Il2CppObject* get_Current();
    // Creating proxy method: System_Collections_IEnumerator_get_Current
    // Maps to method: get_Current
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
    // public System.Boolean MoveNext()
    // Offset: 0x14DE470
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Boolean IEnumerator::MoveNext()
    bool MoveNext();
    // Creating proxy method: System_Collections_IEnumerator_MoveNext
    // Maps to method: MoveNext
    bool System_Collections_IEnumerator_MoveNext();
    // public System.Void Reset()
    // Offset: 0x14DE550
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Void IEnumerator::Reset()
    void Reset();
    // Creating proxy method: System_Collections_IEnumerator_Reset
    // Maps to method: Reset
    void System_Collections_IEnumerator_Reset();
  }; // System.Collections.Specialized.ListDictionary/NodeKeyValueCollection/NodeKeyValueEnumerator
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Collections::Specialized::ListDictionary::NodeKeyValueCollection::NodeKeyValueEnumerator*, "System.Collections.Specialized", "ListDictionary/NodeKeyValueCollection/NodeKeyValueEnumerator");
#pragma pack(pop)
