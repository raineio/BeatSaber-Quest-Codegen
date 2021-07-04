// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Math
namespace Org::BouncyCastle::Math {
  // Forward declaring type: BigInteger
  class BigInteger;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Math.EC.Custom.Sec
namespace Org::BouncyCastle::Math::EC::Custom::Sec {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Math.EC.Custom.Sec.SecT233Field
  class SecT233Field : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: SecT233Field
    SecT233Field() noexcept {}
    // static public System.Void Add(System.UInt64[] x, System.UInt64[] y, System.UInt64[] z)
    // Offset: 0x1E9C790
    static void Add(::Array<uint64_t>* x, ::Array<uint64_t>* y, ::Array<uint64_t>* z);
    // static public System.Void AddExt(System.UInt64[] xx, System.UInt64[] yy, System.UInt64[] zz)
    // Offset: 0x1E9C874
    static void AddExt(::Array<uint64_t>* xx, ::Array<uint64_t>* yy, ::Array<uint64_t>* zz);
    // static public System.Void AddOne(System.UInt64[] x, System.UInt64[] z)
    // Offset: 0x1E9CA18
    static void AddOne(::Array<uint64_t>* x, ::Array<uint64_t>* z);
    // static private System.Void AddTo(System.UInt64[] x, System.UInt64[] z)
    // Offset: 0x1E9CAB0
    static void AddTo(::Array<uint64_t>* x, ::Array<uint64_t>* z);
    // static public System.UInt64[] FromBigInteger(Org.BouncyCastle.Math.BigInteger x)
    // Offset: 0x1E9CB64
    static ::Array<uint64_t>* FromBigInteger(Org::BouncyCastle::Math::BigInteger* x);
    // static public System.Void HalfTrace(System.UInt64[] x, System.UInt64[] z)
    // Offset: 0x1E9CB74
    static void HalfTrace(::Array<uint64_t>* x, ::Array<uint64_t>* z);
    // static public System.Void Invert(System.UInt64[] x, System.UInt64[] z)
    // Offset: 0x1E9CDB8
    static void Invert(::Array<uint64_t>* x, ::Array<uint64_t>* z);
    // static public System.Void Multiply(System.UInt64[] x, System.UInt64[] y, System.UInt64[] z)
    // Offset: 0x1E9CFDC
    static void Multiply(::Array<uint64_t>* x, ::Array<uint64_t>* y, ::Array<uint64_t>* z);
    // static public System.Void MultiplyAddToExt(System.UInt64[] x, System.UInt64[] y, System.UInt64[] zz)
    // Offset: 0x1E9D434
    static void MultiplyAddToExt(::Array<uint64_t>* x, ::Array<uint64_t>* y, ::Array<uint64_t>* zz);
    // static public System.Void Reduce(System.UInt64[] xx, System.UInt64[] z)
    // Offset: 0x1E9CCAC
    static void Reduce(::Array<uint64_t>* xx, ::Array<uint64_t>* z);
    // static public System.Void Sqrt(System.UInt64[] x, System.UInt64[] z)
    // Offset: 0x1E9D488
    static void Sqrt(::Array<uint64_t>* x, ::Array<uint64_t>* z);
    // static public System.Void Square(System.UInt64[] x, System.UInt64[] z)
    // Offset: 0x1E9CF94
    static void Square(::Array<uint64_t>* x, ::Array<uint64_t>* z);
    // static public System.Void SquareAddToExt(System.UInt64[] x, System.UInt64[] zz)
    // Offset: 0x1E9D6EC
    static void SquareAddToExt(::Array<uint64_t>* x, ::Array<uint64_t>* zz);
    // static public System.Void SquareN(System.UInt64[] x, System.Int32 n, System.UInt64[] z)
    // Offset: 0x1E9D02C
    static void SquareN(::Array<uint64_t>* x, int n, ::Array<uint64_t>* z);
    // static public System.UInt32 Trace(System.UInt64[] x)
    // Offset: 0x1E9D738
    static uint Trace(::Array<uint64_t>* x);
    // static protected System.Void ImplCompactExt(System.UInt64[] zz)
    // Offset: 0x1E9D77C
    static void ImplCompactExt(::Array<uint64_t>* zz);
    // static protected System.Void ImplExpand(System.UInt64[] x, System.UInt64[] z)
    // Offset: 0x1E9D83C
    static void ImplExpand(::Array<uint64_t>* x, ::Array<uint64_t>* z);
    // static protected System.Void ImplMultiply(System.UInt64[] x, System.UInt64[] y, System.UInt64[] zz)
    // Offset: 0x1E9D0AC
    static void ImplMultiply(::Array<uint64_t>* x, ::Array<uint64_t>* y, ::Array<uint64_t>* zz);
    // static protected System.Void ImplMulwAcc(System.UInt64 x, System.UInt64 y, System.UInt64[] z, System.Int32 zOff)
    // Offset: 0x1E9D8D4
    static void ImplMulwAcc(uint64_t x, uint64_t y, ::Array<uint64_t>* z, int zOff);
    // static protected System.Void ImplSquare(System.UInt64[] x, System.UInt64[] zz)
    // Offset: 0x1E9CC04
    static void ImplSquare(::Array<uint64_t>* x, ::Array<uint64_t>* zz);
  }; // Org.BouncyCastle.Math.EC.Custom.Sec.SecT233Field
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::EC::Custom::Sec::SecT233Field*, "Org.BouncyCastle.Math.EC.Custom.Sec", "SecT233Field");
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecT233Field::Add
// Il2CppName: Add
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Array<uint64_t>*, ::Array<uint64_t>*, ::Array<uint64_t>*)>(&Org::BouncyCastle::Math::EC::Custom::Sec::SecT233Field::Add)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Custom::Sec::SecT233Field*), "Add", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<uint64_t>*>(), ::il2cpp_utils::ExtractIndependentType<::Array<uint64_t>*>(), ::il2cpp_utils::ExtractIndependentType<::Array<uint64_t>*>()});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecT233Field::AddExt
// Il2CppName: AddExt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Array<uint64_t>*, ::Array<uint64_t>*, ::Array<uint64_t>*)>(&Org::BouncyCastle::Math::EC::Custom::Sec::SecT233Field::AddExt)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Custom::Sec::SecT233Field*), "AddExt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<uint64_t>*>(), ::il2cpp_utils::ExtractIndependentType<::Array<uint64_t>*>(), ::il2cpp_utils::ExtractIndependentType<::Array<uint64_t>*>()});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecT233Field::AddOne
// Il2CppName: AddOne
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Array<uint64_t>*, ::Array<uint64_t>*)>(&Org::BouncyCastle::Math::EC::Custom::Sec::SecT233Field::AddOne)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Custom::Sec::SecT233Field*), "AddOne", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<uint64_t>*>(), ::il2cpp_utils::ExtractIndependentType<::Array<uint64_t>*>()});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecT233Field::AddTo
// Il2CppName: AddTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Array<uint64_t>*, ::Array<uint64_t>*)>(&Org::BouncyCastle::Math::EC::Custom::Sec::SecT233Field::AddTo)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Custom::Sec::SecT233Field*), "AddTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<uint64_t>*>(), ::il2cpp_utils::ExtractIndependentType<::Array<uint64_t>*>()});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecT233Field::FromBigInteger
// Il2CppName: FromBigInteger
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<uint64_t>* (*)(Org::BouncyCastle::Math::BigInteger*)>(&Org::BouncyCastle::Math::EC::Custom::Sec::SecT233Field::FromBigInteger)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Custom::Sec::SecT233Field*), "FromBigInteger", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<Org::BouncyCastle::Math::BigInteger*>()});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecT233Field::HalfTrace
// Il2CppName: HalfTrace
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Array<uint64_t>*, ::Array<uint64_t>*)>(&Org::BouncyCastle::Math::EC::Custom::Sec::SecT233Field::HalfTrace)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Custom::Sec::SecT233Field*), "HalfTrace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<uint64_t>*>(), ::il2cpp_utils::ExtractIndependentType<::Array<uint64_t>*>()});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecT233Field::Invert
// Il2CppName: Invert
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Array<uint64_t>*, ::Array<uint64_t>*)>(&Org::BouncyCastle::Math::EC::Custom::Sec::SecT233Field::Invert)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Custom::Sec::SecT233Field*), "Invert", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<uint64_t>*>(), ::il2cpp_utils::ExtractIndependentType<::Array<uint64_t>*>()});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecT233Field::Multiply
// Il2CppName: Multiply
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Array<uint64_t>*, ::Array<uint64_t>*, ::Array<uint64_t>*)>(&Org::BouncyCastle::Math::EC::Custom::Sec::SecT233Field::Multiply)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Custom::Sec::SecT233Field*), "Multiply", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<uint64_t>*>(), ::il2cpp_utils::ExtractIndependentType<::Array<uint64_t>*>(), ::il2cpp_utils::ExtractIndependentType<::Array<uint64_t>*>()});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecT233Field::MultiplyAddToExt
// Il2CppName: MultiplyAddToExt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Array<uint64_t>*, ::Array<uint64_t>*, ::Array<uint64_t>*)>(&Org::BouncyCastle::Math::EC::Custom::Sec::SecT233Field::MultiplyAddToExt)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Custom::Sec::SecT233Field*), "MultiplyAddToExt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<uint64_t>*>(), ::il2cpp_utils::ExtractIndependentType<::Array<uint64_t>*>(), ::il2cpp_utils::ExtractIndependentType<::Array<uint64_t>*>()});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecT233Field::Reduce
// Il2CppName: Reduce
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Array<uint64_t>*, ::Array<uint64_t>*)>(&Org::BouncyCastle::Math::EC::Custom::Sec::SecT233Field::Reduce)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Custom::Sec::SecT233Field*), "Reduce", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<uint64_t>*>(), ::il2cpp_utils::ExtractIndependentType<::Array<uint64_t>*>()});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecT233Field::Sqrt
// Il2CppName: Sqrt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Array<uint64_t>*, ::Array<uint64_t>*)>(&Org::BouncyCastle::Math::EC::Custom::Sec::SecT233Field::Sqrt)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Custom::Sec::SecT233Field*), "Sqrt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<uint64_t>*>(), ::il2cpp_utils::ExtractIndependentType<::Array<uint64_t>*>()});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecT233Field::Square
// Il2CppName: Square
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Array<uint64_t>*, ::Array<uint64_t>*)>(&Org::BouncyCastle::Math::EC::Custom::Sec::SecT233Field::Square)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Custom::Sec::SecT233Field*), "Square", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<uint64_t>*>(), ::il2cpp_utils::ExtractIndependentType<::Array<uint64_t>*>()});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecT233Field::SquareAddToExt
// Il2CppName: SquareAddToExt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Array<uint64_t>*, ::Array<uint64_t>*)>(&Org::BouncyCastle::Math::EC::Custom::Sec::SecT233Field::SquareAddToExt)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Custom::Sec::SecT233Field*), "SquareAddToExt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<uint64_t>*>(), ::il2cpp_utils::ExtractIndependentType<::Array<uint64_t>*>()});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecT233Field::SquareN
// Il2CppName: SquareN
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Array<uint64_t>*, int, ::Array<uint64_t>*)>(&Org::BouncyCastle::Math::EC::Custom::Sec::SecT233Field::SquareN)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Custom::Sec::SecT233Field*), "SquareN", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<uint64_t>*>(), ::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<::Array<uint64_t>*>()});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecT233Field::Trace
// Il2CppName: Trace
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (*)(::Array<uint64_t>*)>(&Org::BouncyCastle::Math::EC::Custom::Sec::SecT233Field::Trace)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Custom::Sec::SecT233Field*), "Trace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<uint64_t>*>()});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecT233Field::ImplCompactExt
// Il2CppName: ImplCompactExt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Array<uint64_t>*)>(&Org::BouncyCastle::Math::EC::Custom::Sec::SecT233Field::ImplCompactExt)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Custom::Sec::SecT233Field*), "ImplCompactExt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<uint64_t>*>()});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecT233Field::ImplExpand
// Il2CppName: ImplExpand
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Array<uint64_t>*, ::Array<uint64_t>*)>(&Org::BouncyCastle::Math::EC::Custom::Sec::SecT233Field::ImplExpand)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Custom::Sec::SecT233Field*), "ImplExpand", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<uint64_t>*>(), ::il2cpp_utils::ExtractIndependentType<::Array<uint64_t>*>()});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecT233Field::ImplMultiply
// Il2CppName: ImplMultiply
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Array<uint64_t>*, ::Array<uint64_t>*, ::Array<uint64_t>*)>(&Org::BouncyCastle::Math::EC::Custom::Sec::SecT233Field::ImplMultiply)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Custom::Sec::SecT233Field*), "ImplMultiply", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<uint64_t>*>(), ::il2cpp_utils::ExtractIndependentType<::Array<uint64_t>*>(), ::il2cpp_utils::ExtractIndependentType<::Array<uint64_t>*>()});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecT233Field::ImplMulwAcc
// Il2CppName: ImplMulwAcc
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(uint64_t, uint64_t, ::Array<uint64_t>*, int)>(&Org::BouncyCastle::Math::EC::Custom::Sec::SecT233Field::ImplMulwAcc)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Custom::Sec::SecT233Field*), "ImplMulwAcc", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<uint64_t>(), ::il2cpp_utils::ExtractIndependentType<uint64_t>(), ::il2cpp_utils::ExtractIndependentType<::Array<uint64_t>*>(), ::il2cpp_utils::ExtractIndependentType<int>()});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecT233Field::ImplSquare
// Il2CppName: ImplSquare
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Array<uint64_t>*, ::Array<uint64_t>*)>(&Org::BouncyCastle::Math::EC::Custom::Sec::SecT233Field::ImplSquare)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Custom::Sec::SecT233Field*), "ImplSquare", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<uint64_t>*>(), ::il2cpp_utils::ExtractIndependentType<::Array<uint64_t>*>()});
  }
};
