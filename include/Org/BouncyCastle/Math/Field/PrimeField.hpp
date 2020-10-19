// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Math.Field.IFiniteField
#include "Org/BouncyCastle/Math/Field/IFiniteField.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Math
namespace Org::BouncyCastle::Math {
  // Forward declaring type: BigInteger
  class BigInteger;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Math.Field
namespace Org::BouncyCastle::Math::Field {
  // Autogenerated type: Org.BouncyCastle.Math.Field.PrimeField
  class PrimeField : public ::Il2CppObject, public Org::BouncyCastle::Math::Field::IFiniteField {
    public:
    // protected readonly Org.BouncyCastle.Math.BigInteger characteristic
    // Offset: 0x10
    Org::BouncyCastle::Math::BigInteger* characteristic;
    // Creating conversion operator: operator Org::BouncyCastle::Math::BigInteger*
    constexpr operator Org::BouncyCastle::Math::BigInteger*() const noexcept {
      return characteristic;
    }
    // System.Void .ctor(Org.BouncyCastle.Math.BigInteger characteristic)
    // Offset: 0x1902F48
    static PrimeField* New_ctor(Org::BouncyCastle::Math::BigInteger* characteristic);
    // public Org.BouncyCastle.Math.BigInteger get_Characteristic()
    // Offset: 0x19035B0
    // Implemented from: Org.BouncyCastle.Math.Field.IFiniteField
    // Base method: Org.BouncyCastle.Math.BigInteger IFiniteField::get_Characteristic()
    Org::BouncyCastle::Math::BigInteger* get_Characteristic();
    // public System.Int32 get_Dimension()
    // Offset: 0x19035B8
    // Implemented from: Org.BouncyCastle.Math.Field.IFiniteField
    // Base method: System.Int32 IFiniteField::get_Dimension()
    int get_Dimension();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x19035C0
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x1903688
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
  }; // Org.BouncyCastle.Math.Field.PrimeField
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::Field::PrimeField*, "Org.BouncyCastle.Math.Field", "PrimeField");
#pragma pack(pop)
