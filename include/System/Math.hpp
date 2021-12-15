// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
// Including type: System.Double
#include "System/Double.hpp"
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Decimal
  struct Decimal;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Forward declaring type: Math
  class Math;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(System::Math);
DEFINE_IL2CPP_ARG_TYPE(System::Math*, "System", "Math");
// Type namespace: System
namespace System {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Math
  // [TokenAttribute] Offset: FFFFFFFF
  class Math : public ::Il2CppObject {
    public:
    // Get static field: static private System.Double doubleRoundLimit
    static double _get_doubleRoundLimit();
    // Set static field: static private System.Double doubleRoundLimit
    static void _set_doubleRoundLimit(double value);
    // static field const value: static private System.Int32 maxRoundingDigits
    static constexpr const int maxRoundingDigits = 15;
    // Get static field: static private System.Int32 maxRoundingDigits
    static int _get_maxRoundingDigits();
    // Set static field: static private System.Int32 maxRoundingDigits
    static void _set_maxRoundingDigits(int value);
    // Get static field: static private System.Double[] roundPower10Double
    static ::ArrayW<double> _get_roundPower10Double();
    // Set static field: static private System.Double[] roundPower10Double
    static void _set_roundPower10Double(::ArrayW<double> value);
    // static field const value: static public System.Double PI
    static constexpr const double PI = 3.141592653589793;
    // Get static field: static public System.Double PI
    static double _get_PI();
    // Set static field: static public System.Double PI
    static void _set_PI(double value);
    // static field const value: static public System.Double E
    static constexpr const double E = 2.718281828459045;
    // Get static field: static public System.Double E
    static double _get_E();
    // Set static field: static public System.Double E
    static void _set_E(double value);
    // static private System.Void .cctor()
    // Offset: 0x1A13780
    static void _cctor();
    // static public System.Double Acos(System.Double d)
    // Offset: 0x1A12FD0
    static double Acos(double d);
    // static public System.Double Asin(System.Double d)
    // Offset: 0x1A12FD4
    static double Asin(double d);
    // static public System.Double Atan(System.Double d)
    // Offset: 0x1A12FD8
    static double Atan(double d);
    // static public System.Double Atan2(System.Double y, System.Double x)
    // Offset: 0x1A12FDC
    static double Atan2(double y, double x);
    // static public System.Double Ceiling(System.Double a)
    // Offset: 0x1A12FE0
    static double Ceiling(double a);
    // static public System.Double Cos(System.Double d)
    // Offset: 0x1A12FE8
    static double Cos(double d);
    // static public System.Double Floor(System.Double d)
    // Offset: 0x1A12FEC
    static double Floor(double d);
    // static private System.Double InternalTruncate(System.Double d)
    // Offset: 0x1A12FF4
    static double InternalTruncate(double d);
    // static public System.Double Sin(System.Double a)
    // Offset: 0x1A13064
    static double Sin(double a);
    // static public System.Double Tan(System.Double a)
    // Offset: 0x1A13068
    static double Tan(double a);
    // static public System.Double Round(System.Double a)
    // Offset: 0x1A1306C
    static double Round(double a);
    // static private System.Double SplitFractionDouble(System.Double* value)
    // Offset: 0x1A13060
    static double SplitFractionDouble(double* value);
    // static public System.Double Truncate(System.Double d)
    // Offset: 0x1A130EC
    static double Truncate(double d);
    // static public System.Double Sqrt(System.Double d)
    // Offset: 0x1A13158
    static double Sqrt(double d);
    // static public System.Double Log(System.Double d)
    // Offset: 0x1A13170
    static double Log(double d);
    // static public System.Double Log10(System.Double d)
    // Offset: 0x1A13174
    static double Log10(double d);
    // static public System.Double Pow(System.Double x, System.Double y)
    // Offset: 0x1A13178
    static double Pow(double x, double y);
    // static public System.Int32 Abs(System.Int32 value)
    // Offset: 0x1A1317C
    static int Abs(int value);
    // static private System.Int32 AbsHelper(System.Int32 value)
    // Offset: 0x1A131F4
    static int AbsHelper(int value);
    // static public System.Int64 Abs(System.Int64 value)
    // Offset: 0x1A13294
    static int64_t Abs(int64_t value);
    // static private System.Int64 AbsHelper(System.Int64 value)
    // Offset: 0x1A1330C
    static int64_t AbsHelper(int64_t value);
    // static public System.Single Abs(System.Single value)
    // Offset: 0x1A133AC
    static float Abs(float value);
    // static public System.Double Abs(System.Double value)
    // Offset: 0x1A133B4
    static double Abs(double value);
    // static public System.Decimal Abs(System.Decimal value)
    // Offset: 0x1A133BC
    static System::Decimal Abs(System::Decimal value);
    // static public System.Int32 Max(System.Int32 val1, System.Int32 val2)
    // Offset: 0x1A13434
    static int Max(int val1, int val2);
    // static public System.UInt32 Max(System.UInt32 val1, System.UInt32 val2)
    // Offset: 0x1A13440
    static uint Max(uint val1, uint val2);
    // static public System.Int64 Max(System.Int64 val1, System.Int64 val2)
    // Offset: 0x1A1344C
    static int64_t Max(int64_t val1, int64_t val2);
    // static public System.UInt64 Max(System.UInt64 val1, System.UInt64 val2)
    // Offset: 0x1A13458
    static uint64_t Max(uint64_t val1, uint64_t val2);
    // static public System.Single Max(System.Single val1, System.Single val2)
    // Offset: 0x1A13464
    static float Max(float val1, float val2);
    // static public System.Double Max(System.Double val1, System.Double val2)
    // Offset: 0x1A134A8
    static double Max(double val1, double val2);
    // static public System.Int32 Min(System.Int32 val1, System.Int32 val2)
    // Offset: 0x1A13538
    static int Min(int val1, int val2);
    // static public System.UInt32 Min(System.UInt32 val1, System.UInt32 val2)
    // Offset: 0x1A13544
    static uint Min(uint val1, uint val2);
    // static public System.Int64 Min(System.Int64 val1, System.Int64 val2)
    // Offset: 0x1A13550
    static int64_t Min(int64_t val1, int64_t val2);
    // static public System.UInt64 Min(System.UInt64 val1, System.UInt64 val2)
    // Offset: 0x1A1355C
    static uint64_t Min(uint64_t val1, uint64_t val2);
    // static public System.Single Min(System.Single val1, System.Single val2)
    // Offset: 0x1A13568
    static float Min(float val1, float val2);
    // static public System.Double Min(System.Double val1, System.Double val2)
    // Offset: 0x1A135AC
    static double Min(double val1, double val2);
    // static public System.Double Log(System.Double a, System.Double newBase)
    // Offset: 0x1A1363C
    static double Log(double a, double newBase);
  }; // System.Math
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Math::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Math::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Math*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Math::Acos
// Il2CppName: Acos
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double (*)(double)>(&System::Math::Acos)> {
  static const MethodInfo* get() {
    static auto* d = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Math*), "Acos", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{d});
  }
};
// Writing MetadataGetter for method: System::Math::Asin
// Il2CppName: Asin
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double (*)(double)>(&System::Math::Asin)> {
  static const MethodInfo* get() {
    static auto* d = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Math*), "Asin", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{d});
  }
};
// Writing MetadataGetter for method: System::Math::Atan
// Il2CppName: Atan
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double (*)(double)>(&System::Math::Atan)> {
  static const MethodInfo* get() {
    static auto* d = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Math*), "Atan", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{d});
  }
};
// Writing MetadataGetter for method: System::Math::Atan2
// Il2CppName: Atan2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double (*)(double, double)>(&System::Math::Atan2)> {
  static const MethodInfo* get() {
    static auto* y = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Math*), "Atan2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{y, x});
  }
};
// Writing MetadataGetter for method: System::Math::Ceiling
// Il2CppName: Ceiling
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double (*)(double)>(&System::Math::Ceiling)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Math*), "Ceiling", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a});
  }
};
// Writing MetadataGetter for method: System::Math::Cos
// Il2CppName: Cos
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double (*)(double)>(&System::Math::Cos)> {
  static const MethodInfo* get() {
    static auto* d = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Math*), "Cos", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{d});
  }
};
// Writing MetadataGetter for method: System::Math::Floor
// Il2CppName: Floor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double (*)(double)>(&System::Math::Floor)> {
  static const MethodInfo* get() {
    static auto* d = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Math*), "Floor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{d});
  }
};
// Writing MetadataGetter for method: System::Math::InternalTruncate
// Il2CppName: InternalTruncate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double (*)(double)>(&System::Math::InternalTruncate)> {
  static const MethodInfo* get() {
    static auto* d = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Math*), "InternalTruncate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{d});
  }
};
// Writing MetadataGetter for method: System::Math::Sin
// Il2CppName: Sin
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double (*)(double)>(&System::Math::Sin)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Math*), "Sin", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a});
  }
};
// Writing MetadataGetter for method: System::Math::Tan
// Il2CppName: Tan
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double (*)(double)>(&System::Math::Tan)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Math*), "Tan", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a});
  }
};
// Writing MetadataGetter for method: System::Math::Round
// Il2CppName: Round
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double (*)(double)>(&System::Math::Round)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Math*), "Round", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a});
  }
};
// Writing MetadataGetter for method: System::Math::SplitFractionDouble
// Il2CppName: SplitFractionDouble
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double (*)(double*)>(&System::Math::SplitFractionDouble)> {
  static const MethodInfo* get() {
    static auto* value = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Double"))->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Math*), "SplitFractionDouble", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Math::Truncate
// Il2CppName: Truncate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double (*)(double)>(&System::Math::Truncate)> {
  static const MethodInfo* get() {
    static auto* d = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Math*), "Truncate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{d});
  }
};
// Writing MetadataGetter for method: System::Math::Sqrt
// Il2CppName: Sqrt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double (*)(double)>(&System::Math::Sqrt)> {
  static const MethodInfo* get() {
    static auto* d = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Math*), "Sqrt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{d});
  }
};
// Writing MetadataGetter for method: System::Math::Log
// Il2CppName: Log
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double (*)(double)>(&System::Math::Log)> {
  static const MethodInfo* get() {
    static auto* d = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Math*), "Log", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{d});
  }
};
// Writing MetadataGetter for method: System::Math::Log10
// Il2CppName: Log10
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double (*)(double)>(&System::Math::Log10)> {
  static const MethodInfo* get() {
    static auto* d = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Math*), "Log10", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{d});
  }
};
// Writing MetadataGetter for method: System::Math::Pow
// Il2CppName: Pow
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double (*)(double, double)>(&System::Math::Pow)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    static auto* y = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Math*), "Pow", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, y});
  }
};
// Writing MetadataGetter for method: System::Math::Abs
// Il2CppName: Abs
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(int)>(&System::Math::Abs)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Math*), "Abs", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Math::AbsHelper
// Il2CppName: AbsHelper
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(int)>(&System::Math::AbsHelper)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Math*), "AbsHelper", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Math::Abs
// Il2CppName: Abs
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (*)(int64_t)>(&System::Math::Abs)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Math*), "Abs", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Math::AbsHelper
// Il2CppName: AbsHelper
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (*)(int64_t)>(&System::Math::AbsHelper)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Math*), "AbsHelper", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Math::Abs
// Il2CppName: Abs
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(float)>(&System::Math::Abs)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Math*), "Abs", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Math::Abs
// Il2CppName: Abs
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double (*)(double)>(&System::Math::Abs)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Math*), "Abs", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Math::Abs
// Il2CppName: Abs
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Decimal (*)(System::Decimal)>(&System::Math::Abs)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Decimal")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Math*), "Abs", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Math::Max
// Il2CppName: Max
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(int, int)>(&System::Math::Max)> {
  static const MethodInfo* get() {
    static auto* val1 = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* val2 = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Math*), "Max", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{val1, val2});
  }
};
// Writing MetadataGetter for method: System::Math::Max
// Il2CppName: Max
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (*)(uint, uint)>(&System::Math::Max)> {
  static const MethodInfo* get() {
    static auto* val1 = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* val2 = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Math*), "Max", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{val1, val2});
  }
};
// Writing MetadataGetter for method: System::Math::Max
// Il2CppName: Max
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (*)(int64_t, int64_t)>(&System::Math::Max)> {
  static const MethodInfo* get() {
    static auto* val1 = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    static auto* val2 = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Math*), "Max", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{val1, val2});
  }
};
// Writing MetadataGetter for method: System::Math::Max
// Il2CppName: Max
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (*)(uint64_t, uint64_t)>(&System::Math::Max)> {
  static const MethodInfo* get() {
    static auto* val1 = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* val2 = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Math*), "Max", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{val1, val2});
  }
};
// Writing MetadataGetter for method: System::Math::Max
// Il2CppName: Max
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(float, float)>(&System::Math::Max)> {
  static const MethodInfo* get() {
    static auto* val1 = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* val2 = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Math*), "Max", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{val1, val2});
  }
};
// Writing MetadataGetter for method: System::Math::Max
// Il2CppName: Max
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double (*)(double, double)>(&System::Math::Max)> {
  static const MethodInfo* get() {
    static auto* val1 = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    static auto* val2 = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Math*), "Max", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{val1, val2});
  }
};
// Writing MetadataGetter for method: System::Math::Min
// Il2CppName: Min
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(int, int)>(&System::Math::Min)> {
  static const MethodInfo* get() {
    static auto* val1 = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* val2 = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Math*), "Min", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{val1, val2});
  }
};
// Writing MetadataGetter for method: System::Math::Min
// Il2CppName: Min
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (*)(uint, uint)>(&System::Math::Min)> {
  static const MethodInfo* get() {
    static auto* val1 = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* val2 = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Math*), "Min", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{val1, val2});
  }
};
// Writing MetadataGetter for method: System::Math::Min
// Il2CppName: Min
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (*)(int64_t, int64_t)>(&System::Math::Min)> {
  static const MethodInfo* get() {
    static auto* val1 = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    static auto* val2 = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Math*), "Min", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{val1, val2});
  }
};
// Writing MetadataGetter for method: System::Math::Min
// Il2CppName: Min
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (*)(uint64_t, uint64_t)>(&System::Math::Min)> {
  static const MethodInfo* get() {
    static auto* val1 = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* val2 = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Math*), "Min", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{val1, val2});
  }
};
// Writing MetadataGetter for method: System::Math::Min
// Il2CppName: Min
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(float, float)>(&System::Math::Min)> {
  static const MethodInfo* get() {
    static auto* val1 = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* val2 = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Math*), "Min", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{val1, val2});
  }
};
// Writing MetadataGetter for method: System::Math::Min
// Il2CppName: Min
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double (*)(double, double)>(&System::Math::Min)> {
  static const MethodInfo* get() {
    static auto* val1 = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    static auto* val2 = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Math*), "Min", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{val1, val2});
  }
};
// Writing MetadataGetter for method: System::Math::Log
// Il2CppName: Log
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double (*)(double, double)>(&System::Math::Log)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    static auto* newBase = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Math*), "Log", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, newBase});
  }
};
