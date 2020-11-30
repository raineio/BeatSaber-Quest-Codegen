// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Collections.Specialized.ListDictionary
#include "System/Collections/Specialized/ListDictionary.hpp"
// Including type: System.Collections.ICollection
#include "System/Collections/ICollection.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Specialized
namespace System::Collections::Specialized {
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Array
  class Array;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: System.Collections.Specialized
namespace System::Collections::Specialized {
  // Autogenerated type: System.Collections.Specialized.ListDictionary/NodeKeyValueCollection
  class ListDictionary::NodeKeyValueCollection : public ::Il2CppObject/*, public System::Collections::ICollection*/ {
    public:
    // Nested type: System::Collections::Specialized::ListDictionary::NodeKeyValueCollection::NodeKeyValueEnumerator
    class NodeKeyValueEnumerator;
    // private System.Collections.Specialized.ListDictionary list
    // Offset: 0x10
    System::Collections::Specialized::ListDictionary* list;
    // private System.Boolean isKeys
    // Offset: 0x18
    bool isKeys;
    // Creating interface conversion operator: operator System::Collections::ICollection
    operator System::Collections::ICollection() noexcept {
      return *reinterpret_cast<System::Collections::ICollection*>(this);
    }
    // public System.Void .ctor(System.Collections.Specialized.ListDictionary list, System.Boolean isKeys)
    // Offset: 0x147C89C
    static ListDictionary::NodeKeyValueCollection* New_ctor(System::Collections::Specialized::ListDictionary* list, bool isKeys);
    // private System.Void System.Collections.ICollection.CopyTo(System.Array array, System.Int32 index)
    // Offset: 0x147CD60
    // Implemented from: System.Collections.ICollection
    // Base method: System.Void ICollection::CopyTo(System.Array array, System.Int32 index)
    void System_Collections_ICollection_CopyTo(System::Array* array, int index);
    // private System.Int32 System.Collections.ICollection.get_Count()
    // Offset: 0x147CE90
    // Implemented from: System.Collections.ICollection
    // Base method: System.Int32 ICollection::get_Count()
    int System_Collections_ICollection_get_Count();
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0x147CEC8
    // Implemented from: System.Collections.IEnumerable
    // Base method: System.Collections.IEnumerator IEnumerable::GetEnumerator()
    System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
  }; // System.Collections.Specialized.ListDictionary/NodeKeyValueCollection
  check_size<sizeof(ListDictionary::NodeKeyValueCollection), 24 + sizeof(bool) + 8 - (24 + sizeof(bool)) % 8> __System_Collections_Specialized_ListDictionary_NodeKeyValueCollectionSizeCheck;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Collections::Specialized::ListDictionary::NodeKeyValueCollection*, "System.Collections.Specialized", "ListDictionary/NodeKeyValueCollection");
#pragma pack(pop)