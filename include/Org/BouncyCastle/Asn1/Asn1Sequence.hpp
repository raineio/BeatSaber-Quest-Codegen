// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include <initializer_list>
// Including type: Org.BouncyCastle.Asn1.Asn1Object
#include "Org/BouncyCastle/Asn1/Asn1Object.hpp"
// Including type: System.Collections.IEnumerable
#include "System/Collections/IEnumerable.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Asn1
namespace Org::BouncyCastle::Asn1 {
  // Skipping declaration: Asn1Encodable because it is already included!
  // Forward declaring type: Asn1TaggedObject
  class Asn1TaggedObject;
  // Forward declaring type: Asn1EncodableVector
  class Asn1EncodableVector;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Asn1
namespace Org::BouncyCastle::Asn1 {
  // Autogenerated type: Org.BouncyCastle.Asn1.Asn1Sequence
  class Asn1Sequence : public Org::BouncyCastle::Asn1::Asn1Object, public System::Collections::IEnumerable {
    public:
    // Org.BouncyCastle.Asn1.Asn1Encodable[] elements
    // Offset: 0x10
    ::Array<Org::BouncyCastle::Asn1::Asn1Encodable*>* elements;
    // Creating conversion operator: operator ::Array<Org::BouncyCastle::Asn1::Asn1Encodable*>*
    constexpr operator ::Array<Org::BouncyCastle::Asn1::Asn1Encodable*>*() const noexcept {
      return elements;
    }
    // static public Org.BouncyCastle.Asn1.Asn1Sequence GetInstance(System.Object obj)
    // Offset: 0x13167C8
    static Org::BouncyCastle::Asn1::Asn1Sequence* GetInstance(::Il2CppObject* obj);
    // static public Org.BouncyCastle.Asn1.Asn1Sequence GetInstance(Org.BouncyCastle.Asn1.Asn1TaggedObject obj, System.Boolean explicitly)
    // Offset: 0x1316FCC
    static Org::BouncyCastle::Asn1::Asn1Sequence* GetInstance(Org::BouncyCastle::Asn1::Asn1TaggedObject* obj, bool explicitly);
    // protected internal System.Void .ctor(Org.BouncyCastle.Asn1.Asn1Encodable element)
    // Offset: 0x1317308
    static Asn1Sequence* New_ctor(Org::BouncyCastle::Asn1::Asn1Encodable* element);
    // protected internal System.Void .ctor(params Org.BouncyCastle.Asn1.Asn1Encodable[] elements)
    // Offset: 0x1317410
    static Asn1Sequence* New_ctor(::Array<Org::BouncyCastle::Asn1::Asn1Encodable*>* elements);
    // Creating initializer_list -> params proxy for: System.Void .ctor(params Org.BouncyCastle.Asn1.Asn1Encodable[] elements)
    static Asn1Sequence* New_ctor(std::initializer_list<Org::BouncyCastle::Asn1::Asn1Encodable*> elements);
    // Creating TArgs -> initializer_list proxy for: System.Void .ctor(params Org.BouncyCastle.Asn1.Asn1Encodable[] elements)
    template<class ...TParams>
    static Asn1Sequence* New_ctor(TParams&&... elements) {
      return New_ctor({elements...});
    }
    // protected internal System.Void .ctor(Org.BouncyCastle.Asn1.Asn1EncodableVector elementVector)
    // Offset: 0x1317508
    static Asn1Sequence* New_ctor(Org::BouncyCastle::Asn1::Asn1EncodableVector* elementVector);
    // public Org.BouncyCastle.Asn1.Asn1Encodable get_Item(System.Int32 index)
    // Offset: 0x13175D0
    Org::BouncyCastle::Asn1::Asn1Encodable* get_Item(int index);
    // public System.Int32 get_Count()
    // Offset: 0x131760C
    int get_Count();
    // protected internal System.Void .ctor()
    // Offset: 0x1317288
    // Implemented from: Org.BouncyCastle.Asn1.Asn1Object
    // Base method: System.Void Asn1Object::.ctor()
    // Base method: System.Void Asn1Encodable::.ctor()
    // Base method: System.Void Object::.ctor()
    static Asn1Sequence* New_ctor();
    // public System.Collections.IEnumerator GetEnumerator()
    // Offset: 0x13175B4
    // Implemented from: System.Collections.IEnumerable
    // Base method: System.Collections.IEnumerator IEnumerable::GetEnumerator()
    System::Collections::IEnumerator* GetEnumerator();
    // Creating proxy method: System_Collections_IEnumerable_GetEnumerator
    // Maps to method: GetEnumerator
    System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
    // protected override System.Int32 Asn1GetHashCode()
    // Offset: 0x1317628
    // Implemented from: Org.BouncyCastle.Asn1.Asn1Object
    // Base method: System.Int32 Asn1Object::Asn1GetHashCode()
    int Asn1GetHashCode();
    // protected override System.Boolean Asn1Equals(Org.BouncyCastle.Asn1.Asn1Object asn1Object)
    // Offset: 0x13176CC
    // Implemented from: Org.BouncyCastle.Asn1.Asn1Object
    // Base method: System.Boolean Asn1Object::Asn1Equals(Org.BouncyCastle.Asn1.Asn1Object asn1Object)
    bool Asn1Equals(Org::BouncyCastle::Asn1::Asn1Object* asn1Object);
    // public override System.String ToString()
    // Offset: 0x1317848
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
  }; // Org.BouncyCastle.Asn1.Asn1Sequence
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Asn1Sequence*, "Org.BouncyCastle.Asn1", "Asn1Sequence");
#pragma pack(pop)
