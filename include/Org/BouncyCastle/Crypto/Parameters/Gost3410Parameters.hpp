// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Org.BouncyCastle.Crypto.ICipherParameters
#include "Org/BouncyCastle/Crypto/ICipherParameters.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Math
namespace Org::BouncyCastle::Math {
  // Forward declaring type: BigInteger
  class BigInteger;
}
// Forward declaring namespace: Org::BouncyCastle::Crypto::Parameters
namespace Org::BouncyCastle::Crypto::Parameters {
  // Forward declaring type: Gost3410ValidationParameters
  class Gost3410ValidationParameters;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Crypto.Parameters
namespace Org::BouncyCastle::Crypto::Parameters {
  // Forward declaring type: Gost3410Parameters
  class Gost3410Parameters;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Parameters::Gost3410Parameters);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Parameters::Gost3410Parameters*, "Org.BouncyCastle.Crypto.Parameters", "Gost3410Parameters");
// Type namespace: Org.BouncyCastle.Crypto.Parameters
namespace Org::BouncyCastle::Crypto::Parameters {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Parameters.Gost3410Parameters
  // [TokenAttribute] Offset: FFFFFFFF
  class Gost3410Parameters : public ::Il2CppObject/*, public ::Org::BouncyCastle::Crypto::ICipherParameters*/ {
    public:
    public:
    // private readonly Org.BouncyCastle.Math.BigInteger p
    // Size: 0x8
    // Offset: 0x10
    ::Org::BouncyCastle::Math::BigInteger* p;
    // Field size check
    static_assert(sizeof(::Org::BouncyCastle::Math::BigInteger*) == 0x8);
    // private readonly Org.BouncyCastle.Math.BigInteger q
    // Size: 0x8
    // Offset: 0x18
    ::Org::BouncyCastle::Math::BigInteger* q;
    // Field size check
    static_assert(sizeof(::Org::BouncyCastle::Math::BigInteger*) == 0x8);
    // private readonly Org.BouncyCastle.Math.BigInteger a
    // Size: 0x8
    // Offset: 0x20
    ::Org::BouncyCastle::Math::BigInteger* a;
    // Field size check
    static_assert(sizeof(::Org::BouncyCastle::Math::BigInteger*) == 0x8);
    // private readonly Org.BouncyCastle.Crypto.Parameters.Gost3410ValidationParameters validation
    // Size: 0x8
    // Offset: 0x28
    ::Org::BouncyCastle::Crypto::Parameters::Gost3410ValidationParameters* validation;
    // Field size check
    static_assert(sizeof(::Org::BouncyCastle::Crypto::Parameters::Gost3410ValidationParameters*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::Org::BouncyCastle::Crypto::ICipherParameters
    operator ::Org::BouncyCastle::Crypto::ICipherParameters() noexcept {
      return *reinterpret_cast<::Org::BouncyCastle::Crypto::ICipherParameters*>(this);
    }
    // Creating interface conversion operator: i_ICipherParameters
    inline ::Org::BouncyCastle::Crypto::ICipherParameters* i_ICipherParameters() noexcept {
      return reinterpret_cast<::Org::BouncyCastle::Crypto::ICipherParameters*>(this);
    }
    // Get instance field reference: private readonly Org.BouncyCastle.Math.BigInteger p
    [[deprecated("Use field access instead!")]] ::Org::BouncyCastle::Math::BigInteger*& dyn_p();
    // Get instance field reference: private readonly Org.BouncyCastle.Math.BigInteger q
    [[deprecated("Use field access instead!")]] ::Org::BouncyCastle::Math::BigInteger*& dyn_q();
    // Get instance field reference: private readonly Org.BouncyCastle.Math.BigInteger a
    [[deprecated("Use field access instead!")]] ::Org::BouncyCastle::Math::BigInteger*& dyn_a();
    // Get instance field reference: private readonly Org.BouncyCastle.Crypto.Parameters.Gost3410ValidationParameters validation
    [[deprecated("Use field access instead!")]] ::Org::BouncyCastle::Crypto::Parameters::Gost3410ValidationParameters*& dyn_validation();
    // public Org.BouncyCastle.Math.BigInteger get_P()
    // Offset: 0x166C404
    ::Org::BouncyCastle::Math::BigInteger* get_P();
    // public Org.BouncyCastle.Math.BigInteger get_Q()
    // Offset: 0x166C40C
    ::Org::BouncyCastle::Math::BigInteger* get_Q();
    // public Org.BouncyCastle.Math.BigInteger get_A()
    // Offset: 0x166C414
    ::Org::BouncyCastle::Math::BigInteger* get_A();
    // public System.Void .ctor(Org.BouncyCastle.Math.BigInteger p, Org.BouncyCastle.Math.BigInteger q, Org.BouncyCastle.Math.BigInteger a)
    // Offset: 0x166C308
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Gost3410Parameters* New_ctor(::Org::BouncyCastle::Math::BigInteger* p, ::Org::BouncyCastle::Math::BigInteger* q, ::Org::BouncyCastle::Math::BigInteger* a) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Org::BouncyCastle::Crypto::Parameters::Gost3410Parameters::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Gost3410Parameters*, creationType>(p, q, a)));
    }
    // public System.Void .ctor(Org.BouncyCastle.Math.BigInteger p, Org.BouncyCastle.Math.BigInteger q, Org.BouncyCastle.Math.BigInteger a, Org.BouncyCastle.Crypto.Parameters.Gost3410ValidationParameters validation)
    // Offset: 0x166C310
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Gost3410Parameters* New_ctor(::Org::BouncyCastle::Math::BigInteger* p, ::Org::BouncyCastle::Math::BigInteger* q, ::Org::BouncyCastle::Math::BigInteger* a, ::Org::BouncyCastle::Crypto::Parameters::Gost3410ValidationParameters* validation) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Org::BouncyCastle::Crypto::Parameters::Gost3410Parameters::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Gost3410Parameters*, creationType>(p, q, a, validation)));
    }
    // protected System.Boolean Equals(Org.BouncyCastle.Crypto.Parameters.Gost3410Parameters other)
    // Offset: 0x166C4CC
    bool Equals(::Org::BouncyCastle::Crypto::Parameters::Gost3410Parameters* other);
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x166C41C
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x166C550
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
  }; // Org.BouncyCastle.Crypto.Parameters.Gost3410Parameters
  #pragma pack(pop)
  static check_size<sizeof(Gost3410Parameters), 40 + sizeof(::Org::BouncyCastle::Crypto::Parameters::Gost3410ValidationParameters*)> __Org_BouncyCastle_Crypto_Parameters_Gost3410ParametersSizeCheck;
  static_assert(sizeof(Gost3410Parameters) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Parameters::Gost3410Parameters::get_P
// Il2CppName: get_P
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::BigInteger* (Org::BouncyCastle::Crypto::Parameters::Gost3410Parameters::*)()>(&Org::BouncyCastle::Crypto::Parameters::Gost3410Parameters::get_P)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Parameters::Gost3410Parameters*), "get_P", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Parameters::Gost3410Parameters::get_Q
// Il2CppName: get_Q
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::BigInteger* (Org::BouncyCastle::Crypto::Parameters::Gost3410Parameters::*)()>(&Org::BouncyCastle::Crypto::Parameters::Gost3410Parameters::get_Q)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Parameters::Gost3410Parameters*), "get_Q", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Parameters::Gost3410Parameters::get_A
// Il2CppName: get_A
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::BigInteger* (Org::BouncyCastle::Crypto::Parameters::Gost3410Parameters::*)()>(&Org::BouncyCastle::Crypto::Parameters::Gost3410Parameters::get_A)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Parameters::Gost3410Parameters*), "get_A", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Parameters::Gost3410Parameters::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Parameters::Gost3410Parameters::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Parameters::Gost3410Parameters::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Crypto::Parameters::Gost3410Parameters::*)(::Org::BouncyCastle::Crypto::Parameters::Gost3410Parameters*)>(&Org::BouncyCastle::Crypto::Parameters::Gost3410Parameters::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Crypto.Parameters", "Gost3410Parameters")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Parameters::Gost3410Parameters*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Parameters::Gost3410Parameters::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Crypto::Parameters::Gost3410Parameters::*)(::Il2CppObject*)>(&Org::BouncyCastle::Crypto::Parameters::Gost3410Parameters::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Parameters::Gost3410Parameters*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Parameters::Gost3410Parameters::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Parameters::Gost3410Parameters::*)()>(&Org::BouncyCastle::Crypto::Parameters::Gost3410Parameters::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Parameters::Gost3410Parameters*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
