// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Math
namespace Org::BouncyCastle::Math {
  // Forward declaring type: BigInteger
  class BigInteger;
}
// Forward declaring namespace: Org::BouncyCastle::Security
namespace Org::BouncyCastle::Security {
  // Forward declaring type: SecureRandom
  class SecureRandom;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Math.EC.Custom.Djb
namespace Org::BouncyCastle::Math::EC::Custom::Djb {
  // Forward declaring type: Curve25519Field
  class Curve25519Field;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Field);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Field*, "Org.BouncyCastle.Math.EC.Custom.Djb", "Curve25519Field");
// Type namespace: Org.BouncyCastle.Math.EC.Custom.Djb
namespace Org::BouncyCastle::Math::EC::Custom::Djb {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Math.EC.Custom.Djb.Curve25519Field
  // [TokenAttribute] Offset: FFFFFFFF
  class Curve25519Field : public ::Il2CppObject {
    public:
    // Get static field: static readonly System.UInt32[] P
    static ::ArrayW<uint> _get_P();
    // Set static field: static readonly System.UInt32[] P
    static void _set_P(::ArrayW<uint> value);
    // Get static field: static private readonly System.UInt32[] PExt
    static ::ArrayW<uint> _get_PExt();
    // Set static field: static private readonly System.UInt32[] PExt
    static void _set_PExt(::ArrayW<uint> value);
    // static private System.Void .cctor()
    // Offset: 0x22C0318
    static void _cctor();
    // static public System.Void Add(System.UInt32[] x, System.UInt32[] y, System.UInt32[] z)
    // Offset: 0x22BF2A8
    static void Add(::ArrayW<uint> x, ::ArrayW<uint> y, ::ArrayW<uint> z);
    // static public System.Void AddOne(System.UInt32[] x, System.UInt32[] z)
    // Offset: 0x22BF3F4
    static void AddOne(::ArrayW<uint> x, ::ArrayW<uint> z);
    // static public System.UInt32[] FromBigInteger(Org.BouncyCastle.Math.BigInteger x)
    // Offset: 0x22BF4BC
    static ::ArrayW<uint> FromBigInteger(::Org::BouncyCastle::Math::BigInteger* x);
    // static public System.Void Inv(System.UInt32[] x, System.UInt32[] z)
    // Offset: 0x22BF580
    static void Inv(::ArrayW<uint> x, ::ArrayW<uint> z);
    // static public System.Int32 IsZero(System.UInt32[] x)
    // Offset: 0x22BF808
    static int IsZero(::ArrayW<uint> x);
    // static public System.Void Multiply(System.UInt32[] x, System.UInt32[] y, System.UInt32[] z)
    // Offset: 0x22BF8F8
    static void Multiply(::ArrayW<uint> x, ::ArrayW<uint> y, ::ArrayW<uint> z);
    // static public System.Void MultiplyAddToExt(System.UInt32[] x, System.UInt32[] y, System.UInt32[] zz)
    // Offset: 0x22BFBDC
    static void MultiplyAddToExt(::ArrayW<uint> x, ::ArrayW<uint> y, ::ArrayW<uint> zz);
    // static public System.Void Negate(System.UInt32[] x, System.UInt32[] z)
    // Offset: 0x22BFE34
    static void Negate(::ArrayW<uint> x, ::ArrayW<uint> z);
    // static public System.Void Random(Org.BouncyCastle.Security.SecureRandom r, System.UInt32[] z)
    // Offset: 0x22BFF08
    static void Random(::Org::BouncyCastle::Security::SecureRandom* r, ::ArrayW<uint> z);
    // static public System.Void RandomMult(Org.BouncyCastle.Security.SecureRandom r, System.UInt32[] z)
    // Offset: 0x22BECB8
    static void RandomMult(::Org::BouncyCastle::Security::SecureRandom* r, ::ArrayW<uint> z);
    // static public System.Void Reduce(System.UInt32[] xx, System.UInt32[] z)
    // Offset: 0x22BFA74
    static void Reduce(::ArrayW<uint> xx, ::ArrayW<uint> z);
    // static public System.Void Reduce27(System.UInt32 x, System.UInt32[] z)
    // Offset: 0x22C000C
    static void Reduce27(uint x, ::ArrayW<uint> z);
    // static public System.Void Square(System.UInt32[] x, System.UInt32[] z)
    // Offset: 0x22BF868
    static void Square(::ArrayW<uint> x, ::ArrayW<uint> z);
    // static public System.Void SquareN(System.UInt32[] x, System.Int32 n, System.UInt32[] z)
    // Offset: 0x22BF990
    static void SquareN(::ArrayW<uint> x, int n, ::ArrayW<uint> z);
    // static public System.Void Subtract(System.UInt32[] x, System.UInt32[] y, System.UInt32[] z)
    // Offset: 0x22C0124
    static void Subtract(::ArrayW<uint> x, ::ArrayW<uint> y, ::ArrayW<uint> z);
    // static public System.Void Twice(System.UInt32[] x, System.UInt32[] z)
    // Offset: 0x22C024C
    static void Twice(::ArrayW<uint> x, ::ArrayW<uint> z);
    // static private System.UInt32 AddPTo(System.UInt32[] z)
    // Offset: 0x22C01C0
    static uint AddPTo(::ArrayW<uint> z);
    // static private System.Int32 SubPFrom(System.UInt32[] z)
    // Offset: 0x22BF374
    static int SubPFrom(::ArrayW<uint> z);
    // static private System.Int32 SubPExtFrom(System.UInt32[] zz)
    // Offset: 0x22BFCAC
    static int SubPExtFrom(::ArrayW<uint> zz);
  }; // Org.BouncyCastle.Math.EC.Custom.Djb.Curve25519Field
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Field::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Field::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Field*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Field::Add
// Il2CppName: Add
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint>, ::ArrayW<uint>, ::ArrayW<uint>)>(&Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Field::Add)> {
  static const MethodInfo* get() {
    static auto* x = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt32"), 1)->byval_arg;
    static auto* y = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt32"), 1)->byval_arg;
    static auto* z = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt32"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Field*), "Add", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, y, z});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Field::AddOne
// Il2CppName: AddOne
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint>, ::ArrayW<uint>)>(&Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Field::AddOne)> {
  static const MethodInfo* get() {
    static auto* x = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt32"), 1)->byval_arg;
    static auto* z = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt32"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Field*), "AddOne", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, z});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Field::FromBigInteger
// Il2CppName: FromBigInteger
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint> (*)(::Org::BouncyCastle::Math::BigInteger*)>(&Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Field::FromBigInteger)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math", "BigInteger")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Field*), "FromBigInteger", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Field::Inv
// Il2CppName: Inv
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint>, ::ArrayW<uint>)>(&Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Field::Inv)> {
  static const MethodInfo* get() {
    static auto* x = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt32"), 1)->byval_arg;
    static auto* z = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt32"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Field*), "Inv", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, z});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Field::IsZero
// Il2CppName: IsZero
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::ArrayW<uint>)>(&Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Field::IsZero)> {
  static const MethodInfo* get() {
    static auto* x = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt32"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Field*), "IsZero", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Field::Multiply
// Il2CppName: Multiply
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint>, ::ArrayW<uint>, ::ArrayW<uint>)>(&Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Field::Multiply)> {
  static const MethodInfo* get() {
    static auto* x = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt32"), 1)->byval_arg;
    static auto* y = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt32"), 1)->byval_arg;
    static auto* z = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt32"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Field*), "Multiply", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, y, z});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Field::MultiplyAddToExt
// Il2CppName: MultiplyAddToExt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint>, ::ArrayW<uint>, ::ArrayW<uint>)>(&Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Field::MultiplyAddToExt)> {
  static const MethodInfo* get() {
    static auto* x = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt32"), 1)->byval_arg;
    static auto* y = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt32"), 1)->byval_arg;
    static auto* zz = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt32"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Field*), "MultiplyAddToExt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, y, zz});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Field::Negate
// Il2CppName: Negate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint>, ::ArrayW<uint>)>(&Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Field::Negate)> {
  static const MethodInfo* get() {
    static auto* x = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt32"), 1)->byval_arg;
    static auto* z = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt32"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Field*), "Negate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, z});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Field::Random
// Il2CppName: Random
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Org::BouncyCastle::Security::SecureRandom*, ::ArrayW<uint>)>(&Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Field::Random)> {
  static const MethodInfo* get() {
    static auto* r = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Security", "SecureRandom")->byval_arg;
    static auto* z = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt32"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Field*), "Random", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{r, z});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Field::RandomMult
// Il2CppName: RandomMult
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Org::BouncyCastle::Security::SecureRandom*, ::ArrayW<uint>)>(&Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Field::RandomMult)> {
  static const MethodInfo* get() {
    static auto* r = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Security", "SecureRandom")->byval_arg;
    static auto* z = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt32"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Field*), "RandomMult", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{r, z});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Field::Reduce
// Il2CppName: Reduce
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint>, ::ArrayW<uint>)>(&Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Field::Reduce)> {
  static const MethodInfo* get() {
    static auto* xx = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt32"), 1)->byval_arg;
    static auto* z = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt32"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Field*), "Reduce", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{xx, z});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Field::Reduce27
// Il2CppName: Reduce27
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(uint, ::ArrayW<uint>)>(&Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Field::Reduce27)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* z = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt32"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Field*), "Reduce27", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, z});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Field::Square
// Il2CppName: Square
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint>, ::ArrayW<uint>)>(&Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Field::Square)> {
  static const MethodInfo* get() {
    static auto* x = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt32"), 1)->byval_arg;
    static auto* z = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt32"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Field*), "Square", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, z});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Field::SquareN
// Il2CppName: SquareN
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint>, int, ::ArrayW<uint>)>(&Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Field::SquareN)> {
  static const MethodInfo* get() {
    static auto* x = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt32"), 1)->byval_arg;
    static auto* n = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* z = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt32"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Field*), "SquareN", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, n, z});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Field::Subtract
// Il2CppName: Subtract
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint>, ::ArrayW<uint>, ::ArrayW<uint>)>(&Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Field::Subtract)> {
  static const MethodInfo* get() {
    static auto* x = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt32"), 1)->byval_arg;
    static auto* y = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt32"), 1)->byval_arg;
    static auto* z = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt32"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Field*), "Subtract", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, y, z});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Field::Twice
// Il2CppName: Twice
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint>, ::ArrayW<uint>)>(&Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Field::Twice)> {
  static const MethodInfo* get() {
    static auto* x = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt32"), 1)->byval_arg;
    static auto* z = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt32"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Field*), "Twice", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, z});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Field::AddPTo
// Il2CppName: AddPTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (*)(::ArrayW<uint>)>(&Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Field::AddPTo)> {
  static const MethodInfo* get() {
    static auto* z = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt32"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Field*), "AddPTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{z});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Field::SubPFrom
// Il2CppName: SubPFrom
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::ArrayW<uint>)>(&Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Field::SubPFrom)> {
  static const MethodInfo* get() {
    static auto* z = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt32"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Field*), "SubPFrom", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{z});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Field::SubPExtFrom
// Il2CppName: SubPExtFrom
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::ArrayW<uint>)>(&Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Field::SubPExtFrom)> {
  static const MethodInfo* get() {
    static auto* zz = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt32"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Field*), "SubPExtFrom", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{zz});
  }
};
