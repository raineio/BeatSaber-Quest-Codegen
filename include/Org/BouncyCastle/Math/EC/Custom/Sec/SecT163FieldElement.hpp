// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Math.EC.AbstractF2mFieldElement
#include "Org/BouncyCastle/Math/EC/AbstractF2mFieldElement.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Math
namespace Org::BouncyCastle::Math {
  // Forward declaring type: BigInteger
  class BigInteger;
}
// Forward declaring namespace: Org::BouncyCastle::Math::EC
namespace Org::BouncyCastle::Math::EC {
  // Skipping declaration: ECFieldElement because it is already included!
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Math.EC.Custom.Sec
namespace Org::BouncyCastle::Math::EC::Custom::Sec {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Math.EC.Custom.Sec.SecT163FieldElement
  class SecT163FieldElement : public Org::BouncyCastle::Math::EC::AbstractF2mFieldElement {
    public:
    // protected internal readonly System.UInt64[] x
    // Size: 0x8
    // Offset: 0x10
    ::Array<uint64_t>* x;
    // Field size check
    static_assert(sizeof(::Array<uint64_t>*) == 0x8);
    // Creating value type constructor for type: SecT163FieldElement
    SecT163FieldElement(::Array<uint64_t>* x_ = {}) noexcept : x{x_} {}
    // Creating conversion operator: operator ::Array<uint64_t>*
    constexpr operator ::Array<uint64_t>*() const noexcept {
      return x;
    }
    // public System.Void .ctor(Org.BouncyCastle.Math.BigInteger x)
    // Offset: 0x1E91030
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SecT163FieldElement* New_ctor(Org::BouncyCastle::Math::BigInteger* x) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Math::EC::Custom::Sec::SecT163FieldElement::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SecT163FieldElement*, creationType>(x)));
    }
    // protected internal System.Void .ctor(System.UInt64[] x)
    // Offset: 0x1E91124
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SecT163FieldElement* New_ctor(::Array<uint64_t>* x) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Math::EC::Custom::Sec::SecT163FieldElement::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SecT163FieldElement*, creationType>(x)));
    }
    // public System.Boolean Equals(Org.BouncyCastle.Math.EC.Custom.Sec.SecT163FieldElement other)
    // Offset: 0x1E91C78
    bool Equals(Org::BouncyCastle::Math::EC::Custom::Sec::SecT163FieldElement* other);
    // public override System.Boolean get_IsOne()
    // Offset: 0x1E91150
    // Implemented from: Org.BouncyCastle.Math.EC.ECFieldElement
    // Base method: System.Boolean ECFieldElement::get_IsOne()
    bool get_IsOne();
    // public override System.Boolean get_IsZero()
    // Offset: 0x1E9115C
    // Implemented from: Org.BouncyCastle.Math.EC.ECFieldElement
    // Base method: System.Boolean ECFieldElement::get_IsZero()
    bool get_IsZero();
    // public override System.Boolean TestBitZero()
    // Offset: 0x1E91168
    // Implemented from: Org.BouncyCastle.Math.EC.ECFieldElement
    // Base method: System.Boolean ECFieldElement::TestBitZero()
    bool TestBitZero();
    // public override Org.BouncyCastle.Math.BigInteger ToBigInteger()
    // Offset: 0x1E911A0
    // Implemented from: Org.BouncyCastle.Math.EC.ECFieldElement
    // Base method: Org.BouncyCastle.Math.BigInteger ECFieldElement::ToBigInteger()
    Org::BouncyCastle::Math::BigInteger* ToBigInteger();
    // public override System.Int32 get_FieldSize()
    // Offset: 0x1E911AC
    // Implemented from: Org.BouncyCastle.Math.EC.ECFieldElement
    // Base method: System.Int32 ECFieldElement::get_FieldSize()
    int get_FieldSize();
    // public override Org.BouncyCastle.Math.EC.ECFieldElement Add(Org.BouncyCastle.Math.EC.ECFieldElement b)
    // Offset: 0x1E911B4
    // Implemented from: Org.BouncyCastle.Math.EC.ECFieldElement
    // Base method: Org.BouncyCastle.Math.EC.ECFieldElement ECFieldElement::Add(Org.BouncyCastle.Math.EC.ECFieldElement b)
    Org::BouncyCastle::Math::EC::ECFieldElement* Add(Org::BouncyCastle::Math::EC::ECFieldElement* b);
    // public override Org.BouncyCastle.Math.EC.ECFieldElement AddOne()
    // Offset: 0x1E912A4
    // Implemented from: Org.BouncyCastle.Math.EC.ECFieldElement
    // Base method: Org.BouncyCastle.Math.EC.ECFieldElement ECFieldElement::AddOne()
    Org::BouncyCastle::Math::EC::ECFieldElement* AddOne();
    // public override Org.BouncyCastle.Math.EC.ECFieldElement Subtract(Org.BouncyCastle.Math.EC.ECFieldElement b)
    // Offset: 0x1E91348
    // Implemented from: Org.BouncyCastle.Math.EC.ECFieldElement
    // Base method: Org.BouncyCastle.Math.EC.ECFieldElement ECFieldElement::Subtract(Org.BouncyCastle.Math.EC.ECFieldElement b)
    Org::BouncyCastle::Math::EC::ECFieldElement* Subtract(Org::BouncyCastle::Math::EC::ECFieldElement* b);
    // public override Org.BouncyCastle.Math.EC.ECFieldElement Multiply(Org.BouncyCastle.Math.EC.ECFieldElement b)
    // Offset: 0x1E91354
    // Implemented from: Org.BouncyCastle.Math.EC.ECFieldElement
    // Base method: Org.BouncyCastle.Math.EC.ECFieldElement ECFieldElement::Multiply(Org.BouncyCastle.Math.EC.ECFieldElement b)
    Org::BouncyCastle::Math::EC::ECFieldElement* Multiply(Org::BouncyCastle::Math::EC::ECFieldElement* b);
    // public override Org.BouncyCastle.Math.EC.ECFieldElement MultiplyMinusProduct(Org.BouncyCastle.Math.EC.ECFieldElement b, Org.BouncyCastle.Math.EC.ECFieldElement x, Org.BouncyCastle.Math.EC.ECFieldElement y)
    // Offset: 0x1E91444
    // Implemented from: Org.BouncyCastle.Math.EC.ECFieldElement
    // Base method: Org.BouncyCastle.Math.EC.ECFieldElement ECFieldElement::MultiplyMinusProduct(Org.BouncyCastle.Math.EC.ECFieldElement b, Org.BouncyCastle.Math.EC.ECFieldElement x, Org.BouncyCastle.Math.EC.ECFieldElement y)
    Org::BouncyCastle::Math::EC::ECFieldElement* MultiplyMinusProduct(Org::BouncyCastle::Math::EC::ECFieldElement* b, Org::BouncyCastle::Math::EC::ECFieldElement* x, Org::BouncyCastle::Math::EC::ECFieldElement* y);
    // public override Org.BouncyCastle.Math.EC.ECFieldElement MultiplyPlusProduct(Org.BouncyCastle.Math.EC.ECFieldElement b, Org.BouncyCastle.Math.EC.ECFieldElement x, Org.BouncyCastle.Math.EC.ECFieldElement y)
    // Offset: 0x1E91454
    // Implemented from: Org.BouncyCastle.Math.EC.ECFieldElement
    // Base method: Org.BouncyCastle.Math.EC.ECFieldElement ECFieldElement::MultiplyPlusProduct(Org.BouncyCastle.Math.EC.ECFieldElement b, Org.BouncyCastle.Math.EC.ECFieldElement x, Org.BouncyCastle.Math.EC.ECFieldElement y)
    Org::BouncyCastle::Math::EC::ECFieldElement* MultiplyPlusProduct(Org::BouncyCastle::Math::EC::ECFieldElement* b, Org::BouncyCastle::Math::EC::ECFieldElement* x, Org::BouncyCastle::Math::EC::ECFieldElement* y);
    // public override Org.BouncyCastle.Math.EC.ECFieldElement Divide(Org.BouncyCastle.Math.EC.ECFieldElement b)
    // Offset: 0x1E915E0
    // Implemented from: Org.BouncyCastle.Math.EC.ECFieldElement
    // Base method: Org.BouncyCastle.Math.EC.ECFieldElement ECFieldElement::Divide(Org.BouncyCastle.Math.EC.ECFieldElement b)
    Org::BouncyCastle::Math::EC::ECFieldElement* Divide(Org::BouncyCastle::Math::EC::ECFieldElement* b);
    // public override Org.BouncyCastle.Math.EC.ECFieldElement Negate()
    // Offset: 0x1E9162C
    // Implemented from: Org.BouncyCastle.Math.EC.ECFieldElement
    // Base method: Org.BouncyCastle.Math.EC.ECFieldElement ECFieldElement::Negate()
    Org::BouncyCastle::Math::EC::ECFieldElement* Negate();
    // public override Org.BouncyCastle.Math.EC.ECFieldElement Square()
    // Offset: 0x1E91630
    // Implemented from: Org.BouncyCastle.Math.EC.ECFieldElement
    // Base method: Org.BouncyCastle.Math.EC.ECFieldElement ECFieldElement::Square()
    Org::BouncyCastle::Math::EC::ECFieldElement* Square();
    // public override Org.BouncyCastle.Math.EC.ECFieldElement SquarePlusProduct(Org.BouncyCastle.Math.EC.ECFieldElement x, Org.BouncyCastle.Math.EC.ECFieldElement y)
    // Offset: 0x1E916D4
    // Implemented from: Org.BouncyCastle.Math.EC.ECFieldElement
    // Base method: Org.BouncyCastle.Math.EC.ECFieldElement ECFieldElement::SquarePlusProduct(Org.BouncyCastle.Math.EC.ECFieldElement x, Org.BouncyCastle.Math.EC.ECFieldElement y)
    Org::BouncyCastle::Math::EC::ECFieldElement* SquarePlusProduct(Org::BouncyCastle::Math::EC::ECFieldElement* x, Org::BouncyCastle::Math::EC::ECFieldElement* y);
    // public override Org.BouncyCastle.Math.EC.ECFieldElement SquarePow(System.Int32 pow)
    // Offset: 0x1E91828
    // Implemented from: Org.BouncyCastle.Math.EC.ECFieldElement
    // Base method: Org.BouncyCastle.Math.EC.ECFieldElement ECFieldElement::SquarePow(System.Int32 pow)
    Org::BouncyCastle::Math::EC::ECFieldElement* SquarePow(int pow);
    // public override Org.BouncyCastle.Math.EC.ECFieldElement HalfTrace()
    // Offset: 0x1E918E4
    // Implemented from: Org.BouncyCastle.Math.EC.AbstractF2mFieldElement
    // Base method: Org.BouncyCastle.Math.EC.ECFieldElement AbstractF2mFieldElement::HalfTrace()
    Org::BouncyCastle::Math::EC::ECFieldElement* HalfTrace();
    // public override System.Boolean get_HasFastTrace()
    // Offset: 0x1E91988
    // Implemented from: Org.BouncyCastle.Math.EC.AbstractF2mFieldElement
    // Base method: System.Boolean AbstractF2mFieldElement::get_HasFastTrace()
    bool get_HasFastTrace();
    // public override System.Int32 Trace()
    // Offset: 0x1E91990
    // Implemented from: Org.BouncyCastle.Math.EC.AbstractF2mFieldElement
    // Base method: System.Int32 AbstractF2mFieldElement::Trace()
    int Trace();
    // public override Org.BouncyCastle.Math.EC.ECFieldElement Invert()
    // Offset: 0x1E919F8
    // Implemented from: Org.BouncyCastle.Math.EC.ECFieldElement
    // Base method: Org.BouncyCastle.Math.EC.ECFieldElement ECFieldElement::Invert()
    Org::BouncyCastle::Math::EC::ECFieldElement* Invert();
    // public override Org.BouncyCastle.Math.EC.ECFieldElement Sqrt()
    // Offset: 0x1E91A9C
    // Implemented from: Org.BouncyCastle.Math.EC.ECFieldElement
    // Base method: Org.BouncyCastle.Math.EC.ECFieldElement ECFieldElement::Sqrt()
    Org::BouncyCastle::Math::EC::ECFieldElement* Sqrt();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x1E91B40
    // Implemented from: Org.BouncyCastle.Math.EC.ECFieldElement
    // Base method: System.Boolean ECFieldElement::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Boolean Equals(Org.BouncyCastle.Math.EC.ECFieldElement other)
    // Offset: 0x1E91BDC
    // Implemented from: Org.BouncyCastle.Math.EC.ECFieldElement
    // Base method: System.Boolean ECFieldElement::Equals(Org.BouncyCastle.Math.EC.ECFieldElement other)
    bool Equals(Org::BouncyCastle::Math::EC::ECFieldElement* other);
    // public override System.Int32 GetHashCode()
    // Offset: 0x1E91CA4
    // Implemented from: Org.BouncyCastle.Math.EC.ECFieldElement
    // Base method: System.Int32 ECFieldElement::GetHashCode()
    int GetHashCode();
  }; // Org.BouncyCastle.Math.EC.Custom.Sec.SecT163FieldElement
  #pragma pack(pop)
  static check_size<sizeof(SecT163FieldElement), 16 + sizeof(::Array<uint64_t>*)> __Org_BouncyCastle_Math_EC_Custom_Sec_SecT163FieldElementSizeCheck;
  static_assert(sizeof(SecT163FieldElement) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::EC::Custom::Sec::SecT163FieldElement*, "Org.BouncyCastle.Math.EC.Custom.Sec", "SecT163FieldElement");
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecT163FieldElement::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecT163FieldElement::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecT163FieldElement::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Math::EC::Custom::Sec::SecT163FieldElement::*)(Org::BouncyCastle::Math::EC::Custom::Sec::SecT163FieldElement*)>(&Org::BouncyCastle::Math::EC::Custom::Sec::SecT163FieldElement::Equals)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Custom::Sec::SecT163FieldElement*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<Org::BouncyCastle::Math::EC::Custom::Sec::SecT163FieldElement*>()});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecT163FieldElement::get_IsOne
// Il2CppName: get_IsOne
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Math::EC::Custom::Sec::SecT163FieldElement::*)()>(&Org::BouncyCastle::Math::EC::Custom::Sec::SecT163FieldElement::get_IsOne)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Custom::Sec::SecT163FieldElement*), "get_IsOne", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecT163FieldElement::get_IsZero
// Il2CppName: get_IsZero
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Math::EC::Custom::Sec::SecT163FieldElement::*)()>(&Org::BouncyCastle::Math::EC::Custom::Sec::SecT163FieldElement::get_IsZero)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Custom::Sec::SecT163FieldElement*), "get_IsZero", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecT163FieldElement::TestBitZero
// Il2CppName: TestBitZero
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Math::EC::Custom::Sec::SecT163FieldElement::*)()>(&Org::BouncyCastle::Math::EC::Custom::Sec::SecT163FieldElement::TestBitZero)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Custom::Sec::SecT163FieldElement*), "TestBitZero", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecT163FieldElement::ToBigInteger
// Il2CppName: ToBigInteger
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::BigInteger* (Org::BouncyCastle::Math::EC::Custom::Sec::SecT163FieldElement::*)()>(&Org::BouncyCastle::Math::EC::Custom::Sec::SecT163FieldElement::ToBigInteger)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Custom::Sec::SecT163FieldElement*), "ToBigInteger", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecT163FieldElement::get_FieldSize
// Il2CppName: get_FieldSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Math::EC::Custom::Sec::SecT163FieldElement::*)()>(&Org::BouncyCastle::Math::EC::Custom::Sec::SecT163FieldElement::get_FieldSize)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Custom::Sec::SecT163FieldElement*), "get_FieldSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecT163FieldElement::Add
// Il2CppName: Add
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::ECFieldElement* (Org::BouncyCastle::Math::EC::Custom::Sec::SecT163FieldElement::*)(Org::BouncyCastle::Math::EC::ECFieldElement*)>(&Org::BouncyCastle::Math::EC::Custom::Sec::SecT163FieldElement::Add)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Custom::Sec::SecT163FieldElement*), "Add", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<Org::BouncyCastle::Math::EC::ECFieldElement*>()});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecT163FieldElement::AddOne
// Il2CppName: AddOne
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::ECFieldElement* (Org::BouncyCastle::Math::EC::Custom::Sec::SecT163FieldElement::*)()>(&Org::BouncyCastle::Math::EC::Custom::Sec::SecT163FieldElement::AddOne)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Custom::Sec::SecT163FieldElement*), "AddOne", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecT163FieldElement::Subtract
// Il2CppName: Subtract
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::ECFieldElement* (Org::BouncyCastle::Math::EC::Custom::Sec::SecT163FieldElement::*)(Org::BouncyCastle::Math::EC::ECFieldElement*)>(&Org::BouncyCastle::Math::EC::Custom::Sec::SecT163FieldElement::Subtract)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Custom::Sec::SecT163FieldElement*), "Subtract", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<Org::BouncyCastle::Math::EC::ECFieldElement*>()});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecT163FieldElement::Multiply
// Il2CppName: Multiply
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::ECFieldElement* (Org::BouncyCastle::Math::EC::Custom::Sec::SecT163FieldElement::*)(Org::BouncyCastle::Math::EC::ECFieldElement*)>(&Org::BouncyCastle::Math::EC::Custom::Sec::SecT163FieldElement::Multiply)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Custom::Sec::SecT163FieldElement*), "Multiply", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<Org::BouncyCastle::Math::EC::ECFieldElement*>()});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecT163FieldElement::MultiplyMinusProduct
// Il2CppName: MultiplyMinusProduct
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::ECFieldElement* (Org::BouncyCastle::Math::EC::Custom::Sec::SecT163FieldElement::*)(Org::BouncyCastle::Math::EC::ECFieldElement*, Org::BouncyCastle::Math::EC::ECFieldElement*, Org::BouncyCastle::Math::EC::ECFieldElement*)>(&Org::BouncyCastle::Math::EC::Custom::Sec::SecT163FieldElement::MultiplyMinusProduct)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Custom::Sec::SecT163FieldElement*), "MultiplyMinusProduct", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<Org::BouncyCastle::Math::EC::ECFieldElement*>(), ::il2cpp_utils::ExtractIndependentType<Org::BouncyCastle::Math::EC::ECFieldElement*>(), ::il2cpp_utils::ExtractIndependentType<Org::BouncyCastle::Math::EC::ECFieldElement*>()});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecT163FieldElement::MultiplyPlusProduct
// Il2CppName: MultiplyPlusProduct
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::ECFieldElement* (Org::BouncyCastle::Math::EC::Custom::Sec::SecT163FieldElement::*)(Org::BouncyCastle::Math::EC::ECFieldElement*, Org::BouncyCastle::Math::EC::ECFieldElement*, Org::BouncyCastle::Math::EC::ECFieldElement*)>(&Org::BouncyCastle::Math::EC::Custom::Sec::SecT163FieldElement::MultiplyPlusProduct)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Custom::Sec::SecT163FieldElement*), "MultiplyPlusProduct", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<Org::BouncyCastle::Math::EC::ECFieldElement*>(), ::il2cpp_utils::ExtractIndependentType<Org::BouncyCastle::Math::EC::ECFieldElement*>(), ::il2cpp_utils::ExtractIndependentType<Org::BouncyCastle::Math::EC::ECFieldElement*>()});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecT163FieldElement::Divide
// Il2CppName: Divide
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::ECFieldElement* (Org::BouncyCastle::Math::EC::Custom::Sec::SecT163FieldElement::*)(Org::BouncyCastle::Math::EC::ECFieldElement*)>(&Org::BouncyCastle::Math::EC::Custom::Sec::SecT163FieldElement::Divide)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Custom::Sec::SecT163FieldElement*), "Divide", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<Org::BouncyCastle::Math::EC::ECFieldElement*>()});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecT163FieldElement::Negate
// Il2CppName: Negate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::ECFieldElement* (Org::BouncyCastle::Math::EC::Custom::Sec::SecT163FieldElement::*)()>(&Org::BouncyCastle::Math::EC::Custom::Sec::SecT163FieldElement::Negate)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Custom::Sec::SecT163FieldElement*), "Negate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecT163FieldElement::Square
// Il2CppName: Square
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::ECFieldElement* (Org::BouncyCastle::Math::EC::Custom::Sec::SecT163FieldElement::*)()>(&Org::BouncyCastle::Math::EC::Custom::Sec::SecT163FieldElement::Square)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Custom::Sec::SecT163FieldElement*), "Square", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecT163FieldElement::SquarePlusProduct
// Il2CppName: SquarePlusProduct
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::ECFieldElement* (Org::BouncyCastle::Math::EC::Custom::Sec::SecT163FieldElement::*)(Org::BouncyCastle::Math::EC::ECFieldElement*, Org::BouncyCastle::Math::EC::ECFieldElement*)>(&Org::BouncyCastle::Math::EC::Custom::Sec::SecT163FieldElement::SquarePlusProduct)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Custom::Sec::SecT163FieldElement*), "SquarePlusProduct", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<Org::BouncyCastle::Math::EC::ECFieldElement*>(), ::il2cpp_utils::ExtractIndependentType<Org::BouncyCastle::Math::EC::ECFieldElement*>()});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecT163FieldElement::SquarePow
// Il2CppName: SquarePow
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::ECFieldElement* (Org::BouncyCastle::Math::EC::Custom::Sec::SecT163FieldElement::*)(int)>(&Org::BouncyCastle::Math::EC::Custom::Sec::SecT163FieldElement::SquarePow)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Custom::Sec::SecT163FieldElement*), "SquarePow", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int>()});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecT163FieldElement::HalfTrace
// Il2CppName: HalfTrace
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::ECFieldElement* (Org::BouncyCastle::Math::EC::Custom::Sec::SecT163FieldElement::*)()>(&Org::BouncyCastle::Math::EC::Custom::Sec::SecT163FieldElement::HalfTrace)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Custom::Sec::SecT163FieldElement*), "HalfTrace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecT163FieldElement::get_HasFastTrace
// Il2CppName: get_HasFastTrace
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Math::EC::Custom::Sec::SecT163FieldElement::*)()>(&Org::BouncyCastle::Math::EC::Custom::Sec::SecT163FieldElement::get_HasFastTrace)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Custom::Sec::SecT163FieldElement*), "get_HasFastTrace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecT163FieldElement::Trace
// Il2CppName: Trace
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Math::EC::Custom::Sec::SecT163FieldElement::*)()>(&Org::BouncyCastle::Math::EC::Custom::Sec::SecT163FieldElement::Trace)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Custom::Sec::SecT163FieldElement*), "Trace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecT163FieldElement::Invert
// Il2CppName: Invert
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::ECFieldElement* (Org::BouncyCastle::Math::EC::Custom::Sec::SecT163FieldElement::*)()>(&Org::BouncyCastle::Math::EC::Custom::Sec::SecT163FieldElement::Invert)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Custom::Sec::SecT163FieldElement*), "Invert", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecT163FieldElement::Sqrt
// Il2CppName: Sqrt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::ECFieldElement* (Org::BouncyCastle::Math::EC::Custom::Sec::SecT163FieldElement::*)()>(&Org::BouncyCastle::Math::EC::Custom::Sec::SecT163FieldElement::Sqrt)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Custom::Sec::SecT163FieldElement*), "Sqrt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecT163FieldElement::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Math::EC::Custom::Sec::SecT163FieldElement::*)(::Il2CppObject*)>(&Org::BouncyCastle::Math::EC::Custom::Sec::SecT163FieldElement::Equals)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Custom::Sec::SecT163FieldElement*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>()});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecT163FieldElement::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Math::EC::Custom::Sec::SecT163FieldElement::*)(Org::BouncyCastle::Math::EC::ECFieldElement*)>(&Org::BouncyCastle::Math::EC::Custom::Sec::SecT163FieldElement::Equals)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Custom::Sec::SecT163FieldElement*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<Org::BouncyCastle::Math::EC::ECFieldElement*>()});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecT163FieldElement::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Math::EC::Custom::Sec::SecT163FieldElement::*)()>(&Org::BouncyCastle::Math::EC::Custom::Sec::SecT163FieldElement::GetHashCode)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Custom::Sec::SecT163FieldElement*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
