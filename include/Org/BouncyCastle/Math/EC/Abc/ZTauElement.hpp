// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
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
// Completed forward declares
// Type namespace: Org.BouncyCastle.Math.EC.Abc
namespace Org::BouncyCastle::Math::EC::Abc {
  // Forward declaring type: ZTauElement
  class ZTauElement;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Org::BouncyCastle::Math::EC::Abc::ZTauElement);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::Abc::ZTauElement*, "Org.BouncyCastle.Math.EC.Abc", "ZTauElement");
// Type namespace: Org.BouncyCastle.Math.EC.Abc
namespace Org::BouncyCastle::Math::EC::Abc {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Math.EC.Abc.ZTauElement
  // [TokenAttribute] Offset: FFFFFFFF
  class ZTauElement : public ::Il2CppObject {
    public:
    public:
    // public readonly Org.BouncyCastle.Math.BigInteger u
    // Size: 0x8
    // Offset: 0x10
    ::Org::BouncyCastle::Math::BigInteger* u;
    // Field size check
    static_assert(sizeof(::Org::BouncyCastle::Math::BigInteger*) == 0x8);
    // public readonly Org.BouncyCastle.Math.BigInteger v
    // Size: 0x8
    // Offset: 0x18
    ::Org::BouncyCastle::Math::BigInteger* v;
    // Field size check
    static_assert(sizeof(::Org::BouncyCastle::Math::BigInteger*) == 0x8);
    public:
    // Get instance field reference: public readonly Org.BouncyCastle.Math.BigInteger u
    [[deprecated("Use field access instead!")]] ::Org::BouncyCastle::Math::BigInteger*& dyn_u();
    // Get instance field reference: public readonly Org.BouncyCastle.Math.BigInteger v
    [[deprecated("Use field access instead!")]] ::Org::BouncyCastle::Math::BigInteger*& dyn_v();
    // public System.Void .ctor(Org.BouncyCastle.Math.BigInteger u, Org.BouncyCastle.Math.BigInteger v)
    // Offset: 0x235D628
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ZTauElement* New_ctor(::Org::BouncyCastle::Math::BigInteger* u, ::Org::BouncyCastle::Math::BigInteger* v) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Org::BouncyCastle::Math::EC::Abc::ZTauElement::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ZTauElement*, creationType>(u, v)));
    }
  }; // Org.BouncyCastle.Math.EC.Abc.ZTauElement
  #pragma pack(pop)
  static check_size<sizeof(ZTauElement), 24 + sizeof(::Org::BouncyCastle::Math::BigInteger*)> __Org_BouncyCastle_Math_EC_Abc_ZTauElementSizeCheck;
  static_assert(sizeof(ZTauElement) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Abc::ZTauElement::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
