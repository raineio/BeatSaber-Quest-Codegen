// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Collections.IComparer
#include "System/Collections/IComparer.hpp"
// Including type: System.Collections.IEqualityComparer
#include "System/Collections/IEqualityComparer.hpp"
// Including type: System.Collections.Generic.IComparer`1
#include "System/Collections/Generic/IComparer_1.hpp"
// Including type: System.Collections.Generic.IEqualityComparer`1
#include "System/Collections/Generic/IEqualityComparer_1.hpp"
// Completed includes
// Type namespace: System.Resources
namespace System::Resources {
  // Autogenerated type: System.Resources.FastResourceComparer
  class FastResourceComparer : public ::Il2CppObject, public System::Collections::IComparer, public System::Collections::IEqualityComparer, public System::Collections::Generic::IComparer_1<::Il2CppString*>, public System::Collections::Generic::IEqualityComparer_1<::Il2CppString*> {
    public:
    // Get static field: static readonly System.Resources.FastResourceComparer Default
    static System::Resources::FastResourceComparer* _get_Default();
    // Set static field: static readonly System.Resources.FastResourceComparer Default
    static void _set_Default(System::Resources::FastResourceComparer* value);
    // static System.Int32 HashFunction(System.String key)
    // Offset: 0x167DD44
    static int HashFunction(::Il2CppString* key);
    // static public System.Int32 CompareOrdinal(System.String a, System.Byte[] bytes, System.Int32 bCharLength)
    // Offset: 0x167DFA0
    static int CompareOrdinal(::Il2CppString* a, ::Array<uint8_t>* bytes, int bCharLength);
    // static public System.Int32 CompareOrdinal(System.Byte[] bytes, System.Int32 aCharLength, System.String b)
    // Offset: 0x167E060
    static int CompareOrdinal(::Array<uint8_t>* bytes, int aCharLength, ::Il2CppString* b);
    // static System.Int32 CompareOrdinal(System.Byte* a, System.Int32 byteLen, System.String b)
    // Offset: 0x167E0E4
    static int CompareOrdinal(uint8_t* a, int byteLen, ::Il2CppString* b);
    // static private System.Void .cctor()
    // Offset: 0x167E18C
    static void _cctor();
    // public System.Int32 GetHashCode(System.Object key)
    // Offset: 0x167DCB4
    // Implemented from: System.Collections.IEqualityComparer
    // Base method: System.Int32 IEqualityComparer::GetHashCode(System.Object key)
    int GetHashCode(::Il2CppObject* key);
    // Creating proxy method: System_Collections_IEqualityComparer_GetHashCode
    // Maps to method: GetHashCode
    int System_Collections_IEqualityComparer_GetHashCode(::Il2CppObject* key);
    // public System.Int32 GetHashCode(System.String key)
    // Offset: 0x167DDBC
    // Implemented from: System.Collections.Generic.IEqualityComparer`1
    // Base method: System.Int32 IEqualityComparer_1::GetHashCode(System.String key)
    int GetHashCode(::Il2CppString* key);
    // public System.Int32 Compare(System.Object a, System.Object b)
    // Offset: 0x167DE20
    // Implemented from: System.Collections.IComparer
    // Base method: System.Int32 IComparer::Compare(System.Object a, System.Object b)
    int Compare(::Il2CppObject* a, ::Il2CppObject* b);
    // Creating proxy method: System_Collections_IComparer_Compare
    // Maps to method: Compare
    int System_Collections_IComparer_Compare(::Il2CppObject* a, ::Il2CppObject* b);
    // public System.Int32 Compare(System.String a, System.String b)
    // Offset: 0x167DED0
    // Implemented from: System.Collections.Generic.IComparer`1
    // Base method: System.Int32 IComparer_1::Compare(System.String a, System.String b)
    int Compare(::Il2CppString* a, ::Il2CppString* b);
    // public System.Boolean Equals(System.String a, System.String b)
    // Offset: 0x167DEE0
    // Implemented from: System.Collections.Generic.IEqualityComparer`1
    // Base method: System.Boolean IEqualityComparer_1::Equals(System.String a, System.String b)
    bool Equals(::Il2CppString* a, ::Il2CppString* b);
    // public System.Boolean Equals(System.Object a, System.Object b)
    // Offset: 0x167DEF0
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object a, System.Object b)
    // Base method: System.Boolean IEqualityComparer::Equals(System.Object a, System.Object b)
    bool Equals(::Il2CppObject* a, ::Il2CppObject* b);
    // Creating proxy method: System_Collections_IEqualityComparer_Equals
    // Maps to method: Equals
    bool System_Collections_IEqualityComparer_Equals(::Il2CppObject* a, ::Il2CppObject* b);
    // public System.Void .ctor()
    // Offset: 0x167E184
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static FastResourceComparer* New_ctor();
  }; // System.Resources.FastResourceComparer
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Resources::FastResourceComparer*, "System.Resources", "FastResourceComparer");
#pragma pack(pop)
