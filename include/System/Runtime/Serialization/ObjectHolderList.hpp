// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: ObjectHolder
  class ObjectHolder;
  // Forward declaring type: ObjectHolderListEnumerator
  class ObjectHolderListEnumerator;
}
// Completed forward declares
// Type namespace: System.Runtime.Serialization
namespace System::Runtime::Serialization {
  // Autogenerated type: System.Runtime.Serialization.ObjectHolderList
  class ObjectHolderList : public ::Il2CppObject {
    public:
    // System.Runtime.Serialization.ObjectHolder[] m_values
    // Offset: 0x10
    ::Array<System::Runtime::Serialization::ObjectHolder*>* m_values;
    // System.Int32 m_count
    // Offset: 0x18
    int m_count;
    // System.Void .ctor(System.Int32 startingSize)
    // Offset: 0x12A6638
    static ObjectHolderList* New_ctor(int startingSize);
    // System.Void Add(System.Runtime.Serialization.ObjectHolder value)
    // Offset: 0x12A66B4
    void Add(System::Runtime::Serialization::ObjectHolder* value);
    // System.Runtime.Serialization.ObjectHolderListEnumerator GetFixupEnumerator()
    // Offset: 0x12A6810
    System::Runtime::Serialization::ObjectHolderListEnumerator* GetFixupEnumerator();
    // private System.Void EnlargeArray()
    // Offset: 0x12A676C
    void EnlargeArray();
    // System.Int32 get_Version()
    // Offset: 0x12A68DC
    int get_Version();
    // System.Int32 get_Count()
    // Offset: 0x12A68E4
    int get_Count();
    // System.Void .ctor()
    // Offset: 0x12A6630
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static ObjectHolderList* New_ctor();
  }; // System.Runtime.Serialization.ObjectHolderList
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::ObjectHolderList*, "System.Runtime.Serialization", "ObjectHolderList");
#pragma pack(pop)
