// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Org.BouncyCastle.Math.EC.AbstractF2mFieldElement
#include "Org/BouncyCastle/Math/EC/AbstractF2mFieldElement.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Math::EC
namespace Org::BouncyCastle::Math::EC {
  // Forward declaring type: LongArray
  class LongArray;
  // Skipping declaration: ECFieldElement because it is already included!
}
// Forward declaring namespace: Org::BouncyCastle::Math
namespace Org::BouncyCastle::Math {
  // Forward declaring type: BigInteger
  class BigInteger;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Math.EC
namespace Org::BouncyCastle::Math::EC {
  // Forward declaring type: F2mFieldElement
  class F2mFieldElement;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Org::BouncyCastle::Math::EC::F2mFieldElement);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::F2mFieldElement*, "Org.BouncyCastle.Math.EC", "F2mFieldElement");
// Type namespace: Org.BouncyCastle.Math.EC
namespace Org::BouncyCastle::Math::EC {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Math.EC.F2mFieldElement
  // [TokenAttribute] Offset: FFFFFFFF
  class F2mFieldElement : public ::Org::BouncyCastle::Math::EC::AbstractF2mFieldElement {
    public:
    public:
    // private System.Int32 representation
    // Size: 0x4
    // Offset: 0x10
    int representation;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 m
    // Size: 0x4
    // Offset: 0x14
    int m;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32[] ks
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<int> ks;
    // Field size check
    static_assert(sizeof(::ArrayW<int>) == 0x8);
    // Org.BouncyCastle.Math.EC.LongArray x
    // Size: 0x8
    // Offset: 0x20
    ::Org::BouncyCastle::Math::EC::LongArray* x;
    // Field size check
    static_assert(sizeof(::Org::BouncyCastle::Math::EC::LongArray*) == 0x8);
    public:
    // Get instance field reference: private System.Int32 representation
    [[deprecated("Use field access instead!")]] int& dyn_representation();
    // Get instance field reference: private System.Int32 m
    [[deprecated("Use field access instead!")]] int& dyn_m();
    // Get instance field reference: private System.Int32[] ks
    [[deprecated("Use field access instead!")]] ::ArrayW<int>& dyn_ks();
    // Get instance field reference: Org.BouncyCastle.Math.EC.LongArray x
    [[deprecated("Use field access instead!")]] ::Org::BouncyCastle::Math::EC::LongArray*& dyn_x();
    // public System.Void .ctor(System.Int32 m, System.Int32 k1, System.Int32 k2, System.Int32 k3, Org.BouncyCastle.Math.BigInteger x)
    // Offset: 0x2759D20
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static F2mFieldElement* New_ctor(int m, int k1, int k2, int k3, ::Org::BouncyCastle::Math::BigInteger* x) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Org::BouncyCastle::Math::EC::F2mFieldElement::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<F2mFieldElement*, creationType>(m, k1, k2, k3, x)));
    }
    // System.Void .ctor(System.Int32 m, System.Int32[] ks, Org.BouncyCastle.Math.EC.LongArray x)
    // Offset: 0x275A730
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static F2mFieldElement* New_ctor(int m, ::ArrayW<int> ks, ::Org::BouncyCastle::Math::EC::LongArray* x) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Org::BouncyCastle::Math::EC::F2mFieldElement::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<F2mFieldElement*, creationType>(m, ks, x)));
    }
    // static public System.Void CheckFieldElements(Org.BouncyCastle.Math.EC.ECFieldElement a, Org.BouncyCastle.Math.EC.ECFieldElement b)
    // Offset: 0x275A820
    static void CheckFieldElements(::Org::BouncyCastle::Math::EC::ECFieldElement* a, ::Org::BouncyCastle::Math::EC::ECFieldElement* b);
    // public System.Boolean Equals(Org.BouncyCastle.Math.EC.F2mFieldElement other)
    // Offset: 0x275B2AC
    bool Equals(::Org::BouncyCastle::Math::EC::F2mFieldElement* other);
    // public override System.Int32 get_BitLength()
    // Offset: 0x275A78C
    // Implemented from: Org.BouncyCastle.Math.EC.ECFieldElement
    // Base method: System.Int32 ECFieldElement::get_BitLength()
    int get_BitLength();
    // public override System.Boolean get_IsOne()
    // Offset: 0x275A7A8
    // Implemented from: Org.BouncyCastle.Math.EC.ECFieldElement
    // Base method: System.Boolean ECFieldElement::get_IsOne()
    bool get_IsOne();
    // public override System.Boolean get_IsZero()
    // Offset: 0x275A7C4
    // Implemented from: Org.BouncyCastle.Math.EC.ECFieldElement
    // Base method: System.Boolean ECFieldElement::get_IsZero()
    bool get_IsZero();
    // public override System.Int32 get_FieldSize()
    // Offset: 0x275A818
    // Implemented from: Org.BouncyCastle.Math.EC.ECFieldElement
    // Base method: System.Int32 ECFieldElement::get_FieldSize()
    int get_FieldSize();
    // public override System.Boolean TestBitZero()
    // Offset: 0x275A7E0
    // Implemented from: Org.BouncyCastle.Math.EC.ECFieldElement
    // Base method: System.Boolean ECFieldElement::TestBitZero()
    bool TestBitZero();
    // public override Org.BouncyCastle.Math.BigInteger ToBigInteger()
    // Offset: 0x275A7FC
    // Implemented from: Org.BouncyCastle.Math.EC.ECFieldElement
    // Base method: Org.BouncyCastle.Math.BigInteger ECFieldElement::ToBigInteger()
    ::Org::BouncyCastle::Math::BigInteger* ToBigInteger();
    // public override Org.BouncyCastle.Math.EC.ECFieldElement Add(Org.BouncyCastle.Math.EC.ECFieldElement b)
    // Offset: 0x275A998
    // Implemented from: Org.BouncyCastle.Math.EC.ECFieldElement
    // Base method: Org.BouncyCastle.Math.EC.ECFieldElement ECFieldElement::Add(Org.BouncyCastle.Math.EC.ECFieldElement b)
    ::Org::BouncyCastle::Math::EC::ECFieldElement* Add(::Org::BouncyCastle::Math::EC::ECFieldElement* b);
    // public override Org.BouncyCastle.Math.EC.ECFieldElement AddOne()
    // Offset: 0x275AA7C
    // Implemented from: Org.BouncyCastle.Math.EC.ECFieldElement
    // Base method: Org.BouncyCastle.Math.EC.ECFieldElement ECFieldElement::AddOne()
    ::Org::BouncyCastle::Math::EC::ECFieldElement* AddOne();
    // public override Org.BouncyCastle.Math.EC.ECFieldElement Subtract(Org.BouncyCastle.Math.EC.ECFieldElement b)
    // Offset: 0x275AB10
    // Implemented from: Org.BouncyCastle.Math.EC.ECFieldElement
    // Base method: Org.BouncyCastle.Math.EC.ECFieldElement ECFieldElement::Subtract(Org.BouncyCastle.Math.EC.ECFieldElement b)
    ::Org::BouncyCastle::Math::EC::ECFieldElement* Subtract(::Org::BouncyCastle::Math::EC::ECFieldElement* b);
    // public override Org.BouncyCastle.Math.EC.ECFieldElement Multiply(Org.BouncyCastle.Math.EC.ECFieldElement b)
    // Offset: 0x275AB1C
    // Implemented from: Org.BouncyCastle.Math.EC.ECFieldElement
    // Base method: Org.BouncyCastle.Math.EC.ECFieldElement ECFieldElement::Multiply(Org.BouncyCastle.Math.EC.ECFieldElement b)
    ::Org::BouncyCastle::Math::EC::ECFieldElement* Multiply(::Org::BouncyCastle::Math::EC::ECFieldElement* b);
    // public override Org.BouncyCastle.Math.EC.ECFieldElement MultiplyMinusProduct(Org.BouncyCastle.Math.EC.ECFieldElement b, Org.BouncyCastle.Math.EC.ECFieldElement x, Org.BouncyCastle.Math.EC.ECFieldElement y)
    // Offset: 0x275ABF8
    // Implemented from: Org.BouncyCastle.Math.EC.ECFieldElement
    // Base method: Org.BouncyCastle.Math.EC.ECFieldElement ECFieldElement::MultiplyMinusProduct(Org.BouncyCastle.Math.EC.ECFieldElement b, Org.BouncyCastle.Math.EC.ECFieldElement x, Org.BouncyCastle.Math.EC.ECFieldElement y)
    ::Org::BouncyCastle::Math::EC::ECFieldElement* MultiplyMinusProduct(::Org::BouncyCastle::Math::EC::ECFieldElement* b, ::Org::BouncyCastle::Math::EC::ECFieldElement* x, ::Org::BouncyCastle::Math::EC::ECFieldElement* y);
    // public override Org.BouncyCastle.Math.EC.ECFieldElement MultiplyPlusProduct(Org.BouncyCastle.Math.EC.ECFieldElement b, Org.BouncyCastle.Math.EC.ECFieldElement x, Org.BouncyCastle.Math.EC.ECFieldElement y)
    // Offset: 0x275AC08
    // Implemented from: Org.BouncyCastle.Math.EC.ECFieldElement
    // Base method: Org.BouncyCastle.Math.EC.ECFieldElement ECFieldElement::MultiplyPlusProduct(Org.BouncyCastle.Math.EC.ECFieldElement b, Org.BouncyCastle.Math.EC.ECFieldElement x, Org.BouncyCastle.Math.EC.ECFieldElement y)
    ::Org::BouncyCastle::Math::EC::ECFieldElement* MultiplyPlusProduct(::Org::BouncyCastle::Math::EC::ECFieldElement* b, ::Org::BouncyCastle::Math::EC::ECFieldElement* x, ::Org::BouncyCastle::Math::EC::ECFieldElement* y);
    // public override Org.BouncyCastle.Math.EC.ECFieldElement Divide(Org.BouncyCastle.Math.EC.ECFieldElement b)
    // Offset: 0x275ADD0
    // Implemented from: Org.BouncyCastle.Math.EC.ECFieldElement
    // Base method: Org.BouncyCastle.Math.EC.ECFieldElement ECFieldElement::Divide(Org.BouncyCastle.Math.EC.ECFieldElement b)
    ::Org::BouncyCastle::Math::EC::ECFieldElement* Divide(::Org::BouncyCastle::Math::EC::ECFieldElement* b);
    // public override Org.BouncyCastle.Math.EC.ECFieldElement Negate()
    // Offset: 0x275AE1C
    // Implemented from: Org.BouncyCastle.Math.EC.ECFieldElement
    // Base method: Org.BouncyCastle.Math.EC.ECFieldElement ECFieldElement::Negate()
    ::Org::BouncyCastle::Math::EC::ECFieldElement* Negate();
    // public override Org.BouncyCastle.Math.EC.ECFieldElement Square()
    // Offset: 0x275AE20
    // Implemented from: Org.BouncyCastle.Math.EC.ECFieldElement
    // Base method: Org.BouncyCastle.Math.EC.ECFieldElement ECFieldElement::Square()
    ::Org::BouncyCastle::Math::EC::ECFieldElement* Square();
    // public override Org.BouncyCastle.Math.EC.ECFieldElement SquarePlusProduct(Org.BouncyCastle.Math.EC.ECFieldElement x, Org.BouncyCastle.Math.EC.ECFieldElement y)
    // Offset: 0x275AEBC
    // Implemented from: Org.BouncyCastle.Math.EC.ECFieldElement
    // Base method: Org.BouncyCastle.Math.EC.ECFieldElement ECFieldElement::SquarePlusProduct(Org.BouncyCastle.Math.EC.ECFieldElement x, Org.BouncyCastle.Math.EC.ECFieldElement y)
    ::Org::BouncyCastle::Math::EC::ECFieldElement* SquarePlusProduct(::Org::BouncyCastle::Math::EC::ECFieldElement* x, ::Org::BouncyCastle::Math::EC::ECFieldElement* y);
    // public override Org.BouncyCastle.Math.EC.ECFieldElement SquarePow(System.Int32 pow)
    // Offset: 0x275B038
    // Implemented from: Org.BouncyCastle.Math.EC.ECFieldElement
    // Base method: Org.BouncyCastle.Math.EC.ECFieldElement ECFieldElement::SquarePow(System.Int32 pow)
    ::Org::BouncyCastle::Math::EC::ECFieldElement* SquarePow(int pow);
    // public override Org.BouncyCastle.Math.EC.ECFieldElement Invert()
    // Offset: 0x275B0E4
    // Implemented from: Org.BouncyCastle.Math.EC.ECFieldElement
    // Base method: Org.BouncyCastle.Math.EC.ECFieldElement ECFieldElement::Invert()
    ::Org::BouncyCastle::Math::EC::ECFieldElement* Invert();
    // public override Org.BouncyCastle.Math.EC.ECFieldElement Sqrt()
    // Offset: 0x275B180
    // Implemented from: Org.BouncyCastle.Math.EC.ECFieldElement
    // Base method: Org.BouncyCastle.Math.EC.ECFieldElement ECFieldElement::Sqrt()
    ::Org::BouncyCastle::Math::EC::ECFieldElement* Sqrt();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x275B1F0
    // Implemented from: Org.BouncyCastle.Math.EC.ECFieldElement
    // Base method: System.Boolean ECFieldElement::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x275B384
    // Implemented from: Org.BouncyCastle.Math.EC.ECFieldElement
    // Base method: System.Int32 ECFieldElement::GetHashCode()
    int GetHashCode();
  }; // Org.BouncyCastle.Math.EC.F2mFieldElement
  #pragma pack(pop)
  static check_size<sizeof(F2mFieldElement), 32 + sizeof(::Org::BouncyCastle::Math::EC::LongArray*)> __Org_BouncyCastle_Math_EC_F2mFieldElementSizeCheck;
  static_assert(sizeof(F2mFieldElement) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::F2mFieldElement::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::F2mFieldElement::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::F2mFieldElement::CheckFieldElements
// Il2CppName: CheckFieldElements
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Org::BouncyCastle::Math::EC::ECFieldElement*, ::Org::BouncyCastle::Math::EC::ECFieldElement*)>(&Org::BouncyCastle::Math::EC::F2mFieldElement::CheckFieldElements)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math.EC", "ECFieldElement")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math.EC", "ECFieldElement")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::F2mFieldElement*), "CheckFieldElements", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, b});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::F2mFieldElement::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Math::EC::F2mFieldElement::*)(::Org::BouncyCastle::Math::EC::F2mFieldElement*)>(&Org::BouncyCastle::Math::EC::F2mFieldElement::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math.EC", "F2mFieldElement")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::F2mFieldElement*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::F2mFieldElement::get_BitLength
// Il2CppName: get_BitLength
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Math::EC::F2mFieldElement::*)()>(&Org::BouncyCastle::Math::EC::F2mFieldElement::get_BitLength)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::F2mFieldElement*), "get_BitLength", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::F2mFieldElement::get_IsOne
// Il2CppName: get_IsOne
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Math::EC::F2mFieldElement::*)()>(&Org::BouncyCastle::Math::EC::F2mFieldElement::get_IsOne)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::F2mFieldElement*), "get_IsOne", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::F2mFieldElement::get_IsZero
// Il2CppName: get_IsZero
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Math::EC::F2mFieldElement::*)()>(&Org::BouncyCastle::Math::EC::F2mFieldElement::get_IsZero)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::F2mFieldElement*), "get_IsZero", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::F2mFieldElement::get_FieldSize
// Il2CppName: get_FieldSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Math::EC::F2mFieldElement::*)()>(&Org::BouncyCastle::Math::EC::F2mFieldElement::get_FieldSize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::F2mFieldElement*), "get_FieldSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::F2mFieldElement::TestBitZero
// Il2CppName: TestBitZero
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Math::EC::F2mFieldElement::*)()>(&Org::BouncyCastle::Math::EC::F2mFieldElement::TestBitZero)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::F2mFieldElement*), "TestBitZero", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::F2mFieldElement::ToBigInteger
// Il2CppName: ToBigInteger
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::BigInteger* (Org::BouncyCastle::Math::EC::F2mFieldElement::*)()>(&Org::BouncyCastle::Math::EC::F2mFieldElement::ToBigInteger)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::F2mFieldElement*), "ToBigInteger", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::F2mFieldElement::Add
// Il2CppName: Add
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::EC::ECFieldElement* (Org::BouncyCastle::Math::EC::F2mFieldElement::*)(::Org::BouncyCastle::Math::EC::ECFieldElement*)>(&Org::BouncyCastle::Math::EC::F2mFieldElement::Add)> {
  static const MethodInfo* get() {
    static auto* b = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math.EC", "ECFieldElement")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::F2mFieldElement*), "Add", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{b});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::F2mFieldElement::AddOne
// Il2CppName: AddOne
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::EC::ECFieldElement* (Org::BouncyCastle::Math::EC::F2mFieldElement::*)()>(&Org::BouncyCastle::Math::EC::F2mFieldElement::AddOne)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::F2mFieldElement*), "AddOne", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::F2mFieldElement::Subtract
// Il2CppName: Subtract
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::EC::ECFieldElement* (Org::BouncyCastle::Math::EC::F2mFieldElement::*)(::Org::BouncyCastle::Math::EC::ECFieldElement*)>(&Org::BouncyCastle::Math::EC::F2mFieldElement::Subtract)> {
  static const MethodInfo* get() {
    static auto* b = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math.EC", "ECFieldElement")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::F2mFieldElement*), "Subtract", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{b});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::F2mFieldElement::Multiply
// Il2CppName: Multiply
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::EC::ECFieldElement* (Org::BouncyCastle::Math::EC::F2mFieldElement::*)(::Org::BouncyCastle::Math::EC::ECFieldElement*)>(&Org::BouncyCastle::Math::EC::F2mFieldElement::Multiply)> {
  static const MethodInfo* get() {
    static auto* b = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math.EC", "ECFieldElement")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::F2mFieldElement*), "Multiply", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{b});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::F2mFieldElement::MultiplyMinusProduct
// Il2CppName: MultiplyMinusProduct
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::EC::ECFieldElement* (Org::BouncyCastle::Math::EC::F2mFieldElement::*)(::Org::BouncyCastle::Math::EC::ECFieldElement*, ::Org::BouncyCastle::Math::EC::ECFieldElement*, ::Org::BouncyCastle::Math::EC::ECFieldElement*)>(&Org::BouncyCastle::Math::EC::F2mFieldElement::MultiplyMinusProduct)> {
  static const MethodInfo* get() {
    static auto* b = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math.EC", "ECFieldElement")->byval_arg;
    static auto* x = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math.EC", "ECFieldElement")->byval_arg;
    static auto* y = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math.EC", "ECFieldElement")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::F2mFieldElement*), "MultiplyMinusProduct", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{b, x, y});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::F2mFieldElement::MultiplyPlusProduct
// Il2CppName: MultiplyPlusProduct
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::EC::ECFieldElement* (Org::BouncyCastle::Math::EC::F2mFieldElement::*)(::Org::BouncyCastle::Math::EC::ECFieldElement*, ::Org::BouncyCastle::Math::EC::ECFieldElement*, ::Org::BouncyCastle::Math::EC::ECFieldElement*)>(&Org::BouncyCastle::Math::EC::F2mFieldElement::MultiplyPlusProduct)> {
  static const MethodInfo* get() {
    static auto* b = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math.EC", "ECFieldElement")->byval_arg;
    static auto* x = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math.EC", "ECFieldElement")->byval_arg;
    static auto* y = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math.EC", "ECFieldElement")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::F2mFieldElement*), "MultiplyPlusProduct", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{b, x, y});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::F2mFieldElement::Divide
// Il2CppName: Divide
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::EC::ECFieldElement* (Org::BouncyCastle::Math::EC::F2mFieldElement::*)(::Org::BouncyCastle::Math::EC::ECFieldElement*)>(&Org::BouncyCastle::Math::EC::F2mFieldElement::Divide)> {
  static const MethodInfo* get() {
    static auto* b = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math.EC", "ECFieldElement")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::F2mFieldElement*), "Divide", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{b});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::F2mFieldElement::Negate
// Il2CppName: Negate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::EC::ECFieldElement* (Org::BouncyCastle::Math::EC::F2mFieldElement::*)()>(&Org::BouncyCastle::Math::EC::F2mFieldElement::Negate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::F2mFieldElement*), "Negate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::F2mFieldElement::Square
// Il2CppName: Square
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::EC::ECFieldElement* (Org::BouncyCastle::Math::EC::F2mFieldElement::*)()>(&Org::BouncyCastle::Math::EC::F2mFieldElement::Square)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::F2mFieldElement*), "Square", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::F2mFieldElement::SquarePlusProduct
// Il2CppName: SquarePlusProduct
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::EC::ECFieldElement* (Org::BouncyCastle::Math::EC::F2mFieldElement::*)(::Org::BouncyCastle::Math::EC::ECFieldElement*, ::Org::BouncyCastle::Math::EC::ECFieldElement*)>(&Org::BouncyCastle::Math::EC::F2mFieldElement::SquarePlusProduct)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math.EC", "ECFieldElement")->byval_arg;
    static auto* y = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math.EC", "ECFieldElement")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::F2mFieldElement*), "SquarePlusProduct", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, y});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::F2mFieldElement::SquarePow
// Il2CppName: SquarePow
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::EC::ECFieldElement* (Org::BouncyCastle::Math::EC::F2mFieldElement::*)(int)>(&Org::BouncyCastle::Math::EC::F2mFieldElement::SquarePow)> {
  static const MethodInfo* get() {
    static auto* pow = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::F2mFieldElement*), "SquarePow", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pow});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::F2mFieldElement::Invert
// Il2CppName: Invert
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::EC::ECFieldElement* (Org::BouncyCastle::Math::EC::F2mFieldElement::*)()>(&Org::BouncyCastle::Math::EC::F2mFieldElement::Invert)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::F2mFieldElement*), "Invert", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::F2mFieldElement::Sqrt
// Il2CppName: Sqrt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::EC::ECFieldElement* (Org::BouncyCastle::Math::EC::F2mFieldElement::*)()>(&Org::BouncyCastle::Math::EC::F2mFieldElement::Sqrt)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::F2mFieldElement*), "Sqrt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::F2mFieldElement::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Math::EC::F2mFieldElement::*)(::Il2CppObject*)>(&Org::BouncyCastle::Math::EC::F2mFieldElement::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::F2mFieldElement*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::F2mFieldElement::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Math::EC::F2mFieldElement::*)()>(&Org::BouncyCastle::Math::EC::F2mFieldElement::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::F2mFieldElement*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
