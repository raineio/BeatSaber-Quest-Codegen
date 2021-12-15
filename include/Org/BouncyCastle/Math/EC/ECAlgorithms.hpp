// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Math::EC
namespace Org::BouncyCastle::Math::EC {
  // Forward declaring type: ECCurve
  class ECCurve;
  // Forward declaring type: ECPoint
  class ECPoint;
  // Forward declaring type: ECFieldElement
  class ECFieldElement;
}
// Forward declaring namespace: Org::BouncyCastle::Math::Field
namespace Org::BouncyCastle::Math::Field {
  // Forward declaring type: IFiniteField
  class IFiniteField;
}
// Forward declaring namespace: Org::BouncyCastle::Math
namespace Org::BouncyCastle::Math {
  // Forward declaring type: BigInteger
  class BigInteger;
}
// Forward declaring namespace: Org::BouncyCastle::Math::EC::Endo
namespace Org::BouncyCastle::Math::EC::Endo {
  // Forward declaring type: ECEndomorphism
  class ECEndomorphism;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Math.EC
namespace Org::BouncyCastle::Math::EC {
  // Forward declaring type: ECAlgorithms
  class ECAlgorithms;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(Org::BouncyCastle::Math::EC::ECAlgorithms);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::EC::ECAlgorithms*, "Org.BouncyCastle.Math.EC", "ECAlgorithms");
// Type namespace: Org.BouncyCastle.Math.EC
namespace Org::BouncyCastle::Math::EC {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Math.EC.ECAlgorithms
  // [TokenAttribute] Offset: FFFFFFFF
  class ECAlgorithms : public ::Il2CppObject {
    public:
    // static public System.Boolean IsF2mCurve(Org.BouncyCastle.Math.EC.ECCurve c)
    // Offset: 0x24005D0
    static bool IsF2mCurve(Org::BouncyCastle::Math::EC::ECCurve* c);
    // static public System.Boolean IsF2mField(Org.BouncyCastle.Math.Field.IFiniteField field)
    // Offset: 0x24005F8
    static bool IsF2mField(Org::BouncyCastle::Math::Field::IFiniteField* field);
    // static public System.Boolean IsFpCurve(Org.BouncyCastle.Math.EC.ECCurve c)
    // Offset: 0x240078C
    static bool IsFpCurve(Org::BouncyCastle::Math::EC::ECCurve* c);
    // static public System.Boolean IsFpField(Org.BouncyCastle.Math.Field.IFiniteField field)
    // Offset: 0x24007B4
    static bool IsFpField(Org::BouncyCastle::Math::Field::IFiniteField* field);
    // static public Org.BouncyCastle.Math.EC.ECPoint ImportPoint(Org.BouncyCastle.Math.EC.ECCurve c, Org.BouncyCastle.Math.EC.ECPoint p)
    // Offset: 0x2400870
    static Org::BouncyCastle::Math::EC::ECPoint* ImportPoint(Org::BouncyCastle::Math::EC::ECCurve* c, Org::BouncyCastle::Math::EC::ECPoint* p);
    // static public System.Void MontgomeryTrick(Org.BouncyCastle.Math.EC.ECFieldElement[] zs, System.Int32 off, System.Int32 len, Org.BouncyCastle.Math.EC.ECFieldElement scale)
    // Offset: 0x2400944
    static void MontgomeryTrick(::ArrayW<Org::BouncyCastle::Math::EC::ECFieldElement*> zs, int off, int len, Org::BouncyCastle::Math::EC::ECFieldElement* scale);
    // static public Org.BouncyCastle.Math.EC.ECPoint ReferenceMultiply(Org.BouncyCastle.Math.EC.ECPoint p, Org.BouncyCastle.Math.BigInteger k)
    // Offset: 0x2400C08
    static Org::BouncyCastle::Math::EC::ECPoint* ReferenceMultiply(Org::BouncyCastle::Math::EC::ECPoint* p, Org::BouncyCastle::Math::BigInteger* k);
    // static public Org.BouncyCastle.Math.EC.ECPoint CleanPoint(Org.BouncyCastle.Math.EC.ECCurve c, Org.BouncyCastle.Math.EC.ECPoint p)
    // Offset: 0x2400D4C
    static Org::BouncyCastle::Math::EC::ECPoint* CleanPoint(Org::BouncyCastle::Math::EC::ECCurve* c, Org::BouncyCastle::Math::EC::ECPoint* p);
    // static Org.BouncyCastle.Math.EC.ECPoint ImplCheckResult(Org.BouncyCastle.Math.EC.ECPoint p)
    // Offset: 0x2400E44
    static Org::BouncyCastle::Math::EC::ECPoint* ImplCheckResult(Org::BouncyCastle::Math::EC::ECPoint* p);
    // static Org.BouncyCastle.Math.EC.ECPoint ImplShamirsTrickWNaf(Org.BouncyCastle.Math.EC.ECPoint P, Org.BouncyCastle.Math.BigInteger k, Org.BouncyCastle.Math.EC.ECPoint Q, Org.BouncyCastle.Math.BigInteger l)
    // Offset: 0x2400EEC
    static Org::BouncyCastle::Math::EC::ECPoint* ImplShamirsTrickWNaf(Org::BouncyCastle::Math::EC::ECPoint* P, Org::BouncyCastle::Math::BigInteger* k, Org::BouncyCastle::Math::EC::ECPoint* Q, Org::BouncyCastle::Math::BigInteger* l);
    // static Org.BouncyCastle.Math.EC.ECPoint ImplShamirsTrickWNaf(Org.BouncyCastle.Math.EC.Endo.ECEndomorphism endomorphism, Org.BouncyCastle.Math.EC.ECPoint P, Org.BouncyCastle.Math.BigInteger k, Org.BouncyCastle.Math.BigInteger l)
    // Offset: 0x24019F0
    static Org::BouncyCastle::Math::EC::ECPoint* ImplShamirsTrickWNaf(Org::BouncyCastle::Math::EC::Endo::ECEndomorphism* endomorphism, Org::BouncyCastle::Math::EC::ECPoint* P, Org::BouncyCastle::Math::BigInteger* k, Org::BouncyCastle::Math::BigInteger* l);
    // static private Org.BouncyCastle.Math.EC.ECPoint ImplShamirsTrickWNaf(Org.BouncyCastle.Math.EC.ECPoint[] preCompP, Org.BouncyCastle.Math.EC.ECPoint[] preCompNegP, System.Byte[] wnafP, Org.BouncyCastle.Math.EC.ECPoint[] preCompQ, Org.BouncyCastle.Math.EC.ECPoint[] preCompNegQ, System.Byte[] wnafQ)
    // Offset: 0x2401710
    static Org::BouncyCastle::Math::EC::ECPoint* ImplShamirsTrickWNaf(::ArrayW<Org::BouncyCastle::Math::EC::ECPoint*> preCompP, ::ArrayW<Org::BouncyCastle::Math::EC::ECPoint*> preCompNegP, ::ArrayW<uint8_t> wnafP, ::ArrayW<Org::BouncyCastle::Math::EC::ECPoint*> preCompQ, ::ArrayW<Org::BouncyCastle::Math::EC::ECPoint*> preCompNegQ, ::ArrayW<uint8_t> wnafQ);
    // static private Org.BouncyCastle.Math.EC.ECPoint ImplShamirsTrickFixedPoint(Org.BouncyCastle.Math.EC.ECPoint p, Org.BouncyCastle.Math.BigInteger k, Org.BouncyCastle.Math.EC.ECPoint q, Org.BouncyCastle.Math.BigInteger l)
    // Offset: 0x240126C
    static Org::BouncyCastle::Math::EC::ECPoint* ImplShamirsTrickFixedPoint(Org::BouncyCastle::Math::EC::ECPoint* p, Org::BouncyCastle::Math::BigInteger* k, Org::BouncyCastle::Math::EC::ECPoint* q, Org::BouncyCastle::Math::BigInteger* l);
  }; // Org.BouncyCastle.Math.EC.ECAlgorithms
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::ECAlgorithms::IsF2mCurve
// Il2CppName: IsF2mCurve
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(Org::BouncyCastle::Math::EC::ECCurve*)>(&Org::BouncyCastle::Math::EC::ECAlgorithms::IsF2mCurve)> {
  static const MethodInfo* get() {
    static auto* c = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math.EC", "ECCurve")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::ECAlgorithms*), "IsF2mCurve", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{c});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::ECAlgorithms::IsF2mField
// Il2CppName: IsF2mField
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(Org::BouncyCastle::Math::Field::IFiniteField*)>(&Org::BouncyCastle::Math::EC::ECAlgorithms::IsF2mField)> {
  static const MethodInfo* get() {
    static auto* field = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math.Field", "IFiniteField")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::ECAlgorithms*), "IsF2mField", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{field});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::ECAlgorithms::IsFpCurve
// Il2CppName: IsFpCurve
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(Org::BouncyCastle::Math::EC::ECCurve*)>(&Org::BouncyCastle::Math::EC::ECAlgorithms::IsFpCurve)> {
  static const MethodInfo* get() {
    static auto* c = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math.EC", "ECCurve")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::ECAlgorithms*), "IsFpCurve", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{c});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::ECAlgorithms::IsFpField
// Il2CppName: IsFpField
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(Org::BouncyCastle::Math::Field::IFiniteField*)>(&Org::BouncyCastle::Math::EC::ECAlgorithms::IsFpField)> {
  static const MethodInfo* get() {
    static auto* field = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math.Field", "IFiniteField")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::ECAlgorithms*), "IsFpField", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{field});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::ECAlgorithms::ImportPoint
// Il2CppName: ImportPoint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::ECPoint* (*)(Org::BouncyCastle::Math::EC::ECCurve*, Org::BouncyCastle::Math::EC::ECPoint*)>(&Org::BouncyCastle::Math::EC::ECAlgorithms::ImportPoint)> {
  static const MethodInfo* get() {
    static auto* c = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math.EC", "ECCurve")->byval_arg;
    static auto* p = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math.EC", "ECPoint")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::ECAlgorithms*), "ImportPoint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{c, p});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::ECAlgorithms::MontgomeryTrick
// Il2CppName: MontgomeryTrick
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<Org::BouncyCastle::Math::EC::ECFieldElement*>, int, int, Org::BouncyCastle::Math::EC::ECFieldElement*)>(&Org::BouncyCastle::Math::EC::ECAlgorithms::MontgomeryTrick)> {
  static const MethodInfo* get() {
    static auto* zs = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math.EC", "ECFieldElement"), 1)->byval_arg;
    static auto* off = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* len = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* scale = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math.EC", "ECFieldElement")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::ECAlgorithms*), "MontgomeryTrick", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{zs, off, len, scale});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::ECAlgorithms::ReferenceMultiply
// Il2CppName: ReferenceMultiply
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::ECPoint* (*)(Org::BouncyCastle::Math::EC::ECPoint*, Org::BouncyCastle::Math::BigInteger*)>(&Org::BouncyCastle::Math::EC::ECAlgorithms::ReferenceMultiply)> {
  static const MethodInfo* get() {
    static auto* p = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math.EC", "ECPoint")->byval_arg;
    static auto* k = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math", "BigInteger")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::ECAlgorithms*), "ReferenceMultiply", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{p, k});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::ECAlgorithms::CleanPoint
// Il2CppName: CleanPoint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::ECPoint* (*)(Org::BouncyCastle::Math::EC::ECCurve*, Org::BouncyCastle::Math::EC::ECPoint*)>(&Org::BouncyCastle::Math::EC::ECAlgorithms::CleanPoint)> {
  static const MethodInfo* get() {
    static auto* c = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math.EC", "ECCurve")->byval_arg;
    static auto* p = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math.EC", "ECPoint")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::ECAlgorithms*), "CleanPoint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{c, p});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::ECAlgorithms::ImplCheckResult
// Il2CppName: ImplCheckResult
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::ECPoint* (*)(Org::BouncyCastle::Math::EC::ECPoint*)>(&Org::BouncyCastle::Math::EC::ECAlgorithms::ImplCheckResult)> {
  static const MethodInfo* get() {
    static auto* p = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math.EC", "ECPoint")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::ECAlgorithms*), "ImplCheckResult", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{p});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::ECAlgorithms::ImplShamirsTrickWNaf
// Il2CppName: ImplShamirsTrickWNaf
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::ECPoint* (*)(Org::BouncyCastle::Math::EC::ECPoint*, Org::BouncyCastle::Math::BigInteger*, Org::BouncyCastle::Math::EC::ECPoint*, Org::BouncyCastle::Math::BigInteger*)>(&Org::BouncyCastle::Math::EC::ECAlgorithms::ImplShamirsTrickWNaf)> {
  static const MethodInfo* get() {
    static auto* P = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math.EC", "ECPoint")->byval_arg;
    static auto* k = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math", "BigInteger")->byval_arg;
    static auto* Q = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math.EC", "ECPoint")->byval_arg;
    static auto* l = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math", "BigInteger")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::ECAlgorithms*), "ImplShamirsTrickWNaf", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{P, k, Q, l});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::ECAlgorithms::ImplShamirsTrickWNaf
// Il2CppName: ImplShamirsTrickWNaf
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::ECPoint* (*)(Org::BouncyCastle::Math::EC::Endo::ECEndomorphism*, Org::BouncyCastle::Math::EC::ECPoint*, Org::BouncyCastle::Math::BigInteger*, Org::BouncyCastle::Math::BigInteger*)>(&Org::BouncyCastle::Math::EC::ECAlgorithms::ImplShamirsTrickWNaf)> {
  static const MethodInfo* get() {
    static auto* endomorphism = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math.EC.Endo", "ECEndomorphism")->byval_arg;
    static auto* P = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math.EC", "ECPoint")->byval_arg;
    static auto* k = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math", "BigInteger")->byval_arg;
    static auto* l = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math", "BigInteger")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::ECAlgorithms*), "ImplShamirsTrickWNaf", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{endomorphism, P, k, l});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::ECAlgorithms::ImplShamirsTrickWNaf
// Il2CppName: ImplShamirsTrickWNaf
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::ECPoint* (*)(::ArrayW<Org::BouncyCastle::Math::EC::ECPoint*>, ::ArrayW<Org::BouncyCastle::Math::EC::ECPoint*>, ::ArrayW<uint8_t>, ::ArrayW<Org::BouncyCastle::Math::EC::ECPoint*>, ::ArrayW<Org::BouncyCastle::Math::EC::ECPoint*>, ::ArrayW<uint8_t>)>(&Org::BouncyCastle::Math::EC::ECAlgorithms::ImplShamirsTrickWNaf)> {
  static const MethodInfo* get() {
    static auto* preCompP = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math.EC", "ECPoint"), 1)->byval_arg;
    static auto* preCompNegP = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math.EC", "ECPoint"), 1)->byval_arg;
    static auto* wnafP = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* preCompQ = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math.EC", "ECPoint"), 1)->byval_arg;
    static auto* preCompNegQ = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math.EC", "ECPoint"), 1)->byval_arg;
    static auto* wnafQ = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::ECAlgorithms*), "ImplShamirsTrickWNaf", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{preCompP, preCompNegP, wnafP, preCompQ, preCompNegQ, wnafQ});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::ECAlgorithms::ImplShamirsTrickFixedPoint
// Il2CppName: ImplShamirsTrickFixedPoint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::ECPoint* (*)(Org::BouncyCastle::Math::EC::ECPoint*, Org::BouncyCastle::Math::BigInteger*, Org::BouncyCastle::Math::EC::ECPoint*, Org::BouncyCastle::Math::BigInteger*)>(&Org::BouncyCastle::Math::EC::ECAlgorithms::ImplShamirsTrickFixedPoint)> {
  static const MethodInfo* get() {
    static auto* p = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math.EC", "ECPoint")->byval_arg;
    static auto* k = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math", "BigInteger")->byval_arg;
    static auto* q = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math.EC", "ECPoint")->byval_arg;
    static auto* l = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math", "BigInteger")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::ECAlgorithms*), "ImplShamirsTrickFixedPoint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{p, k, q, l});
  }
};
