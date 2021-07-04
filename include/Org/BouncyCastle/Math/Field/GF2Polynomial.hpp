// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Math.Field.IPolynomial
#include "Org/BouncyCastle/Math/Field/IPolynomial.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Org.BouncyCastle.Math.Field
namespace Org::BouncyCastle::Math::Field {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Math.Field.GF2Polynomial
  class GF2Polynomial : public ::Il2CppObject/*, public Org::BouncyCastle::Math::Field::IPolynomial*/ {
    public:
    // protected readonly System.Int32[] exponents
    // Size: 0x8
    // Offset: 0x10
    ::Array<int>* exponents;
    // Field size check
    static_assert(sizeof(::Array<int>*) == 0x8);
    // Creating value type constructor for type: GF2Polynomial
    GF2Polynomial(::Array<int>* exponents_ = {}) noexcept : exponents{exponents_} {}
    // Creating interface conversion operator: operator Org::BouncyCastle::Math::Field::IPolynomial
    operator Org::BouncyCastle::Math::Field::IPolynomial() noexcept {
      return *reinterpret_cast<Org::BouncyCastle::Math::Field::IPolynomial*>(this);
    }
    // Creating conversion operator: operator ::Array<int>*
    constexpr operator ::Array<int>*() const noexcept {
      return exponents;
    }
    // System.Void .ctor(System.Int32[] exponents)
    // Offset: 0x1D32FD0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GF2Polynomial* New_ctor(::Array<int>* exponents) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Math::Field::GF2Polynomial::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GF2Polynomial*, creationType>(exponents)));
    }
    // public System.Int32 get_Degree()
    // Offset: 0x1D33318
    int get_Degree();
    // public System.Int32[] GetExponentsPresent()
    // Offset: 0x1D33358
    ::Array<int>* GetExponentsPresent();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x1D333C4
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x1D334AC
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
  }; // Org.BouncyCastle.Math.Field.GF2Polynomial
  #pragma pack(pop)
  static check_size<sizeof(GF2Polynomial), 16 + sizeof(::Array<int>*)> __Org_BouncyCastle_Math_Field_GF2PolynomialSizeCheck;
  static_assert(sizeof(GF2Polynomial) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::Field::GF2Polynomial*, "Org.BouncyCastle.Math.Field", "GF2Polynomial");
// Writing MetadataGetter for method: Org::BouncyCastle::Math::Field::GF2Polynomial::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Math::Field::GF2Polynomial::get_Degree
// Il2CppName: get_Degree
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Math::Field::GF2Polynomial::*)()>(&Org::BouncyCastle::Math::Field::GF2Polynomial::get_Degree)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::Field::GF2Polynomial*), "get_Degree", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::Field::GF2Polynomial::GetExponentsPresent
// Il2CppName: GetExponentsPresent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<int>* (Org::BouncyCastle::Math::Field::GF2Polynomial::*)()>(&Org::BouncyCastle::Math::Field::GF2Polynomial::GetExponentsPresent)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::Field::GF2Polynomial*), "GetExponentsPresent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::Field::GF2Polynomial::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Math::Field::GF2Polynomial::*)(::Il2CppObject*)>(&Org::BouncyCastle::Math::Field::GF2Polynomial::Equals)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::Field::GF2Polynomial*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>()});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::Field::GF2Polynomial::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Math::Field::GF2Polynomial::*)()>(&Org::BouncyCastle::Math::Field::GF2Polynomial::GetHashCode)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::Field::GF2Polynomial*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
