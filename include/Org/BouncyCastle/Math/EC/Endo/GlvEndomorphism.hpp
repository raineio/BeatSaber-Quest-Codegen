// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Org.BouncyCastle.Math.EC.Endo.ECEndomorphism
#include "Org/BouncyCastle/Math/EC/Endo/ECEndomorphism.hpp"
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Math
namespace Org::BouncyCastle::Math {
  // Forward declaring type: BigInteger
  class BigInteger;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Math.EC.Endo
namespace Org::BouncyCastle::Math::EC::Endo {
  // Forward declaring type: GlvEndomorphism
  class GlvEndomorphism;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(Org::BouncyCastle::Math::EC::Endo::GlvEndomorphism);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::EC::Endo::GlvEndomorphism*, "Org.BouncyCastle.Math.EC.Endo", "GlvEndomorphism");
// Type namespace: Org.BouncyCastle.Math.EC.Endo
namespace Org::BouncyCastle::Math::EC::Endo {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Math.EC.Endo.GlvEndomorphism
  // [TokenAttribute] Offset: FFFFFFFF
  class GlvEndomorphism/*, public Org::BouncyCastle::Math::EC::Endo::ECEndomorphism*/ {
    public:
    // Creating interface conversion operator: operator Org::BouncyCastle::Math::EC::Endo::ECEndomorphism
    operator Org::BouncyCastle::Math::EC::Endo::ECEndomorphism() noexcept {
      return *reinterpret_cast<Org::BouncyCastle::Math::EC::Endo::ECEndomorphism*>(this);
    }
    // public Org.BouncyCastle.Math.BigInteger[] DecomposeScalar(Org.BouncyCastle.Math.BigInteger k)
    // Offset: 0xFFFFFFFF
    ::ArrayW<Org::BouncyCastle::Math::BigInteger*> DecomposeScalar(Org::BouncyCastle::Math::BigInteger* k);
  }; // Org.BouncyCastle.Math.EC.Endo.GlvEndomorphism
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Endo::GlvEndomorphism::DecomposeScalar
// Il2CppName: DecomposeScalar
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<Org::BouncyCastle::Math::BigInteger*> (Org::BouncyCastle::Math::EC::Endo::GlvEndomorphism::*)(Org::BouncyCastle::Math::BigInteger*)>(&Org::BouncyCastle::Math::EC::Endo::GlvEndomorphism::DecomposeScalar)> {
  static const MethodInfo* get() {
    static auto* k = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math", "BigInteger")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Endo::GlvEndomorphism*), "DecomposeScalar", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{k});
  }
};
